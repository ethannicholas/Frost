#include "org/pandalanguage/pandac/expression/Call.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/IR/Statement.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/MethodDecl/GenericParameter.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Method.h"
#include "panda/core/Immutable.h"
#include "panda/core/MutableMethod.h"
#include "panda/io/Console.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/collections/Stack.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "panda/core/Formattable.h"
#include "org/pandalanguage/pandac/Compiler/EnclosingContext.h"
#include "org/pandalanguage/pandac/IR/Block.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "org/pandalanguage/pandac/Scanner.h"
#include "org/pandalanguage/pandac/ChoiceCase.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "org/pandalanguage/pandac/Variable.h"


static panda$core$String $s1;
org$pandalanguage$pandac$expression$Call$class_type org$pandalanguage$pandac$expression$Call$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$expression$Call$cleanup} };

typedef panda$core$Bit (*$fn47)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn62)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn85)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn109)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Object* (*$fn126)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn145)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn170)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn195)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Object* (*$fn216)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn229)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Object* (*$fn252)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn274)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Object* (*$fn296)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn306)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn332)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn342)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn349)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn357)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Int64 (*$fn386)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn409)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn433)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn445)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Int64 (*$fn491)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn500)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn522)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn546)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Int64 (*$fn763)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn772)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn795)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn819)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Int64 (*$fn884)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn916)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn968)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn972)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn977)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1017)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1021)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1026)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn1047)(org$pandalanguage$pandac$MethodDecl$GenericParameter*);
typedef panda$collections$Array* (*$fn1051)(panda$collections$CollectionView*, panda$core$MutableMethod*);
typedef panda$core$Int64 (*$fn1061)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1095)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1099)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1104)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1110)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1121)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn1156)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1172)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1227)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1237)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1241)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1246)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1254)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1258)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn1274)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn1286)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1315)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1349)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1372)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1488)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn1503)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn1522)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1547)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn1556)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1568)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1574)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1597)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1641)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1648)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn1664)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1705)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1716)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1742)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1752)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1769)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1773)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1778)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1783)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1796)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1801)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1818)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1833)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1840)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1845)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1926)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1941)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1948)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1953)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1962)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn2034)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn2051)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn2131)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn2148)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2235)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2258)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2270)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2274)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2279)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2330)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2336)(org$pandalanguage$pandac$Compiler$TypeContext*);
typedef panda$core$Int64 (*$fn2370)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2394)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2407)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2411)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2416)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2468)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2474)(org$pandalanguage$pandac$Compiler$TypeContext*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2567)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Bit (*$fn2622)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2666)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2688)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2737)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2752)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2781)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn2790)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2901)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn3017)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn3027)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3050)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn3073)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn3085)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3157)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn3179)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn3187)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn3199)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn3211)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn3222)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Bit (*$fn3229)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3258)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3267)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3305)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn3324)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn3410)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn3430)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn3489)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c", 40, 7323815419836727496, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63\x3a\x20", 31, 5572221770796053896, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x50\x6f\x69\x6e\x74\x65\x72\x49\x6e\x74\x72\x69\x6e\x73\x69\x63\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x6d\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2c\x20\x61\x72\x67\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 414, -6506112832092576926, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x65\x3a\x20\x63\x61\x6e\x27\x74\x20\x63\x6f\x65\x72\x63\x65\x20", 19, -4455047110793792445, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x6f\x20", 4, 138224592, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s1531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 16, 4303665098026904440, NULL };
static panda$core$String $s1533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 5549333425848529514, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s1553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72", 7, 227281454102470, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74", 6, 2290904182948, NULL };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x77\x69\x74\x68\x20\x74\x61\x72\x67\x65\x74", 24, 8706842098394974193, NULL };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x74\x61\x72\x67\x65\x74", 27, -7788775699050637059, NULL };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x6d\x65\x72\x67\x65", 18, 706487662591854902, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 15, 8570243288273150570, NULL };
static panda$core$String $s2081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 15, 8570243288273150570, NULL };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20", 13, 6196784763812182974, NULL };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20", 13, 6196784763812182974, NULL };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x69\x74\x20\x66\x6f\x72\x20", 12, -9112629214783660015, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20", 12, 8187822430156838052, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s2605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s2606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x61\x72\x67\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 359, -5674773602257372163, NULL };
static panda$core$String $s2741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x69\x72\x65\x63\x74\x6c\x79\x20\x63\x61\x6c\x6c\x20\x27\x69\x6e\x69\x74\x27\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x6f\x6e\x20\x27\x73\x65\x6c\x66\x27\x20\x6f\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x73\x20", 9, 1451156555704250829, NULL };
static panda$core$String $s2773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s2795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x63\x6c\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6f\x6e\x20\x61\x6e\x20", 7, 142360281799925, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x73\x74\x61\x6e\x63\x65", 8, 22203976303606054, NULL };
static panda$core$String $s2888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s2920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s3314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };
static panda$core$String $s3405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static panda$core$String $s3549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s3581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x70\x61\x6e\x64\x61", 10, 333750279535832983, NULL };

org$pandalanguage$pandac$Pair* org$pandalanguage$pandac$expression$Call$compilePointerIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$MethodRef* param3, panda$collections$ListView* param4) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
org$pandalanguage$pandac$IR$Value* local2 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local3;
org$pandalanguage$pandac$IR$Value* local4 = NULL;
org$pandalanguage$pandac$IR$Value* local5 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local6;
org$pandalanguage$pandac$IR$Statement$ID local7;
org$pandalanguage$pandac$IR$Value* local8 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local9;
org$pandalanguage$pandac$IR$Value* local10 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local11;
org$pandalanguage$pandac$IR$Value* local12 = NULL;
org$pandalanguage$pandac$IR$Value* local13 = NULL;
panda$core$Bit local14;
org$pandalanguage$pandac$IR$Value* local15 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local16;
// line 24
org$pandalanguage$pandac$IR** $tmp2 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$IR* $tmp4 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 25
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
// line 26
org$pandalanguage$pandac$Type** $tmp5 = &param3->target;
org$pandalanguage$pandac$Type* $tmp6 = *$tmp5;
panda$core$Bit $tmp7 = org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit($tmp6);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block3;
block1:;
// line 27
org$pandalanguage$pandac$Type** $tmp9 = &param3->target;
org$pandalanguage$pandac$Type* $tmp10 = *$tmp9;
org$pandalanguage$pandac$FixedArray** $tmp11 = &$tmp10->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp12 = *$tmp11;
panda$core$Int64 $tmp13 = (panda$core$Int64) {1};
panda$core$Object* $tmp14 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp12, $tmp13);
org$pandalanguage$pandac$Type* $tmp15 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, ((org$pandalanguage$pandac$Type*) $tmp14));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
org$pandalanguage$pandac$Type* $tmp16 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
*(&local1) = $tmp15;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
// unreffing REF($28:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp14);
// unreffing REF($26:org.pandalanguage.pandac.FixedArray.T)
goto block2;
block3:;
// line 1
// line 30
org$pandalanguage$pandac$Type** $tmp17 = &param3->target;
org$pandalanguage$pandac$Type* $tmp18 = *$tmp17;
org$pandalanguage$pandac$FixedArray** $tmp19 = &$tmp18->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp20 = *$tmp19;
panda$core$Int64 $tmp21 = (panda$core$Int64) {1};
panda$core$Object* $tmp22 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp20, $tmp21);
org$pandalanguage$pandac$FixedArray** $tmp23 = &((org$pandalanguage$pandac$Type*) $tmp22)->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp24 = *$tmp23;
panda$core$Int64 $tmp25 = (panda$core$Int64) {1};
panda$core$Object* $tmp26 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp24, $tmp25);
org$pandalanguage$pandac$Type* $tmp27 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, ((org$pandalanguage$pandac$Type*) $tmp26));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
org$pandalanguage$pandac$Type* $tmp28 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
*(&local1) = $tmp27;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing REF($60:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp26);
// unreffing REF($58:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp22);
// unreffing REF($51:org.pandalanguage.pandac.FixedArray.T)
goto block2;
block2:;
// line 32
org$pandalanguage$pandac$Type* $tmp29 = *(&local1);
panda$core$Bit $tmp30 = panda$core$Bit$init$builtin_bit($tmp29 == NULL);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block4; else goto block5;
block4:;
// line 33
org$pandalanguage$pandac$Pair* $tmp32 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp33 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp34;
$tmp34 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp34->value = $tmp33;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp32, ((panda$core$Object*) $tmp34), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing REF($87:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing REF($84:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$Type* $tmp35 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp36 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp32;
block5:;
// line 35
org$pandalanguage$pandac$Type** $tmp37 = &param3->target;
org$pandalanguage$pandac$Type* $tmp38 = *$tmp37;
org$pandalanguage$pandac$Type$Kind* $tmp39 = &$tmp38->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp40 = *$tmp39;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp41;
$tmp41 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp41->value = $tmp40;
panda$core$Int64 $tmp42 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp43 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp42);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp44;
$tmp44 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp44->value = $tmp43;
ITable* $tmp45 = ((panda$core$Equatable*) $tmp41)->$class->itable;
while ($tmp45->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
panda$core$Bit $tmp48 = $tmp46(((panda$core$Equatable*) $tmp41), ((panda$core$Equatable*) $tmp44));
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp50 = (panda$core$Int64) {35};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s51, $tmp50);
abort(); // unreachable
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp44)));
// unreffing REF($118:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp41)));
// unreffing REF($114:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
// line 36
org$pandalanguage$pandac$MethodDecl** $tmp52 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp53 = *$tmp52;
panda$core$String** $tmp54 = &((org$pandalanguage$pandac$Symbol*) $tmp53)->name;
panda$core$String* $tmp55 = *$tmp54;
panda$core$Bit $tmp56 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp55, &$s57);
bool $tmp58 = $tmp56.value;
if ($tmp58) goto block9; else goto block10;
block9:;
// line 38
panda$core$Int64 $tmp59 = (panda$core$Int64) {0};
ITable* $tmp60 = param4->$class->itable;
while ($tmp60->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[0];
panda$core$Object* $tmp63 = $tmp61(param4, $tmp59);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp64 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp65 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp66 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp64, $tmp65, $tmp66);
org$pandalanguage$pandac$IR$Value* $tmp67 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp63), $tmp64);
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
org$pandalanguage$pandac$IR$Value* $tmp68 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
*(&local2) = $tmp67;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($151:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing REF($149:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($147:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp63);
// unreffing REF($145:panda.collections.ListView.T)
// line 39
org$pandalanguage$pandac$IR$Value* $tmp69 = *(&local2);
panda$core$Bit $tmp70 = panda$core$Bit$init$builtin_bit($tmp69 == NULL);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block11; else goto block12;
block11:;
// line 40
org$pandalanguage$pandac$Pair* $tmp72 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp73 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp74;
$tmp74 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp74->value = $tmp73;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp72, ((panda$core$Object*) $tmp74), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing REF($181:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing REF($178:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp75 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing count
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp76 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp77 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp72;
block12:;
// line 42
org$pandalanguage$pandac$IR* $tmp78 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp79 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp80 = (panda$core$Int64) {16};
org$pandalanguage$pandac$IR$Value* $tmp81 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp82 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp81);
org$pandalanguage$pandac$Type* $tmp83 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type($tmp79, $tmp80, param1, $tmp82, $tmp83);
$fn85 $tmp84 = ($fn85) $tmp78->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp86 = $tmp84($tmp78, $tmp79);
*(&local3) = $tmp86;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing REF($214:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
// unreffing REF($210:org.pandalanguage.pandac.IR.Statement)
// line 44
org$pandalanguage$pandac$Pair* $tmp87 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp88 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp89;
$tmp89 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp89->value = $tmp88;
org$pandalanguage$pandac$IR$Value* $tmp90 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp91 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp92 = *(&local3);
org$pandalanguage$pandac$Type* $tmp93 = *(&local1);
org$pandalanguage$pandac$Type* $tmp94 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp93);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp90, $tmp91, $tmp92, $tmp94);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp87, ((panda$core$Object*) $tmp89), ((panda$core$Object*) $tmp90));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing REF($237:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($232:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
// unreffing REF($231:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// unreffing REF($228:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp95 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
// unreffing count
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp96 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp97 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp87;
block10:;
panda$core$Bit $tmp98 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp55, &$s99);
bool $tmp100 = $tmp98.value;
if ($tmp100) goto block13; else goto block14;
block13:;
// line 48
panda$core$Bit $tmp101 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp103 = (panda$core$Int64) {48};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s104, $tmp103);
abort(); // unreachable
block15:;
// line 49
org$pandalanguage$pandac$IR* $tmp105 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp106 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp107 = (panda$core$Int64) {17};
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp106, $tmp107, param1, param2);
$fn109 $tmp108 = ($fn109) $tmp105->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp110 = $tmp108($tmp105, $tmp106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing REF($285:org.pandalanguage.pandac.IR.Statement)
// line 50
org$pandalanguage$pandac$Pair* $tmp111 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp112 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp113;
$tmp113 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp113->value = $tmp112;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp111, ((panda$core$Object*) $tmp113), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
// unreffing REF($298:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing REF($295:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$Type* $tmp114 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp115 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp111;
block14:;
panda$core$Bit $tmp116 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp55, &$s117);
bool $tmp118 = $tmp116.value;
if ($tmp118) goto block17; else goto block18;
block17:;
// line 53
panda$core$Bit $tmp119 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp121 = (panda$core$Int64) {53};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s122, $tmp121);
abort(); // unreachable
block19:;
// line 54
panda$core$Int64 $tmp123 = (panda$core$Int64) {0};
ITable* $tmp124 = param4->$class->itable;
while ($tmp124->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[0];
panda$core$Object* $tmp127 = $tmp125(param4, $tmp123);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp128 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp129 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp130 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp128, $tmp129, $tmp130);
org$pandalanguage$pandac$IR$Value* $tmp131 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp127), $tmp128);
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
org$pandalanguage$pandac$IR$Value* $tmp132 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
*(&local4) = $tmp131;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing REF($341:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// unreffing REF($339:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing REF($337:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp127);
// unreffing REF($335:panda.collections.ListView.T)
// line 55
org$pandalanguage$pandac$IR$Value* $tmp133 = *(&local4);
panda$core$Bit $tmp134 = panda$core$Bit$init$builtin_bit($tmp133 == NULL);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block21; else goto block22;
block21:;
// line 56
org$pandalanguage$pandac$Pair* $tmp136 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp137 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp138;
$tmp138 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp138->value = $tmp137;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp136, ((panda$core$Object*) $tmp138), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
// unreffing REF($371:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing REF($368:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp139 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
// unreffing oldCount
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp140 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp141 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp136;
block22:;
// line 58
panda$core$Int64 $tmp142 = (panda$core$Int64) {1};
ITable* $tmp143 = param4->$class->itable;
while ($tmp143->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp143 = $tmp143->next;
}
$fn145 $tmp144 = $tmp143->methods[0];
panda$core$Object* $tmp146 = $tmp144(param4, $tmp142);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp147 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp148 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp149 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp147, $tmp148, $tmp149);
org$pandalanguage$pandac$IR$Value* $tmp150 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp146), $tmp147);
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
org$pandalanguage$pandac$IR$Value* $tmp151 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
*(&local5) = $tmp150;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// unreffing REF($408:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
// unreffing REF($406:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
// unreffing REF($404:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp146);
// unreffing REF($402:panda.collections.ListView.T)
// line 59
org$pandalanguage$pandac$IR$Value* $tmp152 = *(&local5);
panda$core$Bit $tmp153 = panda$core$Bit$init$builtin_bit($tmp152 == NULL);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block23; else goto block24;
block23:;
// line 60
org$pandalanguage$pandac$Pair* $tmp155 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp156 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp157;
$tmp157 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp157->value = $tmp156;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp155, ((panda$core$Object*) $tmp157), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// unreffing REF($438:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
// unreffing REF($435:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp158 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
// unreffing newCount
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp159 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
// unreffing oldCount
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp160 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp161 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp155;
block24:;
// line 62
org$pandalanguage$pandac$IR* $tmp162 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp163 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp164 = (panda$core$Int64) {21};
org$pandalanguage$pandac$IR$Value* $tmp165 = *(&local4);
org$pandalanguage$pandac$IR$Value* $tmp166 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp165);
org$pandalanguage$pandac$IR$Value* $tmp167 = *(&local5);
org$pandalanguage$pandac$IR$Value* $tmp168 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp167);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp163, $tmp164, param1, param2, $tmp166, $tmp168);
$fn170 $tmp169 = ($fn170) $tmp162->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp171 = $tmp169($tmp162, $tmp163);
*(&local6) = $tmp171;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
// unreffing REF($480:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
// unreffing REF($477:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
// unreffing REF($472:org.pandalanguage.pandac.IR.Statement)
// line 65
org$pandalanguage$pandac$Pair* $tmp172 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp173 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp174;
$tmp174 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp174->value = $tmp173;
org$pandalanguage$pandac$IR$Value* $tmp175 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp176 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp177 = *(&local6);
org$pandalanguage$pandac$Type* $tmp178 = *(&local1);
org$pandalanguage$pandac$Type* $tmp179 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp178);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp175, $tmp176, $tmp177, $tmp179);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp172, ((panda$core$Object*) $tmp174), ((panda$core$Object*) $tmp175));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
// unreffing REF($504:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// unreffing REF($499:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
// unreffing REF($498:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
// unreffing REF($495:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp180 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// unreffing newCount
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp181 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
// unreffing oldCount
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp182 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp183 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp172;
block18:;
panda$core$Bit $tmp184 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp55, &$s185);
bool $tmp186 = $tmp184.value;
if ($tmp186) goto block25; else goto block26;
block25:;
// line 69
panda$core$Bit $tmp187 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp189 = (panda$core$Int64) {69};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s190, $tmp189);
abort(); // unreachable
block27:;
// line 70
org$pandalanguage$pandac$IR* $tmp191 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp192 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp193 = (panda$core$Int64) {18};
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp192, $tmp193, param1, param2);
$fn195 $tmp194 = ($fn195) $tmp191->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp196 = $tmp194($tmp191, $tmp192);
*(&local7) = $tmp196;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
// unreffing REF($557:org.pandalanguage.pandac.IR.Statement)
// line 71
org$pandalanguage$pandac$Pair* $tmp197 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp198 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp199;
$tmp199 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp199->value = $tmp198;
org$pandalanguage$pandac$IR$Value* $tmp200 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp201 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp202 = *(&local7);
org$pandalanguage$pandac$Type* $tmp203 = *(&local1);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp200, $tmp201, $tmp202, $tmp203);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp197, ((panda$core$Object*) $tmp199), ((panda$core$Object*) $tmp200));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
// unreffing REF($572:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing REF($571:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
// unreffing REF($568:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$Type* $tmp204 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp205 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp197;
block26:;
panda$core$Bit $tmp206 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp55, &$s207);
bool $tmp208 = $tmp206.value;
if ($tmp208) goto block29; else goto block30;
block29:;
// line 74
panda$core$Bit $tmp209 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp211 = (panda$core$Int64) {74};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s212, $tmp211);
abort(); // unreachable
block31:;
// line 75
panda$core$Int64 $tmp213 = (panda$core$Int64) {0};
ITable* $tmp214 = param4->$class->itable;
while ($tmp214->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp214 = $tmp214->next;
}
$fn216 $tmp215 = $tmp214->methods[0];
panda$core$Object* $tmp217 = $tmp215(param4, $tmp213);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp218 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp219 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp220 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp218, $tmp219, $tmp220);
org$pandalanguage$pandac$IR$Value* $tmp221 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp217), $tmp218);
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
org$pandalanguage$pandac$IR$Value* $tmp222 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
*(&local8) = $tmp221;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
// unreffing REF($624:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
// unreffing REF($622:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
// unreffing REF($620:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp217);
// unreffing REF($618:panda.collections.ListView.T)
// line 76
org$pandalanguage$pandac$IR* $tmp223 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp224 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp225 = (panda$core$Int64) {20};
org$pandalanguage$pandac$IR$Value* $tmp226 = *(&local8);
org$pandalanguage$pandac$IR$Value* $tmp227 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp226);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp224, $tmp225, param1, param2, $tmp227);
$fn229 $tmp228 = ($fn229) $tmp223->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp230 = $tmp228($tmp223, $tmp224);
*(&local9) = $tmp230;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
// unreffing REF($651:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
// unreffing REF($646:org.pandalanguage.pandac.IR.Statement)
// line 78
org$pandalanguage$pandac$Pair* $tmp231 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp232 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp233;
$tmp233 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp233->value = $tmp232;
org$pandalanguage$pandac$IR$Value* $tmp234 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp235 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp236 = *(&local9);
org$pandalanguage$pandac$Type* $tmp237 = *(&local1);
org$pandalanguage$pandac$Type* $tmp238 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp237);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp234, $tmp235, $tmp236, $tmp238);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp231, ((panda$core$Object*) $tmp233), ((panda$core$Object*) $tmp234));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// unreffing REF($672:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
// unreffing REF($667:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
// unreffing REF($666:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
// unreffing REF($663:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp239 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// unreffing value
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp240 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp241 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp231;
block30:;
panda$core$Bit $tmp242 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp55, &$s243);
bool $tmp244 = $tmp242.value;
if ($tmp244) goto block33; else goto block34;
block33:;
// line 82
panda$core$Bit $tmp245 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block35; else goto block36;
block36:;
panda$core$Int64 $tmp247 = (panda$core$Int64) {82};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s248, $tmp247);
abort(); // unreachable
block35:;
// line 83
panda$core$Int64 $tmp249 = (panda$core$Int64) {0};
ITable* $tmp250 = param4->$class->itable;
while ($tmp250->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[0];
panda$core$Object* $tmp253 = $tmp251(param4, $tmp249);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp254 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp255 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp256 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp254, $tmp255, $tmp256);
org$pandalanguage$pandac$IR$Value* $tmp257 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp253), $tmp254);
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
org$pandalanguage$pandac$IR$Value* $tmp258 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
*(&local10) = $tmp257;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
// unreffing REF($728:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// unreffing REF($726:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
// unreffing REF($724:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp253);
// unreffing REF($722:panda.collections.ListView.T)
// line 84
org$pandalanguage$pandac$IR$Value* $tmp259 = *(&local10);
panda$core$Bit $tmp260 = panda$core$Bit$init$builtin_bit($tmp259 == NULL);
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block37; else goto block38;
block37:;
// line 85
org$pandalanguage$pandac$Pair* $tmp262 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp263 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp264;
$tmp264 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp264->value = $tmp263;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp262, ((panda$core$Object*) $tmp264), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
// unreffing REF($758:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
// unreffing REF($755:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp265 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing index
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp266 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp267 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp262;
block38:;
// line 87
org$pandalanguage$pandac$IR* $tmp268 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp269 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp270 = (panda$core$Int64) {19};
org$pandalanguage$pandac$IR$Value* $tmp271 = *(&local10);
org$pandalanguage$pandac$IR$Value* $tmp272 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp271);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp269, $tmp270, param1, param2, $tmp272);
$fn274 $tmp273 = ($fn274) $tmp268->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp275 = $tmp273($tmp268, $tmp269);
*(&local11) = $tmp275;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
// unreffing REF($792:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// unreffing REF($787:org.pandalanguage.pandac.IR.Statement)
// line 89
org$pandalanguage$pandac$Pair* $tmp276 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp277 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp278;
$tmp278 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp278->value = $tmp277;
org$pandalanguage$pandac$IR$Value* $tmp279 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp280 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp281 = *(&local11);
org$pandalanguage$pandac$Type* $tmp282 = *(&local1);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp279, $tmp280, $tmp281, $tmp282);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp276, ((panda$core$Object*) $tmp278), ((panda$core$Object*) $tmp279));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp276));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
// unreffing REF($808:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
// unreffing REF($807:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp276));
// unreffing REF($804:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp283 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
// unreffing index
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp284 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp285 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp276;
block34:;
panda$core$Bit $tmp286 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp55, &$s287);
bool $tmp288 = $tmp286.value;
if ($tmp288) goto block39; else goto block40;
block39:;
// line 92
panda$core$Bit $tmp289 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block41; else goto block42;
block42:;
panda$core$Int64 $tmp291 = (panda$core$Int64) {92};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s292, $tmp291);
abort(); // unreachable
block41:;
// line 93
panda$core$Int64 $tmp293 = (panda$core$Int64) {0};
ITable* $tmp294 = param4->$class->itable;
while ($tmp294->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp294 = $tmp294->next;
}
$fn296 $tmp295 = $tmp294->methods[0];
panda$core$Object* $tmp297 = $tmp295(param4, $tmp293);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp298 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp299 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp300 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp298, $tmp299, $tmp300);
org$pandalanguage$pandac$IR$Value* $tmp301 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp297), $tmp298);
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
org$pandalanguage$pandac$IR$Value* $tmp302 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
*(&local12) = $tmp301;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
// unreffing REF($865:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
// unreffing REF($863:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
// unreffing REF($861:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp297);
// unreffing REF($859:panda.collections.ListView.T)
// line 94
panda$core$Int64 $tmp303 = (panda$core$Int64) {1};
ITable* $tmp304 = param4->$class->itable;
while ($tmp304->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp304 = $tmp304->next;
}
$fn306 $tmp305 = $tmp304->methods[0];
panda$core$Object* $tmp307 = $tmp305(param4, $tmp303);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp308 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp309 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp310 = *(&local1);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp308, $tmp309, $tmp310);
org$pandalanguage$pandac$IR$Value* $tmp311 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp307), $tmp308);
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
org$pandalanguage$pandac$IR$Value* $tmp312 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
*(&local13) = $tmp311;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
// unreffing REF($896:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
// unreffing REF($891:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp307);
// unreffing REF($889:panda.collections.ListView.T)
// line 95
org$pandalanguage$pandac$IR$Value* $tmp313 = *(&local12);
panda$core$Bit $tmp314 = panda$core$Bit$init$builtin_bit($tmp313 == NULL);
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block45; else goto block46;
block45:;
*(&local14) = $tmp314;
goto block47;
block46:;
org$pandalanguage$pandac$IR$Value* $tmp316 = *(&local13);
panda$core$Bit $tmp317 = panda$core$Bit$init$builtin_bit($tmp316 == NULL);
*(&local14) = $tmp317;
goto block47;
block47:;
panda$core$Bit $tmp318 = *(&local14);
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block43; else goto block44;
block43:;
// line 96
org$pandalanguage$pandac$Pair* $tmp320 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp321 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp322;
$tmp322 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp322->value = $tmp321;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp320, ((panda$core$Object*) $tmp322), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// unreffing REF($933:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
// unreffing REF($930:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp323 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
// unreffing value
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp324 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
// unreffing index
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp325 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp326 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp320;
block44:;
// line 98
org$pandalanguage$pandac$IR$Value* $tmp327 = *(&local12);
org$pandalanguage$pandac$IR$Value* $tmp328 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp327);
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
org$pandalanguage$pandac$IR$Value* $tmp329 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
*(&local15) = $tmp328;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
// unreffing REF($968:org.pandalanguage.pandac.IR.Value)
// line 99
org$pandalanguage$pandac$IR$Value* $tmp330 = *(&local13);
$fn332 $tmp331 = ($fn332) $tmp330->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp333 = $tmp331($tmp330);
panda$core$Bit $tmp334 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp333);
bool $tmp335 = $tmp334.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
// unreffing REF($983:org.pandalanguage.pandac.Type)
if ($tmp335) goto block48; else goto block49;
block48:;
// line 100
org$pandalanguage$pandac$IR$Value* $tmp336 = *(&local13);
org$pandalanguage$pandac$Compiler$compileRef$org$pandalanguage$pandac$IR$Value(param0, $tmp336);
// line 101
org$pandalanguage$pandac$IR* $tmp337 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp338 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp339 = (panda$core$Int64) {19};
org$pandalanguage$pandac$IR$Value* $tmp340 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp338, $tmp339, param1, param2, $tmp340);
$fn342 $tmp341 = ($fn342) $tmp337->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp343 = $tmp341($tmp337, $tmp338);
*(&local16) = $tmp343;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
// unreffing REF($996:org.pandalanguage.pandac.IR.Statement)
// line 102
org$pandalanguage$pandac$IR$Value* $tmp344 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp345 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp346 = *(&local16);
org$pandalanguage$pandac$IR$Value* $tmp347 = *(&local13);
$fn349 $tmp348 = ($fn349) $tmp347->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp350 = $tmp348($tmp347);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp344, $tmp345, $tmp346, $tmp350);
org$pandalanguage$pandac$Compiler$compileUnref$org$pandalanguage$pandac$IR$Value(param0, $tmp344);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
// unreffing REF($1014:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
// unreffing REF($1008:org.pandalanguage.pandac.IR.Value)
goto block49;
block49:;
// line 104
org$pandalanguage$pandac$IR* $tmp351 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp352 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp353 = (panda$core$Int64) {23};
org$pandalanguage$pandac$IR$Value* $tmp354 = *(&local13);
org$pandalanguage$pandac$IR$Value* $tmp355 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp352, $tmp353, param1, $tmp354, param2, $tmp355);
$fn357 $tmp356 = ($fn357) $tmp351->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp358 = $tmp356($tmp351, $tmp352);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
// unreffing REF($1026:org.pandalanguage.pandac.IR.Statement)
// line 105
org$pandalanguage$pandac$Pair* $tmp359 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp360 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp361;
$tmp361 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp361->value = $tmp360;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp359, ((panda$core$Object*) $tmp361), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
// unreffing REF($1042:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
// unreffing REF($1039:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp362 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
// unreffing indexValue
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp363 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
// unreffing value
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp364 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
// unreffing index
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp365 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp365));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp366 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp359;
block40:;
// line 108
panda$core$Bit $tmp367 = panda$core$Bit$init$builtin_bit(false);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block50; else goto block51;
block51:;
panda$core$Int64 $tmp369 = (panda$core$Int64) {108};
org$pandalanguage$pandac$MethodDecl** $tmp370 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp371 = *$tmp370;
panda$core$String** $tmp372 = &((org$pandalanguage$pandac$Symbol*) $tmp371)->name;
panda$core$String* $tmp373 = *$tmp372;
panda$core$String* $tmp374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s375, $tmp373);
panda$core$String* $tmp376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp374, &$s377);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s378, $tmp369, $tmp376);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
// unreffing REF($1090:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
// unreffing REF($1089:panda.core.String)
abort(); // unreachable
block50:;
goto block8;
block8:;
panda$core$Bit $tmp379 = panda$core$Bit$init$builtin_bit(false);
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block52; else goto block53;
block53:;
panda$core$Int64 $tmp381 = (panda$core$Int64) {22};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s382, $tmp381, &$s383);
abort(); // unreachable
block52:;
abort(); // unreachable

}
org$pandalanguage$pandac$Pair* org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$parser$Token$Kind param3, panda$collections$ListView* param4, org$pandalanguage$pandac$Type* param5, org$pandalanguage$pandac$Type* param6) {

org$pandalanguage$pandac$IR$Value* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$IR$Value* local2 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local3;
org$pandalanguage$pandac$Type* local4 = NULL;
panda$collections$Array* local5 = NULL;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
// line 118
ITable* $tmp384 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp384->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp384 = $tmp384->next;
}
$fn386 $tmp385 = $tmp384->methods[0];
panda$core$Int64 $tmp387 = $tmp385(((panda$collections$CollectionView*) param4));
panda$core$Int64 $tmp388 = (panda$core$Int64) {1};
int64_t $tmp389 = $tmp387.value;
int64_t $tmp390 = $tmp388.value;
bool $tmp391 = $tmp389 != $tmp390;
panda$core$Bit $tmp392 = (panda$core$Bit) {$tmp391};
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block1; else goto block2;
block1:;
// line 119
org$pandalanguage$pandac$Pair* $tmp394 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp395 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp396;
$tmp396 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp396->value = $tmp395;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp394, ((panda$core$Object*) $tmp396), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
// unreffing REF($15:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
// unreffing REF($12:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
return $tmp394;
block2:;
// line 121
org$pandalanguage$pandac$IR$Value* $tmp397 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, param5);
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
org$pandalanguage$pandac$IR$Value* $tmp398 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
*(&local0) = $tmp397;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
// unreffing REF($29:org.pandalanguage.pandac.IR.Value?)
// line 122
org$pandalanguage$pandac$IR$Value* $tmp399 = *(&local0);
panda$core$Bit $tmp400 = panda$core$Bit$init$builtin_bit($tmp399 == NULL);
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block3; else goto block4;
block3:;
// line 123
org$pandalanguage$pandac$Pair* $tmp402 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp403 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp404;
$tmp404 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp404->value = $tmp403;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp402, ((panda$core$Object*) $tmp404), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
// unreffing REF($50:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// unreffing REF($47:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp405 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
// unreffing left
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp402;
block4:;
// line 125
panda$core$Int64 $tmp406 = (panda$core$Int64) {0};
ITable* $tmp407 = param4->$class->itable;
while ($tmp407->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp407 = $tmp407->next;
}
$fn409 $tmp408 = $tmp407->methods[0];
panda$core$Object* $tmp410 = $tmp408(param4, $tmp406);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp411 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp412 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp411, $tmp412, param5);
org$pandalanguage$pandac$IR$Value* $tmp413 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp410), $tmp411);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
org$pandalanguage$pandac$IR$Value* $tmp414 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp414));
*(&local1) = $tmp413;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
// unreffing REF($76:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
// unreffing REF($73:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp410);
// unreffing REF($71:panda.collections.ListView.T)
// line 126
org$pandalanguage$pandac$IR$Value* $tmp415 = *(&local1);
panda$core$Bit $tmp416 = panda$core$Bit$init$builtin_bit($tmp415 == NULL);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block5; else goto block6;
block5:;
// line 127
org$pandalanguage$pandac$Pair* $tmp418 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp419 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp420;
$tmp420 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp420->value = $tmp419;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp418, ((panda$core$Object*) $tmp420), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp418));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
// unreffing REF($103:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp418));
// unreffing REF($100:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp421 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp421));
// unreffing right
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp422 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
// unreffing left
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp418;
block6:;
// line 129
org$pandalanguage$pandac$IR$Value* $tmp423 = *(&local0);
org$pandalanguage$pandac$IR$Value* $tmp424 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp423);
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
org$pandalanguage$pandac$IR$Value* $tmp425 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
*(&local2) = $tmp424;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
// unreffing REF($128:org.pandalanguage.pandac.IR.Value)
// line 130
// line 131
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
// line 132
org$pandalanguage$pandac$Type* $tmp426 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp427 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param6, $tmp426);
bool $tmp428 = $tmp427.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
// unreffing REF($143:org.pandalanguage.pandac.Type)
if ($tmp428) goto block7; else goto block9;
block7:;
// line 133
org$pandalanguage$pandac$Type* $tmp429 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
org$pandalanguage$pandac$Type* $tmp430 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
*(&local4) = $tmp429;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
// unreffing REF($151:org.pandalanguage.pandac.Type)
goto block8;
block9:;
// line 1
// line 136
org$pandalanguage$pandac$IR$Value* $tmp431 = *(&local2);
$fn433 $tmp432 = ($fn433) $tmp431->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp434 = $tmp432($tmp431);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
org$pandalanguage$pandac$Type* $tmp435 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
*(&local4) = $tmp434;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
// unreffing REF($166:org.pandalanguage.pandac.Type)
goto block8;
block8:;
// line 138
org$pandalanguage$pandac$IR** $tmp436 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp437 = *$tmp436;
org$pandalanguage$pandac$IR$Statement* $tmp438 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp439 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Value* $tmp440 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp441 = *(&local1);
org$pandalanguage$pandac$IR$Value* $tmp442 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp441);
org$pandalanguage$pandac$Type* $tmp443 = *(&local4);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type($tmp438, $tmp439, param1, $tmp440, param3, $tmp442, $tmp443);
$fn445 $tmp444 = ($fn445) $tmp437->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp446 = $tmp444($tmp437, $tmp438);
*(&local3) = $tmp446;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp442));
// unreffing REF($185:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
// unreffing REF($180:org.pandalanguage.pandac.IR.Statement)
// line 140
panda$collections$Array* $tmp447 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp447);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp447));
panda$collections$Array* $tmp448 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
*(&local5) = $tmp447;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp447));
// unreffing REF($198:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 141
panda$collections$Array* $tmp449 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp450 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp451 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp452 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp453 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp454 = *(&local3);
org$pandalanguage$pandac$Type* $tmp455 = *(&local4);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp452, $tmp453, $tmp454, $tmp455);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp450, $tmp451, param1, $tmp452);
panda$collections$Array$add$panda$collections$Array$T($tmp449, ((panda$core$Object*) $tmp450));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp452));
// unreffing REF($216:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
// unreffing REF($214:org.pandalanguage.pandac.ASTNode)
// line 142
org$pandalanguage$pandac$IR$Value* $tmp456 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp457 = (panda$core$Int64) {14};
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp456, $tmp457, param6);
panda$collections$Array* $tmp458 = *(&local5);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp459 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp460 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp459, $tmp460, param6);
org$pandalanguage$pandac$IR$Value* $tmp461 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp456, ((panda$collections$ListView*) $tmp458), $tmp459);
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
org$pandalanguage$pandac$IR$Value* $tmp462 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
*(&local6) = $tmp461;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
// unreffing REF($239:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
// unreffing REF($236:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
// unreffing REF($231:org.pandalanguage.pandac.IR.Value)
// line 144
org$pandalanguage$pandac$IR$Value* $tmp463 = *(&local6);
panda$core$Bit $tmp464 = panda$core$Bit$init$builtin_bit($tmp463 != NULL);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp466 = (panda$core$Int64) {144};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s467, $tmp466);
abort(); // unreachable
block10:;
// line 145
org$pandalanguage$pandac$Pair* $tmp468 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp469 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp470;
$tmp470 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp470->value = $tmp469;
org$pandalanguage$pandac$IR$Value* $tmp471 = *(&local6);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp468, ((panda$core$Object*) $tmp470), ((panda$core$Object*) $tmp471));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp470));
// unreffing REF($269:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
// unreffing REF($266:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp472 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp472));
// unreffing construct
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp473 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
// unreffing constructArgs
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp474 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp474));
// unreffing builtinResultType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp475 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
// unreffing builtinLeft
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp476 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp476));
// unreffing right
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp477 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
// unreffing left
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp468;

}
org$pandalanguage$pandac$Pair* org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$MethodRef* param3, panda$collections$ListView* param4) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local2;
// line 152
org$pandalanguage$pandac$MethodDecl** $tmp478 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp479 = *$tmp478;
panda$core$String** $tmp480 = &((org$pandalanguage$pandac$Symbol*) $tmp479)->name;
panda$core$String* $tmp481 = *$tmp480;
panda$core$Bit $tmp482 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp481, &$s483);
bool $tmp484 = $tmp482.value;
if ($tmp484) goto block2; else goto block3;
block2:;
// line 154
org$pandalanguage$pandac$MethodDecl** $tmp485 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp486 = *$tmp485;
panda$collections$Array** $tmp487 = &$tmp486->parameters;
panda$collections$Array* $tmp488 = *$tmp487;
ITable* $tmp489 = ((panda$collections$CollectionView*) $tmp488)->$class->itable;
while ($tmp489->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp489 = $tmp489->next;
}
$fn491 $tmp490 = $tmp489->methods[0];
panda$core$Int64 $tmp492 = $tmp490(((panda$collections$CollectionView*) $tmp488));
panda$core$Int64 $tmp493 = (panda$core$Int64) {1};
panda$core$Bit $tmp494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp492, $tmp493);
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp496 = (panda$core$Int64) {154};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s497, $tmp496);
abort(); // unreachable
block4:;
// line 155
ITable* $tmp498 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp498->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp498 = $tmp498->next;
}
$fn500 $tmp499 = $tmp498->methods[0];
panda$core$Int64 $tmp501 = $tmp499(((panda$collections$CollectionView*) param4));
panda$core$Int64 $tmp502 = (panda$core$Int64) {1};
panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp501, $tmp502);
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp505 = (panda$core$Int64) {155};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s506, $tmp505);
abort(); // unreachable
block6:;
// line 156
org$pandalanguage$pandac$MethodDecl** $tmp507 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp508 = *$tmp507;
panda$collections$Array** $tmp509 = &$tmp508->parameters;
panda$collections$Array* $tmp510 = *$tmp509;
panda$core$Int64 $tmp511 = (panda$core$Int64) {0};
panda$core$Object* $tmp512 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp510, $tmp511);
org$pandalanguage$pandac$Type** $tmp513 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp512)->type;
org$pandalanguage$pandac$Type* $tmp514 = *$tmp513;
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
org$pandalanguage$pandac$Type* $tmp515 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
*(&local0) = $tmp514;
panda$core$Panda$unref$panda$core$Object$Q($tmp512);
// unreffing REF($42:panda.collections.Array.T)
// line 157
org$pandalanguage$pandac$Type* $tmp516 = *(&local0);
panda$core$Bit $tmp517 = org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit($tmp516);
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block8; else goto block9;
block8:;
// line 158
panda$core$Int64 $tmp519 = (panda$core$Int64) {0};
ITable* $tmp520 = param4->$class->itable;
while ($tmp520->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp520 = $tmp520->next;
}
$fn522 $tmp521 = $tmp520->methods[0];
panda$core$Object* $tmp523 = $tmp521(param4, $tmp519);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp524 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp525 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp526 = *(&local0);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp524, $tmp525, $tmp526);
org$pandalanguage$pandac$IR$Value* $tmp527 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp523), $tmp524);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp527));
org$pandalanguage$pandac$IR$Value* $tmp528 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
*(&local1) = $tmp527;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp527));
// unreffing REF($71:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
// unreffing REF($67:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp523);
// unreffing REF($65:panda.collections.ListView.T)
// line 159
org$pandalanguage$pandac$IR$Value* $tmp529 = *(&local1);
panda$core$Bit $tmp530 = panda$core$Bit$init$builtin_bit($tmp529 != NULL);
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block10; else goto block11;
block10:;
// line 160
org$pandalanguage$pandac$IR** $tmp532 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp533 = *$tmp532;
org$pandalanguage$pandac$IR$Statement* $tmp534 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp535 = (panda$core$Int64) {7};
org$pandalanguage$pandac$MethodDecl** $tmp536 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp537 = *$tmp536;
panda$core$Weak** $tmp538 = &$tmp537->owner;
panda$core$Weak* $tmp539 = *$tmp538;
panda$core$Object* $tmp540 = panda$core$Weak$get$R$panda$core$Weak$T($tmp539);
panda$collections$Array* $tmp541 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp542 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp541, $tmp542);
org$pandalanguage$pandac$IR$Value* $tmp543 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp541, ((panda$core$Object*) $tmp543));
org$pandalanguage$pandac$FixedArray* $tmp544 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp541);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT($tmp534, $tmp535, param1, ((org$pandalanguage$pandac$ClassDecl*) $tmp540), $tmp544);
$fn546 $tmp545 = ($fn546) $tmp533->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp547 = $tmp545($tmp533, $tmp534);
*(&local2) = $tmp547;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
// unreffing REF($116:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
// unreffing REF($106:panda.collections.Array<org.pandalanguage.pandac.IR.Value>)
panda$core$Panda$unref$panda$core$Object$Q($tmp540);
// unreffing REF($104:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
// unreffing REF($97:org.pandalanguage.pandac.IR.Statement)
// line 162
org$pandalanguage$pandac$Pair* $tmp548 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp549 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp550;
$tmp550 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp550->value = $tmp549;
org$pandalanguage$pandac$IR$Value* $tmp551 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp552 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp553 = *(&local2);
org$pandalanguage$pandac$MethodDecl** $tmp554 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp555 = *$tmp554;
panda$core$Weak** $tmp556 = &$tmp555->owner;
panda$core$Weak* $tmp557 = *$tmp556;
panda$core$Object* $tmp558 = panda$core$Weak$get$R$panda$core$Weak$T($tmp557);
org$pandalanguage$pandac$Type** $tmp559 = &((org$pandalanguage$pandac$ClassDecl*) $tmp558)->type;
org$pandalanguage$pandac$Type* $tmp560 = *$tmp559;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp551, $tmp552, $tmp553, $tmp560);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp548, ((panda$core$Object*) $tmp550), ((panda$core$Object*) $tmp551));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
panda$core$Panda$unref$panda$core$Object$Q($tmp558);
// unreffing REF($147:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
// unreffing REF($139:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
// unreffing REF($138:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
// unreffing REF($135:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp561 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp562 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
// unreffing paramType
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp548;
block11:;
org$pandalanguage$pandac$IR$Value* $tmp563 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block9;
block9:;
org$pandalanguage$pandac$Type* $tmp564 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
// unreffing paramType
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Bit $tmp565 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp481, &$s566);
bool $tmp567 = $tmp565.value;
if ($tmp567) goto block12; else goto block13;
block12:;
// line 167
panda$core$Int64 $tmp568 = (panda$core$Int64) {52};
org$pandalanguage$pandac$parser$Token$Kind $tmp569 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp568);
org$pandalanguage$pandac$Type* $tmp570 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Type* $tmp571 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp572 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp569, param4, $tmp570, $tmp571);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
// unreffing REF($201:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
// unreffing REF($200:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
// unreffing REF($199:org.pandalanguage.pandac.Type)
return $tmp572;
block13:;
panda$core$Bit $tmp573 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp481, &$s574);
bool $tmp575 = $tmp573.value;
if ($tmp575) goto block14; else goto block15;
block14:;
// line 171
panda$core$Int64 $tmp576 = (panda$core$Int64) {53};
org$pandalanguage$pandac$parser$Token$Kind $tmp577 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp576);
org$pandalanguage$pandac$Type* $tmp578 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Type* $tmp579 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp580 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp577, param4, $tmp578, $tmp579);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
// unreffing REF($223:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
// unreffing REF($222:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
// unreffing REF($221:org.pandalanguage.pandac.Type)
return $tmp580;
block15:;
panda$core$Bit $tmp581 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp481, &$s582);
bool $tmp583 = $tmp581.value;
if ($tmp583) goto block16; else goto block17;
block16:;
// line 175
panda$core$Int64 $tmp584 = (panda$core$Int64) {54};
org$pandalanguage$pandac$parser$Token$Kind $tmp585 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp584);
org$pandalanguage$pandac$Type* $tmp586 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Type* $tmp587 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp588 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp585, param4, $tmp586, $tmp587);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp588));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp588));
// unreffing REF($245:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp587));
// unreffing REF($244:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
// unreffing REF($243:org.pandalanguage.pandac.Type)
return $tmp588;
block17:;
panda$core$Bit $tmp589 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp481, &$s590);
bool $tmp591 = $tmp589.value;
if ($tmp591) goto block18; else goto block19;
block18:;
// line 179
panda$core$Int64 $tmp592 = (panda$core$Int64) {56};
org$pandalanguage$pandac$parser$Token$Kind $tmp593 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp592);
org$pandalanguage$pandac$Type* $tmp594 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Type* $tmp595 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp596 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp593, param4, $tmp594, $tmp595);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
// unreffing REF($267:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp595));
// unreffing REF($266:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp594));
// unreffing REF($265:org.pandalanguage.pandac.Type)
return $tmp596;
block19:;
panda$core$Bit $tmp597 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp481, &$s598);
bool $tmp599 = $tmp597.value;
if ($tmp599) goto block20; else goto block21;
block20:;
// line 183
panda$core$Int64 $tmp600 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp601 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp600);
org$pandalanguage$pandac$MethodDecl** $tmp602 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp603 = *$tmp602;
panda$core$Weak** $tmp604 = &$tmp603->owner;
panda$core$Weak* $tmp605 = *$tmp604;
panda$core$Object* $tmp606 = panda$core$Weak$get$R$panda$core$Weak$T($tmp605);
org$pandalanguage$pandac$Type** $tmp607 = &((org$pandalanguage$pandac$ClassDecl*) $tmp606)->type;
org$pandalanguage$pandac$Type* $tmp608 = *$tmp607;
org$pandalanguage$pandac$MethodDecl** $tmp609 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp610 = *$tmp609;
panda$collections$Array** $tmp611 = &$tmp610->parameters;
panda$collections$Array* $tmp612 = *$tmp611;
panda$core$Int64 $tmp613 = (panda$core$Int64) {0};
panda$core$Object* $tmp614 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp612, $tmp613);
org$pandalanguage$pandac$Type** $tmp615 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp614)->type;
org$pandalanguage$pandac$Type* $tmp616 = *$tmp615;
panda$core$Bit $tmp617 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit $tmp618 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp619 = org$pandalanguage$pandac$Compiler$binaryType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$core$Bit$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp608, $tmp616, $tmp617, $tmp618);
org$pandalanguage$pandac$Type* $tmp620 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp621 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp601, param4, $tmp619, $tmp620);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
// unreffing REF($310:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
// unreffing REF($309:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
// unreffing REF($308:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp614);
// unreffing REF($302:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp606);
// unreffing REF($292:panda.core.Weak.T)
return $tmp621;
block21:;
panda$core$Bit $tmp622 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp481, &$s623);
bool $tmp624 = $tmp622.value;
if ($tmp624) goto block22; else goto block23;
block22:;
// line 189
panda$core$Int64 $tmp625 = (panda$core$Int64) {66};
org$pandalanguage$pandac$parser$Token$Kind $tmp626 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp625);
org$pandalanguage$pandac$MethodDecl** $tmp627 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp628 = *$tmp627;
panda$core$Weak** $tmp629 = &$tmp628->owner;
panda$core$Weak* $tmp630 = *$tmp629;
panda$core$Object* $tmp631 = panda$core$Weak$get$R$panda$core$Weak$T($tmp630);
org$pandalanguage$pandac$Type** $tmp632 = &((org$pandalanguage$pandac$ClassDecl*) $tmp631)->type;
org$pandalanguage$pandac$Type* $tmp633 = *$tmp632;
org$pandalanguage$pandac$MethodDecl** $tmp634 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp635 = *$tmp634;
panda$collections$Array** $tmp636 = &$tmp635->parameters;
panda$collections$Array* $tmp637 = *$tmp636;
panda$core$Int64 $tmp638 = (panda$core$Int64) {0};
panda$core$Object* $tmp639 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp637, $tmp638);
org$pandalanguage$pandac$Type** $tmp640 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp639)->type;
org$pandalanguage$pandac$Type* $tmp641 = *$tmp640;
panda$core$Bit $tmp642 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit $tmp643 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp644 = org$pandalanguage$pandac$Compiler$binaryType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$core$Bit$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp633, $tmp641, $tmp642, $tmp643);
org$pandalanguage$pandac$Type* $tmp645 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp646 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp626, param4, $tmp644, $tmp645);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp646));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp646));
// unreffing REF($359:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp645));
// unreffing REF($358:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
// unreffing REF($357:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp639);
// unreffing REF($351:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp631);
// unreffing REF($341:panda.core.Weak.T)
return $tmp646;
block23:;
panda$core$Bit $tmp647 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp481, &$s648);
bool $tmp649 = $tmp647.value;
if ($tmp649) goto block24; else goto block25;
block24:;
// line 195
panda$core$Int64 $tmp650 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp651 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp650);
org$pandalanguage$pandac$MethodDecl** $tmp652 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp653 = *$tmp652;
panda$core$Weak** $tmp654 = &$tmp653->owner;
panda$core$Weak* $tmp655 = *$tmp654;
panda$core$Object* $tmp656 = panda$core$Weak$get$R$panda$core$Weak$T($tmp655);
org$pandalanguage$pandac$Type** $tmp657 = &((org$pandalanguage$pandac$ClassDecl*) $tmp656)->type;
org$pandalanguage$pandac$Type* $tmp658 = *$tmp657;
org$pandalanguage$pandac$MethodDecl** $tmp659 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp660 = *$tmp659;
panda$collections$Array** $tmp661 = &$tmp660->parameters;
panda$collections$Array* $tmp662 = *$tmp661;
panda$core$Int64 $tmp663 = (panda$core$Int64) {0};
panda$core$Object* $tmp664 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp662, $tmp663);
org$pandalanguage$pandac$Type** $tmp665 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp664)->type;
org$pandalanguage$pandac$Type* $tmp666 = *$tmp665;
panda$core$Bit $tmp667 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit $tmp668 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp669 = org$pandalanguage$pandac$Compiler$binaryType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$core$Bit$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp658, $tmp666, $tmp667, $tmp668);
org$pandalanguage$pandac$Type* $tmp670 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp671 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp651, param4, $tmp669, $tmp670);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
// unreffing REF($408:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
// unreffing REF($407:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
// unreffing REF($406:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp664);
// unreffing REF($400:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp656);
// unreffing REF($390:panda.core.Weak.T)
return $tmp671;
block25:;
panda$core$Bit $tmp672 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp481, &$s673);
bool $tmp674 = $tmp672.value;
if ($tmp674) goto block26; else goto block27;
block26:;
// line 201
panda$core$Int64 $tmp675 = (panda$core$Int64) {65};
org$pandalanguage$pandac$parser$Token$Kind $tmp676 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp675);
org$pandalanguage$pandac$MethodDecl** $tmp677 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp678 = *$tmp677;
panda$core$Weak** $tmp679 = &$tmp678->owner;
panda$core$Weak* $tmp680 = *$tmp679;
panda$core$Object* $tmp681 = panda$core$Weak$get$R$panda$core$Weak$T($tmp680);
org$pandalanguage$pandac$Type** $tmp682 = &((org$pandalanguage$pandac$ClassDecl*) $tmp681)->type;
org$pandalanguage$pandac$Type* $tmp683 = *$tmp682;
org$pandalanguage$pandac$MethodDecl** $tmp684 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp685 = *$tmp684;
panda$collections$Array** $tmp686 = &$tmp685->parameters;
panda$collections$Array* $tmp687 = *$tmp686;
panda$core$Int64 $tmp688 = (panda$core$Int64) {0};
panda$core$Object* $tmp689 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp687, $tmp688);
org$pandalanguage$pandac$Type** $tmp690 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp689)->type;
org$pandalanguage$pandac$Type* $tmp691 = *$tmp690;
panda$core$Bit $tmp692 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit $tmp693 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp694 = org$pandalanguage$pandac$Compiler$binaryType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$core$Bit$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp683, $tmp691, $tmp692, $tmp693);
org$pandalanguage$pandac$Type* $tmp695 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp696 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp676, param4, $tmp694, $tmp695);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
// unreffing REF($457:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
// unreffing REF($456:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
// unreffing REF($455:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp689);
// unreffing REF($449:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp681);
// unreffing REF($439:panda.core.Weak.T)
return $tmp696;
block27:;
panda$core$Bit $tmp697 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp481, &$s698);
bool $tmp699 = $tmp697.value;
if ($tmp699) goto block28; else goto block29;
block28:;
// line 207
panda$core$Int64 $tmp700 = (panda$core$Int64) {59};
org$pandalanguage$pandac$parser$Token$Kind $tmp701 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp700);
org$pandalanguage$pandac$MethodDecl** $tmp702 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp703 = *$tmp702;
panda$core$Weak** $tmp704 = &$tmp703->owner;
panda$core$Weak* $tmp705 = *$tmp704;
panda$core$Object* $tmp706 = panda$core$Weak$get$R$panda$core$Weak$T($tmp705);
org$pandalanguage$pandac$Type** $tmp707 = &((org$pandalanguage$pandac$ClassDecl*) $tmp706)->type;
org$pandalanguage$pandac$Type* $tmp708 = *$tmp707;
org$pandalanguage$pandac$MethodDecl** $tmp709 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp710 = *$tmp709;
panda$collections$Array** $tmp711 = &$tmp710->parameters;
panda$collections$Array* $tmp712 = *$tmp711;
panda$core$Int64 $tmp713 = (panda$core$Int64) {0};
panda$core$Object* $tmp714 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp712, $tmp713);
org$pandalanguage$pandac$Type** $tmp715 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp714)->type;
org$pandalanguage$pandac$Type* $tmp716 = *$tmp715;
panda$core$Bit $tmp717 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit $tmp718 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp719 = org$pandalanguage$pandac$Compiler$binaryType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$core$Bit$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp708, $tmp716, $tmp717, $tmp718);
org$pandalanguage$pandac$Type* $tmp720 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp721 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp701, param4, $tmp719, $tmp720);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp721));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp721));
// unreffing REF($506:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
// unreffing REF($505:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
// unreffing REF($504:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp714);
// unreffing REF($498:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp706);
// unreffing REF($488:panda.core.Weak.T)
return $tmp721;
block29:;
panda$core$Bit $tmp722 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp481, &$s723);
bool $tmp724 = $tmp722.value;
if ($tmp724) goto block30; else goto block1;
block30:;
// line 213
panda$core$Int64 $tmp725 = (panda$core$Int64) {60};
org$pandalanguage$pandac$parser$Token$Kind $tmp726 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp725);
org$pandalanguage$pandac$MethodDecl** $tmp727 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp728 = *$tmp727;
panda$core$Weak** $tmp729 = &$tmp728->owner;
panda$core$Weak* $tmp730 = *$tmp729;
panda$core$Object* $tmp731 = panda$core$Weak$get$R$panda$core$Weak$T($tmp730);
org$pandalanguage$pandac$Type** $tmp732 = &((org$pandalanguage$pandac$ClassDecl*) $tmp731)->type;
org$pandalanguage$pandac$Type* $tmp733 = *$tmp732;
org$pandalanguage$pandac$MethodDecl** $tmp734 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp735 = *$tmp734;
panda$collections$Array** $tmp736 = &$tmp735->parameters;
panda$collections$Array* $tmp737 = *$tmp736;
panda$core$Int64 $tmp738 = (panda$core$Int64) {0};
panda$core$Object* $tmp739 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp737, $tmp738);
org$pandalanguage$pandac$Type** $tmp740 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp739)->type;
org$pandalanguage$pandac$Type* $tmp741 = *$tmp740;
panda$core$Bit $tmp742 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit $tmp743 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp744 = org$pandalanguage$pandac$Compiler$binaryType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$core$Bit$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp733, $tmp741, $tmp742, $tmp743);
org$pandalanguage$pandac$Type* $tmp745 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp746 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp726, param4, $tmp744, $tmp745);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp746));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp746));
// unreffing REF($555:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
// unreffing REF($554:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp744));
// unreffing REF($553:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp739);
// unreffing REF($547:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp731);
// unreffing REF($537:panda.core.Weak.T)
return $tmp746;
block1:;
// line 219
org$pandalanguage$pandac$Pair* $tmp747 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp748 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp749;
$tmp749 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp749->value = $tmp748;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp747, ((panda$core$Object*) $tmp749), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp747));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp749));
// unreffing REF($578:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp747));
// unreffing REF($575:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
return $tmp747;

}
org$pandalanguage$pandac$Pair* org$pandalanguage$pandac$expression$Call$compileBitIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$MethodRef* param3, panda$collections$ListView* param4) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local2;
// line 226
org$pandalanguage$pandac$MethodDecl** $tmp750 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp751 = *$tmp750;
panda$core$String** $tmp752 = &((org$pandalanguage$pandac$Symbol*) $tmp751)->name;
panda$core$String* $tmp753 = *$tmp752;
panda$core$Bit $tmp754 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp753, &$s755);
bool $tmp756 = $tmp754.value;
if ($tmp756) goto block2; else goto block1;
block2:;
// line 228
org$pandalanguage$pandac$MethodDecl** $tmp757 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp758 = *$tmp757;
panda$collections$Array** $tmp759 = &$tmp758->parameters;
panda$collections$Array* $tmp760 = *$tmp759;
ITable* $tmp761 = ((panda$collections$CollectionView*) $tmp760)->$class->itable;
while ($tmp761->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp761 = $tmp761->next;
}
$fn763 $tmp762 = $tmp761->methods[0];
panda$core$Int64 $tmp764 = $tmp762(((panda$collections$CollectionView*) $tmp760));
panda$core$Int64 $tmp765 = (panda$core$Int64) {1};
panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp764, $tmp765);
bool $tmp767 = $tmp766.value;
if ($tmp767) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp768 = (panda$core$Int64) {228};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s769, $tmp768);
abort(); // unreachable
block3:;
// line 229
ITable* $tmp770 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp770->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp770 = $tmp770->next;
}
$fn772 $tmp771 = $tmp770->methods[0];
panda$core$Int64 $tmp773 = $tmp771(((panda$collections$CollectionView*) param4));
panda$core$Int64 $tmp774 = (panda$core$Int64) {1};
panda$core$Bit $tmp775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp773, $tmp774);
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp777 = (panda$core$Int64) {229};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s778, $tmp777);
abort(); // unreachable
block5:;
// line 230
org$pandalanguage$pandac$MethodDecl** $tmp779 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp780 = *$tmp779;
panda$collections$Array** $tmp781 = &$tmp780->parameters;
panda$collections$Array* $tmp782 = *$tmp781;
panda$core$Int64 $tmp783 = (panda$core$Int64) {0};
panda$core$Object* $tmp784 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp782, $tmp783);
org$pandalanguage$pandac$Type** $tmp785 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp784)->type;
org$pandalanguage$pandac$Type* $tmp786 = *$tmp785;
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
org$pandalanguage$pandac$Type* $tmp787 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp787));
*(&local0) = $tmp786;
panda$core$Panda$unref$panda$core$Object$Q($tmp784);
// unreffing REF($42:panda.collections.Array.T)
// line 231
org$pandalanguage$pandac$Type* $tmp788 = *(&local0);
org$pandalanguage$pandac$Type* $tmp789 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp790 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp788, $tmp789);
bool $tmp791 = $tmp790.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp789));
// unreffing REF($58:org.pandalanguage.pandac.Type)
if ($tmp791) goto block7; else goto block8;
block7:;
// line 232
panda$core$Int64 $tmp792 = (panda$core$Int64) {0};
ITable* $tmp793 = param4->$class->itable;
while ($tmp793->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp793 = $tmp793->next;
}
$fn795 $tmp794 = $tmp793->methods[0];
panda$core$Object* $tmp796 = $tmp794(param4, $tmp792);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp797 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp798 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp799 = *(&local0);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp797, $tmp798, $tmp799);
org$pandalanguage$pandac$IR$Value* $tmp800 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp796), $tmp797);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
org$pandalanguage$pandac$IR$Value* $tmp801 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp801));
*(&local1) = $tmp800;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
// unreffing REF($75:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp797));
// unreffing REF($71:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp796);
// unreffing REF($69:panda.collections.ListView.T)
// line 233
org$pandalanguage$pandac$IR$Value* $tmp802 = *(&local1);
panda$core$Bit $tmp803 = panda$core$Bit$init$builtin_bit($tmp802 != NULL);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block9; else goto block10;
block9:;
// line 234
org$pandalanguage$pandac$IR** $tmp805 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp806 = *$tmp805;
org$pandalanguage$pandac$IR$Statement* $tmp807 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp808 = (panda$core$Int64) {7};
org$pandalanguage$pandac$MethodDecl** $tmp809 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp810 = *$tmp809;
panda$core$Weak** $tmp811 = &$tmp810->owner;
panda$core$Weak* $tmp812 = *$tmp811;
panda$core$Object* $tmp813 = panda$core$Weak$get$R$panda$core$Weak$T($tmp812);
panda$collections$Array* $tmp814 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp815 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp814, $tmp815);
org$pandalanguage$pandac$IR$Value* $tmp816 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp814, ((panda$core$Object*) $tmp816));
org$pandalanguage$pandac$FixedArray* $tmp817 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp814);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT($tmp807, $tmp808, param1, ((org$pandalanguage$pandac$ClassDecl*) $tmp813), $tmp817);
$fn819 $tmp818 = ($fn819) $tmp806->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp820 = $tmp818($tmp806, $tmp807);
*(&local2) = $tmp820;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp817));
// unreffing REF($120:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
// unreffing REF($110:panda.collections.Array<org.pandalanguage.pandac.IR.Value>)
panda$core$Panda$unref$panda$core$Object$Q($tmp813);
// unreffing REF($108:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp807));
// unreffing REF($101:org.pandalanguage.pandac.IR.Statement)
// line 236
org$pandalanguage$pandac$Pair* $tmp821 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp822 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp823;
$tmp823 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp823->value = $tmp822;
org$pandalanguage$pandac$IR$Value* $tmp824 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp825 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp826 = *(&local2);
org$pandalanguage$pandac$MethodDecl** $tmp827 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp828 = *$tmp827;
panda$core$Weak** $tmp829 = &$tmp828->owner;
panda$core$Weak* $tmp830 = *$tmp829;
panda$core$Object* $tmp831 = panda$core$Weak$get$R$panda$core$Weak$T($tmp830);
org$pandalanguage$pandac$Type** $tmp832 = &((org$pandalanguage$pandac$ClassDecl*) $tmp831)->type;
org$pandalanguage$pandac$Type* $tmp833 = *$tmp832;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp824, $tmp825, $tmp826, $tmp833);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp821, ((panda$core$Object*) $tmp823), ((panda$core$Object*) $tmp824));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
panda$core$Panda$unref$panda$core$Object$Q($tmp831);
// unreffing REF($151:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
// unreffing REF($143:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
// unreffing REF($142:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
// unreffing REF($139:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp834 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp834));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp835 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp835));
// unreffing paramType
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp821;
block10:;
org$pandalanguage$pandac$IR$Value* $tmp836 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block8;
block8:;
org$pandalanguage$pandac$Type* $tmp837 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp837));
// unreffing paramType
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block1:;
// line 241
org$pandalanguage$pandac$Pair* $tmp838 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp839 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp840;
$tmp840 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp840->value = $tmp839;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp838, ((panda$core$Object*) $tmp840), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp840));
// unreffing REF($200:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
// unreffing REF($197:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
return $tmp838;

}
org$pandalanguage$pandac$Pair* org$pandalanguage$pandac$expression$Call$compileIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$MethodRef* param3, panda$collections$ListView* param4) {

panda$core$Bit local0;
panda$core$Bit local1;
// line 247
org$pandalanguage$pandac$Type** $tmp841 = &param3->target;
org$pandalanguage$pandac$Type* $tmp842 = *$tmp841;
panda$core$Bit $tmp843 = org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit($tmp842);
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block3; else goto block4;
block3:;
*(&local0) = $tmp843;
goto block5;
block4:;
org$pandalanguage$pandac$Type** $tmp845 = &param3->target;
org$pandalanguage$pandac$Type* $tmp846 = *$tmp845;
panda$core$Bit $tmp847 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit($tmp846);
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Type** $tmp849 = &param3->target;
org$pandalanguage$pandac$Type* $tmp850 = *$tmp849;
org$pandalanguage$pandac$FixedArray** $tmp851 = &$tmp850->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp852 = *$tmp851;
panda$core$Int64 $tmp853 = (panda$core$Int64) {1};
panda$core$Object* $tmp854 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp852, $tmp853);
panda$core$Bit $tmp855 = org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp854));
panda$core$Panda$unref$panda$core$Object$Q($tmp854);
// unreffing REF($20:org.pandalanguage.pandac.FixedArray.T)
*(&local1) = $tmp855;
goto block8;
block7:;
*(&local1) = $tmp847;
goto block8;
block8:;
panda$core$Bit $tmp856 = *(&local1);
*(&local0) = $tmp856;
goto block5;
block5:;
panda$core$Bit $tmp857 = *(&local0);
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block1; else goto block2;
block1:;
// line 248
org$pandalanguage$pandac$Pair* $tmp859 = org$pandalanguage$pandac$expression$Call$compilePointerIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
// unreffing REF($37:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
return $tmp859;
block2:;
// line 250
org$pandalanguage$pandac$Type** $tmp860 = &param3->target;
org$pandalanguage$pandac$Type* $tmp861 = *$tmp860;
panda$core$Bit $tmp862 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit($tmp861);
bool $tmp863 = $tmp862.value;
if ($tmp863) goto block9; else goto block10;
block9:;
// line 251
org$pandalanguage$pandac$Pair* $tmp864 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
// unreffing REF($51:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
return $tmp864;
block10:;
// line 253
org$pandalanguage$pandac$Type** $tmp865 = &param3->target;
org$pandalanguage$pandac$Type* $tmp866 = *$tmp865;
org$pandalanguage$pandac$Type* $tmp867 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp868 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp866, $tmp867);
bool $tmp869 = $tmp868.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp867));
// unreffing REF($61:org.pandalanguage.pandac.Type)
if ($tmp869) goto block11; else goto block12;
block11:;
// line 254
org$pandalanguage$pandac$Pair* $tmp870 = org$pandalanguage$pandac$expression$Call$compileBitIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
// unreffing REF($69:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
return $tmp870;
block12:;
// line 256
org$pandalanguage$pandac$Pair* $tmp871 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp872 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp873;
$tmp873 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp873->value = $tmp872;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp871, ((panda$core$Object*) $tmp873), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp873));
// unreffing REF($80:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
// unreffing REF($77:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
return $tmp871;

}
panda$collections$ListView* org$pandalanguage$pandac$expression$Call$findGenericParameters$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTpanda$collections$ListView$LTpanda$core$Int64$GT$GT$Q(org$pandalanguage$pandac$MethodDecl* param0, org$pandalanguage$pandac$Type* param1) {

panda$collections$Array* local0 = NULL;
panda$core$Int64 local1;
panda$collections$ListView* local2 = NULL;
panda$collections$ListView* local3 = NULL;
panda$collections$Array* local4 = NULL;
// line 270
org$pandalanguage$pandac$FixedArray** $tmp874 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp875 = *$tmp874;
panda$core$Bit $tmp876 = panda$core$Bit$init$builtin_bit($tmp875 == NULL);
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block1; else goto block2;
block1:;
// line 271
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) NULL)));
return ((panda$collections$ListView*) NULL);
block2:;
// line 273
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
panda$collections$Array* $tmp878 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp878));
*(&local0) = ((panda$collections$Array*) NULL);
// line 274
panda$core$Int64 $tmp879 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FixedArray** $tmp880 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp881 = *$tmp880;
ITable* $tmp882 = ((panda$collections$CollectionView*) $tmp881)->$class->itable;
while ($tmp882->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp882 = $tmp882->next;
}
$fn884 $tmp883 = $tmp882->methods[0];
panda$core$Int64 $tmp885 = $tmp883(((panda$collections$CollectionView*) $tmp881));
panda$core$Bit $tmp886 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp887 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp879, $tmp885, $tmp886);
panda$core$Int64 $tmp888 = $tmp887.min;
*(&local1) = $tmp888;
panda$core$Int64 $tmp889 = $tmp887.max;
panda$core$Bit $tmp890 = $tmp887.inclusive;
bool $tmp891 = $tmp890.value;
panda$core$Int64 $tmp892 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp893 = panda$core$Int64$convert$R$panda$core$UInt64($tmp892);
if ($tmp891) goto block6; else goto block7;
block6:;
int64_t $tmp894 = $tmp888.value;
int64_t $tmp895 = $tmp889.value;
bool $tmp896 = $tmp894 <= $tmp895;
panda$core$Bit $tmp897 = (panda$core$Bit) {$tmp896};
bool $tmp898 = $tmp897.value;
if ($tmp898) goto block3; else goto block4;
block7:;
int64_t $tmp899 = $tmp888.value;
int64_t $tmp900 = $tmp889.value;
bool $tmp901 = $tmp899 < $tmp900;
panda$core$Bit $tmp902 = (panda$core$Bit) {$tmp901};
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block3; else goto block4;
block3:;
// line 275
org$pandalanguage$pandac$FixedArray** $tmp904 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp905 = *$tmp904;
panda$core$Int64 $tmp906 = *(&local1);
panda$core$Object* $tmp907 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp905, $tmp906);
org$pandalanguage$pandac$Type$Kind* $tmp908 = &((org$pandalanguage$pandac$Type*) $tmp907)->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp909 = *$tmp908;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp910;
$tmp910 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp910->value = $tmp909;
panda$core$Int64 $tmp911 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp912 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp911);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp913;
$tmp913 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp913->value = $tmp912;
ITable* $tmp914 = ((panda$core$Equatable*) $tmp910)->$class->itable;
while ($tmp914->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp914 = $tmp914->next;
}
$fn916 $tmp915 = $tmp914->methods[0];
panda$core$Bit $tmp917 = $tmp915(((panda$core$Equatable*) $tmp910), ((panda$core$Equatable*) $tmp913));
bool $tmp918 = $tmp917.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp913)));
// unreffing REF($62:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp910)));
// unreffing REF($58:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q($tmp907);
// unreffing REF($54:org.pandalanguage.pandac.FixedArray.T)
if ($tmp918) goto block8; else goto block10;
block8:;
// line 276
org$pandalanguage$pandac$FixedArray** $tmp919 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp920 = *$tmp919;
panda$core$Int64 $tmp921 = *(&local1);
panda$core$Object* $tmp922 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp920, $tmp921);
panda$core$Weak** $tmp923 = &((org$pandalanguage$pandac$Type*) $tmp922)->genericMethodParameter;
panda$core$Weak* $tmp924 = *$tmp923;
panda$core$Object* $tmp925 = panda$core$Weak$get$R$panda$core$Weak$T($tmp924);
panda$core$String** $tmp926 = &((org$pandalanguage$pandac$MethodDecl$GenericParameter*) $tmp925)->owner;
panda$core$String* $tmp927 = *$tmp926;
panda$core$Weak** $tmp928 = &param0->owner;
panda$core$Weak* $tmp929 = *$tmp928;
panda$core$Object* $tmp930 = panda$core$Weak$get$R$panda$core$Weak$T($tmp929);
panda$core$String** $tmp931 = &((org$pandalanguage$pandac$ClassDecl*) $tmp930)->name;
panda$core$String* $tmp932 = *$tmp931;
panda$core$String* $tmp933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp932, &$s934);
panda$core$String** $tmp935 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp936 = *$tmp935;
panda$core$String* $tmp937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp933, $tmp936);
panda$core$Bit $tmp938 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp927, $tmp937);
bool $tmp939 = $tmp938.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp937));
// unreffing REF($103:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
// unreffing REF($99:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp930);
// unreffing REF($95:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp925);
// unreffing REF($87:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp922);
// unreffing REF($82:org.pandalanguage.pandac.FixedArray.T)
if ($tmp939) goto block11; else goto block12;
block11:;
// line 277
panda$collections$Array* $tmp940 = *(&local0);
panda$core$Bit $tmp941 = panda$core$Bit$init$builtin_bit($tmp940 == NULL);
bool $tmp942 = $tmp941.value;
if ($tmp942) goto block13; else goto block14;
block13:;
// line 278
panda$collections$Array* $tmp943 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp943);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
panda$collections$Array* $tmp944 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp944));
*(&local0) = $tmp943;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
// unreffing REF($129:panda.collections.Array<panda.collections.ListView<panda.core.Int64>>)
goto block14;
block14:;
// line 280
panda$collections$Array* $tmp945 = *(&local0);
panda$collections$Array* $tmp946 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp947 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp946, $tmp947);
panda$core$Int64 $tmp948 = *(&local1);
panda$core$Int64$wrapper* $tmp949;
$tmp949 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp949->value = $tmp948;
panda$collections$Array$add$panda$collections$Array$T($tmp946, ((panda$core$Object*) $tmp949));
panda$collections$ImmutableArray* $tmp950 = panda$collections$ImmutableArray$from$panda$collections$Array$LTpanda$collections$ImmutableArray$T$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT($tmp946);
panda$collections$Array$add$panda$collections$Array$T($tmp945, ((panda$core$Object*) ((panda$collections$ListView*) $tmp950)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
// unreffing REF($155:panda.collections.ImmutableArray<panda.collections.ImmutableArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp949));
// unreffing REF($152:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp946));
// unreffing REF($146:panda.collections.Array<panda.core.Int64>)
goto block12;
block12:;
goto block9;
block10:;
// line 1
// line 284
org$pandalanguage$pandac$FixedArray** $tmp951 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp952 = *$tmp951;
panda$core$Int64 $tmp953 = *(&local1);
panda$core$Object* $tmp954 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp952, $tmp953);
panda$collections$ListView* $tmp955 = org$pandalanguage$pandac$expression$Call$findGenericParameters$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTpanda$collections$ListView$LTpanda$core$Int64$GT$GT$Q(param0, ((org$pandalanguage$pandac$Type*) $tmp954));
*(&local2) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp955));
panda$collections$ListView* $tmp956 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp956));
*(&local2) = $tmp955;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp955));
// unreffing REF($180:panda.collections.ListView<panda.collections.ListView<panda.core.Int64>>?)
panda$core$Panda$unref$panda$core$Object$Q($tmp954);
// unreffing REF($178:org.pandalanguage.pandac.FixedArray.T)
// line 285
panda$collections$ListView* $tmp957 = *(&local2);
panda$core$Bit $tmp958 = panda$core$Bit$init$builtin_bit($tmp957 != NULL);
bool $tmp959 = $tmp958.value;
if ($tmp959) goto block15; else goto block16;
block15:;
// line 286
panda$collections$Array* $tmp960 = *(&local0);
panda$core$Bit $tmp961 = panda$core$Bit$init$builtin_bit($tmp960 == NULL);
bool $tmp962 = $tmp961.value;
if ($tmp962) goto block17; else goto block18;
block17:;
// line 287
panda$collections$Array* $tmp963 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp963);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp963));
panda$collections$Array* $tmp964 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp964));
*(&local0) = $tmp963;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp963));
// unreffing REF($207:panda.collections.Array<panda.collections.ListView<panda.core.Int64>>)
goto block18;
block18:;
// line 289
panda$collections$ListView* $tmp965 = *(&local2);
ITable* $tmp966 = ((panda$collections$Iterable*) $tmp965)->$class->itable;
while ($tmp966->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp966 = $tmp966->next;
}
$fn968 $tmp967 = $tmp966->methods[0];
panda$collections$Iterator* $tmp969 = $tmp967(((panda$collections$Iterable*) $tmp965));
goto block19;
block19:;
ITable* $tmp970 = $tmp969->$class->itable;
while ($tmp970->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp970 = $tmp970->next;
}
$fn972 $tmp971 = $tmp970->methods[0];
panda$core$Bit $tmp973 = $tmp971($tmp969);
bool $tmp974 = $tmp973.value;
if ($tmp974) goto block21; else goto block20;
block20:;
*(&local3) = ((panda$collections$ListView*) NULL);
ITable* $tmp975 = $tmp969->$class->itable;
while ($tmp975->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp975 = $tmp975->next;
}
$fn977 $tmp976 = $tmp975->methods[1];
panda$core$Object* $tmp978 = $tmp976($tmp969);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp978)));
panda$collections$ListView* $tmp979 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp979));
*(&local3) = ((panda$collections$ListView*) $tmp978);
// line 290
panda$collections$Array* $tmp980 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp981 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp980, $tmp981);
panda$core$Int64 $tmp982 = *(&local1);
panda$core$Int64$wrapper* $tmp983;
$tmp983 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp983->value = $tmp982;
panda$collections$Array$add$panda$collections$Array$T($tmp980, ((panda$core$Object*) $tmp983));
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp980));
panda$collections$Array* $tmp984 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
*(&local4) = $tmp980;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp983));
// unreffing REF($252:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp980));
// unreffing REF($246:panda.collections.Array<panda.core.Int64>)
// line 291
panda$collections$Array* $tmp985 = *(&local4);
panda$collections$ListView* $tmp986 = *(&local3);
panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp985, ((panda$collections$CollectionView*) $tmp986));
// line 292
panda$collections$Array* $tmp987 = *(&local0);
panda$collections$Array* $tmp988 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp987, ((panda$core$Object*) ((panda$collections$ListView*) $tmp988)));
panda$collections$Array* $tmp989 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp989));
// unreffing finalPath
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp978);
// unreffing REF($237:panda.collections.Iterator.T)
panda$collections$ListView* $tmp990 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
// unreffing path
*(&local3) = ((panda$collections$ListView*) NULL);
goto block19;
block21:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
// unreffing REF($226:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block16;
block16:;
panda$collections$ListView* $tmp991 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp991));
// unreffing paths
*(&local2) = ((panda$collections$ListView*) NULL);
goto block9;
block9:;
goto block5;
block5:;
panda$core$Int64 $tmp992 = *(&local1);
int64_t $tmp993 = $tmp889.value;
int64_t $tmp994 = $tmp992.value;
int64_t $tmp995 = $tmp993 - $tmp994;
panda$core$Int64 $tmp996 = (panda$core$Int64) {$tmp995};
panda$core$UInt64 $tmp997 = panda$core$Int64$convert$R$panda$core$UInt64($tmp996);
if ($tmp891) goto block23; else goto block24;
block23:;
uint64_t $tmp998 = $tmp997.value;
uint64_t $tmp999 = $tmp893.value;
bool $tmp1000 = $tmp998 >= $tmp999;
panda$core$Bit $tmp1001 = (panda$core$Bit) {$tmp1000};
bool $tmp1002 = $tmp1001.value;
if ($tmp1002) goto block22; else goto block4;
block24:;
uint64_t $tmp1003 = $tmp997.value;
uint64_t $tmp1004 = $tmp893.value;
bool $tmp1005 = $tmp1003 > $tmp1004;
panda$core$Bit $tmp1006 = (panda$core$Bit) {$tmp1005};
bool $tmp1007 = $tmp1006.value;
if ($tmp1007) goto block22; else goto block4;
block22:;
int64_t $tmp1008 = $tmp992.value;
int64_t $tmp1009 = $tmp892.value;
int64_t $tmp1010 = $tmp1008 + $tmp1009;
panda$core$Int64 $tmp1011 = (panda$core$Int64) {$tmp1010};
*(&local1) = $tmp1011;
goto block3;
block4:;
// line 297
panda$collections$Array* $tmp1012 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp1012)));
panda$collections$Array* $tmp1013 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp1012);

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$expression$Call$getSubtype$org$pandalanguage$pandac$Type$panda$collections$ListView$LTpanda$core$Int64$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, panda$collections$ListView* param1) {

org$pandalanguage$pandac$Type* local0 = NULL;
panda$core$Int64 local1;
// line 302
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
org$pandalanguage$pandac$Type* $tmp1014 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
*(&local0) = param0;
// line 303
ITable* $tmp1015 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp1015->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1015 = $tmp1015->next;
}
$fn1017 $tmp1016 = $tmp1015->methods[0];
panda$collections$Iterator* $tmp1018 = $tmp1016(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp1019 = $tmp1018->$class->itable;
while ($tmp1019->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1019 = $tmp1019->next;
}
$fn1021 $tmp1020 = $tmp1019->methods[0];
panda$core$Bit $tmp1022 = $tmp1020($tmp1018);
bool $tmp1023 = $tmp1022.value;
if ($tmp1023) goto block3; else goto block2;
block2:;
ITable* $tmp1024 = $tmp1018->$class->itable;
while ($tmp1024->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1024 = $tmp1024->next;
}
$fn1026 $tmp1025 = $tmp1024->methods[1];
panda$core$Object* $tmp1027 = $tmp1025($tmp1018);
*(&local1) = ((panda$core$Int64$wrapper*) $tmp1027)->value;
// line 304
org$pandalanguage$pandac$Type* $tmp1028 = *(&local0);
org$pandalanguage$pandac$FixedArray** $tmp1029 = &$tmp1028->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1030 = *$tmp1029;
panda$core$Int64 $tmp1031 = *(&local1);
panda$core$Object* $tmp1032 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1030, $tmp1031);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1032)));
org$pandalanguage$pandac$Type* $tmp1033 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1033));
*(&local0) = ((org$pandalanguage$pandac$Type*) $tmp1032);
panda$core$Panda$unref$panda$core$Object$Q($tmp1032);
// unreffing REF($32:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp1027);
// unreffing REF($22:panda.collections.Iterator.T)
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
// unreffing REF($12:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 306
org$pandalanguage$pandac$Type* $tmp1034 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1034));
org$pandalanguage$pandac$Type* $tmp1035 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1035));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1034;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$expression$Call$$anonymous1$org$pandalanguage$pandac$MethodDecl$GenericParameter$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl$GenericParameter* param0) {

// line 314
org$pandalanguage$pandac$Type** $tmp1036 = &param0->bound;
org$pandalanguage$pandac$Type* $tmp1037 = *$tmp1036;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1037));
return $tmp1037;

}
org$pandalanguage$pandac$MethodRef* org$pandalanguage$pandac$expression$Call$performTypeInference$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$MethodRef$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$MethodRef* param1, panda$collections$ListView* param2) {

panda$collections$Array* local0 = NULL;
panda$core$Int64 local1;
org$pandalanguage$pandac$Type* local2 = NULL;
panda$collections$ListView* local3 = NULL;
panda$collections$ListView* local4 = NULL;
org$pandalanguage$pandac$Pair* local5 = NULL;
org$pandalanguage$pandac$Type* local6 = NULL;
panda$core$Int64 local7;
// line 311
panda$core$Bit* $tmp1038 = &param1->requiresTypeInference;
panda$core$Bit $tmp1039 = *$tmp1038;
panda$core$Bit $tmp1040 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1039);
bool $tmp1041 = $tmp1040.value;
if ($tmp1041) goto block1; else goto block2;
block1:;
// line 312
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block2:;
// line 314
panda$collections$Array* $tmp1042 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
org$pandalanguage$pandac$MethodDecl** $tmp1043 = &param1->value;
org$pandalanguage$pandac$MethodDecl* $tmp1044 = *$tmp1043;
panda$collections$Array** $tmp1045 = &$tmp1044->genericParameters;
panda$collections$Array* $tmp1046 = *$tmp1045;
panda$core$Method* $tmp1048 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1048, ((panda$core$Int8*) org$pandalanguage$pandac$expression$Call$$anonymous1$org$pandalanguage$pandac$MethodDecl$GenericParameter$R$org$pandalanguage$pandac$Type), ((panda$core$Immutable*) NULL));
ITable* $tmp1049 = ((panda$collections$CollectionView*) $tmp1046)->$class->itable;
while ($tmp1049->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1049 = $tmp1049->next;
}
$fn1051 $tmp1050 = $tmp1049->methods[6];
panda$collections$Array* $tmp1052 = $tmp1050(((panda$collections$CollectionView*) $tmp1046), ((panda$core$MutableMethod*) $tmp1048));
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp1042, ((panda$collections$CollectionView*) $tmp1052));
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1042));
panda$collections$Array* $tmp1053 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
*(&local0) = $tmp1042;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
// unreffing REF($26:panda.collections.Array<panda.collections.CollectionView.map.U>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
// unreffing REF($20:panda.core.Method)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1042));
// unreffing REF($12:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 315
panda$core$Int64 $tmp1054 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl** $tmp1055 = &param1->value;
org$pandalanguage$pandac$MethodDecl* $tmp1056 = *$tmp1055;
panda$collections$Array** $tmp1057 = &$tmp1056->parameters;
panda$collections$Array* $tmp1058 = *$tmp1057;
ITable* $tmp1059 = ((panda$collections$CollectionView*) $tmp1058)->$class->itable;
while ($tmp1059->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1059 = $tmp1059->next;
}
$fn1061 $tmp1060 = $tmp1059->methods[0];
panda$core$Int64 $tmp1062 = $tmp1060(((panda$collections$CollectionView*) $tmp1058));
panda$core$Bit $tmp1063 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1064 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1054, $tmp1062, $tmp1063);
panda$core$Int64 $tmp1065 = $tmp1064.min;
*(&local1) = $tmp1065;
panda$core$Int64 $tmp1066 = $tmp1064.max;
panda$core$Bit $tmp1067 = $tmp1064.inclusive;
bool $tmp1068 = $tmp1067.value;
panda$core$Int64 $tmp1069 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1070 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1069);
if ($tmp1068) goto block6; else goto block7;
block6:;
int64_t $tmp1071 = $tmp1065.value;
int64_t $tmp1072 = $tmp1066.value;
bool $tmp1073 = $tmp1071 <= $tmp1072;
panda$core$Bit $tmp1074 = (panda$core$Bit) {$tmp1073};
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block3; else goto block4;
block7:;
int64_t $tmp1076 = $tmp1065.value;
int64_t $tmp1077 = $tmp1066.value;
bool $tmp1078 = $tmp1076 < $tmp1077;
panda$core$Bit $tmp1079 = (panda$core$Bit) {$tmp1078};
bool $tmp1080 = $tmp1079.value;
if ($tmp1080) goto block3; else goto block4;
block3:;
// line 316
panda$core$Int64 $tmp1081 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1082 = org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(param1, $tmp1081);
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
org$pandalanguage$pandac$Type* $tmp1083 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1083));
*(&local2) = $tmp1082;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
// unreffing REF($80:org.pandalanguage.pandac.Type)
// line 317
org$pandalanguage$pandac$MethodDecl** $tmp1084 = &param1->value;
org$pandalanguage$pandac$MethodDecl* $tmp1085 = *$tmp1084;
org$pandalanguage$pandac$Type* $tmp1086 = *(&local2);
panda$collections$ListView* $tmp1087 = org$pandalanguage$pandac$expression$Call$findGenericParameters$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTpanda$collections$ListView$LTpanda$core$Int64$GT$GT$Q($tmp1085, $tmp1086);
*(&local3) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1087));
panda$collections$ListView* $tmp1088 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1088));
*(&local3) = $tmp1087;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1087));
// unreffing REF($95:panda.collections.ListView<panda.collections.ListView<panda.core.Int64>>?)
// line 318
panda$collections$ListView* $tmp1089 = *(&local3);
panda$core$Bit $tmp1090 = panda$core$Bit$init$builtin_bit($tmp1089 != NULL);
bool $tmp1091 = $tmp1090.value;
if ($tmp1091) goto block8; else goto block9;
block8:;
// line 319
panda$collections$ListView* $tmp1092 = *(&local3);
ITable* $tmp1093 = ((panda$collections$Iterable*) $tmp1092)->$class->itable;
while ($tmp1093->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1093 = $tmp1093->next;
}
$fn1095 $tmp1094 = $tmp1093->methods[0];
panda$collections$Iterator* $tmp1096 = $tmp1094(((panda$collections$Iterable*) $tmp1092));
goto block10;
block10:;
ITable* $tmp1097 = $tmp1096->$class->itable;
while ($tmp1097->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1097 = $tmp1097->next;
}
$fn1099 $tmp1098 = $tmp1097->methods[0];
panda$core$Bit $tmp1100 = $tmp1098($tmp1096);
bool $tmp1101 = $tmp1100.value;
if ($tmp1101) goto block12; else goto block11;
block11:;
*(&local4) = ((panda$collections$ListView*) NULL);
ITable* $tmp1102 = $tmp1096->$class->itable;
while ($tmp1102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1102 = $tmp1102->next;
}
$fn1104 $tmp1103 = $tmp1102->methods[1];
panda$core$Object* $tmp1105 = $tmp1103($tmp1096);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp1105)));
panda$collections$ListView* $tmp1106 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1106));
*(&local4) = ((panda$collections$ListView*) $tmp1105);
// line 320
panda$core$Int64 $tmp1107 = *(&local1);
ITable* $tmp1108 = param2->$class->itable;
while ($tmp1108->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp1108 = $tmp1108->next;
}
$fn1110 $tmp1109 = $tmp1108->methods[0];
panda$core$Object* $tmp1111 = $tmp1109(param2, $tmp1107);
org$pandalanguage$pandac$Type* $tmp1112 = *(&local2);
org$pandalanguage$pandac$Pair* $tmp1113 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Cpanda$core$Int64$GT$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp1111), $tmp1112);
*(&local5) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
org$pandalanguage$pandac$Pair* $tmp1114 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1114));
*(&local5) = $tmp1113;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
// unreffing REF($143:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, panda.core.Int64>?)
panda$core$Panda$unref$panda$core$Object$Q($tmp1111);
// unreffing REF($140:panda.collections.ListView.T)
// line 321
org$pandalanguage$pandac$Pair* $tmp1115 = *(&local5);
panda$core$Bit $tmp1116 = panda$core$Bit$init$builtin_bit($tmp1115 == NULL);
bool $tmp1117 = $tmp1116.value;
if ($tmp1117) goto block13; else goto block14;
block13:;
// line 322
panda$core$Int64 $tmp1118 = *(&local1);
ITable* $tmp1119 = param2->$class->itable;
while ($tmp1119->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp1119 = $tmp1119->next;
}
$fn1121 $tmp1120 = $tmp1119->methods[0];
panda$core$Object* $tmp1122 = $tmp1120(param2, $tmp1118);
panda$core$String* $tmp1123 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1124, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1122)));
panda$core$String* $tmp1125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1123, &$s1126);
org$pandalanguage$pandac$Type* $tmp1127 = *(&local2);
panda$core$String* $tmp1128 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1125, ((panda$core$Object*) $tmp1127));
panda$core$String* $tmp1129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1128, &$s1130);
panda$io$Console$printLine$panda$core$String($tmp1129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1129));
// unreffing REF($175:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1128));
// unreffing REF($174:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1125));
// unreffing REF($171:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1123));
// unreffing REF($170:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1122);
// unreffing REF($167:panda.collections.ListView.T)
// line 323
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Pair* $tmp1131 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1131));
// unreffing argType
*(&local5) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1105);
// unreffing REF($128:panda.collections.Iterator.T)
panda$collections$ListView* $tmp1132 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
// unreffing g
*(&local4) = ((panda$collections$ListView*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1096));
// unreffing REF($117:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$ListView* $tmp1133 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
// unreffing generics
*(&local3) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$Type* $tmp1134 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1134));
// unreffing paramType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1135 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return param1;
block14:;
// line 325
org$pandalanguage$pandac$MethodDecl** $tmp1136 = &param1->value;
org$pandalanguage$pandac$MethodDecl* $tmp1137 = *$tmp1136;
panda$collections$Array** $tmp1138 = &$tmp1137->parameters;
panda$collections$Array* $tmp1139 = *$tmp1138;
panda$core$Int64 $tmp1140 = *(&local1);
panda$core$Object* $tmp1141 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1139, $tmp1140);
org$pandalanguage$pandac$Type** $tmp1142 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1141)->type;
org$pandalanguage$pandac$Type* $tmp1143 = *$tmp1142;
panda$collections$ListView* $tmp1144 = *(&local4);
org$pandalanguage$pandac$Type* $tmp1145 = org$pandalanguage$pandac$expression$Call$getSubtype$org$pandalanguage$pandac$Type$panda$collections$ListView$LTpanda$core$Int64$GT$R$org$pandalanguage$pandac$Type($tmp1143, $tmp1144);
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1145));
org$pandalanguage$pandac$Type* $tmp1146 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
*(&local6) = $tmp1145;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1145));
// unreffing REF($240:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1141);
// unreffing REF($235:panda.collections.Array.T)
// line 326
org$pandalanguage$pandac$Type* $tmp1147 = *(&local6);
org$pandalanguage$pandac$Type$Kind* $tmp1148 = &$tmp1147->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1149 = *$tmp1148;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1150;
$tmp1150 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1150->value = $tmp1149;
panda$core$Int64 $tmp1151 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp1152 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1151);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1153;
$tmp1153 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1153->value = $tmp1152;
ITable* $tmp1154 = ((panda$core$Equatable*) $tmp1150)->$class->itable;
while ($tmp1154->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1154 = $tmp1154->next;
}
$fn1156 $tmp1155 = $tmp1154->methods[0];
panda$core$Bit $tmp1157 = $tmp1155(((panda$core$Equatable*) $tmp1150), ((panda$core$Equatable*) $tmp1153));
bool $tmp1158 = $tmp1157.value;
if ($tmp1158) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp1159 = (panda$core$Int64) {326};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1160, $tmp1159);
abort(); // unreachable
block15:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1153)));
// unreffing REF($262:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1150)));
// unreffing REF($258:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
// line 327
panda$core$Int64 $tmp1161 = (panda$core$Int64) {0};
*(&local7) = $tmp1161;
// line 328
goto block17;
block17:;
org$pandalanguage$pandac$Type* $tmp1162 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
org$pandalanguage$pandac$MethodDecl** $tmp1163 = &param1->value;
org$pandalanguage$pandac$MethodDecl* $tmp1164 = *$tmp1163;
panda$collections$Array** $tmp1165 = &$tmp1164->genericParameters;
panda$collections$Array* $tmp1166 = *$tmp1165;
panda$core$Int64 $tmp1167 = *(&local1);
panda$core$Object* $tmp1168 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1166, $tmp1167);
org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$MethodDecl$GenericParameter($tmp1162, ((org$pandalanguage$pandac$MethodDecl$GenericParameter*) $tmp1168));
org$pandalanguage$pandac$Type* $tmp1169 = *(&local6);
ITable* $tmp1170 = ((panda$core$Equatable*) $tmp1162)->$class->itable;
while ($tmp1170->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1170 = $tmp1170->next;
}
$fn1172 $tmp1171 = $tmp1170->methods[1];
panda$core$Bit $tmp1173 = $tmp1171(((panda$core$Equatable*) $tmp1162), ((panda$core$Equatable*) $tmp1169));
bool $tmp1174 = $tmp1173.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp1168);
// unreffing REF($289:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1162));
// unreffing REF($281:org.pandalanguage.pandac.Type)
if ($tmp1174) goto block18; else goto block19;
block18:;
// line 329
panda$core$Int64 $tmp1175 = *(&local7);
panda$core$Int64 $tmp1176 = (panda$core$Int64) {1};
int64_t $tmp1177 = $tmp1175.value;
int64_t $tmp1178 = $tmp1176.value;
int64_t $tmp1179 = $tmp1177 + $tmp1178;
panda$core$Int64 $tmp1180 = (panda$core$Int64) {$tmp1179};
*(&local7) = $tmp1180;
goto block17;
block19:;
// line 331
panda$collections$Array* $tmp1181 = *(&local0);
panda$core$Int64 $tmp1182 = *(&local7);
panda$collections$Array* $tmp1183 = *(&local0);
panda$core$Int64 $tmp1184 = *(&local7);
panda$core$Object* $tmp1185 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1183, $tmp1184);
org$pandalanguage$pandac$Pair* $tmp1186 = *(&local5);
panda$core$Object** $tmp1187 = &$tmp1186->first;
panda$core$Object* $tmp1188 = *$tmp1187;
panda$collections$ListView* $tmp1189 = *(&local4);
org$pandalanguage$pandac$Type* $tmp1190 = org$pandalanguage$pandac$expression$Call$getSubtype$org$pandalanguage$pandac$Type$panda$collections$ListView$LTpanda$core$Int64$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1188), $tmp1189);
org$pandalanguage$pandac$Type* $tmp1191 = org$pandalanguage$pandac$Type$intersection$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1185), param0, $tmp1190);
panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp1181, $tmp1182, ((panda$core$Object*) $tmp1191));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1191));
// unreffing REF($331:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1190));
// unreffing REF($330:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1185);
// unreffing REF($322:panda.collections.Array.T)
org$pandalanguage$pandac$Type* $tmp1192 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
// unreffing parameter
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp1193 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
// unreffing argType
*(&local5) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1105);
// unreffing REF($128:panda.collections.Iterator.T)
panda$collections$ListView* $tmp1194 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1194));
// unreffing g
*(&local4) = ((panda$collections$ListView*) NULL);
goto block10;
block12:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1096));
// unreffing REF($117:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block9;
block9:;
panda$collections$ListView* $tmp1195 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
// unreffing generics
*(&local3) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$Type* $tmp1196 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
// unreffing paramType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block5;
block5:;
panda$core$Int64 $tmp1197 = *(&local1);
int64_t $tmp1198 = $tmp1066.value;
int64_t $tmp1199 = $tmp1197.value;
int64_t $tmp1200 = $tmp1198 - $tmp1199;
panda$core$Int64 $tmp1201 = (panda$core$Int64) {$tmp1200};
panda$core$UInt64 $tmp1202 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1201);
if ($tmp1068) goto block21; else goto block22;
block21:;
uint64_t $tmp1203 = $tmp1202.value;
uint64_t $tmp1204 = $tmp1070.value;
bool $tmp1205 = $tmp1203 >= $tmp1204;
panda$core$Bit $tmp1206 = (panda$core$Bit) {$tmp1205};
bool $tmp1207 = $tmp1206.value;
if ($tmp1207) goto block20; else goto block4;
block22:;
uint64_t $tmp1208 = $tmp1202.value;
uint64_t $tmp1209 = $tmp1070.value;
bool $tmp1210 = $tmp1208 > $tmp1209;
panda$core$Bit $tmp1211 = (panda$core$Bit) {$tmp1210};
bool $tmp1212 = $tmp1211.value;
if ($tmp1212) goto block20; else goto block4;
block20:;
int64_t $tmp1213 = $tmp1197.value;
int64_t $tmp1214 = $tmp1069.value;
int64_t $tmp1215 = $tmp1213 + $tmp1214;
panda$core$Int64 $tmp1216 = (panda$core$Int64) {$tmp1215};
*(&local1) = $tmp1216;
goto block3;
block4:;
// line 336
org$pandalanguage$pandac$MethodRef* $tmp1217 = (org$pandalanguage$pandac$MethodRef*) pandaObjectAlloc(41, (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class);
org$pandalanguage$pandac$Type** $tmp1218 = &param1->target;
org$pandalanguage$pandac$Type* $tmp1219 = *$tmp1218;
org$pandalanguage$pandac$MethodDecl** $tmp1220 = &param1->value;
org$pandalanguage$pandac$MethodDecl* $tmp1221 = *$tmp1220;
panda$collections$Array* $tmp1222 = *(&local0);
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q($tmp1217, param0, $tmp1219, $tmp1221, ((panda$collections$ListView*) $tmp1222));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1217));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1217));
// unreffing REF($403:org.pandalanguage.pandac.MethodRef)
panda$collections$Array* $tmp1223 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1223));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp1217;

}
org$pandalanguage$pandac$Pair* org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, panda$collections$ListView* param3, panda$collections$ListView* param4, org$pandalanguage$pandac$Compiler$TypeContext* param5) {

// line 343
org$pandalanguage$pandac$Pair* $tmp1224 = org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, param1, param2, param3, ((panda$collections$ListView*) NULL), param4, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1224));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1224));
// unreffing REF($1:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
return $tmp1224;

}
org$pandalanguage$pandac$Pair* org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, panda$collections$ListView* param3, panda$collections$ListView* param4, panda$collections$ListView* param5, org$pandalanguage$pandac$Compiler$TypeContext* param6) {

panda$core$Int64 local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$MethodDecl* local2 = NULL;
org$pandalanguage$pandac$MethodRef* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
panda$core$Bit local5;
panda$core$Int64 local6;
panda$core$Int64 local7;
org$pandalanguage$pandac$Pair* local8 = NULL;
panda$core$Bit local9;
org$pandalanguage$pandac$Type* local10 = NULL;
org$pandalanguage$pandac$Pair* local11 = NULL;
// line 351
ITable* $tmp1225 = ((panda$collections$CollectionView*) param3)->$class->itable;
while ($tmp1225->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1225 = $tmp1225->next;
}
$fn1227 $tmp1226 = $tmp1225->methods[0];
panda$core$Int64 $tmp1228 = $tmp1226(((panda$collections$CollectionView*) param3));
panda$core$Int64 $tmp1229 = (panda$core$Int64) {0};
panda$core$Bit $tmp1230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1228, $tmp1229);
bool $tmp1231 = $tmp1230.value;
if ($tmp1231) goto block1; else goto block2;
block1:;
// line 352
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
return ((org$pandalanguage$pandac$Pair*) NULL);
block2:;
// line 354
panda$core$Int64 $tmp1232 = (panda$core$Int64) {9223372036854775807};
*(&local0) = $tmp1232;
// line 355
panda$collections$Array* $tmp1233 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1233);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
panda$collections$Array* $tmp1234 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1234));
*(&local1) = $tmp1233;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.MethodRef>)
// line 356
ITable* $tmp1235 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp1235->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1235 = $tmp1235->next;
}
$fn1237 $tmp1236 = $tmp1235->methods[0];
panda$collections$Iterator* $tmp1238 = $tmp1236(((panda$collections$Iterable*) param3));
goto block3;
block3:;
ITable* $tmp1239 = $tmp1238->$class->itable;
while ($tmp1239->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1239 = $tmp1239->next;
}
$fn1241 $tmp1240 = $tmp1239->methods[0];
panda$core$Bit $tmp1242 = $tmp1240($tmp1238);
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block5; else goto block4;
block4:;
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp1244 = $tmp1238->$class->itable;
while ($tmp1244->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1244 = $tmp1244->next;
}
$fn1246 $tmp1245 = $tmp1244->methods[1];
panda$core$Object* $tmp1247 = $tmp1245($tmp1238);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1247)));
org$pandalanguage$pandac$MethodDecl* $tmp1248 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1248));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) $tmp1247);
// line 357
org$pandalanguage$pandac$MethodDecl* $tmp1249 = *(&local2);
panda$collections$Array** $tmp1250 = &$tmp1249->parameters;
panda$collections$Array* $tmp1251 = *$tmp1250;
ITable* $tmp1252 = ((panda$collections$CollectionView*) $tmp1251)->$class->itable;
while ($tmp1252->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1252 = $tmp1252->next;
}
$fn1254 $tmp1253 = $tmp1252->methods[0];
panda$core$Int64 $tmp1255 = $tmp1253(((panda$collections$CollectionView*) $tmp1251));
ITable* $tmp1256 = ((panda$collections$CollectionView*) param5)->$class->itable;
while ($tmp1256->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1256 = $tmp1256->next;
}
$fn1258 $tmp1257 = $tmp1256->methods[0];
panda$core$Int64 $tmp1259 = $tmp1257(((panda$collections$CollectionView*) param5));
int64_t $tmp1260 = $tmp1255.value;
int64_t $tmp1261 = $tmp1259.value;
bool $tmp1262 = $tmp1260 != $tmp1261;
panda$core$Bit $tmp1263 = (panda$core$Bit) {$tmp1262};
bool $tmp1264 = $tmp1263.value;
if ($tmp1264) goto block6; else goto block7;
block6:;
// line 358
panda$core$Panda$unref$panda$core$Object$Q($tmp1247);
// unreffing REF($44:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp1265 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1265));
// unreffing m
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block3;
block7:;
// line 360
org$pandalanguage$pandac$MethodDecl* $tmp1266 = *(&local2);
panda$core$Bit $tmp1267 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, $tmp1266);
panda$core$Bit $tmp1268 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1267);
bool $tmp1269 = $tmp1268.value;
if ($tmp1269) goto block8; else goto block9;
block8:;
// line 361
panda$core$Panda$unref$panda$core$Object$Q($tmp1247);
// unreffing REF($44:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp1270 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1270));
// unreffing m
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block3;
block9:;
// line 363
*(&local3) = ((org$pandalanguage$pandac$MethodRef*) NULL);
// line 364
panda$core$Bit $tmp1271 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp1272 = $tmp1271.value;
if ($tmp1272) goto block10; else goto block12;
block10:;
// line 365
$fn1274 $tmp1273 = ($fn1274) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1275 = $tmp1273(param2);
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1275));
org$pandalanguage$pandac$Type* $tmp1276 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1276));
*(&local4) = $tmp1275;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1275));
// unreffing REF($104:org.pandalanguage.pandac.Type)
// line 366
org$pandalanguage$pandac$Type* $tmp1277 = *(&local4);
org$pandalanguage$pandac$Type$Kind* $tmp1278 = &$tmp1277->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1279 = *$tmp1278;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1280;
$tmp1280 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1280->value = $tmp1279;
panda$core$Int64 $tmp1281 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp1282 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1281);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1283;
$tmp1283 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1283->value = $tmp1282;
ITable* $tmp1284 = ((panda$core$Equatable*) $tmp1280)->$class->itable;
while ($tmp1284->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1284 = $tmp1284->next;
}
$fn1286 $tmp1285 = $tmp1284->methods[0];
panda$core$Bit $tmp1287 = $tmp1285(((panda$core$Equatable*) $tmp1280), ((panda$core$Equatable*) $tmp1283));
bool $tmp1288 = $tmp1287.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1283)));
// unreffing REF($123:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1280)));
// unreffing REF($119:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1288) goto block13; else goto block14;
block13:;
// line 367
org$pandalanguage$pandac$Type* $tmp1289 = *(&local4);
panda$core$Weak** $tmp1290 = &$tmp1289->genericMethodParameter;
panda$core$Weak* $tmp1291 = *$tmp1290;
panda$core$Object* $tmp1292 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1291);
org$pandalanguage$pandac$Type** $tmp1293 = &((org$pandalanguage$pandac$MethodDecl$GenericParameter*) $tmp1292)->bound;
org$pandalanguage$pandac$Type* $tmp1294 = *$tmp1293;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1294));
org$pandalanguage$pandac$Type* $tmp1295 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1295));
*(&local4) = $tmp1294;
panda$core$Panda$unref$panda$core$Object$Q($tmp1292);
// unreffing REF($139:panda.core.Weak.T)
goto block14;
block14:;
// line 369
org$pandalanguage$pandac$MethodRef* $tmp1296 = (org$pandalanguage$pandac$MethodRef*) pandaObjectAlloc(41, (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class);
org$pandalanguage$pandac$Type* $tmp1297 = *(&local4);
org$pandalanguage$pandac$MethodDecl* $tmp1298 = *(&local2);
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q($tmp1296, param0, $tmp1297, $tmp1298, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1296));
org$pandalanguage$pandac$MethodRef* $tmp1299 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
*(&local3) = $tmp1296;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1296));
// unreffing REF($155:org.pandalanguage.pandac.MethodRef)
org$pandalanguage$pandac$Type* $tmp1300 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1300));
// unreffing owner
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
goto block11;
block12:;
// line 371
org$pandalanguage$pandac$MethodDecl* $tmp1301 = *(&local2);
org$pandalanguage$pandac$Annotations** $tmp1302 = &$tmp1301->annotations;
org$pandalanguage$pandac$Annotations* $tmp1303 = *$tmp1302;
panda$core$Bit $tmp1304 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp1303);
bool $tmp1305 = $tmp1304.value;
if ($tmp1305) goto block17; else goto block18;
block17:;
*(&local5) = $tmp1304;
goto block19;
block18:;
org$pandalanguage$pandac$MethodDecl* $tmp1306 = *(&local2);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp1307 = &$tmp1306->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp1308 = *$tmp1307;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1309;
$tmp1309 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1309->value = $tmp1308;
panda$core$Int64 $tmp1310 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1311 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1310);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1312;
$tmp1312 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1312->value = $tmp1311;
ITable* $tmp1313 = ((panda$core$Equatable*) $tmp1309)->$class->itable;
while ($tmp1313->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1313 = $tmp1313->next;
}
$fn1315 $tmp1314 = $tmp1313->methods[0];
panda$core$Bit $tmp1316 = $tmp1314(((panda$core$Equatable*) $tmp1309), ((panda$core$Equatable*) $tmp1312));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1312)));
// unreffing REF($190:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1309)));
// unreffing REF($186:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
*(&local5) = $tmp1316;
goto block19;
block19:;
panda$core$Bit $tmp1317 = *(&local5);
bool $tmp1318 = $tmp1317.value;
if ($tmp1318) goto block15; else goto block20;
block15:;
// line 372
org$pandalanguage$pandac$MethodRef* $tmp1319 = (org$pandalanguage$pandac$MethodRef*) pandaObjectAlloc(41, (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class);
org$pandalanguage$pandac$MethodDecl* $tmp1320 = *(&local2);
panda$core$Weak** $tmp1321 = &$tmp1320->owner;
panda$core$Weak* $tmp1322 = *$tmp1321;
panda$core$Object* $tmp1323 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1322);
org$pandalanguage$pandac$Type** $tmp1324 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1323)->type;
org$pandalanguage$pandac$Type* $tmp1325 = *$tmp1324;
org$pandalanguage$pandac$MethodDecl* $tmp1326 = *(&local2);
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q($tmp1319, param0, $tmp1325, $tmp1326, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
org$pandalanguage$pandac$MethodRef* $tmp1327 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1327));
*(&local3) = $tmp1319;
panda$core$Panda$unref$panda$core$Object$Q($tmp1323);
// unreffing REF($210:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
// unreffing REF($205:org.pandalanguage.pandac.MethodRef)
goto block16;
block20:;
// line 1
// line 375
org$pandalanguage$pandac$MethodRef* $tmp1328 = (org$pandalanguage$pandac$MethodRef*) pandaObjectAlloc(41, (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class);
panda$collections$Stack** $tmp1329 = &param0->currentClass;
panda$collections$Stack* $tmp1330 = *$tmp1329;
panda$core$Int64 $tmp1331 = (panda$core$Int64) {0};
panda$core$Object* $tmp1332 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp1330, $tmp1331);
org$pandalanguage$pandac$Type** $tmp1333 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1332)->type;
org$pandalanguage$pandac$Type* $tmp1334 = *$tmp1333;
org$pandalanguage$pandac$MethodDecl* $tmp1335 = *(&local2);
panda$core$Weak** $tmp1336 = &$tmp1335->owner;
panda$core$Weak* $tmp1337 = *$tmp1336;
panda$core$Object* $tmp1338 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1337);
org$pandalanguage$pandac$Type* $tmp1339 = org$pandalanguage$pandac$Compiler$findType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(param0, $tmp1334, ((org$pandalanguage$pandac$ClassDecl*) $tmp1338));
org$pandalanguage$pandac$MethodDecl* $tmp1340 = *(&local2);
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q($tmp1328, param0, $tmp1339, $tmp1340, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
org$pandalanguage$pandac$MethodRef* $tmp1341 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1341));
*(&local3) = $tmp1328;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1339));
// unreffing REF($246:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp1338);
// unreffing REF($244:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp1332);
// unreffing REF($236:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
// unreffing REF($231:org.pandalanguage.pandac.MethodRef)
goto block16;
block16:;
goto block11;
block11:;
// line 378
org$pandalanguage$pandac$MethodRef* $tmp1342 = *(&local3);
org$pandalanguage$pandac$MethodRef* $tmp1343 = org$pandalanguage$pandac$expression$Call$performTypeInference$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$MethodRef$Q(param0, $tmp1342, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1343));
org$pandalanguage$pandac$MethodRef* $tmp1344 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1344));
*(&local3) = $tmp1343;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1343));
// unreffing REF($272:org.pandalanguage.pandac.MethodRef?)
// line 379
panda$core$Int64 $tmp1345 = (panda$core$Int64) {0};
*(&local6) = $tmp1345;
// line 380
panda$core$Int64 $tmp1346 = (panda$core$Int64) {0};
ITable* $tmp1347 = ((panda$collections$CollectionView*) param5)->$class->itable;
while ($tmp1347->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1347 = $tmp1347->next;
}
$fn1349 $tmp1348 = $tmp1347->methods[0];
panda$core$Int64 $tmp1350 = $tmp1348(((panda$collections$CollectionView*) param5));
panda$core$Bit $tmp1351 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1352 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1346, $tmp1350, $tmp1351);
panda$core$Int64 $tmp1353 = $tmp1352.min;
*(&local7) = $tmp1353;
panda$core$Int64 $tmp1354 = $tmp1352.max;
panda$core$Bit $tmp1355 = $tmp1352.inclusive;
bool $tmp1356 = $tmp1355.value;
panda$core$Int64 $tmp1357 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1358 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1357);
if ($tmp1356) goto block24; else goto block25;
block24:;
int64_t $tmp1359 = $tmp1353.value;
int64_t $tmp1360 = $tmp1354.value;
bool $tmp1361 = $tmp1359 <= $tmp1360;
panda$core$Bit $tmp1362 = (panda$core$Bit) {$tmp1361};
bool $tmp1363 = $tmp1362.value;
if ($tmp1363) goto block21; else goto block22;
block25:;
int64_t $tmp1364 = $tmp1353.value;
int64_t $tmp1365 = $tmp1354.value;
bool $tmp1366 = $tmp1364 < $tmp1365;
panda$core$Bit $tmp1367 = (panda$core$Bit) {$tmp1366};
bool $tmp1368 = $tmp1367.value;
if ($tmp1368) goto block21; else goto block22;
block21:;
// line 381
panda$core$Int64 $tmp1369 = *(&local7);
ITable* $tmp1370 = param5->$class->itable;
while ($tmp1370->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp1370 = $tmp1370->next;
}
$fn1372 $tmp1371 = $tmp1370->methods[0];
panda$core$Object* $tmp1373 = $tmp1371(param5, $tmp1369);
org$pandalanguage$pandac$MethodRef* $tmp1374 = *(&local3);
panda$core$Int64 $tmp1375 = *(&local7);
org$pandalanguage$pandac$Type* $tmp1376 = org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp1374, $tmp1375);
org$pandalanguage$pandac$Pair* $tmp1377 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Cpanda$core$Int64$GT$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp1373), $tmp1376);
*(&local8) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1377));
org$pandalanguage$pandac$Pair* $tmp1378 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
*(&local8) = $tmp1377;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1377));
// unreffing REF($322:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, panda.core.Int64>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1376));
// unreffing REF($321:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1373);
// unreffing REF($317:panda.collections.ListView.T)
// line 382
org$pandalanguage$pandac$Pair* $tmp1379 = *(&local8);
panda$core$Bit $tmp1380 = panda$core$Bit$init$builtin_bit($tmp1379 == NULL);
bool $tmp1381 = $tmp1380.value;
if ($tmp1381) goto block26; else goto block27;
block26:;
// line 383
org$pandalanguage$pandac$Pair* $tmp1382 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1382));
// unreffing argCost
*(&local8) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp1383 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1383));
// unreffing ref
*(&local3) = ((org$pandalanguage$pandac$MethodRef*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1247);
// unreffing REF($44:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp1384 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1384));
// unreffing m
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block3;
block27:;
// line 385
panda$core$Int64 $tmp1385 = *(&local6);
org$pandalanguage$pandac$Pair* $tmp1386 = *(&local8);
panda$core$Object** $tmp1387 = &$tmp1386->second;
panda$core$Object* $tmp1388 = *$tmp1387;
int64_t $tmp1389 = $tmp1385.value;
int64_t $tmp1390 = ((panda$core$Int64$wrapper*) $tmp1388)->value.value;
int64_t $tmp1391 = $tmp1389 + $tmp1390;
panda$core$Int64 $tmp1392 = (panda$core$Int64) {$tmp1391};
*(&local6) = $tmp1392;
org$pandalanguage$pandac$Pair* $tmp1393 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
// unreffing argCost
*(&local8) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block23;
block23:;
panda$core$Int64 $tmp1394 = *(&local7);
int64_t $tmp1395 = $tmp1354.value;
int64_t $tmp1396 = $tmp1394.value;
int64_t $tmp1397 = $tmp1395 - $tmp1396;
panda$core$Int64 $tmp1398 = (panda$core$Int64) {$tmp1397};
panda$core$UInt64 $tmp1399 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1398);
if ($tmp1356) goto block29; else goto block30;
block29:;
uint64_t $tmp1400 = $tmp1399.value;
uint64_t $tmp1401 = $tmp1358.value;
bool $tmp1402 = $tmp1400 >= $tmp1401;
panda$core$Bit $tmp1403 = (panda$core$Bit) {$tmp1402};
bool $tmp1404 = $tmp1403.value;
if ($tmp1404) goto block28; else goto block22;
block30:;
uint64_t $tmp1405 = $tmp1399.value;
uint64_t $tmp1406 = $tmp1358.value;
bool $tmp1407 = $tmp1405 > $tmp1406;
panda$core$Bit $tmp1408 = (panda$core$Bit) {$tmp1407};
bool $tmp1409 = $tmp1408.value;
if ($tmp1409) goto block28; else goto block22;
block28:;
int64_t $tmp1410 = $tmp1394.value;
int64_t $tmp1411 = $tmp1357.value;
int64_t $tmp1412 = $tmp1410 + $tmp1411;
panda$core$Int64 $tmp1413 = (panda$core$Int64) {$tmp1412};
*(&local7) = $tmp1413;
goto block21;
block22:;
// line 387
panda$core$Int64* $tmp1414 = &param6->$rawValue;
panda$core$Int64 $tmp1415 = *$tmp1414;
panda$core$Int64 $tmp1416 = (panda$core$Int64) {2};
panda$core$Bit $tmp1417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1415, $tmp1416);
bool $tmp1418 = $tmp1417.value;
if ($tmp1418) goto block32; else goto block33;
block32:;
// line 389
org$pandalanguage$pandac$MethodDecl* $tmp1419 = *(&local2);
org$pandalanguage$pandac$Type** $tmp1420 = &$tmp1419->returnType;
org$pandalanguage$pandac$Type* $tmp1421 = *$tmp1420;
org$pandalanguage$pandac$Type* $tmp1422 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1423 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1421, $tmp1422);
bool $tmp1424 = $tmp1423.value;
if ($tmp1424) goto block36; else goto block37;
block36:;
*(&local9) = $tmp1423;
goto block38;
block37:;
org$pandalanguage$pandac$MethodRef* $tmp1425 = *(&local3);
org$pandalanguage$pandac$Type* $tmp1426 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type($tmp1425);
panda$core$Bit $tmp1427 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp1426);
panda$core$Bit $tmp1428 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1427);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1426));
// unreffing REF($426:org.pandalanguage.pandac.Type)
*(&local9) = $tmp1428;
goto block38;
block38:;
panda$core$Bit $tmp1429 = *(&local9);
bool $tmp1430 = $tmp1429.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1422));
// unreffing REF($419:org.pandalanguage.pandac.Type)
if ($tmp1430) goto block34; else goto block35;
block34:;
// line 390
org$pandalanguage$pandac$MethodRef* $tmp1431 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1431));
// unreffing ref
*(&local3) = ((org$pandalanguage$pandac$MethodRef*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1247);
// unreffing REF($44:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp1432 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1432));
// unreffing m
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block3;
block35:;
goto block31;
block33:;
panda$core$Int64 $tmp1433 = (panda$core$Int64) {3};
panda$core$Bit $tmp1434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1415, $tmp1433);
bool $tmp1435 = $tmp1434.value;
if ($tmp1435) goto block39; else goto block31;
block39:;
org$pandalanguage$pandac$Type** $tmp1436 = (org$pandalanguage$pandac$Type**) (param6->$data + 0);
org$pandalanguage$pandac$Type* $tmp1437 = *$tmp1436;
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1437));
org$pandalanguage$pandac$Type* $tmp1438 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1438));
*(&local10) = $tmp1437;
// line 394
org$pandalanguage$pandac$MethodRef* $tmp1439 = *(&local3);
org$pandalanguage$pandac$Type* $tmp1440 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type($tmp1439);
org$pandalanguage$pandac$Type* $tmp1441 = *(&local10);
org$pandalanguage$pandac$Pair* $tmp1442 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Cpanda$core$Int64$GT$Q(param0, $tmp1440, $tmp1441);
*(&local11) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1442));
org$pandalanguage$pandac$Pair* $tmp1443 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1443));
*(&local11) = $tmp1442;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1442));
// unreffing REF($473:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, panda.core.Int64>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1440));
// unreffing REF($471:org.pandalanguage.pandac.Type)
// line 395
org$pandalanguage$pandac$Pair* $tmp1444 = *(&local11);
panda$core$Bit $tmp1445 = panda$core$Bit$init$builtin_bit($tmp1444 == NULL);
bool $tmp1446 = $tmp1445.value;
if ($tmp1446) goto block40; else goto block41;
block40:;
// line 396
org$pandalanguage$pandac$Pair* $tmp1447 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1447));
// unreffing returnCost
*(&local11) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Type* $tmp1448 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1448));
// unreffing t
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp1449 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
// unreffing ref
*(&local3) = ((org$pandalanguage$pandac$MethodRef*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1247);
// unreffing REF($44:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp1450 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
// unreffing m
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block3;
block41:;
// line 398
panda$core$Int64 $tmp1451 = *(&local6);
org$pandalanguage$pandac$Pair* $tmp1452 = *(&local11);
panda$core$Object** $tmp1453 = &$tmp1452->second;
panda$core$Object* $tmp1454 = *$tmp1453;
int64_t $tmp1455 = $tmp1451.value;
int64_t $tmp1456 = ((panda$core$Int64$wrapper*) $tmp1454)->value.value;
int64_t $tmp1457 = $tmp1455 + $tmp1456;
panda$core$Int64 $tmp1458 = (panda$core$Int64) {$tmp1457};
*(&local6) = $tmp1458;
org$pandalanguage$pandac$Pair* $tmp1459 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1459));
// unreffing returnCost
*(&local11) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Type* $tmp1460 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
// unreffing t
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
goto block31;
block31:;
// line 401
panda$core$Int64 $tmp1461 = *(&local6);
org$pandalanguage$pandac$MethodDecl* $tmp1462 = *(&local2);
panda$core$Int64 $tmp1463 = org$pandalanguage$pandac$MethodDecl$get_priority$R$panda$core$Int64($tmp1462);
int64_t $tmp1464 = $tmp1461.value;
int64_t $tmp1465 = $tmp1463.value;
int64_t $tmp1466 = $tmp1464 - $tmp1465;
panda$core$Int64 $tmp1467 = (panda$core$Int64) {$tmp1466};
*(&local6) = $tmp1467;
// line 402
panda$core$Int64 $tmp1468 = *(&local6);
panda$core$Int64 $tmp1469 = *(&local0);
int64_t $tmp1470 = $tmp1468.value;
int64_t $tmp1471 = $tmp1469.value;
bool $tmp1472 = $tmp1470 < $tmp1471;
panda$core$Bit $tmp1473 = (panda$core$Bit) {$tmp1472};
bool $tmp1474 = $tmp1473.value;
if ($tmp1474) goto block42; else goto block43;
block42:;
// line 403
panda$core$Int64 $tmp1475 = *(&local6);
*(&local0) = $tmp1475;
// line 404
panda$collections$Array* $tmp1476 = *(&local1);
panda$collections$Array$clear($tmp1476);
goto block43;
block43:;
// line 406
panda$core$Int64 $tmp1477 = *(&local6);
panda$core$Int64 $tmp1478 = *(&local0);
panda$core$Bit $tmp1479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1477, $tmp1478);
bool $tmp1480 = $tmp1479.value;
if ($tmp1480) goto block44; else goto block45;
block44:;
// line 407
panda$collections$Array* $tmp1481 = *(&local1);
org$pandalanguage$pandac$MethodRef* $tmp1482 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp1481, ((panda$core$Object*) $tmp1482));
goto block45;
block45:;
org$pandalanguage$pandac$MethodRef* $tmp1483 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1483));
// unreffing ref
*(&local3) = ((org$pandalanguage$pandac$MethodRef*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1247);
// unreffing REF($44:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp1484 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1484));
// unreffing m
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1238));
// unreffing REF($33:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 410
panda$collections$Array* $tmp1485 = *(&local1);
ITable* $tmp1486 = ((panda$collections$CollectionView*) $tmp1485)->$class->itable;
while ($tmp1486->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1486 = $tmp1486->next;
}
$fn1488 $tmp1487 = $tmp1486->methods[0];
panda$core$Int64 $tmp1489 = $tmp1487(((panda$collections$CollectionView*) $tmp1485));
panda$core$Int64 $tmp1490 = (panda$core$Int64) {0};
panda$core$Bit $tmp1491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1489, $tmp1490);
bool $tmp1492 = $tmp1491.value;
if ($tmp1492) goto block46; else goto block47;
block46:;
// line 411
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
panda$collections$Array* $tmp1493 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1493));
// unreffing best
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$Pair*) NULL);
block47:;
// line 413
org$pandalanguage$pandac$Pair* $tmp1494 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$collections$Array* $tmp1495 = *(&local1);
panda$core$Int64 $tmp1496 = *(&local0);
panda$core$Int64$wrapper* $tmp1497;
$tmp1497 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1497->value = $tmp1496;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp1494, ((panda$core$Object*) ((panda$collections$ListView*) $tmp1495)), ((panda$core$Object*) $tmp1497));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1494));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1497));
// unreffing REF($622:org.pandalanguage.pandac.Pair.B)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1494));
// unreffing REF($616:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>)
panda$collections$Array* $tmp1498 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1498));
// unreffing best
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp1494;

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Call$callMethodObject$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, panda$collections$ListView* param3, org$pandalanguage$pandac$Compiler$TypeContext* param4) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$core$Int64 local3;
org$pandalanguage$pandac$IR$Value* local4 = NULL;
org$pandalanguage$pandac$IR$Value* local5 = NULL;
panda$core$Int64 local6;
org$pandalanguage$pandac$Type* local7 = NULL;
org$pandalanguage$pandac$Type* local8 = NULL;
org$pandalanguage$pandac$SymbolTable* local9 = NULL;
org$pandalanguage$pandac$FieldDecl* local10 = NULL;
org$pandalanguage$pandac$IR$Value* local11 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local12;
org$pandalanguage$pandac$IR$Statement$ID local13;
org$pandalanguage$pandac$FieldDecl* local14 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local15;
org$pandalanguage$pandac$IR$Statement$ID local16;
org$pandalanguage$pandac$IR$Statement$ID local17;
org$pandalanguage$pandac$IR$Block$ID local18;
org$pandalanguage$pandac$IR$Block$ID local19;
org$pandalanguage$pandac$IR$Block$ID local20;
org$pandalanguage$pandac$IR$Value* local21 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local22;
panda$collections$Array* local23 = NULL;
panda$core$Int64 local24;
org$pandalanguage$pandac$Type* local25 = NULL;
org$pandalanguage$pandac$IR$Value* local26 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local27;
org$pandalanguage$pandac$IR$Statement$ID local28;
org$pandalanguage$pandac$IR$Value* local29 = NULL;
// line 419
org$pandalanguage$pandac$IR** $tmp1499 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp1500 = *$tmp1499;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1500));
org$pandalanguage$pandac$IR* $tmp1501 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1501));
*(&local0) = $tmp1500;
// line 420
$fn1503 $tmp1502 = ($fn1503) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1504 = $tmp1502(param2);
org$pandalanguage$pandac$Type* $tmp1505 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp1504);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1505));
org$pandalanguage$pandac$Type* $tmp1506 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1506));
*(&local1) = $tmp1505;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1505));
// unreffing REF($13:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1504));
// unreffing REF($12:org.pandalanguage.pandac.Type)
// line 421
org$pandalanguage$pandac$Type* $tmp1507 = *(&local1);
panda$core$Bit $tmp1508 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit($tmp1507);
panda$core$Bit $tmp1509 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1508);
bool $tmp1510 = $tmp1509.value;
if ($tmp1510) goto block1; else goto block2;
block1:;
// line 422
org$pandalanguage$pandac$Type* $tmp1511 = *(&local1);
panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1513, ((panda$core$Object*) $tmp1511));
panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1512, &$s1515);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp1514);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
// unreffing REF($37:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1512));
// unreffing REF($36:panda.core.String)
// line 423
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp1516 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1516));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1517 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1517));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block2:;
// line 425
org$pandalanguage$pandac$Type* $tmp1518 = *(&local1);
panda$core$Int64 $tmp1519 = org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64($tmp1518);
ITable* $tmp1520 = ((panda$collections$CollectionView*) param3)->$class->itable;
while ($tmp1520->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1520 = $tmp1520->next;
}
$fn1522 $tmp1521 = $tmp1520->methods[0];
panda$core$Int64 $tmp1523 = $tmp1521(((panda$collections$CollectionView*) param3));
int64_t $tmp1524 = $tmp1519.value;
int64_t $tmp1525 = $tmp1523.value;
bool $tmp1526 = $tmp1524 != $tmp1525;
panda$core$Bit $tmp1527 = (panda$core$Bit) {$tmp1526};
bool $tmp1528 = $tmp1527.value;
if ($tmp1528) goto block3; else goto block4;
block3:;
// line 426
org$pandalanguage$pandac$Type* $tmp1529 = *(&local1);
panda$core$String* $tmp1530 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1531, ((panda$core$Object*) $tmp1529));
panda$core$String* $tmp1532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1530, &$s1533);
org$pandalanguage$pandac$Type* $tmp1534 = *(&local1);
panda$core$Int64 $tmp1535 = org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64($tmp1534);
panda$core$Int64$wrapper* $tmp1536;
$tmp1536 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1536->value = $tmp1535;
panda$core$String* $tmp1537 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1532, ((panda$core$Object*) $tmp1536));
panda$core$String* $tmp1538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1537, &$s1539);
org$pandalanguage$pandac$Type* $tmp1540 = *(&local1);
panda$core$Int64 $tmp1541 = org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64($tmp1540);
panda$core$Int64 $tmp1542 = (panda$core$Int64) {1};
panda$core$Bit $tmp1543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1541, $tmp1542);
panda$core$Bit$wrapper* $tmp1544;
$tmp1544 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp1544->value = $tmp1543;
ITable* $tmp1545 = ((panda$core$Formattable*) $tmp1544)->$class->itable;
while ($tmp1545->$class != (panda$core$Class*) &panda$core$Formattable$class) {
    $tmp1545 = $tmp1545->next;
}
$fn1547 $tmp1546 = $tmp1545->methods[0];
panda$core$String* $tmp1548 = $tmp1546(((panda$core$Formattable*) $tmp1544), &$s1549);
panda$core$String* $tmp1550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1551, $tmp1548);
panda$core$String* $tmp1552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1550, &$s1553);
ITable* $tmp1554 = ((panda$collections$CollectionView*) param3)->$class->itable;
while ($tmp1554->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1554 = $tmp1554->next;
}
$fn1556 $tmp1555 = $tmp1554->methods[0];
panda$core$Int64 $tmp1557 = $tmp1555(((panda$collections$CollectionView*) param3));
panda$core$Int64$wrapper* $tmp1558;
$tmp1558 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1558->value = $tmp1557;
panda$core$String* $tmp1559 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1552, ((panda$core$Object*) $tmp1558));
panda$core$String* $tmp1560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1559, &$s1561);
panda$core$String* $tmp1562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1538, $tmp1560);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp1562);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1562));
// unreffing REF($96:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1560));
// unreffing REF($95:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1559));
// unreffing REF($94:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1558));
// unreffing REF($93:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1552));
// unreffing REF($89:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1550));
// unreffing REF($88:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1548));
// unreffing REF($87:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Formattable*) $tmp1544)));
// unreffing REF($85:panda.core.Formattable)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1538));
// unreffing REF($80:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1537));
// unreffing REF($79:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1536));
// unreffing REF($78:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1532));
// unreffing REF($75:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1530));
// unreffing REF($74:panda.core.String)
// line 428
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp1563 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1563));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1564 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1564));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block4:;
// line 430
panda$collections$Array* $tmp1565 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
ITable* $tmp1566 = ((panda$collections$CollectionView*) param3)->$class->itable;
while ($tmp1566->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1566 = $tmp1566->next;
}
$fn1568 $tmp1567 = $tmp1566->methods[0];
panda$core$Int64 $tmp1569 = $tmp1567(((panda$collections$CollectionView*) param3));
panda$collections$Array$init$panda$core$Int64($tmp1565, $tmp1569);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1565));
panda$collections$Array* $tmp1570 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1570));
*(&local2) = $tmp1565;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1565));
// unreffing REF($152:panda.collections.Array<org.pandalanguage.pandac.IR.Value>)
// line 431
panda$core$Int64 $tmp1571 = (panda$core$Int64) {0};
ITable* $tmp1572 = ((panda$collections$CollectionView*) param3)->$class->itable;
while ($tmp1572->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1572 = $tmp1572->next;
}
$fn1574 $tmp1573 = $tmp1572->methods[0];
panda$core$Int64 $tmp1575 = $tmp1573(((panda$collections$CollectionView*) param3));
panda$core$Bit $tmp1576 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1577 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1571, $tmp1575, $tmp1576);
panda$core$Int64 $tmp1578 = $tmp1577.min;
*(&local3) = $tmp1578;
panda$core$Int64 $tmp1579 = $tmp1577.max;
panda$core$Bit $tmp1580 = $tmp1577.inclusive;
bool $tmp1581 = $tmp1580.value;
panda$core$Int64 $tmp1582 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1583 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1582);
if ($tmp1581) goto block8; else goto block9;
block8:;
int64_t $tmp1584 = $tmp1578.value;
int64_t $tmp1585 = $tmp1579.value;
bool $tmp1586 = $tmp1584 <= $tmp1585;
panda$core$Bit $tmp1587 = (panda$core$Bit) {$tmp1586};
bool $tmp1588 = $tmp1587.value;
if ($tmp1588) goto block5; else goto block6;
block9:;
int64_t $tmp1589 = $tmp1578.value;
int64_t $tmp1590 = $tmp1579.value;
bool $tmp1591 = $tmp1589 < $tmp1590;
panda$core$Bit $tmp1592 = (panda$core$Bit) {$tmp1591};
bool $tmp1593 = $tmp1592.value;
if ($tmp1593) goto block5; else goto block6;
block5:;
// line 432
panda$core$Int64 $tmp1594 = *(&local3);
ITable* $tmp1595 = param3->$class->itable;
while ($tmp1595->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp1595 = $tmp1595->next;
}
$fn1597 $tmp1596 = $tmp1595->methods[0];
panda$core$Object* $tmp1598 = $tmp1596(param3, $tmp1594);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1599 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1600 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1601 = *(&local1);
panda$core$Int64 $tmp1602 = *(&local3);
org$pandalanguage$pandac$Type* $tmp1603 = org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp1601, $tmp1602);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1599, $tmp1600, $tmp1603);
org$pandalanguage$pandac$IR$Value* $tmp1604 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp1598), $tmp1599);
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1604));
org$pandalanguage$pandac$IR$Value* $tmp1605 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1605));
*(&local4) = $tmp1604;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1604));
// unreffing REF($207:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1603));
// unreffing REF($205:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1599));
// unreffing REF($201:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp1598);
// unreffing REF($199:panda.collections.ListView.T)
// line 434
org$pandalanguage$pandac$IR$Value* $tmp1606 = *(&local4);
panda$core$Bit $tmp1607 = panda$core$Bit$init$builtin_bit($tmp1606 == NULL);
bool $tmp1608 = $tmp1607.value;
if ($tmp1608) goto block10; else goto block11;
block10:;
// line 435
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp1609 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1609));
// unreffing compiled
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp1610 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1610));
// unreffing finalArgs
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp1611 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1611));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1612 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1612));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block11:;
// line 437
panda$collections$Array* $tmp1613 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp1614 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp1613, ((panda$core$Object*) $tmp1614));
org$pandalanguage$pandac$IR$Value* $tmp1615 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1615));
// unreffing compiled
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block7;
block7:;
panda$core$Int64 $tmp1616 = *(&local3);
int64_t $tmp1617 = $tmp1579.value;
int64_t $tmp1618 = $tmp1616.value;
int64_t $tmp1619 = $tmp1617 - $tmp1618;
panda$core$Int64 $tmp1620 = (panda$core$Int64) {$tmp1619};
panda$core$UInt64 $tmp1621 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1620);
if ($tmp1581) goto block13; else goto block14;
block13:;
uint64_t $tmp1622 = $tmp1621.value;
uint64_t $tmp1623 = $tmp1583.value;
bool $tmp1624 = $tmp1622 >= $tmp1623;
panda$core$Bit $tmp1625 = (panda$core$Bit) {$tmp1624};
bool $tmp1626 = $tmp1625.value;
if ($tmp1626) goto block12; else goto block6;
block14:;
uint64_t $tmp1627 = $tmp1621.value;
uint64_t $tmp1628 = $tmp1583.value;
bool $tmp1629 = $tmp1627 > $tmp1628;
panda$core$Bit $tmp1630 = (panda$core$Bit) {$tmp1629};
bool $tmp1631 = $tmp1630.value;
if ($tmp1631) goto block12; else goto block6;
block12:;
int64_t $tmp1632 = $tmp1616.value;
int64_t $tmp1633 = $tmp1582.value;
int64_t $tmp1634 = $tmp1632 + $tmp1633;
panda$core$Int64 $tmp1635 = (panda$core$Int64) {$tmp1634};
*(&local3) = $tmp1635;
goto block5;
block6:;
// line 439
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 440
org$pandalanguage$pandac$IR* $tmp1636 = *(&local0);
panda$collections$Array** $tmp1637 = &$tmp1636->locals;
panda$collections$Array* $tmp1638 = *$tmp1637;
ITable* $tmp1639 = ((panda$collections$CollectionView*) $tmp1638)->$class->itable;
while ($tmp1639->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1639 = $tmp1639->next;
}
$fn1641 $tmp1640 = $tmp1639->methods[0];
panda$core$Int64 $tmp1642 = $tmp1640(((panda$collections$CollectionView*) $tmp1638));
*(&local6) = $tmp1642;
// line 441
org$pandalanguage$pandac$Type* $tmp1643 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1644 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp1643);
org$pandalanguage$pandac$Type* $tmp1645 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp1646 = ((panda$core$Equatable*) $tmp1644)->$class->itable;
while ($tmp1646->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1646 = $tmp1646->next;
}
$fn1648 $tmp1647 = $tmp1646->methods[1];
panda$core$Bit $tmp1649 = $tmp1647(((panda$core$Equatable*) $tmp1644), ((panda$core$Equatable*) $tmp1645));
bool $tmp1650 = $tmp1649.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1645));
// unreffing REF($310:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1644));
// unreffing REF($307:org.pandalanguage.pandac.Type)
if ($tmp1650) goto block15; else goto block17;
block15:;
// line 442
org$pandalanguage$pandac$IR* $tmp1651 = *(&local0);
panda$collections$Array** $tmp1652 = &$tmp1651->locals;
panda$collections$Array* $tmp1653 = *$tmp1652;
org$pandalanguage$pandac$Type* $tmp1654 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1655 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp1654);
panda$collections$Array$add$panda$collections$Array$T($tmp1653, ((panda$core$Object*) $tmp1655));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1655));
// unreffing REF($328:org.pandalanguage.pandac.Type)
// line 443
org$pandalanguage$pandac$IR$Value* $tmp1656 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1657 = (panda$core$Int64) {2};
panda$core$Int64 $tmp1658 = *(&local6);
org$pandalanguage$pandac$Type* $tmp1659 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1660 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp1659);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1656, $tmp1657, $tmp1658, $tmp1660);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1656));
org$pandalanguage$pandac$IR$Value* $tmp1661 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
*(&local5) = $tmp1656;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1660));
// unreffing REF($339:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1656));
// unreffing REF($335:org.pandalanguage.pandac.IR.Value)
goto block16;
block17:;
// line 1
// line 446
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp1662 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1662));
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block16;
block16:;
// line 448
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
// line 449
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
// line 450
$fn1664 $tmp1663 = ($fn1664) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1665 = $tmp1663(param2);
panda$core$Bit $tmp1666 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp1665);
bool $tmp1667 = $tmp1666.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1665));
// unreffing REF($370:org.pandalanguage.pandac.Type)
if ($tmp1667) goto block18; else goto block20;
block18:;
// line 451
org$pandalanguage$pandac$Type* $tmp1668 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1668));
org$pandalanguage$pandac$Type* $tmp1669 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1669));
*(&local7) = $tmp1668;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1668));
// unreffing REF($378:org.pandalanguage.pandac.Type)
// line 452
org$pandalanguage$pandac$Type* $tmp1670 = org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1670));
org$pandalanguage$pandac$Type* $tmp1671 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1671));
*(&local8) = $tmp1670;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1670));
// unreffing REF($389:org.pandalanguage.pandac.Type)
goto block19;
block20:;
// line 1
// line 455
org$pandalanguage$pandac$Type* $tmp1672 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1672));
org$pandalanguage$pandac$Type* $tmp1673 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1673));
*(&local7) = $tmp1672;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1672));
// unreffing REF($402:org.pandalanguage.pandac.Type)
// line 456
org$pandalanguage$pandac$Type* $tmp1674 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1674));
org$pandalanguage$pandac$Type* $tmp1675 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1675));
*(&local8) = $tmp1674;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1674));
// unreffing REF($413:org.pandalanguage.pandac.Type)
goto block19;
block19:;
// line 458
org$pandalanguage$pandac$Type* $tmp1676 = *(&local7);
org$pandalanguage$pandac$ClassDecl* $tmp1677 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp1676);
org$pandalanguage$pandac$SymbolTable* $tmp1678 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp1677);
*(&local9) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1678));
org$pandalanguage$pandac$SymbolTable* $tmp1679 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1679));
*(&local9) = $tmp1678;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1678));
// unreffing REF($428:org.pandalanguage.pandac.SymbolTable)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1677));
// unreffing REF($426:org.pandalanguage.pandac.ClassDecl?)
// line 459
org$pandalanguage$pandac$SymbolTable* $tmp1680 = *(&local9);
org$pandalanguage$pandac$Symbol* $tmp1681 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp1680, &$s1682);
*(&local10) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp1681)));
org$pandalanguage$pandac$FieldDecl* $tmp1683 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1683));
*(&local10) = ((org$pandalanguage$pandac$FieldDecl*) $tmp1681);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1681));
// unreffing REF($444:org.pandalanguage.pandac.Symbol?)
// line 460
org$pandalanguage$pandac$FieldDecl* $tmp1684 = *(&local10);
panda$core$Bit $tmp1685 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(param0, $tmp1684);
panda$core$Bit $tmp1686 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1685);
bool $tmp1687 = $tmp1686.value;
if ($tmp1687) goto block21; else goto block22;
block21:;
// line 461
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$FieldDecl* $tmp1688 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1688));
// unreffing pointerField
*(&local10) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$SymbolTable* $tmp1689 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1689));
// unreffing st
*(&local9) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
org$pandalanguage$pandac$Type* $tmp1690 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1690));
// unreffing targetType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1691 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1691));
// unreffing methodType
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1692 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1692));
// unreffing result
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp1693 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1693));
// unreffing finalArgs
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp1694 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1694));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1695 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1695));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block22:;
// line 463
org$pandalanguage$pandac$Type* $tmp1696 = *(&local7);
org$pandalanguage$pandac$IR$Value* $tmp1697 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, $tmp1696);
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1697));
org$pandalanguage$pandac$IR$Value* $tmp1698 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1698));
*(&local11) = $tmp1697;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1697));
// unreffing REF($509:org.pandalanguage.pandac.IR.Value?)
// line 464
org$pandalanguage$pandac$IR* $tmp1699 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1700 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1701 = (panda$core$Int64) {10};
org$pandalanguage$pandac$IR$Value* $tmp1702 = *(&local11);
org$pandalanguage$pandac$FieldDecl* $tmp1703 = *(&local10);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp1700, $tmp1701, param1, $tmp1702, $tmp1703);
$fn1705 $tmp1704 = ($fn1705) $tmp1699->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1706 = $tmp1704($tmp1699, $tmp1700);
*(&local12) = $tmp1706;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1700));
// unreffing REF($522:org.pandalanguage.pandac.IR.Statement)
// line 466
org$pandalanguage$pandac$IR* $tmp1707 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1708 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1709 = (panda$core$Int64) {13};
org$pandalanguage$pandac$IR$Value* $tmp1710 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1711 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp1712 = *(&local12);
org$pandalanguage$pandac$Type* $tmp1713 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp1714 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1713);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp1710, $tmp1711, $tmp1712, $tmp1714);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp1708, $tmp1709, param1, $tmp1710);
$fn1716 $tmp1715 = ($fn1716) $tmp1707->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1717 = $tmp1715($tmp1707, $tmp1708);
*(&local13) = $tmp1717;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1714));
// unreffing REF($542:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1713));
// unreffing REF($541:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1710));
// unreffing REF($538:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1708));
// unreffing REF($536:org.pandalanguage.pandac.IR.Statement)
// line 468
org$pandalanguage$pandac$SymbolTable* $tmp1718 = *(&local9);
org$pandalanguage$pandac$Symbol* $tmp1719 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp1718, &$s1720);
*(&local14) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp1719)));
org$pandalanguage$pandac$FieldDecl* $tmp1721 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1721));
*(&local14) = ((org$pandalanguage$pandac$FieldDecl*) $tmp1719);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1719));
// unreffing REF($562:org.pandalanguage.pandac.Symbol?)
// line 469
org$pandalanguage$pandac$FieldDecl* $tmp1722 = *(&local14);
panda$core$Bit $tmp1723 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(param0, $tmp1722);
panda$core$Bit $tmp1724 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1723);
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block23; else goto block24;
block23:;
// line 470
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$FieldDecl* $tmp1726 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1726));
// unreffing targetField
*(&local14) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1727 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1727));
// unreffing methodObj
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp1728 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1728));
// unreffing pointerField
*(&local10) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$SymbolTable* $tmp1729 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1729));
// unreffing st
*(&local9) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
org$pandalanguage$pandac$Type* $tmp1730 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1730));
// unreffing targetType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1731 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1731));
// unreffing methodType
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1732 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1732));
// unreffing result
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp1733 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1733));
// unreffing finalArgs
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp1734 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1734));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1735 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1735));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block24:;
// line 472
org$pandalanguage$pandac$IR* $tmp1736 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1737 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1738 = (panda$core$Int64) {10};
org$pandalanguage$pandac$IR$Value* $tmp1739 = *(&local11);
org$pandalanguage$pandac$FieldDecl* $tmp1740 = *(&local14);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp1737, $tmp1738, param1, $tmp1739, $tmp1740);
$fn1742 $tmp1741 = ($fn1742) $tmp1736->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1743 = $tmp1741($tmp1736, $tmp1737);
*(&local15) = $tmp1743;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1737));
// unreffing REF($636:org.pandalanguage.pandac.IR.Statement)
// line 473
org$pandalanguage$pandac$IR* $tmp1744 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1745 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1746 = (panda$core$Int64) {13};
org$pandalanguage$pandac$IR$Value* $tmp1747 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1748 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp1749 = *(&local15);
org$pandalanguage$pandac$Type* $tmp1750 = *(&local8);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp1747, $tmp1748, $tmp1749, $tmp1750);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp1745, $tmp1746, param1, $tmp1747);
$fn1752 $tmp1751 = ($fn1752) $tmp1744->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1753 = $tmp1751($tmp1744, $tmp1745);
*(&local16) = $tmp1753;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1747));
// unreffing REF($652:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
// unreffing REF($650:org.pandalanguage.pandac.IR.Statement)
// line 474
org$pandalanguage$pandac$IR* $tmp1754 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1755 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1756 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Value* $tmp1757 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1758 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp1759 = *(&local16);
org$pandalanguage$pandac$Type* $tmp1760 = *(&local8);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp1757, $tmp1758, $tmp1759, $tmp1760);
panda$core$Int64 $tmp1761 = (panda$core$Int64) {62};
org$pandalanguage$pandac$parser$Token$Kind $tmp1762 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1761);
org$pandalanguage$pandac$IR$Value* $tmp1763 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1764 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Type* $tmp1765 = *(&local8);
org$pandalanguage$pandac$Type* $tmp1766 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1765);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1763, $tmp1764, $tmp1766);
org$pandalanguage$pandac$Type* $tmp1767 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type($tmp1755, $tmp1756, param1, $tmp1757, $tmp1762, $tmp1763, $tmp1767);
$fn1769 $tmp1768 = ($fn1769) $tmp1754->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1770 = $tmp1768($tmp1754, $tmp1755);
*(&local17) = $tmp1770;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1767));
// unreffing REF($683:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1766));
// unreffing REF($681:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1763));
// unreffing REF($678:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1757));
// unreffing REF($671:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1755));
// unreffing REF($669:org.pandalanguage.pandac.IR.Statement)
// line 476
org$pandalanguage$pandac$IR* $tmp1771 = *(&local0);
$fn1773 $tmp1772 = ($fn1773) $tmp1771->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1774 = $tmp1772($tmp1771, &$s1775);
*(&local18) = $tmp1774;
// line 477
org$pandalanguage$pandac$IR* $tmp1776 = *(&local0);
$fn1778 $tmp1777 = ($fn1778) $tmp1776->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1779 = $tmp1777($tmp1776, &$s1780);
*(&local19) = $tmp1779;
// line 478
org$pandalanguage$pandac$IR* $tmp1781 = *(&local0);
$fn1783 $tmp1782 = ($fn1783) $tmp1781->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1784 = $tmp1782($tmp1781, &$s1785);
*(&local20) = $tmp1784;
// line 479
org$pandalanguage$pandac$IR* $tmp1786 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1787 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1788 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1789 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1790 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp1791 = *(&local17);
org$pandalanguage$pandac$Type* $tmp1792 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp1789, $tmp1790, $tmp1791, $tmp1792);
org$pandalanguage$pandac$IR$Block$ID $tmp1793 = *(&local18);
org$pandalanguage$pandac$IR$Block$ID $tmp1794 = *(&local19);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1787, $tmp1788, param1, $tmp1789, $tmp1793, $tmp1794);
$fn1796 $tmp1795 = ($fn1796) $tmp1786->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1797 = $tmp1795($tmp1786, $tmp1787);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1792));
// unreffing REF($725:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1789));
// unreffing REF($722:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1787));
// unreffing REF($720:org.pandalanguage.pandac.IR.Statement)
// line 481
org$pandalanguage$pandac$IR* $tmp1798 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1799 = *(&local19);
$fn1801 $tmp1800 = ($fn1801) $tmp1798->$class->vtable[4];
$tmp1800($tmp1798, $tmp1799);
// line 482
org$pandalanguage$pandac$IR$Value* $tmp1802 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1803 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp1804 = *(&local13);
org$pandalanguage$pandac$Type* $tmp1805 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp1806 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1805);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp1802, $tmp1803, $tmp1804, $tmp1806);
org$pandalanguage$pandac$Type* $tmp1807 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1808 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1807);
org$pandalanguage$pandac$IR$Value* $tmp1809 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1802, $tmp1808);
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1809));
org$pandalanguage$pandac$IR$Value* $tmp1810 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1810));
*(&local21) = $tmp1809;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1809));
// unreffing REF($756:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1808));
// unreffing REF($755:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1806));
// unreffing REF($751:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1805));
// unreffing REF($750:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1802));
// unreffing REF($747:org.pandalanguage.pandac.IR.Value)
// line 484
org$pandalanguage$pandac$IR* $tmp1811 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1812 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1813 = (panda$core$Int64) {8};
org$pandalanguage$pandac$IR$Value* $tmp1814 = *(&local21);
org$pandalanguage$pandac$FixedArray* $tmp1815 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
panda$collections$Array* $tmp1816 = *(&local2);
org$pandalanguage$pandac$FixedArray$init$panda$collections$ListView$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp1815, ((panda$collections$ListView*) $tmp1816));
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT($tmp1812, $tmp1813, param1, $tmp1814, $tmp1815);
$fn1818 $tmp1817 = ($fn1818) $tmp1811->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1819 = $tmp1817($tmp1811, $tmp1812);
*(&local22) = $tmp1819;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1815));
// unreffing REF($785:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.IR.Value>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1812));
// unreffing REF($781:org.pandalanguage.pandac.IR.Statement)
// line 486
org$pandalanguage$pandac$IR$Value* $tmp1820 = *(&local5);
panda$core$Bit $tmp1821 = panda$core$Bit$init$builtin_bit($tmp1820 != NULL);
bool $tmp1822 = $tmp1821.value;
if ($tmp1822) goto block25; else goto block26;
block25:;
// line 487
org$pandalanguage$pandac$IR* $tmp1823 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1824 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1825 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp1826 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1827 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp1828 = *(&local22);
org$pandalanguage$pandac$Type* $tmp1829 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1830 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp1829);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp1826, $tmp1827, $tmp1828, $tmp1830);
org$pandalanguage$pandac$IR$Value* $tmp1831 = *(&local5);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp1824, $tmp1825, param1, $tmp1826, $tmp1831);
$fn1833 $tmp1832 = ($fn1833) $tmp1823->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1834 = $tmp1832($tmp1823, $tmp1824);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1830));
// unreffing REF($815:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1826));
// unreffing REF($811:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1824));
// unreffing REF($809:org.pandalanguage.pandac.IR.Statement)
goto block26;
block26:;
// line 490
org$pandalanguage$pandac$IR* $tmp1835 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1836 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1837 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp1838 = *(&local20);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp1836, $tmp1837, param1, $tmp1838);
$fn1840 $tmp1839 = ($fn1840) $tmp1835->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1841 = $tmp1839($tmp1835, $tmp1836);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1836));
// unreffing REF($834:org.pandalanguage.pandac.IR.Statement)
// line 491
org$pandalanguage$pandac$IR* $tmp1842 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1843 = *(&local18);
$fn1845 $tmp1844 = ($fn1845) $tmp1842->$class->vtable[4];
$tmp1844($tmp1842, $tmp1843);
// line 492
panda$collections$Array* $tmp1846 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1846);
*(&local23) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1846));
panda$collections$Array* $tmp1847 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1847));
*(&local23) = $tmp1846;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1846));
// unreffing REF($849:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 493
panda$collections$Array* $tmp1848 = *(&local23);
org$pandalanguage$pandac$Type* $tmp1849 = *(&local8);
panda$collections$Array$add$panda$collections$Array$T($tmp1848, ((panda$core$Object*) $tmp1849));
// line 494
panda$core$Int64 $tmp1850 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp1851 = *(&local1);
panda$core$Int64 $tmp1852 = org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64($tmp1851);
panda$core$Bit $tmp1853 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1854 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1850, $tmp1852, $tmp1853);
panda$core$Int64 $tmp1855 = $tmp1854.min;
*(&local24) = $tmp1855;
panda$core$Int64 $tmp1856 = $tmp1854.max;
panda$core$Bit $tmp1857 = $tmp1854.inclusive;
bool $tmp1858 = $tmp1857.value;
panda$core$Int64 $tmp1859 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1860 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1859);
if ($tmp1858) goto block30; else goto block31;
block30:;
int64_t $tmp1861 = $tmp1855.value;
int64_t $tmp1862 = $tmp1856.value;
bool $tmp1863 = $tmp1861 <= $tmp1862;
panda$core$Bit $tmp1864 = (panda$core$Bit) {$tmp1863};
bool $tmp1865 = $tmp1864.value;
if ($tmp1865) goto block27; else goto block28;
block31:;
int64_t $tmp1866 = $tmp1855.value;
int64_t $tmp1867 = $tmp1856.value;
bool $tmp1868 = $tmp1866 < $tmp1867;
panda$core$Bit $tmp1869 = (panda$core$Bit) {$tmp1868};
bool $tmp1870 = $tmp1869.value;
if ($tmp1870) goto block27; else goto block28;
block27:;
// line 495
panda$collections$Array* $tmp1871 = *(&local23);
org$pandalanguage$pandac$Type* $tmp1872 = *(&local1);
panda$core$Int64 $tmp1873 = *(&local24);
org$pandalanguage$pandac$Type* $tmp1874 = org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp1872, $tmp1873);
panda$collections$Array$add$panda$collections$Array$T($tmp1871, ((panda$core$Object*) $tmp1874));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1874));
// unreffing REF($899:org.pandalanguage.pandac.Type)
goto block29;
block29:;
panda$core$Int64 $tmp1875 = *(&local24);
int64_t $tmp1876 = $tmp1856.value;
int64_t $tmp1877 = $tmp1875.value;
int64_t $tmp1878 = $tmp1876 - $tmp1877;
panda$core$Int64 $tmp1879 = (panda$core$Int64) {$tmp1878};
panda$core$UInt64 $tmp1880 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1879);
if ($tmp1858) goto block33; else goto block34;
block33:;
uint64_t $tmp1881 = $tmp1880.value;
uint64_t $tmp1882 = $tmp1860.value;
bool $tmp1883 = $tmp1881 >= $tmp1882;
panda$core$Bit $tmp1884 = (panda$core$Bit) {$tmp1883};
bool $tmp1885 = $tmp1884.value;
if ($tmp1885) goto block32; else goto block28;
block34:;
uint64_t $tmp1886 = $tmp1880.value;
uint64_t $tmp1887 = $tmp1860.value;
bool $tmp1888 = $tmp1886 > $tmp1887;
panda$core$Bit $tmp1889 = (panda$core$Bit) {$tmp1888};
bool $tmp1890 = $tmp1889.value;
if ($tmp1890) goto block32; else goto block28;
block32:;
int64_t $tmp1891 = $tmp1875.value;
int64_t $tmp1892 = $tmp1859.value;
int64_t $tmp1893 = $tmp1891 + $tmp1892;
panda$core$Int64 $tmp1894 = (panda$core$Int64) {$tmp1893};
*(&local24) = $tmp1894;
goto block27;
block28:;
// line 497
org$pandalanguage$pandac$Type* $tmp1895 = *(&local1);
org$pandalanguage$pandac$Type$Kind* $tmp1896 = &$tmp1895->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1897 = *$tmp1896;
panda$collections$Array* $tmp1898 = *(&local23);
org$pandalanguage$pandac$Type* $tmp1899 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1900 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp1899);
panda$core$Int64 $tmp1901 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp1902 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type(param1, $tmp1897, ((panda$collections$ListView*) $tmp1898), $tmp1900, $tmp1901);
*(&local25) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1902));
org$pandalanguage$pandac$Type* $tmp1903 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1903));
*(&local25) = $tmp1902;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1902));
// unreffing REF($940:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1900));
// unreffing REF($938:org.pandalanguage.pandac.Type)
// line 499
org$pandalanguage$pandac$IR$Value* $tmp1904 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1905 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp1906 = *(&local13);
org$pandalanguage$pandac$Type* $tmp1907 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp1908 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1907);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp1904, $tmp1905, $tmp1906, $tmp1908);
org$pandalanguage$pandac$Type* $tmp1909 = *(&local25);
org$pandalanguage$pandac$Type* $tmp1910 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1909);
org$pandalanguage$pandac$IR$Value* $tmp1911 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1904, $tmp1910);
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1911));
org$pandalanguage$pandac$IR$Value* $tmp1912 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1912));
*(&local26) = $tmp1911;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1911));
// unreffing REF($964:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1910));
// unreffing REF($963:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1908));
// unreffing REF($959:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1907));
// unreffing REF($958:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1904));
// unreffing REF($955:org.pandalanguage.pandac.IR.Value)
// line 501
panda$collections$Array* $tmp1913 = *(&local2);
panda$core$Int64 $tmp1914 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Value* $tmp1915 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1916 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp1917 = *(&local16);
org$pandalanguage$pandac$Type* $tmp1918 = *(&local8);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp1915, $tmp1916, $tmp1917, $tmp1918);
panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T($tmp1913, $tmp1914, ((panda$core$Object*) $tmp1915));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1915));
// unreffing REF($991:org.pandalanguage.pandac.IR.Value)
// line 502
org$pandalanguage$pandac$IR* $tmp1919 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1920 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1921 = (panda$core$Int64) {8};
org$pandalanguage$pandac$IR$Value* $tmp1922 = *(&local26);
org$pandalanguage$pandac$FixedArray* $tmp1923 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
panda$collections$Array* $tmp1924 = *(&local2);
org$pandalanguage$pandac$FixedArray$init$panda$collections$ListView$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp1923, ((panda$collections$ListView*) $tmp1924));
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT($tmp1920, $tmp1921, param1, $tmp1922, $tmp1923);
$fn1926 $tmp1925 = ($fn1926) $tmp1919->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1927 = $tmp1925($tmp1919, $tmp1920);
*(&local27) = $tmp1927;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1923));
// unreffing REF($1007:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.IR.Value>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1920));
// unreffing REF($1003:org.pandalanguage.pandac.IR.Statement)
// line 504
org$pandalanguage$pandac$IR$Value* $tmp1928 = *(&local5);
panda$core$Bit $tmp1929 = panda$core$Bit$init$builtin_bit($tmp1928 != NULL);
bool $tmp1930 = $tmp1929.value;
if ($tmp1930) goto block35; else goto block36;
block35:;
// line 505
org$pandalanguage$pandac$IR* $tmp1931 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1932 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1933 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp1934 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1935 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp1936 = *(&local27);
org$pandalanguage$pandac$Type* $tmp1937 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1938 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp1937);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp1934, $tmp1935, $tmp1936, $tmp1938);
org$pandalanguage$pandac$IR$Value* $tmp1939 = *(&local5);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp1932, $tmp1933, param1, $tmp1934, $tmp1939);
$fn1941 $tmp1940 = ($fn1941) $tmp1931->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1942 = $tmp1940($tmp1931, $tmp1932);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1938));
// unreffing REF($1037:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1934));
// unreffing REF($1033:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1932));
// unreffing REF($1031:org.pandalanguage.pandac.IR.Statement)
goto block36;
block36:;
// line 508
org$pandalanguage$pandac$IR* $tmp1943 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1944 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1945 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp1946 = *(&local20);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp1944, $tmp1945, param1, $tmp1946);
$fn1948 $tmp1947 = ($fn1948) $tmp1943->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1949 = $tmp1947($tmp1943, $tmp1944);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1944));
// unreffing REF($1056:org.pandalanguage.pandac.IR.Statement)
// line 509
org$pandalanguage$pandac$IR* $tmp1950 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1951 = *(&local20);
$fn1953 $tmp1952 = ($fn1953) $tmp1950->$class->vtable[4];
$tmp1952($tmp1950, $tmp1951);
// line 510
org$pandalanguage$pandac$IR$Value* $tmp1954 = *(&local5);
panda$core$Bit $tmp1955 = panda$core$Bit$init$builtin_bit($tmp1954 != NULL);
bool $tmp1956 = $tmp1955.value;
if ($tmp1956) goto block37; else goto block38;
block37:;
// line 511
org$pandalanguage$pandac$IR* $tmp1957 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1958 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1959 = (panda$core$Int64) {13};
org$pandalanguage$pandac$IR$Value* $tmp1960 = *(&local5);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp1958, $tmp1959, param1, $tmp1960);
$fn1962 $tmp1961 = ($fn1962) $tmp1957->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1963 = $tmp1961($tmp1957, $tmp1958);
*(&local28) = $tmp1963;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1958));
// unreffing REF($1078:org.pandalanguage.pandac.IR.Statement)
// line 512
org$pandalanguage$pandac$IR$Value* $tmp1964 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1965 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp1966 = *(&local28);
org$pandalanguage$pandac$Type* $tmp1967 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1968 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp1967);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp1964, $tmp1965, $tmp1966, $tmp1968);
*(&local29) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1964));
org$pandalanguage$pandac$IR$Value* $tmp1969 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1969));
*(&local29) = $tmp1964;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
// unreffing REF($1094:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1964));
// unreffing REF($1090:org.pandalanguage.pandac.IR.Value)
// line 513
org$pandalanguage$pandac$Type* $tmp1970 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1971 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp1970);
panda$core$Bit $tmp1972 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp1971);
bool $tmp1973 = $tmp1972.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1971));
// unreffing REF($1111:org.pandalanguage.pandac.Type)
if ($tmp1973) goto block39; else goto block40;
block39:;
// line 514
panda$collections$Stack** $tmp1974 = &param0->enclosingContexts;
panda$collections$Stack* $tmp1975 = *$tmp1974;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp1976 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp1977 = (panda$core$Int64) {3};
org$pandalanguage$pandac$IR$Value* $tmp1978 = *(&local29);
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value($tmp1976, $tmp1977, $tmp1978);
panda$collections$Stack$push$panda$collections$Stack$T($tmp1975, ((panda$core$Object*) $tmp1976));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1976));
// unreffing REF($1122:org.pandalanguage.pandac.Compiler.EnclosingContext)
goto block40;
block40:;
// line 516
org$pandalanguage$pandac$IR$Value* $tmp1979 = *(&local29);
org$pandalanguage$pandac$IR$Value* $tmp1980 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1979, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1980));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1980));
// unreffing REF($1135:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR$Value* $tmp1981 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1981));
// unreffing loadRef
*(&local29) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1982 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1982));
// unreffing haveTargetCast
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp1983 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
// unreffing haveTargetType
*(&local25) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1984 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1984));
// unreffing targetParams
*(&local23) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1985 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1985));
// unreffing noTargetCast
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp1986 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1986));
// unreffing targetField
*(&local14) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1987 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1987));
// unreffing methodObj
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp1988 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1988));
// unreffing pointerField
*(&local10) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$SymbolTable* $tmp1989 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1989));
// unreffing st
*(&local9) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
org$pandalanguage$pandac$Type* $tmp1990 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1990));
// unreffing targetType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1991 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1991));
// unreffing methodType
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1992 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1992));
// unreffing result
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp1993 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1993));
// unreffing finalArgs
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp1994 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1994));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1995 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1995));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp1980;
block38:;
// line 518
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp1996 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1996));
// unreffing haveTargetCast
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp1997 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1997));
// unreffing haveTargetType
*(&local25) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1998 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1998));
// unreffing targetParams
*(&local23) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1999 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1999));
// unreffing noTargetCast
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2000 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2000));
// unreffing targetField
*(&local14) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2001 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2001));
// unreffing methodObj
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2002 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2002));
// unreffing pointerField
*(&local10) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$SymbolTable* $tmp2003 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2003));
// unreffing st
*(&local9) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
org$pandalanguage$pandac$Type* $tmp2004 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2004));
// unreffing targetType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp2005 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2005));
// unreffing methodType
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2006 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2006));
// unreffing result
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp2007 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2007));
// unreffing finalArgs
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp2008 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2008));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp2009 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2009));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, panda$collections$ListView* param3, org$pandalanguage$pandac$Compiler$TypeContext* param4) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
org$pandalanguage$pandac$IR* local1 = NULL;
org$pandalanguage$pandac$IR$Value* local2 = NULL;
org$pandalanguage$pandac$MethodDecl* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
panda$core$Bit local5;
org$pandalanguage$pandac$Type* local6 = NULL;
org$pandalanguage$pandac$IR$Value* local7 = NULL;
org$pandalanguage$pandac$MethodDecl* local8 = NULL;
org$pandalanguage$pandac$FixedArray* local9 = NULL;
org$pandalanguage$pandac$Type* local10 = NULL;
panda$core$Bit local11;
org$pandalanguage$pandac$Type* local12 = NULL;
org$pandalanguage$pandac$IR$Value* local13 = NULL;
org$pandalanguage$pandac$FixedArray* local14 = NULL;
org$pandalanguage$pandac$Pair* local15 = NULL;
panda$collections$Array* local16 = NULL;
org$pandalanguage$pandac$ASTNode* local17 = NULL;
org$pandalanguage$pandac$Type* local18 = NULL;
panda$core$Int64 local19;
org$pandalanguage$pandac$IR$Value* local20 = NULL;
org$pandalanguage$pandac$FixedArray* local21 = NULL;
org$pandalanguage$pandac$FixedArray* local22 = NULL;
org$pandalanguage$pandac$Pair* local23 = NULL;
panda$collections$Array* local24 = NULL;
org$pandalanguage$pandac$ASTNode* local25 = NULL;
org$pandalanguage$pandac$Type* local26 = NULL;
panda$core$Int64 local27;
org$pandalanguage$pandac$Type* local28 = NULL;
org$pandalanguage$pandac$Type* local29 = NULL;
org$pandalanguage$pandac$ClassDecl* local30 = NULL;
org$pandalanguage$pandac$Symbol* local31 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local32;
org$pandalanguage$pandac$IR$Value* local33 = NULL;
// line 524
panda$collections$Stack** $tmp2010 = &param0->currentClass;
panda$collections$Stack* $tmp2011 = *$tmp2010;
panda$core$Int64 $tmp2012 = (panda$core$Int64) {0};
panda$core$Object* $tmp2013 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp2011, $tmp2012);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp2013)));
org$pandalanguage$pandac$ClassDecl* $tmp2014 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2014));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) $tmp2013);
panda$core$Panda$unref$panda$core$Object$Q($tmp2013);
// unreffing REF($5:panda.collections.Stack.T)
// line 525
org$pandalanguage$pandac$IR** $tmp2015 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp2016 = *$tmp2015;
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2016));
org$pandalanguage$pandac$IR* $tmp2017 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2017));
*(&local1) = $tmp2016;
// line 526
panda$core$Int64* $tmp2018 = &param2->$rawValue;
panda$core$Int64 $tmp2019 = *$tmp2018;
panda$core$Int64 $tmp2020 = (panda$core$Int64) {9};
panda$core$Bit $tmp2021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2019, $tmp2020);
bool $tmp2022 = $tmp2021.value;
if ($tmp2022) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$IR$Value** $tmp2023 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp2024 = *$tmp2023;
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2024));
org$pandalanguage$pandac$IR$Value* $tmp2025 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2025));
*(&local2) = $tmp2024;
org$pandalanguage$pandac$MethodDecl** $tmp2026 = (org$pandalanguage$pandac$MethodDecl**) (param2->$data + 8);
org$pandalanguage$pandac$MethodDecl* $tmp2027 = *$tmp2026;
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2027));
org$pandalanguage$pandac$MethodDecl* $tmp2028 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2028));
*(&local3) = $tmp2027;
// line 528
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
// line 529
org$pandalanguage$pandac$IR$Value* $tmp2029 = *(&local2);
panda$core$Bit $tmp2030 = panda$core$Bit$init$builtin_bit($tmp2029 != NULL);
bool $tmp2031 = $tmp2030.value;
if ($tmp2031) goto block4; else goto block6;
block4:;
// line 530
org$pandalanguage$pandac$IR$Value* $tmp2032 = *(&local2);
$fn2034 $tmp2033 = ($fn2034) $tmp2032->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp2035 = $tmp2033($tmp2032);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2035));
org$pandalanguage$pandac$Type* $tmp2036 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2036));
*(&local4) = $tmp2035;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2035));
// unreffing REF($64:org.pandalanguage.pandac.Type)
goto block5;
block6:;
// line 532
org$pandalanguage$pandac$MethodDecl* $tmp2037 = *(&local3);
org$pandalanguage$pandac$Annotations** $tmp2038 = &$tmp2037->annotations;
org$pandalanguage$pandac$Annotations* $tmp2039 = *$tmp2038;
panda$core$Bit $tmp2040 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp2039);
bool $tmp2041 = $tmp2040.value;
if ($tmp2041) goto block9; else goto block10;
block9:;
*(&local5) = $tmp2040;
goto block11;
block10:;
org$pandalanguage$pandac$MethodDecl* $tmp2042 = *(&local3);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2043 = &$tmp2042->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp2044 = *$tmp2043;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2045;
$tmp2045 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2045->value = $tmp2044;
panda$core$Int64 $tmp2046 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2047 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2046);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2048;
$tmp2048 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2048->value = $tmp2047;
ITable* $tmp2049 = ((panda$core$Equatable*) $tmp2045)->$class->itable;
while ($tmp2049->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2049 = $tmp2049->next;
}
$fn2051 $tmp2050 = $tmp2049->methods[0];
panda$core$Bit $tmp2052 = $tmp2050(((panda$core$Equatable*) $tmp2045), ((panda$core$Equatable*) $tmp2048));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2048)));
// unreffing REF($91:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2045)));
// unreffing REF($87:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
*(&local5) = $tmp2052;
goto block11;
block11:;
panda$core$Bit $tmp2053 = *(&local5);
bool $tmp2054 = $tmp2053.value;
if ($tmp2054) goto block7; else goto block12;
block7:;
// line 533
org$pandalanguage$pandac$MethodDecl* $tmp2055 = *(&local3);
panda$core$Weak** $tmp2056 = &$tmp2055->owner;
panda$core$Weak* $tmp2057 = *$tmp2056;
panda$core$Object* $tmp2058 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2057);
org$pandalanguage$pandac$Type** $tmp2059 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2058)->type;
org$pandalanguage$pandac$Type* $tmp2060 = *$tmp2059;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2060));
org$pandalanguage$pandac$Type* $tmp2061 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2061));
*(&local4) = $tmp2060;
panda$core$Panda$unref$panda$core$Object$Q($tmp2058);
// unreffing REF($110:panda.core.Weak.T)
goto block8;
block12:;
// line 1
// line 536
org$pandalanguage$pandac$ClassDecl* $tmp2062 = *(&local0);
org$pandalanguage$pandac$Type** $tmp2063 = &$tmp2062->type;
org$pandalanguage$pandac$Type* $tmp2064 = *$tmp2063;
org$pandalanguage$pandac$MethodDecl* $tmp2065 = *(&local3);
panda$core$Weak** $tmp2066 = &$tmp2065->owner;
panda$core$Weak* $tmp2067 = *$tmp2066;
panda$core$Object* $tmp2068 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2067);
org$pandalanguage$pandac$Type* $tmp2069 = org$pandalanguage$pandac$Compiler$findType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(param0, $tmp2064, ((org$pandalanguage$pandac$ClassDecl*) $tmp2068));
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2069));
org$pandalanguage$pandac$Type* $tmp2070 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2070));
*(&local6) = $tmp2069;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2069));
// unreffing REF($135:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp2068);
// unreffing REF($133:panda.core.Weak.T)
// line 537
org$pandalanguage$pandac$Type* $tmp2071 = *(&local6);
panda$core$Bit $tmp2072 = panda$core$Bit$init$builtin_bit($tmp2071 != NULL);
bool $tmp2073 = $tmp2072.value;
if ($tmp2073) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp2074 = (panda$core$Int64) {537};
org$pandalanguage$pandac$ClassDecl* $tmp2075 = *(&local0);
org$pandalanguage$pandac$Type** $tmp2076 = &$tmp2075->type;
org$pandalanguage$pandac$Type* $tmp2077 = *$tmp2076;
panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2079, ((panda$core$Object*) $tmp2077));
panda$core$String* $tmp2080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2078, &$s2081);
org$pandalanguage$pandac$MethodDecl* $tmp2082 = *(&local3);
panda$core$Weak** $tmp2083 = &$tmp2082->owner;
panda$core$Weak* $tmp2084 = *$tmp2083;
panda$core$Object* $tmp2085 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2084);
panda$core$String** $tmp2086 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2085)->name;
panda$core$String* $tmp2087 = *$tmp2086;
panda$core$String* $tmp2088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2080, $tmp2087);
panda$core$String* $tmp2089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2088, &$s2090);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2091, $tmp2074, $tmp2089);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2089));
// unreffing REF($171:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2088));
// unreffing REF($170:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2085);
// unreffing REF($166:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2080));
// unreffing REF($161:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2078));
// unreffing REF($160:panda.core.String)
abort(); // unreachable
block13:;
// line 539
org$pandalanguage$pandac$Type* $tmp2092 = *(&local6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2092));
org$pandalanguage$pandac$Type* $tmp2093 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2093));
*(&local4) = $tmp2092;
org$pandalanguage$pandac$Type* $tmp2094 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2094));
// unreffing found
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
goto block8;
block8:;
goto block5;
block5:;
// line 541
org$pandalanguage$pandac$MethodDecl* $tmp2095 = *(&local3);
panda$core$Bit $tmp2096 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, $tmp2095);
panda$core$Bit $tmp2097 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2096);
bool $tmp2098 = $tmp2097.value;
if ($tmp2098) goto block15; else goto block16;
block15:;
// line 542
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp2099 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2099));
// unreffing targetType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2100 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2101 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2101));
// unreffing target
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2102 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2102));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2103 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2103));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block16:;
// line 544
org$pandalanguage$pandac$IR$Value* $tmp2104 = *(&local2);
org$pandalanguage$pandac$MethodRef* $tmp2105 = (org$pandalanguage$pandac$MethodRef*) pandaObjectAlloc(41, (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class);
org$pandalanguage$pandac$Type* $tmp2106 = *(&local4);
org$pandalanguage$pandac$MethodDecl* $tmp2107 = *(&local3);
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl($tmp2105, param0, $tmp2106, $tmp2107);
org$pandalanguage$pandac$IR$Value* $tmp2108 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2104, $tmp2105, param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2108));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2108));
// unreffing REF($246:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2105));
// unreffing REF($242:org.pandalanguage.pandac.MethodRef)
org$pandalanguage$pandac$Type* $tmp2109 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2109));
// unreffing targetType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2110 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2110));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2111 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2111));
// unreffing target
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2112 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2112));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2113 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2113));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp2108;
block3:;
panda$core$Int64 $tmp2114 = (panda$core$Int64) {11};
panda$core$Bit $tmp2115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2019, $tmp2114);
bool $tmp2116 = $tmp2115.value;
if ($tmp2116) goto block17; else goto block18;
block17:;
org$pandalanguage$pandac$IR$Value** $tmp2117 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp2118 = *$tmp2117;
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2118));
org$pandalanguage$pandac$IR$Value* $tmp2119 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2119));
*(&local7) = $tmp2118;
org$pandalanguage$pandac$MethodDecl** $tmp2120 = (org$pandalanguage$pandac$MethodDecl**) (param2->$data + 8);
org$pandalanguage$pandac$MethodDecl* $tmp2121 = *$tmp2120;
*(&local8) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2121));
org$pandalanguage$pandac$MethodDecl* $tmp2122 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2122));
*(&local8) = $tmp2121;
org$pandalanguage$pandac$FixedArray** $tmp2123 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2124 = *$tmp2123;
*(&local9) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2124));
org$pandalanguage$pandac$FixedArray* $tmp2125 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2125));
*(&local9) = $tmp2124;
// line 548
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
// line 549
org$pandalanguage$pandac$IR$Value* $tmp2126 = *(&local7);
panda$core$Bit $tmp2127 = panda$core$Bit$init$builtin_bit($tmp2126 != NULL);
bool $tmp2128 = $tmp2127.value;
if ($tmp2128) goto block19; else goto block21;
block19:;
// line 550
org$pandalanguage$pandac$IR$Value* $tmp2129 = *(&local7);
$fn2131 $tmp2130 = ($fn2131) $tmp2129->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp2132 = $tmp2130($tmp2129);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2132));
org$pandalanguage$pandac$Type* $tmp2133 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2133));
*(&local10) = $tmp2132;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2132));
// unreffing REF($324:org.pandalanguage.pandac.Type)
goto block20;
block21:;
// line 552
org$pandalanguage$pandac$MethodDecl* $tmp2134 = *(&local8);
org$pandalanguage$pandac$Annotations** $tmp2135 = &$tmp2134->annotations;
org$pandalanguage$pandac$Annotations* $tmp2136 = *$tmp2135;
panda$core$Bit $tmp2137 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp2136);
bool $tmp2138 = $tmp2137.value;
if ($tmp2138) goto block24; else goto block25;
block24:;
*(&local11) = $tmp2137;
goto block26;
block25:;
org$pandalanguage$pandac$MethodDecl* $tmp2139 = *(&local8);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2140 = &$tmp2139->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp2141 = *$tmp2140;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2142;
$tmp2142 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2142->value = $tmp2141;
panda$core$Int64 $tmp2143 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2144 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2143);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2145;
$tmp2145 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2145->value = $tmp2144;
ITable* $tmp2146 = ((panda$core$Equatable*) $tmp2142)->$class->itable;
while ($tmp2146->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2146 = $tmp2146->next;
}
$fn2148 $tmp2147 = $tmp2146->methods[0];
panda$core$Bit $tmp2149 = $tmp2147(((panda$core$Equatable*) $tmp2142), ((panda$core$Equatable*) $tmp2145));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2145)));
// unreffing REF($351:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2142)));
// unreffing REF($347:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
*(&local11) = $tmp2149;
goto block26;
block26:;
panda$core$Bit $tmp2150 = *(&local11);
bool $tmp2151 = $tmp2150.value;
if ($tmp2151) goto block22; else goto block27;
block22:;
// line 553
org$pandalanguage$pandac$MethodDecl* $tmp2152 = *(&local8);
panda$core$Weak** $tmp2153 = &$tmp2152->owner;
panda$core$Weak* $tmp2154 = *$tmp2153;
panda$core$Object* $tmp2155 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2154);
org$pandalanguage$pandac$Type** $tmp2156 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2155)->type;
org$pandalanguage$pandac$Type* $tmp2157 = *$tmp2156;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2157));
org$pandalanguage$pandac$Type* $tmp2158 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2158));
*(&local10) = $tmp2157;
panda$core$Panda$unref$panda$core$Object$Q($tmp2155);
// unreffing REF($370:panda.core.Weak.T)
goto block23;
block27:;
// line 1
// line 556
org$pandalanguage$pandac$ClassDecl* $tmp2159 = *(&local0);
org$pandalanguage$pandac$Type** $tmp2160 = &$tmp2159->type;
org$pandalanguage$pandac$Type* $tmp2161 = *$tmp2160;
org$pandalanguage$pandac$MethodDecl* $tmp2162 = *(&local8);
panda$core$Weak** $tmp2163 = &$tmp2162->owner;
panda$core$Weak* $tmp2164 = *$tmp2163;
panda$core$Object* $tmp2165 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2164);
org$pandalanguage$pandac$Type* $tmp2166 = org$pandalanguage$pandac$Compiler$findType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(param0, $tmp2161, ((org$pandalanguage$pandac$ClassDecl*) $tmp2165));
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2166));
org$pandalanguage$pandac$Type* $tmp2167 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2167));
*(&local12) = $tmp2166;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2166));
// unreffing REF($395:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp2165);
// unreffing REF($393:panda.core.Weak.T)
// line 557
org$pandalanguage$pandac$Type* $tmp2168 = *(&local12);
panda$core$Bit $tmp2169 = panda$core$Bit$init$builtin_bit($tmp2168 != NULL);
bool $tmp2170 = $tmp2169.value;
if ($tmp2170) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp2171 = (panda$core$Int64) {557};
org$pandalanguage$pandac$ClassDecl* $tmp2172 = *(&local0);
org$pandalanguage$pandac$Type** $tmp2173 = &$tmp2172->type;
org$pandalanguage$pandac$Type* $tmp2174 = *$tmp2173;
panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2176, ((panda$core$Object*) $tmp2174));
panda$core$String* $tmp2177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2175, &$s2178);
org$pandalanguage$pandac$MethodDecl* $tmp2179 = *(&local8);
panda$core$Weak** $tmp2180 = &$tmp2179->owner;
panda$core$Weak* $tmp2181 = *$tmp2180;
panda$core$Object* $tmp2182 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2181);
panda$core$String** $tmp2183 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2182)->name;
panda$core$String* $tmp2184 = *$tmp2183;
panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2177, $tmp2184);
panda$core$String* $tmp2186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, &$s2187);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2188, $tmp2171, $tmp2186);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2186));
// unreffing REF($431:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
// unreffing REF($430:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2182);
// unreffing REF($426:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2177));
// unreffing REF($421:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2175));
// unreffing REF($420:panda.core.String)
abort(); // unreachable
block28:;
// line 559
org$pandalanguage$pandac$Type* $tmp2189 = *(&local12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2189));
org$pandalanguage$pandac$Type* $tmp2190 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2190));
*(&local10) = $tmp2189;
org$pandalanguage$pandac$Type* $tmp2191 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2191));
// unreffing found
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
goto block23;
block23:;
goto block20;
block20:;
// line 561
org$pandalanguage$pandac$MethodDecl* $tmp2192 = *(&local8);
panda$core$Bit $tmp2193 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, $tmp2192);
panda$core$Bit $tmp2194 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2193);
bool $tmp2195 = $tmp2194.value;
if ($tmp2195) goto block30; else goto block31;
block30:;
// line 562
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp2196 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2196));
// unreffing targetType
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2197 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2197));
// unreffing types
*(&local9) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2198 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2198));
// unreffing m
*(&local8) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2199 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2199));
// unreffing target
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2200 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2200));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2201 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2201));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block31:;
// line 564
org$pandalanguage$pandac$IR$Value* $tmp2202 = *(&local7);
org$pandalanguage$pandac$MethodRef* $tmp2203 = (org$pandalanguage$pandac$MethodRef*) pandaObjectAlloc(41, (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class);
org$pandalanguage$pandac$Type* $tmp2204 = *(&local10);
org$pandalanguage$pandac$MethodDecl* $tmp2205 = *(&local8);
org$pandalanguage$pandac$FixedArray* $tmp2206 = *(&local9);
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q($tmp2203, param0, $tmp2204, $tmp2205, ((panda$collections$ListView*) $tmp2206));
org$pandalanguage$pandac$IR$Value* $tmp2207 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2202, $tmp2203, param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2207));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2207));
// unreffing REF($513:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2203));
// unreffing REF($507:org.pandalanguage.pandac.MethodRef)
org$pandalanguage$pandac$Type* $tmp2208 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2208));
// unreffing targetType
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2209 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2209));
// unreffing types
*(&local9) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2210 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2210));
// unreffing m
*(&local8) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2211 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2211));
// unreffing target
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2212 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2212));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2213 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2213));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp2207;
block18:;
panda$core$Int64 $tmp2214 = (panda$core$Int64) {10};
panda$core$Bit $tmp2215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2019, $tmp2214);
bool $tmp2216 = $tmp2215.value;
if ($tmp2216) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$IR$Value** $tmp2217 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp2218 = *$tmp2217;
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2218));
org$pandalanguage$pandac$IR$Value* $tmp2219 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2219));
*(&local13) = $tmp2218;
org$pandalanguage$pandac$FixedArray** $tmp2220 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 8);
org$pandalanguage$pandac$FixedArray* $tmp2221 = *$tmp2220;
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2221));
org$pandalanguage$pandac$FixedArray* $tmp2222 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2222));
*(&local14) = $tmp2221;
// line 568
org$pandalanguage$pandac$IR$Value* $tmp2223 = *(&local13);
org$pandalanguage$pandac$FixedArray* $tmp2224 = *(&local14);
org$pandalanguage$pandac$Pair* $tmp2225 = org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, param1, $tmp2223, ((panda$collections$ListView*) $tmp2224), param3, param4);
*(&local15) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2225));
org$pandalanguage$pandac$Pair* $tmp2226 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2226));
*(&local15) = $tmp2225;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2225));
// unreffing REF($579:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
// line 569
org$pandalanguage$pandac$Pair* $tmp2227 = *(&local15);
panda$core$Bit $tmp2228 = panda$core$Bit$init$builtin_bit($tmp2227 != NULL);
bool $tmp2229 = $tmp2228.value;
if ($tmp2229) goto block34; else goto block35;
block34:;
// line 570
org$pandalanguage$pandac$Pair* $tmp2230 = *(&local15);
panda$core$Object** $tmp2231 = &$tmp2230->first;
panda$core$Object* $tmp2232 = *$tmp2231;
ITable* $tmp2233 = ((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp2232))->$class->itable;
while ($tmp2233->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2233 = $tmp2233->next;
}
$fn2235 $tmp2234 = $tmp2233->methods[0];
panda$core$Int64 $tmp2236 = $tmp2234(((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp2232)));
panda$core$Int64 $tmp2237 = (panda$core$Int64) {1};
int64_t $tmp2238 = $tmp2236.value;
int64_t $tmp2239 = $tmp2237.value;
bool $tmp2240 = $tmp2238 > $tmp2239;
panda$core$Bit $tmp2241 = (panda$core$Bit) {$tmp2240};
bool $tmp2242 = $tmp2241.value;
if ($tmp2242) goto block36; else goto block37;
block36:;
// line 571
org$pandalanguage$pandac$Pair* $tmp2243 = *(&local15);
panda$core$Object** $tmp2244 = &$tmp2243->first;
panda$core$Object* $tmp2245 = *$tmp2244;
org$pandalanguage$pandac$Compiler$reportAmbiguousMatch$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext(param0, param1, ((panda$collections$ListView*) $tmp2245), param3, param4);
// line 572
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Pair* $tmp2246 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2246));
// unreffing best
*(&local15) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2247 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2247));
// unreffing methods
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2248 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2248));
// unreffing target
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2249 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2249));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2250 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2250));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block37:;
// line 574
org$pandalanguage$pandac$IR$Value* $tmp2251 = *(&local13);
org$pandalanguage$pandac$Pair* $tmp2252 = *(&local15);
panda$core$Object** $tmp2253 = &$tmp2252->first;
panda$core$Object* $tmp2254 = *$tmp2253;
panda$core$Int64 $tmp2255 = (panda$core$Int64) {0};
ITable* $tmp2256 = ((panda$collections$ListView*) $tmp2254)->$class->itable;
while ($tmp2256->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp2256 = $tmp2256->next;
}
$fn2258 $tmp2257 = $tmp2256->methods[0];
panda$core$Object* $tmp2259 = $tmp2257(((panda$collections$ListView*) $tmp2254), $tmp2255);
org$pandalanguage$pandac$IR$Value* $tmp2260 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2251, ((org$pandalanguage$pandac$MethodRef*) $tmp2259), param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2260));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2260));
// unreffing REF($660:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp2259);
// unreffing REF($658:panda.collections.ListView.T)
org$pandalanguage$pandac$Pair* $tmp2261 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2261));
// unreffing best
*(&local15) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2262 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2262));
// unreffing methods
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2263 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2263));
// unreffing target
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2264 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2264));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2265 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2265));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp2260;
block35:;
// line 577
panda$collections$Array* $tmp2266 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2266);
*(&local16) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2266));
panda$collections$Array* $tmp2267 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2267));
*(&local16) = $tmp2266;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2266));
// unreffing REF($696:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 578
ITable* $tmp2268 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp2268->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2268 = $tmp2268->next;
}
$fn2270 $tmp2269 = $tmp2268->methods[0];
panda$collections$Iterator* $tmp2271 = $tmp2269(((panda$collections$Iterable*) param3));
goto block38;
block38:;
ITable* $tmp2272 = $tmp2271->$class->itable;
while ($tmp2272->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2272 = $tmp2272->next;
}
$fn2274 $tmp2273 = $tmp2272->methods[0];
panda$core$Bit $tmp2275 = $tmp2273($tmp2271);
bool $tmp2276 = $tmp2275.value;
if ($tmp2276) goto block40; else goto block39;
block39:;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2277 = $tmp2271->$class->itable;
while ($tmp2277->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2277 = $tmp2277->next;
}
$fn2279 $tmp2278 = $tmp2277->methods[1];
panda$core$Object* $tmp2280 = $tmp2278($tmp2271);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2280)));
org$pandalanguage$pandac$ASTNode* $tmp2281 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2281));
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) $tmp2280);
// line 579
org$pandalanguage$pandac$ASTNode* $tmp2282 = *(&local17);
org$pandalanguage$pandac$Type* $tmp2283 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, $tmp2282);
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2283));
org$pandalanguage$pandac$Type* $tmp2284 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2284));
*(&local18) = $tmp2283;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2283));
// unreffing REF($734:org.pandalanguage.pandac.Type?)
// line 580
org$pandalanguage$pandac$Type* $tmp2285 = *(&local18);
panda$core$Bit $tmp2286 = panda$core$Bit$init$builtin_bit($tmp2285 == NULL);
bool $tmp2287 = $tmp2286.value;
if ($tmp2287) goto block41; else goto block42;
block41:;
// line 582
panda$core$Int64* $tmp2288 = &param0->errorCount;
panda$core$Int64 $tmp2289 = *$tmp2288;
*(&local19) = $tmp2289;
// line 583
org$pandalanguage$pandac$ASTNode* $tmp2290 = *(&local17);
org$pandalanguage$pandac$IR$Value* $tmp2291 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp2290);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2291));
// unreffing REF($757:org.pandalanguage.pandac.IR.Value?)
// line 584
panda$core$Int64* $tmp2292 = &param0->errorCount;
panda$core$Int64 $tmp2293 = *$tmp2292;
panda$core$Int64 $tmp2294 = *(&local19);
panda$core$Bit $tmp2295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2293, $tmp2294);
bool $tmp2296 = $tmp2295.value;
if ($tmp2296) goto block43; else goto block44;
block43:;
// line 586
org$pandalanguage$pandac$FixedArray* $tmp2297 = *(&local14);
panda$core$Int64 $tmp2298 = (panda$core$Int64) {0};
panda$core$Object* $tmp2299 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2297, $tmp2298);
panda$core$String** $tmp2300 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2299))->name;
panda$core$String* $tmp2301 = *$tmp2300;
panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2303, $tmp2301);
panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2302, &$s2305);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp2304);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2304));
// unreffing REF($778:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2302));
// unreffing REF($777:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2299);
// unreffing REF($772:org.pandalanguage.pandac.FixedArray.T)
goto block44;
block44:;
// line 588
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp2306 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2306));
// unreffing preferred
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2280);
// unreffing REF($724:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2307 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2307));
// unreffing a
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2271));
// unreffing REF($713:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$Array* $tmp2308 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2308));
// unreffing argTypes
*(&local16) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Pair* $tmp2309 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2309));
// unreffing best
*(&local15) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2310 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2310));
// unreffing methods
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2311 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2311));
// unreffing target
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2312 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2312));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2313 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2313));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block42:;
// line 590
panda$collections$Array* $tmp2314 = *(&local16);
org$pandalanguage$pandac$Type* $tmp2315 = *(&local18);
panda$collections$Array$add$panda$collections$Array$T($tmp2314, ((panda$core$Object*) $tmp2315));
org$pandalanguage$pandac$Type* $tmp2316 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2316));
// unreffing preferred
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2280);
// unreffing REF($724:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2317 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2317));
// unreffing a
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block38;
block40:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2271));
// unreffing REF($713:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 592
org$pandalanguage$pandac$FixedArray* $tmp2318 = *(&local14);
panda$core$Int64 $tmp2319 = (panda$core$Int64) {0};
panda$core$Object* $tmp2320 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2318, $tmp2319);
panda$core$String** $tmp2321 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2320))->name;
panda$core$String* $tmp2322 = *$tmp2321;
panda$core$String* $tmp2323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2324, $tmp2322);
panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2323, &$s2326);
panda$collections$Array* $tmp2327 = *(&local16);
ITable* $tmp2328 = ((panda$collections$CollectionView*) $tmp2327)->$class->itable;
while ($tmp2328->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2328 = $tmp2328->next;
}
$fn2330 $tmp2329 = $tmp2328->methods[1];
panda$core$String* $tmp2331 = $tmp2329(((panda$collections$CollectionView*) $tmp2327));
panda$core$String* $tmp2332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2325, $tmp2331);
panda$core$String* $tmp2333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2332, &$s2334);
$fn2336 $tmp2335 = ($fn2336) param4->$class->vtable[2];
panda$core$String* $tmp2337 = $tmp2335(param4);
panda$core$String* $tmp2338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2333, $tmp2337);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp2338);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2338));
// unreffing REF($883:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2337));
// unreffing REF($882:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2333));
// unreffing REF($880:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2332));
// unreffing REF($879:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2331));
// unreffing REF($878:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2325));
// unreffing REF($874:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2323));
// unreffing REF($873:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2320);
// unreffing REF($868:org.pandalanguage.pandac.FixedArray.T)
// line 594
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$collections$Array* $tmp2339 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2339));
// unreffing argTypes
*(&local16) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Pair* $tmp2340 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2340));
// unreffing best
*(&local15) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2341 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2341));
// unreffing methods
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2342 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2342));
// unreffing target
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2343 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2343));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2344 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2344));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block33:;
panda$core$Int64 $tmp2345 = (panda$core$Int64) {12};
panda$core$Bit $tmp2346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2019, $tmp2345);
bool $tmp2347 = $tmp2346.value;
if ($tmp2347) goto block45; else goto block46;
block45:;
org$pandalanguage$pandac$IR$Value** $tmp2348 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp2349 = *$tmp2348;
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2349));
org$pandalanguage$pandac$IR$Value* $tmp2350 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2350));
*(&local20) = $tmp2349;
org$pandalanguage$pandac$FixedArray** $tmp2351 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 8);
org$pandalanguage$pandac$FixedArray* $tmp2352 = *$tmp2351;
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2352));
org$pandalanguage$pandac$FixedArray* $tmp2353 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2353));
*(&local21) = $tmp2352;
org$pandalanguage$pandac$FixedArray** $tmp2354 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2355 = *$tmp2354;
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2355));
org$pandalanguage$pandac$FixedArray* $tmp2356 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2356));
*(&local22) = $tmp2355;
// line 597
org$pandalanguage$pandac$IR$Value* $tmp2357 = *(&local20);
org$pandalanguage$pandac$FixedArray* $tmp2358 = *(&local21);
org$pandalanguage$pandac$FixedArray* $tmp2359 = *(&local22);
org$pandalanguage$pandac$Pair* $tmp2360 = org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, param1, $tmp2357, ((panda$collections$ListView*) $tmp2358), ((panda$collections$ListView*) $tmp2359), param3, param4);
*(&local23) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2360));
org$pandalanguage$pandac$Pair* $tmp2361 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2361));
*(&local23) = $tmp2360;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2360));
// unreffing REF($980:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
// line 598
org$pandalanguage$pandac$Pair* $tmp2362 = *(&local23);
panda$core$Bit $tmp2363 = panda$core$Bit$init$builtin_bit($tmp2362 != NULL);
bool $tmp2364 = $tmp2363.value;
if ($tmp2364) goto block47; else goto block48;
block47:;
// line 599
org$pandalanguage$pandac$Pair* $tmp2365 = *(&local23);
panda$core$Object** $tmp2366 = &$tmp2365->first;
panda$core$Object* $tmp2367 = *$tmp2366;
ITable* $tmp2368 = ((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp2367))->$class->itable;
while ($tmp2368->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2368 = $tmp2368->next;
}
$fn2370 $tmp2369 = $tmp2368->methods[0];
panda$core$Int64 $tmp2371 = $tmp2369(((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp2367)));
panda$core$Int64 $tmp2372 = (panda$core$Int64) {1};
int64_t $tmp2373 = $tmp2371.value;
int64_t $tmp2374 = $tmp2372.value;
bool $tmp2375 = $tmp2373 > $tmp2374;
panda$core$Bit $tmp2376 = (panda$core$Bit) {$tmp2375};
bool $tmp2377 = $tmp2376.value;
if ($tmp2377) goto block49; else goto block50;
block49:;
// line 600
org$pandalanguage$pandac$Pair* $tmp2378 = *(&local23);
panda$core$Object** $tmp2379 = &$tmp2378->first;
panda$core$Object* $tmp2380 = *$tmp2379;
org$pandalanguage$pandac$Compiler$reportAmbiguousMatch$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext(param0, param1, ((panda$collections$ListView*) $tmp2380), param3, param4);
// line 601
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Pair* $tmp2381 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2381));
// unreffing best
*(&local23) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2382 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2382));
// unreffing types
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2383 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2383));
// unreffing methods
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2384 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2384));
// unreffing target
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2385 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2385));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2386 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2386));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block50:;
// line 603
org$pandalanguage$pandac$IR$Value* $tmp2387 = *(&local20);
org$pandalanguage$pandac$Pair* $tmp2388 = *(&local23);
panda$core$Object** $tmp2389 = &$tmp2388->first;
panda$core$Object* $tmp2390 = *$tmp2389;
panda$core$Int64 $tmp2391 = (panda$core$Int64) {0};
ITable* $tmp2392 = ((panda$collections$ListView*) $tmp2390)->$class->itable;
while ($tmp2392->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp2392 = $tmp2392->next;
}
$fn2394 $tmp2393 = $tmp2392->methods[0];
panda$core$Object* $tmp2395 = $tmp2393(((panda$collections$ListView*) $tmp2390), $tmp2391);
org$pandalanguage$pandac$IR$Value* $tmp2396 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2387, ((org$pandalanguage$pandac$MethodRef*) $tmp2395), param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
// unreffing REF($1066:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp2395);
// unreffing REF($1064:panda.collections.ListView.T)
org$pandalanguage$pandac$Pair* $tmp2397 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2397));
// unreffing best
*(&local23) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2398 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2398));
// unreffing types
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2399 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2399));
// unreffing methods
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2400 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2400));
// unreffing target
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2401 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2401));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2402 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2402));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp2396;
block48:;
// line 606
panda$collections$Array* $tmp2403 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2403);
*(&local24) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2403));
panda$collections$Array* $tmp2404 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2404));
*(&local24) = $tmp2403;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2403));
// unreffing REF($1107:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 607
ITable* $tmp2405 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp2405->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2405 = $tmp2405->next;
}
$fn2407 $tmp2406 = $tmp2405->methods[0];
panda$collections$Iterator* $tmp2408 = $tmp2406(((panda$collections$Iterable*) param3));
goto block51;
block51:;
ITable* $tmp2409 = $tmp2408->$class->itable;
while ($tmp2409->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2409 = $tmp2409->next;
}
$fn2411 $tmp2410 = $tmp2409->methods[0];
panda$core$Bit $tmp2412 = $tmp2410($tmp2408);
bool $tmp2413 = $tmp2412.value;
if ($tmp2413) goto block53; else goto block52;
block52:;
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2414 = $tmp2408->$class->itable;
while ($tmp2414->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2414 = $tmp2414->next;
}
$fn2416 $tmp2415 = $tmp2414->methods[1];
panda$core$Object* $tmp2417 = $tmp2415($tmp2408);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2417)));
org$pandalanguage$pandac$ASTNode* $tmp2418 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2418));
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) $tmp2417);
// line 608
org$pandalanguage$pandac$ASTNode* $tmp2419 = *(&local25);
org$pandalanguage$pandac$Type* $tmp2420 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, $tmp2419);
*(&local26) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2420));
org$pandalanguage$pandac$Type* $tmp2421 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2421));
*(&local26) = $tmp2420;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2420));
// unreffing REF($1145:org.pandalanguage.pandac.Type?)
// line 609
org$pandalanguage$pandac$Type* $tmp2422 = *(&local26);
panda$core$Bit $tmp2423 = panda$core$Bit$init$builtin_bit($tmp2422 == NULL);
bool $tmp2424 = $tmp2423.value;
if ($tmp2424) goto block54; else goto block55;
block54:;
// line 611
panda$core$Int64* $tmp2425 = &param0->errorCount;
panda$core$Int64 $tmp2426 = *$tmp2425;
*(&local27) = $tmp2426;
// line 612
org$pandalanguage$pandac$ASTNode* $tmp2427 = *(&local25);
org$pandalanguage$pandac$IR$Value* $tmp2428 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp2427);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2428));
// unreffing REF($1168:org.pandalanguage.pandac.IR.Value?)
// line 613
panda$core$Int64* $tmp2429 = &param0->errorCount;
panda$core$Int64 $tmp2430 = *$tmp2429;
panda$core$Int64 $tmp2431 = *(&local27);
panda$core$Bit $tmp2432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2430, $tmp2431);
bool $tmp2433 = $tmp2432.value;
if ($tmp2433) goto block56; else goto block57;
block56:;
// line 615
org$pandalanguage$pandac$FixedArray* $tmp2434 = *(&local21);
panda$core$Int64 $tmp2435 = (panda$core$Int64) {0};
panda$core$Object* $tmp2436 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2434, $tmp2435);
panda$core$String** $tmp2437 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2436))->name;
panda$core$String* $tmp2438 = *$tmp2437;
panda$core$String* $tmp2439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2440, $tmp2438);
panda$core$String* $tmp2441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2439, &$s2442);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp2441);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2441));
// unreffing REF($1189:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2439));
// unreffing REF($1188:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2436);
// unreffing REF($1183:org.pandalanguage.pandac.FixedArray.T)
goto block57;
block57:;
// line 617
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp2443 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2443));
// unreffing preferred
*(&local26) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2417);
// unreffing REF($1135:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2444 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2444));
// unreffing a
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2408));
// unreffing REF($1124:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$Array* $tmp2445 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2445));
// unreffing argTypes
*(&local24) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Pair* $tmp2446 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2446));
// unreffing best
*(&local23) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2447 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2447));
// unreffing types
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2448 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2448));
// unreffing methods
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2449 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2449));
// unreffing target
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2450 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2450));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2451 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2451));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block55:;
// line 619
panda$collections$Array* $tmp2452 = *(&local24);
org$pandalanguage$pandac$Type* $tmp2453 = *(&local26);
panda$collections$Array$add$panda$collections$Array$T($tmp2452, ((panda$core$Object*) $tmp2453));
org$pandalanguage$pandac$Type* $tmp2454 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2454));
// unreffing preferred
*(&local26) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2417);
// unreffing REF($1135:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2455 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2455));
// unreffing a
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block51;
block53:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2408));
// unreffing REF($1124:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 621
org$pandalanguage$pandac$FixedArray* $tmp2456 = *(&local21);
panda$core$Int64 $tmp2457 = (panda$core$Int64) {0};
panda$core$Object* $tmp2458 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2456, $tmp2457);
panda$core$String** $tmp2459 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2458))->name;
panda$core$String* $tmp2460 = *$tmp2459;
panda$core$String* $tmp2461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2462, $tmp2460);
panda$core$String* $tmp2463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2461, &$s2464);
panda$collections$Array* $tmp2465 = *(&local24);
ITable* $tmp2466 = ((panda$collections$CollectionView*) $tmp2465)->$class->itable;
while ($tmp2466->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2466 = $tmp2466->next;
}
$fn2468 $tmp2467 = $tmp2466->methods[1];
panda$core$String* $tmp2469 = $tmp2467(((panda$collections$CollectionView*) $tmp2465));
panda$core$String* $tmp2470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2463, $tmp2469);
panda$core$String* $tmp2471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, &$s2472);
$fn2474 $tmp2473 = ($fn2474) param4->$class->vtable[2];
panda$core$String* $tmp2475 = $tmp2473(param4);
panda$core$String* $tmp2476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2471, $tmp2475);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp2476);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2476));
// unreffing REF($1299:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2475));
// unreffing REF($1298:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2471));
// unreffing REF($1296:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2470));
// unreffing REF($1295:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2469));
// unreffing REF($1294:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2463));
// unreffing REF($1290:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2461));
// unreffing REF($1289:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2458);
// unreffing REF($1284:org.pandalanguage.pandac.FixedArray.T)
// line 623
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$collections$Array* $tmp2477 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2477));
// unreffing argTypes
*(&local24) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Pair* $tmp2478 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2478));
// unreffing best
*(&local23) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2479 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2479));
// unreffing types
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2480 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2480));
// unreffing methods
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2481 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
// unreffing target
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2482 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2482));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2483 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2483));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block46:;
panda$core$Int64 $tmp2484 = (panda$core$Int64) {5};
panda$core$Bit $tmp2485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2019, $tmp2484);
bool $tmp2486 = $tmp2485.value;
if ($tmp2486) goto block58; else goto block59;
block59:;
panda$core$Int64 $tmp2487 = (panda$core$Int64) {7};
panda$core$Bit $tmp2488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2019, $tmp2487);
bool $tmp2489 = $tmp2488.value;
if ($tmp2489) goto block58; else goto block60;
block58:;
// line 626
org$pandalanguage$pandac$IR$Value* $tmp2490 = org$pandalanguage$pandac$expression$Call$callMethodObject$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2490));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2490));
// unreffing REF($1373:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR* $tmp2491 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2491));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2492 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2492));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp2490;
block60:;
panda$core$Int64 $tmp2493 = (panda$core$Int64) {14};
panda$core$Bit $tmp2494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2019, $tmp2493);
bool $tmp2495 = $tmp2494.value;
if ($tmp2495) goto block61; else goto block62;
block61:;
org$pandalanguage$pandac$Type** $tmp2496 = (org$pandalanguage$pandac$Type**) (param2->$data + 0);
org$pandalanguage$pandac$Type* $tmp2497 = *$tmp2496;
*(&local28) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
org$pandalanguage$pandac$Type* $tmp2498 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
*(&local28) = $tmp2497;
// line 629
*(&local29) = ((org$pandalanguage$pandac$Type*) NULL);
// line 630
org$pandalanguage$pandac$Type* $tmp2499 = *(&local28);
panda$core$Bit $tmp2500 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit($tmp2499);
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block63; else goto block65;
block63:;
// line 631
org$pandalanguage$pandac$Type* $tmp2502 = *(&local28);
org$pandalanguage$pandac$FixedArray** $tmp2503 = &$tmp2502->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp2504 = *$tmp2503;
panda$core$Int64 $tmp2505 = (panda$core$Int64) {1};
panda$core$Object* $tmp2506 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2504, $tmp2505);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp2506)));
org$pandalanguage$pandac$Type* $tmp2507 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2507));
*(&local29) = ((org$pandalanguage$pandac$Type*) $tmp2506);
panda$core$Panda$unref$panda$core$Object$Q($tmp2506);
// unreffing REF($1417:org.pandalanguage.pandac.FixedArray.T)
goto block64;
block65:;
// line 1
// line 634
org$pandalanguage$pandac$Type* $tmp2508 = *(&local28);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2508));
org$pandalanguage$pandac$Type* $tmp2509 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2509));
*(&local29) = $tmp2508;
goto block64;
block64:;
// line 636
org$pandalanguage$pandac$Type* $tmp2510 = *(&local29);
org$pandalanguage$pandac$ClassDecl* $tmp2511 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp2510);
*(&local30) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2511));
org$pandalanguage$pandac$ClassDecl* $tmp2512 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2512));
*(&local30) = $tmp2511;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2511));
// unreffing REF($1441:org.pandalanguage.pandac.ClassDecl?)
// line 637
org$pandalanguage$pandac$ClassDecl* $tmp2513 = *(&local30);
panda$core$Bit $tmp2514 = panda$core$Bit$init$builtin_bit($tmp2513 == NULL);
bool $tmp2515 = $tmp2514.value;
if ($tmp2515) goto block66; else goto block67;
block66:;
// line 638
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp2516 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2516));
// unreffing cl
*(&local30) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp2517 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2517));
// unreffing finalType
*(&local29) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp2518 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2518));
// unreffing t
*(&local28) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp2519 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2519));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2520 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2520));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block67:;
// line 640
org$pandalanguage$pandac$ClassDecl* $tmp2521 = *(&local30);
panda$core$Bit $tmp2522 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(param0, $tmp2521);
panda$core$Bit $tmp2523 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2522);
bool $tmp2524 = $tmp2523.value;
if ($tmp2524) goto block68; else goto block69;
block68:;
// line 641
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp2525 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2525));
// unreffing cl
*(&local30) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp2526 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2526));
// unreffing finalType
*(&local29) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp2527 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2527));
// unreffing t
*(&local28) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp2528 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2529 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2529));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block69:;
// line 643
org$pandalanguage$pandac$ClassDecl* $tmp2530 = *(&local30);
org$pandalanguage$pandac$SymbolTable* $tmp2531 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp2530);
org$pandalanguage$pandac$Symbol* $tmp2532 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2531, &$s2533);
*(&local31) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2532));
org$pandalanguage$pandac$Symbol* $tmp2534 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2534));
*(&local31) = $tmp2532;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2532));
// unreffing REF($1527:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2531));
// unreffing REF($1526:org.pandalanguage.pandac.SymbolTable)
// line 644
org$pandalanguage$pandac$Symbol* $tmp2535 = *(&local31);
panda$core$Bit $tmp2536 = panda$core$Bit$init$builtin_bit($tmp2535 != NULL);
bool $tmp2537 = $tmp2536.value;
if ($tmp2537) goto block70; else goto block71;
block71:;
panda$core$Int64 $tmp2538 = (panda$core$Int64) {644};
org$pandalanguage$pandac$ClassDecl* $tmp2539 = *(&local30);
panda$core$String** $tmp2540 = &$tmp2539->name;
panda$core$String* $tmp2541 = *$tmp2540;
panda$core$String* $tmp2542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2543, $tmp2541);
panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2542, &$s2545);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2546, $tmp2538, $tmp2544);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2544));
// unreffing REF($1553:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2542));
// unreffing REF($1552:panda.core.String)
abort(); // unreachable
block70:;
// line 645
org$pandalanguage$pandac$ClassDecl* $tmp2547 = *(&local30);
panda$core$Bit $tmp2548 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(param0, $tmp2547);
bool $tmp2549 = $tmp2548.value;
if ($tmp2549) goto block72; else goto block73;
block72:;
// line 646
org$pandalanguage$pandac$Symbol* $tmp2550 = *(&local31);
org$pandalanguage$pandac$IR$Value* $tmp2551 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Symbol$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp2550);
org$pandalanguage$pandac$IR$Value* $tmp2552 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2551, param3, param4);
org$pandalanguage$pandac$Type* $tmp2553 = *(&local29);
org$pandalanguage$pandac$IR$Value* $tmp2554 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2552, $tmp2553);
org$pandalanguage$pandac$IR$Value* $tmp2555 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2554, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2555));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2555));
// unreffing REF($1575:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2554));
// unreffing REF($1574:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2552));
// unreffing REF($1572:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2551));
// unreffing REF($1570:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Symbol* $tmp2556 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2556));
// unreffing inits
*(&local31) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2557 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2557));
// unreffing cl
*(&local30) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp2558 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2558));
// unreffing finalType
*(&local29) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp2559 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2559));
// unreffing t
*(&local28) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp2560 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2560));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2561 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2561));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp2555;
block73:;
// line 650
org$pandalanguage$pandac$IR* $tmp2562 = *(&local1);
org$pandalanguage$pandac$IR$Statement* $tmp2563 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2564 = (panda$core$Int64) {6};
org$pandalanguage$pandac$ClassDecl* $tmp2565 = *(&local30);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl($tmp2563, $tmp2564, param1, $tmp2565);
$fn2567 $tmp2566 = ($fn2567) $tmp2562->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2568 = $tmp2566($tmp2562, $tmp2563);
*(&local32) = $tmp2568;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2563));
// unreffing REF($1623:org.pandalanguage.pandac.IR.Statement)
// line 651
org$pandalanguage$pandac$IR$Value* $tmp2569 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp2570 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp2571 = *(&local32);
org$pandalanguage$pandac$Type* $tmp2572 = *(&local29);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp2569, $tmp2570, $tmp2571, $tmp2572);
*(&local33) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
org$pandalanguage$pandac$IR$Value* $tmp2573 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2573));
*(&local33) = $tmp2569;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
// unreffing REF($1635:org.pandalanguage.pandac.IR.Value)
// line 652
panda$collections$Stack** $tmp2574 = &param0->enclosingContexts;
panda$collections$Stack* $tmp2575 = *$tmp2574;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp2576 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp2577 = (panda$core$Int64) {3};
org$pandalanguage$pandac$IR$Value* $tmp2578 = *(&local33);
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value($tmp2576, $tmp2577, $tmp2578);
panda$collections$Stack$push$panda$collections$Stack$T($tmp2575, ((panda$core$Object*) $tmp2576));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2576));
// unreffing REF($1654:org.pandalanguage.pandac.Compiler.EnclosingContext)
// line 653
org$pandalanguage$pandac$IR$Value* $tmp2579 = *(&local33);
org$pandalanguage$pandac$Symbol* $tmp2580 = *(&local31);
org$pandalanguage$pandac$IR$Value* $tmp2581 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Symbol$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2579, $tmp2580);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp2582 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp2583 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp2582, $tmp2583);
org$pandalanguage$pandac$IR$Value* $tmp2584 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2581, param3, $tmp2582);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2584));
// unreffing REF($1673:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2582));
// unreffing REF($1670:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
// unreffing REF($1668:org.pandalanguage.pandac.IR.Value?)
// line 655
org$pandalanguage$pandac$IR$Value* $tmp2585 = *(&local33);
org$pandalanguage$pandac$IR$Value* $tmp2586 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2585, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2586));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2586));
// unreffing REF($1686:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR$Value* $tmp2587 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2587));
// unreffing constructRef
*(&local33) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Symbol* $tmp2588 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2588));
// unreffing inits
*(&local31) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2589 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2589));
// unreffing cl
*(&local30) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp2590 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2590));
// unreffing finalType
*(&local29) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp2591 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2591));
// unreffing t
*(&local28) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp2592 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2592));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2593 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2593));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp2586;
block62:;
// line 658
panda$core$Bit $tmp2594 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2595 = $tmp2594.value;
if ($tmp2595) goto block74; else goto block75;
block75:;
panda$core$Int64 $tmp2596 = (panda$core$Int64) {658};
panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2598, ((panda$core$Object*) param2));
panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, &$s2600);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2601, $tmp2596, $tmp2599);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2599));
// unreffing REF($1735:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2597));
// unreffing REF($1734:panda.core.String)
abort(); // unreachable
block74:;
goto block1;
block1:;
panda$core$Bit $tmp2602 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2603 = $tmp2602.value;
if ($tmp2603) goto block76; else goto block77;
block77:;
panda$core$Int64 $tmp2604 = (panda$core$Int64) {522};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2605, $tmp2604, &$s2606);
abort(); // unreachable
block76:;
abort(); // unreachable

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$MethodRef* param3, panda$collections$ListView* param4, org$pandalanguage$pandac$Compiler$TypeContext* param5) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$MethodRef* local1 = NULL;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Int64 local4;
panda$core$Bit local5;
org$pandalanguage$pandac$IR$Statement$ID local6;
org$pandalanguage$pandac$IR$Statement* local7 = NULL;
panda$core$Bit local8;
panda$core$Bit local9;
org$pandalanguage$pandac$Pair* local10 = NULL;
org$pandalanguage$pandac$MethodRef* local11 = NULL;
panda$core$Bit local12;
org$pandalanguage$pandac$Type* local13 = NULL;
org$pandalanguage$pandac$Type* local14 = NULL;
panda$collections$Array* local15 = NULL;
org$pandalanguage$pandac$IR$Value* local16 = NULL;
panda$core$Bit local17;
panda$core$Int64 local18;
panda$core$Bit local19;
panda$core$Bit local20;
panda$core$Int64 local21;
org$pandalanguage$pandac$IR$Value* local22 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local23;
panda$core$Bit local24;
org$pandalanguage$pandac$IR$Statement$ID local25;
org$pandalanguage$pandac$IR$Value* local26 = NULL;
panda$core$Bit local27;
// line 668
org$pandalanguage$pandac$IR** $tmp2607 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp2608 = *$tmp2607;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2608));
org$pandalanguage$pandac$IR* $tmp2609 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2609));
*(&local0) = $tmp2608;
// line 670
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$MethodRef* $tmp2610 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2610));
*(&local1) = param3;
// line 671
org$pandalanguage$pandac$MethodRef* $tmp2611 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp2612 = &$tmp2611->value;
org$pandalanguage$pandac$MethodDecl* $tmp2613 = *$tmp2612;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2614 = &$tmp2613->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp2615 = *$tmp2614;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2616;
$tmp2616 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2616->value = $tmp2615;
panda$core$Int64 $tmp2617 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2618 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2617);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2619;
$tmp2619 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2619->value = $tmp2618;
ITable* $tmp2620 = ((panda$core$Equatable*) $tmp2616)->$class->itable;
while ($tmp2620->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2620 = $tmp2620->next;
}
$fn2622 $tmp2621 = $tmp2620->methods[0];
panda$core$Bit $tmp2623 = $tmp2621(((panda$core$Equatable*) $tmp2616), ((panda$core$Equatable*) $tmp2619));
bool $tmp2624 = $tmp2623.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2619)));
// unreffing REF($28:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2616)));
// unreffing REF($24:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp2624) goto block1; else goto block2;
block1:;
// line 672
panda$core$Bit $tmp2625 = panda$core$Bit$init$builtin_bit(false);
*(&local2) = $tmp2625;
// line 673
panda$core$Bit $tmp2626 = panda$core$Bit$init$builtin_bit(false);
*(&local3) = $tmp2626;
// line 674
panda$core$Bit $tmp2627 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp2628 = $tmp2627.value;
if ($tmp2628) goto block3; else goto block5;
block3:;
// line 675
panda$core$Int64* $tmp2629 = &param2->$rawValue;
panda$core$Int64 $tmp2630 = *$tmp2629;
panda$core$Int64 $tmp2631 = (panda$core$Int64) {5};
panda$core$Bit $tmp2632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2630, $tmp2631);
bool $tmp2633 = $tmp2632.value;
if ($tmp2633) goto block7; else goto block8;
block7:;
panda$core$Int64* $tmp2634 = (panda$core$Int64*) (param2->$data + 0);
panda$core$Int64 $tmp2635 = *$tmp2634;
*(&local4) = $tmp2635;
org$pandalanguage$pandac$Type** $tmp2636 = (org$pandalanguage$pandac$Type**) (param2->$data + 8);
org$pandalanguage$pandac$Type* $tmp2637 = *$tmp2636;
// line 677
panda$core$Int64 $tmp2638 = *(&local4);
panda$core$Int64 $tmp2639 = (panda$core$Int64) {0};
panda$core$Bit $tmp2640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2638, $tmp2639);
bool $tmp2641 = $tmp2640.value;
if ($tmp2641) goto block9; else goto block10;
block9:;
panda$core$Bit $tmp2642 = org$pandalanguage$pandac$Compiler$isClassContext$R$panda$core$Bit(param0);
panda$core$Bit $tmp2643 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2642);
*(&local5) = $tmp2643;
goto block11;
block10:;
*(&local5) = $tmp2640;
goto block11;
block11:;
panda$core$Bit $tmp2644 = *(&local5);
*(&local3) = $tmp2644;
// line 678
panda$core$Bit $tmp2645 = panda$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2645;
goto block6;
block8:;
panda$core$Int64 $tmp2646 = (panda$core$Int64) {7};
panda$core$Bit $tmp2647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2630, $tmp2646);
bool $tmp2648 = $tmp2647.value;
if ($tmp2648) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$IR$Statement$ID* $tmp2649 = (org$pandalanguage$pandac$IR$Statement$ID*) (param2->$data + 0);
org$pandalanguage$pandac$IR$Statement$ID $tmp2650 = *$tmp2649;
*(&local6) = $tmp2650;
org$pandalanguage$pandac$Type** $tmp2651 = (org$pandalanguage$pandac$Type**) (param2->$data + 8);
org$pandalanguage$pandac$Type* $tmp2652 = *$tmp2651;
// line 681
org$pandalanguage$pandac$IR$Statement$ID $tmp2653 = *(&local6);
org$pandalanguage$pandac$IR* $tmp2654 = *(&local0);
org$pandalanguage$pandac$IR$Block** $tmp2655 = &$tmp2654->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp2656 = *$tmp2655;
panda$collections$Array** $tmp2657 = &$tmp2656->ids;
panda$collections$Array* $tmp2658 = *$tmp2657;
org$pandalanguage$pandac$IR* $tmp2659 = *(&local0);
org$pandalanguage$pandac$IR$Block** $tmp2660 = &$tmp2659->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp2661 = *$tmp2660;
panda$collections$Array** $tmp2662 = &$tmp2661->ids;
panda$collections$Array* $tmp2663 = *$tmp2662;
ITable* $tmp2664 = ((panda$collections$CollectionView*) $tmp2663)->$class->itable;
while ($tmp2664->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2664 = $tmp2664->next;
}
$fn2666 $tmp2665 = $tmp2664->methods[0];
panda$core$Int64 $tmp2667 = $tmp2665(((panda$collections$CollectionView*) $tmp2663));
panda$core$Int64 $tmp2668 = (panda$core$Int64) {1};
int64_t $tmp2669 = $tmp2667.value;
int64_t $tmp2670 = $tmp2668.value;
int64_t $tmp2671 = $tmp2669 - $tmp2670;
panda$core$Int64 $tmp2672 = (panda$core$Int64) {$tmp2671};
panda$core$Object* $tmp2673 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2658, $tmp2672);
panda$core$Bit $tmp2674 = org$pandalanguage$pandac$IR$Statement$ID$$EQ$org$pandalanguage$pandac$IR$Statement$ID$R$panda$core$Bit($tmp2653, ((org$pandalanguage$pandac$IR$Statement$ID$wrapper*) $tmp2673)->value);
bool $tmp2675 = $tmp2674.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp2673);
// unreffing REF($111:panda.collections.Array.T)
if ($tmp2675) goto block14; else goto block15;
block14:;
// line 682
org$pandalanguage$pandac$IR* $tmp2676 = *(&local0);
org$pandalanguage$pandac$IR$Block** $tmp2677 = &$tmp2676->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp2678 = *$tmp2677;
panda$collections$Array** $tmp2679 = &$tmp2678->statements;
panda$collections$Array* $tmp2680 = *$tmp2679;
org$pandalanguage$pandac$IR* $tmp2681 = *(&local0);
org$pandalanguage$pandac$IR$Block** $tmp2682 = &$tmp2681->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp2683 = *$tmp2682;
panda$collections$Array** $tmp2684 = &$tmp2683->statements;
panda$collections$Array* $tmp2685 = *$tmp2684;
ITable* $tmp2686 = ((panda$collections$CollectionView*) $tmp2685)->$class->itable;
while ($tmp2686->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2686 = $tmp2686->next;
}
$fn2688 $tmp2687 = $tmp2686->methods[0];
panda$core$Int64 $tmp2689 = $tmp2687(((panda$collections$CollectionView*) $tmp2685));
panda$core$Int64 $tmp2690 = (panda$core$Int64) {1};
int64_t $tmp2691 = $tmp2689.value;
int64_t $tmp2692 = $tmp2690.value;
int64_t $tmp2693 = $tmp2691 - $tmp2692;
panda$core$Int64 $tmp2694 = (panda$core$Int64) {$tmp2693};
panda$core$Object* $tmp2695 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2680, $tmp2694);
*(&local7) = ((org$pandalanguage$pandac$IR$Statement*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Statement*) $tmp2695)));
org$pandalanguage$pandac$IR$Statement* $tmp2696 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2696));
*(&local7) = ((org$pandalanguage$pandac$IR$Statement*) $tmp2695);
panda$core$Panda$unref$panda$core$Object$Q($tmp2695);
// unreffing REF($139:panda.collections.Array.T)
// line 683
org$pandalanguage$pandac$IR$Statement* $tmp2697 = *(&local7);
panda$core$Int64* $tmp2698 = &$tmp2697->$rawValue;
panda$core$Int64 $tmp2699 = *$tmp2698;
panda$core$Int64 $tmp2700 = (panda$core$Int64) {6};
panda$core$Bit $tmp2701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2699, $tmp2700);
bool $tmp2702 = $tmp2701.value;
if ($tmp2702) goto block17; else goto block16;
block17:;
// line 685
panda$core$Bit $tmp2703 = panda$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2703;
goto block16;
block16:;
org$pandalanguage$pandac$IR$Statement* $tmp2704 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2704));
// unreffing last
*(&local7) = ((org$pandalanguage$pandac$IR$Statement*) NULL);
goto block15;
block15:;
goto block6;
block13:;
panda$core$Int64 $tmp2705 = (panda$core$Int64) {13};
panda$core$Bit $tmp2706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2630, $tmp2705);
bool $tmp2707 = $tmp2706.value;
if ($tmp2707) goto block18; else goto block6;
block18:;
// line 691
panda$core$Bit $tmp2708 = panda$core$Bit$init$builtin_bit(true);
*(&local3) = $tmp2708;
// line 692
panda$core$Bit $tmp2709 = panda$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2709;
goto block6;
block6:;
goto block4;
block5:;
// line 1
// line 697
org$pandalanguage$pandac$MethodRef* $tmp2710 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp2711 = &$tmp2710->value;
org$pandalanguage$pandac$MethodDecl* $tmp2712 = *$tmp2711;
panda$core$Weak** $tmp2713 = &$tmp2712->owner;
panda$core$Weak* $tmp2714 = *$tmp2713;
panda$core$Object* $tmp2715 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2714);
panda$core$Bit $tmp2716 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp2715));
bool $tmp2717 = $tmp2716.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp2715);
// unreffing REF($190:panda.core.Weak.T)
if ($tmp2717) goto block19; else goto block21;
block19:;
// line 698
panda$core$Bit $tmp2718 = panda$core$Bit$init$builtin_bit(false);
*(&local3) = $tmp2718;
// line 699
panda$core$Bit $tmp2719 = panda$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2719;
goto block20;
block21:;
// line 1
// line 702
panda$core$Bit $tmp2720 = org$pandalanguage$pandac$Compiler$isClassContext$R$panda$core$Bit(param0);
panda$core$Bit $tmp2721 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2720);
*(&local3) = $tmp2721;
// line 703
panda$core$Bit $tmp2722 = *(&local3);
*(&local2) = $tmp2722;
goto block20;
block20:;
goto block4;
block4:;
// line 706
panda$core$Bit $tmp2723 = *(&local3);
bool $tmp2724 = $tmp2723.value;
if ($tmp2724) goto block24; else goto block25;
block24:;
panda$collections$Stack** $tmp2725 = &param0->currentMethod;
panda$collections$Stack* $tmp2726 = *$tmp2725;
panda$core$Int64 $tmp2727 = (panda$core$Int64) {0};
panda$core$Object* $tmp2728 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp2726, $tmp2727);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2729 = &((org$pandalanguage$pandac$MethodDecl*) $tmp2728)->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp2730 = *$tmp2729;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2731;
$tmp2731 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2731->value = $tmp2730;
panda$core$Int64 $tmp2732 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2733 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2732);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2734;
$tmp2734 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2734->value = $tmp2733;
ITable* $tmp2735 = ((panda$core$Equatable*) $tmp2731)->$class->itable;
while ($tmp2735->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2735 = $tmp2735->next;
}
$fn2737 $tmp2736 = $tmp2735->methods[1];
panda$core$Bit $tmp2738 = $tmp2736(((panda$core$Equatable*) $tmp2731), ((panda$core$Equatable*) $tmp2734));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2734)));
// unreffing REF($232:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2731)));
// unreffing REF($228:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
panda$core$Panda$unref$panda$core$Object$Q($tmp2728);
// unreffing REF($224:panda.collections.Stack.T)
*(&local8) = $tmp2738;
goto block26;
block25:;
*(&local8) = $tmp2723;
goto block26;
block26:;
panda$core$Bit $tmp2739 = *(&local8);
bool $tmp2740 = $tmp2739.value;
if ($tmp2740) goto block22; else goto block23;
block22:;
// line 707
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s2741);
// line 708
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$MethodRef* $tmp2742 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2742));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp2743 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2743));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block23:;
// line 710
panda$core$Bit $tmp2744 = *(&local2);
panda$core$Bit $tmp2745 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2744);
bool $tmp2746 = $tmp2745.value;
if ($tmp2746) goto block27; else goto block28;
block27:;
// line 711
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s2747);
// line 712
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$MethodRef* $tmp2748 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2748));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp2749 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2749));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block28:;
goto block2;
block2:;
// line 715
ITable* $tmp2750 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp2750->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2750 = $tmp2750->next;
}
$fn2752 $tmp2751 = $tmp2750->methods[0];
panda$core$Int64 $tmp2753 = $tmp2751(((panda$collections$CollectionView*) param4));
org$pandalanguage$pandac$MethodRef* $tmp2754 = *(&local1);
panda$core$Int64 $tmp2755 = org$pandalanguage$pandac$MethodRef$get_parameterCount$R$panda$core$Int64($tmp2754);
int64_t $tmp2756 = $tmp2753.value;
int64_t $tmp2757 = $tmp2755.value;
bool $tmp2758 = $tmp2756 != $tmp2757;
panda$core$Bit $tmp2759 = (panda$core$Bit) {$tmp2758};
bool $tmp2760 = $tmp2759.value;
if ($tmp2760) goto block29; else goto block30;
block29:;
// line 716
org$pandalanguage$pandac$MethodRef* $tmp2761 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp2762 = &$tmp2761->value;
org$pandalanguage$pandac$MethodDecl* $tmp2763 = *$tmp2762;
panda$core$String* $tmp2764 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp2763);
panda$core$String* $tmp2765 = panda$core$String$convert$R$panda$core$String($tmp2764);
panda$core$String* $tmp2766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2765, &$s2767);
org$pandalanguage$pandac$MethodRef* $tmp2768 = *(&local1);
panda$core$Int64 $tmp2769 = org$pandalanguage$pandac$MethodRef$get_parameterCount$R$panda$core$Int64($tmp2768);
panda$core$Int64$wrapper* $tmp2770;
$tmp2770 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2770->value = $tmp2769;
panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2766, ((panda$core$Object*) $tmp2770));
panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2771, &$s2773);
org$pandalanguage$pandac$MethodRef* $tmp2774 = *(&local1);
panda$core$Int64 $tmp2775 = org$pandalanguage$pandac$MethodRef$get_parameterCount$R$panda$core$Int64($tmp2774);
panda$core$Int64 $tmp2776 = (panda$core$Int64) {1};
panda$core$Bit $tmp2777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2775, $tmp2776);
panda$core$Bit$wrapper* $tmp2778;
$tmp2778 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp2778->value = $tmp2777;
ITable* $tmp2779 = ((panda$core$Formattable*) $tmp2778)->$class->itable;
while ($tmp2779->$class != (panda$core$Class*) &panda$core$Formattable$class) {
    $tmp2779 = $tmp2779->next;
}
$fn2781 $tmp2780 = $tmp2779->methods[0];
panda$core$String* $tmp2782 = $tmp2780(((panda$core$Formattable*) $tmp2778), &$s2783);
panda$core$String* $tmp2784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2785, $tmp2782);
panda$core$String* $tmp2786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2784, &$s2787);
ITable* $tmp2788 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp2788->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2788 = $tmp2788->next;
}
$fn2790 $tmp2789 = $tmp2788->methods[0];
panda$core$Int64 $tmp2791 = $tmp2789(((panda$collections$CollectionView*) param4));
panda$core$Int64$wrapper* $tmp2792;
$tmp2792 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2792->value = $tmp2791;
panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2786, ((panda$core$Object*) $tmp2792));
panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, &$s2795);
panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2772, $tmp2794);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp2796);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2796));
// unreffing REF($328:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2794));
// unreffing REF($327:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2793));
// unreffing REF($326:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2792));
// unreffing REF($325:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2786));
// unreffing REF($321:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2784));
// unreffing REF($320:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2782));
// unreffing REF($319:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Formattable*) $tmp2778)));
// unreffing REF($317:panda.core.Formattable)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2772));
// unreffing REF($312:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2771));
// unreffing REF($311:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2770));
// unreffing REF($310:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2766));
// unreffing REF($307:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2765));
// unreffing REF($306:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2764));
// unreffing REF($305:panda.core.String)
// line 718
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$MethodRef* $tmp2797 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2797));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp2798 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2798));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block30:;
// line 720
panda$core$Bit $tmp2799 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp2800 = $tmp2799.value;
if ($tmp2800) goto block33; else goto block34;
block33:;
org$pandalanguage$pandac$MethodRef* $tmp2801 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp2802 = &$tmp2801->value;
org$pandalanguage$pandac$MethodDecl* $tmp2803 = *$tmp2802;
org$pandalanguage$pandac$Annotations** $tmp2804 = &$tmp2803->annotations;
org$pandalanguage$pandac$Annotations* $tmp2805 = *$tmp2804;
panda$core$Bit $tmp2806 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp2805);
*(&local9) = $tmp2806;
goto block35;
block34:;
*(&local9) = $tmp2799;
goto block35;
block35:;
panda$core$Bit $tmp2807 = *(&local9);
bool $tmp2808 = $tmp2807.value;
if ($tmp2808) goto block31; else goto block32;
block31:;
// line 721
panda$core$Int64* $tmp2809 = &param2->$rawValue;
panda$core$Int64 $tmp2810 = *$tmp2809;
panda$core$Int64 $tmp2811 = (panda$core$Int64) {14};
panda$core$Bit $tmp2812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2810, $tmp2811);
bool $tmp2813 = $tmp2812.value;
if ($tmp2813) goto block37; else goto block38;
block37:;
goto block36;
block38:;
// line 726
org$pandalanguage$pandac$MethodRef* $tmp2814 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp2815 = &$tmp2814->value;
org$pandalanguage$pandac$MethodDecl* $tmp2816 = *$tmp2815;
panda$core$String* $tmp2817 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp2816);
panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2819, $tmp2817);
panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, &$s2821);
panda$core$String* $tmp2822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, &$s2823);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp2822);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2822));
// unreffing REF($420:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2820));
// unreffing REF($419:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2818));
// unreffing REF($418:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2817));
// unreffing REF($417:panda.core.String)
goto block36;
block36:;
goto block32;
block32:;
// line 731
org$pandalanguage$pandac$MethodRef* $tmp2824 = *(&local1);
org$pandalanguage$pandac$Pair* $tmp2825 = org$pandalanguage$pandac$expression$Call$compileIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp2824, param4);
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2825));
org$pandalanguage$pandac$Pair* $tmp2826 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2826));
*(&local10) = $tmp2825;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2825));
// unreffing REF($438:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
// line 732
org$pandalanguage$pandac$Pair* $tmp2827 = *(&local10);
panda$core$Object** $tmp2828 = &$tmp2827->first;
panda$core$Object* $tmp2829 = *$tmp2828;
bool $tmp2830 = ((panda$core$Bit$wrapper*) $tmp2829)->value.value;
if ($tmp2830) goto block39; else goto block40;
block39:;
// line 733
org$pandalanguage$pandac$Pair* $tmp2831 = *(&local10);
panda$core$Object** $tmp2832 = &$tmp2831->second;
panda$core$Object* $tmp2833 = *$tmp2832;
org$pandalanguage$pandac$IR$Value* $tmp2834 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, ((org$pandalanguage$pandac$IR$Value*) $tmp2833), param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2834));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2834));
// unreffing REF($463:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Pair* $tmp2835 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2835));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp2836 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2836));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp2837 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2837));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp2834;
block40:;
// line 735
org$pandalanguage$pandac$MethodRef* $tmp2838 = *(&local1);
org$pandalanguage$pandac$MethodRef* $tmp2839 = org$pandalanguage$pandac$expression$Call$performTypeInference$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$MethodRef$Q(param0, $tmp2838, param4);
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2839));
org$pandalanguage$pandac$MethodRef* $tmp2840 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2840));
*(&local11) = $tmp2839;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2839));
// unreffing REF($487:org.pandalanguage.pandac.MethodRef?)
// line 736
org$pandalanguage$pandac$MethodRef* $tmp2841 = *(&local11);
panda$core$Bit $tmp2842 = panda$core$Bit$init$builtin_bit($tmp2841 == NULL);
bool $tmp2843 = $tmp2842.value;
if ($tmp2843) goto block41; else goto block42;
block41:;
// line 737
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$MethodRef* $tmp2844 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp2845 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2845));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp2846 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2846));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp2847 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2847));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block42:;
// line 739
org$pandalanguage$pandac$MethodRef* $tmp2848 = *(&local11);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2848));
org$pandalanguage$pandac$MethodRef* $tmp2849 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2849));
*(&local1) = $tmp2848;
// line 740
// line 741
panda$core$Bit $tmp2850 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp2851 = $tmp2850.value;
if ($tmp2851) goto block43; else goto block45;
block43:;
// line 742
panda$core$Int64* $tmp2852 = &param2->$rawValue;
panda$core$Int64 $tmp2853 = *$tmp2852;
panda$core$Int64 $tmp2854 = (panda$core$Int64) {13};
panda$core$Bit $tmp2855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2853, $tmp2854);
bool $tmp2856 = $tmp2855.value;
if ($tmp2856) goto block47; else goto block48;
block47:;
// line 744
panda$core$Bit $tmp2857 = panda$core$Bit$init$builtin_bit(true);
*(&local12) = $tmp2857;
goto block46;
block48:;
// line 747
panda$core$Bit $tmp2858 = panda$core$Bit$init$builtin_bit(false);
*(&local12) = $tmp2858;
goto block46;
block46:;
goto block44;
block45:;
// line 1
// line 752
panda$core$Bit $tmp2859 = panda$core$Bit$init$builtin_bit(false);
*(&local12) = $tmp2859;
goto block44;
block44:;
// line 756
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
// line 757
org$pandalanguage$pandac$MethodRef* $tmp2860 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp2861 = &$tmp2860->value;
org$pandalanguage$pandac$MethodDecl* $tmp2862 = *$tmp2861;
panda$core$Bit $tmp2863 = org$pandalanguage$pandac$MethodDecl$get_isVirtual$R$panda$core$Bit($tmp2862);
bool $tmp2864 = $tmp2863.value;
if ($tmp2864) goto block49; else goto block51;
block49:;
// line 758
org$pandalanguage$pandac$MethodRef* $tmp2865 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp2866 = &$tmp2865->value;
org$pandalanguage$pandac$MethodDecl* $tmp2867 = *$tmp2866;
org$pandalanguage$pandac$Type* $tmp2868 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(param0, $tmp2867);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2868));
org$pandalanguage$pandac$Type* $tmp2869 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2869));
*(&local13) = $tmp2868;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2868));
// unreffing REF($578:org.pandalanguage.pandac.Type)
goto block50;
block51:;
// line 1
// line 761
org$pandalanguage$pandac$MethodRef* $tmp2870 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp2871 = &$tmp2870->value;
org$pandalanguage$pandac$MethodDecl* $tmp2872 = *$tmp2871;
org$pandalanguage$pandac$MethodRef* $tmp2873 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp2874 = &$tmp2873->value;
org$pandalanguage$pandac$MethodDecl* $tmp2875 = *$tmp2874;
panda$core$Weak** $tmp2876 = &$tmp2875->owner;
panda$core$Weak* $tmp2877 = *$tmp2876;
panda$core$Object* $tmp2878 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2877);
org$pandalanguage$pandac$Type** $tmp2879 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2878)->type;
org$pandalanguage$pandac$Type* $tmp2880 = *$tmp2879;
panda$core$Bit $tmp2881 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp2882 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp2872, $tmp2880, $tmp2881);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2882));
org$pandalanguage$pandac$Type* $tmp2883 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2883));
*(&local13) = $tmp2882;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2882));
// unreffing REF($605:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp2878);
// unreffing REF($600:panda.core.Weak.T)
goto block50;
block50:;
// line 763
org$pandalanguage$pandac$Type* $tmp2884 = *(&local13);
panda$core$Bit $tmp2885 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit($tmp2884);
bool $tmp2886 = $tmp2885.value;
if ($tmp2886) goto block52; else goto block53;
block53:;
panda$core$Int64 $tmp2887 = (panda$core$Int64) {763};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2888, $tmp2887);
abort(); // unreachable
block52:;
// line 764
org$pandalanguage$pandac$MethodRef* $tmp2889 = *(&local1);
org$pandalanguage$pandac$Type** $tmp2890 = &$tmp2889->effectiveType;
org$pandalanguage$pandac$Type* $tmp2891 = *$tmp2890;
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2891));
org$pandalanguage$pandac$Type* $tmp2892 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2892));
*(&local14) = $tmp2891;
// line 765
org$pandalanguage$pandac$Type* $tmp2893 = *(&local14);
panda$core$Bit $tmp2894 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit($tmp2893);
bool $tmp2895 = $tmp2894.value;
if ($tmp2895) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp2896 = (panda$core$Int64) {765};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2897, $tmp2896);
abort(); // unreachable
block54:;
// line 766
panda$collections$Array* $tmp2898 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
ITable* $tmp2899 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp2899->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2899 = $tmp2899->next;
}
$fn2901 $tmp2900 = $tmp2899->methods[0];
panda$core$Int64 $tmp2902 = $tmp2900(((panda$collections$CollectionView*) param4));
panda$collections$Array$init$panda$core$Int64($tmp2898, $tmp2902);
*(&local15) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2898));
panda$collections$Array* $tmp2903 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2903));
*(&local15) = $tmp2898;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2898));
// unreffing REF($647:panda.collections.Array<org.pandalanguage.pandac.IR.Value>)
// line 767
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 768
panda$core$Bit $tmp2904 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp2905 = $tmp2904.value;
if ($tmp2905) goto block56; else goto block58;
block56:;
// line 769
panda$core$Int64* $tmp2906 = &param2->$rawValue;
panda$core$Int64 $tmp2907 = *$tmp2906;
panda$core$Int64 $tmp2908 = (panda$core$Int64) {14};
panda$core$Bit $tmp2909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2907, $tmp2908);
bool $tmp2910 = $tmp2909.value;
if ($tmp2910) goto block60; else goto block61;
block60:;
goto block59;
block61:;
// line 774
org$pandalanguage$pandac$MethodRef* $tmp2911 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp2912 = &$tmp2911->value;
org$pandalanguage$pandac$MethodDecl* $tmp2913 = *$tmp2912;
panda$core$Weak** $tmp2914 = &$tmp2913->owner;
panda$core$Weak* $tmp2915 = *$tmp2914;
panda$core$Object* $tmp2916 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2915);
panda$core$String** $tmp2917 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2916)->name;
panda$core$String* $tmp2918 = *$tmp2917;
panda$core$Bit $tmp2919 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2918, &$s2920);
bool $tmp2921 = $tmp2919.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp2916);
// unreffing REF($686:panda.core.Weak.T)
if ($tmp2921) goto block62; else goto block64;
block62:;
// line 775
org$pandalanguage$pandac$Type* $tmp2922 = *(&local13);
panda$core$Int64 $tmp2923 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp2924 = org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp2922, $tmp2923);
org$pandalanguage$pandac$IR$Value* $tmp2925 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, $tmp2924);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2925));
org$pandalanguage$pandac$IR$Value* $tmp2926 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2926));
*(&local16) = $tmp2925;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2925));
// unreffing REF($700:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2924));
// unreffing REF($699:org.pandalanguage.pandac.Type)
goto block63;
block64:;
// line 778
panda$core$Bit $tmp2927 = *(&local12);
bool $tmp2928 = $tmp2927.value;
if ($tmp2928) goto block65; else goto block67;
block65:;
// line 779
panda$core$Bit $tmp2929 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$IR$Value* $tmp2930 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$Position$panda$core$Bit$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2929);
org$pandalanguage$pandac$MethodRef* $tmp2931 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp2932 = &$tmp2931->value;
org$pandalanguage$pandac$MethodDecl* $tmp2933 = *$tmp2932;
panda$core$Weak** $tmp2934 = &$tmp2933->owner;
panda$core$Weak* $tmp2935 = *$tmp2934;
panda$core$Object* $tmp2936 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2935);
org$pandalanguage$pandac$Type** $tmp2937 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2936)->type;
org$pandalanguage$pandac$Type* $tmp2938 = *$tmp2937;
org$pandalanguage$pandac$IR$Value* $tmp2939 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2930, $tmp2938);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2939));
org$pandalanguage$pandac$IR$Value* $tmp2940 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2940));
*(&local16) = $tmp2939;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2939));
// unreffing REF($731:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp2936);
// unreffing REF($727:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2930));
// unreffing REF($720:org.pandalanguage.pandac.IR.Value?)
goto block66;
block67:;
// line 1
// line 784
org$pandalanguage$pandac$MethodRef* $tmp2941 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp2942 = &$tmp2941->value;
org$pandalanguage$pandac$MethodDecl* $tmp2943 = *$tmp2942;
panda$core$Weak** $tmp2944 = &$tmp2943->owner;
panda$core$Weak* $tmp2945 = *$tmp2944;
panda$core$Object* $tmp2946 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2945);
org$pandalanguage$pandac$Type** $tmp2947 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2946)->type;
org$pandalanguage$pandac$Type* $tmp2948 = *$tmp2947;
org$pandalanguage$pandac$IR$Value* $tmp2949 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, $tmp2948);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2949));
org$pandalanguage$pandac$IR$Value* $tmp2950 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2950));
*(&local16) = $tmp2949;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2949));
// unreffing REF($760:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp2946);
// unreffing REF($756:panda.core.Weak.T)
goto block66;
block66:;
goto block63;
block63:;
// line 786
org$pandalanguage$pandac$IR$Value* $tmp2951 = *(&local16);
panda$core$Bit $tmp2952 = panda$core$Bit$init$builtin_bit($tmp2951 == NULL);
bool $tmp2953 = $tmp2952.value;
if ($tmp2953) goto block68; else goto block69;
block68:;
// line 787
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp2954 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2954));
// unreffing finalTarget
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp2955 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2955));
// unreffing finalArgs
*(&local15) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp2956 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2956));
// unreffing effectiveType
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp2957 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2957));
// unreffing actualType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp2958 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2958));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp2959 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2959));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp2960 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2960));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp2961 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2961));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block69:;
// line 789
panda$collections$Array* $tmp2962 = *(&local15);
org$pandalanguage$pandac$IR$Value* $tmp2963 = *(&local16);
panda$collections$Array$add$panda$collections$Array$T($tmp2962, ((panda$core$Object*) $tmp2963));
goto block59;
block59:;
goto block57;
block58:;
// line 793
org$pandalanguage$pandac$MethodRef* $tmp2964 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp2965 = &$tmp2964->value;
org$pandalanguage$pandac$MethodDecl* $tmp2966 = *$tmp2965;
org$pandalanguage$pandac$Annotations** $tmp2967 = &$tmp2966->annotations;
org$pandalanguage$pandac$Annotations* $tmp2968 = *$tmp2967;
panda$core$Bit $tmp2969 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp2968);
panda$core$Bit $tmp2970 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2969);
bool $tmp2971 = $tmp2970.value;
if ($tmp2971) goto block72; else goto block73;
block72:;
org$pandalanguage$pandac$MethodRef* $tmp2972 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp2973 = &$tmp2972->value;
org$pandalanguage$pandac$MethodDecl* $tmp2974 = *$tmp2973;
panda$core$Bit $tmp2975 = org$pandalanguage$pandac$Compiler$isValueInit$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, $tmp2974);
panda$core$Bit $tmp2976 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2975);
*(&local17) = $tmp2976;
goto block74;
block73:;
*(&local17) = $tmp2970;
goto block74;
block74:;
panda$core$Bit $tmp2977 = *(&local17);
bool $tmp2978 = $tmp2977.value;
if ($tmp2978) goto block70; else goto block75;
block70:;
// line 794
panda$core$Bit $tmp2979 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$IR$Value* $tmp2980 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$Position$panda$core$Bit$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2979);
org$pandalanguage$pandac$MethodRef* $tmp2981 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp2982 = &$tmp2981->value;
org$pandalanguage$pandac$MethodDecl* $tmp2983 = *$tmp2982;
panda$core$Weak** $tmp2984 = &$tmp2983->owner;
panda$core$Weak* $tmp2985 = *$tmp2984;
panda$core$Object* $tmp2986 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2985);
org$pandalanguage$pandac$Type** $tmp2987 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2986)->type;
org$pandalanguage$pandac$Type* $tmp2988 = *$tmp2987;
org$pandalanguage$pandac$IR$Value* $tmp2989 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2980, $tmp2988);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2989));
org$pandalanguage$pandac$IR$Value* $tmp2990 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2990));
*(&local16) = $tmp2989;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2989));
// unreffing REF($869:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp2986);
// unreffing REF($865:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2980));
// unreffing REF($858:org.pandalanguage.pandac.IR.Value?)
// line 796
org$pandalanguage$pandac$IR$Value* $tmp2991 = *(&local16);
panda$core$Bit $tmp2992 = panda$core$Bit$init$builtin_bit($tmp2991 == NULL);
bool $tmp2993 = $tmp2992.value;
if ($tmp2993) goto block76; else goto block77;
block76:;
// line 797
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp2994 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2994));
// unreffing finalTarget
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp2995 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2995));
// unreffing finalArgs
*(&local15) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp2996 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2996));
// unreffing effectiveType
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp2997 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2997));
// unreffing actualType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp2998 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2998));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp2999 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2999));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3000 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3000));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3001 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3001));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block77:;
// line 799
panda$collections$Array* $tmp3002 = *(&local15);
org$pandalanguage$pandac$IR$Value* $tmp3003 = *(&local16);
panda$collections$Array$add$panda$collections$Array$T($tmp3002, ((panda$core$Object*) $tmp3003));
goto block71;
block75:;
// line 1
// line 802
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp3004 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3004));
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block71;
block71:;
goto block57;
block57:;
// line 804
// line 805
org$pandalanguage$pandac$MethodRef* $tmp3005 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3006 = &$tmp3005->value;
org$pandalanguage$pandac$MethodDecl* $tmp3007 = *$tmp3006;
org$pandalanguage$pandac$Annotations** $tmp3008 = &$tmp3007->annotations;
org$pandalanguage$pandac$Annotations* $tmp3009 = *$tmp3008;
panda$core$Bit $tmp3010 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp3009);
panda$core$Bit $tmp3011 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3010);
bool $tmp3012 = $tmp3011.value;
if ($tmp3012) goto block80; else goto block81;
block80:;
panda$core$Bit $tmp3013 = panda$core$Bit$init$builtin_bit(param2 != NULL);
*(&local20) = $tmp3013;
goto block82;
block81:;
*(&local20) = $tmp3011;
goto block82;
block82:;
panda$core$Bit $tmp3014 = *(&local20);
bool $tmp3015 = $tmp3014.value;
if ($tmp3015) goto block83; else goto block84;
block83:;
$fn3017 $tmp3016 = ($fn3017) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3018 = $tmp3016(param2);
panda$core$Bit $tmp3019 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit($tmp3018);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3018));
// unreffing REF($975:org.pandalanguage.pandac.Type)
*(&local19) = $tmp3019;
goto block85;
block84:;
*(&local19) = $tmp3014;
goto block85;
block85:;
panda$core$Bit $tmp3020 = *(&local19);
bool $tmp3021 = $tmp3020.value;
if ($tmp3021) goto block78; else goto block86;
block78:;
// line 806
panda$core$Int64 $tmp3022 = (panda$core$Int64) {0};
*(&local18) = $tmp3022;
goto block79;
block86:;
// line 1
// line 809
panda$core$Int64 $tmp3023 = (panda$core$Int64) {1};
*(&local18) = $tmp3023;
goto block79;
block79:;
// line 811
panda$core$Int64 $tmp3024 = (panda$core$Int64) {0};
ITable* $tmp3025 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp3025->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3025 = $tmp3025->next;
}
$fn3027 $tmp3026 = $tmp3025->methods[0];
panda$core$Int64 $tmp3028 = $tmp3026(((panda$collections$CollectionView*) param4));
panda$core$Bit $tmp3029 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp3030 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3024, $tmp3028, $tmp3029);
panda$core$Int64 $tmp3031 = $tmp3030.min;
*(&local21) = $tmp3031;
panda$core$Int64 $tmp3032 = $tmp3030.max;
panda$core$Bit $tmp3033 = $tmp3030.inclusive;
bool $tmp3034 = $tmp3033.value;
panda$core$Int64 $tmp3035 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp3036 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3035);
if ($tmp3034) goto block90; else goto block91;
block90:;
int64_t $tmp3037 = $tmp3031.value;
int64_t $tmp3038 = $tmp3032.value;
bool $tmp3039 = $tmp3037 <= $tmp3038;
panda$core$Bit $tmp3040 = (panda$core$Bit) {$tmp3039};
bool $tmp3041 = $tmp3040.value;
if ($tmp3041) goto block87; else goto block88;
block91:;
int64_t $tmp3042 = $tmp3031.value;
int64_t $tmp3043 = $tmp3032.value;
bool $tmp3044 = $tmp3042 < $tmp3043;
panda$core$Bit $tmp3045 = (panda$core$Bit) {$tmp3044};
bool $tmp3046 = $tmp3045.value;
if ($tmp3046) goto block87; else goto block88;
block87:;
// line 812
panda$core$Int64 $tmp3047 = *(&local21);
ITable* $tmp3048 = param4->$class->itable;
while ($tmp3048->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp3048 = $tmp3048->next;
}
$fn3050 $tmp3049 = $tmp3048->methods[0];
panda$core$Object* $tmp3051 = $tmp3049(param4, $tmp3047);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp3052 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp3053 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp3054 = *(&local14);
panda$core$Int64 $tmp3055 = *(&local21);
org$pandalanguage$pandac$Type* $tmp3056 = org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp3054, $tmp3055);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3052, $tmp3053, $tmp3056);
org$pandalanguage$pandac$IR$Value* $tmp3057 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp3051), $tmp3052);
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3057));
org$pandalanguage$pandac$IR$Value* $tmp3058 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3058));
*(&local22) = $tmp3057;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3057));
// unreffing REF($1035:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3056));
// unreffing REF($1033:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3052));
// unreffing REF($1029:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp3051);
// unreffing REF($1027:panda.collections.ListView.T)
// line 814
org$pandalanguage$pandac$IR$Value* $tmp3059 = *(&local22);
panda$core$Bit $tmp3060 = panda$core$Bit$init$builtin_bit($tmp3059 == NULL);
bool $tmp3061 = $tmp3060.value;
if ($tmp3061) goto block92; else goto block93;
block92:;
// line 815
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp3062 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3062));
// unreffing a
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp3063 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3063));
// unreffing finalTarget
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp3064 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3064));
// unreffing finalArgs
*(&local15) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp3065 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3065));
// unreffing effectiveType
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3066 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3066));
// unreffing actualType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3067 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3067));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp3068 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3068));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3069 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3069));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3070 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3070));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block93:;
// line 817
org$pandalanguage$pandac$IR$Value* $tmp3071 = *(&local22);
$fn3073 $tmp3072 = ($fn3073) $tmp3071->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3074 = $tmp3072($tmp3071);
org$pandalanguage$pandac$Type* $tmp3075 = *(&local13);
panda$core$Int64 $tmp3076 = *(&local21);
panda$core$Int64 $tmp3077 = *(&local18);
int64_t $tmp3078 = $tmp3076.value;
int64_t $tmp3079 = $tmp3077.value;
int64_t $tmp3080 = $tmp3078 + $tmp3079;
panda$core$Int64 $tmp3081 = (panda$core$Int64) {$tmp3080};
org$pandalanguage$pandac$Type* $tmp3082 = org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp3075, $tmp3081);
ITable* $tmp3083 = ((panda$core$Equatable*) $tmp3074)->$class->itable;
while ($tmp3083->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3083 = $tmp3083->next;
}
$fn3085 $tmp3084 = $tmp3083->methods[1];
panda$core$Bit $tmp3086 = $tmp3084(((panda$core$Equatable*) $tmp3074), ((panda$core$Equatable*) $tmp3082));
bool $tmp3087 = $tmp3086.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3082));
// unreffing REF($1124:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3074));
// unreffing REF($1114:org.pandalanguage.pandac.Type)
if ($tmp3087) goto block94; else goto block95;
block94:;
// line 818
org$pandalanguage$pandac$IR$Value* $tmp3088 = *(&local22);
org$pandalanguage$pandac$Type* $tmp3089 = *(&local13);
panda$core$Int64 $tmp3090 = *(&local21);
panda$core$Int64 $tmp3091 = *(&local18);
int64_t $tmp3092 = $tmp3090.value;
int64_t $tmp3093 = $tmp3091.value;
int64_t $tmp3094 = $tmp3092 + $tmp3093;
panda$core$Int64 $tmp3095 = (panda$core$Int64) {$tmp3094};
org$pandalanguage$pandac$Type* $tmp3096 = org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp3089, $tmp3095);
org$pandalanguage$pandac$IR$Value* $tmp3097 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3088, $tmp3096);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3097));
org$pandalanguage$pandac$IR$Value* $tmp3098 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3098));
*(&local22) = $tmp3097;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3097));
// unreffing REF($1146:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3096));
// unreffing REF($1145:org.pandalanguage.pandac.Type)
goto block95;
block95:;
// line 820
org$pandalanguage$pandac$IR$Value* $tmp3099 = *(&local22);
panda$core$Bit $tmp3100 = panda$core$Bit$init$builtin_bit($tmp3099 == NULL);
bool $tmp3101 = $tmp3100.value;
if ($tmp3101) goto block96; else goto block97;
block96:;
// line 821
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp3102 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3102));
// unreffing a
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp3103 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3103));
// unreffing finalTarget
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp3104 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3104));
// unreffing finalArgs
*(&local15) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp3105 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3105));
// unreffing effectiveType
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3106 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3106));
// unreffing actualType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3107 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3107));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp3108 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3108));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3109 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3109));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3110 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3110));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block97:;
// line 823
panda$collections$Array* $tmp3111 = *(&local15);
org$pandalanguage$pandac$IR$Value* $tmp3112 = *(&local22);
panda$collections$Array$add$panda$collections$Array$T($tmp3111, ((panda$core$Object*) $tmp3112));
org$pandalanguage$pandac$IR$Value* $tmp3113 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3113));
// unreffing a
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block89;
block89:;
panda$core$Int64 $tmp3114 = *(&local21);
int64_t $tmp3115 = $tmp3032.value;
int64_t $tmp3116 = $tmp3114.value;
int64_t $tmp3117 = $tmp3115 - $tmp3116;
panda$core$Int64 $tmp3118 = (panda$core$Int64) {$tmp3117};
panda$core$UInt64 $tmp3119 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3118);
if ($tmp3034) goto block99; else goto block100;
block99:;
uint64_t $tmp3120 = $tmp3119.value;
uint64_t $tmp3121 = $tmp3036.value;
bool $tmp3122 = $tmp3120 >= $tmp3121;
panda$core$Bit $tmp3123 = (panda$core$Bit) {$tmp3122};
bool $tmp3124 = $tmp3123.value;
if ($tmp3124) goto block98; else goto block88;
block100:;
uint64_t $tmp3125 = $tmp3119.value;
uint64_t $tmp3126 = $tmp3036.value;
bool $tmp3127 = $tmp3125 > $tmp3126;
panda$core$Bit $tmp3128 = (panda$core$Bit) {$tmp3127};
bool $tmp3129 = $tmp3128.value;
if ($tmp3129) goto block98; else goto block88;
block98:;
int64_t $tmp3130 = $tmp3114.value;
int64_t $tmp3131 = $tmp3035.value;
int64_t $tmp3132 = $tmp3130 + $tmp3131;
panda$core$Int64 $tmp3133 = (panda$core$Int64) {$tmp3132};
*(&local21) = $tmp3133;
goto block87;
block88:;
// line 825
// line 826
panda$core$Bit $tmp3134 = *(&local12);
panda$core$Bit $tmp3135 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3134);
bool $tmp3136 = $tmp3135.value;
if ($tmp3136) goto block103; else goto block104;
block103:;
org$pandalanguage$pandac$MethodRef* $tmp3137 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3138 = &$tmp3137->value;
org$pandalanguage$pandac$MethodDecl* $tmp3139 = *$tmp3138;
panda$core$Bit $tmp3140 = org$pandalanguage$pandac$MethodDecl$get_isVirtual$R$panda$core$Bit($tmp3139);
*(&local24) = $tmp3140;
goto block105;
block104:;
*(&local24) = $tmp3135;
goto block105;
block105:;
panda$core$Bit $tmp3141 = *(&local24);
bool $tmp3142 = $tmp3141.value;
if ($tmp3142) goto block101; else goto block106;
block101:;
// line 827
// line 828
org$pandalanguage$pandac$MethodRef* $tmp3143 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3144 = &$tmp3143->value;
org$pandalanguage$pandac$MethodDecl* $tmp3145 = *$tmp3144;
panda$core$Weak** $tmp3146 = &$tmp3145->owner;
panda$core$Weak* $tmp3147 = *$tmp3146;
panda$core$Object* $tmp3148 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3147);
org$pandalanguage$pandac$ClassDecl$Kind* $tmp3149 = &((org$pandalanguage$pandac$ClassDecl*) $tmp3148)->classKind;
org$pandalanguage$pandac$ClassDecl$Kind $tmp3150 = *$tmp3149;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp3151;
$tmp3151 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp3151->value = $tmp3150;
panda$core$Int64 $tmp3152 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp3153 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp3152);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp3154;
$tmp3154 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp3154->value = $tmp3153;
ITable* $tmp3155 = ((panda$core$Equatable*) $tmp3151)->$class->itable;
while ($tmp3155->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3155 = $tmp3155->next;
}
$fn3157 $tmp3156 = $tmp3155->methods[0];
panda$core$Bit $tmp3158 = $tmp3156(((panda$core$Equatable*) $tmp3151), ((panda$core$Equatable*) $tmp3154));
bool $tmp3159 = $tmp3158.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3154)));
// unreffing REF($1286:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3151)));
// unreffing REF($1282:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
panda$core$Panda$unref$panda$core$Object$Q($tmp3148);
// unreffing REF($1278:panda.core.Weak.T)
if ($tmp3159) goto block107; else goto block109;
block107:;
// line 829
org$pandalanguage$pandac$IR* $tmp3160 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp3161 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp3162 = (panda$core$Int64) {12};
org$pandalanguage$pandac$IR$Value* $tmp3163 = *(&local16);
org$pandalanguage$pandac$MethodRef* $tmp3164 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3165 = &$tmp3164->value;
org$pandalanguage$pandac$MethodDecl* $tmp3166 = *$tmp3165;
panda$core$Weak** $tmp3167 = &$tmp3166->owner;
panda$core$Weak* $tmp3168 = *$tmp3167;
panda$core$Object* $tmp3169 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3168);
org$pandalanguage$pandac$MethodRef* $tmp3170 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3171 = &$tmp3170->value;
org$pandalanguage$pandac$MethodDecl* $tmp3172 = *$tmp3171;
panda$core$Int64 $tmp3173 = org$pandalanguage$pandac$Compiler$getVTableIndex$org$pandalanguage$pandac$MethodDecl$R$panda$core$Int64(param0, $tmp3172);
org$pandalanguage$pandac$Type* $tmp3174 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp3175 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp3174);
panda$collections$ListView* $tmp3176 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(param0, $tmp3175);
ITable* $tmp3177 = ((panda$collections$CollectionView*) $tmp3176)->$class->itable;
while ($tmp3177->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3177 = $tmp3177->next;
}
$fn3179 $tmp3178 = $tmp3177->methods[0];
panda$core$Int64 $tmp3180 = $tmp3178(((panda$collections$CollectionView*) $tmp3176));
int64_t $tmp3181 = $tmp3173.value;
int64_t $tmp3182 = $tmp3180.value;
int64_t $tmp3183 = $tmp3181 - $tmp3182;
panda$core$Int64 $tmp3184 = (panda$core$Int64) {$tmp3183};
org$pandalanguage$pandac$Type* $tmp3185 = *(&local13);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3161, $tmp3162, param1, $tmp3163, ((org$pandalanguage$pandac$ClassDecl*) $tmp3169), $tmp3184, $tmp3185);
$fn3187 $tmp3186 = ($fn3187) $tmp3160->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp3188 = $tmp3186($tmp3160, $tmp3161);
*(&local25) = $tmp3188;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3176));
// unreffing REF($1321:panda.collections.ListView<org.pandalanguage.pandac.MethodDecl>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3175));
// unreffing REF($1319:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3174));
// unreffing REF($1318:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp3169);
// unreffing REF($1312:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3161));
// unreffing REF($1302:org.pandalanguage.pandac.IR.Statement)
goto block108;
block109:;
// line 1
// line 836
org$pandalanguage$pandac$IR* $tmp3189 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp3190 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp3191 = (panda$core$Int64) {11};
org$pandalanguage$pandac$IR$Value* $tmp3192 = *(&local16);
org$pandalanguage$pandac$MethodRef* $tmp3193 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3194 = &$tmp3193->value;
org$pandalanguage$pandac$MethodDecl* $tmp3195 = *$tmp3194;
panda$core$Int64 $tmp3196 = org$pandalanguage$pandac$Compiler$getVTableIndex$org$pandalanguage$pandac$MethodDecl$R$panda$core$Int64(param0, $tmp3195);
org$pandalanguage$pandac$Type* $tmp3197 = *(&local13);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3190, $tmp3191, param1, $tmp3192, $tmp3196, $tmp3197);
$fn3199 $tmp3198 = ($fn3199) $tmp3189->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp3200 = $tmp3198($tmp3189, $tmp3190);
*(&local25) = $tmp3200;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3190));
// unreffing REF($1353:org.pandalanguage.pandac.IR.Statement)
goto block108;
block108:;
// line 839
org$pandalanguage$pandac$IR* $tmp3201 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp3202 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp3203 = (panda$core$Int64) {8};
org$pandalanguage$pandac$IR$Value* $tmp3204 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp3205 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp3206 = *(&local25);
org$pandalanguage$pandac$Type* $tmp3207 = *(&local13);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp3204, $tmp3205, $tmp3206, $tmp3207);
panda$collections$Array* $tmp3208 = *(&local15);
org$pandalanguage$pandac$FixedArray* $tmp3209 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp3208);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT($tmp3202, $tmp3203, param1, $tmp3204, $tmp3209);
$fn3211 $tmp3210 = ($fn3211) $tmp3201->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp3212 = $tmp3210($tmp3201, $tmp3202);
*(&local23) = $tmp3212;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3209));
// unreffing REF($1381:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3204));
// unreffing REF($1374:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3202));
// unreffing REF($1372:org.pandalanguage.pandac.IR.Statement)
goto block102;
block106:;
// line 1
// line 843
org$pandalanguage$pandac$IR* $tmp3213 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp3214 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp3215 = (panda$core$Int64) {25};
org$pandalanguage$pandac$MethodRef* $tmp3216 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3217 = &$tmp3216->value;
org$pandalanguage$pandac$MethodDecl* $tmp3218 = *$tmp3217;
panda$collections$Array* $tmp3219 = *(&local15);
org$pandalanguage$pandac$FixedArray* $tmp3220 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp3219);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT($tmp3214, $tmp3215, param1, $tmp3218, $tmp3220);
$fn3222 $tmp3221 = ($fn3222) $tmp3213->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp3223 = $tmp3221($tmp3213, $tmp3214);
*(&local23) = $tmp3223;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3220));
// unreffing REF($1407:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3214));
// unreffing REF($1400:org.pandalanguage.pandac.IR.Statement)
goto block102;
block102:;
// line 846
org$pandalanguage$pandac$MethodRef* $tmp3224 = *(&local1);
org$pandalanguage$pandac$Type* $tmp3225 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type($tmp3224);
org$pandalanguage$pandac$Type* $tmp3226 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp3227 = ((panda$core$Equatable*) $tmp3225)->$class->itable;
while ($tmp3227->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3227 = $tmp3227->next;
}
$fn3229 $tmp3228 = $tmp3227->methods[1];
panda$core$Bit $tmp3230 = $tmp3228(((panda$core$Equatable*) $tmp3225), ((panda$core$Equatable*) $tmp3226));
bool $tmp3231 = $tmp3230.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3226));
// unreffing REF($1425:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3225));
// unreffing REF($1422:org.pandalanguage.pandac.Type)
if ($tmp3231) goto block110; else goto block111;
block110:;
// line 847
org$pandalanguage$pandac$IR$Value* $tmp3232 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp3233 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp3234 = *(&local23);
org$pandalanguage$pandac$Type* $tmp3235 = *(&local13);
org$pandalanguage$pandac$Type* $tmp3236 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp3235);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp3232, $tmp3233, $tmp3234, $tmp3236);
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3232));
org$pandalanguage$pandac$IR$Value* $tmp3237 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3237));
*(&local26) = $tmp3232;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3236));
// unreffing REF($1442:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3232));
// unreffing REF($1438:org.pandalanguage.pandac.IR.Value)
// line 848
org$pandalanguage$pandac$Type* $tmp3238 = *(&local13);
org$pandalanguage$pandac$Type* $tmp3239 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp3238);
panda$core$Bit $tmp3240 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp3239);
bool $tmp3241 = $tmp3240.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3239));
// unreffing REF($1460:org.pandalanguage.pandac.Type)
if ($tmp3241) goto block112; else goto block113;
block112:;
// line 849
panda$collections$Stack** $tmp3242 = &param0->enclosingContexts;
panda$collections$Stack* $tmp3243 = *$tmp3242;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp3244 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp3245 = (panda$core$Int64) {3};
org$pandalanguage$pandac$IR$Value* $tmp3246 = *(&local26);
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value($tmp3244, $tmp3245, $tmp3246);
panda$collections$Stack$push$panda$collections$Stack$T($tmp3243, ((panda$core$Object*) $tmp3244));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3244));
// unreffing REF($1471:org.pandalanguage.pandac.Compiler.EnclosingContext)
goto block113;
block113:;
// line 851
org$pandalanguage$pandac$MethodRef* $tmp3247 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3248 = &$tmp3247->value;
org$pandalanguage$pandac$MethodDecl* $tmp3249 = *$tmp3248;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp3250 = &$tmp3249->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp3251 = *$tmp3250;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3252;
$tmp3252 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3252->value = $tmp3251;
panda$core$Int64 $tmp3253 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp3254 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp3253);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3255;
$tmp3255 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3255->value = $tmp3254;
ITable* $tmp3256 = ((panda$core$Equatable*) $tmp3252)->$class->itable;
while ($tmp3256->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3256 = $tmp3256->next;
}
$fn3258 $tmp3257 = $tmp3256->methods[1];
panda$core$Bit $tmp3259 = $tmp3257(((panda$core$Equatable*) $tmp3252), ((panda$core$Equatable*) $tmp3255));
bool $tmp3260 = $tmp3259.value;
if ($tmp3260) goto block116; else goto block117;
block116:;
org$pandalanguage$pandac$Type* $tmp3261 = *(&local14);
org$pandalanguage$pandac$Type* $tmp3262 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp3261);
org$pandalanguage$pandac$Type* $tmp3263 = *(&local13);
org$pandalanguage$pandac$Type* $tmp3264 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp3263);
ITable* $tmp3265 = ((panda$core$Equatable*) $tmp3262)->$class->itable;
while ($tmp3265->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3265 = $tmp3265->next;
}
$fn3267 $tmp3266 = $tmp3265->methods[1];
panda$core$Bit $tmp3268 = $tmp3266(((panda$core$Equatable*) $tmp3262), ((panda$core$Equatable*) $tmp3264));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3264));
// unreffing REF($1502:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3262));
// unreffing REF($1498:org.pandalanguage.pandac.Type)
*(&local27) = $tmp3268;
goto block118;
block117:;
*(&local27) = $tmp3259;
goto block118;
block118:;
panda$core$Bit $tmp3269 = *(&local27);
bool $tmp3270 = $tmp3269.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3255)));
// unreffing REF($1492:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3252)));
// unreffing REF($1488:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp3270) goto block114; else goto block115;
block114:;
// line 853
org$pandalanguage$pandac$IR$Value* $tmp3271 = *(&local26);
org$pandalanguage$pandac$Type* $tmp3272 = *(&local14);
org$pandalanguage$pandac$Type* $tmp3273 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp3272);
org$pandalanguage$pandac$IR$Value* $tmp3274 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3271, $tmp3273);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3274));
org$pandalanguage$pandac$IR$Value* $tmp3275 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3275));
*(&local26) = $tmp3274;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3274));
// unreffing REF($1529:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3273));
// unreffing REF($1528:org.pandalanguage.pandac.Type)
// line 854
org$pandalanguage$pandac$IR$Value* $tmp3276 = *(&local26);
panda$core$Bit $tmp3277 = panda$core$Bit$init$builtin_bit($tmp3276 == NULL);
bool $tmp3278 = $tmp3277.value;
if ($tmp3278) goto block119; else goto block120;
block119:;
// line 855
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp3279 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3279));
// unreffing resultCast
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp3280 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3280));
// unreffing finalTarget
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp3281 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3281));
// unreffing finalArgs
*(&local15) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp3282 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3282));
// unreffing effectiveType
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3283 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3283));
// unreffing actualType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3284 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3284));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp3285 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3285));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3286 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3286));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3287 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3287));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block120:;
goto block115;
block115:;
// line 858
org$pandalanguage$pandac$IR$Value* $tmp3288 = *(&local26);
org$pandalanguage$pandac$IR$Value* $tmp3289 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3288, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3289));
org$pandalanguage$pandac$IR$Value* $tmp3290 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3290));
*(&local26) = $tmp3289;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3289));
// unreffing REF($1600:org.pandalanguage.pandac.IR.Value?)
// line 859
org$pandalanguage$pandac$IR$Value* $tmp3291 = *(&local26);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3291));
org$pandalanguage$pandac$IR$Value* $tmp3292 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3292));
// unreffing resultCast
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp3293 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3293));
// unreffing finalTarget
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp3294 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3294));
// unreffing finalArgs
*(&local15) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp3295 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3295));
// unreffing effectiveType
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3296 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3296));
// unreffing actualType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3297 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3297));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp3298 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3298));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3299 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3299));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3300 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3300));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp3291;
block111:;
// line 861
org$pandalanguage$pandac$Compiler$TypeContext* $tmp3301 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp3302 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp3301, $tmp3302);
ITable* $tmp3303 = ((panda$core$Equatable*) param5)->$class->itable;
while ($tmp3303->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3303 = $tmp3303->next;
}
$fn3305 $tmp3304 = $tmp3303->methods[1];
panda$core$Bit $tmp3306 = $tmp3304(((panda$core$Equatable*) param5), ((panda$core$Equatable*) $tmp3301));
bool $tmp3307 = $tmp3306.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3301));
// unreffing REF($1663:org.pandalanguage.pandac.Compiler.TypeContext)
if ($tmp3307) goto block121; else goto block122;
block121:;
// line 862
org$pandalanguage$pandac$MethodRef* $tmp3308 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3309 = &$tmp3308->value;
org$pandalanguage$pandac$MethodDecl* $tmp3310 = *$tmp3309;
panda$core$String* $tmp3311 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp3310);
panda$core$String* $tmp3312 = panda$core$String$convert$R$panda$core$String($tmp3311);
panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3312, &$s3314);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp3313);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3313));
// unreffing REF($1680:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3312));
// unreffing REF($1679:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3311));
// unreffing REF($1678:panda.core.String)
goto block122;
block122:;
// line 864
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp3315 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3315));
// unreffing finalTarget
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp3316 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3316));
// unreffing finalArgs
*(&local15) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp3317 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3317));
// unreffing effectiveType
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3318 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3318));
// unreffing actualType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3319 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3319));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp3320 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3320));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3321 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3321));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3322 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3322));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, panda$core$String* param3, panda$collections$ListView* param4, org$pandalanguage$pandac$Compiler$TypeContext* param5) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
org$pandalanguage$pandac$Symbol* local1 = NULL;
org$pandalanguage$pandac$IR$Value* local2 = NULL;
// line 870
$fn3324 $tmp3323 = ($fn3324) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3325 = $tmp3323(param2);
org$pandalanguage$pandac$ClassDecl* $tmp3326 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp3325);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3326));
org$pandalanguage$pandac$ClassDecl* $tmp3327 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3327));
*(&local0) = $tmp3326;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3326));
// unreffing REF($3:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3325));
// unreffing REF($2:org.pandalanguage.pandac.Type)
// line 871
org$pandalanguage$pandac$ClassDecl* $tmp3328 = *(&local0);
panda$core$Bit $tmp3329 = panda$core$Bit$init$builtin_bit($tmp3328 == NULL);
bool $tmp3330 = $tmp3329.value;
if ($tmp3330) goto block1; else goto block2;
block1:;
// line 872
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp3331 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3331));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block2:;
// line 874
org$pandalanguage$pandac$ClassDecl* $tmp3332 = *(&local0);
org$pandalanguage$pandac$SymbolTable* $tmp3333 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp3332);
org$pandalanguage$pandac$Symbol* $tmp3334 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3333, param3);
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3334));
org$pandalanguage$pandac$Symbol* $tmp3335 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3335));
*(&local1) = $tmp3334;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3334));
// unreffing REF($36:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3333));
// unreffing REF($35:org.pandalanguage.pandac.SymbolTable)
// line 875
org$pandalanguage$pandac$Symbol* $tmp3336 = *(&local1);
panda$core$Bit $tmp3337 = panda$core$Bit$init$builtin_bit($tmp3336 == NULL);
bool $tmp3338 = $tmp3337.value;
if ($tmp3338) goto block3; else goto block4;
block3:;
// line 876
org$pandalanguage$pandac$ClassDecl* $tmp3339 = *(&local0);
panda$core$String** $tmp3340 = &$tmp3339->name;
panda$core$String* $tmp3341 = *$tmp3340;
panda$core$String* $tmp3342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3343, $tmp3341);
panda$core$String* $tmp3344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3342, &$s3345);
panda$core$String* $tmp3346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3344, param3);
panda$core$String* $tmp3347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3346, &$s3348);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp3347);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3347));
// unreffing REF($64:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3346));
// unreffing REF($63:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3344));
// unreffing REF($62:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3342));
// unreffing REF($61:panda.core.String)
// line 877
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp3349 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3349));
// unreffing s
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3350 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3350));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block4:;
// line 879
org$pandalanguage$pandac$Symbol* $tmp3351 = *(&local1);
org$pandalanguage$pandac$IR$Value* $tmp3352 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Symbol$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, $tmp3351);
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3352));
org$pandalanguage$pandac$IR$Value* $tmp3353 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3353));
*(&local2) = $tmp3352;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3352));
// unreffing REF($96:org.pandalanguage.pandac.IR.Value?)
// line 880
org$pandalanguage$pandac$IR$Value* $tmp3354 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp3355 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3354, param4, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3355));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3355));
// unreffing REF($110:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR$Value* $tmp3356 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3356));
// unreffing ref
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Symbol* $tmp3357 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3357));
// unreffing s
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3358 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3358));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3355;

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$ASTNode* param2, org$pandalanguage$pandac$FixedArray* param3, org$pandalanguage$pandac$Compiler$TypeContext* param4) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$FixedArray* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$core$Int64 local5;
org$pandalanguage$pandac$Pair* local6 = NULL;
org$pandalanguage$pandac$Position local7;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
panda$core$String* local9 = NULL;
org$pandalanguage$pandac$Symbol* local10 = NULL;
panda$collections$Array* local11 = NULL;
org$pandalanguage$pandac$Type* local12 = NULL;
org$pandalanguage$pandac$ClassDecl* local13 = NULL;
org$pandalanguage$pandac$Type* local14 = NULL;
org$pandalanguage$pandac$IR$Value* local15 = NULL;
// line 886
panda$core$Int64* $tmp3359 = &param2->$rawValue;
panda$core$Int64 $tmp3360 = *$tmp3359;
panda$core$Int64 $tmp3361 = (panda$core$Int64) {21};
panda$core$Bit $tmp3362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3360, $tmp3361);
bool $tmp3363 = $tmp3362.value;
if ($tmp3363) goto block2; else goto block1;
block2:;
org$pandalanguage$pandac$Position* $tmp3364 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp3365 = *$tmp3364;
panda$core$String** $tmp3366 = (panda$core$String**) (param2->$data + 16);
panda$core$String* $tmp3367 = *$tmp3366;
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3367));
panda$core$String* $tmp3368 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3368));
*(&local0) = $tmp3367;
org$pandalanguage$pandac$FixedArray** $tmp3369 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp3370 = *$tmp3369;
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3370));
org$pandalanguage$pandac$FixedArray* $tmp3371 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3371));
*(&local1) = $tmp3370;
// line 888
org$pandalanguage$pandac$Type* $tmp3372 = org$pandalanguage$pandac$Compiler$tryResolveType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, param2);
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3372));
org$pandalanguage$pandac$Type* $tmp3373 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3373));
*(&local2) = $tmp3372;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3372));
// unreffing REF($28:org.pandalanguage.pandac.Type?)
// line 889
org$pandalanguage$pandac$Type* $tmp3374 = *(&local2);
panda$core$Bit $tmp3375 = panda$core$Bit$init$builtin_bit($tmp3374 != NULL);
bool $tmp3376 = $tmp3375.value;
if ($tmp3376) goto block3; else goto block4;
block3:;
// line 890
org$pandalanguage$pandac$Type* $tmp3377 = *(&local2);
panda$core$Bit $tmp3378 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit($tmp3377);
panda$core$Bit $tmp3379 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3378);
bool $tmp3380 = $tmp3379.value;
if ($tmp3380) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp3381 = (panda$core$Int64) {890};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3382, $tmp3381);
abort(); // unreachable
block5:;
// line 891
org$pandalanguage$pandac$IR$Value* $tmp3383 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp3384 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type* $tmp3385 = *(&local2);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3383, $tmp3384, $tmp3385);
org$pandalanguage$pandac$IR$Value* $tmp3386 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3383, ((panda$collections$ListView*) param3), param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3386));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3386));
// unreffing REF($62:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3383));
// unreffing REF($56:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$Type* $tmp3387 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3387));
// unreffing resolved
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3388 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3388));
// unreffing types
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp3389 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3389));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp3386;
block4:;
// line 893
panda$core$Bit $tmp3390 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp3391 = org$pandalanguage$pandac$Compiler$tryResolveType$org$pandalanguage$pandac$ASTNode$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(param0, param2, $tmp3390);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3391));
org$pandalanguage$pandac$Type* $tmp3392 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3392));
*(&local2) = $tmp3391;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3391));
// unreffing REF($89:org.pandalanguage.pandac.Type?)
// line 894
org$pandalanguage$pandac$Type* $tmp3393 = *(&local2);
panda$core$Bit $tmp3394 = panda$core$Bit$init$builtin_bit($tmp3393 != NULL);
bool $tmp3395 = $tmp3394.value;
if ($tmp3395) goto block7; else goto block8;
block7:;
// line 896
org$pandalanguage$pandac$Scanner** $tmp3396 = &param0->scanner;
org$pandalanguage$pandac$Scanner* $tmp3397 = *$tmp3396;
org$pandalanguage$pandac$Type* $tmp3398 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp3397, param2);
org$pandalanguage$pandac$Type* $tmp3399 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, $tmp3398);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3399));
// unreffing REF($109:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3398));
// unreffing REF($108:org.pandalanguage.pandac.Type)
// line 897
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp3400 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3400));
// unreffing resolved
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3401 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3401));
// unreffing types
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp3402 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3402));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block8:;
// line 900
panda$core$String* $tmp3403 = *(&local0);
panda$collections$Array* $tmp3404 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT($tmp3403, &$s3405);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3404));
panda$collections$Array* $tmp3406 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3406));
*(&local3) = $tmp3404;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3404));
// unreffing REF($137:panda.collections.Array<panda.core.String>)
// line 901
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 902
panda$collections$Array* $tmp3407 = *(&local3);
ITable* $tmp3408 = ((panda$collections$CollectionView*) $tmp3407)->$class->itable;
while ($tmp3408->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3408 = $tmp3408->next;
}
$fn3410 $tmp3409 = $tmp3408->methods[0];
panda$core$Int64 $tmp3411 = $tmp3409(((panda$collections$CollectionView*) $tmp3407));
panda$core$Int64 $tmp3412 = (panda$core$Int64) {1};
panda$core$Bit $tmp3413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3411, $tmp3412);
bool $tmp3414 = $tmp3413.value;
if ($tmp3414) goto block9; else goto block11;
block9:;
// line 903
org$pandalanguage$pandac$ASTNode* $tmp3415 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3416 = (panda$core$Int64) {23};
panda$core$String* $tmp3417 = *(&local0);
org$pandalanguage$pandac$FixedArray* $tmp3418 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3415, $tmp3416, param1, $tmp3417, $tmp3418);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3415));
org$pandalanguage$pandac$ASTNode* $tmp3419 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3419));
*(&local4) = $tmp3415;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3415));
// unreffing REF($160:org.pandalanguage.pandac.ASTNode)
goto block10;
block11:;
// line 1
// line 906
org$pandalanguage$pandac$ASTNode* $tmp3420 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3421 = (panda$core$Int64) {22};
panda$collections$Array* $tmp3422 = *(&local3);
panda$core$Int64 $tmp3423 = (panda$core$Int64) {0};
panda$core$Object* $tmp3424 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3422, $tmp3423);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3420, $tmp3421, param1, ((panda$core$String*) $tmp3424));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3420));
org$pandalanguage$pandac$ASTNode* $tmp3425 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3425));
*(&local4) = $tmp3420;
panda$core$Panda$unref$panda$core$Object$Q($tmp3424);
// unreffing REF($182:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3420));
// unreffing REF($177:org.pandalanguage.pandac.ASTNode)
// line 907
panda$core$Int64 $tmp3426 = (panda$core$Int64) {1};
panda$collections$Array* $tmp3427 = *(&local3);
ITable* $tmp3428 = ((panda$collections$CollectionView*) $tmp3427)->$class->itable;
while ($tmp3428->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3428 = $tmp3428->next;
}
$fn3430 $tmp3429 = $tmp3428->methods[0];
panda$core$Int64 $tmp3431 = $tmp3429(((panda$collections$CollectionView*) $tmp3427));
panda$core$Int64 $tmp3432 = (panda$core$Int64) {1};
int64_t $tmp3433 = $tmp3431.value;
int64_t $tmp3434 = $tmp3432.value;
int64_t $tmp3435 = $tmp3433 - $tmp3434;
panda$core$Int64 $tmp3436 = (panda$core$Int64) {$tmp3435};
panda$core$Bit $tmp3437 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp3438 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3426, $tmp3436, $tmp3437);
panda$core$Int64 $tmp3439 = $tmp3438.min;
*(&local5) = $tmp3439;
panda$core$Int64 $tmp3440 = $tmp3438.max;
panda$core$Bit $tmp3441 = $tmp3438.inclusive;
bool $tmp3442 = $tmp3441.value;
panda$core$Int64 $tmp3443 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp3444 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3443);
if ($tmp3442) goto block15; else goto block16;
block15:;
int64_t $tmp3445 = $tmp3439.value;
int64_t $tmp3446 = $tmp3440.value;
bool $tmp3447 = $tmp3445 <= $tmp3446;
panda$core$Bit $tmp3448 = (panda$core$Bit) {$tmp3447};
bool $tmp3449 = $tmp3448.value;
if ($tmp3449) goto block12; else goto block13;
block16:;
int64_t $tmp3450 = $tmp3439.value;
int64_t $tmp3451 = $tmp3440.value;
bool $tmp3452 = $tmp3450 < $tmp3451;
panda$core$Bit $tmp3453 = (panda$core$Bit) {$tmp3452};
bool $tmp3454 = $tmp3453.value;
if ($tmp3454) goto block12; else goto block13;
block12:;
// line 908
org$pandalanguage$pandac$ASTNode* $tmp3455 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3456 = (panda$core$Int64) {16};
org$pandalanguage$pandac$ASTNode* $tmp3457 = *(&local4);
panda$collections$Array* $tmp3458 = *(&local3);
panda$core$Int64 $tmp3459 = *(&local5);
panda$core$Object* $tmp3460 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3458, $tmp3459);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp3455, $tmp3456, param1, $tmp3457, ((panda$core$String*) $tmp3460));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3455));
org$pandalanguage$pandac$ASTNode* $tmp3461 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3461));
*(&local4) = $tmp3455;
panda$core$Panda$unref$panda$core$Object$Q($tmp3460);
// unreffing REF($237:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3455));
// unreffing REF($231:org.pandalanguage.pandac.ASTNode)
goto block14;
block14:;
panda$core$Int64 $tmp3462 = *(&local5);
int64_t $tmp3463 = $tmp3440.value;
int64_t $tmp3464 = $tmp3462.value;
int64_t $tmp3465 = $tmp3463 - $tmp3464;
panda$core$Int64 $tmp3466 = (panda$core$Int64) {$tmp3465};
panda$core$UInt64 $tmp3467 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3466);
if ($tmp3442) goto block18; else goto block19;
block18:;
uint64_t $tmp3468 = $tmp3467.value;
uint64_t $tmp3469 = $tmp3444.value;
bool $tmp3470 = $tmp3468 >= $tmp3469;
panda$core$Bit $tmp3471 = (panda$core$Bit) {$tmp3470};
bool $tmp3472 = $tmp3471.value;
if ($tmp3472) goto block17; else goto block13;
block19:;
uint64_t $tmp3473 = $tmp3467.value;
uint64_t $tmp3474 = $tmp3444.value;
bool $tmp3475 = $tmp3473 > $tmp3474;
panda$core$Bit $tmp3476 = (panda$core$Bit) {$tmp3475};
bool $tmp3477 = $tmp3476.value;
if ($tmp3477) goto block17; else goto block13;
block17:;
int64_t $tmp3478 = $tmp3462.value;
int64_t $tmp3479 = $tmp3443.value;
int64_t $tmp3480 = $tmp3478 + $tmp3479;
panda$core$Int64 $tmp3481 = (panda$core$Int64) {$tmp3480};
*(&local5) = $tmp3481;
goto block12;
block13:;
// line 910
org$pandalanguage$pandac$ASTNode* $tmp3482 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3483 = (panda$core$Int64) {17};
org$pandalanguage$pandac$ASTNode* $tmp3484 = *(&local4);
panda$collections$Array* $tmp3485 = *(&local3);
panda$collections$Array* $tmp3486 = *(&local3);
ITable* $tmp3487 = ((panda$collections$CollectionView*) $tmp3486)->$class->itable;
while ($tmp3487->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3487 = $tmp3487->next;
}
$fn3489 $tmp3488 = $tmp3487->methods[0];
panda$core$Int64 $tmp3490 = $tmp3488(((panda$collections$CollectionView*) $tmp3486));
panda$core$Int64 $tmp3491 = (panda$core$Int64) {1};
int64_t $tmp3492 = $tmp3490.value;
int64_t $tmp3493 = $tmp3491.value;
int64_t $tmp3494 = $tmp3492 - $tmp3493;
panda$core$Int64 $tmp3495 = (panda$core$Int64) {$tmp3494};
panda$core$Object* $tmp3496 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3485, $tmp3495);
org$pandalanguage$pandac$FixedArray* $tmp3497 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3482, $tmp3483, param1, $tmp3484, ((panda$core$String*) $tmp3496), $tmp3497);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3482));
org$pandalanguage$pandac$ASTNode* $tmp3498 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3498));
*(&local4) = $tmp3482;
panda$core$Panda$unref$panda$core$Object$Q($tmp3496);
// unreffing REF($293:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3482));
// unreffing REF($279:org.pandalanguage.pandac.ASTNode)
goto block10;
block10:;
// line 913
org$pandalanguage$pandac$ASTNode* $tmp3499 = *(&local4);
org$pandalanguage$pandac$IR$Value* $tmp3500 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3499, param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3500));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3500));
// unreffing REF($312:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$ASTNode* $tmp3501 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3501));
// unreffing target
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3502 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3502));
// unreffing components
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp3503 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3503));
// unreffing resolved
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3504 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3504));
// unreffing types
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp3505 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3505));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp3500;
block1:;
// line 916
org$pandalanguage$pandac$Pair* $tmp3506 = org$pandalanguage$pandac$Compiler$getChoiceCase$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Corg$pandalanguage$pandac$ChoiceCase$GT$Q(param0, param2);
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3506));
org$pandalanguage$pandac$Pair* $tmp3507 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3507));
*(&local6) = $tmp3506;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3506));
// unreffing REF($345:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, org.pandalanguage.pandac.ChoiceCase>?)
// line 917
org$pandalanguage$pandac$Pair* $tmp3508 = *(&local6);
panda$core$Bit $tmp3509 = panda$core$Bit$init$builtin_bit($tmp3508 != NULL);
bool $tmp3510 = $tmp3509.value;
if ($tmp3510) goto block20; else goto block21;
block20:;
// line 918
org$pandalanguage$pandac$Pair* $tmp3511 = *(&local6);
panda$core$Object** $tmp3512 = &$tmp3511->first;
panda$core$Object* $tmp3513 = *$tmp3512;
org$pandalanguage$pandac$Pair* $tmp3514 = *(&local6);
panda$core$Object** $tmp3515 = &$tmp3514->second;
panda$core$Object* $tmp3516 = *$tmp3515;
org$pandalanguage$pandac$IR$Value* $tmp3517 = org$pandalanguage$pandac$Compiler$compileChoiceCaseReference$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ChoiceCase$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, ((org$pandalanguage$pandac$Type*) $tmp3513), ((org$pandalanguage$pandac$ChoiceCase*) $tmp3516), param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3517));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3517));
// unreffing REF($373:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Pair* $tmp3518 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3518));
// unreffing cc
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
return $tmp3517;
block21:;
// line 920
panda$core$Int64* $tmp3519 = &param2->$rawValue;
panda$core$Int64 $tmp3520 = *$tmp3519;
panda$core$Int64 $tmp3521 = (panda$core$Int64) {16};
panda$core$Bit $tmp3522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3520, $tmp3521);
bool $tmp3523 = $tmp3522.value;
if ($tmp3523) goto block23; else goto block22;
block23:;
org$pandalanguage$pandac$Position* $tmp3524 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp3525 = *$tmp3524;
*(&local7) = $tmp3525;
org$pandalanguage$pandac$ASTNode** $tmp3526 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp3527 = *$tmp3526;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3527));
org$pandalanguage$pandac$ASTNode* $tmp3528 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3528));
*(&local8) = $tmp3527;
panda$core$String** $tmp3529 = (panda$core$String**) (param2->$data + 24);
panda$core$String* $tmp3530 = *$tmp3529;
*(&local9) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3530));
panda$core$String* $tmp3531 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3531));
*(&local9) = $tmp3530;
// line 922
org$pandalanguage$pandac$ASTNode* $tmp3532 = *(&local8);
panda$core$Int64* $tmp3533 = &$tmp3532->$rawValue;
panda$core$Int64 $tmp3534 = *$tmp3533;
panda$core$Int64 $tmp3535 = (panda$core$Int64) {42};
panda$core$Bit $tmp3536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3534, $tmp3535);
bool $tmp3537 = $tmp3536.value;
if ($tmp3537) goto block25; else goto block24;
block25:;
// line 924
org$pandalanguage$pandac$SymbolTable** $tmp3538 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp3539 = *$tmp3538;
org$pandalanguage$pandac$Symbol* $tmp3540 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3539, &$s3541);
*(&local10) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3540));
org$pandalanguage$pandac$Symbol* $tmp3542 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3542));
*(&local10) = $tmp3540;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3540));
// unreffing REF($424:org.pandalanguage.pandac.Symbol?)
// line 925
org$pandalanguage$pandac$Symbol* $tmp3543 = *(&local10);
panda$core$Bit $tmp3544 = panda$core$Bit$init$builtin_bit($tmp3543 == NULL);
bool $tmp3545 = $tmp3544.value;
if ($tmp3545) goto block26; else goto block27;
block26:;
// line 926
org$pandalanguage$pandac$SymbolTable** $tmp3546 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp3547 = *$tmp3546;
org$pandalanguage$pandac$Symbol* $tmp3548 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3547, &$s3549);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3548));
org$pandalanguage$pandac$Symbol* $tmp3550 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3550));
*(&local10) = $tmp3548;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3548));
// unreffing REF($444:org.pandalanguage.pandac.Symbol?)
goto block27;
block27:;
// line 928
org$pandalanguage$pandac$Symbol* $tmp3551 = *(&local10);
panda$core$Bit $tmp3552 = panda$core$Bit$init$builtin_bit($tmp3551 == NULL);
bool $tmp3553 = $tmp3552.value;
if ($tmp3553) goto block28; else goto block29;
block28:;
// line 929
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp3554 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3554));
// unreffing s
*(&local10) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp3555 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3555));
// unreffing name
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3556 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3556));
// unreffing base
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Pair* $tmp3557 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3557));
// unreffing cc
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block29:;
// line 931
panda$collections$Array* $tmp3558 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3558);
*(&local11) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3558));
panda$collections$Array* $tmp3559 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3559));
*(&local11) = $tmp3558;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3558));
// unreffing REF($486:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 932
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
// line 933
org$pandalanguage$pandac$Symbol* $tmp3560 = *(&local10);
org$pandalanguage$pandac$Symbol$Kind* $tmp3561 = &$tmp3560->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp3562 = *$tmp3561;
panda$core$Int64 $tmp3563 = $tmp3562.$rawValue;
panda$core$Int64 $tmp3564 = (panda$core$Int64) {9};
panda$core$Bit $tmp3565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3563, $tmp3564);
bool $tmp3566 = $tmp3565.value;
if ($tmp3566) goto block31; else goto block32;
block31:;
// line 935
org$pandalanguage$pandac$Symbol* $tmp3567 = *(&local10);
org$pandalanguage$pandac$Type** $tmp3568 = &((org$pandalanguage$pandac$Variable*) $tmp3567)->type;
org$pandalanguage$pandac$Type* $tmp3569 = *$tmp3568;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3569));
org$pandalanguage$pandac$Type* $tmp3570 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3570));
*(&local12) = $tmp3569;
goto block30;
block32:;
panda$core$Int64 $tmp3571 = (panda$core$Int64) {2};
panda$core$Bit $tmp3572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3563, $tmp3571);
bool $tmp3573 = $tmp3572.value;
if ($tmp3573) goto block33; else goto block34;
block33:;
// line 938
org$pandalanguage$pandac$Symbol* $tmp3574 = *(&local10);
org$pandalanguage$pandac$Type** $tmp3575 = &((org$pandalanguage$pandac$FieldDecl*) $tmp3574)->type;
org$pandalanguage$pandac$Type* $tmp3576 = *$tmp3575;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3576));
org$pandalanguage$pandac$Type* $tmp3577 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3577));
*(&local12) = $tmp3576;
goto block30;
block34:;
// line 941
panda$core$Bit $tmp3578 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3579 = $tmp3578.value;
if ($tmp3579) goto block35; else goto block36;
block36:;
panda$core$Int64 $tmp3580 = (panda$core$Int64) {941};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3581, $tmp3580);
abort(); // unreachable
block35:;
goto block30;
block30:;
// line 944
org$pandalanguage$pandac$Type* $tmp3582 = *(&local12);
org$pandalanguage$pandac$ClassDecl* $tmp3583 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp3582);
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3583));
org$pandalanguage$pandac$ClassDecl* $tmp3584 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3584));
*(&local13) = $tmp3583;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3583));
// unreffing REF($549:org.pandalanguage.pandac.ClassDecl?)
// line 945
org$pandalanguage$pandac$ClassDecl* $tmp3585 = *(&local13);
panda$core$Bit $tmp3586 = panda$core$Bit$init$builtin_bit($tmp3585 == NULL);
bool $tmp3587 = $tmp3586.value;
if ($tmp3587) goto block37; else goto block38;
block37:;
// line 946
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp3588 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3588));
// unreffing cl
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp3589 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3589));
// unreffing selfType
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp3590 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3590));
// unreffing result
*(&local11) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Symbol* $tmp3591 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3591));
// unreffing s
*(&local10) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp3592 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3592));
// unreffing name
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3593 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3593));
// unreffing base
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Pair* $tmp3594 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3594));
// unreffing cc
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block38:;
// line 948
org$pandalanguage$pandac$Type* $tmp3595 = *(&local12);
org$pandalanguage$pandac$ClassDecl* $tmp3596 = *(&local13);
org$pandalanguage$pandac$Type** $tmp3597 = &$tmp3596->rawSuper;
org$pandalanguage$pandac$Type* $tmp3598 = *$tmp3597;
org$pandalanguage$pandac$Type* $tmp3599 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param0, $tmp3595, $tmp3598);
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3599));
org$pandalanguage$pandac$Type* $tmp3600 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3600));
*(&local14) = $tmp3599;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3599));
// unreffing REF($612:org.pandalanguage.pandac.Type)
// line 949
org$pandalanguage$pandac$Position $tmp3601 = *(&local7);
org$pandalanguage$pandac$IR$Value* $tmp3602 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp3603 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type* $tmp3604 = *(&local14);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3602, $tmp3603, $tmp3604);
panda$core$String* $tmp3605 = *(&local9);
org$pandalanguage$pandac$IR$Value* $tmp3606 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp3601, $tmp3602, $tmp3605, ((panda$collections$ListView*) param3), param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3606));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3606));
// unreffing REF($631:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3602));
// unreffing REF($625:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$Type* $tmp3607 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3607));
// unreffing supertype
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3608 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3608));
// unreffing cl
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp3609 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3609));
// unreffing selfType
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp3610 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3610));
// unreffing result
*(&local11) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Symbol* $tmp3611 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3611));
// unreffing s
*(&local10) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp3612 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3612));
// unreffing name
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3613 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3613));
// unreffing base
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Pair* $tmp3614 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3614));
// unreffing cc
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
return $tmp3606;
block24:;
panda$core$String* $tmp3615 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3615));
// unreffing name
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3616 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3616));
// unreffing base
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block22;
block22:;
// line 955
org$pandalanguage$pandac$Compiler$TypeContext* $tmp3617 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp3618 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp3617, $tmp3618);
org$pandalanguage$pandac$IR$Value* $tmp3619 = org$pandalanguage$pandac$Compiler$compileMethodExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, $tmp3617);
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3619));
org$pandalanguage$pandac$IR$Value* $tmp3620 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3620));
*(&local15) = $tmp3619;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3619));
// unreffing REF($696:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3617));
// unreffing REF($693:org.pandalanguage.pandac.Compiler.TypeContext)
// line 956
org$pandalanguage$pandac$IR$Value* $tmp3621 = *(&local15);
panda$core$Bit $tmp3622 = panda$core$Bit$init$builtin_bit($tmp3621 == NULL);
bool $tmp3623 = $tmp3622.value;
if ($tmp3623) goto block39; else goto block40;
block39:;
// line 957
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp3624 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3624));
// unreffing compiledM
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Pair* $tmp3625 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3625));
// unreffing cc
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block40:;
// line 959
org$pandalanguage$pandac$IR$Value* $tmp3626 = *(&local15);
org$pandalanguage$pandac$IR$Value* $tmp3627 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3626, ((panda$collections$ListView*) param3), param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3627));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3627));
// unreffing REF($734:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR$Value* $tmp3628 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3628));
// unreffing compiledM
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Pair* $tmp3629 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3629));
// unreffing cc
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
return $tmp3627;

}
void org$pandalanguage$pandac$expression$Call$init(org$pandalanguage$pandac$expression$Call* param0) {

return;

}
void org$pandalanguage$pandac$expression$Call$cleanup(org$pandalanguage$pandac$expression$Call* param0) {

// line 20
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

