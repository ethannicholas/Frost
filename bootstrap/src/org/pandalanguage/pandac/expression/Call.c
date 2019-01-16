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

typedef panda$core$Bit (*$fn62)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn77)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn110)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn144)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Object* (*$fn161)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn180)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn220)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn255)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Object* (*$fn281)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn304)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Object* (*$fn332)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn364)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Object* (*$fn391)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn401)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn442)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn462)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn474)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn492)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Int64 (*$fn521)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn544)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn573)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn590)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Int64 (*$fn636)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn645)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn667)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn696)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Int64 (*$fn963)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn972)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn995)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1024)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Int64 (*$fn1099)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1136)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1213)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1217)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1222)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1267)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1271)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1276)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn1307)(org$pandalanguage$pandac$MethodDecl$GenericParameter*);
typedef panda$collections$Array* (*$fn1311)(panda$collections$CollectionView*, panda$core$MutableMethod*);
typedef panda$core$Int64 (*$fn1321)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1360)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1364)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1369)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1375)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1386)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn1421)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1442)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1502)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1512)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1516)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1521)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1529)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1533)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn1554)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn1566)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1600)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn1644)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1667)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1793)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn1808)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn1827)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1852)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn1861)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1873)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1879)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1902)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1951)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1958)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn1974)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2025)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2036)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2067)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2077)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2094)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn2098)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn2103)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn2108)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2121)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn2126)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2148)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2168)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2175)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn2180)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2266)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2286)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2293)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn2298)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn2312)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn2389)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn2406)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn2496)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn2513)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2610)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2643)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2655)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2659)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2664)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2720)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2726)(org$pandalanguage$pandac$Compiler$TypeContext*);
typedef panda$core$Int64 (*$fn2765)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2799)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2812)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2816)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2821)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2878)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2884)(org$pandalanguage$pandac$Compiler$TypeContext*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn3012)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Bit (*$fn3077)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn3126)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn3148)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn3197)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn3212)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3241)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn3250)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn3376)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn3512)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn3522)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3545)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn3573)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn3585)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3662)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn3694)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn3702)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn3719)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn3731)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn3742)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Bit (*$fn3749)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3783)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3792)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3830)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn3849)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn3965)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn3985)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn4044)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c", 40, 7323815419836727496, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63\x3a\x20", 31, 5572221770796053896, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x50\x6f\x69\x6e\x74\x65\x72\x49\x6e\x74\x72\x69\x6e\x73\x69\x63\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x6d\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2c\x20\x61\x72\x67\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 414, -6506112832092576926, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1061 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 137, -3621091859119661460, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x27", 143, 3985793072538673273, NULL };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x27", 131, 7309256388581005205, NULL };
static panda$core$String $s1191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e\x27", 183, -6328853617347276774, NULL };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x27", 131, 7309256388581005205, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 148, -877569735536682215, NULL };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e\x27", 183, -6328853617347276774, NULL };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x65\x3a\x20\x63\x61\x6e\x27\x74\x20\x63\x6f\x65\x72\x63\x65\x20", 19, -4455047110793792445, NULL };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x6f\x20", 4, 138224592, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x27", 193, 4605233986127440889, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 146, 3347040154052538814, NULL };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x27", 143, 3985793072538673273, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x27", 107, -4957204894119185737, NULL };
static panda$core$String $s1685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 146, 3347040154052538814, NULL };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 146, 3347040154052538814, NULL };
static panda$core$String $s1818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s1820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 16, 4303665098026904440, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 5549333425848529514, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72", 7, 227281454102470, NULL };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74", 6, 2290904182948, NULL };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x77\x69\x74\x68\x20\x74\x61\x72\x67\x65\x74", 24, 8706842098394974193, NULL };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x74\x61\x72\x67\x65\x74", 27, -7788775699050637059, NULL };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x6d\x65\x72\x67\x65", 18, 706487662591854902, NULL };
static panda$core$String $s2143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 15, 8570243288273150570, NULL };
static panda$core$String $s2436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 15, 8570243288273150570, NULL };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s2604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s2622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s2688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20", 13, 6196784763812182974, NULL };
static panda$core$String $s2716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 179, -421655308885099262, NULL };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s2872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20", 13, 6196784763812182974, NULL };
static panda$core$String $s2874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s2940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x69\x74\x20\x66\x6f\x72\x20", 12, -9112629214783660015, NULL };
static panda$core$String $s2975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s2990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s3009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s3029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s3035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20", 12, 8187822430156838052, NULL };
static panda$core$String $s3055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3061 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x61\x72\x67\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 359, -5674773602257372163, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s3201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x69\x72\x65\x63\x74\x6c\x79\x20\x63\x61\x6c\x6c\x20\x27\x69\x6e\x69\x74\x27\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 53, 84993564105955720, NULL };
static panda$core$String $s3207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x6f\x6e\x20\x27\x73\x65\x6c\x66\x27\x20\x6f\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s3227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x73\x20", 9, 1451156555704250829, NULL };
static panda$core$String $s3233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x63\x6c\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s3286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x6f\x6e\x20\x61\x6e\x20", 7, 142360281799925, NULL };
static panda$core$String $s3288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x73\x74\x61\x6e\x63\x65", 8, 22203976303606054, NULL };
static panda$core$String $s3317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x27", 107, -4957204894119185737, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s3363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s3400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s3447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s3492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s3509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s3570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s3672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s3689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s3711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s3770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s3839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s3873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s3878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s3898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };
static panda$core$String $s3926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s3932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s3940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s3960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s4071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 165, 7847896738279505016, NULL };
static panda$core$String $s4078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s4079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72\x27", 165, 7847896738279505016, NULL };
static panda$core$String $s4106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static panda$core$String $s4114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s4129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s4130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 101, -6944434037372001085, NULL };
static panda$core$String $s4151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s4170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s4171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s4177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s4178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s4210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static panda$core$String $s4211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x27", 105, -4427651744128623909, NULL };

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
panda$core$Bit $tmp13 = panda$core$Bit$init$builtin_bit($tmp12 != NULL);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp15 = (panda$core$Int64) {27};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s16, $tmp15, &$s17);
abort(); // unreachable
block4:;
panda$core$Int64 $tmp18 = (panda$core$Int64) {1};
panda$core$Object* $tmp19 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp12, $tmp18);
org$pandalanguage$pandac$Type* $tmp20 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, ((org$pandalanguage$pandac$Type*) $tmp19));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
org$pandalanguage$pandac$Type* $tmp21 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
*(&local1) = $tmp20;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($35:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp19);
// unreffing REF($33:org.pandalanguage.pandac.FixedArray.T)
goto block2;
block3:;
// line 1
// line 30
org$pandalanguage$pandac$Type** $tmp22 = &param3->target;
org$pandalanguage$pandac$Type* $tmp23 = *$tmp22;
org$pandalanguage$pandac$FixedArray** $tmp24 = &$tmp23->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp25 = *$tmp24;
panda$core$Bit $tmp26 = panda$core$Bit$init$builtin_bit($tmp25 != NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp28 = (panda$core$Int64) {30};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s29, $tmp28, &$s30);
abort(); // unreachable
block6:;
panda$core$Int64 $tmp31 = (panda$core$Int64) {1};
panda$core$Object* $tmp32 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp25, $tmp31);
org$pandalanguage$pandac$FixedArray** $tmp33 = &((org$pandalanguage$pandac$Type*) $tmp32)->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp34 = *$tmp33;
panda$core$Bit $tmp35 = panda$core$Bit$init$builtin_bit($tmp34 != NULL);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp37 = (panda$core$Int64) {30};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s38, $tmp37, &$s39);
abort(); // unreachable
block8:;
panda$core$Int64 $tmp40 = (panda$core$Int64) {1};
panda$core$Object* $tmp41 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp34, $tmp40);
org$pandalanguage$pandac$Type* $tmp42 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, ((org$pandalanguage$pandac$Type*) $tmp41));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
org$pandalanguage$pandac$Type* $tmp43 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
*(&local1) = $tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// unreffing REF($81:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp41);
// unreffing REF($79:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp32);
// unreffing REF($65:org.pandalanguage.pandac.FixedArray.T)
goto block2;
block2:;
// line 32
org$pandalanguage$pandac$Type* $tmp44 = *(&local1);
panda$core$Bit $tmp45 = panda$core$Bit$init$builtin_bit($tmp44 == NULL);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block10; else goto block11;
block10:;
// line 33
org$pandalanguage$pandac$Pair* $tmp47 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp48 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp49;
$tmp49 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp49->value = $tmp48;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp47, ((panda$core$Object*) $tmp49), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing REF($108:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing REF($105:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$Type* $tmp50 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp51 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp47;
block11:;
// line 35
org$pandalanguage$pandac$Type** $tmp52 = &param3->target;
org$pandalanguage$pandac$Type* $tmp53 = *$tmp52;
org$pandalanguage$pandac$Type$Kind* $tmp54 = &$tmp53->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp55 = *$tmp54;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp56;
$tmp56 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp56->value = $tmp55;
panda$core$Int64 $tmp57 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp58 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp57);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp59;
$tmp59 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp59->value = $tmp58;
ITable* $tmp60 = ((panda$core$Equatable*) $tmp56)->$class->itable;
while ($tmp60->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[0];
panda$core$Bit $tmp63 = $tmp61(((panda$core$Equatable*) $tmp56), ((panda$core$Equatable*) $tmp59));
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp65 = (panda$core$Int64) {35};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s66, $tmp65);
abort(); // unreachable
block12:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp59)));
// unreffing REF($139:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp56)));
// unreffing REF($135:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
// line 36
org$pandalanguage$pandac$MethodDecl** $tmp67 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp68 = *$tmp67;
panda$core$String** $tmp69 = &((org$pandalanguage$pandac$Symbol*) $tmp68)->name;
panda$core$String* $tmp70 = *$tmp69;
panda$core$Bit $tmp71 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp70, &$s72);
bool $tmp73 = $tmp71.value;
if ($tmp73) goto block15; else goto block16;
block15:;
// line 38
panda$core$Int64 $tmp74 = (panda$core$Int64) {0};
ITable* $tmp75 = param4->$class->itable;
while ($tmp75->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
panda$core$Object* $tmp78 = $tmp76(param4, $tmp74);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp79 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp80 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp81 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp79, $tmp80, $tmp81);
org$pandalanguage$pandac$IR$Value* $tmp82 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp78), $tmp79);
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
org$pandalanguage$pandac$IR$Value* $tmp83 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
*(&local2) = $tmp82;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing REF($172:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// unreffing REF($170:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
// unreffing REF($168:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp78);
// unreffing REF($166:panda.collections.ListView.T)
// line 39
org$pandalanguage$pandac$IR$Value* $tmp84 = *(&local2);
panda$core$Bit $tmp85 = panda$core$Bit$init$builtin_bit($tmp84 == NULL);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block17; else goto block18;
block17:;
// line 40
org$pandalanguage$pandac$Pair* $tmp87 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp88 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp89;
$tmp89 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp89->value = $tmp88;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp87, ((panda$core$Object*) $tmp89), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
// unreffing REF($202:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// unreffing REF($199:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp90 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing count
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp91 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp92 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp87;
block18:;
// line 42
org$pandalanguage$pandac$IR* $tmp93 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp94 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp95 = (panda$core$Int64) {16};
org$pandalanguage$pandac$IR$Value* $tmp96 = *(&local2);
panda$core$Bit $tmp97 = panda$core$Bit$init$builtin_bit($tmp96 != NULL);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp99 = (panda$core$Int64) {43};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s100, $tmp99, &$s101);
abort(); // unreachable
block19:;
org$pandalanguage$pandac$IR$Value* $tmp102 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp96);
org$pandalanguage$pandac$Type* $tmp103 = *(&local1);
panda$core$Bit $tmp104 = panda$core$Bit$init$builtin_bit($tmp103 != NULL);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp106 = (panda$core$Int64) {43};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s107, $tmp106, &$s108);
abort(); // unreachable
block21:;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type($tmp94, $tmp95, param1, $tmp102, $tmp103);
$fn110 $tmp109 = ($fn110) $tmp93->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp111 = $tmp109($tmp93, $tmp94);
*(&local3) = $tmp111;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing REF($242:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing REF($231:org.pandalanguage.pandac.IR.Statement)
// line 44
org$pandalanguage$pandac$Pair* $tmp112 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp113 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp114;
$tmp114 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp114->value = $tmp113;
org$pandalanguage$pandac$IR$Value* $tmp115 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp116 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp117 = *(&local3);
org$pandalanguage$pandac$Type* $tmp118 = *(&local1);
panda$core$Bit $tmp119 = panda$core$Bit$init$builtin_bit($tmp118 != NULL);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block23; else goto block24;
block24:;
panda$core$Int64 $tmp121 = (panda$core$Int64) {45};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s122, $tmp121, &$s123);
abort(); // unreachable
block23:;
org$pandalanguage$pandac$Type* $tmp124 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp118);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp115, $tmp116, $tmp117, $tmp124);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp112, ((panda$core$Object*) $tmp114), ((panda$core$Object*) $tmp115));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing REF($279:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
// unreffing REF($267:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// unreffing REF($266:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($263:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp125 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// unreffing count
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp126 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp127 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp112;
block16:;
panda$core$Bit $tmp128 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp70, &$s129);
bool $tmp130 = $tmp128.value;
if ($tmp130) goto block25; else goto block26;
block25:;
// line 48
panda$core$Bit $tmp131 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp133 = (panda$core$Int64) {48};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s134, $tmp133);
abort(); // unreachable
block27:;
// line 49
org$pandalanguage$pandac$IR* $tmp135 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp136 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp137 = (panda$core$Int64) {17};
panda$core$Bit $tmp138 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block29; else goto block30;
block30:;
panda$core$Int64 $tmp140 = (panda$core$Int64) {49};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s141, $tmp140, &$s142);
abort(); // unreachable
block29:;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp136, $tmp137, param1, param2);
$fn144 $tmp143 = ($fn144) $tmp135->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp145 = $tmp143($tmp135, $tmp136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing REF($327:org.pandalanguage.pandac.IR.Statement)
// line 50
org$pandalanguage$pandac$Pair* $tmp146 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp147 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp148;
$tmp148 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp148->value = $tmp147;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp146, ((panda$core$Object*) $tmp148), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
// unreffing REF($347:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing REF($344:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$Type* $tmp149 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp150 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp146;
block26:;
panda$core$Bit $tmp151 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp70, &$s152);
bool $tmp153 = $tmp151.value;
if ($tmp153) goto block31; else goto block32;
block31:;
// line 53
panda$core$Bit $tmp154 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block33; else goto block34;
block34:;
panda$core$Int64 $tmp156 = (panda$core$Int64) {53};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s157, $tmp156);
abort(); // unreachable
block33:;
// line 54
panda$core$Int64 $tmp158 = (panda$core$Int64) {0};
ITable* $tmp159 = param4->$class->itable;
while ($tmp159->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[0];
panda$core$Object* $tmp162 = $tmp160(param4, $tmp158);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp163 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp164 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp165 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp163, $tmp164, $tmp165);
org$pandalanguage$pandac$IR$Value* $tmp166 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp162), $tmp163);
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
org$pandalanguage$pandac$IR$Value* $tmp167 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
*(&local4) = $tmp166;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp166));
// unreffing REF($390:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
// unreffing REF($388:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
// unreffing REF($386:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp162);
// unreffing REF($384:panda.collections.ListView.T)
// line 55
org$pandalanguage$pandac$IR$Value* $tmp168 = *(&local4);
panda$core$Bit $tmp169 = panda$core$Bit$init$builtin_bit($tmp168 == NULL);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block35; else goto block36;
block35:;
// line 56
org$pandalanguage$pandac$Pair* $tmp171 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp172 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp173;
$tmp173 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp173->value = $tmp172;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp171, ((panda$core$Object*) $tmp173), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
// unreffing REF($420:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
// unreffing REF($417:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp174 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
// unreffing oldCount
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp175 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp176 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp171;
block36:;
// line 58
panda$core$Int64 $tmp177 = (panda$core$Int64) {1};
ITable* $tmp178 = param4->$class->itable;
while ($tmp178->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[0];
panda$core$Object* $tmp181 = $tmp179(param4, $tmp177);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp182 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp183 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp184 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp182, $tmp183, $tmp184);
org$pandalanguage$pandac$IR$Value* $tmp185 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp181), $tmp182);
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
org$pandalanguage$pandac$IR$Value* $tmp186 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
*(&local5) = $tmp185;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
// unreffing REF($457:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
// unreffing REF($455:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
// unreffing REF($453:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp181);
// unreffing REF($451:panda.collections.ListView.T)
// line 59
org$pandalanguage$pandac$IR$Value* $tmp187 = *(&local5);
panda$core$Bit $tmp188 = panda$core$Bit$init$builtin_bit($tmp187 == NULL);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block37; else goto block38;
block37:;
// line 60
org$pandalanguage$pandac$Pair* $tmp190 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp191 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp192;
$tmp192 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp192->value = $tmp191;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp190, ((panda$core$Object*) $tmp192), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
// unreffing REF($487:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
// unreffing REF($484:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp193 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
// unreffing newCount
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp194 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// unreffing oldCount
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp195 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp196 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp190;
block38:;
// line 62
org$pandalanguage$pandac$IR* $tmp197 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp198 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp199 = (panda$core$Int64) {21};
panda$core$Bit $tmp200 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp202 = (panda$core$Int64) {62};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s203, $tmp202, &$s204);
abort(); // unreachable
block39:;
org$pandalanguage$pandac$IR$Value* $tmp205 = *(&local4);
panda$core$Bit $tmp206 = panda$core$Bit$init$builtin_bit($tmp205 != NULL);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block41; else goto block42;
block42:;
panda$core$Int64 $tmp208 = (panda$core$Int64) {63};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s209, $tmp208, &$s210);
abort(); // unreachable
block41:;
org$pandalanguage$pandac$IR$Value* $tmp211 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp205);
org$pandalanguage$pandac$IR$Value* $tmp212 = *(&local5);
panda$core$Bit $tmp213 = panda$core$Bit$init$builtin_bit($tmp212 != NULL);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block43; else goto block44;
block44:;
panda$core$Int64 $tmp215 = (panda$core$Int64) {64};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s216, $tmp215, &$s217);
abort(); // unreachable
block43:;
org$pandalanguage$pandac$IR$Value* $tmp218 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp212);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp198, $tmp199, param1, param2, $tmp211, $tmp218);
$fn220 $tmp219 = ($fn220) $tmp197->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp221 = $tmp219($tmp197, $tmp198);
*(&local6) = $tmp221;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
// unreffing REF($550:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
// unreffing REF($540:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing REF($521:org.pandalanguage.pandac.IR.Statement)
// line 65
org$pandalanguage$pandac$Pair* $tmp222 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp223 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp224;
$tmp224 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp224->value = $tmp223;
org$pandalanguage$pandac$IR$Value* $tmp225 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp226 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp227 = *(&local6);
org$pandalanguage$pandac$Type* $tmp228 = *(&local1);
panda$core$Bit $tmp229 = panda$core$Bit$init$builtin_bit($tmp228 != NULL);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block45; else goto block46;
block46:;
panda$core$Int64 $tmp231 = (panda$core$Int64) {66};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s232, $tmp231, &$s233);
abort(); // unreachable
block45:;
org$pandalanguage$pandac$Type* $tmp234 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp228);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp225, $tmp226, $tmp227, $tmp234);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp222, ((panda$core$Object*) $tmp224), ((panda$core$Object*) $tmp225));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
// unreffing REF($581:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
// unreffing REF($569:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
// unreffing REF($568:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing REF($565:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp235 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
// unreffing newCount
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp236 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
// unreffing oldCount
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp237 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp238 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp222;
block32:;
panda$core$Bit $tmp239 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp70, &$s240);
bool $tmp241 = $tmp239.value;
if ($tmp241) goto block47; else goto block48;
block47:;
// line 69
panda$core$Bit $tmp242 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp244 = (panda$core$Int64) {69};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s245, $tmp244);
abort(); // unreachable
block49:;
// line 70
org$pandalanguage$pandac$IR* $tmp246 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp247 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp248 = (panda$core$Int64) {18};
panda$core$Bit $tmp249 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block51; else goto block52;
block52:;
panda$core$Int64 $tmp251 = (panda$core$Int64) {70};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s252, $tmp251, &$s253);
abort(); // unreachable
block51:;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp247, $tmp248, param1, param2);
$fn255 $tmp254 = ($fn255) $tmp246->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp256 = $tmp254($tmp246, $tmp247);
*(&local7) = $tmp256;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
// unreffing REF($634:org.pandalanguage.pandac.IR.Statement)
// line 71
org$pandalanguage$pandac$Pair* $tmp257 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp258 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp259;
$tmp259 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp259->value = $tmp258;
org$pandalanguage$pandac$IR$Value* $tmp260 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp261 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp262 = *(&local7);
org$pandalanguage$pandac$Type* $tmp263 = *(&local1);
panda$core$Bit $tmp264 = panda$core$Bit$init$builtin_bit($tmp263 != NULL);
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block53; else goto block54;
block54:;
panda$core$Int64 $tmp266 = (panda$core$Int64) {71};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s267, $tmp266, &$s268);
abort(); // unreachable
block53:;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp260, $tmp261, $tmp262, $tmp263);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp257, ((panda$core$Object*) $tmp259), ((panda$core$Object*) $tmp260));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp260));
// unreffing REF($656:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
// unreffing REF($655:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
// unreffing REF($652:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$Type* $tmp269 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp270 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp257;
block48:;
panda$core$Bit $tmp271 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp70, &$s272);
bool $tmp273 = $tmp271.value;
if ($tmp273) goto block55; else goto block56;
block55:;
// line 74
panda$core$Bit $tmp274 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block57; else goto block58;
block58:;
panda$core$Int64 $tmp276 = (panda$core$Int64) {74};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s277, $tmp276);
abort(); // unreachable
block57:;
// line 75
panda$core$Int64 $tmp278 = (panda$core$Int64) {0};
ITable* $tmp279 = param4->$class->itable;
while ($tmp279->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp279 = $tmp279->next;
}
$fn281 $tmp280 = $tmp279->methods[0];
panda$core$Object* $tmp282 = $tmp280(param4, $tmp278);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp283 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp284 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp285 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp283, $tmp284, $tmp285);
org$pandalanguage$pandac$IR$Value* $tmp286 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp282), $tmp283);
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
org$pandalanguage$pandac$IR$Value* $tmp287 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
*(&local8) = $tmp286;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp286));
// unreffing REF($715:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
// unreffing REF($713:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
// unreffing REF($711:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp282);
// unreffing REF($709:panda.collections.ListView.T)
// line 76
org$pandalanguage$pandac$IR* $tmp288 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp289 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp290 = (panda$core$Int64) {20};
panda$core$Bit $tmp291 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block59; else goto block60;
block60:;
panda$core$Int64 $tmp293 = (panda$core$Int64) {76};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s294, $tmp293, &$s295);
abort(); // unreachable
block59:;
org$pandalanguage$pandac$IR$Value* $tmp296 = *(&local8);
panda$core$Bit $tmp297 = panda$core$Bit$init$builtin_bit($tmp296 != NULL);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block61; else goto block62;
block62:;
panda$core$Int64 $tmp299 = (panda$core$Int64) {77};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s300, $tmp299, &$s301);
abort(); // unreachable
block61:;
org$pandalanguage$pandac$IR$Value* $tmp302 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp296);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp289, $tmp290, param1, param2, $tmp302);
$fn304 $tmp303 = ($fn304) $tmp288->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp305 = $tmp303($tmp288, $tmp289);
*(&local9) = $tmp305;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing REF($756:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
// unreffing REF($737:org.pandalanguage.pandac.IR.Statement)
// line 78
org$pandalanguage$pandac$Pair* $tmp306 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp307 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp308;
$tmp308 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp308->value = $tmp307;
org$pandalanguage$pandac$IR$Value* $tmp309 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp310 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp311 = *(&local9);
org$pandalanguage$pandac$Type* $tmp312 = *(&local1);
panda$core$Bit $tmp313 = panda$core$Bit$init$builtin_bit($tmp312 != NULL);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block63; else goto block64;
block64:;
panda$core$Int64 $tmp315 = (panda$core$Int64) {79};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s316, $tmp315, &$s317);
abort(); // unreachable
block63:;
org$pandalanguage$pandac$Type* $tmp318 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp312);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp309, $tmp310, $tmp311, $tmp318);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp306, ((panda$core$Object*) $tmp308), ((panda$core$Object*) $tmp309));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
// unreffing REF($784:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// unreffing REF($772:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
// unreffing REF($771:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
// unreffing REF($768:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp319 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
// unreffing value
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp320 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp321 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp306;
block56:;
panda$core$Bit $tmp322 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp70, &$s323);
bool $tmp324 = $tmp322.value;
if ($tmp324) goto block65; else goto block66;
block65:;
// line 82
panda$core$Bit $tmp325 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block67; else goto block68;
block68:;
panda$core$Int64 $tmp327 = (panda$core$Int64) {82};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s328, $tmp327);
abort(); // unreachable
block67:;
// line 83
panda$core$Int64 $tmp329 = (panda$core$Int64) {0};
ITable* $tmp330 = param4->$class->itable;
while ($tmp330->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp330 = $tmp330->next;
}
$fn332 $tmp331 = $tmp330->methods[0];
panda$core$Object* $tmp333 = $tmp331(param4, $tmp329);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp334 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp335 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp336 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp334, $tmp335, $tmp336);
org$pandalanguage$pandac$IR$Value* $tmp337 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp333), $tmp334);
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
org$pandalanguage$pandac$IR$Value* $tmp338 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
*(&local10) = $tmp337;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
// unreffing REF($840:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
// unreffing REF($838:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
// unreffing REF($836:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp333);
// unreffing REF($834:panda.collections.ListView.T)
// line 84
org$pandalanguage$pandac$IR$Value* $tmp339 = *(&local10);
panda$core$Bit $tmp340 = panda$core$Bit$init$builtin_bit($tmp339 == NULL);
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block69; else goto block70;
block69:;
// line 85
org$pandalanguage$pandac$Pair* $tmp342 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp343 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp344;
$tmp344 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp344->value = $tmp343;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp342, ((panda$core$Object*) $tmp344), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
// unreffing REF($870:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// unreffing REF($867:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp345 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
// unreffing index
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp346 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp347 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp342;
block70:;
// line 87
org$pandalanguage$pandac$IR* $tmp348 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp349 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp350 = (panda$core$Int64) {19};
panda$core$Bit $tmp351 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block71; else goto block72;
block72:;
panda$core$Int64 $tmp353 = (panda$core$Int64) {87};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s354, $tmp353, &$s355);
abort(); // unreachable
block71:;
org$pandalanguage$pandac$IR$Value* $tmp356 = *(&local10);
panda$core$Bit $tmp357 = panda$core$Bit$init$builtin_bit($tmp356 != NULL);
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block73; else goto block74;
block74:;
panda$core$Int64 $tmp359 = (panda$core$Int64) {88};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s360, $tmp359, &$s361);
abort(); // unreachable
block73:;
org$pandalanguage$pandac$IR$Value* $tmp362 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp356);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp349, $tmp350, param1, param2, $tmp362);
$fn364 $tmp363 = ($fn364) $tmp348->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp365 = $tmp363($tmp348, $tmp349);
*(&local11) = $tmp365;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
// unreffing REF($918:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp349));
// unreffing REF($899:org.pandalanguage.pandac.IR.Statement)
// line 89
org$pandalanguage$pandac$Pair* $tmp366 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp367 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp368;
$tmp368 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp368->value = $tmp367;
org$pandalanguage$pandac$IR$Value* $tmp369 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp370 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp371 = *(&local11);
org$pandalanguage$pandac$Type* $tmp372 = *(&local1);
panda$core$Bit $tmp373 = panda$core$Bit$init$builtin_bit($tmp372 != NULL);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block75; else goto block76;
block76:;
panda$core$Int64 $tmp375 = (panda$core$Int64) {89};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s376, $tmp375, &$s377);
abort(); // unreachable
block75:;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp369, $tmp370, $tmp371, $tmp372);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp366, ((panda$core$Object*) $tmp368), ((panda$core$Object*) $tmp369));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
// unreffing REF($934:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
// unreffing REF($933:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
// unreffing REF($930:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp378 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
// unreffing index
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp379 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp380 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp366;
block66:;
panda$core$Bit $tmp381 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp70, &$s382);
bool $tmp383 = $tmp381.value;
if ($tmp383) goto block77; else goto block78;
block77:;
// line 92
panda$core$Bit $tmp384 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp385 = $tmp384.value;
if ($tmp385) goto block79; else goto block80;
block80:;
panda$core$Int64 $tmp386 = (panda$core$Int64) {92};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s387, $tmp386);
abort(); // unreachable
block79:;
// line 93
panda$core$Int64 $tmp388 = (panda$core$Int64) {0};
ITable* $tmp389 = param4->$class->itable;
while ($tmp389->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp389 = $tmp389->next;
}
$fn391 $tmp390 = $tmp389->methods[0];
panda$core$Object* $tmp392 = $tmp390(param4, $tmp388);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp393 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp394 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp395 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp393, $tmp394, $tmp395);
org$pandalanguage$pandac$IR$Value* $tmp396 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp392), $tmp393);
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
org$pandalanguage$pandac$IR$Value* $tmp397 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
*(&local12) = $tmp396;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
// unreffing REF($998:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
// unreffing REF($996:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
// unreffing REF($994:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp392);
// unreffing REF($992:panda.collections.ListView.T)
// line 94
panda$core$Int64 $tmp398 = (panda$core$Int64) {1};
ITable* $tmp399 = param4->$class->itable;
while ($tmp399->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp399 = $tmp399->next;
}
$fn401 $tmp400 = $tmp399->methods[0];
panda$core$Object* $tmp402 = $tmp400(param4, $tmp398);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp403 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp404 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp405 = *(&local1);
panda$core$Bit $tmp406 = panda$core$Bit$init$builtin_bit($tmp405 != NULL);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block81; else goto block82;
block82:;
panda$core$Int64 $tmp408 = (panda$core$Int64) {94};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s409, $tmp408, &$s410);
abort(); // unreachable
block81:;
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp403, $tmp404, $tmp405);
org$pandalanguage$pandac$IR$Value* $tmp411 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp402), $tmp403);
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
org$pandalanguage$pandac$IR$Value* $tmp412 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp412));
*(&local13) = $tmp411;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
// unreffing REF($1036:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing REF($1024:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp402);
// unreffing REF($1022:panda.collections.ListView.T)
// line 95
org$pandalanguage$pandac$IR$Value* $tmp413 = *(&local12);
panda$core$Bit $tmp414 = panda$core$Bit$init$builtin_bit($tmp413 == NULL);
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block85; else goto block86;
block85:;
*(&local14) = $tmp414;
goto block87;
block86:;
org$pandalanguage$pandac$IR$Value* $tmp416 = *(&local13);
panda$core$Bit $tmp417 = panda$core$Bit$init$builtin_bit($tmp416 == NULL);
*(&local14) = $tmp417;
goto block87;
block87:;
panda$core$Bit $tmp418 = *(&local14);
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block83; else goto block84;
block83:;
// line 96
org$pandalanguage$pandac$Pair* $tmp420 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp421 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp422;
$tmp422 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp422->value = $tmp421;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp420, ((panda$core$Object*) $tmp422), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
// unreffing REF($1073:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
// unreffing REF($1070:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp423 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
// unreffing value
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp424 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
// unreffing index
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp425 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp426 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp420;
block84:;
// line 98
org$pandalanguage$pandac$IR$Value* $tmp427 = *(&local12);
panda$core$Bit $tmp428 = panda$core$Bit$init$builtin_bit($tmp427 != NULL);
bool $tmp429 = $tmp428.value;
if ($tmp429) goto block88; else goto block89;
block89:;
panda$core$Int64 $tmp430 = (panda$core$Int64) {98};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s431, $tmp430, &$s432);
abort(); // unreachable
block88:;
org$pandalanguage$pandac$IR$Value* $tmp433 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp427);
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
org$pandalanguage$pandac$IR$Value* $tmp434 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
*(&local15) = $tmp433;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
// unreffing REF($1115:org.pandalanguage.pandac.IR.Value)
// line 99
org$pandalanguage$pandac$IR$Value* $tmp435 = *(&local13);
panda$core$Bit $tmp436 = panda$core$Bit$init$builtin_bit($tmp435 != NULL);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block92; else goto block93;
block93:;
panda$core$Int64 $tmp438 = (panda$core$Int64) {99};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s439, $tmp438, &$s440);
abort(); // unreachable
block92:;
$fn442 $tmp441 = ($fn442) $tmp435->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp443 = $tmp441($tmp435);
panda$core$Bit $tmp444 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp443);
bool $tmp445 = $tmp444.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
// unreffing REF($1137:org.pandalanguage.pandac.Type)
if ($tmp445) goto block90; else goto block91;
block90:;
// line 100
org$pandalanguage$pandac$IR$Value* $tmp446 = *(&local13);
panda$core$Bit $tmp447 = panda$core$Bit$init$builtin_bit($tmp446 != NULL);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block94; else goto block95;
block95:;
panda$core$Int64 $tmp449 = (panda$core$Int64) {100};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s450, $tmp449, &$s451);
abort(); // unreachable
block94:;
org$pandalanguage$pandac$Compiler$compileRef$org$pandalanguage$pandac$IR$Value(param0, $tmp446);
// line 101
org$pandalanguage$pandac$IR* $tmp452 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp453 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp454 = (panda$core$Int64) {19};
panda$core$Bit $tmp455 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block96; else goto block97;
block97:;
panda$core$Int64 $tmp457 = (panda$core$Int64) {101};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s458, $tmp457, &$s459);
abort(); // unreachable
block96:;
org$pandalanguage$pandac$IR$Value* $tmp460 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp453, $tmp454, param1, param2, $tmp460);
$fn462 $tmp461 = ($fn462) $tmp452->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp463 = $tmp461($tmp452, $tmp453);
*(&local16) = $tmp463;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
// unreffing REF($1157:org.pandalanguage.pandac.IR.Statement)
// line 102
org$pandalanguage$pandac$IR$Value* $tmp464 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp465 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp466 = *(&local16);
org$pandalanguage$pandac$IR$Value* $tmp467 = *(&local13);
panda$core$Bit $tmp468 = panda$core$Bit$init$builtin_bit($tmp467 != NULL);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block98; else goto block99;
block99:;
panda$core$Int64 $tmp470 = (panda$core$Int64) {102};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s471, $tmp470, &$s472);
abort(); // unreachable
block98:;
$fn474 $tmp473 = ($fn474) $tmp467->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp475 = $tmp473($tmp467);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp464, $tmp465, $tmp466, $tmp475);
org$pandalanguage$pandac$Compiler$compileUnref$org$pandalanguage$pandac$IR$Value(param0, $tmp464);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
// unreffing REF($1189:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
// unreffing REF($1176:org.pandalanguage.pandac.IR.Value)
goto block91;
block91:;
// line 104
org$pandalanguage$pandac$IR* $tmp476 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp477 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp478 = (panda$core$Int64) {23};
org$pandalanguage$pandac$IR$Value* $tmp479 = *(&local13);
panda$core$Bit $tmp480 = panda$core$Bit$init$builtin_bit($tmp479 != NULL);
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block100; else goto block101;
block101:;
panda$core$Int64 $tmp482 = (panda$core$Int64) {104};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s483, $tmp482, &$s484);
abort(); // unreachable
block100:;
panda$core$Bit $tmp485 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block102; else goto block103;
block103:;
panda$core$Int64 $tmp487 = (panda$core$Int64) {104};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s488, $tmp487, &$s489);
abort(); // unreachable
block102:;
org$pandalanguage$pandac$IR$Value* $tmp490 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp477, $tmp478, param1, $tmp479, param2, $tmp490);
$fn492 $tmp491 = ($fn492) $tmp476->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp493 = $tmp491($tmp476, $tmp477);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
// unreffing REF($1201:org.pandalanguage.pandac.IR.Statement)
// line 105
org$pandalanguage$pandac$Pair* $tmp494 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp495 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp496;
$tmp496 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp496->value = $tmp495;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp494, ((panda$core$Object*) $tmp496), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
// unreffing REF($1231:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
// unreffing REF($1228:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp497 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
// unreffing indexValue
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp498 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
// unreffing value
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp499 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
// unreffing index
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp500 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
// unreffing pointerType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp501 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp494;
block78:;
// line 108
panda$core$Bit $tmp502 = panda$core$Bit$init$builtin_bit(false);
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block104; else goto block105;
block105:;
panda$core$Int64 $tmp504 = (panda$core$Int64) {108};
org$pandalanguage$pandac$MethodDecl** $tmp505 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp506 = *$tmp505;
panda$core$String** $tmp507 = &((org$pandalanguage$pandac$Symbol*) $tmp506)->name;
panda$core$String* $tmp508 = *$tmp507;
panda$core$String* $tmp509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s510, $tmp508);
panda$core$String* $tmp511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp509, &$s512);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s513, $tmp504, $tmp511);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
// unreffing REF($1279:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
// unreffing REF($1278:panda.core.String)
abort(); // unreachable
block104:;
goto block14;
block14:;
panda$core$Bit $tmp514 = panda$core$Bit$init$builtin_bit(false);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block106; else goto block107;
block107:;
panda$core$Int64 $tmp516 = (panda$core$Int64) {22};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s517, $tmp516, &$s518);
abort(); // unreachable
block106:;
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
ITable* $tmp519 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp519->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp519 = $tmp519->next;
}
$fn521 $tmp520 = $tmp519->methods[0];
panda$core$Int64 $tmp522 = $tmp520(((panda$collections$CollectionView*) param4));
panda$core$Int64 $tmp523 = (panda$core$Int64) {1};
int64_t $tmp524 = $tmp522.value;
int64_t $tmp525 = $tmp523.value;
bool $tmp526 = $tmp524 != $tmp525;
panda$core$Bit $tmp527 = (panda$core$Bit) {$tmp526};
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block1; else goto block2;
block1:;
// line 119
org$pandalanguage$pandac$Pair* $tmp529 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp530 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp531;
$tmp531 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp531->value = $tmp530;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp529, ((panda$core$Object*) $tmp531), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
// unreffing REF($15:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
// unreffing REF($12:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
return $tmp529;
block2:;
// line 121
org$pandalanguage$pandac$IR$Value* $tmp532 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, param5);
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
org$pandalanguage$pandac$IR$Value* $tmp533 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
*(&local0) = $tmp532;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
// unreffing REF($29:org.pandalanguage.pandac.IR.Value?)
// line 122
org$pandalanguage$pandac$IR$Value* $tmp534 = *(&local0);
panda$core$Bit $tmp535 = panda$core$Bit$init$builtin_bit($tmp534 == NULL);
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block3; else goto block4;
block3:;
// line 123
org$pandalanguage$pandac$Pair* $tmp537 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp538 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp539;
$tmp539 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp539->value = $tmp538;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp537, ((panda$core$Object*) $tmp539), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
// unreffing REF($50:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
// unreffing REF($47:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp540 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
// unreffing left
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp537;
block4:;
// line 125
panda$core$Int64 $tmp541 = (panda$core$Int64) {0};
ITable* $tmp542 = param4->$class->itable;
while ($tmp542->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp542 = $tmp542->next;
}
$fn544 $tmp543 = $tmp542->methods[0];
panda$core$Object* $tmp545 = $tmp543(param4, $tmp541);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp546 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp547 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp546, $tmp547, param5);
org$pandalanguage$pandac$IR$Value* $tmp548 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp545), $tmp546);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
org$pandalanguage$pandac$IR$Value* $tmp549 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
*(&local1) = $tmp548;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
// unreffing REF($76:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
// unreffing REF($73:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp545);
// unreffing REF($71:panda.collections.ListView.T)
// line 126
org$pandalanguage$pandac$IR$Value* $tmp550 = *(&local1);
panda$core$Bit $tmp551 = panda$core$Bit$init$builtin_bit($tmp550 == NULL);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block5; else goto block6;
block5:;
// line 127
org$pandalanguage$pandac$Pair* $tmp553 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp554 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp555;
$tmp555 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp555->value = $tmp554;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp553, ((panda$core$Object*) $tmp555), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp553));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
// unreffing REF($103:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp553));
// unreffing REF($100:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp556 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
// unreffing right
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp557 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
// unreffing left
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp553;
block6:;
// line 129
org$pandalanguage$pandac$IR$Value* $tmp558 = *(&local0);
panda$core$Bit $tmp559 = panda$core$Bit$init$builtin_bit($tmp558 != NULL);
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp561 = (panda$core$Int64) {129};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s562, $tmp561, &$s563);
abort(); // unreachable
block7:;
org$pandalanguage$pandac$IR$Value* $tmp564 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp558);
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
org$pandalanguage$pandac$IR$Value* $tmp565 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
*(&local2) = $tmp564;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
// unreffing REF($135:org.pandalanguage.pandac.IR.Value)
// line 130
// line 131
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
// line 132
org$pandalanguage$pandac$Type* $tmp566 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp567 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(param6, $tmp566);
bool $tmp568 = $tmp567.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
// unreffing REF($150:org.pandalanguage.pandac.Type)
if ($tmp568) goto block9; else goto block11;
block9:;
// line 133
org$pandalanguage$pandac$Type* $tmp569 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp569));
org$pandalanguage$pandac$Type* $tmp570 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
*(&local4) = $tmp569;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp569));
// unreffing REF($158:org.pandalanguage.pandac.Type)
goto block10;
block11:;
// line 1
// line 136
org$pandalanguage$pandac$IR$Value* $tmp571 = *(&local2);
$fn573 $tmp572 = ($fn573) $tmp571->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp574 = $tmp572($tmp571);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
org$pandalanguage$pandac$Type* $tmp575 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp575));
*(&local4) = $tmp574;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
// unreffing REF($173:org.pandalanguage.pandac.Type)
goto block10;
block10:;
// line 138
org$pandalanguage$pandac$IR** $tmp576 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp577 = *$tmp576;
org$pandalanguage$pandac$IR$Statement* $tmp578 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp579 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Value* $tmp580 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp581 = *(&local1);
panda$core$Bit $tmp582 = panda$core$Bit$init$builtin_bit($tmp581 != NULL);
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp584 = (panda$core$Int64) {139};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s585, $tmp584, &$s586);
abort(); // unreachable
block12:;
org$pandalanguage$pandac$IR$Value* $tmp587 = org$pandalanguage$pandac$Compiler$extractBuiltinInt$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp581);
org$pandalanguage$pandac$Type* $tmp588 = *(&local4);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type($tmp578, $tmp579, param1, $tmp580, param3, $tmp587, $tmp588);
$fn590 $tmp589 = ($fn590) $tmp577->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp591 = $tmp589($tmp577, $tmp578);
*(&local3) = $tmp591;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp587));
// unreffing REF($199:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
// unreffing REF($187:org.pandalanguage.pandac.IR.Statement)
// line 140
panda$collections$Array* $tmp592 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp592);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
panda$collections$Array* $tmp593 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp593));
*(&local5) = $tmp592;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
// unreffing REF($212:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 141
panda$collections$Array* $tmp594 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp595 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp596 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp597 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp598 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp599 = *(&local3);
org$pandalanguage$pandac$Type* $tmp600 = *(&local4);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp597, $tmp598, $tmp599, $tmp600);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp595, $tmp596, param1, $tmp597);
panda$collections$Array$add$panda$collections$Array$T($tmp594, ((panda$core$Object*) $tmp595));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
// unreffing REF($230:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp595));
// unreffing REF($228:org.pandalanguage.pandac.ASTNode)
// line 142
org$pandalanguage$pandac$IR$Value* $tmp601 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp602 = (panda$core$Int64) {14};
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp601, $tmp602, param6);
panda$collections$Array* $tmp603 = *(&local5);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp604 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp605 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp604, $tmp605, param6);
org$pandalanguage$pandac$IR$Value* $tmp606 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp601, ((panda$collections$ListView*) $tmp603), $tmp604);
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
org$pandalanguage$pandac$IR$Value* $tmp607 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
*(&local6) = $tmp606;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
// unreffing REF($253:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
// unreffing REF($250:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
// unreffing REF($245:org.pandalanguage.pandac.IR.Value)
// line 144
org$pandalanguage$pandac$IR$Value* $tmp608 = *(&local6);
panda$core$Bit $tmp609 = panda$core$Bit$init$builtin_bit($tmp608 != NULL);
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp611 = (panda$core$Int64) {144};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s612, $tmp611);
abort(); // unreachable
block14:;
// line 145
org$pandalanguage$pandac$Pair* $tmp613 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp614 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp615;
$tmp615 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp615->value = $tmp614;
org$pandalanguage$pandac$IR$Value* $tmp616 = *(&local6);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp613, ((panda$core$Object*) $tmp615), ((panda$core$Object*) $tmp616));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp613));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
// unreffing REF($283:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp613));
// unreffing REF($280:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp617 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
// unreffing construct
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp618 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
// unreffing constructArgs
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp619 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
// unreffing builtinResultType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp620 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
// unreffing builtinLeft
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp621 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
// unreffing right
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp622 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
// unreffing left
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp613;

}
org$pandalanguage$pandac$Pair* org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$MethodRef* param3, panda$collections$ListView* param4) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local2;
// line 152
org$pandalanguage$pandac$MethodDecl** $tmp623 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp624 = *$tmp623;
panda$core$String** $tmp625 = &((org$pandalanguage$pandac$Symbol*) $tmp624)->name;
panda$core$String* $tmp626 = *$tmp625;
panda$core$Bit $tmp627 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp626, &$s628);
bool $tmp629 = $tmp627.value;
if ($tmp629) goto block2; else goto block3;
block2:;
// line 154
org$pandalanguage$pandac$MethodDecl** $tmp630 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp631 = *$tmp630;
panda$collections$Array** $tmp632 = &$tmp631->parameters;
panda$collections$Array* $tmp633 = *$tmp632;
ITable* $tmp634 = ((panda$collections$CollectionView*) $tmp633)->$class->itable;
while ($tmp634->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp634 = $tmp634->next;
}
$fn636 $tmp635 = $tmp634->methods[0];
panda$core$Int64 $tmp637 = $tmp635(((panda$collections$CollectionView*) $tmp633));
panda$core$Int64 $tmp638 = (panda$core$Int64) {1};
panda$core$Bit $tmp639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp637, $tmp638);
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp641 = (panda$core$Int64) {154};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s642, $tmp641);
abort(); // unreachable
block4:;
// line 155
ITable* $tmp643 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp643->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp643 = $tmp643->next;
}
$fn645 $tmp644 = $tmp643->methods[0];
panda$core$Int64 $tmp646 = $tmp644(((panda$collections$CollectionView*) param4));
panda$core$Int64 $tmp647 = (panda$core$Int64) {1};
panda$core$Bit $tmp648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp646, $tmp647);
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp650 = (panda$core$Int64) {155};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s651, $tmp650);
abort(); // unreachable
block6:;
// line 156
org$pandalanguage$pandac$MethodDecl** $tmp652 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp653 = *$tmp652;
panda$collections$Array** $tmp654 = &$tmp653->parameters;
panda$collections$Array* $tmp655 = *$tmp654;
panda$core$Int64 $tmp656 = (panda$core$Int64) {0};
panda$core$Object* $tmp657 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp655, $tmp656);
org$pandalanguage$pandac$Type** $tmp658 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp657)->type;
org$pandalanguage$pandac$Type* $tmp659 = *$tmp658;
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
org$pandalanguage$pandac$Type* $tmp660 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
*(&local0) = $tmp659;
panda$core$Panda$unref$panda$core$Object$Q($tmp657);
// unreffing REF($42:panda.collections.Array.T)
// line 157
org$pandalanguage$pandac$Type* $tmp661 = *(&local0);
panda$core$Bit $tmp662 = org$pandalanguage$pandac$Type$get_isBuiltinNumber$R$panda$core$Bit($tmp661);
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block8; else goto block9;
block8:;
// line 158
panda$core$Int64 $tmp664 = (panda$core$Int64) {0};
ITable* $tmp665 = param4->$class->itable;
while ($tmp665->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp665 = $tmp665->next;
}
$fn667 $tmp666 = $tmp665->methods[0];
panda$core$Object* $tmp668 = $tmp666(param4, $tmp664);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp669 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp670 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp671 = *(&local0);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp669, $tmp670, $tmp671);
org$pandalanguage$pandac$IR$Value* $tmp672 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp668), $tmp669);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
org$pandalanguage$pandac$IR$Value* $tmp673 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp673));
*(&local1) = $tmp672;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
// unreffing REF($71:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
// unreffing REF($67:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp668);
// unreffing REF($65:panda.collections.ListView.T)
// line 159
org$pandalanguage$pandac$IR$Value* $tmp674 = *(&local1);
panda$core$Bit $tmp675 = panda$core$Bit$init$builtin_bit($tmp674 != NULL);
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block10; else goto block11;
block10:;
// line 160
org$pandalanguage$pandac$IR** $tmp677 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp678 = *$tmp677;
org$pandalanguage$pandac$IR$Statement* $tmp679 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp680 = (panda$core$Int64) {7};
org$pandalanguage$pandac$MethodDecl** $tmp681 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp682 = *$tmp681;
panda$core$Weak** $tmp683 = &$tmp682->owner;
panda$core$Weak* $tmp684 = *$tmp683;
panda$core$Object* $tmp685 = panda$core$Weak$get$R$panda$core$Weak$T($tmp684);
panda$collections$Array* $tmp686 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp687 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp686, $tmp687);
org$pandalanguage$pandac$IR$Value* $tmp688 = *(&local1);
panda$core$Bit $tmp689 = panda$core$Bit$init$builtin_bit($tmp688 != NULL);
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp691 = (panda$core$Int64) {161};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s692, $tmp691, &$s693);
abort(); // unreachable
block12:;
panda$collections$Array$add$panda$collections$Array$T($tmp686, ((panda$core$Object*) $tmp688));
org$pandalanguage$pandac$FixedArray* $tmp694 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp686);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT($tmp679, $tmp680, param1, ((org$pandalanguage$pandac$ClassDecl*) $tmp685), $tmp694);
$fn696 $tmp695 = ($fn696) $tmp678->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp697 = $tmp695($tmp678, $tmp679);
*(&local2) = $tmp697;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
// unreffing REF($123:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
// unreffing REF($106:panda.collections.Array<org.pandalanguage.pandac.IR.Value>)
panda$core$Panda$unref$panda$core$Object$Q($tmp685);
// unreffing REF($104:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp679));
// unreffing REF($97:org.pandalanguage.pandac.IR.Statement)
// line 162
org$pandalanguage$pandac$Pair* $tmp698 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp699 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp700;
$tmp700 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp700->value = $tmp699;
org$pandalanguage$pandac$IR$Value* $tmp701 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp702 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp703 = *(&local2);
org$pandalanguage$pandac$MethodDecl** $tmp704 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp705 = *$tmp704;
panda$core$Weak** $tmp706 = &$tmp705->owner;
panda$core$Weak* $tmp707 = *$tmp706;
panda$core$Object* $tmp708 = panda$core$Weak$get$R$panda$core$Weak$T($tmp707);
org$pandalanguage$pandac$Type** $tmp709 = &((org$pandalanguage$pandac$ClassDecl*) $tmp708)->type;
org$pandalanguage$pandac$Type* $tmp710 = *$tmp709;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp701, $tmp702, $tmp703, $tmp710);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp698, ((panda$core$Object*) $tmp700), ((panda$core$Object*) $tmp701));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
panda$core$Panda$unref$panda$core$Object$Q($tmp708);
// unreffing REF($154:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
// unreffing REF($146:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
// unreffing REF($145:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
// unreffing REF($142:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp711 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp712 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
// unreffing paramType
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp698;
block11:;
org$pandalanguage$pandac$IR$Value* $tmp713 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block9;
block9:;
org$pandalanguage$pandac$Type* $tmp714 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp714));
// unreffing paramType
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block3:;
panda$core$Bit $tmp715 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp626, &$s716);
bool $tmp717 = $tmp715.value;
if ($tmp717) goto block14; else goto block15;
block14:;
// line 167
panda$core$Bit $tmp718 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp720 = (panda$core$Int64) {167};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s721, $tmp720, &$s722);
abort(); // unreachable
block16:;
panda$core$Int64 $tmp723 = (panda$core$Int64) {52};
org$pandalanguage$pandac$parser$Token$Kind $tmp724 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp723);
org$pandalanguage$pandac$Type* $tmp725 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Type* $tmp726 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp727 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp724, param4, $tmp725, $tmp726);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp727));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp727));
// unreffing REF($215:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp726));
// unreffing REF($214:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
// unreffing REF($213:org.pandalanguage.pandac.Type)
return $tmp727;
block15:;
panda$core$Bit $tmp728 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp626, &$s729);
bool $tmp730 = $tmp728.value;
if ($tmp730) goto block18; else goto block19;
block18:;
// line 171
panda$core$Bit $tmp731 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp732 = $tmp731.value;
if ($tmp732) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp733 = (panda$core$Int64) {171};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s734, $tmp733, &$s735);
abort(); // unreachable
block20:;
panda$core$Int64 $tmp736 = (panda$core$Int64) {53};
org$pandalanguage$pandac$parser$Token$Kind $tmp737 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp736);
org$pandalanguage$pandac$Type* $tmp738 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Type* $tmp739 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp740 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp737, param4, $tmp738, $tmp739);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
// unreffing REF($244:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp739));
// unreffing REF($243:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp738));
// unreffing REF($242:org.pandalanguage.pandac.Type)
return $tmp740;
block19:;
panda$core$Bit $tmp741 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp626, &$s742);
bool $tmp743 = $tmp741.value;
if ($tmp743) goto block22; else goto block23;
block22:;
// line 175
panda$core$Bit $tmp744 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp746 = (panda$core$Int64) {175};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s747, $tmp746, &$s748);
abort(); // unreachable
block24:;
panda$core$Int64 $tmp749 = (panda$core$Int64) {54};
org$pandalanguage$pandac$parser$Token$Kind $tmp750 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp749);
org$pandalanguage$pandac$Type* $tmp751 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Type* $tmp752 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp753 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp750, param4, $tmp751, $tmp752);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
// unreffing REF($273:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp752));
// unreffing REF($272:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp751));
// unreffing REF($271:org.pandalanguage.pandac.Type)
return $tmp753;
block23:;
panda$core$Bit $tmp754 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp626, &$s755);
bool $tmp756 = $tmp754.value;
if ($tmp756) goto block26; else goto block27;
block26:;
// line 179
panda$core$Bit $tmp757 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp759 = (panda$core$Int64) {179};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s760, $tmp759, &$s761);
abort(); // unreachable
block28:;
panda$core$Int64 $tmp762 = (panda$core$Int64) {56};
org$pandalanguage$pandac$parser$Token$Kind $tmp763 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp762);
org$pandalanguage$pandac$Type* $tmp764 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Type* $tmp765 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp766 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp763, param4, $tmp764, $tmp765);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
// unreffing REF($302:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
// unreffing REF($301:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
// unreffing REF($300:org.pandalanguage.pandac.Type)
return $tmp766;
block27:;
panda$core$Bit $tmp767 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp626, &$s768);
bool $tmp769 = $tmp767.value;
if ($tmp769) goto block30; else goto block31;
block30:;
// line 183
panda$core$Bit $tmp770 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp772 = (panda$core$Int64) {183};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s773, $tmp772, &$s774);
abort(); // unreachable
block32:;
panda$core$Int64 $tmp775 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp776 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp775);
org$pandalanguage$pandac$MethodDecl** $tmp777 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp778 = *$tmp777;
panda$core$Weak** $tmp779 = &$tmp778->owner;
panda$core$Weak* $tmp780 = *$tmp779;
panda$core$Object* $tmp781 = panda$core$Weak$get$R$panda$core$Weak$T($tmp780);
org$pandalanguage$pandac$Type** $tmp782 = &((org$pandalanguage$pandac$ClassDecl*) $tmp781)->type;
org$pandalanguage$pandac$Type* $tmp783 = *$tmp782;
org$pandalanguage$pandac$MethodDecl** $tmp784 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp785 = *$tmp784;
panda$collections$Array** $tmp786 = &$tmp785->parameters;
panda$collections$Array* $tmp787 = *$tmp786;
panda$core$Int64 $tmp788 = (panda$core$Int64) {0};
panda$core$Object* $tmp789 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp787, $tmp788);
org$pandalanguage$pandac$Type** $tmp790 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp789)->type;
org$pandalanguage$pandac$Type* $tmp791 = *$tmp790;
panda$core$Bit $tmp792 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit $tmp793 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp794 = org$pandalanguage$pandac$Compiler$binaryType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$core$Bit$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp783, $tmp791, $tmp792, $tmp793);
org$pandalanguage$pandac$Type* $tmp795 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp796 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp776, param4, $tmp794, $tmp795);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
// unreffing REF($352:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp795));
// unreffing REF($351:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
// unreffing REF($350:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp789);
// unreffing REF($344:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp781);
// unreffing REF($334:panda.core.Weak.T)
return $tmp796;
block31:;
panda$core$Bit $tmp797 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp626, &$s798);
bool $tmp799 = $tmp797.value;
if ($tmp799) goto block34; else goto block35;
block34:;
// line 189
panda$core$Bit $tmp800 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp802 = (panda$core$Int64) {189};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s803, $tmp802, &$s804);
abort(); // unreachable
block36:;
panda$core$Int64 $tmp805 = (panda$core$Int64) {66};
org$pandalanguage$pandac$parser$Token$Kind $tmp806 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp805);
org$pandalanguage$pandac$MethodDecl** $tmp807 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp808 = *$tmp807;
panda$core$Weak** $tmp809 = &$tmp808->owner;
panda$core$Weak* $tmp810 = *$tmp809;
panda$core$Object* $tmp811 = panda$core$Weak$get$R$panda$core$Weak$T($tmp810);
org$pandalanguage$pandac$Type** $tmp812 = &((org$pandalanguage$pandac$ClassDecl*) $tmp811)->type;
org$pandalanguage$pandac$Type* $tmp813 = *$tmp812;
org$pandalanguage$pandac$MethodDecl** $tmp814 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp815 = *$tmp814;
panda$collections$Array** $tmp816 = &$tmp815->parameters;
panda$collections$Array* $tmp817 = *$tmp816;
panda$core$Int64 $tmp818 = (panda$core$Int64) {0};
panda$core$Object* $tmp819 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp817, $tmp818);
org$pandalanguage$pandac$Type** $tmp820 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp819)->type;
org$pandalanguage$pandac$Type* $tmp821 = *$tmp820;
panda$core$Bit $tmp822 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit $tmp823 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp824 = org$pandalanguage$pandac$Compiler$binaryType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$core$Bit$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp813, $tmp821, $tmp822, $tmp823);
org$pandalanguage$pandac$Type* $tmp825 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp826 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp806, param4, $tmp824, $tmp825);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
// unreffing REF($408:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp825));
// unreffing REF($407:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
// unreffing REF($406:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp819);
// unreffing REF($400:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp811);
// unreffing REF($390:panda.core.Weak.T)
return $tmp826;
block35:;
panda$core$Bit $tmp827 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp626, &$s828);
bool $tmp829 = $tmp827.value;
if ($tmp829) goto block38; else goto block39;
block38:;
// line 195
panda$core$Bit $tmp830 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp831 = $tmp830.value;
if ($tmp831) goto block40; else goto block41;
block41:;
panda$core$Int64 $tmp832 = (panda$core$Int64) {195};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s833, $tmp832, &$s834);
abort(); // unreachable
block40:;
panda$core$Int64 $tmp835 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp836 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp835);
org$pandalanguage$pandac$MethodDecl** $tmp837 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp838 = *$tmp837;
panda$core$Weak** $tmp839 = &$tmp838->owner;
panda$core$Weak* $tmp840 = *$tmp839;
panda$core$Object* $tmp841 = panda$core$Weak$get$R$panda$core$Weak$T($tmp840);
org$pandalanguage$pandac$Type** $tmp842 = &((org$pandalanguage$pandac$ClassDecl*) $tmp841)->type;
org$pandalanguage$pandac$Type* $tmp843 = *$tmp842;
org$pandalanguage$pandac$MethodDecl** $tmp844 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp845 = *$tmp844;
panda$collections$Array** $tmp846 = &$tmp845->parameters;
panda$collections$Array* $tmp847 = *$tmp846;
panda$core$Int64 $tmp848 = (panda$core$Int64) {0};
panda$core$Object* $tmp849 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp847, $tmp848);
org$pandalanguage$pandac$Type** $tmp850 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp849)->type;
org$pandalanguage$pandac$Type* $tmp851 = *$tmp850;
panda$core$Bit $tmp852 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit $tmp853 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp854 = org$pandalanguage$pandac$Compiler$binaryType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$core$Bit$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp843, $tmp851, $tmp852, $tmp853);
org$pandalanguage$pandac$Type* $tmp855 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp856 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp836, param4, $tmp854, $tmp855);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
// unreffing REF($464:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
// unreffing REF($463:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp854));
// unreffing REF($462:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp849);
// unreffing REF($456:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp841);
// unreffing REF($446:panda.core.Weak.T)
return $tmp856;
block39:;
panda$core$Bit $tmp857 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp626, &$s858);
bool $tmp859 = $tmp857.value;
if ($tmp859) goto block42; else goto block43;
block42:;
// line 201
panda$core$Bit $tmp860 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp861 = $tmp860.value;
if ($tmp861) goto block44; else goto block45;
block45:;
panda$core$Int64 $tmp862 = (panda$core$Int64) {201};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s863, $tmp862, &$s864);
abort(); // unreachable
block44:;
panda$core$Int64 $tmp865 = (panda$core$Int64) {65};
org$pandalanguage$pandac$parser$Token$Kind $tmp866 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp865);
org$pandalanguage$pandac$MethodDecl** $tmp867 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp868 = *$tmp867;
panda$core$Weak** $tmp869 = &$tmp868->owner;
panda$core$Weak* $tmp870 = *$tmp869;
panda$core$Object* $tmp871 = panda$core$Weak$get$R$panda$core$Weak$T($tmp870);
org$pandalanguage$pandac$Type** $tmp872 = &((org$pandalanguage$pandac$ClassDecl*) $tmp871)->type;
org$pandalanguage$pandac$Type* $tmp873 = *$tmp872;
org$pandalanguage$pandac$MethodDecl** $tmp874 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp875 = *$tmp874;
panda$collections$Array** $tmp876 = &$tmp875->parameters;
panda$collections$Array* $tmp877 = *$tmp876;
panda$core$Int64 $tmp878 = (panda$core$Int64) {0};
panda$core$Object* $tmp879 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp877, $tmp878);
org$pandalanguage$pandac$Type** $tmp880 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp879)->type;
org$pandalanguage$pandac$Type* $tmp881 = *$tmp880;
panda$core$Bit $tmp882 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit $tmp883 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp884 = org$pandalanguage$pandac$Compiler$binaryType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$core$Bit$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp873, $tmp881, $tmp882, $tmp883);
org$pandalanguage$pandac$Type* $tmp885 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp886 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp866, param4, $tmp884, $tmp885);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp886));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp886));
// unreffing REF($520:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp885));
// unreffing REF($519:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp884));
// unreffing REF($518:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp879);
// unreffing REF($512:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp871);
// unreffing REF($502:panda.core.Weak.T)
return $tmp886;
block43:;
panda$core$Bit $tmp887 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp626, &$s888);
bool $tmp889 = $tmp887.value;
if ($tmp889) goto block46; else goto block47;
block46:;
// line 207
panda$core$Bit $tmp890 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp891 = $tmp890.value;
if ($tmp891) goto block48; else goto block49;
block49:;
panda$core$Int64 $tmp892 = (panda$core$Int64) {207};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s893, $tmp892, &$s894);
abort(); // unreachable
block48:;
panda$core$Int64 $tmp895 = (panda$core$Int64) {59};
org$pandalanguage$pandac$parser$Token$Kind $tmp896 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp895);
org$pandalanguage$pandac$MethodDecl** $tmp897 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp898 = *$tmp897;
panda$core$Weak** $tmp899 = &$tmp898->owner;
panda$core$Weak* $tmp900 = *$tmp899;
panda$core$Object* $tmp901 = panda$core$Weak$get$R$panda$core$Weak$T($tmp900);
org$pandalanguage$pandac$Type** $tmp902 = &((org$pandalanguage$pandac$ClassDecl*) $tmp901)->type;
org$pandalanguage$pandac$Type* $tmp903 = *$tmp902;
org$pandalanguage$pandac$MethodDecl** $tmp904 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp905 = *$tmp904;
panda$collections$Array** $tmp906 = &$tmp905->parameters;
panda$collections$Array* $tmp907 = *$tmp906;
panda$core$Int64 $tmp908 = (panda$core$Int64) {0};
panda$core$Object* $tmp909 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp907, $tmp908);
org$pandalanguage$pandac$Type** $tmp910 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp909)->type;
org$pandalanguage$pandac$Type* $tmp911 = *$tmp910;
panda$core$Bit $tmp912 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit $tmp913 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp914 = org$pandalanguage$pandac$Compiler$binaryType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$core$Bit$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp903, $tmp911, $tmp912, $tmp913);
org$pandalanguage$pandac$Type* $tmp915 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp916 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp896, param4, $tmp914, $tmp915);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
// unreffing REF($576:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp915));
// unreffing REF($575:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp914));
// unreffing REF($574:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp909);
// unreffing REF($568:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp901);
// unreffing REF($558:panda.core.Weak.T)
return $tmp916;
block47:;
panda$core$Bit $tmp917 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp626, &$s918);
bool $tmp919 = $tmp917.value;
if ($tmp919) goto block50; else goto block1;
block50:;
// line 213
panda$core$Bit $tmp920 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp921 = $tmp920.value;
if ($tmp921) goto block51; else goto block52;
block52:;
panda$core$Int64 $tmp922 = (panda$core$Int64) {213};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s923, $tmp922, &$s924);
abort(); // unreachable
block51:;
panda$core$Int64 $tmp925 = (panda$core$Int64) {60};
org$pandalanguage$pandac$parser$Token$Kind $tmp926 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp925);
org$pandalanguage$pandac$MethodDecl** $tmp927 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp928 = *$tmp927;
panda$core$Weak** $tmp929 = &$tmp928->owner;
panda$core$Weak* $tmp930 = *$tmp929;
panda$core$Object* $tmp931 = panda$core$Weak$get$R$panda$core$Weak$T($tmp930);
org$pandalanguage$pandac$Type** $tmp932 = &((org$pandalanguage$pandac$ClassDecl*) $tmp931)->type;
org$pandalanguage$pandac$Type* $tmp933 = *$tmp932;
org$pandalanguage$pandac$MethodDecl** $tmp934 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp935 = *$tmp934;
panda$collections$Array** $tmp936 = &$tmp935->parameters;
panda$collections$Array* $tmp937 = *$tmp936;
panda$core$Int64 $tmp938 = (panda$core$Int64) {0};
panda$core$Object* $tmp939 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp937, $tmp938);
org$pandalanguage$pandac$Type** $tmp940 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp939)->type;
org$pandalanguage$pandac$Type* $tmp941 = *$tmp940;
panda$core$Bit $tmp942 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit $tmp943 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp944 = org$pandalanguage$pandac$Compiler$binaryType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$core$Bit$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp933, $tmp941, $tmp942, $tmp943);
org$pandalanguage$pandac$Type* $tmp945 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(param3);
org$pandalanguage$pandac$Pair* $tmp946 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp926, param4, $tmp944, $tmp945);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp946));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp946));
// unreffing REF($632:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp945));
// unreffing REF($631:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp944));
// unreffing REF($630:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp939);
// unreffing REF($624:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp931);
// unreffing REF($614:panda.core.Weak.T)
return $tmp946;
block1:;
// line 219
org$pandalanguage$pandac$Pair* $tmp947 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp948 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp949;
$tmp949 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp949->value = $tmp948;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp947, ((panda$core$Object*) $tmp949), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp949));
// unreffing REF($655:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
// unreffing REF($652:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
return $tmp947;

}
org$pandalanguage$pandac$Pair* org$pandalanguage$pandac$expression$Call$compileBitIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$MethodRef* param3, panda$collections$ListView* param4) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$IR$Statement$ID local2;
// line 226
org$pandalanguage$pandac$MethodDecl** $tmp950 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp951 = *$tmp950;
panda$core$String** $tmp952 = &((org$pandalanguage$pandac$Symbol*) $tmp951)->name;
panda$core$String* $tmp953 = *$tmp952;
panda$core$Bit $tmp954 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp953, &$s955);
bool $tmp956 = $tmp954.value;
if ($tmp956) goto block2; else goto block1;
block2:;
// line 228
org$pandalanguage$pandac$MethodDecl** $tmp957 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp958 = *$tmp957;
panda$collections$Array** $tmp959 = &$tmp958->parameters;
panda$collections$Array* $tmp960 = *$tmp959;
ITable* $tmp961 = ((panda$collections$CollectionView*) $tmp960)->$class->itable;
while ($tmp961->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp961 = $tmp961->next;
}
$fn963 $tmp962 = $tmp961->methods[0];
panda$core$Int64 $tmp964 = $tmp962(((panda$collections$CollectionView*) $tmp960));
panda$core$Int64 $tmp965 = (panda$core$Int64) {1};
panda$core$Bit $tmp966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp964, $tmp965);
bool $tmp967 = $tmp966.value;
if ($tmp967) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp968 = (panda$core$Int64) {228};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s969, $tmp968);
abort(); // unreachable
block3:;
// line 229
ITable* $tmp970 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp970->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp970 = $tmp970->next;
}
$fn972 $tmp971 = $tmp970->methods[0];
panda$core$Int64 $tmp973 = $tmp971(((panda$collections$CollectionView*) param4));
panda$core$Int64 $tmp974 = (panda$core$Int64) {1};
panda$core$Bit $tmp975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp973, $tmp974);
bool $tmp976 = $tmp975.value;
if ($tmp976) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp977 = (panda$core$Int64) {229};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s978, $tmp977);
abort(); // unreachable
block5:;
// line 230
org$pandalanguage$pandac$MethodDecl** $tmp979 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp980 = *$tmp979;
panda$collections$Array** $tmp981 = &$tmp980->parameters;
panda$collections$Array* $tmp982 = *$tmp981;
panda$core$Int64 $tmp983 = (panda$core$Int64) {0};
panda$core$Object* $tmp984 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp982, $tmp983);
org$pandalanguage$pandac$Type** $tmp985 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp984)->type;
org$pandalanguage$pandac$Type* $tmp986 = *$tmp985;
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
org$pandalanguage$pandac$Type* $tmp987 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
*(&local0) = $tmp986;
panda$core$Panda$unref$panda$core$Object$Q($tmp984);
// unreffing REF($42:panda.collections.Array.T)
// line 231
org$pandalanguage$pandac$Type* $tmp988 = *(&local0);
org$pandalanguage$pandac$Type* $tmp989 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp990 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp988, $tmp989);
bool $tmp991 = $tmp990.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp989));
// unreffing REF($58:org.pandalanguage.pandac.Type)
if ($tmp991) goto block7; else goto block8;
block7:;
// line 232
panda$core$Int64 $tmp992 = (panda$core$Int64) {0};
ITable* $tmp993 = param4->$class->itable;
while ($tmp993->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp993 = $tmp993->next;
}
$fn995 $tmp994 = $tmp993->methods[0];
panda$core$Object* $tmp996 = $tmp994(param4, $tmp992);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp997 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp998 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp999 = *(&local0);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp997, $tmp998, $tmp999);
org$pandalanguage$pandac$IR$Value* $tmp1000 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp996), $tmp997);
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
org$pandalanguage$pandac$IR$Value* $tmp1001 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
*(&local1) = $tmp1000;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
// unreffing REF($75:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
// unreffing REF($71:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp996);
// unreffing REF($69:panda.collections.ListView.T)
// line 233
org$pandalanguage$pandac$IR$Value* $tmp1002 = *(&local1);
panda$core$Bit $tmp1003 = panda$core$Bit$init$builtin_bit($tmp1002 != NULL);
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block9; else goto block10;
block9:;
// line 234
org$pandalanguage$pandac$IR** $tmp1005 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp1006 = *$tmp1005;
org$pandalanguage$pandac$IR$Statement* $tmp1007 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1008 = (panda$core$Int64) {7};
org$pandalanguage$pandac$MethodDecl** $tmp1009 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp1010 = *$tmp1009;
panda$core$Weak** $tmp1011 = &$tmp1010->owner;
panda$core$Weak* $tmp1012 = *$tmp1011;
panda$core$Object* $tmp1013 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1012);
panda$collections$Array* $tmp1014 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp1015 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp1014, $tmp1015);
org$pandalanguage$pandac$IR$Value* $tmp1016 = *(&local1);
panda$core$Bit $tmp1017 = panda$core$Bit$init$builtin_bit($tmp1016 != NULL);
bool $tmp1018 = $tmp1017.value;
if ($tmp1018) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp1019 = (panda$core$Int64) {235};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1020, $tmp1019, &$s1021);
abort(); // unreachable
block11:;
panda$collections$Array$add$panda$collections$Array$T($tmp1014, ((panda$core$Object*) $tmp1016));
org$pandalanguage$pandac$FixedArray* $tmp1022 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp1014);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT($tmp1007, $tmp1008, param1, ((org$pandalanguage$pandac$ClassDecl*) $tmp1013), $tmp1022);
$fn1024 $tmp1023 = ($fn1024) $tmp1006->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1025 = $tmp1023($tmp1006, $tmp1007);
*(&local2) = $tmp1025;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
// unreffing REF($127:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
// unreffing REF($110:panda.collections.Array<org.pandalanguage.pandac.IR.Value>)
panda$core$Panda$unref$panda$core$Object$Q($tmp1013);
// unreffing REF($108:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1007));
// unreffing REF($101:org.pandalanguage.pandac.IR.Statement)
// line 236
org$pandalanguage$pandac$Pair* $tmp1026 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp1027 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp1028;
$tmp1028 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp1028->value = $tmp1027;
org$pandalanguage$pandac$IR$Value* $tmp1029 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1030 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp1031 = *(&local2);
org$pandalanguage$pandac$MethodDecl** $tmp1032 = &param3->value;
org$pandalanguage$pandac$MethodDecl* $tmp1033 = *$tmp1032;
panda$core$Weak** $tmp1034 = &$tmp1033->owner;
panda$core$Weak* $tmp1035 = *$tmp1034;
panda$core$Object* $tmp1036 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1035);
org$pandalanguage$pandac$Type** $tmp1037 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1036)->type;
org$pandalanguage$pandac$Type* $tmp1038 = *$tmp1037;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp1029, $tmp1030, $tmp1031, $tmp1038);
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp1026, ((panda$core$Object*) $tmp1028), ((panda$core$Object*) $tmp1029));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1026));
panda$core$Panda$unref$panda$core$Object$Q($tmp1036);
// unreffing REF($158:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1029));
// unreffing REF($150:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
// unreffing REF($149:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1026));
// unreffing REF($146:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
org$pandalanguage$pandac$IR$Value* $tmp1039 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1039));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp1040 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1040));
// unreffing paramType
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1026;
block10:;
org$pandalanguage$pandac$IR$Value* $tmp1041 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1041));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block8;
block8:;
org$pandalanguage$pandac$Type* $tmp1042 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1042));
// unreffing paramType
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block1:;
// line 241
org$pandalanguage$pandac$Pair* $tmp1043 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp1044 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp1045;
$tmp1045 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp1045->value = $tmp1044;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp1043, ((panda$core$Object*) $tmp1045), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1043));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1045));
// unreffing REF($207:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1043));
// unreffing REF($204:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
return $tmp1043;

}
org$pandalanguage$pandac$Pair* org$pandalanguage$pandac$expression$Call$compileIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, org$pandalanguage$pandac$MethodRef* param3, panda$collections$ListView* param4) {

panda$core$Bit local0;
panda$core$Bit local1;
// line 247
org$pandalanguage$pandac$Type** $tmp1046 = &param3->target;
org$pandalanguage$pandac$Type* $tmp1047 = *$tmp1046;
panda$core$Bit $tmp1048 = org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit($tmp1047);
bool $tmp1049 = $tmp1048.value;
if ($tmp1049) goto block3; else goto block4;
block3:;
*(&local0) = $tmp1048;
goto block5;
block4:;
org$pandalanguage$pandac$Type** $tmp1050 = &param3->target;
org$pandalanguage$pandac$Type* $tmp1051 = *$tmp1050;
panda$core$Bit $tmp1052 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit($tmp1051);
bool $tmp1053 = $tmp1052.value;
if ($tmp1053) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Type** $tmp1054 = &param3->target;
org$pandalanguage$pandac$Type* $tmp1055 = *$tmp1054;
org$pandalanguage$pandac$FixedArray** $tmp1056 = &$tmp1055->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1057 = *$tmp1056;
panda$core$Bit $tmp1058 = panda$core$Bit$init$builtin_bit($tmp1057 != NULL);
bool $tmp1059 = $tmp1058.value;
if ($tmp1059) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp1060 = (panda$core$Int64) {247};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1061, $tmp1060, &$s1062);
abort(); // unreachable
block9:;
panda$core$Int64 $tmp1063 = (panda$core$Int64) {1};
panda$core$Object* $tmp1064 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1057, $tmp1063);
panda$core$Bit $tmp1065 = org$pandalanguage$pandac$Type$get_isPointer$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1064));
panda$core$Panda$unref$panda$core$Object$Q($tmp1064);
// unreffing REF($27:org.pandalanguage.pandac.FixedArray.T)
*(&local1) = $tmp1065;
goto block8;
block7:;
*(&local1) = $tmp1052;
goto block8;
block8:;
panda$core$Bit $tmp1066 = *(&local1);
*(&local0) = $tmp1066;
goto block5;
block5:;
panda$core$Bit $tmp1067 = *(&local0);
bool $tmp1068 = $tmp1067.value;
if ($tmp1068) goto block1; else goto block2;
block1:;
// line 248
org$pandalanguage$pandac$Pair* $tmp1069 = org$pandalanguage$pandac$expression$Call$compilePointerIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1069));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1069));
// unreffing REF($44:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
return $tmp1069;
block2:;
// line 250
org$pandalanguage$pandac$Type** $tmp1070 = &param3->target;
org$pandalanguage$pandac$Type* $tmp1071 = *$tmp1070;
panda$core$Bit $tmp1072 = org$pandalanguage$pandac$Type$get_isNumber$R$panda$core$Bit($tmp1071);
bool $tmp1073 = $tmp1072.value;
if ($tmp1073) goto block11; else goto block12;
block11:;
// line 251
org$pandalanguage$pandac$Pair* $tmp1074 = org$pandalanguage$pandac$expression$Call$compileNumberIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1074));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1074));
// unreffing REF($58:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
return $tmp1074;
block12:;
// line 253
org$pandalanguage$pandac$Type** $tmp1075 = &param3->target;
org$pandalanguage$pandac$Type* $tmp1076 = *$tmp1075;
org$pandalanguage$pandac$Type* $tmp1077 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1078 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1076, $tmp1077);
bool $tmp1079 = $tmp1078.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1077));
// unreffing REF($68:org.pandalanguage.pandac.Type)
if ($tmp1079) goto block13; else goto block14;
block13:;
// line 254
org$pandalanguage$pandac$Pair* $tmp1080 = org$pandalanguage$pandac$expression$Call$compileBitIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1080));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1080));
// unreffing REF($76:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
return $tmp1080;
block14:;
// line 256
org$pandalanguage$pandac$Pair* $tmp1081 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$core$Bit $tmp1082 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp1083;
$tmp1083 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp1083->value = $tmp1082;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp1081, ((panda$core$Object*) $tmp1083), ((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1081));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1083));
// unreffing REF($87:org.pandalanguage.pandac.Pair.A)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1081));
// unreffing REF($84:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
return $tmp1081;

}
panda$collections$ListView* org$pandalanguage$pandac$expression$Call$findGenericParameters$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTpanda$collections$ListView$LTpanda$core$Int64$GT$GT$Q(org$pandalanguage$pandac$MethodDecl* param0, org$pandalanguage$pandac$Type* param1) {

panda$collections$Array* local0 = NULL;
panda$core$Int64 local1;
panda$collections$ListView* local2 = NULL;
panda$collections$ListView* local3 = NULL;
panda$collections$Array* local4 = NULL;
// line 270
org$pandalanguage$pandac$FixedArray** $tmp1084 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1085 = *$tmp1084;
panda$core$Bit $tmp1086 = panda$core$Bit$init$builtin_bit($tmp1085 == NULL);
bool $tmp1087 = $tmp1086.value;
if ($tmp1087) goto block1; else goto block2;
block1:;
// line 271
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) NULL)));
return ((panda$collections$ListView*) NULL);
block2:;
// line 273
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
panda$collections$Array* $tmp1088 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1088));
*(&local0) = ((panda$collections$Array*) NULL);
// line 274
panda$core$Int64 $tmp1089 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FixedArray** $tmp1090 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1091 = *$tmp1090;
panda$core$Bit $tmp1092 = panda$core$Bit$init$builtin_bit($tmp1091 != NULL);
bool $tmp1093 = $tmp1092.value;
if ($tmp1093) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp1094 = (panda$core$Int64) {274};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1095, $tmp1094, &$s1096);
abort(); // unreachable
block3:;
ITable* $tmp1097 = ((panda$collections$CollectionView*) $tmp1091)->$class->itable;
while ($tmp1097->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1097 = $tmp1097->next;
}
$fn1099 $tmp1098 = $tmp1097->methods[0];
panda$core$Int64 $tmp1100 = $tmp1098(((panda$collections$CollectionView*) $tmp1091));
panda$core$Bit $tmp1101 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1102 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1089, $tmp1100, $tmp1101);
panda$core$Int64 $tmp1103 = $tmp1102.min;
*(&local1) = $tmp1103;
panda$core$Int64 $tmp1104 = $tmp1102.max;
panda$core$Bit $tmp1105 = $tmp1102.inclusive;
bool $tmp1106 = $tmp1105.value;
panda$core$Int64 $tmp1107 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1108 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1107);
if ($tmp1106) goto block8; else goto block9;
block8:;
int64_t $tmp1109 = $tmp1103.value;
int64_t $tmp1110 = $tmp1104.value;
bool $tmp1111 = $tmp1109 <= $tmp1110;
panda$core$Bit $tmp1112 = (panda$core$Bit) {$tmp1111};
bool $tmp1113 = $tmp1112.value;
if ($tmp1113) goto block5; else goto block6;
block9:;
int64_t $tmp1114 = $tmp1103.value;
int64_t $tmp1115 = $tmp1104.value;
bool $tmp1116 = $tmp1114 < $tmp1115;
panda$core$Bit $tmp1117 = (panda$core$Bit) {$tmp1116};
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block5; else goto block6;
block5:;
// line 275
org$pandalanguage$pandac$FixedArray** $tmp1119 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1120 = *$tmp1119;
panda$core$Bit $tmp1121 = panda$core$Bit$init$builtin_bit($tmp1120 != NULL);
bool $tmp1122 = $tmp1121.value;
if ($tmp1122) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp1123 = (panda$core$Int64) {275};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1124, $tmp1123, &$s1125);
abort(); // unreachable
block12:;
panda$core$Int64 $tmp1126 = *(&local1);
panda$core$Object* $tmp1127 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1120, $tmp1126);
org$pandalanguage$pandac$Type$Kind* $tmp1128 = &((org$pandalanguage$pandac$Type*) $tmp1127)->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1129 = *$tmp1128;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1130;
$tmp1130 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1130->value = $tmp1129;
panda$core$Int64 $tmp1131 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp1132 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1131);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1133;
$tmp1133 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1133->value = $tmp1132;
ITable* $tmp1134 = ((panda$core$Equatable*) $tmp1130)->$class->itable;
while ($tmp1134->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1134 = $tmp1134->next;
}
$fn1136 $tmp1135 = $tmp1134->methods[0];
panda$core$Bit $tmp1137 = $tmp1135(((panda$core$Equatable*) $tmp1130), ((panda$core$Equatable*) $tmp1133));
bool $tmp1138 = $tmp1137.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1133)));
// unreffing REF($76:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1130)));
// unreffing REF($72:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q($tmp1127);
// unreffing REF($68:org.pandalanguage.pandac.FixedArray.T)
if ($tmp1138) goto block10; else goto block14;
block10:;
// line 276
org$pandalanguage$pandac$FixedArray** $tmp1139 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1140 = *$tmp1139;
panda$core$Bit $tmp1141 = panda$core$Bit$init$builtin_bit($tmp1140 != NULL);
bool $tmp1142 = $tmp1141.value;
if ($tmp1142) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp1143 = (panda$core$Int64) {276};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1144, $tmp1143, &$s1145);
abort(); // unreachable
block17:;
panda$core$Int64 $tmp1146 = *(&local1);
panda$core$Object* $tmp1147 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1140, $tmp1146);
panda$core$Weak** $tmp1148 = &((org$pandalanguage$pandac$Type*) $tmp1147)->genericMethodParameter;
panda$core$Weak* $tmp1149 = *$tmp1148;
panda$core$Object* $tmp1150 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1149);
panda$core$Bit $tmp1151 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$MethodDecl$GenericParameter*) $tmp1150) != NULL);
bool $tmp1152 = $tmp1151.value;
if ($tmp1152) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp1153 = (panda$core$Int64) {276};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1154, $tmp1153, &$s1155);
abort(); // unreachable
block19:;
panda$core$String** $tmp1156 = &((org$pandalanguage$pandac$MethodDecl$GenericParameter*) $tmp1150)->owner;
panda$core$String* $tmp1157 = *$tmp1156;
panda$core$Weak** $tmp1158 = &param0->owner;
panda$core$Weak* $tmp1159 = *$tmp1158;
panda$core$Object* $tmp1160 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1159);
panda$core$String** $tmp1161 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1160)->name;
panda$core$String* $tmp1162 = *$tmp1161;
panda$core$String* $tmp1163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1162, &$s1164);
panda$core$String** $tmp1165 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp1166 = *$tmp1165;
panda$core$String* $tmp1167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1163, $tmp1166);
panda$core$Bit $tmp1168 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1157, $tmp1167);
bool $tmp1169 = $tmp1168.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
// unreffing REF($131:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1163));
// unreffing REF($127:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1160);
// unreffing REF($123:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp1150);
// unreffing REF($108:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp1147);
// unreffing REF($103:org.pandalanguage.pandac.FixedArray.T)
if ($tmp1169) goto block15; else goto block16;
block15:;
// line 277
panda$collections$Array* $tmp1170 = *(&local0);
panda$core$Bit $tmp1171 = panda$core$Bit$init$builtin_bit($tmp1170 == NULL);
bool $tmp1172 = $tmp1171.value;
if ($tmp1172) goto block21; else goto block22;
block21:;
// line 278
panda$collections$Array* $tmp1173 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1173);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1173));
panda$collections$Array* $tmp1174 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1174));
*(&local0) = $tmp1173;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1173));
// unreffing REF($157:panda.collections.Array<panda.collections.ListView<panda.core.Int64>>)
goto block22;
block22:;
// line 280
panda$collections$Array* $tmp1175 = *(&local0);
panda$core$Bit $tmp1176 = panda$core$Bit$init$builtin_bit($tmp1175 != NULL);
bool $tmp1177 = $tmp1176.value;
if ($tmp1177) goto block23; else goto block24;
block24:;
panda$core$Int64 $tmp1178 = (panda$core$Int64) {280};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1179, $tmp1178, &$s1180);
abort(); // unreachable
block23:;
panda$collections$Array* $tmp1181 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp1182 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp1181, $tmp1182);
panda$core$Int64 $tmp1183 = *(&local1);
panda$core$Int64$wrapper* $tmp1184;
$tmp1184 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1184->value = $tmp1183;
panda$collections$Array$add$panda$collections$Array$T($tmp1181, ((panda$core$Object*) $tmp1184));
panda$collections$ImmutableArray* $tmp1185 = panda$collections$ImmutableArray$from$panda$collections$Array$LTpanda$collections$ImmutableArray$T$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT($tmp1181);
panda$collections$Array$add$panda$collections$Array$T($tmp1175, ((panda$core$Object*) ((panda$collections$ListView*) $tmp1185)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
// unreffing REF($190:panda.collections.ImmutableArray<panda.collections.ImmutableArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1184));
// unreffing REF($187:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1181));
// unreffing REF($181:panda.collections.Array<panda.core.Int64>)
goto block16;
block16:;
goto block11;
block14:;
// line 1
// line 284
org$pandalanguage$pandac$FixedArray** $tmp1186 = &param1->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1187 = *$tmp1186;
panda$core$Bit $tmp1188 = panda$core$Bit$init$builtin_bit($tmp1187 != NULL);
bool $tmp1189 = $tmp1188.value;
if ($tmp1189) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp1190 = (panda$core$Int64) {284};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1191, $tmp1190, &$s1192);
abort(); // unreachable
block25:;
panda$core$Int64 $tmp1193 = *(&local1);
panda$core$Object* $tmp1194 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1187, $tmp1193);
panda$collections$ListView* $tmp1195 = org$pandalanguage$pandac$expression$Call$findGenericParameters$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTpanda$collections$ListView$LTpanda$core$Int64$GT$GT$Q(param0, ((org$pandalanguage$pandac$Type*) $tmp1194));
*(&local2) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
panda$collections$ListView* $tmp1196 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
*(&local2) = $tmp1195;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
// unreffing REF($222:panda.collections.ListView<panda.collections.ListView<panda.core.Int64>>?)
panda$core$Panda$unref$panda$core$Object$Q($tmp1194);
// unreffing REF($220:org.pandalanguage.pandac.FixedArray.T)
// line 285
panda$collections$ListView* $tmp1197 = *(&local2);
panda$core$Bit $tmp1198 = panda$core$Bit$init$builtin_bit($tmp1197 != NULL);
bool $tmp1199 = $tmp1198.value;
if ($tmp1199) goto block27; else goto block28;
block27:;
// line 286
panda$collections$Array* $tmp1200 = *(&local0);
panda$core$Bit $tmp1201 = panda$core$Bit$init$builtin_bit($tmp1200 == NULL);
bool $tmp1202 = $tmp1201.value;
if ($tmp1202) goto block29; else goto block30;
block29:;
// line 287
panda$collections$Array* $tmp1203 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1203);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1203));
panda$collections$Array* $tmp1204 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1204));
*(&local0) = $tmp1203;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1203));
// unreffing REF($249:panda.collections.Array<panda.collections.ListView<panda.core.Int64>>)
goto block30;
block30:;
// line 289
panda$collections$ListView* $tmp1205 = *(&local2);
panda$core$Bit $tmp1206 = panda$core$Bit$init$builtin_bit($tmp1205 != NULL);
bool $tmp1207 = $tmp1206.value;
if ($tmp1207) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp1208 = (panda$core$Int64) {289};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1209, $tmp1208, &$s1210);
abort(); // unreachable
block31:;
ITable* $tmp1211 = ((panda$collections$Iterable*) $tmp1205)->$class->itable;
while ($tmp1211->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1211 = $tmp1211->next;
}
$fn1213 $tmp1212 = $tmp1211->methods[0];
panda$collections$Iterator* $tmp1214 = $tmp1212(((panda$collections$Iterable*) $tmp1205));
goto block33;
block33:;
ITable* $tmp1215 = $tmp1214->$class->itable;
while ($tmp1215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1215 = $tmp1215->next;
}
$fn1217 $tmp1216 = $tmp1215->methods[0];
panda$core$Bit $tmp1218 = $tmp1216($tmp1214);
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block35; else goto block34;
block34:;
*(&local3) = ((panda$collections$ListView*) NULL);
ITable* $tmp1220 = $tmp1214->$class->itable;
while ($tmp1220->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1220 = $tmp1220->next;
}
$fn1222 $tmp1221 = $tmp1220->methods[1];
panda$core$Object* $tmp1223 = $tmp1221($tmp1214);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp1223)));
panda$collections$ListView* $tmp1224 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1224));
*(&local3) = ((panda$collections$ListView*) $tmp1223);
// line 290
panda$collections$Array* $tmp1225 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp1226 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp1225, $tmp1226);
panda$core$Int64 $tmp1227 = *(&local1);
panda$core$Int64$wrapper* $tmp1228;
$tmp1228 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1228->value = $tmp1227;
panda$collections$Array$add$panda$collections$Array$T($tmp1225, ((panda$core$Object*) $tmp1228));
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1225));
panda$collections$Array* $tmp1229 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1229));
*(&local4) = $tmp1225;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1228));
// unreffing REF($301:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1225));
// unreffing REF($295:panda.collections.Array<panda.core.Int64>)
// line 291
panda$collections$Array* $tmp1230 = *(&local4);
panda$collections$ListView* $tmp1231 = *(&local3);
panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp1230, ((panda$collections$CollectionView*) $tmp1231));
// line 292
panda$collections$Array* $tmp1232 = *(&local0);
panda$core$Bit $tmp1233 = panda$core$Bit$init$builtin_bit($tmp1232 != NULL);
bool $tmp1234 = $tmp1233.value;
if ($tmp1234) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp1235 = (panda$core$Int64) {292};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1236, $tmp1235, &$s1237);
abort(); // unreachable
block36:;
panda$collections$Array* $tmp1238 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp1232, ((panda$core$Object*) ((panda$collections$ListView*) $tmp1238)));
panda$collections$Array* $tmp1239 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1239));
// unreffing finalPath
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1223);
// unreffing REF($286:panda.collections.Iterator.T)
panda$collections$ListView* $tmp1240 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1240));
// unreffing path
*(&local3) = ((panda$collections$ListView*) NULL);
goto block33;
block35:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1214));
// unreffing REF($275:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block28;
block28:;
panda$collections$ListView* $tmp1241 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1241));
// unreffing paths
*(&local2) = ((panda$collections$ListView*) NULL);
goto block11;
block11:;
goto block7;
block7:;
panda$core$Int64 $tmp1242 = *(&local1);
int64_t $tmp1243 = $tmp1104.value;
int64_t $tmp1244 = $tmp1242.value;
int64_t $tmp1245 = $tmp1243 - $tmp1244;
panda$core$Int64 $tmp1246 = (panda$core$Int64) {$tmp1245};
panda$core$UInt64 $tmp1247 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1246);
if ($tmp1106) goto block39; else goto block40;
block39:;
uint64_t $tmp1248 = $tmp1247.value;
uint64_t $tmp1249 = $tmp1108.value;
bool $tmp1250 = $tmp1248 >= $tmp1249;
panda$core$Bit $tmp1251 = (panda$core$Bit) {$tmp1250};
bool $tmp1252 = $tmp1251.value;
if ($tmp1252) goto block38; else goto block6;
block40:;
uint64_t $tmp1253 = $tmp1247.value;
uint64_t $tmp1254 = $tmp1108.value;
bool $tmp1255 = $tmp1253 > $tmp1254;
panda$core$Bit $tmp1256 = (panda$core$Bit) {$tmp1255};
bool $tmp1257 = $tmp1256.value;
if ($tmp1257) goto block38; else goto block6;
block38:;
int64_t $tmp1258 = $tmp1242.value;
int64_t $tmp1259 = $tmp1107.value;
int64_t $tmp1260 = $tmp1258 + $tmp1259;
panda$core$Int64 $tmp1261 = (panda$core$Int64) {$tmp1260};
*(&local1) = $tmp1261;
goto block5;
block6:;
// line 297
panda$collections$Array* $tmp1262 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp1262)));
panda$collections$Array* $tmp1263 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp1262);

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$expression$Call$getSubtype$org$pandalanguage$pandac$Type$panda$collections$ListView$LTpanda$core$Int64$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0, panda$collections$ListView* param1) {

org$pandalanguage$pandac$Type* local0 = NULL;
panda$core$Int64 local1;
// line 302
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
org$pandalanguage$pandac$Type* $tmp1264 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1264));
*(&local0) = param0;
// line 303
ITable* $tmp1265 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp1265->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1265 = $tmp1265->next;
}
$fn1267 $tmp1266 = $tmp1265->methods[0];
panda$collections$Iterator* $tmp1268 = $tmp1266(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp1269 = $tmp1268->$class->itable;
while ($tmp1269->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1269 = $tmp1269->next;
}
$fn1271 $tmp1270 = $tmp1269->methods[0];
panda$core$Bit $tmp1272 = $tmp1270($tmp1268);
bool $tmp1273 = $tmp1272.value;
if ($tmp1273) goto block3; else goto block2;
block2:;
ITable* $tmp1274 = $tmp1268->$class->itable;
while ($tmp1274->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1274 = $tmp1274->next;
}
$fn1276 $tmp1275 = $tmp1274->methods[1];
panda$core$Object* $tmp1277 = $tmp1275($tmp1268);
*(&local1) = ((panda$core$Int64$wrapper*) $tmp1277)->value;
// line 304
org$pandalanguage$pandac$Type* $tmp1278 = *(&local0);
org$pandalanguage$pandac$FixedArray** $tmp1279 = &$tmp1278->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1280 = *$tmp1279;
panda$core$Bit $tmp1281 = panda$core$Bit$init$builtin_bit($tmp1280 != NULL);
bool $tmp1282 = $tmp1281.value;
if ($tmp1282) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1283 = (panda$core$Int64) {304};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1284, $tmp1283, &$s1285);
abort(); // unreachable
block4:;
panda$core$Int64 $tmp1286 = *(&local1);
panda$core$Object* $tmp1287 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1280, $tmp1286);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1287)));
org$pandalanguage$pandac$Type* $tmp1288 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1288));
*(&local0) = ((org$pandalanguage$pandac$Type*) $tmp1287);
panda$core$Panda$unref$panda$core$Object$Q($tmp1287);
// unreffing REF($39:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp1277);
// unreffing REF($22:panda.collections.Iterator.T)
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1268));
// unreffing REF($12:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 306
org$pandalanguage$pandac$Type* $tmp1289 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1289));
org$pandalanguage$pandac$Type* $tmp1290 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1290));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp1289;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$expression$Call$$anonymous1$org$pandalanguage$pandac$MethodDecl$GenericParameter$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl$GenericParameter* param0) {

// line 314
org$pandalanguage$pandac$Type** $tmp1291 = &param0->bound;
org$pandalanguage$pandac$Type* $tmp1292 = *$tmp1291;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1292));
return $tmp1292;

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
panda$core$Bit* $tmp1293 = &param1->requiresTypeInference;
panda$core$Bit $tmp1294 = *$tmp1293;
panda$core$Bit $tmp1295 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1294);
bool $tmp1296 = $tmp1295.value;
if ($tmp1296) goto block1; else goto block2;
block1:;
// line 312
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
return param1;
block2:;
// line 314
panda$collections$Array* $tmp1297 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
org$pandalanguage$pandac$MethodDecl** $tmp1298 = &param1->value;
org$pandalanguage$pandac$MethodDecl* $tmp1299 = *$tmp1298;
panda$collections$Array** $tmp1300 = &$tmp1299->genericParameters;
panda$collections$Array* $tmp1301 = *$tmp1300;
panda$core$Bit $tmp1302 = panda$core$Bit$init$builtin_bit($tmp1301 != NULL);
bool $tmp1303 = $tmp1302.value;
if ($tmp1303) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp1304 = (panda$core$Int64) {314};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1305, $tmp1304, &$s1306);
abort(); // unreachable
block3:;
panda$core$Method* $tmp1308 = (panda$core$Method*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1308, ((panda$core$Int8*) org$pandalanguage$pandac$expression$Call$$anonymous1$org$pandalanguage$pandac$MethodDecl$GenericParameter$R$org$pandalanguage$pandac$Type), ((panda$core$Immutable*) NULL));
ITable* $tmp1309 = ((panda$collections$CollectionView*) $tmp1301)->$class->itable;
while ($tmp1309->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1309 = $tmp1309->next;
}
$fn1311 $tmp1310 = $tmp1309->methods[6];
panda$collections$Array* $tmp1312 = $tmp1310(((panda$collections$CollectionView*) $tmp1301), ((panda$core$MutableMethod*) $tmp1308));
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp1297, ((panda$collections$CollectionView*) $tmp1312));
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1297));
panda$collections$Array* $tmp1313 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1313));
*(&local0) = $tmp1297;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1312));
// unreffing REF($33:panda.collections.Array<panda.collections.CollectionView.map.U>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1308));
// unreffing REF($27:panda.core.Method)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1297));
// unreffing REF($12:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 315
panda$core$Int64 $tmp1314 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl** $tmp1315 = &param1->value;
org$pandalanguage$pandac$MethodDecl* $tmp1316 = *$tmp1315;
panda$collections$Array** $tmp1317 = &$tmp1316->parameters;
panda$collections$Array* $tmp1318 = *$tmp1317;
ITable* $tmp1319 = ((panda$collections$CollectionView*) $tmp1318)->$class->itable;
while ($tmp1319->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1319 = $tmp1319->next;
}
$fn1321 $tmp1320 = $tmp1319->methods[0];
panda$core$Int64 $tmp1322 = $tmp1320(((panda$collections$CollectionView*) $tmp1318));
panda$core$Bit $tmp1323 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1324 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1314, $tmp1322, $tmp1323);
panda$core$Int64 $tmp1325 = $tmp1324.min;
*(&local1) = $tmp1325;
panda$core$Int64 $tmp1326 = $tmp1324.max;
panda$core$Bit $tmp1327 = $tmp1324.inclusive;
bool $tmp1328 = $tmp1327.value;
panda$core$Int64 $tmp1329 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1330 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1329);
if ($tmp1328) goto block8; else goto block9;
block8:;
int64_t $tmp1331 = $tmp1325.value;
int64_t $tmp1332 = $tmp1326.value;
bool $tmp1333 = $tmp1331 <= $tmp1332;
panda$core$Bit $tmp1334 = (panda$core$Bit) {$tmp1333};
bool $tmp1335 = $tmp1334.value;
if ($tmp1335) goto block5; else goto block6;
block9:;
int64_t $tmp1336 = $tmp1325.value;
int64_t $tmp1337 = $tmp1326.value;
bool $tmp1338 = $tmp1336 < $tmp1337;
panda$core$Bit $tmp1339 = (panda$core$Bit) {$tmp1338};
bool $tmp1340 = $tmp1339.value;
if ($tmp1340) goto block5; else goto block6;
block5:;
// line 316
panda$core$Int64 $tmp1341 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1342 = org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(param1, $tmp1341);
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1342));
org$pandalanguage$pandac$Type* $tmp1343 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1343));
*(&local2) = $tmp1342;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1342));
// unreffing REF($87:org.pandalanguage.pandac.Type)
// line 317
org$pandalanguage$pandac$MethodDecl** $tmp1344 = &param1->value;
org$pandalanguage$pandac$MethodDecl* $tmp1345 = *$tmp1344;
org$pandalanguage$pandac$Type* $tmp1346 = *(&local2);
panda$collections$ListView* $tmp1347 = org$pandalanguage$pandac$expression$Call$findGenericParameters$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTpanda$collections$ListView$LTpanda$core$Int64$GT$GT$Q($tmp1345, $tmp1346);
*(&local3) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1347));
panda$collections$ListView* $tmp1348 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1348));
*(&local3) = $tmp1347;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1347));
// unreffing REF($102:panda.collections.ListView<panda.collections.ListView<panda.core.Int64>>?)
// line 318
panda$collections$ListView* $tmp1349 = *(&local3);
panda$core$Bit $tmp1350 = panda$core$Bit$init$builtin_bit($tmp1349 != NULL);
bool $tmp1351 = $tmp1350.value;
if ($tmp1351) goto block10; else goto block11;
block10:;
// line 319
panda$collections$ListView* $tmp1352 = *(&local3);
panda$core$Bit $tmp1353 = panda$core$Bit$init$builtin_bit($tmp1352 != NULL);
bool $tmp1354 = $tmp1353.value;
if ($tmp1354) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp1355 = (panda$core$Int64) {319};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1356, $tmp1355, &$s1357);
abort(); // unreachable
block12:;
ITable* $tmp1358 = ((panda$collections$Iterable*) $tmp1352)->$class->itable;
while ($tmp1358->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1358 = $tmp1358->next;
}
$fn1360 $tmp1359 = $tmp1358->methods[0];
panda$collections$Iterator* $tmp1361 = $tmp1359(((panda$collections$Iterable*) $tmp1352));
goto block14;
block14:;
ITable* $tmp1362 = $tmp1361->$class->itable;
while ($tmp1362->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1362 = $tmp1362->next;
}
$fn1364 $tmp1363 = $tmp1362->methods[0];
panda$core$Bit $tmp1365 = $tmp1363($tmp1361);
bool $tmp1366 = $tmp1365.value;
if ($tmp1366) goto block16; else goto block15;
block15:;
*(&local4) = ((panda$collections$ListView*) NULL);
ITable* $tmp1367 = $tmp1361->$class->itable;
while ($tmp1367->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1367 = $tmp1367->next;
}
$fn1369 $tmp1368 = $tmp1367->methods[1];
panda$core$Object* $tmp1370 = $tmp1368($tmp1361);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp1370)));
panda$collections$ListView* $tmp1371 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1371));
*(&local4) = ((panda$collections$ListView*) $tmp1370);
// line 320
panda$core$Int64 $tmp1372 = *(&local1);
ITable* $tmp1373 = param2->$class->itable;
while ($tmp1373->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp1373 = $tmp1373->next;
}
$fn1375 $tmp1374 = $tmp1373->methods[0];
panda$core$Object* $tmp1376 = $tmp1374(param2, $tmp1372);
org$pandalanguage$pandac$Type* $tmp1377 = *(&local2);
org$pandalanguage$pandac$Pair* $tmp1378 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Cpanda$core$Int64$GT$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp1376), $tmp1377);
*(&local5) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
org$pandalanguage$pandac$Pair* $tmp1379 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1379));
*(&local5) = $tmp1378;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
// unreffing REF($157:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, panda.core.Int64>?)
panda$core$Panda$unref$panda$core$Object$Q($tmp1376);
// unreffing REF($154:panda.collections.ListView.T)
// line 321
org$pandalanguage$pandac$Pair* $tmp1380 = *(&local5);
panda$core$Bit $tmp1381 = panda$core$Bit$init$builtin_bit($tmp1380 == NULL);
bool $tmp1382 = $tmp1381.value;
if ($tmp1382) goto block17; else goto block18;
block17:;
// line 322
panda$core$Int64 $tmp1383 = *(&local1);
ITable* $tmp1384 = param2->$class->itable;
while ($tmp1384->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp1384 = $tmp1384->next;
}
$fn1386 $tmp1385 = $tmp1384->methods[0];
panda$core$Object* $tmp1387 = $tmp1385(param2, $tmp1383);
panda$core$String* $tmp1388 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1389, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1387)));
panda$core$String* $tmp1390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1388, &$s1391);
org$pandalanguage$pandac$Type* $tmp1392 = *(&local2);
panda$core$String* $tmp1393 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1390, ((panda$core$Object*) $tmp1392));
panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1393, &$s1395);
panda$io$Console$printLine$panda$core$String($tmp1394);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1394));
// unreffing REF($189:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
// unreffing REF($188:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1390));
// unreffing REF($185:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1388));
// unreffing REF($184:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1387);
// unreffing REF($181:panda.collections.ListView.T)
// line 323
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Pair* $tmp1396 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
// unreffing argType
*(&local5) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1370);
// unreffing REF($142:panda.collections.Iterator.T)
panda$collections$ListView* $tmp1397 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1397));
// unreffing g
*(&local4) = ((panda$collections$ListView*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1361));
// unreffing REF($131:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$ListView* $tmp1398 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1398));
// unreffing generics
*(&local3) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$Type* $tmp1399 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1399));
// unreffing paramType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1400 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1400));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return param1;
block18:;
// line 325
org$pandalanguage$pandac$MethodDecl** $tmp1401 = &param1->value;
org$pandalanguage$pandac$MethodDecl* $tmp1402 = *$tmp1401;
panda$collections$Array** $tmp1403 = &$tmp1402->parameters;
panda$collections$Array* $tmp1404 = *$tmp1403;
panda$core$Int64 $tmp1405 = *(&local1);
panda$core$Object* $tmp1406 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1404, $tmp1405);
org$pandalanguage$pandac$Type** $tmp1407 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1406)->type;
org$pandalanguage$pandac$Type* $tmp1408 = *$tmp1407;
panda$collections$ListView* $tmp1409 = *(&local4);
org$pandalanguage$pandac$Type* $tmp1410 = org$pandalanguage$pandac$expression$Call$getSubtype$org$pandalanguage$pandac$Type$panda$collections$ListView$LTpanda$core$Int64$GT$R$org$pandalanguage$pandac$Type($tmp1408, $tmp1409);
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1410));
org$pandalanguage$pandac$Type* $tmp1411 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1411));
*(&local6) = $tmp1410;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1410));
// unreffing REF($254:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1406);
// unreffing REF($249:panda.collections.Array.T)
// line 326
org$pandalanguage$pandac$Type* $tmp1412 = *(&local6);
org$pandalanguage$pandac$Type$Kind* $tmp1413 = &$tmp1412->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1414 = *$tmp1413;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1415;
$tmp1415 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1415->value = $tmp1414;
panda$core$Int64 $tmp1416 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp1417 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1416);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1418;
$tmp1418 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1418->value = $tmp1417;
ITable* $tmp1419 = ((panda$core$Equatable*) $tmp1415)->$class->itable;
while ($tmp1419->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1419 = $tmp1419->next;
}
$fn1421 $tmp1420 = $tmp1419->methods[0];
panda$core$Bit $tmp1422 = $tmp1420(((panda$core$Equatable*) $tmp1415), ((panda$core$Equatable*) $tmp1418));
bool $tmp1423 = $tmp1422.value;
if ($tmp1423) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp1424 = (panda$core$Int64) {326};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1425, $tmp1424);
abort(); // unreachable
block19:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1418)));
// unreffing REF($276:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1415)));
// unreffing REF($272:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
// line 327
panda$core$Int64 $tmp1426 = (panda$core$Int64) {0};
*(&local7) = $tmp1426;
// line 328
goto block21;
block21:;
org$pandalanguage$pandac$Type* $tmp1427 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
org$pandalanguage$pandac$MethodDecl** $tmp1428 = &param1->value;
org$pandalanguage$pandac$MethodDecl* $tmp1429 = *$tmp1428;
panda$collections$Array** $tmp1430 = &$tmp1429->genericParameters;
panda$collections$Array* $tmp1431 = *$tmp1430;
panda$core$Bit $tmp1432 = panda$core$Bit$init$builtin_bit($tmp1431 != NULL);
bool $tmp1433 = $tmp1432.value;
if ($tmp1433) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp1434 = (panda$core$Int64) {328};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1435, $tmp1434, &$s1436);
abort(); // unreachable
block24:;
panda$core$Int64 $tmp1437 = *(&local1);
panda$core$Object* $tmp1438 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1431, $tmp1437);
org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$MethodDecl$GenericParameter($tmp1427, ((org$pandalanguage$pandac$MethodDecl$GenericParameter*) $tmp1438));
org$pandalanguage$pandac$Type* $tmp1439 = *(&local6);
ITable* $tmp1440 = ((panda$core$Equatable*) $tmp1427)->$class->itable;
while ($tmp1440->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1440 = $tmp1440->next;
}
$fn1442 $tmp1441 = $tmp1440->methods[1];
panda$core$Bit $tmp1443 = $tmp1441(((panda$core$Equatable*) $tmp1427), ((panda$core$Equatable*) $tmp1439));
bool $tmp1444 = $tmp1443.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp1438);
// unreffing REF($310:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1427));
// unreffing REF($295:org.pandalanguage.pandac.Type)
if ($tmp1444) goto block22; else goto block23;
block22:;
// line 329
panda$core$Int64 $tmp1445 = *(&local7);
panda$core$Int64 $tmp1446 = (panda$core$Int64) {1};
int64_t $tmp1447 = $tmp1445.value;
int64_t $tmp1448 = $tmp1446.value;
int64_t $tmp1449 = $tmp1447 + $tmp1448;
panda$core$Int64 $tmp1450 = (panda$core$Int64) {$tmp1449};
*(&local7) = $tmp1450;
goto block21;
block23:;
// line 331
panda$collections$Array* $tmp1451 = *(&local0);
panda$core$Int64 $tmp1452 = *(&local7);
panda$collections$Array* $tmp1453 = *(&local0);
panda$core$Int64 $tmp1454 = *(&local7);
panda$core$Object* $tmp1455 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1453, $tmp1454);
org$pandalanguage$pandac$Pair* $tmp1456 = *(&local5);
panda$core$Bit $tmp1457 = panda$core$Bit$init$builtin_bit($tmp1456 != NULL);
bool $tmp1458 = $tmp1457.value;
if ($tmp1458) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp1459 = (panda$core$Int64) {332};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1460, $tmp1459, &$s1461);
abort(); // unreachable
block26:;
panda$core$Object** $tmp1462 = &$tmp1456->first;
panda$core$Object* $tmp1463 = *$tmp1462;
panda$collections$ListView* $tmp1464 = *(&local4);
org$pandalanguage$pandac$Type* $tmp1465 = org$pandalanguage$pandac$expression$Call$getSubtype$org$pandalanguage$pandac$Type$panda$collections$ListView$LTpanda$core$Int64$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1463), $tmp1464);
org$pandalanguage$pandac$Type* $tmp1466 = org$pandalanguage$pandac$Type$intersection$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1455), param0, $tmp1465);
panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp1451, $tmp1452, ((panda$core$Object*) $tmp1466));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1466));
// unreffing REF($359:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1465));
// unreffing REF($358:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1455);
// unreffing REF($343:panda.collections.Array.T)
org$pandalanguage$pandac$Type* $tmp1467 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1467));
// unreffing parameter
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp1468 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1468));
// unreffing argType
*(&local5) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1370);
// unreffing REF($142:panda.collections.Iterator.T)
panda$collections$ListView* $tmp1469 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1469));
// unreffing g
*(&local4) = ((panda$collections$ListView*) NULL);
goto block14;
block16:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1361));
// unreffing REF($131:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block11;
block11:;
panda$collections$ListView* $tmp1470 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1470));
// unreffing generics
*(&local3) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$Type* $tmp1471 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1471));
// unreffing paramType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block7;
block7:;
panda$core$Int64 $tmp1472 = *(&local1);
int64_t $tmp1473 = $tmp1326.value;
int64_t $tmp1474 = $tmp1472.value;
int64_t $tmp1475 = $tmp1473 - $tmp1474;
panda$core$Int64 $tmp1476 = (panda$core$Int64) {$tmp1475};
panda$core$UInt64 $tmp1477 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1476);
if ($tmp1328) goto block29; else goto block30;
block29:;
uint64_t $tmp1478 = $tmp1477.value;
uint64_t $tmp1479 = $tmp1330.value;
bool $tmp1480 = $tmp1478 >= $tmp1479;
panda$core$Bit $tmp1481 = (panda$core$Bit) {$tmp1480};
bool $tmp1482 = $tmp1481.value;
if ($tmp1482) goto block28; else goto block6;
block30:;
uint64_t $tmp1483 = $tmp1477.value;
uint64_t $tmp1484 = $tmp1330.value;
bool $tmp1485 = $tmp1483 > $tmp1484;
panda$core$Bit $tmp1486 = (panda$core$Bit) {$tmp1485};
bool $tmp1487 = $tmp1486.value;
if ($tmp1487) goto block28; else goto block6;
block28:;
int64_t $tmp1488 = $tmp1472.value;
int64_t $tmp1489 = $tmp1329.value;
int64_t $tmp1490 = $tmp1488 + $tmp1489;
panda$core$Int64 $tmp1491 = (panda$core$Int64) {$tmp1490};
*(&local1) = $tmp1491;
goto block5;
block6:;
// line 336
org$pandalanguage$pandac$MethodRef* $tmp1492 = (org$pandalanguage$pandac$MethodRef*) frostObjectAlloc(41, (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class);
org$pandalanguage$pandac$Type** $tmp1493 = &param1->target;
org$pandalanguage$pandac$Type* $tmp1494 = *$tmp1493;
org$pandalanguage$pandac$MethodDecl** $tmp1495 = &param1->value;
org$pandalanguage$pandac$MethodDecl* $tmp1496 = *$tmp1495;
panda$collections$Array* $tmp1497 = *(&local0);
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q($tmp1492, param0, $tmp1494, $tmp1496, ((panda$collections$ListView*) $tmp1497));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
// unreffing REF($431:org.pandalanguage.pandac.MethodRef)
panda$collections$Array* $tmp1498 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1498));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp1492;

}
org$pandalanguage$pandac$Pair* org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, panda$collections$ListView* param3, panda$collections$ListView* param4, org$pandalanguage$pandac$Compiler$TypeContext* param5) {

// line 343
org$pandalanguage$pandac$Pair* $tmp1499 = org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, param1, param2, param3, ((panda$collections$ListView*) NULL), param4, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1499));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1499));
// unreffing REF($1:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
return $tmp1499;

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
ITable* $tmp1500 = ((panda$collections$CollectionView*) param3)->$class->itable;
while ($tmp1500->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1500 = $tmp1500->next;
}
$fn1502 $tmp1501 = $tmp1500->methods[0];
panda$core$Int64 $tmp1503 = $tmp1501(((panda$collections$CollectionView*) param3));
panda$core$Int64 $tmp1504 = (panda$core$Int64) {0};
panda$core$Bit $tmp1505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1503, $tmp1504);
bool $tmp1506 = $tmp1505.value;
if ($tmp1506) goto block1; else goto block2;
block1:;
// line 352
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
return ((org$pandalanguage$pandac$Pair*) NULL);
block2:;
// line 354
panda$core$Int64 $tmp1507 = (panda$core$Int64) {9223372036854775807};
*(&local0) = $tmp1507;
// line 355
panda$collections$Array* $tmp1508 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1508);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1508));
panda$collections$Array* $tmp1509 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1509));
*(&local1) = $tmp1508;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1508));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.MethodRef>)
// line 356
ITable* $tmp1510 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp1510->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1510 = $tmp1510->next;
}
$fn1512 $tmp1511 = $tmp1510->methods[0];
panda$collections$Iterator* $tmp1513 = $tmp1511(((panda$collections$Iterable*) param3));
goto block3;
block3:;
ITable* $tmp1514 = $tmp1513->$class->itable;
while ($tmp1514->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1514 = $tmp1514->next;
}
$fn1516 $tmp1515 = $tmp1514->methods[0];
panda$core$Bit $tmp1517 = $tmp1515($tmp1513);
bool $tmp1518 = $tmp1517.value;
if ($tmp1518) goto block5; else goto block4;
block4:;
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp1519 = $tmp1513->$class->itable;
while ($tmp1519->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1519 = $tmp1519->next;
}
$fn1521 $tmp1520 = $tmp1519->methods[1];
panda$core$Object* $tmp1522 = $tmp1520($tmp1513);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1522)));
org$pandalanguage$pandac$MethodDecl* $tmp1523 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1523));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) $tmp1522);
// line 357
org$pandalanguage$pandac$MethodDecl* $tmp1524 = *(&local2);
panda$collections$Array** $tmp1525 = &$tmp1524->parameters;
panda$collections$Array* $tmp1526 = *$tmp1525;
ITable* $tmp1527 = ((panda$collections$CollectionView*) $tmp1526)->$class->itable;
while ($tmp1527->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1527 = $tmp1527->next;
}
$fn1529 $tmp1528 = $tmp1527->methods[0];
panda$core$Int64 $tmp1530 = $tmp1528(((panda$collections$CollectionView*) $tmp1526));
ITable* $tmp1531 = ((panda$collections$CollectionView*) param5)->$class->itable;
while ($tmp1531->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1531 = $tmp1531->next;
}
$fn1533 $tmp1532 = $tmp1531->methods[0];
panda$core$Int64 $tmp1534 = $tmp1532(((panda$collections$CollectionView*) param5));
int64_t $tmp1535 = $tmp1530.value;
int64_t $tmp1536 = $tmp1534.value;
bool $tmp1537 = $tmp1535 != $tmp1536;
panda$core$Bit $tmp1538 = (panda$core$Bit) {$tmp1537};
bool $tmp1539 = $tmp1538.value;
if ($tmp1539) goto block6; else goto block7;
block6:;
// line 358
panda$core$Panda$unref$panda$core$Object$Q($tmp1522);
// unreffing REF($44:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp1540 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1540));
// unreffing m
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block3;
block7:;
// line 360
org$pandalanguage$pandac$MethodDecl* $tmp1541 = *(&local2);
panda$core$Bit $tmp1542 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, $tmp1541);
panda$core$Bit $tmp1543 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1542);
bool $tmp1544 = $tmp1543.value;
if ($tmp1544) goto block8; else goto block9;
block8:;
// line 361
panda$core$Panda$unref$panda$core$Object$Q($tmp1522);
// unreffing REF($44:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp1545 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1545));
// unreffing m
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block3;
block9:;
// line 363
*(&local3) = ((org$pandalanguage$pandac$MethodRef*) NULL);
// line 364
panda$core$Bit $tmp1546 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp1547 = $tmp1546.value;
if ($tmp1547) goto block10; else goto block12;
block10:;
// line 365
panda$core$Bit $tmp1548 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp1549 = $tmp1548.value;
if ($tmp1549) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp1550 = (panda$core$Int64) {365};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1551, $tmp1550, &$s1552);
abort(); // unreachable
block13:;
$fn1554 $tmp1553 = ($fn1554) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1555 = $tmp1553(param2);
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
org$pandalanguage$pandac$Type* $tmp1556 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1556));
*(&local4) = $tmp1555;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
// unreffing REF($111:org.pandalanguage.pandac.Type)
// line 366
org$pandalanguage$pandac$Type* $tmp1557 = *(&local4);
org$pandalanguage$pandac$Type$Kind* $tmp1558 = &$tmp1557->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1559 = *$tmp1558;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1560;
$tmp1560 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1560->value = $tmp1559;
panda$core$Int64 $tmp1561 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type$Kind $tmp1562 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1561);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1563;
$tmp1563 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1563->value = $tmp1562;
ITable* $tmp1564 = ((panda$core$Equatable*) $tmp1560)->$class->itable;
while ($tmp1564->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1564 = $tmp1564->next;
}
$fn1566 $tmp1565 = $tmp1564->methods[0];
panda$core$Bit $tmp1567 = $tmp1565(((panda$core$Equatable*) $tmp1560), ((panda$core$Equatable*) $tmp1563));
bool $tmp1568 = $tmp1567.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1563)));
// unreffing REF($130:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1560)));
// unreffing REF($126:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1568) goto block15; else goto block16;
block15:;
// line 367
org$pandalanguage$pandac$Type* $tmp1569 = *(&local4);
panda$core$Weak** $tmp1570 = &$tmp1569->genericMethodParameter;
panda$core$Weak* $tmp1571 = *$tmp1570;
panda$core$Object* $tmp1572 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1571);
panda$core$Bit $tmp1573 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$MethodDecl$GenericParameter*) $tmp1572) != NULL);
bool $tmp1574 = $tmp1573.value;
if ($tmp1574) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp1575 = (panda$core$Int64) {367};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1576, $tmp1575, &$s1577);
abort(); // unreachable
block17:;
org$pandalanguage$pandac$Type** $tmp1578 = &((org$pandalanguage$pandac$MethodDecl$GenericParameter*) $tmp1572)->bound;
org$pandalanguage$pandac$Type* $tmp1579 = *$tmp1578;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1579));
org$pandalanguage$pandac$Type* $tmp1580 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1580));
*(&local4) = $tmp1579;
panda$core$Panda$unref$panda$core$Object$Q($tmp1572);
// unreffing REF($146:panda.core.Weak.T)
goto block16;
block16:;
// line 369
org$pandalanguage$pandac$MethodRef* $tmp1581 = (org$pandalanguage$pandac$MethodRef*) frostObjectAlloc(41, (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class);
org$pandalanguage$pandac$Type* $tmp1582 = *(&local4);
org$pandalanguage$pandac$MethodDecl* $tmp1583 = *(&local2);
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q($tmp1581, param0, $tmp1582, $tmp1583, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1581));
org$pandalanguage$pandac$MethodRef* $tmp1584 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1584));
*(&local3) = $tmp1581;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1581));
// unreffing REF($169:org.pandalanguage.pandac.MethodRef)
org$pandalanguage$pandac$Type* $tmp1585 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1585));
// unreffing owner
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
goto block11;
block12:;
// line 371
org$pandalanguage$pandac$MethodDecl* $tmp1586 = *(&local2);
org$pandalanguage$pandac$Annotations** $tmp1587 = &$tmp1586->annotations;
org$pandalanguage$pandac$Annotations* $tmp1588 = *$tmp1587;
panda$core$Bit $tmp1589 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp1588);
bool $tmp1590 = $tmp1589.value;
if ($tmp1590) goto block21; else goto block22;
block21:;
*(&local5) = $tmp1589;
goto block23;
block22:;
org$pandalanguage$pandac$MethodDecl* $tmp1591 = *(&local2);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp1592 = &$tmp1591->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp1593 = *$tmp1592;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1594;
$tmp1594 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1594->value = $tmp1593;
panda$core$Int64 $tmp1595 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1596 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1595);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1597;
$tmp1597 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1597->value = $tmp1596;
ITable* $tmp1598 = ((panda$core$Equatable*) $tmp1594)->$class->itable;
while ($tmp1598->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1598 = $tmp1598->next;
}
$fn1600 $tmp1599 = $tmp1598->methods[0];
panda$core$Bit $tmp1601 = $tmp1599(((panda$core$Equatable*) $tmp1594), ((panda$core$Equatable*) $tmp1597));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1597)));
// unreffing REF($204:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1594)));
// unreffing REF($200:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
*(&local5) = $tmp1601;
goto block23;
block23:;
panda$core$Bit $tmp1602 = *(&local5);
bool $tmp1603 = $tmp1602.value;
if ($tmp1603) goto block19; else goto block24;
block19:;
// line 372
org$pandalanguage$pandac$MethodRef* $tmp1604 = (org$pandalanguage$pandac$MethodRef*) frostObjectAlloc(41, (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class);
org$pandalanguage$pandac$MethodDecl* $tmp1605 = *(&local2);
panda$core$Weak** $tmp1606 = &$tmp1605->owner;
panda$core$Weak* $tmp1607 = *$tmp1606;
panda$core$Object* $tmp1608 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1607);
org$pandalanguage$pandac$Type** $tmp1609 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1608)->type;
org$pandalanguage$pandac$Type* $tmp1610 = *$tmp1609;
org$pandalanguage$pandac$MethodDecl* $tmp1611 = *(&local2);
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q($tmp1604, param0, $tmp1610, $tmp1611, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1604));
org$pandalanguage$pandac$MethodRef* $tmp1612 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1612));
*(&local3) = $tmp1604;
panda$core$Panda$unref$panda$core$Object$Q($tmp1608);
// unreffing REF($224:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1604));
// unreffing REF($219:org.pandalanguage.pandac.MethodRef)
goto block20;
block24:;
// line 1
// line 375
org$pandalanguage$pandac$MethodRef* $tmp1613 = (org$pandalanguage$pandac$MethodRef*) frostObjectAlloc(41, (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class);
panda$collections$Stack** $tmp1614 = &param0->currentClass;
panda$collections$Stack* $tmp1615 = *$tmp1614;
panda$core$Int64 $tmp1616 = (panda$core$Int64) {0};
panda$core$Object* $tmp1617 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp1615, $tmp1616);
org$pandalanguage$pandac$Type** $tmp1618 = &((org$pandalanguage$pandac$ClassDecl*) $tmp1617)->type;
org$pandalanguage$pandac$Type* $tmp1619 = *$tmp1618;
org$pandalanguage$pandac$MethodDecl* $tmp1620 = *(&local2);
panda$core$Weak** $tmp1621 = &$tmp1620->owner;
panda$core$Weak* $tmp1622 = *$tmp1621;
panda$core$Object* $tmp1623 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1622);
org$pandalanguage$pandac$Type* $tmp1624 = org$pandalanguage$pandac$Compiler$findType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(param0, $tmp1619, ((org$pandalanguage$pandac$ClassDecl*) $tmp1623));
panda$core$Bit $tmp1625 = panda$core$Bit$init$builtin_bit($tmp1624 != NULL);
bool $tmp1626 = $tmp1625.value;
if ($tmp1626) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp1627 = (panda$core$Int64) {375};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1628, $tmp1627, &$s1629);
abort(); // unreachable
block25:;
org$pandalanguage$pandac$MethodDecl* $tmp1630 = *(&local2);
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q($tmp1613, param0, $tmp1624, $tmp1630, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1613));
org$pandalanguage$pandac$MethodRef* $tmp1631 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1631));
*(&local3) = $tmp1613;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1624));
// unreffing REF($260:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp1623);
// unreffing REF($258:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp1617);
// unreffing REF($250:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1613));
// unreffing REF($245:org.pandalanguage.pandac.MethodRef)
goto block20;
block20:;
goto block11;
block11:;
// line 378
org$pandalanguage$pandac$MethodRef* $tmp1632 = *(&local3);
org$pandalanguage$pandac$MethodRef* $tmp1633 = org$pandalanguage$pandac$expression$Call$performTypeInference$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$MethodRef$Q(param0, $tmp1632, param5);
panda$core$Bit $tmp1634 = panda$core$Bit$init$builtin_bit($tmp1633 != NULL);
bool $tmp1635 = $tmp1634.value;
if ($tmp1635) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp1636 = (panda$core$Int64) {378};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1637, $tmp1636, &$s1638);
abort(); // unreachable
block27:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1633));
org$pandalanguage$pandac$MethodRef* $tmp1639 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1639));
*(&local3) = $tmp1633;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1633));
// unreffing REF($293:org.pandalanguage.pandac.MethodRef?)
// line 379
panda$core$Int64 $tmp1640 = (panda$core$Int64) {0};
*(&local6) = $tmp1640;
// line 380
panda$core$Int64 $tmp1641 = (panda$core$Int64) {0};
ITable* $tmp1642 = ((panda$collections$CollectionView*) param5)->$class->itable;
while ($tmp1642->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1642 = $tmp1642->next;
}
$fn1644 $tmp1643 = $tmp1642->methods[0];
panda$core$Int64 $tmp1645 = $tmp1643(((panda$collections$CollectionView*) param5));
panda$core$Bit $tmp1646 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1647 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1641, $tmp1645, $tmp1646);
panda$core$Int64 $tmp1648 = $tmp1647.min;
*(&local7) = $tmp1648;
panda$core$Int64 $tmp1649 = $tmp1647.max;
panda$core$Bit $tmp1650 = $tmp1647.inclusive;
bool $tmp1651 = $tmp1650.value;
panda$core$Int64 $tmp1652 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1653 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1652);
if ($tmp1651) goto block32; else goto block33;
block32:;
int64_t $tmp1654 = $tmp1648.value;
int64_t $tmp1655 = $tmp1649.value;
bool $tmp1656 = $tmp1654 <= $tmp1655;
panda$core$Bit $tmp1657 = (panda$core$Bit) {$tmp1656};
bool $tmp1658 = $tmp1657.value;
if ($tmp1658) goto block29; else goto block30;
block33:;
int64_t $tmp1659 = $tmp1648.value;
int64_t $tmp1660 = $tmp1649.value;
bool $tmp1661 = $tmp1659 < $tmp1660;
panda$core$Bit $tmp1662 = (panda$core$Bit) {$tmp1661};
bool $tmp1663 = $tmp1662.value;
if ($tmp1663) goto block29; else goto block30;
block29:;
// line 381
panda$core$Int64 $tmp1664 = *(&local7);
ITable* $tmp1665 = param5->$class->itable;
while ($tmp1665->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp1665 = $tmp1665->next;
}
$fn1667 $tmp1666 = $tmp1665->methods[0];
panda$core$Object* $tmp1668 = $tmp1666(param5, $tmp1664);
org$pandalanguage$pandac$MethodRef* $tmp1669 = *(&local3);
panda$core$Int64 $tmp1670 = *(&local7);
org$pandalanguage$pandac$Type* $tmp1671 = org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp1669, $tmp1670);
org$pandalanguage$pandac$Pair* $tmp1672 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Cpanda$core$Int64$GT$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp1668), $tmp1671);
*(&local8) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1672));
org$pandalanguage$pandac$Pair* $tmp1673 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1673));
*(&local8) = $tmp1672;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1672));
// unreffing REF($350:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, panda.core.Int64>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1671));
// unreffing REF($349:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1668);
// unreffing REF($345:panda.collections.ListView.T)
// line 382
org$pandalanguage$pandac$Pair* $tmp1674 = *(&local8);
panda$core$Bit $tmp1675 = panda$core$Bit$init$builtin_bit($tmp1674 == NULL);
bool $tmp1676 = $tmp1675.value;
if ($tmp1676) goto block34; else goto block35;
block34:;
// line 383
org$pandalanguage$pandac$Pair* $tmp1677 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1677));
// unreffing argCost
*(&local8) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp1678 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1678));
// unreffing ref
*(&local3) = ((org$pandalanguage$pandac$MethodRef*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1522);
// unreffing REF($44:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp1679 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1679));
// unreffing m
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block3;
block35:;
// line 385
panda$core$Int64 $tmp1680 = *(&local6);
org$pandalanguage$pandac$Pair* $tmp1681 = *(&local8);
panda$core$Bit $tmp1682 = panda$core$Bit$init$builtin_bit($tmp1681 != NULL);
bool $tmp1683 = $tmp1682.value;
if ($tmp1683) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp1684 = (panda$core$Int64) {385};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1685, $tmp1684, &$s1686);
abort(); // unreachable
block36:;
panda$core$Object** $tmp1687 = &$tmp1681->second;
panda$core$Object* $tmp1688 = *$tmp1687;
int64_t $tmp1689 = $tmp1680.value;
int64_t $tmp1690 = ((panda$core$Int64$wrapper*) $tmp1688)->value.value;
int64_t $tmp1691 = $tmp1689 + $tmp1690;
panda$core$Int64 $tmp1692 = (panda$core$Int64) {$tmp1691};
*(&local6) = $tmp1692;
org$pandalanguage$pandac$Pair* $tmp1693 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1693));
// unreffing argCost
*(&local8) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block31;
block31:;
panda$core$Int64 $tmp1694 = *(&local7);
int64_t $tmp1695 = $tmp1649.value;
int64_t $tmp1696 = $tmp1694.value;
int64_t $tmp1697 = $tmp1695 - $tmp1696;
panda$core$Int64 $tmp1698 = (panda$core$Int64) {$tmp1697};
panda$core$UInt64 $tmp1699 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1698);
if ($tmp1651) goto block39; else goto block40;
block39:;
uint64_t $tmp1700 = $tmp1699.value;
uint64_t $tmp1701 = $tmp1653.value;
bool $tmp1702 = $tmp1700 >= $tmp1701;
panda$core$Bit $tmp1703 = (panda$core$Bit) {$tmp1702};
bool $tmp1704 = $tmp1703.value;
if ($tmp1704) goto block38; else goto block30;
block40:;
uint64_t $tmp1705 = $tmp1699.value;
uint64_t $tmp1706 = $tmp1653.value;
bool $tmp1707 = $tmp1705 > $tmp1706;
panda$core$Bit $tmp1708 = (panda$core$Bit) {$tmp1707};
bool $tmp1709 = $tmp1708.value;
if ($tmp1709) goto block38; else goto block30;
block38:;
int64_t $tmp1710 = $tmp1694.value;
int64_t $tmp1711 = $tmp1652.value;
int64_t $tmp1712 = $tmp1710 + $tmp1711;
panda$core$Int64 $tmp1713 = (panda$core$Int64) {$tmp1712};
*(&local7) = $tmp1713;
goto block29;
block30:;
// line 387
panda$core$Int64* $tmp1714 = &param6->$rawValue;
panda$core$Int64 $tmp1715 = *$tmp1714;
panda$core$Int64 $tmp1716 = (panda$core$Int64) {2};
panda$core$Bit $tmp1717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1715, $tmp1716);
bool $tmp1718 = $tmp1717.value;
if ($tmp1718) goto block42; else goto block43;
block42:;
// line 389
org$pandalanguage$pandac$MethodDecl* $tmp1719 = *(&local2);
org$pandalanguage$pandac$Type** $tmp1720 = &$tmp1719->returnType;
org$pandalanguage$pandac$Type* $tmp1721 = *$tmp1720;
org$pandalanguage$pandac$Type* $tmp1722 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1723 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1721, $tmp1722);
bool $tmp1724 = $tmp1723.value;
if ($tmp1724) goto block46; else goto block47;
block46:;
*(&local9) = $tmp1723;
goto block48;
block47:;
org$pandalanguage$pandac$MethodRef* $tmp1725 = *(&local3);
org$pandalanguage$pandac$Type* $tmp1726 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type($tmp1725);
panda$core$Bit $tmp1727 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp1726);
panda$core$Bit $tmp1728 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1727);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1726));
// unreffing REF($461:org.pandalanguage.pandac.Type)
*(&local9) = $tmp1728;
goto block48;
block48:;
panda$core$Bit $tmp1729 = *(&local9);
bool $tmp1730 = $tmp1729.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1722));
// unreffing REF($454:org.pandalanguage.pandac.Type)
if ($tmp1730) goto block44; else goto block45;
block44:;
// line 390
org$pandalanguage$pandac$MethodRef* $tmp1731 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1731));
// unreffing ref
*(&local3) = ((org$pandalanguage$pandac$MethodRef*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1522);
// unreffing REF($44:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp1732 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1732));
// unreffing m
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block3;
block45:;
goto block41;
block43:;
panda$core$Int64 $tmp1733 = (panda$core$Int64) {3};
panda$core$Bit $tmp1734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1715, $tmp1733);
bool $tmp1735 = $tmp1734.value;
if ($tmp1735) goto block49; else goto block41;
block49:;
org$pandalanguage$pandac$Type** $tmp1736 = (org$pandalanguage$pandac$Type**) (param6->$data + 0);
org$pandalanguage$pandac$Type* $tmp1737 = *$tmp1736;
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1737));
org$pandalanguage$pandac$Type* $tmp1738 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1738));
*(&local10) = $tmp1737;
// line 394
org$pandalanguage$pandac$MethodRef* $tmp1739 = *(&local3);
org$pandalanguage$pandac$Type* $tmp1740 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type($tmp1739);
org$pandalanguage$pandac$Type* $tmp1741 = *(&local10);
org$pandalanguage$pandac$Pair* $tmp1742 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Cpanda$core$Int64$GT$Q(param0, $tmp1740, $tmp1741);
*(&local11) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1742));
org$pandalanguage$pandac$Pair* $tmp1743 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1743));
*(&local11) = $tmp1742;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1742));
// unreffing REF($508:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, panda.core.Int64>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1740));
// unreffing REF($506:org.pandalanguage.pandac.Type)
// line 395
org$pandalanguage$pandac$Pair* $tmp1744 = *(&local11);
panda$core$Bit $tmp1745 = panda$core$Bit$init$builtin_bit($tmp1744 == NULL);
bool $tmp1746 = $tmp1745.value;
if ($tmp1746) goto block50; else goto block51;
block50:;
// line 396
org$pandalanguage$pandac$Pair* $tmp1747 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1747));
// unreffing returnCost
*(&local11) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Type* $tmp1748 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1748));
// unreffing t
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp1749 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1749));
// unreffing ref
*(&local3) = ((org$pandalanguage$pandac$MethodRef*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1522);
// unreffing REF($44:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp1750 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1750));
// unreffing m
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block3;
block51:;
// line 398
panda$core$Int64 $tmp1751 = *(&local6);
org$pandalanguage$pandac$Pair* $tmp1752 = *(&local11);
panda$core$Bit $tmp1753 = panda$core$Bit$init$builtin_bit($tmp1752 != NULL);
bool $tmp1754 = $tmp1753.value;
if ($tmp1754) goto block52; else goto block53;
block53:;
panda$core$Int64 $tmp1755 = (panda$core$Int64) {398};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1756, $tmp1755, &$s1757);
abort(); // unreachable
block52:;
panda$core$Object** $tmp1758 = &$tmp1752->second;
panda$core$Object* $tmp1759 = *$tmp1758;
int64_t $tmp1760 = $tmp1751.value;
int64_t $tmp1761 = ((panda$core$Int64$wrapper*) $tmp1759)->value.value;
int64_t $tmp1762 = $tmp1760 + $tmp1761;
panda$core$Int64 $tmp1763 = (panda$core$Int64) {$tmp1762};
*(&local6) = $tmp1763;
org$pandalanguage$pandac$Pair* $tmp1764 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1764));
// unreffing returnCost
*(&local11) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Type* $tmp1765 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1765));
// unreffing t
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
goto block41;
block41:;
// line 401
panda$core$Int64 $tmp1766 = *(&local6);
org$pandalanguage$pandac$MethodDecl* $tmp1767 = *(&local2);
panda$core$Int64 $tmp1768 = org$pandalanguage$pandac$MethodDecl$get_priority$R$panda$core$Int64($tmp1767);
int64_t $tmp1769 = $tmp1766.value;
int64_t $tmp1770 = $tmp1768.value;
int64_t $tmp1771 = $tmp1769 - $tmp1770;
panda$core$Int64 $tmp1772 = (panda$core$Int64) {$tmp1771};
*(&local6) = $tmp1772;
// line 402
panda$core$Int64 $tmp1773 = *(&local6);
panda$core$Int64 $tmp1774 = *(&local0);
int64_t $tmp1775 = $tmp1773.value;
int64_t $tmp1776 = $tmp1774.value;
bool $tmp1777 = $tmp1775 < $tmp1776;
panda$core$Bit $tmp1778 = (panda$core$Bit) {$tmp1777};
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block54; else goto block55;
block54:;
// line 403
panda$core$Int64 $tmp1780 = *(&local6);
*(&local0) = $tmp1780;
// line 404
panda$collections$Array* $tmp1781 = *(&local1);
panda$collections$Array$clear($tmp1781);
goto block55;
block55:;
// line 406
panda$core$Int64 $tmp1782 = *(&local6);
panda$core$Int64 $tmp1783 = *(&local0);
panda$core$Bit $tmp1784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1782, $tmp1783);
bool $tmp1785 = $tmp1784.value;
if ($tmp1785) goto block56; else goto block57;
block56:;
// line 407
panda$collections$Array* $tmp1786 = *(&local1);
org$pandalanguage$pandac$MethodRef* $tmp1787 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp1786, ((panda$core$Object*) $tmp1787));
goto block57;
block57:;
org$pandalanguage$pandac$MethodRef* $tmp1788 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1788));
// unreffing ref
*(&local3) = ((org$pandalanguage$pandac$MethodRef*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1522);
// unreffing REF($44:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp1789 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1789));
// unreffing m
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1513));
// unreffing REF($33:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 410
panda$collections$Array* $tmp1790 = *(&local1);
ITable* $tmp1791 = ((panda$collections$CollectionView*) $tmp1790)->$class->itable;
while ($tmp1791->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1791 = $tmp1791->next;
}
$fn1793 $tmp1792 = $tmp1791->methods[0];
panda$core$Int64 $tmp1794 = $tmp1792(((panda$collections$CollectionView*) $tmp1790));
panda$core$Int64 $tmp1795 = (panda$core$Int64) {0};
panda$core$Bit $tmp1796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1794, $tmp1795);
bool $tmp1797 = $tmp1796.value;
if ($tmp1797) goto block58; else goto block59;
block58:;
// line 411
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) NULL)));
panda$collections$Array* $tmp1798 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1798));
// unreffing best
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$Pair*) NULL);
block59:;
// line 413
org$pandalanguage$pandac$Pair* $tmp1799 = (org$pandalanguage$pandac$Pair*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
panda$collections$Array* $tmp1800 = *(&local1);
panda$core$Int64 $tmp1801 = *(&local0);
panda$core$Int64$wrapper* $tmp1802;
$tmp1802 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1802->value = $tmp1801;
org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp1799, ((panda$core$Object*) ((panda$collections$ListView*) $tmp1800)), ((panda$core$Object*) $tmp1802));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1799));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1802));
// unreffing REF($664:org.pandalanguage.pandac.Pair.B)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1799));
// unreffing REF($658:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>)
panda$collections$Array* $tmp1803 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1803));
// unreffing best
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp1799;

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
org$pandalanguage$pandac$IR** $tmp1804 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp1805 = *$tmp1804;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1805));
org$pandalanguage$pandac$IR* $tmp1806 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1806));
*(&local0) = $tmp1805;
// line 420
$fn1808 $tmp1807 = ($fn1808) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1809 = $tmp1807(param2);
org$pandalanguage$pandac$Type* $tmp1810 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp1809);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1810));
org$pandalanguage$pandac$Type* $tmp1811 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1811));
*(&local1) = $tmp1810;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1810));
// unreffing REF($13:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1809));
// unreffing REF($12:org.pandalanguage.pandac.Type)
// line 421
org$pandalanguage$pandac$Type* $tmp1812 = *(&local1);
panda$core$Bit $tmp1813 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit($tmp1812);
panda$core$Bit $tmp1814 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1813);
bool $tmp1815 = $tmp1814.value;
if ($tmp1815) goto block1; else goto block2;
block1:;
// line 422
org$pandalanguage$pandac$Type* $tmp1816 = *(&local1);
panda$core$String* $tmp1817 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1818, ((panda$core$Object*) $tmp1816));
panda$core$String* $tmp1819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1817, &$s1820);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp1819);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1819));
// unreffing REF($37:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1817));
// unreffing REF($36:panda.core.String)
// line 423
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp1821 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1821));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1822 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1822));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block2:;
// line 425
org$pandalanguage$pandac$Type* $tmp1823 = *(&local1);
panda$core$Int64 $tmp1824 = org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64($tmp1823);
ITable* $tmp1825 = ((panda$collections$CollectionView*) param3)->$class->itable;
while ($tmp1825->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1825 = $tmp1825->next;
}
$fn1827 $tmp1826 = $tmp1825->methods[0];
panda$core$Int64 $tmp1828 = $tmp1826(((panda$collections$CollectionView*) param3));
int64_t $tmp1829 = $tmp1824.value;
int64_t $tmp1830 = $tmp1828.value;
bool $tmp1831 = $tmp1829 != $tmp1830;
panda$core$Bit $tmp1832 = (panda$core$Bit) {$tmp1831};
bool $tmp1833 = $tmp1832.value;
if ($tmp1833) goto block3; else goto block4;
block3:;
// line 426
org$pandalanguage$pandac$Type* $tmp1834 = *(&local1);
panda$core$String* $tmp1835 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1836, ((panda$core$Object*) $tmp1834));
panda$core$String* $tmp1837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1835, &$s1838);
org$pandalanguage$pandac$Type* $tmp1839 = *(&local1);
panda$core$Int64 $tmp1840 = org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64($tmp1839);
panda$core$Int64$wrapper* $tmp1841;
$tmp1841 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1841->value = $tmp1840;
panda$core$String* $tmp1842 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1837, ((panda$core$Object*) $tmp1841));
panda$core$String* $tmp1843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1842, &$s1844);
org$pandalanguage$pandac$Type* $tmp1845 = *(&local1);
panda$core$Int64 $tmp1846 = org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64($tmp1845);
panda$core$Int64 $tmp1847 = (panda$core$Int64) {1};
panda$core$Bit $tmp1848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1846, $tmp1847);
panda$core$Bit$wrapper* $tmp1849;
$tmp1849 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp1849->value = $tmp1848;
ITable* $tmp1850 = ((panda$core$Formattable*) $tmp1849)->$class->itable;
while ($tmp1850->$class != (panda$core$Class*) &panda$core$Formattable$class) {
    $tmp1850 = $tmp1850->next;
}
$fn1852 $tmp1851 = $tmp1850->methods[0];
panda$core$String* $tmp1853 = $tmp1851(((panda$core$Formattable*) $tmp1849), &$s1854);
panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1856, $tmp1853);
panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1855, &$s1858);
ITable* $tmp1859 = ((panda$collections$CollectionView*) param3)->$class->itable;
while ($tmp1859->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1859 = $tmp1859->next;
}
$fn1861 $tmp1860 = $tmp1859->methods[0];
panda$core$Int64 $tmp1862 = $tmp1860(((panda$collections$CollectionView*) param3));
panda$core$Int64$wrapper* $tmp1863;
$tmp1863 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1863->value = $tmp1862;
panda$core$String* $tmp1864 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1857, ((panda$core$Object*) $tmp1863));
panda$core$String* $tmp1865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, &$s1866);
panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1843, $tmp1865);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp1867);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1867));
// unreffing REF($96:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1865));
// unreffing REF($95:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1864));
// unreffing REF($94:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1863));
// unreffing REF($93:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1857));
// unreffing REF($89:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1855));
// unreffing REF($88:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1853));
// unreffing REF($87:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Formattable*) $tmp1849)));
// unreffing REF($85:panda.core.Formattable)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1843));
// unreffing REF($80:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1842));
// unreffing REF($79:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1841));
// unreffing REF($78:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1837));
// unreffing REF($75:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1835));
// unreffing REF($74:panda.core.String)
// line 428
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp1868 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1868));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1869 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1869));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block4:;
// line 430
panda$collections$Array* $tmp1870 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
ITable* $tmp1871 = ((panda$collections$CollectionView*) param3)->$class->itable;
while ($tmp1871->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1871 = $tmp1871->next;
}
$fn1873 $tmp1872 = $tmp1871->methods[0];
panda$core$Int64 $tmp1874 = $tmp1872(((panda$collections$CollectionView*) param3));
panda$collections$Array$init$panda$core$Int64($tmp1870, $tmp1874);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1870));
panda$collections$Array* $tmp1875 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1875));
*(&local2) = $tmp1870;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1870));
// unreffing REF($152:panda.collections.Array<org.pandalanguage.pandac.IR.Value>)
// line 431
panda$core$Int64 $tmp1876 = (panda$core$Int64) {0};
ITable* $tmp1877 = ((panda$collections$CollectionView*) param3)->$class->itable;
while ($tmp1877->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1877 = $tmp1877->next;
}
$fn1879 $tmp1878 = $tmp1877->methods[0];
panda$core$Int64 $tmp1880 = $tmp1878(((panda$collections$CollectionView*) param3));
panda$core$Bit $tmp1881 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp1882 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp1876, $tmp1880, $tmp1881);
panda$core$Int64 $tmp1883 = $tmp1882.min;
*(&local3) = $tmp1883;
panda$core$Int64 $tmp1884 = $tmp1882.max;
panda$core$Bit $tmp1885 = $tmp1882.inclusive;
bool $tmp1886 = $tmp1885.value;
panda$core$Int64 $tmp1887 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp1888 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1887);
if ($tmp1886) goto block8; else goto block9;
block8:;
int64_t $tmp1889 = $tmp1883.value;
int64_t $tmp1890 = $tmp1884.value;
bool $tmp1891 = $tmp1889 <= $tmp1890;
panda$core$Bit $tmp1892 = (panda$core$Bit) {$tmp1891};
bool $tmp1893 = $tmp1892.value;
if ($tmp1893) goto block5; else goto block6;
block9:;
int64_t $tmp1894 = $tmp1883.value;
int64_t $tmp1895 = $tmp1884.value;
bool $tmp1896 = $tmp1894 < $tmp1895;
panda$core$Bit $tmp1897 = (panda$core$Bit) {$tmp1896};
bool $tmp1898 = $tmp1897.value;
if ($tmp1898) goto block5; else goto block6;
block5:;
// line 432
panda$core$Int64 $tmp1899 = *(&local3);
ITable* $tmp1900 = param3->$class->itable;
while ($tmp1900->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp1900 = $tmp1900->next;
}
$fn1902 $tmp1901 = $tmp1900->methods[0];
panda$core$Object* $tmp1903 = $tmp1901(param3, $tmp1899);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1904 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1905 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1906 = *(&local1);
panda$core$Int64 $tmp1907 = *(&local3);
org$pandalanguage$pandac$Type* $tmp1908 = org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp1906, $tmp1907);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1904, $tmp1905, $tmp1908);
org$pandalanguage$pandac$IR$Value* $tmp1909 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp1903), $tmp1904);
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1909));
org$pandalanguage$pandac$IR$Value* $tmp1910 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1910));
*(&local4) = $tmp1909;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1909));
// unreffing REF($207:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1908));
// unreffing REF($205:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1904));
// unreffing REF($201:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp1903);
// unreffing REF($199:panda.collections.ListView.T)
// line 434
org$pandalanguage$pandac$IR$Value* $tmp1911 = *(&local4);
panda$core$Bit $tmp1912 = panda$core$Bit$init$builtin_bit($tmp1911 == NULL);
bool $tmp1913 = $tmp1912.value;
if ($tmp1913) goto block10; else goto block11;
block10:;
// line 435
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp1914 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1914));
// unreffing compiled
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp1915 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1915));
// unreffing finalArgs
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp1916 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1916));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1917 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1917));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block11:;
// line 437
panda$collections$Array* $tmp1918 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp1919 = *(&local4);
panda$core$Bit $tmp1920 = panda$core$Bit$init$builtin_bit($tmp1919 != NULL);
bool $tmp1921 = $tmp1920.value;
if ($tmp1921) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp1922 = (panda$core$Int64) {437};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1923, $tmp1922, &$s1924);
abort(); // unreachable
block12:;
panda$collections$Array$add$panda$collections$Array$T($tmp1918, ((panda$core$Object*) $tmp1919));
org$pandalanguage$pandac$IR$Value* $tmp1925 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1925));
// unreffing compiled
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block7;
block7:;
panda$core$Int64 $tmp1926 = *(&local3);
int64_t $tmp1927 = $tmp1884.value;
int64_t $tmp1928 = $tmp1926.value;
int64_t $tmp1929 = $tmp1927 - $tmp1928;
panda$core$Int64 $tmp1930 = (panda$core$Int64) {$tmp1929};
panda$core$UInt64 $tmp1931 = panda$core$Int64$convert$R$panda$core$UInt64($tmp1930);
if ($tmp1886) goto block15; else goto block16;
block15:;
uint64_t $tmp1932 = $tmp1931.value;
uint64_t $tmp1933 = $tmp1888.value;
bool $tmp1934 = $tmp1932 >= $tmp1933;
panda$core$Bit $tmp1935 = (panda$core$Bit) {$tmp1934};
bool $tmp1936 = $tmp1935.value;
if ($tmp1936) goto block14; else goto block6;
block16:;
uint64_t $tmp1937 = $tmp1931.value;
uint64_t $tmp1938 = $tmp1888.value;
bool $tmp1939 = $tmp1937 > $tmp1938;
panda$core$Bit $tmp1940 = (panda$core$Bit) {$tmp1939};
bool $tmp1941 = $tmp1940.value;
if ($tmp1941) goto block14; else goto block6;
block14:;
int64_t $tmp1942 = $tmp1926.value;
int64_t $tmp1943 = $tmp1887.value;
int64_t $tmp1944 = $tmp1942 + $tmp1943;
panda$core$Int64 $tmp1945 = (panda$core$Int64) {$tmp1944};
*(&local3) = $tmp1945;
goto block5;
block6:;
// line 439
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 440
org$pandalanguage$pandac$IR* $tmp1946 = *(&local0);
panda$collections$Array** $tmp1947 = &$tmp1946->locals;
panda$collections$Array* $tmp1948 = *$tmp1947;
ITable* $tmp1949 = ((panda$collections$CollectionView*) $tmp1948)->$class->itable;
while ($tmp1949->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1949 = $tmp1949->next;
}
$fn1951 $tmp1950 = $tmp1949->methods[0];
panda$core$Int64 $tmp1952 = $tmp1950(((panda$collections$CollectionView*) $tmp1948));
*(&local6) = $tmp1952;
// line 441
org$pandalanguage$pandac$Type* $tmp1953 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1954 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp1953);
org$pandalanguage$pandac$Type* $tmp1955 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp1956 = ((panda$core$Equatable*) $tmp1954)->$class->itable;
while ($tmp1956->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1956 = $tmp1956->next;
}
$fn1958 $tmp1957 = $tmp1956->methods[1];
panda$core$Bit $tmp1959 = $tmp1957(((panda$core$Equatable*) $tmp1954), ((panda$core$Equatable*) $tmp1955));
bool $tmp1960 = $tmp1959.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1955));
// unreffing REF($317:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1954));
// unreffing REF($314:org.pandalanguage.pandac.Type)
if ($tmp1960) goto block17; else goto block19;
block17:;
// line 442
org$pandalanguage$pandac$IR* $tmp1961 = *(&local0);
panda$collections$Array** $tmp1962 = &$tmp1961->locals;
panda$collections$Array* $tmp1963 = *$tmp1962;
org$pandalanguage$pandac$Type* $tmp1964 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1965 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp1964);
panda$collections$Array$add$panda$collections$Array$T($tmp1963, ((panda$core$Object*) $tmp1965));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1965));
// unreffing REF($335:org.pandalanguage.pandac.Type)
// line 443
org$pandalanguage$pandac$IR$Value* $tmp1966 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1967 = (panda$core$Int64) {2};
panda$core$Int64 $tmp1968 = *(&local6);
org$pandalanguage$pandac$Type* $tmp1969 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1970 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp1969);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1966, $tmp1967, $tmp1968, $tmp1970);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1966));
org$pandalanguage$pandac$IR$Value* $tmp1971 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1971));
*(&local5) = $tmp1966;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1970));
// unreffing REF($346:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1966));
// unreffing REF($342:org.pandalanguage.pandac.IR.Value)
goto block18;
block19:;
// line 1
// line 446
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp1972 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1972));
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block18;
block18:;
// line 448
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
// line 449
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
// line 450
$fn1974 $tmp1973 = ($fn1974) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1975 = $tmp1973(param2);
panda$core$Bit $tmp1976 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp1975);
bool $tmp1977 = $tmp1976.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1975));
// unreffing REF($377:org.pandalanguage.pandac.Type)
if ($tmp1977) goto block20; else goto block22;
block20:;
// line 451
org$pandalanguage$pandac$Type* $tmp1978 = org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1978));
org$pandalanguage$pandac$Type* $tmp1979 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1979));
*(&local7) = $tmp1978;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1978));
// unreffing REF($385:org.pandalanguage.pandac.Type)
// line 452
org$pandalanguage$pandac$Type* $tmp1980 = org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1980));
org$pandalanguage$pandac$Type* $tmp1981 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1981));
*(&local8) = $tmp1980;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1980));
// unreffing REF($396:org.pandalanguage.pandac.Type)
goto block21;
block22:;
// line 1
// line 455
org$pandalanguage$pandac$Type* $tmp1982 = org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1982));
org$pandalanguage$pandac$Type* $tmp1983 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
*(&local7) = $tmp1982;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1982));
// unreffing REF($409:org.pandalanguage.pandac.Type)
// line 456
org$pandalanguage$pandac$Type* $tmp1984 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1984));
org$pandalanguage$pandac$Type* $tmp1985 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1985));
*(&local8) = $tmp1984;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1984));
// unreffing REF($420:org.pandalanguage.pandac.Type)
goto block21;
block21:;
// line 458
org$pandalanguage$pandac$Type* $tmp1986 = *(&local7);
org$pandalanguage$pandac$ClassDecl* $tmp1987 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp1986);
panda$core$Bit $tmp1988 = panda$core$Bit$init$builtin_bit($tmp1987 != NULL);
bool $tmp1989 = $tmp1988.value;
if ($tmp1989) goto block23; else goto block24;
block24:;
panda$core$Int64 $tmp1990 = (panda$core$Int64) {458};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1991, $tmp1990, &$s1992);
abort(); // unreachable
block23:;
org$pandalanguage$pandac$SymbolTable* $tmp1993 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp1987);
*(&local9) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1993));
org$pandalanguage$pandac$SymbolTable* $tmp1994 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1994));
*(&local9) = $tmp1993;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1993));
// unreffing REF($442:org.pandalanguage.pandac.SymbolTable)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1987));
// unreffing REF($433:org.pandalanguage.pandac.ClassDecl?)
// line 459
org$pandalanguage$pandac$SymbolTable* $tmp1995 = *(&local9);
org$pandalanguage$pandac$Symbol* $tmp1996 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp1995, &$s1997);
*(&local10) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp1996)));
org$pandalanguage$pandac$FieldDecl* $tmp1998 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1998));
*(&local10) = ((org$pandalanguage$pandac$FieldDecl*) $tmp1996);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1996));
// unreffing REF($458:org.pandalanguage.pandac.Symbol?)
// line 460
org$pandalanguage$pandac$FieldDecl* $tmp1999 = *(&local10);
panda$core$Bit $tmp2000 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(param0, $tmp1999);
panda$core$Bit $tmp2001 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2000);
bool $tmp2002 = $tmp2001.value;
if ($tmp2002) goto block25; else goto block26;
block25:;
// line 461
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$FieldDecl* $tmp2003 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2003));
// unreffing pointerField
*(&local10) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$SymbolTable* $tmp2004 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2004));
// unreffing st
*(&local9) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
org$pandalanguage$pandac$Type* $tmp2005 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2005));
// unreffing targetType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp2006 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2006));
// unreffing methodType
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2007 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2007));
// unreffing result
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp2008 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2008));
// unreffing finalArgs
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp2009 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2009));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp2010 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2010));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block26:;
// line 463
org$pandalanguage$pandac$Type* $tmp2011 = *(&local7);
org$pandalanguage$pandac$IR$Value* $tmp2012 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, $tmp2011);
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2012));
org$pandalanguage$pandac$IR$Value* $tmp2013 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2013));
*(&local11) = $tmp2012;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2012));
// unreffing REF($523:org.pandalanguage.pandac.IR.Value?)
// line 464
org$pandalanguage$pandac$IR* $tmp2014 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2015 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2016 = (panda$core$Int64) {10};
org$pandalanguage$pandac$IR$Value* $tmp2017 = *(&local11);
panda$core$Bit $tmp2018 = panda$core$Bit$init$builtin_bit($tmp2017 != NULL);
bool $tmp2019 = $tmp2018.value;
if ($tmp2019) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp2020 = (panda$core$Int64) {464};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2021, $tmp2020, &$s2022);
abort(); // unreachable
block27:;
org$pandalanguage$pandac$FieldDecl* $tmp2023 = *(&local10);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp2015, $tmp2016, param1, $tmp2017, $tmp2023);
$fn2025 $tmp2024 = ($fn2025) $tmp2014->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2026 = $tmp2024($tmp2014, $tmp2015);
*(&local12) = $tmp2026;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2015));
// unreffing REF($536:org.pandalanguage.pandac.IR.Statement)
// line 466
org$pandalanguage$pandac$IR* $tmp2027 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2028 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2029 = (panda$core$Int64) {13};
org$pandalanguage$pandac$IR$Value* $tmp2030 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp2031 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp2032 = *(&local12);
org$pandalanguage$pandac$Type* $tmp2033 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp2034 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp2033);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp2030, $tmp2031, $tmp2032, $tmp2034);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp2028, $tmp2029, param1, $tmp2030);
$fn2036 $tmp2035 = ($fn2036) $tmp2027->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2037 = $tmp2035($tmp2027, $tmp2028);
*(&local13) = $tmp2037;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2034));
// unreffing REF($563:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2033));
// unreffing REF($562:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2030));
// unreffing REF($559:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2028));
// unreffing REF($557:org.pandalanguage.pandac.IR.Statement)
// line 468
org$pandalanguage$pandac$SymbolTable* $tmp2038 = *(&local9);
org$pandalanguage$pandac$Symbol* $tmp2039 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2038, &$s2040);
*(&local14) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp2039)));
org$pandalanguage$pandac$FieldDecl* $tmp2041 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2041));
*(&local14) = ((org$pandalanguage$pandac$FieldDecl*) $tmp2039);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2039));
// unreffing REF($583:org.pandalanguage.pandac.Symbol?)
// line 469
org$pandalanguage$pandac$FieldDecl* $tmp2042 = *(&local14);
panda$core$Bit $tmp2043 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(param0, $tmp2042);
panda$core$Bit $tmp2044 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2043);
bool $tmp2045 = $tmp2044.value;
if ($tmp2045) goto block29; else goto block30;
block29:;
// line 470
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$FieldDecl* $tmp2046 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2046));
// unreffing targetField
*(&local14) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2047 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2047));
// unreffing methodObj
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2048 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2048));
// unreffing pointerField
*(&local10) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$SymbolTable* $tmp2049 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2049));
// unreffing st
*(&local9) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
org$pandalanguage$pandac$Type* $tmp2050 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2050));
// unreffing targetType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp2051 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2051));
// unreffing methodType
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2052 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2052));
// unreffing result
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp2053 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2053));
// unreffing finalArgs
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp2054 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2054));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp2055 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2055));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block30:;
// line 472
org$pandalanguage$pandac$IR* $tmp2056 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2057 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2058 = (panda$core$Int64) {10};
org$pandalanguage$pandac$IR$Value* $tmp2059 = *(&local11);
panda$core$Bit $tmp2060 = panda$core$Bit$init$builtin_bit($tmp2059 != NULL);
bool $tmp2061 = $tmp2060.value;
if ($tmp2061) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp2062 = (panda$core$Int64) {472};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2063, $tmp2062, &$s2064);
abort(); // unreachable
block31:;
org$pandalanguage$pandac$FieldDecl* $tmp2065 = *(&local14);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp2057, $tmp2058, param1, $tmp2059, $tmp2065);
$fn2067 $tmp2066 = ($fn2067) $tmp2056->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2068 = $tmp2066($tmp2056, $tmp2057);
*(&local15) = $tmp2068;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2057));
// unreffing REF($657:org.pandalanguage.pandac.IR.Statement)
// line 473
org$pandalanguage$pandac$IR* $tmp2069 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2070 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2071 = (panda$core$Int64) {13};
org$pandalanguage$pandac$IR$Value* $tmp2072 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp2073 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp2074 = *(&local15);
org$pandalanguage$pandac$Type* $tmp2075 = *(&local8);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp2072, $tmp2073, $tmp2074, $tmp2075);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp2070, $tmp2071, param1, $tmp2072);
$fn2077 $tmp2076 = ($fn2077) $tmp2069->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2078 = $tmp2076($tmp2069, $tmp2070);
*(&local16) = $tmp2078;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2072));
// unreffing REF($680:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2070));
// unreffing REF($678:org.pandalanguage.pandac.IR.Statement)
// line 474
org$pandalanguage$pandac$IR* $tmp2079 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2080 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2081 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Value* $tmp2082 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp2083 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp2084 = *(&local16);
org$pandalanguage$pandac$Type* $tmp2085 = *(&local8);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp2082, $tmp2083, $tmp2084, $tmp2085);
panda$core$Int64 $tmp2086 = (panda$core$Int64) {62};
org$pandalanguage$pandac$parser$Token$Kind $tmp2087 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2086);
org$pandalanguage$pandac$IR$Value* $tmp2088 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp2089 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Type* $tmp2090 = *(&local8);
org$pandalanguage$pandac$Type* $tmp2091 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp2090);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2088, $tmp2089, $tmp2091);
org$pandalanguage$pandac$Type* $tmp2092 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$Type($tmp2080, $tmp2081, param1, $tmp2082, $tmp2087, $tmp2088, $tmp2092);
$fn2094 $tmp2093 = ($fn2094) $tmp2079->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2095 = $tmp2093($tmp2079, $tmp2080);
*(&local17) = $tmp2095;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2092));
// unreffing REF($711:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2091));
// unreffing REF($709:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2088));
// unreffing REF($706:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2082));
// unreffing REF($699:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2080));
// unreffing REF($697:org.pandalanguage.pandac.IR.Statement)
// line 476
org$pandalanguage$pandac$IR* $tmp2096 = *(&local0);
$fn2098 $tmp2097 = ($fn2098) $tmp2096->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp2099 = $tmp2097($tmp2096, &$s2100);
*(&local18) = $tmp2099;
// line 477
org$pandalanguage$pandac$IR* $tmp2101 = *(&local0);
$fn2103 $tmp2102 = ($fn2103) $tmp2101->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp2104 = $tmp2102($tmp2101, &$s2105);
*(&local19) = $tmp2104;
// line 478
org$pandalanguage$pandac$IR* $tmp2106 = *(&local0);
$fn2108 $tmp2107 = ($fn2108) $tmp2106->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp2109 = $tmp2107($tmp2106, &$s2110);
*(&local20) = $tmp2109;
// line 479
org$pandalanguage$pandac$IR* $tmp2111 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2112 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2113 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp2114 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp2115 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp2116 = *(&local17);
org$pandalanguage$pandac$Type* $tmp2117 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp2114, $tmp2115, $tmp2116, $tmp2117);
org$pandalanguage$pandac$IR$Block$ID $tmp2118 = *(&local18);
org$pandalanguage$pandac$IR$Block$ID $tmp2119 = *(&local19);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp2112, $tmp2113, param1, $tmp2114, $tmp2118, $tmp2119);
$fn2121 $tmp2120 = ($fn2121) $tmp2111->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2122 = $tmp2120($tmp2111, $tmp2112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2117));
// unreffing REF($753:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2114));
// unreffing REF($750:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2112));
// unreffing REF($748:org.pandalanguage.pandac.IR.Statement)
// line 481
org$pandalanguage$pandac$IR* $tmp2123 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp2124 = *(&local19);
$fn2126 $tmp2125 = ($fn2126) $tmp2123->$class->vtable[4];
$tmp2125($tmp2123, $tmp2124);
// line 482
org$pandalanguage$pandac$IR$Value* $tmp2127 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp2128 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp2129 = *(&local13);
org$pandalanguage$pandac$Type* $tmp2130 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp2131 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp2130);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp2127, $tmp2128, $tmp2129, $tmp2131);
org$pandalanguage$pandac$Type* $tmp2132 = *(&local1);
org$pandalanguage$pandac$Type* $tmp2133 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp2132);
org$pandalanguage$pandac$IR$Value* $tmp2134 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2127, $tmp2133);
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2134));
org$pandalanguage$pandac$IR$Value* $tmp2135 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2135));
*(&local21) = $tmp2134;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2134));
// unreffing REF($784:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2133));
// unreffing REF($783:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2131));
// unreffing REF($779:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2130));
// unreffing REF($778:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2127));
// unreffing REF($775:org.pandalanguage.pandac.IR.Value)
// line 484
org$pandalanguage$pandac$IR* $tmp2136 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2137 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2138 = (panda$core$Int64) {8};
org$pandalanguage$pandac$IR$Value* $tmp2139 = *(&local21);
panda$core$Bit $tmp2140 = panda$core$Bit$init$builtin_bit($tmp2139 != NULL);
bool $tmp2141 = $tmp2140.value;
if ($tmp2141) goto block33; else goto block34;
block34:;
panda$core$Int64 $tmp2142 = (panda$core$Int64) {484};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2143, $tmp2142, &$s2144);
abort(); // unreachable
block33:;
org$pandalanguage$pandac$FixedArray* $tmp2145 = (org$pandalanguage$pandac$FixedArray*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
panda$collections$Array* $tmp2146 = *(&local2);
org$pandalanguage$pandac$FixedArray$init$panda$collections$ListView$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp2145, ((panda$collections$ListView*) $tmp2146));
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT($tmp2137, $tmp2138, param1, $tmp2139, $tmp2145);
$fn2148 $tmp2147 = ($fn2148) $tmp2136->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2149 = $tmp2147($tmp2136, $tmp2137);
*(&local22) = $tmp2149;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2145));
// unreffing REF($820:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.IR.Value>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2137));
// unreffing REF($809:org.pandalanguage.pandac.IR.Statement)
// line 486
org$pandalanguage$pandac$IR$Value* $tmp2150 = *(&local5);
panda$core$Bit $tmp2151 = panda$core$Bit$init$builtin_bit($tmp2150 != NULL);
bool $tmp2152 = $tmp2151.value;
if ($tmp2152) goto block35; else goto block36;
block35:;
// line 487
org$pandalanguage$pandac$IR* $tmp2153 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2154 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2155 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp2156 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp2157 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp2158 = *(&local22);
org$pandalanguage$pandac$Type* $tmp2159 = *(&local1);
org$pandalanguage$pandac$Type* $tmp2160 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp2159);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp2156, $tmp2157, $tmp2158, $tmp2160);
org$pandalanguage$pandac$IR$Value* $tmp2161 = *(&local5);
panda$core$Bit $tmp2162 = panda$core$Bit$init$builtin_bit($tmp2161 != NULL);
bool $tmp2163 = $tmp2162.value;
if ($tmp2163) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp2164 = (panda$core$Int64) {488};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2165, $tmp2164, &$s2166);
abort(); // unreachable
block37:;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp2154, $tmp2155, param1, $tmp2156, $tmp2161);
$fn2168 $tmp2167 = ($fn2168) $tmp2153->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2169 = $tmp2167($tmp2153, $tmp2154);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2160));
// unreffing REF($850:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2156));
// unreffing REF($846:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2154));
// unreffing REF($844:org.pandalanguage.pandac.IR.Statement)
goto block36;
block36:;
// line 490
org$pandalanguage$pandac$IR* $tmp2170 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2171 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2172 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp2173 = *(&local20);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp2171, $tmp2172, param1, $tmp2173);
$fn2175 $tmp2174 = ($fn2175) $tmp2170->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2176 = $tmp2174($tmp2170, $tmp2171);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2171));
// unreffing REF($876:org.pandalanguage.pandac.IR.Statement)
// line 491
org$pandalanguage$pandac$IR* $tmp2177 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp2178 = *(&local18);
$fn2180 $tmp2179 = ($fn2180) $tmp2177->$class->vtable[4];
$tmp2179($tmp2177, $tmp2178);
// line 492
panda$collections$Array* $tmp2181 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2181);
*(&local23) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2181));
panda$collections$Array* $tmp2182 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2182));
*(&local23) = $tmp2181;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2181));
// unreffing REF($891:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 493
panda$collections$Array* $tmp2183 = *(&local23);
org$pandalanguage$pandac$Type* $tmp2184 = *(&local8);
panda$collections$Array$add$panda$collections$Array$T($tmp2183, ((panda$core$Object*) $tmp2184));
// line 494
panda$core$Int64 $tmp2185 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp2186 = *(&local1);
panda$core$Int64 $tmp2187 = org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64($tmp2186);
panda$core$Bit $tmp2188 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2189 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2185, $tmp2187, $tmp2188);
panda$core$Int64 $tmp2190 = $tmp2189.min;
*(&local24) = $tmp2190;
panda$core$Int64 $tmp2191 = $tmp2189.max;
panda$core$Bit $tmp2192 = $tmp2189.inclusive;
bool $tmp2193 = $tmp2192.value;
panda$core$Int64 $tmp2194 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp2195 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2194);
if ($tmp2193) goto block42; else goto block43;
block42:;
int64_t $tmp2196 = $tmp2190.value;
int64_t $tmp2197 = $tmp2191.value;
bool $tmp2198 = $tmp2196 <= $tmp2197;
panda$core$Bit $tmp2199 = (panda$core$Bit) {$tmp2198};
bool $tmp2200 = $tmp2199.value;
if ($tmp2200) goto block39; else goto block40;
block43:;
int64_t $tmp2201 = $tmp2190.value;
int64_t $tmp2202 = $tmp2191.value;
bool $tmp2203 = $tmp2201 < $tmp2202;
panda$core$Bit $tmp2204 = (panda$core$Bit) {$tmp2203};
bool $tmp2205 = $tmp2204.value;
if ($tmp2205) goto block39; else goto block40;
block39:;
// line 495
panda$collections$Array* $tmp2206 = *(&local23);
org$pandalanguage$pandac$Type* $tmp2207 = *(&local1);
panda$core$Int64 $tmp2208 = *(&local24);
org$pandalanguage$pandac$Type* $tmp2209 = org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp2207, $tmp2208);
panda$collections$Array$add$panda$collections$Array$T($tmp2206, ((panda$core$Object*) $tmp2209));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2209));
// unreffing REF($941:org.pandalanguage.pandac.Type)
goto block41;
block41:;
panda$core$Int64 $tmp2210 = *(&local24);
int64_t $tmp2211 = $tmp2191.value;
int64_t $tmp2212 = $tmp2210.value;
int64_t $tmp2213 = $tmp2211 - $tmp2212;
panda$core$Int64 $tmp2214 = (panda$core$Int64) {$tmp2213};
panda$core$UInt64 $tmp2215 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2214);
if ($tmp2193) goto block45; else goto block46;
block45:;
uint64_t $tmp2216 = $tmp2215.value;
uint64_t $tmp2217 = $tmp2195.value;
bool $tmp2218 = $tmp2216 >= $tmp2217;
panda$core$Bit $tmp2219 = (panda$core$Bit) {$tmp2218};
bool $tmp2220 = $tmp2219.value;
if ($tmp2220) goto block44; else goto block40;
block46:;
uint64_t $tmp2221 = $tmp2215.value;
uint64_t $tmp2222 = $tmp2195.value;
bool $tmp2223 = $tmp2221 > $tmp2222;
panda$core$Bit $tmp2224 = (panda$core$Bit) {$tmp2223};
bool $tmp2225 = $tmp2224.value;
if ($tmp2225) goto block44; else goto block40;
block44:;
int64_t $tmp2226 = $tmp2210.value;
int64_t $tmp2227 = $tmp2194.value;
int64_t $tmp2228 = $tmp2226 + $tmp2227;
panda$core$Int64 $tmp2229 = (panda$core$Int64) {$tmp2228};
*(&local24) = $tmp2229;
goto block39;
block40:;
// line 497
org$pandalanguage$pandac$Type* $tmp2230 = *(&local1);
org$pandalanguage$pandac$Type$Kind* $tmp2231 = &$tmp2230->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp2232 = *$tmp2231;
panda$collections$Array* $tmp2233 = *(&local23);
org$pandalanguage$pandac$Type* $tmp2234 = *(&local1);
org$pandalanguage$pandac$Type* $tmp2235 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp2234);
panda$core$Int64 $tmp2236 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp2237 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type(param1, $tmp2232, ((panda$collections$ListView*) $tmp2233), $tmp2235, $tmp2236);
*(&local25) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2237));
org$pandalanguage$pandac$Type* $tmp2238 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2238));
*(&local25) = $tmp2237;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2237));
// unreffing REF($982:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2235));
// unreffing REF($980:org.pandalanguage.pandac.Type)
// line 499
org$pandalanguage$pandac$IR$Value* $tmp2239 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp2240 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp2241 = *(&local13);
org$pandalanguage$pandac$Type* $tmp2242 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp2243 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp2242);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp2239, $tmp2240, $tmp2241, $tmp2243);
org$pandalanguage$pandac$Type* $tmp2244 = *(&local25);
org$pandalanguage$pandac$Type* $tmp2245 = org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp2244);
org$pandalanguage$pandac$IR$Value* $tmp2246 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2239, $tmp2245);
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2246));
org$pandalanguage$pandac$IR$Value* $tmp2247 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2247));
*(&local26) = $tmp2246;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2246));
// unreffing REF($1006:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2245));
// unreffing REF($1005:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2243));
// unreffing REF($1001:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2242));
// unreffing REF($1000:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2239));
// unreffing REF($997:org.pandalanguage.pandac.IR.Value)
// line 501
panda$collections$Array* $tmp2248 = *(&local2);
panda$core$Int64 $tmp2249 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Value* $tmp2250 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp2251 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp2252 = *(&local16);
org$pandalanguage$pandac$Type* $tmp2253 = *(&local8);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp2250, $tmp2251, $tmp2252, $tmp2253);
panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T($tmp2248, $tmp2249, ((panda$core$Object*) $tmp2250));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2250));
// unreffing REF($1033:org.pandalanguage.pandac.IR.Value)
// line 502
org$pandalanguage$pandac$IR* $tmp2254 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2255 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2256 = (panda$core$Int64) {8};
org$pandalanguage$pandac$IR$Value* $tmp2257 = *(&local26);
panda$core$Bit $tmp2258 = panda$core$Bit$init$builtin_bit($tmp2257 != NULL);
bool $tmp2259 = $tmp2258.value;
if ($tmp2259) goto block47; else goto block48;
block48:;
panda$core$Int64 $tmp2260 = (panda$core$Int64) {502};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2261, $tmp2260, &$s2262);
abort(); // unreachable
block47:;
org$pandalanguage$pandac$FixedArray* $tmp2263 = (org$pandalanguage$pandac$FixedArray*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
panda$collections$Array* $tmp2264 = *(&local2);
org$pandalanguage$pandac$FixedArray$init$panda$collections$ListView$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp2263, ((panda$collections$ListView*) $tmp2264));
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT($tmp2255, $tmp2256, param1, $tmp2257, $tmp2263);
$fn2266 $tmp2265 = ($fn2266) $tmp2254->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2267 = $tmp2265($tmp2254, $tmp2255);
*(&local27) = $tmp2267;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2263));
// unreffing REF($1056:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.IR.Value>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2255));
// unreffing REF($1045:org.pandalanguage.pandac.IR.Statement)
// line 504
org$pandalanguage$pandac$IR$Value* $tmp2268 = *(&local5);
panda$core$Bit $tmp2269 = panda$core$Bit$init$builtin_bit($tmp2268 != NULL);
bool $tmp2270 = $tmp2269.value;
if ($tmp2270) goto block49; else goto block50;
block49:;
// line 505
org$pandalanguage$pandac$IR* $tmp2271 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2272 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2273 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp2274 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp2275 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp2276 = *(&local27);
org$pandalanguage$pandac$Type* $tmp2277 = *(&local1);
org$pandalanguage$pandac$Type* $tmp2278 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp2277);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp2274, $tmp2275, $tmp2276, $tmp2278);
org$pandalanguage$pandac$IR$Value* $tmp2279 = *(&local5);
panda$core$Bit $tmp2280 = panda$core$Bit$init$builtin_bit($tmp2279 != NULL);
bool $tmp2281 = $tmp2280.value;
if ($tmp2281) goto block51; else goto block52;
block52:;
panda$core$Int64 $tmp2282 = (panda$core$Int64) {506};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2283, $tmp2282, &$s2284);
abort(); // unreachable
block51:;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp2272, $tmp2273, param1, $tmp2274, $tmp2279);
$fn2286 $tmp2285 = ($fn2286) $tmp2271->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2287 = $tmp2285($tmp2271, $tmp2272);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2278));
// unreffing REF($1086:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2274));
// unreffing REF($1082:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2272));
// unreffing REF($1080:org.pandalanguage.pandac.IR.Statement)
goto block50;
block50:;
// line 508
org$pandalanguage$pandac$IR* $tmp2288 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2289 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2290 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp2291 = *(&local20);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp2289, $tmp2290, param1, $tmp2291);
$fn2293 $tmp2292 = ($fn2293) $tmp2288->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2294 = $tmp2292($tmp2288, $tmp2289);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2289));
// unreffing REF($1112:org.pandalanguage.pandac.IR.Statement)
// line 509
org$pandalanguage$pandac$IR* $tmp2295 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp2296 = *(&local20);
$fn2298 $tmp2297 = ($fn2298) $tmp2295->$class->vtable[4];
$tmp2297($tmp2295, $tmp2296);
// line 510
org$pandalanguage$pandac$IR$Value* $tmp2299 = *(&local5);
panda$core$Bit $tmp2300 = panda$core$Bit$init$builtin_bit($tmp2299 != NULL);
bool $tmp2301 = $tmp2300.value;
if ($tmp2301) goto block53; else goto block54;
block53:;
// line 511
org$pandalanguage$pandac$IR* $tmp2302 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp2303 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp2304 = (panda$core$Int64) {13};
org$pandalanguage$pandac$IR$Value* $tmp2305 = *(&local5);
panda$core$Bit $tmp2306 = panda$core$Bit$init$builtin_bit($tmp2305 != NULL);
bool $tmp2307 = $tmp2306.value;
if ($tmp2307) goto block55; else goto block56;
block56:;
panda$core$Int64 $tmp2308 = (panda$core$Int64) {511};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2309, $tmp2308, &$s2310);
abort(); // unreachable
block55:;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp2303, $tmp2304, param1, $tmp2305);
$fn2312 $tmp2311 = ($fn2312) $tmp2302->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp2313 = $tmp2311($tmp2302, $tmp2303);
*(&local28) = $tmp2313;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2303));
// unreffing REF($1134:org.pandalanguage.pandac.IR.Statement)
// line 512
org$pandalanguage$pandac$IR$Value* $tmp2314 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp2315 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp2316 = *(&local28);
org$pandalanguage$pandac$Type* $tmp2317 = *(&local1);
org$pandalanguage$pandac$Type* $tmp2318 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp2317);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp2314, $tmp2315, $tmp2316, $tmp2318);
*(&local29) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2314));
org$pandalanguage$pandac$IR$Value* $tmp2319 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2319));
*(&local29) = $tmp2314;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2318));
// unreffing REF($1157:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2314));
// unreffing REF($1153:org.pandalanguage.pandac.IR.Value)
// line 513
org$pandalanguage$pandac$Type* $tmp2320 = *(&local1);
org$pandalanguage$pandac$Type* $tmp2321 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp2320);
panda$core$Bit $tmp2322 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp2321);
bool $tmp2323 = $tmp2322.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
// unreffing REF($1174:org.pandalanguage.pandac.Type)
if ($tmp2323) goto block57; else goto block58;
block57:;
// line 514
panda$collections$Stack** $tmp2324 = &param0->enclosingContexts;
panda$collections$Stack* $tmp2325 = *$tmp2324;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp2326 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp2327 = (panda$core$Int64) {3};
org$pandalanguage$pandac$IR$Value* $tmp2328 = *(&local29);
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value($tmp2326, $tmp2327, $tmp2328);
panda$collections$Stack$push$panda$collections$Stack$T($tmp2325, ((panda$core$Object*) $tmp2326));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2326));
// unreffing REF($1185:org.pandalanguage.pandac.Compiler.EnclosingContext)
goto block58;
block58:;
// line 516
org$pandalanguage$pandac$IR$Value* $tmp2329 = *(&local29);
org$pandalanguage$pandac$IR$Value* $tmp2330 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2329, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2330));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2330));
// unreffing REF($1198:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR$Value* $tmp2331 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2331));
// unreffing loadRef
*(&local29) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2332 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2332));
// unreffing haveTargetCast
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp2333 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2333));
// unreffing haveTargetType
*(&local25) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp2334 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2334));
// unreffing targetParams
*(&local23) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2335 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2335));
// unreffing noTargetCast
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2336 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2336));
// unreffing targetField
*(&local14) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2337 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2337));
// unreffing methodObj
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2338 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2338));
// unreffing pointerField
*(&local10) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$SymbolTable* $tmp2339 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2339));
// unreffing st
*(&local9) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
org$pandalanguage$pandac$Type* $tmp2340 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2340));
// unreffing targetType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp2341 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2341));
// unreffing methodType
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2342 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2342));
// unreffing result
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp2343 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2343));
// unreffing finalArgs
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp2344 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2344));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp2345 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2345));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp2330;
block54:;
// line 518
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp2346 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2346));
// unreffing haveTargetCast
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp2347 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2347));
// unreffing haveTargetType
*(&local25) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp2348 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2348));
// unreffing targetParams
*(&local23) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2349 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2349));
// unreffing noTargetCast
*(&local21) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2350 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2350));
// unreffing targetField
*(&local14) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2351 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2351));
// unreffing methodObj
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2352 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2352));
// unreffing pointerField
*(&local10) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$SymbolTable* $tmp2353 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2353));
// unreffing st
*(&local9) = ((org$pandalanguage$pandac$SymbolTable*) NULL);
org$pandalanguage$pandac$Type* $tmp2354 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2354));
// unreffing targetType
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp2355 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2355));
// unreffing methodType
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2356 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2356));
// unreffing result
*(&local5) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp2357 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2357));
// unreffing finalArgs
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp2358 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2358));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp2359 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2359));
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
panda$collections$Stack** $tmp2360 = &param0->currentClass;
panda$collections$Stack* $tmp2361 = *$tmp2360;
panda$core$Int64 $tmp2362 = (panda$core$Int64) {0};
panda$core$Object* $tmp2363 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp2361, $tmp2362);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp2363)));
org$pandalanguage$pandac$ClassDecl* $tmp2364 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2364));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) $tmp2363);
panda$core$Panda$unref$panda$core$Object$Q($tmp2363);
// unreffing REF($5:panda.collections.Stack.T)
// line 525
org$pandalanguage$pandac$IR** $tmp2365 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp2366 = *$tmp2365;
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2366));
org$pandalanguage$pandac$IR* $tmp2367 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2367));
*(&local1) = $tmp2366;
// line 526
panda$core$Int64* $tmp2368 = &param2->$rawValue;
panda$core$Int64 $tmp2369 = *$tmp2368;
panda$core$Int64 $tmp2370 = (panda$core$Int64) {9};
panda$core$Bit $tmp2371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2369, $tmp2370);
bool $tmp2372 = $tmp2371.value;
if ($tmp2372) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$IR$Value** $tmp2373 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp2374 = *$tmp2373;
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2374));
org$pandalanguage$pandac$IR$Value* $tmp2375 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2375));
*(&local2) = $tmp2374;
org$pandalanguage$pandac$MethodDecl** $tmp2376 = (org$pandalanguage$pandac$MethodDecl**) (param2->$data + 8);
org$pandalanguage$pandac$MethodDecl* $tmp2377 = *$tmp2376;
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2377));
org$pandalanguage$pandac$MethodDecl* $tmp2378 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2378));
*(&local3) = $tmp2377;
// line 528
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
// line 529
org$pandalanguage$pandac$IR$Value* $tmp2379 = *(&local2);
panda$core$Bit $tmp2380 = panda$core$Bit$init$builtin_bit($tmp2379 != NULL);
bool $tmp2381 = $tmp2380.value;
if ($tmp2381) goto block4; else goto block6;
block4:;
// line 530
org$pandalanguage$pandac$IR$Value* $tmp2382 = *(&local2);
panda$core$Bit $tmp2383 = panda$core$Bit$init$builtin_bit($tmp2382 != NULL);
bool $tmp2384 = $tmp2383.value;
if ($tmp2384) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp2385 = (panda$core$Int64) {530};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2386, $tmp2385, &$s2387);
abort(); // unreachable
block7:;
$fn2389 $tmp2388 = ($fn2389) $tmp2382->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp2390 = $tmp2388($tmp2382);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2390));
org$pandalanguage$pandac$Type* $tmp2391 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2391));
*(&local4) = $tmp2390;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2390));
// unreffing REF($71:org.pandalanguage.pandac.Type)
goto block5;
block6:;
// line 532
org$pandalanguage$pandac$MethodDecl* $tmp2392 = *(&local3);
org$pandalanguage$pandac$Annotations** $tmp2393 = &$tmp2392->annotations;
org$pandalanguage$pandac$Annotations* $tmp2394 = *$tmp2393;
panda$core$Bit $tmp2395 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp2394);
bool $tmp2396 = $tmp2395.value;
if ($tmp2396) goto block11; else goto block12;
block11:;
*(&local5) = $tmp2395;
goto block13;
block12:;
org$pandalanguage$pandac$MethodDecl* $tmp2397 = *(&local3);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2398 = &$tmp2397->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp2399 = *$tmp2398;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2400;
$tmp2400 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2400->value = $tmp2399;
panda$core$Int64 $tmp2401 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2402 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2401);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2403;
$tmp2403 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2403->value = $tmp2402;
ITable* $tmp2404 = ((panda$core$Equatable*) $tmp2400)->$class->itable;
while ($tmp2404->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2404 = $tmp2404->next;
}
$fn2406 $tmp2405 = $tmp2404->methods[0];
panda$core$Bit $tmp2407 = $tmp2405(((panda$core$Equatable*) $tmp2400), ((panda$core$Equatable*) $tmp2403));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2403)));
// unreffing REF($98:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2400)));
// unreffing REF($94:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
*(&local5) = $tmp2407;
goto block13;
block13:;
panda$core$Bit $tmp2408 = *(&local5);
bool $tmp2409 = $tmp2408.value;
if ($tmp2409) goto block9; else goto block14;
block9:;
// line 533
org$pandalanguage$pandac$MethodDecl* $tmp2410 = *(&local3);
panda$core$Weak** $tmp2411 = &$tmp2410->owner;
panda$core$Weak* $tmp2412 = *$tmp2411;
panda$core$Object* $tmp2413 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2412);
org$pandalanguage$pandac$Type** $tmp2414 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2413)->type;
org$pandalanguage$pandac$Type* $tmp2415 = *$tmp2414;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2415));
org$pandalanguage$pandac$Type* $tmp2416 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2416));
*(&local4) = $tmp2415;
panda$core$Panda$unref$panda$core$Object$Q($tmp2413);
// unreffing REF($117:panda.core.Weak.T)
goto block10;
block14:;
// line 1
// line 536
org$pandalanguage$pandac$ClassDecl* $tmp2417 = *(&local0);
org$pandalanguage$pandac$Type** $tmp2418 = &$tmp2417->type;
org$pandalanguage$pandac$Type* $tmp2419 = *$tmp2418;
org$pandalanguage$pandac$MethodDecl* $tmp2420 = *(&local3);
panda$core$Weak** $tmp2421 = &$tmp2420->owner;
panda$core$Weak* $tmp2422 = *$tmp2421;
panda$core$Object* $tmp2423 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2422);
org$pandalanguage$pandac$Type* $tmp2424 = org$pandalanguage$pandac$Compiler$findType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(param0, $tmp2419, ((org$pandalanguage$pandac$ClassDecl*) $tmp2423));
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2424));
org$pandalanguage$pandac$Type* $tmp2425 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2425));
*(&local6) = $tmp2424;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2424));
// unreffing REF($142:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp2423);
// unreffing REF($140:panda.core.Weak.T)
// line 537
org$pandalanguage$pandac$Type* $tmp2426 = *(&local6);
panda$core$Bit $tmp2427 = panda$core$Bit$init$builtin_bit($tmp2426 != NULL);
bool $tmp2428 = $tmp2427.value;
if ($tmp2428) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp2429 = (panda$core$Int64) {537};
org$pandalanguage$pandac$ClassDecl* $tmp2430 = *(&local0);
org$pandalanguage$pandac$Type** $tmp2431 = &$tmp2430->type;
org$pandalanguage$pandac$Type* $tmp2432 = *$tmp2431;
panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2434, ((panda$core$Object*) $tmp2432));
panda$core$String* $tmp2435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2433, &$s2436);
org$pandalanguage$pandac$MethodDecl* $tmp2437 = *(&local3);
panda$core$Weak** $tmp2438 = &$tmp2437->owner;
panda$core$Weak* $tmp2439 = *$tmp2438;
panda$core$Object* $tmp2440 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2439);
panda$core$String** $tmp2441 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2440)->name;
panda$core$String* $tmp2442 = *$tmp2441;
panda$core$String* $tmp2443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2435, $tmp2442);
panda$core$String* $tmp2444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2443, &$s2445);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2446, $tmp2429, $tmp2444);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2444));
// unreffing REF($178:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2443));
// unreffing REF($177:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2440);
// unreffing REF($173:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2435));
// unreffing REF($168:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2433));
// unreffing REF($167:panda.core.String)
abort(); // unreachable
block15:;
// line 539
org$pandalanguage$pandac$Type* $tmp2447 = *(&local6);
panda$core$Bit $tmp2448 = panda$core$Bit$init$builtin_bit($tmp2447 != NULL);
bool $tmp2449 = $tmp2448.value;
if ($tmp2449) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp2450 = (panda$core$Int64) {539};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2451, $tmp2450, &$s2452);
abort(); // unreachable
block17:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2447));
org$pandalanguage$pandac$Type* $tmp2453 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2453));
*(&local4) = $tmp2447;
org$pandalanguage$pandac$Type* $tmp2454 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2454));
// unreffing found
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
goto block10;
block10:;
goto block5;
block5:;
// line 541
org$pandalanguage$pandac$MethodDecl* $tmp2455 = *(&local3);
panda$core$Bit $tmp2456 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, $tmp2455);
panda$core$Bit $tmp2457 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2456);
bool $tmp2458 = $tmp2457.value;
if ($tmp2458) goto block19; else goto block20;
block19:;
// line 542
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp2459 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2459));
// unreffing targetType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2460 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2460));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2461 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2461));
// unreffing target
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2462 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2462));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2463 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2463));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block20:;
// line 544
org$pandalanguage$pandac$IR$Value* $tmp2464 = *(&local2);
org$pandalanguage$pandac$MethodRef* $tmp2465 = (org$pandalanguage$pandac$MethodRef*) frostObjectAlloc(41, (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class);
org$pandalanguage$pandac$Type* $tmp2466 = *(&local4);
org$pandalanguage$pandac$MethodDecl* $tmp2467 = *(&local3);
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl($tmp2465, param0, $tmp2466, $tmp2467);
org$pandalanguage$pandac$IR$Value* $tmp2468 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2464, $tmp2465, param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2468));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2468));
// unreffing REF($260:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2465));
// unreffing REF($256:org.pandalanguage.pandac.MethodRef)
org$pandalanguage$pandac$Type* $tmp2469 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2469));
// unreffing targetType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2470 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2470));
// unreffing m
*(&local3) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2471 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2471));
// unreffing target
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2472 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2472));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2473 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2473));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp2468;
block3:;
panda$core$Int64 $tmp2474 = (panda$core$Int64) {11};
panda$core$Bit $tmp2475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2369, $tmp2474);
bool $tmp2476 = $tmp2475.value;
if ($tmp2476) goto block21; else goto block22;
block21:;
org$pandalanguage$pandac$IR$Value** $tmp2477 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp2478 = *$tmp2477;
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2478));
org$pandalanguage$pandac$IR$Value* $tmp2479 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2479));
*(&local7) = $tmp2478;
org$pandalanguage$pandac$MethodDecl** $tmp2480 = (org$pandalanguage$pandac$MethodDecl**) (param2->$data + 8);
org$pandalanguage$pandac$MethodDecl* $tmp2481 = *$tmp2480;
*(&local8) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
org$pandalanguage$pandac$MethodDecl* $tmp2482 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2482));
*(&local8) = $tmp2481;
org$pandalanguage$pandac$FixedArray** $tmp2483 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2484 = *$tmp2483;
*(&local9) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2484));
org$pandalanguage$pandac$FixedArray* $tmp2485 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2485));
*(&local9) = $tmp2484;
// line 548
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
// line 549
org$pandalanguage$pandac$IR$Value* $tmp2486 = *(&local7);
panda$core$Bit $tmp2487 = panda$core$Bit$init$builtin_bit($tmp2486 != NULL);
bool $tmp2488 = $tmp2487.value;
if ($tmp2488) goto block23; else goto block25;
block23:;
// line 550
org$pandalanguage$pandac$IR$Value* $tmp2489 = *(&local7);
panda$core$Bit $tmp2490 = panda$core$Bit$init$builtin_bit($tmp2489 != NULL);
bool $tmp2491 = $tmp2490.value;
if ($tmp2491) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp2492 = (panda$core$Int64) {550};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2493, $tmp2492, &$s2494);
abort(); // unreachable
block26:;
$fn2496 $tmp2495 = ($fn2496) $tmp2489->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp2497 = $tmp2495($tmp2489);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
org$pandalanguage$pandac$Type* $tmp2498 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
*(&local10) = $tmp2497;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
// unreffing REF($345:org.pandalanguage.pandac.Type)
goto block24;
block25:;
// line 552
org$pandalanguage$pandac$MethodDecl* $tmp2499 = *(&local8);
org$pandalanguage$pandac$Annotations** $tmp2500 = &$tmp2499->annotations;
org$pandalanguage$pandac$Annotations* $tmp2501 = *$tmp2500;
panda$core$Bit $tmp2502 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp2501);
bool $tmp2503 = $tmp2502.value;
if ($tmp2503) goto block30; else goto block31;
block30:;
*(&local11) = $tmp2502;
goto block32;
block31:;
org$pandalanguage$pandac$MethodDecl* $tmp2504 = *(&local8);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2505 = &$tmp2504->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp2506 = *$tmp2505;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2507;
$tmp2507 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2507->value = $tmp2506;
panda$core$Int64 $tmp2508 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2509 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2508);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2510;
$tmp2510 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2510->value = $tmp2509;
ITable* $tmp2511 = ((panda$core$Equatable*) $tmp2507)->$class->itable;
while ($tmp2511->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2511 = $tmp2511->next;
}
$fn2513 $tmp2512 = $tmp2511->methods[0];
panda$core$Bit $tmp2514 = $tmp2512(((panda$core$Equatable*) $tmp2507), ((panda$core$Equatable*) $tmp2510));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2510)));
// unreffing REF($372:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2507)));
// unreffing REF($368:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
*(&local11) = $tmp2514;
goto block32;
block32:;
panda$core$Bit $tmp2515 = *(&local11);
bool $tmp2516 = $tmp2515.value;
if ($tmp2516) goto block28; else goto block33;
block28:;
// line 553
org$pandalanguage$pandac$MethodDecl* $tmp2517 = *(&local8);
panda$core$Weak** $tmp2518 = &$tmp2517->owner;
panda$core$Weak* $tmp2519 = *$tmp2518;
panda$core$Object* $tmp2520 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2519);
org$pandalanguage$pandac$Type** $tmp2521 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2520)->type;
org$pandalanguage$pandac$Type* $tmp2522 = *$tmp2521;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2522));
org$pandalanguage$pandac$Type* $tmp2523 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2523));
*(&local10) = $tmp2522;
panda$core$Panda$unref$panda$core$Object$Q($tmp2520);
// unreffing REF($391:panda.core.Weak.T)
goto block29;
block33:;
// line 1
// line 556
org$pandalanguage$pandac$ClassDecl* $tmp2524 = *(&local0);
org$pandalanguage$pandac$Type** $tmp2525 = &$tmp2524->type;
org$pandalanguage$pandac$Type* $tmp2526 = *$tmp2525;
org$pandalanguage$pandac$MethodDecl* $tmp2527 = *(&local8);
panda$core$Weak** $tmp2528 = &$tmp2527->owner;
panda$core$Weak* $tmp2529 = *$tmp2528;
panda$core$Object* $tmp2530 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2529);
org$pandalanguage$pandac$Type* $tmp2531 = org$pandalanguage$pandac$Compiler$findType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(param0, $tmp2526, ((org$pandalanguage$pandac$ClassDecl*) $tmp2530));
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2531));
org$pandalanguage$pandac$Type* $tmp2532 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2532));
*(&local12) = $tmp2531;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2531));
// unreffing REF($416:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp2530);
// unreffing REF($414:panda.core.Weak.T)
// line 557
org$pandalanguage$pandac$Type* $tmp2533 = *(&local12);
panda$core$Bit $tmp2534 = panda$core$Bit$init$builtin_bit($tmp2533 != NULL);
bool $tmp2535 = $tmp2534.value;
if ($tmp2535) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp2536 = (panda$core$Int64) {557};
org$pandalanguage$pandac$ClassDecl* $tmp2537 = *(&local0);
org$pandalanguage$pandac$Type** $tmp2538 = &$tmp2537->type;
org$pandalanguage$pandac$Type* $tmp2539 = *$tmp2538;
panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2541, ((panda$core$Object*) $tmp2539));
panda$core$String* $tmp2542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2540, &$s2543);
org$pandalanguage$pandac$MethodDecl* $tmp2544 = *(&local8);
panda$core$Weak** $tmp2545 = &$tmp2544->owner;
panda$core$Weak* $tmp2546 = *$tmp2545;
panda$core$Object* $tmp2547 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2546);
panda$core$String** $tmp2548 = &((org$pandalanguage$pandac$ClassDecl*) $tmp2547)->name;
panda$core$String* $tmp2549 = *$tmp2548;
panda$core$String* $tmp2550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2542, $tmp2549);
panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2550, &$s2552);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2553, $tmp2536, $tmp2551);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2551));
// unreffing REF($452:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2550));
// unreffing REF($451:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2547);
// unreffing REF($447:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2542));
// unreffing REF($442:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2540));
// unreffing REF($441:panda.core.String)
abort(); // unreachable
block34:;
// line 559
org$pandalanguage$pandac$Type* $tmp2554 = *(&local12);
panda$core$Bit $tmp2555 = panda$core$Bit$init$builtin_bit($tmp2554 != NULL);
bool $tmp2556 = $tmp2555.value;
if ($tmp2556) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp2557 = (panda$core$Int64) {559};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2558, $tmp2557, &$s2559);
abort(); // unreachable
block36:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2554));
org$pandalanguage$pandac$Type* $tmp2560 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2560));
*(&local10) = $tmp2554;
org$pandalanguage$pandac$Type* $tmp2561 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2561));
// unreffing found
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
goto block29;
block29:;
goto block24;
block24:;
// line 561
org$pandalanguage$pandac$MethodDecl* $tmp2562 = *(&local8);
panda$core$Bit $tmp2563 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, $tmp2562);
panda$core$Bit $tmp2564 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2563);
bool $tmp2565 = $tmp2564.value;
if ($tmp2565) goto block38; else goto block39;
block38:;
// line 562
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp2566 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2566));
// unreffing targetType
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2567 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2567));
// unreffing types
*(&local9) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2568 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2568));
// unreffing m
*(&local8) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2569 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
// unreffing target
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2570 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2570));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2571 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2571));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block39:;
// line 564
org$pandalanguage$pandac$IR$Value* $tmp2572 = *(&local7);
org$pandalanguage$pandac$MethodRef* $tmp2573 = (org$pandalanguage$pandac$MethodRef*) frostObjectAlloc(41, (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class);
org$pandalanguage$pandac$Type* $tmp2574 = *(&local10);
org$pandalanguage$pandac$MethodDecl* $tmp2575 = *(&local8);
org$pandalanguage$pandac$FixedArray* $tmp2576 = *(&local9);
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q($tmp2573, param0, $tmp2574, $tmp2575, ((panda$collections$ListView*) $tmp2576));
org$pandalanguage$pandac$IR$Value* $tmp2577 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2572, $tmp2573, param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2577));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2577));
// unreffing REF($541:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2573));
// unreffing REF($535:org.pandalanguage.pandac.MethodRef)
org$pandalanguage$pandac$Type* $tmp2578 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
// unreffing targetType
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2579 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2579));
// unreffing types
*(&local9) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2580 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2580));
// unreffing m
*(&local8) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2581 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
// unreffing target
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2582 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2582));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2583 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2583));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp2577;
block22:;
panda$core$Int64 $tmp2584 = (panda$core$Int64) {10};
panda$core$Bit $tmp2585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2369, $tmp2584);
bool $tmp2586 = $tmp2585.value;
if ($tmp2586) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$IR$Value** $tmp2587 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp2588 = *$tmp2587;
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2588));
org$pandalanguage$pandac$IR$Value* $tmp2589 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2589));
*(&local13) = $tmp2588;
org$pandalanguage$pandac$FixedArray** $tmp2590 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 8);
org$pandalanguage$pandac$FixedArray* $tmp2591 = *$tmp2590;
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2591));
org$pandalanguage$pandac$FixedArray* $tmp2592 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2592));
*(&local14) = $tmp2591;
// line 568
org$pandalanguage$pandac$IR$Value* $tmp2593 = *(&local13);
org$pandalanguage$pandac$FixedArray* $tmp2594 = *(&local14);
org$pandalanguage$pandac$Pair* $tmp2595 = org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, param1, $tmp2593, ((panda$collections$ListView*) $tmp2594), param3, param4);
*(&local15) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2595));
org$pandalanguage$pandac$Pair* $tmp2596 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2596));
*(&local15) = $tmp2595;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2595));
// unreffing REF($607:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
// line 569
org$pandalanguage$pandac$Pair* $tmp2597 = *(&local15);
panda$core$Bit $tmp2598 = panda$core$Bit$init$builtin_bit($tmp2597 != NULL);
bool $tmp2599 = $tmp2598.value;
if ($tmp2599) goto block42; else goto block43;
block42:;
// line 570
org$pandalanguage$pandac$Pair* $tmp2600 = *(&local15);
panda$core$Bit $tmp2601 = panda$core$Bit$init$builtin_bit($tmp2600 != NULL);
bool $tmp2602 = $tmp2601.value;
if ($tmp2602) goto block46; else goto block47;
block47:;
panda$core$Int64 $tmp2603 = (panda$core$Int64) {570};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2604, $tmp2603, &$s2605);
abort(); // unreachable
block46:;
panda$core$Object** $tmp2606 = &$tmp2600->first;
panda$core$Object* $tmp2607 = *$tmp2606;
ITable* $tmp2608 = ((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp2607))->$class->itable;
while ($tmp2608->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2608 = $tmp2608->next;
}
$fn2610 $tmp2609 = $tmp2608->methods[0];
panda$core$Int64 $tmp2611 = $tmp2609(((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp2607)));
panda$core$Int64 $tmp2612 = (panda$core$Int64) {1};
int64_t $tmp2613 = $tmp2611.value;
int64_t $tmp2614 = $tmp2612.value;
bool $tmp2615 = $tmp2613 > $tmp2614;
panda$core$Bit $tmp2616 = (panda$core$Bit) {$tmp2615};
bool $tmp2617 = $tmp2616.value;
if ($tmp2617) goto block44; else goto block45;
block44:;
// line 571
org$pandalanguage$pandac$Pair* $tmp2618 = *(&local15);
panda$core$Bit $tmp2619 = panda$core$Bit$init$builtin_bit($tmp2618 != NULL);
bool $tmp2620 = $tmp2619.value;
if ($tmp2620) goto block48; else goto block49;
block49:;
panda$core$Int64 $tmp2621 = (panda$core$Int64) {571};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2622, $tmp2621, &$s2623);
abort(); // unreachable
block48:;
panda$core$Object** $tmp2624 = &$tmp2618->first;
panda$core$Object* $tmp2625 = *$tmp2624;
org$pandalanguage$pandac$Compiler$reportAmbiguousMatch$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext(param0, param1, ((panda$collections$ListView*) $tmp2625), param3, param4);
// line 572
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Pair* $tmp2626 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2626));
// unreffing best
*(&local15) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2627 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2627));
// unreffing methods
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2628 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2628));
// unreffing target
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2629 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2629));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2630 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2630));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block45:;
// line 574
org$pandalanguage$pandac$IR$Value* $tmp2631 = *(&local13);
org$pandalanguage$pandac$Pair* $tmp2632 = *(&local15);
panda$core$Bit $tmp2633 = panda$core$Bit$init$builtin_bit($tmp2632 != NULL);
bool $tmp2634 = $tmp2633.value;
if ($tmp2634) goto block50; else goto block51;
block51:;
panda$core$Int64 $tmp2635 = (panda$core$Int64) {574};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2636, $tmp2635, &$s2637);
abort(); // unreachable
block50:;
panda$core$Object** $tmp2638 = &$tmp2632->first;
panda$core$Object* $tmp2639 = *$tmp2638;
panda$core$Int64 $tmp2640 = (panda$core$Int64) {0};
ITable* $tmp2641 = ((panda$collections$ListView*) $tmp2639)->$class->itable;
while ($tmp2641->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp2641 = $tmp2641->next;
}
$fn2643 $tmp2642 = $tmp2641->methods[0];
panda$core$Object* $tmp2644 = $tmp2642(((panda$collections$ListView*) $tmp2639), $tmp2640);
org$pandalanguage$pandac$IR$Value* $tmp2645 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2631, ((org$pandalanguage$pandac$MethodRef*) $tmp2644), param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2645));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2645));
// unreffing REF($709:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp2644);
// unreffing REF($707:panda.collections.ListView.T)
org$pandalanguage$pandac$Pair* $tmp2646 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2646));
// unreffing best
*(&local15) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2647 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2647));
// unreffing methods
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2648 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2648));
// unreffing target
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2649 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2649));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2650 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2650));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp2645;
block43:;
// line 577
panda$collections$Array* $tmp2651 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2651);
*(&local16) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2651));
panda$collections$Array* $tmp2652 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2652));
*(&local16) = $tmp2651;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2651));
// unreffing REF($745:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 578
ITable* $tmp2653 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp2653->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2653 = $tmp2653->next;
}
$fn2655 $tmp2654 = $tmp2653->methods[0];
panda$collections$Iterator* $tmp2656 = $tmp2654(((panda$collections$Iterable*) param3));
goto block52;
block52:;
ITable* $tmp2657 = $tmp2656->$class->itable;
while ($tmp2657->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2657 = $tmp2657->next;
}
$fn2659 $tmp2658 = $tmp2657->methods[0];
panda$core$Bit $tmp2660 = $tmp2658($tmp2656);
bool $tmp2661 = $tmp2660.value;
if ($tmp2661) goto block54; else goto block53;
block53:;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2662 = $tmp2656->$class->itable;
while ($tmp2662->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2662 = $tmp2662->next;
}
$fn2664 $tmp2663 = $tmp2662->methods[1];
panda$core$Object* $tmp2665 = $tmp2663($tmp2656);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2665)));
org$pandalanguage$pandac$ASTNode* $tmp2666 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2666));
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) $tmp2665);
// line 579
org$pandalanguage$pandac$ASTNode* $tmp2667 = *(&local17);
org$pandalanguage$pandac$Type* $tmp2668 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, $tmp2667);
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2668));
org$pandalanguage$pandac$Type* $tmp2669 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2669));
*(&local18) = $tmp2668;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2668));
// unreffing REF($783:org.pandalanguage.pandac.Type?)
// line 580
org$pandalanguage$pandac$Type* $tmp2670 = *(&local18);
panda$core$Bit $tmp2671 = panda$core$Bit$init$builtin_bit($tmp2670 == NULL);
bool $tmp2672 = $tmp2671.value;
if ($tmp2672) goto block55; else goto block56;
block55:;
// line 582
panda$core$Int64* $tmp2673 = &param0->errorCount;
panda$core$Int64 $tmp2674 = *$tmp2673;
*(&local19) = $tmp2674;
// line 583
org$pandalanguage$pandac$ASTNode* $tmp2675 = *(&local17);
org$pandalanguage$pandac$IR$Value* $tmp2676 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp2675);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2676));
// unreffing REF($806:org.pandalanguage.pandac.IR.Value?)
// line 584
panda$core$Int64* $tmp2677 = &param0->errorCount;
panda$core$Int64 $tmp2678 = *$tmp2677;
panda$core$Int64 $tmp2679 = *(&local19);
panda$core$Bit $tmp2680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2678, $tmp2679);
bool $tmp2681 = $tmp2680.value;
if ($tmp2681) goto block57; else goto block58;
block57:;
// line 586
org$pandalanguage$pandac$FixedArray* $tmp2682 = *(&local14);
panda$core$Int64 $tmp2683 = (panda$core$Int64) {0};
panda$core$Object* $tmp2684 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2682, $tmp2683);
panda$core$String** $tmp2685 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2684))->name;
panda$core$String* $tmp2686 = *$tmp2685;
panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2688, $tmp2686);
panda$core$String* $tmp2689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2687, &$s2690);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp2689);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2689));
// unreffing REF($827:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2687));
// unreffing REF($826:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2684);
// unreffing REF($821:org.pandalanguage.pandac.FixedArray.T)
goto block58;
block58:;
// line 588
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp2691 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2691));
// unreffing preferred
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2665);
// unreffing REF($773:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2692 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2692));
// unreffing a
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2656));
// unreffing REF($762:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$Array* $tmp2693 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2693));
// unreffing argTypes
*(&local16) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Pair* $tmp2694 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2694));
// unreffing best
*(&local15) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2695 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2695));
// unreffing methods
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2696 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2696));
// unreffing target
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2697 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2697));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2698 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2698));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block56:;
// line 590
panda$collections$Array* $tmp2699 = *(&local16);
org$pandalanguage$pandac$Type* $tmp2700 = *(&local18);
panda$core$Bit $tmp2701 = panda$core$Bit$init$builtin_bit($tmp2700 != NULL);
bool $tmp2702 = $tmp2701.value;
if ($tmp2702) goto block59; else goto block60;
block60:;
panda$core$Int64 $tmp2703 = (panda$core$Int64) {590};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2704, $tmp2703, &$s2705);
abort(); // unreachable
block59:;
panda$collections$Array$add$panda$collections$Array$T($tmp2699, ((panda$core$Object*) $tmp2700));
org$pandalanguage$pandac$Type* $tmp2706 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2706));
// unreffing preferred
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2665);
// unreffing REF($773:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2707 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2707));
// unreffing a
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block52;
block54:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2656));
// unreffing REF($762:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 592
org$pandalanguage$pandac$FixedArray* $tmp2708 = *(&local14);
panda$core$Int64 $tmp2709 = (panda$core$Int64) {0};
panda$core$Object* $tmp2710 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2708, $tmp2709);
panda$core$String** $tmp2711 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2710))->name;
panda$core$String* $tmp2712 = *$tmp2711;
panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2714, $tmp2712);
panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, &$s2716);
panda$collections$Array* $tmp2717 = *(&local16);
ITable* $tmp2718 = ((panda$collections$CollectionView*) $tmp2717)->$class->itable;
while ($tmp2718->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2718 = $tmp2718->next;
}
$fn2720 $tmp2719 = $tmp2718->methods[1];
panda$core$String* $tmp2721 = $tmp2719(((panda$collections$CollectionView*) $tmp2717));
panda$core$String* $tmp2722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, $tmp2721);
panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2722, &$s2724);
$fn2726 $tmp2725 = ($fn2726) param4->$class->vtable[2];
panda$core$String* $tmp2727 = $tmp2725(param4);
panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2723, $tmp2727);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp2728);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2728));
// unreffing REF($939:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2727));
// unreffing REF($938:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2723));
// unreffing REF($936:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2722));
// unreffing REF($935:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2721));
// unreffing REF($934:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2715));
// unreffing REF($930:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2713));
// unreffing REF($929:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2710);
// unreffing REF($924:org.pandalanguage.pandac.FixedArray.T)
// line 594
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$collections$Array* $tmp2729 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2729));
// unreffing argTypes
*(&local16) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Pair* $tmp2730 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2730));
// unreffing best
*(&local15) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2731 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2731));
// unreffing methods
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2732 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2732));
// unreffing target
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2733 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2733));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2734 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2734));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block41:;
panda$core$Int64 $tmp2735 = (panda$core$Int64) {12};
panda$core$Bit $tmp2736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2369, $tmp2735);
bool $tmp2737 = $tmp2736.value;
if ($tmp2737) goto block61; else goto block62;
block61:;
org$pandalanguage$pandac$IR$Value** $tmp2738 = (org$pandalanguage$pandac$IR$Value**) (param2->$data + 0);
org$pandalanguage$pandac$IR$Value* $tmp2739 = *$tmp2738;
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2739));
org$pandalanguage$pandac$IR$Value* $tmp2740 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2740));
*(&local20) = $tmp2739;
org$pandalanguage$pandac$FixedArray** $tmp2741 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 8);
org$pandalanguage$pandac$FixedArray* $tmp2742 = *$tmp2741;
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2742));
org$pandalanguage$pandac$FixedArray* $tmp2743 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2743));
*(&local21) = $tmp2742;
org$pandalanguage$pandac$FixedArray** $tmp2744 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2745 = *$tmp2744;
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2745));
org$pandalanguage$pandac$FixedArray* $tmp2746 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2746));
*(&local22) = $tmp2745;
// line 597
org$pandalanguage$pandac$IR$Value* $tmp2747 = *(&local20);
org$pandalanguage$pandac$FixedArray* $tmp2748 = *(&local21);
org$pandalanguage$pandac$FixedArray* $tmp2749 = *(&local22);
org$pandalanguage$pandac$Pair* $tmp2750 = org$pandalanguage$pandac$expression$Call$findBestMethod$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(param0, param1, $tmp2747, ((panda$collections$ListView*) $tmp2748), ((panda$collections$ListView*) $tmp2749), param3, param4);
*(&local23) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2750));
org$pandalanguage$pandac$Pair* $tmp2751 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2751));
*(&local23) = $tmp2750;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2750));
// unreffing REF($1036:org.pandalanguage.pandac.Pair<panda.collections.ListView<org.pandalanguage.pandac.MethodRef>, panda.core.Int64>?)
// line 598
org$pandalanguage$pandac$Pair* $tmp2752 = *(&local23);
panda$core$Bit $tmp2753 = panda$core$Bit$init$builtin_bit($tmp2752 != NULL);
bool $tmp2754 = $tmp2753.value;
if ($tmp2754) goto block63; else goto block64;
block63:;
// line 599
org$pandalanguage$pandac$Pair* $tmp2755 = *(&local23);
panda$core$Bit $tmp2756 = panda$core$Bit$init$builtin_bit($tmp2755 != NULL);
bool $tmp2757 = $tmp2756.value;
if ($tmp2757) goto block67; else goto block68;
block68:;
panda$core$Int64 $tmp2758 = (panda$core$Int64) {599};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2759, $tmp2758, &$s2760);
abort(); // unreachable
block67:;
panda$core$Object** $tmp2761 = &$tmp2755->first;
panda$core$Object* $tmp2762 = *$tmp2761;
ITable* $tmp2763 = ((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp2762))->$class->itable;
while ($tmp2763->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2763 = $tmp2763->next;
}
$fn2765 $tmp2764 = $tmp2763->methods[0];
panda$core$Int64 $tmp2766 = $tmp2764(((panda$collections$CollectionView*) ((panda$collections$ListView*) $tmp2762)));
panda$core$Int64 $tmp2767 = (panda$core$Int64) {1};
int64_t $tmp2768 = $tmp2766.value;
int64_t $tmp2769 = $tmp2767.value;
bool $tmp2770 = $tmp2768 > $tmp2769;
panda$core$Bit $tmp2771 = (panda$core$Bit) {$tmp2770};
bool $tmp2772 = $tmp2771.value;
if ($tmp2772) goto block65; else goto block66;
block65:;
// line 600
org$pandalanguage$pandac$Pair* $tmp2773 = *(&local23);
panda$core$Bit $tmp2774 = panda$core$Bit$init$builtin_bit($tmp2773 != NULL);
bool $tmp2775 = $tmp2774.value;
if ($tmp2775) goto block69; else goto block70;
block70:;
panda$core$Int64 $tmp2776 = (panda$core$Int64) {600};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2777, $tmp2776, &$s2778);
abort(); // unreachable
block69:;
panda$core$Object** $tmp2779 = &$tmp2773->first;
panda$core$Object* $tmp2780 = *$tmp2779;
org$pandalanguage$pandac$Compiler$reportAmbiguousMatch$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext(param0, param1, ((panda$collections$ListView*) $tmp2780), param3, param4);
// line 601
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Pair* $tmp2781 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2781));
// unreffing best
*(&local23) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2782 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2782));
// unreffing types
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2783 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2783));
// unreffing methods
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2784 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2784));
// unreffing target
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2785 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2785));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2786 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2786));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block66:;
// line 603
org$pandalanguage$pandac$IR$Value* $tmp2787 = *(&local20);
org$pandalanguage$pandac$Pair* $tmp2788 = *(&local23);
panda$core$Bit $tmp2789 = panda$core$Bit$init$builtin_bit($tmp2788 != NULL);
bool $tmp2790 = $tmp2789.value;
if ($tmp2790) goto block71; else goto block72;
block72:;
panda$core$Int64 $tmp2791 = (panda$core$Int64) {603};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2792, $tmp2791, &$s2793);
abort(); // unreachable
block71:;
panda$core$Object** $tmp2794 = &$tmp2788->first;
panda$core$Object* $tmp2795 = *$tmp2794;
panda$core$Int64 $tmp2796 = (panda$core$Int64) {0};
ITable* $tmp2797 = ((panda$collections$ListView*) $tmp2795)->$class->itable;
while ($tmp2797->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp2797 = $tmp2797->next;
}
$fn2799 $tmp2798 = $tmp2797->methods[0];
panda$core$Object* $tmp2800 = $tmp2798(((panda$collections$ListView*) $tmp2795), $tmp2796);
org$pandalanguage$pandac$IR$Value* $tmp2801 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2787, ((org$pandalanguage$pandac$MethodRef*) $tmp2800), param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2801));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2801));
// unreffing REF($1143:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp2800);
// unreffing REF($1141:panda.collections.ListView.T)
org$pandalanguage$pandac$Pair* $tmp2802 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2802));
// unreffing best
*(&local23) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2803 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2803));
// unreffing types
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2804 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2804));
// unreffing methods
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2805 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2805));
// unreffing target
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2806 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2806));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2807 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2807));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp2801;
block64:;
// line 606
panda$collections$Array* $tmp2808 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2808);
*(&local24) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2808));
panda$collections$Array* $tmp2809 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2809));
*(&local24) = $tmp2808;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2808));
// unreffing REF($1184:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 607
ITable* $tmp2810 = ((panda$collections$Iterable*) param3)->$class->itable;
while ($tmp2810->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2810 = $tmp2810->next;
}
$fn2812 $tmp2811 = $tmp2810->methods[0];
panda$collections$Iterator* $tmp2813 = $tmp2811(((panda$collections$Iterable*) param3));
goto block73;
block73:;
ITable* $tmp2814 = $tmp2813->$class->itable;
while ($tmp2814->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2814 = $tmp2814->next;
}
$fn2816 $tmp2815 = $tmp2814->methods[0];
panda$core$Bit $tmp2817 = $tmp2815($tmp2813);
bool $tmp2818 = $tmp2817.value;
if ($tmp2818) goto block75; else goto block74;
block74:;
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2819 = $tmp2813->$class->itable;
while ($tmp2819->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2819 = $tmp2819->next;
}
$fn2821 $tmp2820 = $tmp2819->methods[1];
panda$core$Object* $tmp2822 = $tmp2820($tmp2813);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2822)));
org$pandalanguage$pandac$ASTNode* $tmp2823 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2823));
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) $tmp2822);
// line 608
org$pandalanguage$pandac$ASTNode* $tmp2824 = *(&local25);
org$pandalanguage$pandac$Type* $tmp2825 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, $tmp2824);
*(&local26) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2825));
org$pandalanguage$pandac$Type* $tmp2826 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2826));
*(&local26) = $tmp2825;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2825));
// unreffing REF($1222:org.pandalanguage.pandac.Type?)
// line 609
org$pandalanguage$pandac$Type* $tmp2827 = *(&local26);
panda$core$Bit $tmp2828 = panda$core$Bit$init$builtin_bit($tmp2827 == NULL);
bool $tmp2829 = $tmp2828.value;
if ($tmp2829) goto block76; else goto block77;
block76:;
// line 611
panda$core$Int64* $tmp2830 = &param0->errorCount;
panda$core$Int64 $tmp2831 = *$tmp2830;
*(&local27) = $tmp2831;
// line 612
org$pandalanguage$pandac$ASTNode* $tmp2832 = *(&local25);
org$pandalanguage$pandac$IR$Value* $tmp2833 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp2832);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2833));
// unreffing REF($1245:org.pandalanguage.pandac.IR.Value?)
// line 613
panda$core$Int64* $tmp2834 = &param0->errorCount;
panda$core$Int64 $tmp2835 = *$tmp2834;
panda$core$Int64 $tmp2836 = *(&local27);
panda$core$Bit $tmp2837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2835, $tmp2836);
bool $tmp2838 = $tmp2837.value;
if ($tmp2838) goto block78; else goto block79;
block78:;
// line 615
org$pandalanguage$pandac$FixedArray* $tmp2839 = *(&local21);
panda$core$Int64 $tmp2840 = (panda$core$Int64) {0};
panda$core$Object* $tmp2841 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2839, $tmp2840);
panda$core$String** $tmp2842 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2841))->name;
panda$core$String* $tmp2843 = *$tmp2842;
panda$core$String* $tmp2844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2845, $tmp2843);
panda$core$String* $tmp2846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2844, &$s2847);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp2846);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2846));
// unreffing REF($1266:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
// unreffing REF($1265:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2841);
// unreffing REF($1260:org.pandalanguage.pandac.FixedArray.T)
goto block79;
block79:;
// line 617
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp2848 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2848));
// unreffing preferred
*(&local26) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2822);
// unreffing REF($1212:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2849 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2849));
// unreffing a
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2813));
// unreffing REF($1201:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$Array* $tmp2850 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2850));
// unreffing argTypes
*(&local24) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Pair* $tmp2851 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2851));
// unreffing best
*(&local23) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2852 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2852));
// unreffing types
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2853 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2853));
// unreffing methods
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2854 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2854));
// unreffing target
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2855 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2855));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2856 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2856));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block77:;
// line 619
panda$collections$Array* $tmp2857 = *(&local24);
org$pandalanguage$pandac$Type* $tmp2858 = *(&local26);
panda$core$Bit $tmp2859 = panda$core$Bit$init$builtin_bit($tmp2858 != NULL);
bool $tmp2860 = $tmp2859.value;
if ($tmp2860) goto block80; else goto block81;
block81:;
panda$core$Int64 $tmp2861 = (panda$core$Int64) {619};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2862, $tmp2861, &$s2863);
abort(); // unreachable
block80:;
panda$collections$Array$add$panda$collections$Array$T($tmp2857, ((panda$core$Object*) $tmp2858));
org$pandalanguage$pandac$Type* $tmp2864 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2864));
// unreffing preferred
*(&local26) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2822);
// unreffing REF($1212:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2865 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2865));
// unreffing a
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block73;
block75:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2813));
// unreffing REF($1201:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 621
org$pandalanguage$pandac$FixedArray* $tmp2866 = *(&local21);
panda$core$Int64 $tmp2867 = (panda$core$Int64) {0};
panda$core$Object* $tmp2868 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2866, $tmp2867);
panda$core$String** $tmp2869 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2868))->name;
panda$core$String* $tmp2870 = *$tmp2869;
panda$core$String* $tmp2871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2872, $tmp2870);
panda$core$String* $tmp2873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2871, &$s2874);
panda$collections$Array* $tmp2875 = *(&local24);
ITable* $tmp2876 = ((panda$collections$CollectionView*) $tmp2875)->$class->itable;
while ($tmp2876->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2876 = $tmp2876->next;
}
$fn2878 $tmp2877 = $tmp2876->methods[1];
panda$core$String* $tmp2879 = $tmp2877(((panda$collections$CollectionView*) $tmp2875));
panda$core$String* $tmp2880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2873, $tmp2879);
panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2880, &$s2882);
$fn2884 $tmp2883 = ($fn2884) param4->$class->vtable[2];
panda$core$String* $tmp2885 = $tmp2883(param4);
panda$core$String* $tmp2886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2881, $tmp2885);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp2886);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2886));
// unreffing REF($1383:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2885));
// unreffing REF($1382:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2881));
// unreffing REF($1380:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2880));
// unreffing REF($1379:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2879));
// unreffing REF($1378:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2873));
// unreffing REF($1374:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2871));
// unreffing REF($1373:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2868);
// unreffing REF($1368:org.pandalanguage.pandac.FixedArray.T)
// line 623
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
panda$collections$Array* $tmp2887 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2887));
// unreffing argTypes
*(&local24) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Pair* $tmp2888 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2888));
// unreffing best
*(&local23) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2889 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2889));
// unreffing types
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2890 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2890));
// unreffing methods
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2891 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2891));
// unreffing target
*(&local20) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp2892 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2892));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2893 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2893));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block62:;
panda$core$Int64 $tmp2894 = (panda$core$Int64) {5};
panda$core$Bit $tmp2895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2369, $tmp2894);
bool $tmp2896 = $tmp2895.value;
if ($tmp2896) goto block82; else goto block83;
block83:;
panda$core$Int64 $tmp2897 = (panda$core$Int64) {7};
panda$core$Bit $tmp2898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2369, $tmp2897);
bool $tmp2899 = $tmp2898.value;
if ($tmp2899) goto block82; else goto block84;
block82:;
// line 626
org$pandalanguage$pandac$IR$Value* $tmp2900 = org$pandalanguage$pandac$expression$Call$callMethodObject$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2900));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2900));
// unreffing REF($1457:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR* $tmp2901 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2901));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2902 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2902));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp2900;
block84:;
panda$core$Int64 $tmp2903 = (panda$core$Int64) {14};
panda$core$Bit $tmp2904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2369, $tmp2903);
bool $tmp2905 = $tmp2904.value;
if ($tmp2905) goto block85; else goto block86;
block85:;
org$pandalanguage$pandac$Type** $tmp2906 = (org$pandalanguage$pandac$Type**) (param2->$data + 0);
org$pandalanguage$pandac$Type* $tmp2907 = *$tmp2906;
*(&local28) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2907));
org$pandalanguage$pandac$Type* $tmp2908 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2908));
*(&local28) = $tmp2907;
// line 629
*(&local29) = ((org$pandalanguage$pandac$Type*) NULL);
// line 630
org$pandalanguage$pandac$Type* $tmp2909 = *(&local28);
panda$core$Bit $tmp2910 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit($tmp2909);
bool $tmp2911 = $tmp2910.value;
if ($tmp2911) goto block87; else goto block89;
block87:;
// line 631
org$pandalanguage$pandac$Type* $tmp2912 = *(&local28);
org$pandalanguage$pandac$FixedArray** $tmp2913 = &$tmp2912->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp2914 = *$tmp2913;
panda$core$Bit $tmp2915 = panda$core$Bit$init$builtin_bit($tmp2914 != NULL);
bool $tmp2916 = $tmp2915.value;
if ($tmp2916) goto block90; else goto block91;
block91:;
panda$core$Int64 $tmp2917 = (panda$core$Int64) {631};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2918, $tmp2917, &$s2919);
abort(); // unreachable
block90:;
panda$core$Int64 $tmp2920 = (panda$core$Int64) {1};
panda$core$Object* $tmp2921 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp2914, $tmp2920);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp2921)));
org$pandalanguage$pandac$Type* $tmp2922 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2922));
*(&local29) = ((org$pandalanguage$pandac$Type*) $tmp2921);
panda$core$Panda$unref$panda$core$Object$Q($tmp2921);
// unreffing REF($1508:org.pandalanguage.pandac.FixedArray.T)
goto block88;
block89:;
// line 1
// line 634
org$pandalanguage$pandac$Type* $tmp2923 = *(&local28);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2923));
org$pandalanguage$pandac$Type* $tmp2924 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2924));
*(&local29) = $tmp2923;
goto block88;
block88:;
// line 636
org$pandalanguage$pandac$Type* $tmp2925 = *(&local29);
org$pandalanguage$pandac$ClassDecl* $tmp2926 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp2925);
*(&local30) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2926));
org$pandalanguage$pandac$ClassDecl* $tmp2927 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2927));
*(&local30) = $tmp2926;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2926));
// unreffing REF($1532:org.pandalanguage.pandac.ClassDecl?)
// line 637
org$pandalanguage$pandac$ClassDecl* $tmp2928 = *(&local30);
panda$core$Bit $tmp2929 = panda$core$Bit$init$builtin_bit($tmp2928 == NULL);
bool $tmp2930 = $tmp2929.value;
if ($tmp2930) goto block92; else goto block93;
block92:;
// line 638
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp2931 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2931));
// unreffing cl
*(&local30) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp2932 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2932));
// unreffing finalType
*(&local29) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp2933 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2933));
// unreffing t
*(&local28) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp2934 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2934));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2935 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2935));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block93:;
// line 640
org$pandalanguage$pandac$ClassDecl* $tmp2936 = *(&local30);
panda$core$Bit $tmp2937 = panda$core$Bit$init$builtin_bit($tmp2936 != NULL);
bool $tmp2938 = $tmp2937.value;
if ($tmp2938) goto block96; else goto block97;
block97:;
panda$core$Int64 $tmp2939 = (panda$core$Int64) {640};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2940, $tmp2939, &$s2941);
abort(); // unreachable
block96:;
panda$core$Bit $tmp2942 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(param0, $tmp2936);
panda$core$Bit $tmp2943 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2942);
bool $tmp2944 = $tmp2943.value;
if ($tmp2944) goto block94; else goto block95;
block94:;
// line 641
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp2945 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2945));
// unreffing cl
*(&local30) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp2946 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2946));
// unreffing finalType
*(&local29) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp2947 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2947));
// unreffing t
*(&local28) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp2948 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2948));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2949 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2949));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block95:;
// line 643
org$pandalanguage$pandac$ClassDecl* $tmp2950 = *(&local30);
panda$core$Bit $tmp2951 = panda$core$Bit$init$builtin_bit($tmp2950 != NULL);
bool $tmp2952 = $tmp2951.value;
if ($tmp2952) goto block98; else goto block99;
block99:;
panda$core$Int64 $tmp2953 = (panda$core$Int64) {643};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2954, $tmp2953, &$s2955);
abort(); // unreachable
block98:;
org$pandalanguage$pandac$SymbolTable* $tmp2956 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp2950);
org$pandalanguage$pandac$Symbol* $tmp2957 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2956, &$s2958);
*(&local31) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2957));
org$pandalanguage$pandac$Symbol* $tmp2959 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2959));
*(&local31) = $tmp2957;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2957));
// unreffing REF($1632:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2956));
// unreffing REF($1631:org.pandalanguage.pandac.SymbolTable)
// line 644
org$pandalanguage$pandac$Symbol* $tmp2960 = *(&local31);
panda$core$Bit $tmp2961 = panda$core$Bit$init$builtin_bit($tmp2960 != NULL);
bool $tmp2962 = $tmp2961.value;
if ($tmp2962) goto block100; else goto block101;
block101:;
panda$core$Int64 $tmp2963 = (panda$core$Int64) {644};
org$pandalanguage$pandac$ClassDecl* $tmp2964 = *(&local30);
panda$core$Bit $tmp2965 = panda$core$Bit$init$builtin_bit($tmp2964 != NULL);
bool $tmp2966 = $tmp2965.value;
if ($tmp2966) goto block102; else goto block103;
block103:;
panda$core$Int64 $tmp2967 = (panda$core$Int64) {644};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2968, $tmp2967, &$s2969);
abort(); // unreachable
block102:;
panda$core$String** $tmp2970 = &$tmp2964->name;
panda$core$String* $tmp2971 = *$tmp2970;
panda$core$String* $tmp2972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2973, $tmp2971);
panda$core$String* $tmp2974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2972, &$s2975);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2976, $tmp2963, $tmp2974);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2974));
// unreffing REF($1665:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2972));
// unreffing REF($1664:panda.core.String)
abort(); // unreachable
block100:;
// line 645
org$pandalanguage$pandac$ClassDecl* $tmp2977 = *(&local30);
panda$core$Bit $tmp2978 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(param0, $tmp2977);
bool $tmp2979 = $tmp2978.value;
if ($tmp2979) goto block104; else goto block105;
block104:;
// line 646
org$pandalanguage$pandac$Symbol* $tmp2980 = *(&local31);
panda$core$Bit $tmp2981 = panda$core$Bit$init$builtin_bit($tmp2980 != NULL);
bool $tmp2982 = $tmp2981.value;
if ($tmp2982) goto block106; else goto block107;
block107:;
panda$core$Int64 $tmp2983 = (panda$core$Int64) {647};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2984, $tmp2983, &$s2985);
abort(); // unreachable
block106:;
org$pandalanguage$pandac$IR$Value* $tmp2986 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Symbol$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, ((org$pandalanguage$pandac$IR$Value*) NULL), $tmp2980);
panda$core$Bit $tmp2987 = panda$core$Bit$init$builtin_bit($tmp2986 != NULL);
bool $tmp2988 = $tmp2987.value;
if ($tmp2988) goto block108; else goto block109;
block109:;
panda$core$Int64 $tmp2989 = (panda$core$Int64) {647};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2990, $tmp2989, &$s2991);
abort(); // unreachable
block108:;
org$pandalanguage$pandac$IR$Value* $tmp2992 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2986, param3, param4);
org$pandalanguage$pandac$Type* $tmp2993 = *(&local29);
org$pandalanguage$pandac$IR$Value* $tmp2994 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2992, $tmp2993);
org$pandalanguage$pandac$IR$Value* $tmp2995 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp2994, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2995));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2995));
// unreffing REF($1701:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2994));
// unreffing REF($1700:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2992));
// unreffing REF($1698:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2986));
// unreffing REF($1689:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Symbol* $tmp2996 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2996));
// unreffing inits
*(&local31) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2997 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2997));
// unreffing cl
*(&local30) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp2998 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2998));
// unreffing finalType
*(&local29) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp2999 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2999));
// unreffing t
*(&local28) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp3000 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3000));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3001 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3001));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp2995;
block105:;
// line 650
org$pandalanguage$pandac$IR* $tmp3002 = *(&local1);
org$pandalanguage$pandac$IR$Statement* $tmp3003 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp3004 = (panda$core$Int64) {6};
org$pandalanguage$pandac$ClassDecl* $tmp3005 = *(&local30);
panda$core$Bit $tmp3006 = panda$core$Bit$init$builtin_bit($tmp3005 != NULL);
bool $tmp3007 = $tmp3006.value;
if ($tmp3007) goto block110; else goto block111;
block111:;
panda$core$Int64 $tmp3008 = (panda$core$Int64) {650};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3009, $tmp3008, &$s3010);
abort(); // unreachable
block110:;
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl($tmp3003, $tmp3004, param1, $tmp3005);
$fn3012 $tmp3011 = ($fn3012) $tmp3002->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp3013 = $tmp3011($tmp3002, $tmp3003);
*(&local32) = $tmp3013;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3003));
// unreffing REF($1749:org.pandalanguage.pandac.IR.Statement)
// line 651
org$pandalanguage$pandac$IR$Value* $tmp3014 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp3015 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp3016 = *(&local32);
org$pandalanguage$pandac$Type* $tmp3017 = *(&local29);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp3014, $tmp3015, $tmp3016, $tmp3017);
*(&local33) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3014));
org$pandalanguage$pandac$IR$Value* $tmp3018 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3018));
*(&local33) = $tmp3014;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3014));
// unreffing REF($1768:org.pandalanguage.pandac.IR.Value)
// line 652
panda$collections$Stack** $tmp3019 = &param0->enclosingContexts;
panda$collections$Stack* $tmp3020 = *$tmp3019;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp3021 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp3022 = (panda$core$Int64) {3};
org$pandalanguage$pandac$IR$Value* $tmp3023 = *(&local33);
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value($tmp3021, $tmp3022, $tmp3023);
panda$collections$Stack$push$panda$collections$Stack$T($tmp3020, ((panda$core$Object*) $tmp3021));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3021));
// unreffing REF($1787:org.pandalanguage.pandac.Compiler.EnclosingContext)
// line 653
org$pandalanguage$pandac$IR$Value* $tmp3024 = *(&local33);
org$pandalanguage$pandac$Symbol* $tmp3025 = *(&local31);
panda$core$Bit $tmp3026 = panda$core$Bit$init$builtin_bit($tmp3025 != NULL);
bool $tmp3027 = $tmp3026.value;
if ($tmp3027) goto block112; else goto block113;
block113:;
panda$core$Int64 $tmp3028 = (panda$core$Int64) {653};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3029, $tmp3028, &$s3030);
abort(); // unreachable
block112:;
org$pandalanguage$pandac$IR$Value* $tmp3031 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Symbol$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3024, $tmp3025);
panda$core$Bit $tmp3032 = panda$core$Bit$init$builtin_bit($tmp3031 != NULL);
bool $tmp3033 = $tmp3032.value;
if ($tmp3033) goto block114; else goto block115;
block115:;
panda$core$Int64 $tmp3034 = (panda$core$Int64) {653};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3035, $tmp3034, &$s3036);
abort(); // unreachable
block114:;
org$pandalanguage$pandac$Compiler$TypeContext* $tmp3037 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp3038 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp3037, $tmp3038);
org$pandalanguage$pandac$IR$Value* $tmp3039 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3031, param3, $tmp3037);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3039));
// unreffing REF($1820:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3037));
// unreffing REF($1817:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3031));
// unreffing REF($1808:org.pandalanguage.pandac.IR.Value?)
// line 655
org$pandalanguage$pandac$IR$Value* $tmp3040 = *(&local33);
org$pandalanguage$pandac$IR$Value* $tmp3041 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3040, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3041));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3041));
// unreffing REF($1833:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR$Value* $tmp3042 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3042));
// unreffing constructRef
*(&local33) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Symbol* $tmp3043 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3043));
// unreffing inits
*(&local31) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3044 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3044));
// unreffing cl
*(&local30) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp3045 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3045));
// unreffing finalType
*(&local29) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3046 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3046));
// unreffing t
*(&local28) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp3047 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3047));
// unreffing ir
*(&local1) = ((org$pandalanguage$pandac$IR*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3048 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3048));
// unreffing currentClass
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3041;
block86:;
// line 658
panda$core$Bit $tmp3049 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3050 = $tmp3049.value;
if ($tmp3050) goto block116; else goto block117;
block117:;
panda$core$Int64 $tmp3051 = (panda$core$Int64) {658};
panda$core$String* $tmp3052 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3053, ((panda$core$Object*) param2));
panda$core$String* $tmp3054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3052, &$s3055);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3056, $tmp3051, $tmp3054);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3054));
// unreffing REF($1882:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3052));
// unreffing REF($1881:panda.core.String)
abort(); // unreachable
block116:;
goto block1;
block1:;
panda$core$Bit $tmp3057 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3058 = $tmp3057.value;
if ($tmp3058) goto block118; else goto block119;
block119:;
panda$core$Int64 $tmp3059 = (panda$core$Int64) {522};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3060, $tmp3059, &$s3061);
abort(); // unreachable
block118:;
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
org$pandalanguage$pandac$IR** $tmp3062 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp3063 = *$tmp3062;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3063));
org$pandalanguage$pandac$IR* $tmp3064 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3064));
*(&local0) = $tmp3063;
// line 670
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$MethodRef* $tmp3065 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3065));
*(&local1) = param3;
// line 671
org$pandalanguage$pandac$MethodRef* $tmp3066 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3067 = &$tmp3066->value;
org$pandalanguage$pandac$MethodDecl* $tmp3068 = *$tmp3067;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp3069 = &$tmp3068->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp3070 = *$tmp3069;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3071;
$tmp3071 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3071->value = $tmp3070;
panda$core$Int64 $tmp3072 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp3073 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp3072);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3074;
$tmp3074 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3074->value = $tmp3073;
ITable* $tmp3075 = ((panda$core$Equatable*) $tmp3071)->$class->itable;
while ($tmp3075->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3075 = $tmp3075->next;
}
$fn3077 $tmp3076 = $tmp3075->methods[0];
panda$core$Bit $tmp3078 = $tmp3076(((panda$core$Equatable*) $tmp3071), ((panda$core$Equatable*) $tmp3074));
bool $tmp3079 = $tmp3078.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3074)));
// unreffing REF($28:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3071)));
// unreffing REF($24:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp3079) goto block1; else goto block2;
block1:;
// line 672
panda$core$Bit $tmp3080 = panda$core$Bit$init$builtin_bit(false);
*(&local2) = $tmp3080;
// line 673
panda$core$Bit $tmp3081 = panda$core$Bit$init$builtin_bit(false);
*(&local3) = $tmp3081;
// line 674
panda$core$Bit $tmp3082 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3083 = $tmp3082.value;
if ($tmp3083) goto block3; else goto block5;
block3:;
// line 675
panda$core$Bit $tmp3084 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3085 = $tmp3084.value;
if ($tmp3085) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3086 = (panda$core$Int64) {675};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3087, $tmp3086, &$s3088);
abort(); // unreachable
block6:;
panda$core$Int64* $tmp3089 = &param2->$rawValue;
panda$core$Int64 $tmp3090 = *$tmp3089;
panda$core$Int64 $tmp3091 = (panda$core$Int64) {5};
panda$core$Bit $tmp3092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3090, $tmp3091);
bool $tmp3093 = $tmp3092.value;
if ($tmp3093) goto block9; else goto block10;
block9:;
panda$core$Int64* $tmp3094 = (panda$core$Int64*) (param2->$data + 0);
panda$core$Int64 $tmp3095 = *$tmp3094;
*(&local4) = $tmp3095;
org$pandalanguage$pandac$Type** $tmp3096 = (org$pandalanguage$pandac$Type**) (param2->$data + 8);
org$pandalanguage$pandac$Type* $tmp3097 = *$tmp3096;
// line 677
panda$core$Int64 $tmp3098 = *(&local4);
panda$core$Int64 $tmp3099 = (panda$core$Int64) {0};
panda$core$Bit $tmp3100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3098, $tmp3099);
bool $tmp3101 = $tmp3100.value;
if ($tmp3101) goto block11; else goto block12;
block11:;
panda$core$Bit $tmp3102 = org$pandalanguage$pandac$Compiler$isClassContext$R$panda$core$Bit(param0);
panda$core$Bit $tmp3103 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3102);
*(&local5) = $tmp3103;
goto block13;
block12:;
*(&local5) = $tmp3100;
goto block13;
block13:;
panda$core$Bit $tmp3104 = *(&local5);
*(&local3) = $tmp3104;
// line 678
panda$core$Bit $tmp3105 = panda$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp3105;
goto block8;
block10:;
panda$core$Int64 $tmp3106 = (panda$core$Int64) {7};
panda$core$Bit $tmp3107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3090, $tmp3106);
bool $tmp3108 = $tmp3107.value;
if ($tmp3108) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$IR$Statement$ID* $tmp3109 = (org$pandalanguage$pandac$IR$Statement$ID*) (param2->$data + 0);
org$pandalanguage$pandac$IR$Statement$ID $tmp3110 = *$tmp3109;
*(&local6) = $tmp3110;
org$pandalanguage$pandac$Type** $tmp3111 = (org$pandalanguage$pandac$Type**) (param2->$data + 8);
org$pandalanguage$pandac$Type* $tmp3112 = *$tmp3111;
// line 681
org$pandalanguage$pandac$IR$Statement$ID $tmp3113 = *(&local6);
org$pandalanguage$pandac$IR* $tmp3114 = *(&local0);
org$pandalanguage$pandac$IR$Block** $tmp3115 = &$tmp3114->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp3116 = *$tmp3115;
panda$collections$Array** $tmp3117 = &$tmp3116->ids;
panda$collections$Array* $tmp3118 = *$tmp3117;
org$pandalanguage$pandac$IR* $tmp3119 = *(&local0);
org$pandalanguage$pandac$IR$Block** $tmp3120 = &$tmp3119->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp3121 = *$tmp3120;
panda$collections$Array** $tmp3122 = &$tmp3121->ids;
panda$collections$Array* $tmp3123 = *$tmp3122;
ITable* $tmp3124 = ((panda$collections$CollectionView*) $tmp3123)->$class->itable;
while ($tmp3124->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3124 = $tmp3124->next;
}
$fn3126 $tmp3125 = $tmp3124->methods[0];
panda$core$Int64 $tmp3127 = $tmp3125(((panda$collections$CollectionView*) $tmp3123));
panda$core$Int64 $tmp3128 = (panda$core$Int64) {1};
int64_t $tmp3129 = $tmp3127.value;
int64_t $tmp3130 = $tmp3128.value;
int64_t $tmp3131 = $tmp3129 - $tmp3130;
panda$core$Int64 $tmp3132 = (panda$core$Int64) {$tmp3131};
panda$core$Object* $tmp3133 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3118, $tmp3132);
panda$core$Bit $tmp3134 = org$pandalanguage$pandac$IR$Statement$ID$$EQ$org$pandalanguage$pandac$IR$Statement$ID$R$panda$core$Bit($tmp3113, ((org$pandalanguage$pandac$IR$Statement$ID$wrapper*) $tmp3133)->value);
bool $tmp3135 = $tmp3134.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp3133);
// unreffing REF($118:panda.collections.Array.T)
if ($tmp3135) goto block16; else goto block17;
block16:;
// line 682
org$pandalanguage$pandac$IR* $tmp3136 = *(&local0);
org$pandalanguage$pandac$IR$Block** $tmp3137 = &$tmp3136->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp3138 = *$tmp3137;
panda$collections$Array** $tmp3139 = &$tmp3138->statements;
panda$collections$Array* $tmp3140 = *$tmp3139;
org$pandalanguage$pandac$IR* $tmp3141 = *(&local0);
org$pandalanguage$pandac$IR$Block** $tmp3142 = &$tmp3141->currentBlock;
org$pandalanguage$pandac$IR$Block* $tmp3143 = *$tmp3142;
panda$collections$Array** $tmp3144 = &$tmp3143->statements;
panda$collections$Array* $tmp3145 = *$tmp3144;
ITable* $tmp3146 = ((panda$collections$CollectionView*) $tmp3145)->$class->itable;
while ($tmp3146->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3146 = $tmp3146->next;
}
$fn3148 $tmp3147 = $tmp3146->methods[0];
panda$core$Int64 $tmp3149 = $tmp3147(((panda$collections$CollectionView*) $tmp3145));
panda$core$Int64 $tmp3150 = (panda$core$Int64) {1};
int64_t $tmp3151 = $tmp3149.value;
int64_t $tmp3152 = $tmp3150.value;
int64_t $tmp3153 = $tmp3151 - $tmp3152;
panda$core$Int64 $tmp3154 = (panda$core$Int64) {$tmp3153};
panda$core$Object* $tmp3155 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3140, $tmp3154);
*(&local7) = ((org$pandalanguage$pandac$IR$Statement*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Statement*) $tmp3155)));
org$pandalanguage$pandac$IR$Statement* $tmp3156 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3156));
*(&local7) = ((org$pandalanguage$pandac$IR$Statement*) $tmp3155);
panda$core$Panda$unref$panda$core$Object$Q($tmp3155);
// unreffing REF($146:panda.collections.Array.T)
// line 683
org$pandalanguage$pandac$IR$Statement* $tmp3157 = *(&local7);
panda$core$Int64* $tmp3158 = &$tmp3157->$rawValue;
panda$core$Int64 $tmp3159 = *$tmp3158;
panda$core$Int64 $tmp3160 = (panda$core$Int64) {6};
panda$core$Bit $tmp3161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3159, $tmp3160);
bool $tmp3162 = $tmp3161.value;
if ($tmp3162) goto block19; else goto block18;
block19:;
// line 685
panda$core$Bit $tmp3163 = panda$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp3163;
goto block18;
block18:;
org$pandalanguage$pandac$IR$Statement* $tmp3164 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3164));
// unreffing last
*(&local7) = ((org$pandalanguage$pandac$IR$Statement*) NULL);
goto block17;
block17:;
goto block8;
block15:;
panda$core$Int64 $tmp3165 = (panda$core$Int64) {13};
panda$core$Bit $tmp3166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3090, $tmp3165);
bool $tmp3167 = $tmp3166.value;
if ($tmp3167) goto block20; else goto block8;
block20:;
// line 691
panda$core$Bit $tmp3168 = panda$core$Bit$init$builtin_bit(true);
*(&local3) = $tmp3168;
// line 692
panda$core$Bit $tmp3169 = panda$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp3169;
goto block8;
block8:;
goto block4;
block5:;
// line 1
// line 697
org$pandalanguage$pandac$MethodRef* $tmp3170 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3171 = &$tmp3170->value;
org$pandalanguage$pandac$MethodDecl* $tmp3172 = *$tmp3171;
panda$core$Weak** $tmp3173 = &$tmp3172->owner;
panda$core$Weak* $tmp3174 = *$tmp3173;
panda$core$Object* $tmp3175 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3174);
panda$core$Bit $tmp3176 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$Q$R$panda$core$Bit(param0, ((org$pandalanguage$pandac$ClassDecl*) $tmp3175));
bool $tmp3177 = $tmp3176.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp3175);
// unreffing REF($197:panda.core.Weak.T)
if ($tmp3177) goto block21; else goto block23;
block21:;
// line 698
panda$core$Bit $tmp3178 = panda$core$Bit$init$builtin_bit(false);
*(&local3) = $tmp3178;
// line 699
panda$core$Bit $tmp3179 = panda$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp3179;
goto block22;
block23:;
// line 1
// line 702
panda$core$Bit $tmp3180 = org$pandalanguage$pandac$Compiler$isClassContext$R$panda$core$Bit(param0);
panda$core$Bit $tmp3181 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3180);
*(&local3) = $tmp3181;
// line 703
panda$core$Bit $tmp3182 = *(&local3);
*(&local2) = $tmp3182;
goto block22;
block22:;
goto block4;
block4:;
// line 706
panda$core$Bit $tmp3183 = *(&local3);
bool $tmp3184 = $tmp3183.value;
if ($tmp3184) goto block26; else goto block27;
block26:;
panda$collections$Stack** $tmp3185 = &param0->currentMethod;
panda$collections$Stack* $tmp3186 = *$tmp3185;
panda$core$Int64 $tmp3187 = (panda$core$Int64) {0};
panda$core$Object* $tmp3188 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp3186, $tmp3187);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp3189 = &((org$pandalanguage$pandac$MethodDecl*) $tmp3188)->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp3190 = *$tmp3189;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3191;
$tmp3191 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3191->value = $tmp3190;
panda$core$Int64 $tmp3192 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp3193 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp3192);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3194;
$tmp3194 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3194->value = $tmp3193;
ITable* $tmp3195 = ((panda$core$Equatable*) $tmp3191)->$class->itable;
while ($tmp3195->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3195 = $tmp3195->next;
}
$fn3197 $tmp3196 = $tmp3195->methods[1];
panda$core$Bit $tmp3198 = $tmp3196(((panda$core$Equatable*) $tmp3191), ((panda$core$Equatable*) $tmp3194));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3194)));
// unreffing REF($239:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3191)));
// unreffing REF($235:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
panda$core$Panda$unref$panda$core$Object$Q($tmp3188);
// unreffing REF($231:panda.collections.Stack.T)
*(&local8) = $tmp3198;
goto block28;
block27:;
*(&local8) = $tmp3183;
goto block28;
block28:;
panda$core$Bit $tmp3199 = *(&local8);
bool $tmp3200 = $tmp3199.value;
if ($tmp3200) goto block24; else goto block25;
block24:;
// line 707
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s3201);
// line 708
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$MethodRef* $tmp3202 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3202));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3203 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3203));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block25:;
// line 710
panda$core$Bit $tmp3204 = *(&local2);
panda$core$Bit $tmp3205 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3204);
bool $tmp3206 = $tmp3205.value;
if ($tmp3206) goto block29; else goto block30;
block29:;
// line 711
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s3207);
// line 712
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$MethodRef* $tmp3208 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3208));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3209 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3209));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block30:;
goto block2;
block2:;
// line 715
ITable* $tmp3210 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp3210->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3210 = $tmp3210->next;
}
$fn3212 $tmp3211 = $tmp3210->methods[0];
panda$core$Int64 $tmp3213 = $tmp3211(((panda$collections$CollectionView*) param4));
org$pandalanguage$pandac$MethodRef* $tmp3214 = *(&local1);
panda$core$Int64 $tmp3215 = org$pandalanguage$pandac$MethodRef$get_parameterCount$R$panda$core$Int64($tmp3214);
int64_t $tmp3216 = $tmp3213.value;
int64_t $tmp3217 = $tmp3215.value;
bool $tmp3218 = $tmp3216 != $tmp3217;
panda$core$Bit $tmp3219 = (panda$core$Bit) {$tmp3218};
bool $tmp3220 = $tmp3219.value;
if ($tmp3220) goto block31; else goto block32;
block31:;
// line 716
org$pandalanguage$pandac$MethodRef* $tmp3221 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3222 = &$tmp3221->value;
org$pandalanguage$pandac$MethodDecl* $tmp3223 = *$tmp3222;
panda$core$String* $tmp3224 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp3223);
panda$core$String* $tmp3225 = panda$core$String$convert$R$panda$core$String($tmp3224);
panda$core$String* $tmp3226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3225, &$s3227);
org$pandalanguage$pandac$MethodRef* $tmp3228 = *(&local1);
panda$core$Int64 $tmp3229 = org$pandalanguage$pandac$MethodRef$get_parameterCount$R$panda$core$Int64($tmp3228);
panda$core$Int64$wrapper* $tmp3230;
$tmp3230 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3230->value = $tmp3229;
panda$core$String* $tmp3231 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3226, ((panda$core$Object*) $tmp3230));
panda$core$String* $tmp3232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3231, &$s3233);
org$pandalanguage$pandac$MethodRef* $tmp3234 = *(&local1);
panda$core$Int64 $tmp3235 = org$pandalanguage$pandac$MethodRef$get_parameterCount$R$panda$core$Int64($tmp3234);
panda$core$Int64 $tmp3236 = (panda$core$Int64) {1};
panda$core$Bit $tmp3237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3235, $tmp3236);
panda$core$Bit$wrapper* $tmp3238;
$tmp3238 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp3238->value = $tmp3237;
ITable* $tmp3239 = ((panda$core$Formattable*) $tmp3238)->$class->itable;
while ($tmp3239->$class != (panda$core$Class*) &panda$core$Formattable$class) {
    $tmp3239 = $tmp3239->next;
}
$fn3241 $tmp3240 = $tmp3239->methods[0];
panda$core$String* $tmp3242 = $tmp3240(((panda$core$Formattable*) $tmp3238), &$s3243);
panda$core$String* $tmp3244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3245, $tmp3242);
panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3244, &$s3247);
ITable* $tmp3248 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp3248->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3248 = $tmp3248->next;
}
$fn3250 $tmp3249 = $tmp3248->methods[0];
panda$core$Int64 $tmp3251 = $tmp3249(((panda$collections$CollectionView*) param4));
panda$core$Int64$wrapper* $tmp3252;
$tmp3252 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3252->value = $tmp3251;
panda$core$String* $tmp3253 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3246, ((panda$core$Object*) $tmp3252));
panda$core$String* $tmp3254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3253, &$s3255);
panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3232, $tmp3254);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp3256);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3256));
// unreffing REF($335:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3254));
// unreffing REF($334:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3253));
// unreffing REF($333:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3252));
// unreffing REF($332:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3246));
// unreffing REF($328:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3244));
// unreffing REF($327:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3242));
// unreffing REF($326:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Formattable*) $tmp3238)));
// unreffing REF($324:panda.core.Formattable)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3232));
// unreffing REF($319:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3231));
// unreffing REF($318:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3230));
// unreffing REF($317:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3226));
// unreffing REF($314:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3225));
// unreffing REF($313:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3224));
// unreffing REF($312:panda.core.String)
// line 718
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$MethodRef* $tmp3257 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3257));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3258 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3258));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block32:;
// line 720
panda$core$Bit $tmp3259 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3260 = $tmp3259.value;
if ($tmp3260) goto block35; else goto block36;
block35:;
org$pandalanguage$pandac$MethodRef* $tmp3261 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3262 = &$tmp3261->value;
org$pandalanguage$pandac$MethodDecl* $tmp3263 = *$tmp3262;
org$pandalanguage$pandac$Annotations** $tmp3264 = &$tmp3263->annotations;
org$pandalanguage$pandac$Annotations* $tmp3265 = *$tmp3264;
panda$core$Bit $tmp3266 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp3265);
*(&local9) = $tmp3266;
goto block37;
block36:;
*(&local9) = $tmp3259;
goto block37;
block37:;
panda$core$Bit $tmp3267 = *(&local9);
bool $tmp3268 = $tmp3267.value;
if ($tmp3268) goto block33; else goto block34;
block33:;
// line 721
panda$core$Bit $tmp3269 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3270 = $tmp3269.value;
if ($tmp3270) goto block38; else goto block39;
block39:;
panda$core$Int64 $tmp3271 = (panda$core$Int64) {721};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3272, $tmp3271, &$s3273);
abort(); // unreachable
block38:;
panda$core$Int64* $tmp3274 = &param2->$rawValue;
panda$core$Int64 $tmp3275 = *$tmp3274;
panda$core$Int64 $tmp3276 = (panda$core$Int64) {14};
panda$core$Bit $tmp3277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3275, $tmp3276);
bool $tmp3278 = $tmp3277.value;
if ($tmp3278) goto block41; else goto block42;
block41:;
goto block40;
block42:;
// line 726
org$pandalanguage$pandac$MethodRef* $tmp3279 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3280 = &$tmp3279->value;
org$pandalanguage$pandac$MethodDecl* $tmp3281 = *$tmp3280;
panda$core$String* $tmp3282 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp3281);
panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3284, $tmp3282);
panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, &$s3286);
panda$core$String* $tmp3287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3285, &$s3288);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp3287);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3287));
// unreffing REF($434:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3285));
// unreffing REF($433:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3283));
// unreffing REF($432:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3282));
// unreffing REF($431:panda.core.String)
goto block40;
block40:;
goto block34;
block34:;
// line 731
org$pandalanguage$pandac$MethodRef* $tmp3289 = *(&local1);
org$pandalanguage$pandac$Pair* $tmp3290 = org$pandalanguage$pandac$expression$Call$compileIntrinsic$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Pair$LTpanda$core$Bit$Corg$pandalanguage$pandac$IR$Value$Q$GT(param0, param1, param2, $tmp3289, param4);
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3290));
org$pandalanguage$pandac$Pair* $tmp3291 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3291));
*(&local10) = $tmp3290;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3290));
// unreffing REF($452:org.pandalanguage.pandac.Pair<panda.core.Bit, org.pandalanguage.pandac.IR.Value?>)
// line 732
org$pandalanguage$pandac$Pair* $tmp3292 = *(&local10);
panda$core$Object** $tmp3293 = &$tmp3292->first;
panda$core$Object* $tmp3294 = *$tmp3293;
bool $tmp3295 = ((panda$core$Bit$wrapper*) $tmp3294)->value.value;
if ($tmp3295) goto block43; else goto block44;
block43:;
// line 733
org$pandalanguage$pandac$Pair* $tmp3296 = *(&local10);
panda$core$Object** $tmp3297 = &$tmp3296->second;
panda$core$Object* $tmp3298 = *$tmp3297;
org$pandalanguage$pandac$IR$Value* $tmp3299 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, ((org$pandalanguage$pandac$IR$Value*) $tmp3298), param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3299));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3299));
// unreffing REF($477:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Pair* $tmp3300 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3300));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3301 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3301));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3302 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3302));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp3299;
block44:;
// line 735
org$pandalanguage$pandac$MethodRef* $tmp3303 = *(&local1);
org$pandalanguage$pandac$MethodRef* $tmp3304 = org$pandalanguage$pandac$expression$Call$performTypeInference$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$MethodRef$Q(param0, $tmp3303, param4);
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3304));
org$pandalanguage$pandac$MethodRef* $tmp3305 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3305));
*(&local11) = $tmp3304;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3304));
// unreffing REF($501:org.pandalanguage.pandac.MethodRef?)
// line 736
org$pandalanguage$pandac$MethodRef* $tmp3306 = *(&local11);
panda$core$Bit $tmp3307 = panda$core$Bit$init$builtin_bit($tmp3306 == NULL);
bool $tmp3308 = $tmp3307.value;
if ($tmp3308) goto block45; else goto block46;
block45:;
// line 737
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$MethodRef* $tmp3309 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3309));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp3310 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3310));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3311 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3311));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3312 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3312));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block46:;
// line 739
org$pandalanguage$pandac$MethodRef* $tmp3313 = *(&local11);
panda$core$Bit $tmp3314 = panda$core$Bit$init$builtin_bit($tmp3313 != NULL);
bool $tmp3315 = $tmp3314.value;
if ($tmp3315) goto block47; else goto block48;
block48:;
panda$core$Int64 $tmp3316 = (panda$core$Int64) {739};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3317, $tmp3316, &$s3318);
abort(); // unreachable
block47:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3313));
org$pandalanguage$pandac$MethodRef* $tmp3319 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3319));
*(&local1) = $tmp3313;
// line 740
// line 741
panda$core$Bit $tmp3320 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3321 = $tmp3320.value;
if ($tmp3321) goto block49; else goto block51;
block49:;
// line 742
panda$core$Bit $tmp3322 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3323 = $tmp3322.value;
if ($tmp3323) goto block52; else goto block53;
block53:;
panda$core$Int64 $tmp3324 = (panda$core$Int64) {742};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3325, $tmp3324, &$s3326);
abort(); // unreachable
block52:;
panda$core$Int64* $tmp3327 = &param2->$rawValue;
panda$core$Int64 $tmp3328 = *$tmp3327;
panda$core$Int64 $tmp3329 = (panda$core$Int64) {13};
panda$core$Bit $tmp3330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3328, $tmp3329);
bool $tmp3331 = $tmp3330.value;
if ($tmp3331) goto block55; else goto block56;
block55:;
// line 744
panda$core$Bit $tmp3332 = panda$core$Bit$init$builtin_bit(true);
*(&local12) = $tmp3332;
goto block54;
block56:;
// line 747
panda$core$Bit $tmp3333 = panda$core$Bit$init$builtin_bit(false);
*(&local12) = $tmp3333;
goto block54;
block54:;
goto block50;
block51:;
// line 1
// line 752
panda$core$Bit $tmp3334 = panda$core$Bit$init$builtin_bit(false);
*(&local12) = $tmp3334;
goto block50;
block50:;
// line 756
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
// line 757
org$pandalanguage$pandac$MethodRef* $tmp3335 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3336 = &$tmp3335->value;
org$pandalanguage$pandac$MethodDecl* $tmp3337 = *$tmp3336;
panda$core$Bit $tmp3338 = org$pandalanguage$pandac$MethodDecl$get_isVirtual$R$panda$core$Bit($tmp3337);
bool $tmp3339 = $tmp3338.value;
if ($tmp3339) goto block57; else goto block59;
block57:;
// line 758
org$pandalanguage$pandac$MethodRef* $tmp3340 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3341 = &$tmp3340->value;
org$pandalanguage$pandac$MethodDecl* $tmp3342 = *$tmp3341;
org$pandalanguage$pandac$Type* $tmp3343 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(param0, $tmp3342);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3343));
org$pandalanguage$pandac$Type* $tmp3344 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3344));
*(&local13) = $tmp3343;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3343));
// unreffing REF($606:org.pandalanguage.pandac.Type)
goto block58;
block59:;
// line 1
// line 761
org$pandalanguage$pandac$MethodRef* $tmp3345 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3346 = &$tmp3345->value;
org$pandalanguage$pandac$MethodDecl* $tmp3347 = *$tmp3346;
org$pandalanguage$pandac$MethodRef* $tmp3348 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3349 = &$tmp3348->value;
org$pandalanguage$pandac$MethodDecl* $tmp3350 = *$tmp3349;
panda$core$Weak** $tmp3351 = &$tmp3350->owner;
panda$core$Weak* $tmp3352 = *$tmp3351;
panda$core$Object* $tmp3353 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3352);
org$pandalanguage$pandac$Type** $tmp3354 = &((org$pandalanguage$pandac$ClassDecl*) $tmp3353)->type;
org$pandalanguage$pandac$Type* $tmp3355 = *$tmp3354;
panda$core$Bit $tmp3356 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp3357 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type(param0, $tmp3347, $tmp3355, $tmp3356);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3357));
org$pandalanguage$pandac$Type* $tmp3358 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3358));
*(&local13) = $tmp3357;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3357));
// unreffing REF($633:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp3353);
// unreffing REF($628:panda.core.Weak.T)
goto block58;
block58:;
// line 763
org$pandalanguage$pandac$Type* $tmp3359 = *(&local13);
panda$core$Bit $tmp3360 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit($tmp3359);
bool $tmp3361 = $tmp3360.value;
if ($tmp3361) goto block60; else goto block61;
block61:;
panda$core$Int64 $tmp3362 = (panda$core$Int64) {763};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3363, $tmp3362);
abort(); // unreachable
block60:;
// line 764
org$pandalanguage$pandac$MethodRef* $tmp3364 = *(&local1);
org$pandalanguage$pandac$Type** $tmp3365 = &$tmp3364->effectiveType;
org$pandalanguage$pandac$Type* $tmp3366 = *$tmp3365;
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3366));
org$pandalanguage$pandac$Type* $tmp3367 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3367));
*(&local14) = $tmp3366;
// line 765
org$pandalanguage$pandac$Type* $tmp3368 = *(&local14);
panda$core$Bit $tmp3369 = org$pandalanguage$pandac$Type$get_isMethod$R$panda$core$Bit($tmp3368);
bool $tmp3370 = $tmp3369.value;
if ($tmp3370) goto block62; else goto block63;
block63:;
panda$core$Int64 $tmp3371 = (panda$core$Int64) {765};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3372, $tmp3371);
abort(); // unreachable
block62:;
// line 766
panda$collections$Array* $tmp3373 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
ITable* $tmp3374 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp3374->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3374 = $tmp3374->next;
}
$fn3376 $tmp3375 = $tmp3374->methods[0];
panda$core$Int64 $tmp3377 = $tmp3375(((panda$collections$CollectionView*) param4));
panda$collections$Array$init$panda$core$Int64($tmp3373, $tmp3377);
*(&local15) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3373));
panda$collections$Array* $tmp3378 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3378));
*(&local15) = $tmp3373;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3373));
// unreffing REF($675:panda.collections.Array<org.pandalanguage.pandac.IR.Value>)
// line 767
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 768
panda$core$Bit $tmp3379 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3380 = $tmp3379.value;
if ($tmp3380) goto block64; else goto block66;
block64:;
// line 769
panda$core$Bit $tmp3381 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3382 = $tmp3381.value;
if ($tmp3382) goto block67; else goto block68;
block68:;
panda$core$Int64 $tmp3383 = (panda$core$Int64) {769};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3384, $tmp3383, &$s3385);
abort(); // unreachable
block67:;
panda$core$Int64* $tmp3386 = &param2->$rawValue;
panda$core$Int64 $tmp3387 = *$tmp3386;
panda$core$Int64 $tmp3388 = (panda$core$Int64) {14};
panda$core$Bit $tmp3389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3387, $tmp3388);
bool $tmp3390 = $tmp3389.value;
if ($tmp3390) goto block70; else goto block71;
block70:;
goto block69;
block71:;
// line 774
org$pandalanguage$pandac$MethodRef* $tmp3391 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3392 = &$tmp3391->value;
org$pandalanguage$pandac$MethodDecl* $tmp3393 = *$tmp3392;
panda$core$Weak** $tmp3394 = &$tmp3393->owner;
panda$core$Weak* $tmp3395 = *$tmp3394;
panda$core$Object* $tmp3396 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3395);
panda$core$String** $tmp3397 = &((org$pandalanguage$pandac$ClassDecl*) $tmp3396)->name;
panda$core$String* $tmp3398 = *$tmp3397;
panda$core$Bit $tmp3399 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp3398, &$s3400);
bool $tmp3401 = $tmp3399.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp3396);
// unreffing REF($721:panda.core.Weak.T)
if ($tmp3401) goto block72; else goto block74;
block72:;
// line 775
org$pandalanguage$pandac$Type* $tmp3402 = *(&local13);
panda$core$Int64 $tmp3403 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp3404 = org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp3402, $tmp3403);
org$pandalanguage$pandac$IR$Value* $tmp3405 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, $tmp3404);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3405));
org$pandalanguage$pandac$IR$Value* $tmp3406 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3406));
*(&local16) = $tmp3405;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3405));
// unreffing REF($735:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3404));
// unreffing REF($734:org.pandalanguage.pandac.Type)
goto block73;
block74:;
// line 778
panda$core$Bit $tmp3407 = *(&local12);
bool $tmp3408 = $tmp3407.value;
if ($tmp3408) goto block75; else goto block77;
block75:;
// line 779
panda$core$Bit $tmp3409 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$IR$Value* $tmp3410 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$Position$panda$core$Bit$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3409);
org$pandalanguage$pandac$MethodRef* $tmp3411 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3412 = &$tmp3411->value;
org$pandalanguage$pandac$MethodDecl* $tmp3413 = *$tmp3412;
panda$core$Weak** $tmp3414 = &$tmp3413->owner;
panda$core$Weak* $tmp3415 = *$tmp3414;
panda$core$Object* $tmp3416 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3415);
org$pandalanguage$pandac$Type** $tmp3417 = &((org$pandalanguage$pandac$ClassDecl*) $tmp3416)->type;
org$pandalanguage$pandac$Type* $tmp3418 = *$tmp3417;
org$pandalanguage$pandac$IR$Value* $tmp3419 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3410, $tmp3418);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3419));
org$pandalanguage$pandac$IR$Value* $tmp3420 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3420));
*(&local16) = $tmp3419;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3419));
// unreffing REF($766:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp3416);
// unreffing REF($762:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3410));
// unreffing REF($755:org.pandalanguage.pandac.IR.Value?)
goto block76;
block77:;
// line 1
// line 784
org$pandalanguage$pandac$MethodRef* $tmp3421 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3422 = &$tmp3421->value;
org$pandalanguage$pandac$MethodDecl* $tmp3423 = *$tmp3422;
panda$core$Weak** $tmp3424 = &$tmp3423->owner;
panda$core$Weak* $tmp3425 = *$tmp3424;
panda$core$Object* $tmp3426 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3425);
org$pandalanguage$pandac$Type** $tmp3427 = &((org$pandalanguage$pandac$ClassDecl*) $tmp3426)->type;
org$pandalanguage$pandac$Type* $tmp3428 = *$tmp3427;
org$pandalanguage$pandac$IR$Value* $tmp3429 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, $tmp3428);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3429));
org$pandalanguage$pandac$IR$Value* $tmp3430 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3430));
*(&local16) = $tmp3429;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3429));
// unreffing REF($795:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp3426);
// unreffing REF($791:panda.core.Weak.T)
goto block76;
block76:;
goto block73;
block73:;
// line 786
org$pandalanguage$pandac$IR$Value* $tmp3431 = *(&local16);
panda$core$Bit $tmp3432 = panda$core$Bit$init$builtin_bit($tmp3431 == NULL);
bool $tmp3433 = $tmp3432.value;
if ($tmp3433) goto block78; else goto block79;
block78:;
// line 787
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp3434 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3434));
// unreffing finalTarget
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp3435 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3435));
// unreffing finalArgs
*(&local15) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp3436 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3436));
// unreffing effectiveType
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3437 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3437));
// unreffing actualType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3438 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3438));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp3439 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3439));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3440 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3440));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3441 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3441));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block79:;
// line 789
panda$collections$Array* $tmp3442 = *(&local15);
org$pandalanguage$pandac$IR$Value* $tmp3443 = *(&local16);
panda$core$Bit $tmp3444 = panda$core$Bit$init$builtin_bit($tmp3443 != NULL);
bool $tmp3445 = $tmp3444.value;
if ($tmp3445) goto block80; else goto block81;
block81:;
panda$core$Int64 $tmp3446 = (panda$core$Int64) {789};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3447, $tmp3446, &$s3448);
abort(); // unreachable
block80:;
panda$collections$Array$add$panda$collections$Array$T($tmp3442, ((panda$core$Object*) $tmp3443));
goto block69;
block69:;
goto block65;
block66:;
// line 793
org$pandalanguage$pandac$MethodRef* $tmp3449 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3450 = &$tmp3449->value;
org$pandalanguage$pandac$MethodDecl* $tmp3451 = *$tmp3450;
org$pandalanguage$pandac$Annotations** $tmp3452 = &$tmp3451->annotations;
org$pandalanguage$pandac$Annotations* $tmp3453 = *$tmp3452;
panda$core$Bit $tmp3454 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp3453);
panda$core$Bit $tmp3455 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3454);
bool $tmp3456 = $tmp3455.value;
if ($tmp3456) goto block84; else goto block85;
block84:;
org$pandalanguage$pandac$MethodRef* $tmp3457 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3458 = &$tmp3457->value;
org$pandalanguage$pandac$MethodDecl* $tmp3459 = *$tmp3458;
panda$core$Bit $tmp3460 = org$pandalanguage$pandac$Compiler$isValueInit$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(param0, $tmp3459);
panda$core$Bit $tmp3461 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3460);
*(&local17) = $tmp3461;
goto block86;
block85:;
*(&local17) = $tmp3455;
goto block86;
block86:;
panda$core$Bit $tmp3462 = *(&local17);
bool $tmp3463 = $tmp3462.value;
if ($tmp3463) goto block82; else goto block87;
block82:;
// line 794
panda$core$Bit $tmp3464 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$IR$Value* $tmp3465 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$Position$panda$core$Bit$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3464);
org$pandalanguage$pandac$MethodRef* $tmp3466 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3467 = &$tmp3466->value;
org$pandalanguage$pandac$MethodDecl* $tmp3468 = *$tmp3467;
panda$core$Weak** $tmp3469 = &$tmp3468->owner;
panda$core$Weak* $tmp3470 = *$tmp3469;
panda$core$Object* $tmp3471 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3470);
org$pandalanguage$pandac$Type** $tmp3472 = &((org$pandalanguage$pandac$ClassDecl*) $tmp3471)->type;
org$pandalanguage$pandac$Type* $tmp3473 = *$tmp3472;
org$pandalanguage$pandac$IR$Value* $tmp3474 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3465, $tmp3473);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3474));
org$pandalanguage$pandac$IR$Value* $tmp3475 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3475));
*(&local16) = $tmp3474;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3474));
// unreffing REF($911:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp3471);
// unreffing REF($907:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3465));
// unreffing REF($900:org.pandalanguage.pandac.IR.Value?)
// line 796
org$pandalanguage$pandac$IR$Value* $tmp3476 = *(&local16);
panda$core$Bit $tmp3477 = panda$core$Bit$init$builtin_bit($tmp3476 == NULL);
bool $tmp3478 = $tmp3477.value;
if ($tmp3478) goto block88; else goto block89;
block88:;
// line 797
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp3479 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3479));
// unreffing finalTarget
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp3480 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3480));
// unreffing finalArgs
*(&local15) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp3481 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3481));
// unreffing effectiveType
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3482 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3482));
// unreffing actualType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3483 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3483));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp3484 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3484));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3485 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3485));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3486 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3486));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block89:;
// line 799
panda$collections$Array* $tmp3487 = *(&local15);
org$pandalanguage$pandac$IR$Value* $tmp3488 = *(&local16);
panda$core$Bit $tmp3489 = panda$core$Bit$init$builtin_bit($tmp3488 != NULL);
bool $tmp3490 = $tmp3489.value;
if ($tmp3490) goto block90; else goto block91;
block91:;
panda$core$Int64 $tmp3491 = (panda$core$Int64) {799};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3492, $tmp3491, &$s3493);
abort(); // unreachable
block90:;
panda$collections$Array$add$panda$collections$Array$T($tmp3487, ((panda$core$Object*) $tmp3488));
goto block83;
block87:;
// line 1
// line 802
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp3494 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3494));
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block83;
block83:;
goto block65;
block65:;
// line 804
// line 805
org$pandalanguage$pandac$MethodRef* $tmp3495 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3496 = &$tmp3495->value;
org$pandalanguage$pandac$MethodDecl* $tmp3497 = *$tmp3496;
org$pandalanguage$pandac$Annotations** $tmp3498 = &$tmp3497->annotations;
org$pandalanguage$pandac$Annotations* $tmp3499 = *$tmp3498;
panda$core$Bit $tmp3500 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp3499);
panda$core$Bit $tmp3501 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3500);
bool $tmp3502 = $tmp3501.value;
if ($tmp3502) goto block94; else goto block95;
block94:;
panda$core$Bit $tmp3503 = panda$core$Bit$init$builtin_bit(param2 != NULL);
*(&local20) = $tmp3503;
goto block96;
block95:;
*(&local20) = $tmp3501;
goto block96;
block96:;
panda$core$Bit $tmp3504 = *(&local20);
bool $tmp3505 = $tmp3504.value;
if ($tmp3505) goto block97; else goto block98;
block97:;
panda$core$Bit $tmp3506 = panda$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3507 = $tmp3506.value;
if ($tmp3507) goto block100; else goto block101;
block101:;
panda$core$Int64 $tmp3508 = (panda$core$Int64) {805};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3509, $tmp3508, &$s3510);
abort(); // unreachable
block100:;
$fn3512 $tmp3511 = ($fn3512) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3513 = $tmp3511(param2);
panda$core$Bit $tmp3514 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit($tmp3513);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3513));
// unreffing REF($1031:org.pandalanguage.pandac.Type)
*(&local19) = $tmp3514;
goto block99;
block98:;
*(&local19) = $tmp3504;
goto block99;
block99:;
panda$core$Bit $tmp3515 = *(&local19);
bool $tmp3516 = $tmp3515.value;
if ($tmp3516) goto block92; else goto block102;
block92:;
// line 806
panda$core$Int64 $tmp3517 = (panda$core$Int64) {0};
*(&local18) = $tmp3517;
goto block93;
block102:;
// line 1
// line 809
panda$core$Int64 $tmp3518 = (panda$core$Int64) {1};
*(&local18) = $tmp3518;
goto block93;
block93:;
// line 811
panda$core$Int64 $tmp3519 = (panda$core$Int64) {0};
ITable* $tmp3520 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp3520->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3520 = $tmp3520->next;
}
$fn3522 $tmp3521 = $tmp3520->methods[0];
panda$core$Int64 $tmp3523 = $tmp3521(((panda$collections$CollectionView*) param4));
panda$core$Bit $tmp3524 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp3525 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3519, $tmp3523, $tmp3524);
panda$core$Int64 $tmp3526 = $tmp3525.min;
*(&local21) = $tmp3526;
panda$core$Int64 $tmp3527 = $tmp3525.max;
panda$core$Bit $tmp3528 = $tmp3525.inclusive;
bool $tmp3529 = $tmp3528.value;
panda$core$Int64 $tmp3530 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp3531 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3530);
if ($tmp3529) goto block106; else goto block107;
block106:;
int64_t $tmp3532 = $tmp3526.value;
int64_t $tmp3533 = $tmp3527.value;
bool $tmp3534 = $tmp3532 <= $tmp3533;
panda$core$Bit $tmp3535 = (panda$core$Bit) {$tmp3534};
bool $tmp3536 = $tmp3535.value;
if ($tmp3536) goto block103; else goto block104;
block107:;
int64_t $tmp3537 = $tmp3526.value;
int64_t $tmp3538 = $tmp3527.value;
bool $tmp3539 = $tmp3537 < $tmp3538;
panda$core$Bit $tmp3540 = (panda$core$Bit) {$tmp3539};
bool $tmp3541 = $tmp3540.value;
if ($tmp3541) goto block103; else goto block104;
block103:;
// line 812
panda$core$Int64 $tmp3542 = *(&local21);
ITable* $tmp3543 = param4->$class->itable;
while ($tmp3543->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp3543 = $tmp3543->next;
}
$fn3545 $tmp3544 = $tmp3543->methods[0];
panda$core$Object* $tmp3546 = $tmp3544(param4, $tmp3542);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp3547 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp3548 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp3549 = *(&local14);
panda$core$Int64 $tmp3550 = *(&local21);
org$pandalanguage$pandac$Type* $tmp3551 = org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp3549, $tmp3550);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3547, $tmp3548, $tmp3551);
org$pandalanguage$pandac$IR$Value* $tmp3552 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, ((org$pandalanguage$pandac$ASTNode*) $tmp3546), $tmp3547);
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3552));
org$pandalanguage$pandac$IR$Value* $tmp3553 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3553));
*(&local22) = $tmp3552;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3552));
// unreffing REF($1091:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3551));
// unreffing REF($1089:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3547));
// unreffing REF($1085:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q($tmp3546);
// unreffing REF($1083:panda.collections.ListView.T)
// line 814
org$pandalanguage$pandac$IR$Value* $tmp3554 = *(&local22);
panda$core$Bit $tmp3555 = panda$core$Bit$init$builtin_bit($tmp3554 == NULL);
bool $tmp3556 = $tmp3555.value;
if ($tmp3556) goto block108; else goto block109;
block108:;
// line 815
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp3557 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3557));
// unreffing a
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp3558 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3558));
// unreffing finalTarget
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp3559 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3559));
// unreffing finalArgs
*(&local15) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp3560 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3560));
// unreffing effectiveType
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3561 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3561));
// unreffing actualType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3562 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3562));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp3563 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3563));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3564 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3564));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3565 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3565));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block109:;
// line 817
org$pandalanguage$pandac$IR$Value* $tmp3566 = *(&local22);
panda$core$Bit $tmp3567 = panda$core$Bit$init$builtin_bit($tmp3566 != NULL);
bool $tmp3568 = $tmp3567.value;
if ($tmp3568) goto block112; else goto block113;
block113:;
panda$core$Int64 $tmp3569 = (panda$core$Int64) {817};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3570, $tmp3569, &$s3571);
abort(); // unreachable
block112:;
$fn3573 $tmp3572 = ($fn3573) $tmp3566->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3574 = $tmp3572($tmp3566);
org$pandalanguage$pandac$Type* $tmp3575 = *(&local13);
panda$core$Int64 $tmp3576 = *(&local21);
panda$core$Int64 $tmp3577 = *(&local18);
int64_t $tmp3578 = $tmp3576.value;
int64_t $tmp3579 = $tmp3577.value;
int64_t $tmp3580 = $tmp3578 + $tmp3579;
panda$core$Int64 $tmp3581 = (panda$core$Int64) {$tmp3580};
org$pandalanguage$pandac$Type* $tmp3582 = org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp3575, $tmp3581);
ITable* $tmp3583 = ((panda$core$Equatable*) $tmp3574)->$class->itable;
while ($tmp3583->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3583 = $tmp3583->next;
}
$fn3585 $tmp3584 = $tmp3583->methods[1];
panda$core$Bit $tmp3586 = $tmp3584(((panda$core$Equatable*) $tmp3574), ((panda$core$Equatable*) $tmp3582));
bool $tmp3587 = $tmp3586.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3582));
// unreffing REF($1187:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3574));
// unreffing REF($1177:org.pandalanguage.pandac.Type)
if ($tmp3587) goto block110; else goto block111;
block110:;
// line 818
org$pandalanguage$pandac$IR$Value* $tmp3588 = *(&local22);
org$pandalanguage$pandac$Type* $tmp3589 = *(&local13);
panda$core$Int64 $tmp3590 = *(&local21);
panda$core$Int64 $tmp3591 = *(&local18);
int64_t $tmp3592 = $tmp3590.value;
int64_t $tmp3593 = $tmp3591.value;
int64_t $tmp3594 = $tmp3592 + $tmp3593;
panda$core$Int64 $tmp3595 = (panda$core$Int64) {$tmp3594};
org$pandalanguage$pandac$Type* $tmp3596 = org$pandalanguage$pandac$Type$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp3589, $tmp3595);
org$pandalanguage$pandac$IR$Value* $tmp3597 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3588, $tmp3596);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3597));
org$pandalanguage$pandac$IR$Value* $tmp3598 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3598));
*(&local22) = $tmp3597;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3597));
// unreffing REF($1209:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3596));
// unreffing REF($1208:org.pandalanguage.pandac.Type)
goto block111;
block111:;
// line 820
org$pandalanguage$pandac$IR$Value* $tmp3599 = *(&local22);
panda$core$Bit $tmp3600 = panda$core$Bit$init$builtin_bit($tmp3599 == NULL);
bool $tmp3601 = $tmp3600.value;
if ($tmp3601) goto block114; else goto block115;
block114:;
// line 821
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp3602 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3602));
// unreffing a
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp3603 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3603));
// unreffing finalTarget
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp3604 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3604));
// unreffing finalArgs
*(&local15) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp3605 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3605));
// unreffing effectiveType
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3606 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3606));
// unreffing actualType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3607 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3607));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp3608 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3608));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3609 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3609));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3610 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3610));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block115:;
// line 823
panda$collections$Array* $tmp3611 = *(&local15);
org$pandalanguage$pandac$IR$Value* $tmp3612 = *(&local22);
panda$core$Bit $tmp3613 = panda$core$Bit$init$builtin_bit($tmp3612 != NULL);
bool $tmp3614 = $tmp3613.value;
if ($tmp3614) goto block116; else goto block117;
block117:;
panda$core$Int64 $tmp3615 = (panda$core$Int64) {823};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3616, $tmp3615, &$s3617);
abort(); // unreachable
block116:;
panda$collections$Array$add$panda$collections$Array$T($tmp3611, ((panda$core$Object*) $tmp3612));
org$pandalanguage$pandac$IR$Value* $tmp3618 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3618));
// unreffing a
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block105;
block105:;
panda$core$Int64 $tmp3619 = *(&local21);
int64_t $tmp3620 = $tmp3527.value;
int64_t $tmp3621 = $tmp3619.value;
int64_t $tmp3622 = $tmp3620 - $tmp3621;
panda$core$Int64 $tmp3623 = (panda$core$Int64) {$tmp3622};
panda$core$UInt64 $tmp3624 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3623);
if ($tmp3529) goto block119; else goto block120;
block119:;
uint64_t $tmp3625 = $tmp3624.value;
uint64_t $tmp3626 = $tmp3531.value;
bool $tmp3627 = $tmp3625 >= $tmp3626;
panda$core$Bit $tmp3628 = (panda$core$Bit) {$tmp3627};
bool $tmp3629 = $tmp3628.value;
if ($tmp3629) goto block118; else goto block104;
block120:;
uint64_t $tmp3630 = $tmp3624.value;
uint64_t $tmp3631 = $tmp3531.value;
bool $tmp3632 = $tmp3630 > $tmp3631;
panda$core$Bit $tmp3633 = (panda$core$Bit) {$tmp3632};
bool $tmp3634 = $tmp3633.value;
if ($tmp3634) goto block118; else goto block104;
block118:;
int64_t $tmp3635 = $tmp3619.value;
int64_t $tmp3636 = $tmp3530.value;
int64_t $tmp3637 = $tmp3635 + $tmp3636;
panda$core$Int64 $tmp3638 = (panda$core$Int64) {$tmp3637};
*(&local21) = $tmp3638;
goto block103;
block104:;
// line 825
// line 826
panda$core$Bit $tmp3639 = *(&local12);
panda$core$Bit $tmp3640 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3639);
bool $tmp3641 = $tmp3640.value;
if ($tmp3641) goto block123; else goto block124;
block123:;
org$pandalanguage$pandac$MethodRef* $tmp3642 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3643 = &$tmp3642->value;
org$pandalanguage$pandac$MethodDecl* $tmp3644 = *$tmp3643;
panda$core$Bit $tmp3645 = org$pandalanguage$pandac$MethodDecl$get_isVirtual$R$panda$core$Bit($tmp3644);
*(&local24) = $tmp3645;
goto block125;
block124:;
*(&local24) = $tmp3640;
goto block125;
block125:;
panda$core$Bit $tmp3646 = *(&local24);
bool $tmp3647 = $tmp3646.value;
if ($tmp3647) goto block121; else goto block126;
block121:;
// line 827
// line 828
org$pandalanguage$pandac$MethodRef* $tmp3648 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3649 = &$tmp3648->value;
org$pandalanguage$pandac$MethodDecl* $tmp3650 = *$tmp3649;
panda$core$Weak** $tmp3651 = &$tmp3650->owner;
panda$core$Weak* $tmp3652 = *$tmp3651;
panda$core$Object* $tmp3653 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3652);
org$pandalanguage$pandac$ClassDecl$Kind* $tmp3654 = &((org$pandalanguage$pandac$ClassDecl*) $tmp3653)->classKind;
org$pandalanguage$pandac$ClassDecl$Kind $tmp3655 = *$tmp3654;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp3656;
$tmp3656 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp3656->value = $tmp3655;
panda$core$Int64 $tmp3657 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp3658 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp3657);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp3659;
$tmp3659 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp3659->value = $tmp3658;
ITable* $tmp3660 = ((panda$core$Equatable*) $tmp3656)->$class->itable;
while ($tmp3660->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3660 = $tmp3660->next;
}
$fn3662 $tmp3661 = $tmp3660->methods[0];
panda$core$Bit $tmp3663 = $tmp3661(((panda$core$Equatable*) $tmp3656), ((panda$core$Equatable*) $tmp3659));
bool $tmp3664 = $tmp3663.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3659)));
// unreffing REF($1356:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3656)));
// unreffing REF($1352:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
panda$core$Panda$unref$panda$core$Object$Q($tmp3653);
// unreffing REF($1348:panda.core.Weak.T)
if ($tmp3664) goto block127; else goto block129;
block127:;
// line 829
org$pandalanguage$pandac$IR* $tmp3665 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp3666 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp3667 = (panda$core$Int64) {12};
org$pandalanguage$pandac$IR$Value* $tmp3668 = *(&local16);
panda$core$Bit $tmp3669 = panda$core$Bit$init$builtin_bit($tmp3668 != NULL);
bool $tmp3670 = $tmp3669.value;
if ($tmp3670) goto block130; else goto block131;
block131:;
panda$core$Int64 $tmp3671 = (panda$core$Int64) {829};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3672, $tmp3671, &$s3673);
abort(); // unreachable
block130:;
org$pandalanguage$pandac$MethodRef* $tmp3674 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3675 = &$tmp3674->value;
org$pandalanguage$pandac$MethodDecl* $tmp3676 = *$tmp3675;
panda$core$Weak** $tmp3677 = &$tmp3676->owner;
panda$core$Weak* $tmp3678 = *$tmp3677;
panda$core$Object* $tmp3679 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3678);
org$pandalanguage$pandac$MethodRef* $tmp3680 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3681 = &$tmp3680->value;
org$pandalanguage$pandac$MethodDecl* $tmp3682 = *$tmp3681;
panda$core$Int64 $tmp3683 = org$pandalanguage$pandac$Compiler$getVTableIndex$org$pandalanguage$pandac$MethodDecl$R$panda$core$Int64(param0, $tmp3682);
org$pandalanguage$pandac$Type* $tmp3684 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$ClassDecl* $tmp3685 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp3684);
panda$core$Bit $tmp3686 = panda$core$Bit$init$builtin_bit($tmp3685 != NULL);
bool $tmp3687 = $tmp3686.value;
if ($tmp3687) goto block132; else goto block133;
block133:;
panda$core$Int64 $tmp3688 = (panda$core$Int64) {832};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3689, $tmp3688, &$s3690);
abort(); // unreachable
block132:;
panda$collections$ListView* $tmp3691 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(param0, $tmp3685);
ITable* $tmp3692 = ((panda$collections$CollectionView*) $tmp3691)->$class->itable;
while ($tmp3692->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3692 = $tmp3692->next;
}
$fn3694 $tmp3693 = $tmp3692->methods[0];
panda$core$Int64 $tmp3695 = $tmp3693(((panda$collections$CollectionView*) $tmp3691));
int64_t $tmp3696 = $tmp3683.value;
int64_t $tmp3697 = $tmp3695.value;
int64_t $tmp3698 = $tmp3696 - $tmp3697;
panda$core$Int64 $tmp3699 = (panda$core$Int64) {$tmp3698};
org$pandalanguage$pandac$Type* $tmp3700 = *(&local13);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3666, $tmp3667, param1, $tmp3668, ((org$pandalanguage$pandac$ClassDecl*) $tmp3679), $tmp3699, $tmp3700);
$fn3702 $tmp3701 = ($fn3702) $tmp3665->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp3703 = $tmp3701($tmp3665, $tmp3666);
*(&local25) = $tmp3703;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3691));
// unreffing REF($1405:panda.collections.ListView<org.pandalanguage.pandac.MethodDecl>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3685));
// unreffing REF($1396:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3684));
// unreffing REF($1395:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp3679);
// unreffing REF($1389:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3666));
// unreffing REF($1372:org.pandalanguage.pandac.IR.Statement)
goto block128;
block129:;
// line 1
// line 836
org$pandalanguage$pandac$IR* $tmp3704 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp3705 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp3706 = (panda$core$Int64) {11};
org$pandalanguage$pandac$IR$Value* $tmp3707 = *(&local16);
panda$core$Bit $tmp3708 = panda$core$Bit$init$builtin_bit($tmp3707 != NULL);
bool $tmp3709 = $tmp3708.value;
if ($tmp3709) goto block134; else goto block135;
block135:;
panda$core$Int64 $tmp3710 = (panda$core$Int64) {836};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3711, $tmp3710, &$s3712);
abort(); // unreachable
block134:;
org$pandalanguage$pandac$MethodRef* $tmp3713 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3714 = &$tmp3713->value;
org$pandalanguage$pandac$MethodDecl* $tmp3715 = *$tmp3714;
panda$core$Int64 $tmp3716 = org$pandalanguage$pandac$Compiler$getVTableIndex$org$pandalanguage$pandac$MethodDecl$R$panda$core$Int64(param0, $tmp3715);
org$pandalanguage$pandac$Type* $tmp3717 = *(&local13);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3705, $tmp3706, param1, $tmp3707, $tmp3716, $tmp3717);
$fn3719 $tmp3718 = ($fn3719) $tmp3704->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp3720 = $tmp3718($tmp3704, $tmp3705);
*(&local25) = $tmp3720;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3705));
// unreffing REF($1437:org.pandalanguage.pandac.IR.Statement)
goto block128;
block128:;
// line 839
org$pandalanguage$pandac$IR* $tmp3721 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp3722 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp3723 = (panda$core$Int64) {8};
org$pandalanguage$pandac$IR$Value* $tmp3724 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp3725 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp3726 = *(&local25);
org$pandalanguage$pandac$Type* $tmp3727 = *(&local13);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp3724, $tmp3725, $tmp3726, $tmp3727);
panda$collections$Array* $tmp3728 = *(&local15);
org$pandalanguage$pandac$FixedArray* $tmp3729 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp3728);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT($tmp3722, $tmp3723, param1, $tmp3724, $tmp3729);
$fn3731 $tmp3730 = ($fn3731) $tmp3721->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp3732 = $tmp3730($tmp3721, $tmp3722);
*(&local23) = $tmp3732;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3729));
// unreffing REF($1472:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3724));
// unreffing REF($1465:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3722));
// unreffing REF($1463:org.pandalanguage.pandac.IR.Statement)
goto block122;
block126:;
// line 1
// line 843
org$pandalanguage$pandac$IR* $tmp3733 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp3734 = (org$pandalanguage$pandac$IR$Statement*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp3735 = (panda$core$Int64) {25};
org$pandalanguage$pandac$MethodRef* $tmp3736 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3737 = &$tmp3736->value;
org$pandalanguage$pandac$MethodDecl* $tmp3738 = *$tmp3737;
panda$collections$Array* $tmp3739 = *(&local15);
org$pandalanguage$pandac$FixedArray* $tmp3740 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp3739);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$IR$Value$GT($tmp3734, $tmp3735, param1, $tmp3738, $tmp3740);
$fn3742 $tmp3741 = ($fn3742) $tmp3733->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp3743 = $tmp3741($tmp3733, $tmp3734);
*(&local23) = $tmp3743;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3740));
// unreffing REF($1498:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3734));
// unreffing REF($1491:org.pandalanguage.pandac.IR.Statement)
goto block122;
block122:;
// line 846
org$pandalanguage$pandac$MethodRef* $tmp3744 = *(&local1);
org$pandalanguage$pandac$Type* $tmp3745 = org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type($tmp3744);
org$pandalanguage$pandac$Type* $tmp3746 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp3747 = ((panda$core$Equatable*) $tmp3745)->$class->itable;
while ($tmp3747->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3747 = $tmp3747->next;
}
$fn3749 $tmp3748 = $tmp3747->methods[1];
panda$core$Bit $tmp3750 = $tmp3748(((panda$core$Equatable*) $tmp3745), ((panda$core$Equatable*) $tmp3746));
bool $tmp3751 = $tmp3750.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3746));
// unreffing REF($1516:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3745));
// unreffing REF($1513:org.pandalanguage.pandac.Type)
if ($tmp3751) goto block136; else goto block137;
block136:;
// line 847
org$pandalanguage$pandac$IR$Value* $tmp3752 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp3753 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR$Statement$ID $tmp3754 = *(&local23);
org$pandalanguage$pandac$Type* $tmp3755 = *(&local13);
org$pandalanguage$pandac$Type* $tmp3756 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp3755);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp3752, $tmp3753, $tmp3754, $tmp3756);
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3752));
org$pandalanguage$pandac$IR$Value* $tmp3757 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3757));
*(&local26) = $tmp3752;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3756));
// unreffing REF($1533:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3752));
// unreffing REF($1529:org.pandalanguage.pandac.IR.Value)
// line 848
org$pandalanguage$pandac$Type* $tmp3758 = *(&local13);
org$pandalanguage$pandac$Type* $tmp3759 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp3758);
panda$core$Bit $tmp3760 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp3759);
bool $tmp3761 = $tmp3760.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3759));
// unreffing REF($1551:org.pandalanguage.pandac.Type)
if ($tmp3761) goto block138; else goto block139;
block138:;
// line 849
panda$collections$Stack** $tmp3762 = &param0->enclosingContexts;
panda$collections$Stack* $tmp3763 = *$tmp3762;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp3764 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp3765 = (panda$core$Int64) {3};
org$pandalanguage$pandac$IR$Value* $tmp3766 = *(&local26);
panda$core$Bit $tmp3767 = panda$core$Bit$init$builtin_bit($tmp3766 != NULL);
bool $tmp3768 = $tmp3767.value;
if ($tmp3768) goto block140; else goto block141;
block141:;
panda$core$Int64 $tmp3769 = (panda$core$Int64) {849};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3770, $tmp3769, &$s3771);
abort(); // unreachable
block140:;
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$IR$Value($tmp3764, $tmp3765, $tmp3766);
panda$collections$Stack$push$panda$collections$Stack$T($tmp3763, ((panda$core$Object*) $tmp3764));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3764));
// unreffing REF($1562:org.pandalanguage.pandac.Compiler.EnclosingContext)
goto block139;
block139:;
// line 851
org$pandalanguage$pandac$MethodRef* $tmp3772 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3773 = &$tmp3772->value;
org$pandalanguage$pandac$MethodDecl* $tmp3774 = *$tmp3773;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp3775 = &$tmp3774->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp3776 = *$tmp3775;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3777;
$tmp3777 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3777->value = $tmp3776;
panda$core$Int64 $tmp3778 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp3779 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp3778);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3780;
$tmp3780 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3780->value = $tmp3779;
ITable* $tmp3781 = ((panda$core$Equatable*) $tmp3777)->$class->itable;
while ($tmp3781->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3781 = $tmp3781->next;
}
$fn3783 $tmp3782 = $tmp3781->methods[1];
panda$core$Bit $tmp3784 = $tmp3782(((panda$core$Equatable*) $tmp3777), ((panda$core$Equatable*) $tmp3780));
bool $tmp3785 = $tmp3784.value;
if ($tmp3785) goto block144; else goto block145;
block144:;
org$pandalanguage$pandac$Type* $tmp3786 = *(&local14);
org$pandalanguage$pandac$Type* $tmp3787 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp3786);
org$pandalanguage$pandac$Type* $tmp3788 = *(&local13);
org$pandalanguage$pandac$Type* $tmp3789 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp3788);
ITable* $tmp3790 = ((panda$core$Equatable*) $tmp3787)->$class->itable;
while ($tmp3790->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3790 = $tmp3790->next;
}
$fn3792 $tmp3791 = $tmp3790->methods[1];
panda$core$Bit $tmp3793 = $tmp3791(((panda$core$Equatable*) $tmp3787), ((panda$core$Equatable*) $tmp3789));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3789));
// unreffing REF($1600:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3787));
// unreffing REF($1596:org.pandalanguage.pandac.Type)
*(&local27) = $tmp3793;
goto block146;
block145:;
*(&local27) = $tmp3784;
goto block146;
block146:;
panda$core$Bit $tmp3794 = *(&local27);
bool $tmp3795 = $tmp3794.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3780)));
// unreffing REF($1590:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3777)));
// unreffing REF($1586:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp3795) goto block142; else goto block143;
block142:;
// line 853
org$pandalanguage$pandac$IR$Value* $tmp3796 = *(&local26);
org$pandalanguage$pandac$Type* $tmp3797 = *(&local14);
org$pandalanguage$pandac$Type* $tmp3798 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp3797);
org$pandalanguage$pandac$IR$Value* $tmp3799 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3796, $tmp3798);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3799));
org$pandalanguage$pandac$IR$Value* $tmp3800 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3800));
*(&local26) = $tmp3799;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3799));
// unreffing REF($1627:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3798));
// unreffing REF($1626:org.pandalanguage.pandac.Type)
// line 854
org$pandalanguage$pandac$IR$Value* $tmp3801 = *(&local26);
panda$core$Bit $tmp3802 = panda$core$Bit$init$builtin_bit($tmp3801 == NULL);
bool $tmp3803 = $tmp3802.value;
if ($tmp3803) goto block147; else goto block148;
block147:;
// line 855
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp3804 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3804));
// unreffing resultCast
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp3805 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3805));
// unreffing finalTarget
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp3806 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3806));
// unreffing finalArgs
*(&local15) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp3807 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3807));
// unreffing effectiveType
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3808 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3808));
// unreffing actualType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3809 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3809));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp3810 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3810));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3811 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3811));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3812 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3812));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block148:;
goto block143;
block143:;
// line 858
org$pandalanguage$pandac$IR$Value* $tmp3813 = *(&local26);
org$pandalanguage$pandac$IR$Value* $tmp3814 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3813, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3814));
org$pandalanguage$pandac$IR$Value* $tmp3815 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3815));
*(&local26) = $tmp3814;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3814));
// unreffing REF($1698:org.pandalanguage.pandac.IR.Value?)
// line 859
org$pandalanguage$pandac$IR$Value* $tmp3816 = *(&local26);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3816));
org$pandalanguage$pandac$IR$Value* $tmp3817 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3817));
// unreffing resultCast
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp3818 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3818));
// unreffing finalTarget
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp3819 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3819));
// unreffing finalArgs
*(&local15) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp3820 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3820));
// unreffing effectiveType
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3821 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3821));
// unreffing actualType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3822 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3822));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp3823 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3823));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3824 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3824));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3825 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3825));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return $tmp3816;
block137:;
// line 861
org$pandalanguage$pandac$Compiler$TypeContext* $tmp3826 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp3827 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp3826, $tmp3827);
ITable* $tmp3828 = ((panda$core$Equatable*) param5)->$class->itable;
while ($tmp3828->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3828 = $tmp3828->next;
}
$fn3830 $tmp3829 = $tmp3828->methods[1];
panda$core$Bit $tmp3831 = $tmp3829(((panda$core$Equatable*) param5), ((panda$core$Equatable*) $tmp3826));
bool $tmp3832 = $tmp3831.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3826));
// unreffing REF($1761:org.pandalanguage.pandac.Compiler.TypeContext)
if ($tmp3832) goto block149; else goto block150;
block149:;
// line 862
org$pandalanguage$pandac$MethodRef* $tmp3833 = *(&local1);
org$pandalanguage$pandac$MethodDecl** $tmp3834 = &$tmp3833->value;
org$pandalanguage$pandac$MethodDecl* $tmp3835 = *$tmp3834;
panda$core$String* $tmp3836 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp3835);
panda$core$String* $tmp3837 = panda$core$String$convert$R$panda$core$String($tmp3836);
panda$core$String* $tmp3838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3837, &$s3839);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp3838);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3838));
// unreffing REF($1778:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3837));
// unreffing REF($1777:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3836));
// unreffing REF($1776:panda.core.String)
goto block150;
block150:;
// line 864
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp3840 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3840));
// unreffing finalTarget
*(&local16) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$Array* $tmp3841 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3841));
// unreffing finalArgs
*(&local15) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp3842 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3842));
// unreffing effectiveType
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp3843 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3843));
// unreffing actualType
*(&local13) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3844 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3844));
// unreffing inferred
*(&local11) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$Pair* $tmp3845 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3845));
// unreffing intrinsic
*(&local10) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$MethodRef* $tmp3846 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3846));
// unreffing m
*(&local1) = ((org$pandalanguage$pandac$MethodRef*) NULL);
org$pandalanguage$pandac$IR* $tmp3847 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3847));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);

}
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$IR$Value* param2, panda$core$String* param3, panda$collections$ListView* param4, org$pandalanguage$pandac$Compiler$TypeContext* param5) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
org$pandalanguage$pandac$Symbol* local1 = NULL;
org$pandalanguage$pandac$IR$Value* local2 = NULL;
// line 870
$fn3849 $tmp3848 = ($fn3849) param2->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp3850 = $tmp3848(param2);
org$pandalanguage$pandac$ClassDecl* $tmp3851 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp3850);
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3851));
org$pandalanguage$pandac$ClassDecl* $tmp3852 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3852));
*(&local0) = $tmp3851;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3851));
// unreffing REF($3:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3850));
// unreffing REF($2:org.pandalanguage.pandac.Type)
// line 871
org$pandalanguage$pandac$ClassDecl* $tmp3853 = *(&local0);
panda$core$Bit $tmp3854 = panda$core$Bit$init$builtin_bit($tmp3853 == NULL);
bool $tmp3855 = $tmp3854.value;
if ($tmp3855) goto block1; else goto block2;
block1:;
// line 872
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp3856 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3856));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block2:;
// line 874
org$pandalanguage$pandac$ClassDecl* $tmp3857 = *(&local0);
panda$core$Bit $tmp3858 = panda$core$Bit$init$builtin_bit($tmp3857 != NULL);
bool $tmp3859 = $tmp3858.value;
if ($tmp3859) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp3860 = (panda$core$Int64) {874};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3861, $tmp3860, &$s3862);
abort(); // unreachable
block3:;
org$pandalanguage$pandac$SymbolTable* $tmp3863 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(param0, $tmp3857);
org$pandalanguage$pandac$Symbol* $tmp3864 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3863, param3);
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3864));
org$pandalanguage$pandac$Symbol* $tmp3865 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3865));
*(&local1) = $tmp3864;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3864));
// unreffing REF($43:org.pandalanguage.pandac.Symbol?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3863));
// unreffing REF($42:org.pandalanguage.pandac.SymbolTable)
// line 875
org$pandalanguage$pandac$Symbol* $tmp3866 = *(&local1);
panda$core$Bit $tmp3867 = panda$core$Bit$init$builtin_bit($tmp3866 == NULL);
bool $tmp3868 = $tmp3867.value;
if ($tmp3868) goto block5; else goto block6;
block5:;
// line 876
org$pandalanguage$pandac$ClassDecl* $tmp3869 = *(&local0);
panda$core$Bit $tmp3870 = panda$core$Bit$init$builtin_bit($tmp3869 != NULL);
bool $tmp3871 = $tmp3870.value;
if ($tmp3871) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp3872 = (panda$core$Int64) {876};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3873, $tmp3872, &$s3874);
abort(); // unreachable
block7:;
panda$core$String** $tmp3875 = &$tmp3869->name;
panda$core$String* $tmp3876 = *$tmp3875;
panda$core$String* $tmp3877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3878, $tmp3876);
panda$core$String* $tmp3879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3877, &$s3880);
panda$core$String* $tmp3881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3879, param3);
panda$core$String* $tmp3882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3881, &$s3883);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp3882);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3882));
// unreffing REF($78:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3881));
// unreffing REF($77:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3879));
// unreffing REF($76:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3877));
// unreffing REF($75:panda.core.String)
// line 877
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp3884 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3884));
// unreffing s
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3885 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3885));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block6:;
// line 879
org$pandalanguage$pandac$Symbol* $tmp3886 = *(&local1);
panda$core$Bit $tmp3887 = panda$core$Bit$init$builtin_bit($tmp3886 != NULL);
bool $tmp3888 = $tmp3887.value;
if ($tmp3888) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp3889 = (panda$core$Int64) {879};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3890, $tmp3889, &$s3891);
abort(); // unreachable
block9:;
org$pandalanguage$pandac$IR$Value* $tmp3892 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Symbol$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param2, $tmp3886);
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3892));
org$pandalanguage$pandac$IR$Value* $tmp3893 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3893));
*(&local2) = $tmp3892;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3892));
// unreffing REF($117:org.pandalanguage.pandac.IR.Value?)
// line 880
org$pandalanguage$pandac$IR$Value* $tmp3894 = *(&local2);
panda$core$Bit $tmp3895 = panda$core$Bit$init$builtin_bit($tmp3894 != NULL);
bool $tmp3896 = $tmp3895.value;
if ($tmp3896) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp3897 = (panda$core$Int64) {880};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3898, $tmp3897, &$s3899);
abort(); // unreachable
block11:;
org$pandalanguage$pandac$IR$Value* $tmp3900 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3894, param4, param5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3900));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3900));
// unreffing REF($138:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR$Value* $tmp3901 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3901));
// unreffing ref
*(&local2) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Symbol* $tmp3902 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3902));
// unreffing s
*(&local1) = ((org$pandalanguage$pandac$Symbol*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp3903 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3903));
// unreffing cl
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
return $tmp3900;

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
panda$core$Int64* $tmp3904 = &param2->$rawValue;
panda$core$Int64 $tmp3905 = *$tmp3904;
panda$core$Int64 $tmp3906 = (panda$core$Int64) {21};
panda$core$Bit $tmp3907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3905, $tmp3906);
bool $tmp3908 = $tmp3907.value;
if ($tmp3908) goto block2; else goto block1;
block2:;
org$pandalanguage$pandac$Position* $tmp3909 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp3910 = *$tmp3909;
panda$core$String** $tmp3911 = (panda$core$String**) (param2->$data + 16);
panda$core$String* $tmp3912 = *$tmp3911;
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3912));
panda$core$String* $tmp3913 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3913));
*(&local0) = $tmp3912;
org$pandalanguage$pandac$FixedArray** $tmp3914 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp3915 = *$tmp3914;
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3915));
org$pandalanguage$pandac$FixedArray* $tmp3916 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3916));
*(&local1) = $tmp3915;
// line 888
org$pandalanguage$pandac$Type* $tmp3917 = org$pandalanguage$pandac$Compiler$tryResolveType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, param2);
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3917));
org$pandalanguage$pandac$Type* $tmp3918 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3918));
*(&local2) = $tmp3917;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3917));
// unreffing REF($28:org.pandalanguage.pandac.Type?)
// line 889
org$pandalanguage$pandac$Type* $tmp3919 = *(&local2);
panda$core$Bit $tmp3920 = panda$core$Bit$init$builtin_bit($tmp3919 != NULL);
bool $tmp3921 = $tmp3920.value;
if ($tmp3921) goto block3; else goto block4;
block3:;
// line 890
org$pandalanguage$pandac$Type* $tmp3922 = *(&local2);
panda$core$Bit $tmp3923 = panda$core$Bit$init$builtin_bit($tmp3922 != NULL);
bool $tmp3924 = $tmp3923.value;
if ($tmp3924) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp3925 = (panda$core$Int64) {890};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3926, $tmp3925, &$s3927);
abort(); // unreachable
block5:;
panda$core$Bit $tmp3928 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit($tmp3922);
panda$core$Bit $tmp3929 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3928);
bool $tmp3930 = $tmp3929.value;
if ($tmp3930) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp3931 = (panda$core$Int64) {890};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3932, $tmp3931);
abort(); // unreachable
block7:;
// line 891
org$pandalanguage$pandac$IR$Value* $tmp3933 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp3934 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type* $tmp3935 = *(&local2);
panda$core$Bit $tmp3936 = panda$core$Bit$init$builtin_bit($tmp3935 != NULL);
bool $tmp3937 = $tmp3936.value;
if ($tmp3937) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp3938 = (panda$core$Int64) {891};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3939, $tmp3938, &$s3940);
abort(); // unreachable
block9:;
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3933, $tmp3934, $tmp3935);
org$pandalanguage$pandac$IR$Value* $tmp3941 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp3933, ((panda$collections$ListView*) param3), param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3941));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3941));
// unreffing REF($76:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3933));
// unreffing REF($63:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$Type* $tmp3942 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3942));
// unreffing resolved
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3943 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3943));
// unreffing types
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp3944 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3944));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp3941;
block4:;
// line 893
panda$core$Bit $tmp3945 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp3946 = org$pandalanguage$pandac$Compiler$tryResolveType$org$pandalanguage$pandac$ASTNode$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(param0, param2, $tmp3945);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3946));
org$pandalanguage$pandac$Type* $tmp3947 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3947));
*(&local2) = $tmp3946;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3946));
// unreffing REF($103:org.pandalanguage.pandac.Type?)
// line 894
org$pandalanguage$pandac$Type* $tmp3948 = *(&local2);
panda$core$Bit $tmp3949 = panda$core$Bit$init$builtin_bit($tmp3948 != NULL);
bool $tmp3950 = $tmp3949.value;
if ($tmp3950) goto block11; else goto block12;
block11:;
// line 896
org$pandalanguage$pandac$Scanner** $tmp3951 = &param0->scanner;
org$pandalanguage$pandac$Scanner* $tmp3952 = *$tmp3951;
org$pandalanguage$pandac$Type* $tmp3953 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp3952, param2);
org$pandalanguage$pandac$Type* $tmp3954 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, $tmp3953);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3954));
// unreffing REF($123:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3953));
// unreffing REF($122:org.pandalanguage.pandac.Type)
// line 897
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Type* $tmp3955 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3955));
// unreffing resolved
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3956 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3956));
// unreffing types
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp3957 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3957));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block12:;
// line 900
panda$core$String* $tmp3958 = *(&local0);
panda$collections$Array* $tmp3959 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT($tmp3958, &$s3960);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3959));
panda$collections$Array* $tmp3961 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3961));
*(&local3) = $tmp3959;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3959));
// unreffing REF($151:panda.collections.Array<panda.core.String>)
// line 901
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 902
panda$collections$Array* $tmp3962 = *(&local3);
ITable* $tmp3963 = ((panda$collections$CollectionView*) $tmp3962)->$class->itable;
while ($tmp3963->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3963 = $tmp3963->next;
}
$fn3965 $tmp3964 = $tmp3963->methods[0];
panda$core$Int64 $tmp3966 = $tmp3964(((panda$collections$CollectionView*) $tmp3962));
panda$core$Int64 $tmp3967 = (panda$core$Int64) {1};
panda$core$Bit $tmp3968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3966, $tmp3967);
bool $tmp3969 = $tmp3968.value;
if ($tmp3969) goto block13; else goto block15;
block13:;
// line 903
org$pandalanguage$pandac$ASTNode* $tmp3970 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3971 = (panda$core$Int64) {23};
panda$core$String* $tmp3972 = *(&local0);
org$pandalanguage$pandac$FixedArray* $tmp3973 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3970, $tmp3971, param1, $tmp3972, $tmp3973);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3970));
org$pandalanguage$pandac$ASTNode* $tmp3974 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3974));
*(&local4) = $tmp3970;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3970));
// unreffing REF($174:org.pandalanguage.pandac.ASTNode)
goto block14;
block15:;
// line 1
// line 906
org$pandalanguage$pandac$ASTNode* $tmp3975 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3976 = (panda$core$Int64) {22};
panda$collections$Array* $tmp3977 = *(&local3);
panda$core$Int64 $tmp3978 = (panda$core$Int64) {0};
panda$core$Object* $tmp3979 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3977, $tmp3978);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3975, $tmp3976, param1, ((panda$core$String*) $tmp3979));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3975));
org$pandalanguage$pandac$ASTNode* $tmp3980 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3980));
*(&local4) = $tmp3975;
panda$core$Panda$unref$panda$core$Object$Q($tmp3979);
// unreffing REF($196:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3975));
// unreffing REF($191:org.pandalanguage.pandac.ASTNode)
// line 907
panda$core$Int64 $tmp3981 = (panda$core$Int64) {1};
panda$collections$Array* $tmp3982 = *(&local3);
ITable* $tmp3983 = ((panda$collections$CollectionView*) $tmp3982)->$class->itable;
while ($tmp3983->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3983 = $tmp3983->next;
}
$fn3985 $tmp3984 = $tmp3983->methods[0];
panda$core$Int64 $tmp3986 = $tmp3984(((panda$collections$CollectionView*) $tmp3982));
panda$core$Int64 $tmp3987 = (panda$core$Int64) {1};
int64_t $tmp3988 = $tmp3986.value;
int64_t $tmp3989 = $tmp3987.value;
int64_t $tmp3990 = $tmp3988 - $tmp3989;
panda$core$Int64 $tmp3991 = (panda$core$Int64) {$tmp3990};
panda$core$Bit $tmp3992 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp3993 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3981, $tmp3991, $tmp3992);
panda$core$Int64 $tmp3994 = $tmp3993.min;
*(&local5) = $tmp3994;
panda$core$Int64 $tmp3995 = $tmp3993.max;
panda$core$Bit $tmp3996 = $tmp3993.inclusive;
bool $tmp3997 = $tmp3996.value;
panda$core$Int64 $tmp3998 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp3999 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3998);
if ($tmp3997) goto block19; else goto block20;
block19:;
int64_t $tmp4000 = $tmp3994.value;
int64_t $tmp4001 = $tmp3995.value;
bool $tmp4002 = $tmp4000 <= $tmp4001;
panda$core$Bit $tmp4003 = (panda$core$Bit) {$tmp4002};
bool $tmp4004 = $tmp4003.value;
if ($tmp4004) goto block16; else goto block17;
block20:;
int64_t $tmp4005 = $tmp3994.value;
int64_t $tmp4006 = $tmp3995.value;
bool $tmp4007 = $tmp4005 < $tmp4006;
panda$core$Bit $tmp4008 = (panda$core$Bit) {$tmp4007};
bool $tmp4009 = $tmp4008.value;
if ($tmp4009) goto block16; else goto block17;
block16:;
// line 908
org$pandalanguage$pandac$ASTNode* $tmp4010 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4011 = (panda$core$Int64) {16};
org$pandalanguage$pandac$ASTNode* $tmp4012 = *(&local4);
panda$collections$Array* $tmp4013 = *(&local3);
panda$core$Int64 $tmp4014 = *(&local5);
panda$core$Object* $tmp4015 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4013, $tmp4014);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp4010, $tmp4011, param1, $tmp4012, ((panda$core$String*) $tmp4015));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4010));
org$pandalanguage$pandac$ASTNode* $tmp4016 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4016));
*(&local4) = $tmp4010;
panda$core$Panda$unref$panda$core$Object$Q($tmp4015);
// unreffing REF($251:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4010));
// unreffing REF($245:org.pandalanguage.pandac.ASTNode)
goto block18;
block18:;
panda$core$Int64 $tmp4017 = *(&local5);
int64_t $tmp4018 = $tmp3995.value;
int64_t $tmp4019 = $tmp4017.value;
int64_t $tmp4020 = $tmp4018 - $tmp4019;
panda$core$Int64 $tmp4021 = (panda$core$Int64) {$tmp4020};
panda$core$UInt64 $tmp4022 = panda$core$Int64$convert$R$panda$core$UInt64($tmp4021);
if ($tmp3997) goto block22; else goto block23;
block22:;
uint64_t $tmp4023 = $tmp4022.value;
uint64_t $tmp4024 = $tmp3999.value;
bool $tmp4025 = $tmp4023 >= $tmp4024;
panda$core$Bit $tmp4026 = (panda$core$Bit) {$tmp4025};
bool $tmp4027 = $tmp4026.value;
if ($tmp4027) goto block21; else goto block17;
block23:;
uint64_t $tmp4028 = $tmp4022.value;
uint64_t $tmp4029 = $tmp3999.value;
bool $tmp4030 = $tmp4028 > $tmp4029;
panda$core$Bit $tmp4031 = (panda$core$Bit) {$tmp4030};
bool $tmp4032 = $tmp4031.value;
if ($tmp4032) goto block21; else goto block17;
block21:;
int64_t $tmp4033 = $tmp4017.value;
int64_t $tmp4034 = $tmp3998.value;
int64_t $tmp4035 = $tmp4033 + $tmp4034;
panda$core$Int64 $tmp4036 = (panda$core$Int64) {$tmp4035};
*(&local5) = $tmp4036;
goto block16;
block17:;
// line 910
org$pandalanguage$pandac$ASTNode* $tmp4037 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4038 = (panda$core$Int64) {17};
org$pandalanguage$pandac$ASTNode* $tmp4039 = *(&local4);
panda$collections$Array* $tmp4040 = *(&local3);
panda$collections$Array* $tmp4041 = *(&local3);
ITable* $tmp4042 = ((panda$collections$CollectionView*) $tmp4041)->$class->itable;
while ($tmp4042->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp4042 = $tmp4042->next;
}
$fn4044 $tmp4043 = $tmp4042->methods[0];
panda$core$Int64 $tmp4045 = $tmp4043(((panda$collections$CollectionView*) $tmp4041));
panda$core$Int64 $tmp4046 = (panda$core$Int64) {1};
int64_t $tmp4047 = $tmp4045.value;
int64_t $tmp4048 = $tmp4046.value;
int64_t $tmp4049 = $tmp4047 - $tmp4048;
panda$core$Int64 $tmp4050 = (panda$core$Int64) {$tmp4049};
panda$core$Object* $tmp4051 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4040, $tmp4050);
org$pandalanguage$pandac$FixedArray* $tmp4052 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4037, $tmp4038, param1, $tmp4039, ((panda$core$String*) $tmp4051), $tmp4052);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4037));
org$pandalanguage$pandac$ASTNode* $tmp4053 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4053));
*(&local4) = $tmp4037;
panda$core$Panda$unref$panda$core$Object$Q($tmp4051);
// unreffing REF($307:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4037));
// unreffing REF($293:org.pandalanguage.pandac.ASTNode)
goto block14;
block14:;
// line 913
org$pandalanguage$pandac$ASTNode* $tmp4054 = *(&local4);
org$pandalanguage$pandac$IR$Value* $tmp4055 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp4054, param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4055));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4055));
// unreffing REF($326:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$ASTNode* $tmp4056 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4056));
// unreffing target
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4057 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4057));
// unreffing components
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Type* $tmp4058 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4058));
// unreffing resolved
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4059 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4059));
// unreffing types
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp4060 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4060));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp4055;
block1:;
// line 916
org$pandalanguage$pandac$Pair* $tmp4061 = org$pandalanguage$pandac$Compiler$getChoiceCase$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Type$Corg$pandalanguage$pandac$ChoiceCase$GT$Q(param0, param2);
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4061));
org$pandalanguage$pandac$Pair* $tmp4062 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4062));
*(&local6) = $tmp4061;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4061));
// unreffing REF($359:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Type, org.pandalanguage.pandac.ChoiceCase>?)
// line 917
org$pandalanguage$pandac$Pair* $tmp4063 = *(&local6);
panda$core$Bit $tmp4064 = panda$core$Bit$init$builtin_bit($tmp4063 != NULL);
bool $tmp4065 = $tmp4064.value;
if ($tmp4065) goto block24; else goto block25;
block24:;
// line 918
org$pandalanguage$pandac$Pair* $tmp4066 = *(&local6);
panda$core$Bit $tmp4067 = panda$core$Bit$init$builtin_bit($tmp4066 != NULL);
bool $tmp4068 = $tmp4067.value;
if ($tmp4068) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp4069 = (panda$core$Int64) {918};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4070, $tmp4069, &$s4071);
abort(); // unreachable
block26:;
panda$core$Object** $tmp4072 = &$tmp4066->first;
panda$core$Object* $tmp4073 = *$tmp4072;
org$pandalanguage$pandac$Pair* $tmp4074 = *(&local6);
panda$core$Bit $tmp4075 = panda$core$Bit$init$builtin_bit($tmp4074 != NULL);
bool $tmp4076 = $tmp4075.value;
if ($tmp4076) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp4077 = (panda$core$Int64) {918};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4078, $tmp4077, &$s4079);
abort(); // unreachable
block28:;
panda$core$Object** $tmp4080 = &$tmp4074->second;
panda$core$Object* $tmp4081 = *$tmp4080;
org$pandalanguage$pandac$IR$Value* $tmp4082 = org$pandalanguage$pandac$Compiler$compileChoiceCaseReference$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ChoiceCase$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, ((org$pandalanguage$pandac$Type*) $tmp4073), ((org$pandalanguage$pandac$ChoiceCase*) $tmp4081), param3, param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4082));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4082));
// unreffing REF($401:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Pair* $tmp4083 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4083));
// unreffing cc
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
return $tmp4082;
block25:;
// line 920
panda$core$Int64* $tmp4084 = &param2->$rawValue;
panda$core$Int64 $tmp4085 = *$tmp4084;
panda$core$Int64 $tmp4086 = (panda$core$Int64) {16};
panda$core$Bit $tmp4087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4085, $tmp4086);
bool $tmp4088 = $tmp4087.value;
if ($tmp4088) goto block31; else goto block30;
block31:;
org$pandalanguage$pandac$Position* $tmp4089 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp4090 = *$tmp4089;
*(&local7) = $tmp4090;
org$pandalanguage$pandac$ASTNode** $tmp4091 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp4092 = *$tmp4091;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4092));
org$pandalanguage$pandac$ASTNode* $tmp4093 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4093));
*(&local8) = $tmp4092;
panda$core$String** $tmp4094 = (panda$core$String**) (param2->$data + 24);
panda$core$String* $tmp4095 = *$tmp4094;
*(&local9) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4095));
panda$core$String* $tmp4096 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4096));
*(&local9) = $tmp4095;
// line 922
org$pandalanguage$pandac$ASTNode* $tmp4097 = *(&local8);
panda$core$Int64* $tmp4098 = &$tmp4097->$rawValue;
panda$core$Int64 $tmp4099 = *$tmp4098;
panda$core$Int64 $tmp4100 = (panda$core$Int64) {42};
panda$core$Bit $tmp4101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4099, $tmp4100);
bool $tmp4102 = $tmp4101.value;
if ($tmp4102) goto block33; else goto block32;
block33:;
// line 924
org$pandalanguage$pandac$SymbolTable** $tmp4103 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp4104 = *$tmp4103;
org$pandalanguage$pandac$Symbol* $tmp4105 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp4104, &$s4106);
*(&local10) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4105));
org$pandalanguage$pandac$Symbol* $tmp4107 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4107));
*(&local10) = $tmp4105;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4105));
// unreffing REF($452:org.pandalanguage.pandac.Symbol?)
// line 925
org$pandalanguage$pandac$Symbol* $tmp4108 = *(&local10);
panda$core$Bit $tmp4109 = panda$core$Bit$init$builtin_bit($tmp4108 == NULL);
bool $tmp4110 = $tmp4109.value;
if ($tmp4110) goto block34; else goto block35;
block34:;
// line 926
org$pandalanguage$pandac$SymbolTable** $tmp4111 = &param0->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp4112 = *$tmp4111;
org$pandalanguage$pandac$Symbol* $tmp4113 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp4112, &$s4114);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4113));
org$pandalanguage$pandac$Symbol* $tmp4115 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4115));
*(&local10) = $tmp4113;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4113));
// unreffing REF($472:org.pandalanguage.pandac.Symbol?)
goto block35;
block35:;
// line 928
org$pandalanguage$pandac$Symbol* $tmp4116 = *(&local10);
panda$core$Bit $tmp4117 = panda$core$Bit$init$builtin_bit($tmp4116 == NULL);
bool $tmp4118 = $tmp4117.value;
if ($tmp4118) goto block36; else goto block37;
block36:;
// line 929
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$Symbol* $tmp4119 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4119));
// unreffing s
*(&local10) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp4120 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4120));
// unreffing name
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4121 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4121));
// unreffing base
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Pair* $tmp4122 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4122));
// unreffing cc
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block37:;
// line 931
panda$collections$Array* $tmp4123 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4123);
*(&local11) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4123));
panda$collections$Array* $tmp4124 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4124));
*(&local11) = $tmp4123;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4123));
// unreffing REF($514:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 932
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
// line 933
org$pandalanguage$pandac$Symbol* $tmp4125 = *(&local10);
panda$core$Bit $tmp4126 = panda$core$Bit$init$builtin_bit($tmp4125 != NULL);
bool $tmp4127 = $tmp4126.value;
if ($tmp4127) goto block38; else goto block39;
block39:;
panda$core$Int64 $tmp4128 = (panda$core$Int64) {933};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4129, $tmp4128, &$s4130);
abort(); // unreachable
block38:;
org$pandalanguage$pandac$Symbol$Kind* $tmp4131 = &$tmp4125->kind;
org$pandalanguage$pandac$Symbol$Kind $tmp4132 = *$tmp4131;
panda$core$Int64 $tmp4133 = $tmp4132.$rawValue;
panda$core$Int64 $tmp4134 = (panda$core$Int64) {9};
panda$core$Bit $tmp4135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4133, $tmp4134);
bool $tmp4136 = $tmp4135.value;
if ($tmp4136) goto block41; else goto block42;
block41:;
// line 935
org$pandalanguage$pandac$Symbol* $tmp4137 = *(&local10);
org$pandalanguage$pandac$Type** $tmp4138 = &((org$pandalanguage$pandac$Variable*) $tmp4137)->type;
org$pandalanguage$pandac$Type* $tmp4139 = *$tmp4138;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4139));
org$pandalanguage$pandac$Type* $tmp4140 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4140));
*(&local12) = $tmp4139;
goto block40;
block42:;
panda$core$Int64 $tmp4141 = (panda$core$Int64) {2};
panda$core$Bit $tmp4142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4133, $tmp4141);
bool $tmp4143 = $tmp4142.value;
if ($tmp4143) goto block43; else goto block44;
block43:;
// line 938
org$pandalanguage$pandac$Symbol* $tmp4144 = *(&local10);
org$pandalanguage$pandac$Type** $tmp4145 = &((org$pandalanguage$pandac$FieldDecl*) $tmp4144)->type;
org$pandalanguage$pandac$Type* $tmp4146 = *$tmp4145;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4146));
org$pandalanguage$pandac$Type* $tmp4147 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4147));
*(&local12) = $tmp4146;
goto block40;
block44:;
// line 941
panda$core$Bit $tmp4148 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4149 = $tmp4148.value;
if ($tmp4149) goto block45; else goto block46;
block46:;
panda$core$Int64 $tmp4150 = (panda$core$Int64) {941};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4151, $tmp4150);
abort(); // unreachable
block45:;
goto block40;
block40:;
// line 944
org$pandalanguage$pandac$Type* $tmp4152 = *(&local12);
org$pandalanguage$pandac$ClassDecl* $tmp4153 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp4152);
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4153));
org$pandalanguage$pandac$ClassDecl* $tmp4154 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4154));
*(&local13) = $tmp4153;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4153));
// unreffing REF($584:org.pandalanguage.pandac.ClassDecl?)
// line 945
org$pandalanguage$pandac$ClassDecl* $tmp4155 = *(&local13);
panda$core$Bit $tmp4156 = panda$core$Bit$init$builtin_bit($tmp4155 == NULL);
bool $tmp4157 = $tmp4156.value;
if ($tmp4157) goto block47; else goto block48;
block47:;
// line 946
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp4158 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4158));
// unreffing cl
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp4159 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4159));
// unreffing selfType
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp4160 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4160));
// unreffing result
*(&local11) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Symbol* $tmp4161 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4161));
// unreffing s
*(&local10) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp4162 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4162));
// unreffing name
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4163 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4163));
// unreffing base
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Pair* $tmp4164 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4164));
// unreffing cc
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block48:;
// line 948
org$pandalanguage$pandac$Type* $tmp4165 = *(&local12);
org$pandalanguage$pandac$ClassDecl* $tmp4166 = *(&local13);
panda$core$Bit $tmp4167 = panda$core$Bit$init$builtin_bit($tmp4166 != NULL);
bool $tmp4168 = $tmp4167.value;
if ($tmp4168) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp4169 = (panda$core$Int64) {948};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4170, $tmp4169, &$s4171);
abort(); // unreachable
block49:;
org$pandalanguage$pandac$Type** $tmp4172 = &$tmp4166->rawSuper;
org$pandalanguage$pandac$Type* $tmp4173 = *$tmp4172;
panda$core$Bit $tmp4174 = panda$core$Bit$init$builtin_bit($tmp4173 != NULL);
bool $tmp4175 = $tmp4174.value;
if ($tmp4175) goto block51; else goto block52;
block52:;
panda$core$Int64 $tmp4176 = (panda$core$Int64) {948};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4177, $tmp4176, &$s4178);
abort(); // unreachable
block51:;
org$pandalanguage$pandac$Type* $tmp4179 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param0, $tmp4165, $tmp4173);
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4179));
org$pandalanguage$pandac$Type* $tmp4180 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4180));
*(&local14) = $tmp4179;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4179));
// unreffing REF($661:org.pandalanguage.pandac.Type)
// line 949
org$pandalanguage$pandac$Position $tmp4181 = *(&local7);
org$pandalanguage$pandac$IR$Value* $tmp4182 = (org$pandalanguage$pandac$IR$Value*) frostObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp4183 = (panda$core$Int64) {13};
org$pandalanguage$pandac$Type* $tmp4184 = *(&local14);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp4182, $tmp4183, $tmp4184);
panda$core$String* $tmp4185 = *(&local9);
org$pandalanguage$pandac$IR$Value* $tmp4186 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp4181, $tmp4182, $tmp4185, ((panda$collections$ListView*) param3), param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4186));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4186));
// unreffing REF($680:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4182));
// unreffing REF($674:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$Type* $tmp4187 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4187));
// unreffing supertype
*(&local14) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp4188 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4188));
// unreffing cl
*(&local13) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp4189 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4189));
// unreffing selfType
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp4190 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4190));
// unreffing result
*(&local11) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Symbol* $tmp4191 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4191));
// unreffing s
*(&local10) = ((org$pandalanguage$pandac$Symbol*) NULL);
panda$core$String* $tmp4192 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4192));
// unreffing name
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4193 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4193));
// unreffing base
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Pair* $tmp4194 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4194));
// unreffing cc
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
return $tmp4186;
block32:;
panda$core$String* $tmp4195 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4195));
// unreffing name
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4196 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4196));
// unreffing base
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block30;
block30:;
// line 955
org$pandalanguage$pandac$Compiler$TypeContext* $tmp4197 = (org$pandalanguage$pandac$Compiler$TypeContext*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp4198 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp4197, $tmp4198);
org$pandalanguage$pandac$IR$Value* $tmp4199 = org$pandalanguage$pandac$Compiler$compileMethodExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param2, $tmp4197);
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4199));
org$pandalanguage$pandac$IR$Value* $tmp4200 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4200));
*(&local15) = $tmp4199;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4199));
// unreffing REF($745:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4197));
// unreffing REF($742:org.pandalanguage.pandac.Compiler.TypeContext)
// line 956
org$pandalanguage$pandac$IR$Value* $tmp4201 = *(&local15);
panda$core$Bit $tmp4202 = panda$core$Bit$init$builtin_bit($tmp4201 == NULL);
bool $tmp4203 = $tmp4202.value;
if ($tmp4203) goto block53; else goto block54;
block53:;
// line 957
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$IR$Value*) NULL)));
org$pandalanguage$pandac$IR$Value* $tmp4204 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4204));
// unreffing compiledM
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Pair* $tmp4205 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4205));
// unreffing cc
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
return ((org$pandalanguage$pandac$IR$Value*) NULL);
block54:;
// line 959
org$pandalanguage$pandac$IR$Value* $tmp4206 = *(&local15);
panda$core$Bit $tmp4207 = panda$core$Bit$init$builtin_bit($tmp4206 != NULL);
bool $tmp4208 = $tmp4207.value;
if ($tmp4208) goto block55; else goto block56;
block56:;
panda$core$Int64 $tmp4209 = (panda$core$Int64) {959};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4210, $tmp4209, &$s4211);
abort(); // unreachable
block55:;
org$pandalanguage$pandac$IR$Value* $tmp4212 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp4206, ((panda$collections$ListView*) param3), param4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4212));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4212));
// unreffing REF($790:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$IR$Value* $tmp4213 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4213));
// unreffing compiledM
*(&local15) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Pair* $tmp4214 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4214));
// unreffing cc
*(&local6) = ((org$pandalanguage$pandac$Pair*) NULL);
return $tmp4212;

}
void org$pandalanguage$pandac$expression$Call$init(org$pandalanguage$pandac$expression$Call* param0) {

return;

}
void org$pandalanguage$pandac$expression$Call$cleanup(org$pandalanguage$pandac$expression$Call* param0) {

// line 20
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

