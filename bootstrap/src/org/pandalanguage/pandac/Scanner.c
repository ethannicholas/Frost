#include "org/pandalanguage/pandac/Scanner.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Weak.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Method.h"
#include "panda/core/MutableMethod.h"
#include "org/pandalanguage/pandac/Annotations/Expression.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "org/pandalanguage/pandac/Alias.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "panda/io/File.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Stack.h"
#include "panda/collections/List.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/HashMap.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Key.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Scanner$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef panda$collections$Iterator* (*$fn101)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn108)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn119)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn131)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn186)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn193)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn204)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn221)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn284)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn291)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn302)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn386)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn387)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn400)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn401)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn414)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn415)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn428)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn429)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn530)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn537)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn548)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn680)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn687)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn698)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn727)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn734)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn745)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn791)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn798)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn809)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn840)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn847)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn858)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn894)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn901)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn912)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn941)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn948)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn959)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn985)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn992)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1003)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1017)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1024)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1035)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1136)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1143)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1154)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1178)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1185)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1196)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1210)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1217)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1228)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1252)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1259)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1270)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1312)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1319)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1330)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1415)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1422)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1433)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1471)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1490)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1497)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1508)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1722)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1729)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1740)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1809)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1816)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1827)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1865)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1887)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1894)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1905)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1955)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1962)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1973)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2012)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2019)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2030)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2134)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2141)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2152)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2183)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2190)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2201)(panda$collections$Iterator*);
typedef void (*$fn2226)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2307)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2314)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2325)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2443)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2450)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2461)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn2619)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 197438526755717134, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, -5891455126768809117, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, -1200106393953033593, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp2;
    panda$core$Weak* $tmp3;
    panda$core$Weak* $tmp4;
    self->compiler = NULL;
    self->bareCodeClass = NULL;
    self->source = NULL;
    {
        $tmp2 = self->compiler;
        panda$core$Weak* $tmp5 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp5, ((panda$core$Object*) p_compiler));
        $tmp4 = $tmp5;
        $tmp3 = $tmp4;
        self->compiler = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    org$pandalanguage$pandac$ASTNode* $match$25_99 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp10;
    panda$core$Int64 $tmp11;
    org$pandalanguage$pandac$IRNode* node13 = NULL;
    org$pandalanguage$pandac$IRNode* $match$27_1718 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp19;
    panda$core$Int64 $tmp20;
    org$pandalanguage$pandac$Type* type22 = NULL;
    org$pandalanguage$pandac$Type* $returnValue24;
    org$pandalanguage$pandac$Type* $tmp25;
    panda$core$Bit $tmp29;
    panda$core$Int64 $tmp34;
    org$pandalanguage$pandac$Position position36;
    panda$core$String* name38 = NULL;
    org$pandalanguage$pandac$Type* $tmp40;
    org$pandalanguage$pandac$Type* $tmp41;
    org$pandalanguage$pandac$Type$Kind $tmp43;
    panda$core$Int64 $tmp44;
    panda$core$Int64 $tmp47;
    org$pandalanguage$pandac$Position position49;
    org$pandalanguage$pandac$ASTNode* base51 = NULL;
    panda$collections$Array* subtypes56 = NULL;
    panda$collections$Array* $tmp57;
    panda$collections$Array* $tmp58;
    org$pandalanguage$pandac$Type* $tmp60;
    org$pandalanguage$pandac$Type* $tmp62;
    org$pandalanguage$pandac$Type* $tmp63;
    panda$core$String* $tmp65;
    panda$core$Object* $tmp66;
    panda$core$Int64 $tmp67;
    org$pandalanguage$pandac$Type$Kind $tmp71;
    panda$core$Int64 $tmp72;
    panda$core$Bit $tmp73;
    panda$core$Int64 $tmp78;
    org$pandalanguage$pandac$Position position80;
    panda$core$String* base82 = NULL;
    panda$collections$ImmutableArray* args84 = NULL;
    panda$collections$Array* finalArgs89 = NULL;
    panda$collections$Array* $tmp90;
    panda$collections$Array* $tmp91;
    panda$collections$Iterator* Iter$41$1796 = NULL;
    panda$collections$Iterator* $tmp97;
    panda$collections$Iterator* $tmp98;
    org$pandalanguage$pandac$ASTNode* arg114 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp115;
    panda$core$Object* $tmp116;
    org$pandalanguage$pandac$Type* $tmp121;
    org$pandalanguage$pandac$Type* $tmp125;
    org$pandalanguage$pandac$Type* $tmp126;
    org$pandalanguage$pandac$Type* $tmp127;
    org$pandalanguage$pandac$Type$Kind $tmp129;
    panda$core$Int64 $tmp130;
    panda$core$Int64 $tmp138;
    org$pandalanguage$pandac$Position position140;
    org$pandalanguage$pandac$parser$Token$Kind kind142;
    panda$collections$ImmutableArray* rawParameters144 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType146 = NULL;
    org$pandalanguage$pandac$Type$Kind typeKind151;
    org$pandalanguage$pandac$parser$Token$Kind $match$47_17152;
    panda$core$Int64 $tmp153;
    org$pandalanguage$pandac$Type$Kind $tmp155;
    panda$core$Int64 $tmp156;
    panda$core$Int64 $tmp157;
    org$pandalanguage$pandac$Type$Kind $tmp159;
    panda$core$Int64 $tmp160;
    panda$core$Int64 $tmp161;
    org$pandalanguage$pandac$Type$Kind $tmp163;
    panda$core$Int64 $tmp164;
    panda$core$Int64 $tmp165;
    org$pandalanguage$pandac$Type$Kind $tmp167;
    panda$core$Int64 $tmp168;
    panda$core$Bit $tmp169;
    panda$collections$Array* parameters174 = NULL;
    panda$collections$Array* $tmp175;
    panda$collections$Array* $tmp176;
    panda$collections$Iterator* Iter$60$17181 = NULL;
    panda$collections$Iterator* $tmp182;
    panda$collections$Iterator* $tmp183;
    org$pandalanguage$pandac$ASTNode* p199 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp200;
    panda$core$Object* $tmp201;
    org$pandalanguage$pandac$Type* $tmp206;
    org$pandalanguage$pandac$Type* returnType210 = NULL;
    org$pandalanguage$pandac$Type* $tmp211;
    org$pandalanguage$pandac$Type* $tmp212;
    org$pandalanguage$pandac$Type* $tmp213;
    org$pandalanguage$pandac$Type* $tmp215;
    org$pandalanguage$pandac$Type* $tmp216;
    org$pandalanguage$pandac$Type* $tmp217;
    org$pandalanguage$pandac$Type* $tmp219;
    org$pandalanguage$pandac$Type* $tmp220;
    panda$collections$ImmutableArray* $tmp223;
    panda$core$Bit $tmp230;
    panda$core$String* $tmp234;
    panda$core$String* $tmp235;
    panda$core$String* $tmp236;
    panda$core$String* $tmp237;
    panda$core$Object* $tmp242;
    int $tmp8;
    {
        $tmp10 = p_type;
        $match$25_99 = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Int64$init$builtin_int64(&$tmp11, 23);
        panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, $tmp11);
        if ($tmp12.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp14 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$25_99->$data + 0));
            node13 = *$tmp14;
            int $tmp17;
            {
                $tmp19 = node13;
                $match$27_1718 = $tmp19;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
                panda$core$Int64$init$builtin_int64(&$tmp20, 38);
                panda$core$Bit $tmp21 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$27_1718->$rawValue, $tmp20);
                if ($tmp21.value) {
                {
                    org$pandalanguage$pandac$Type** $tmp23 = ((org$pandalanguage$pandac$Type**) ((char*) $match$27_1718->$data + 16));
                    type22 = *$tmp23;
                    $tmp25 = type22;
                    $returnValue24 = $tmp25;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
                    $tmp17 = 0;
                    goto $l15;
                    $l26:;
                    $tmp8 = 0;
                    goto $l6;
                    $l27:;
                    return $returnValue24;
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp29, false);
                    if ($tmp29.value) goto $l30; else goto $l31;
                    $l31:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s32, (panda$core$Int64) { 31 });
                    abort();
                    $l30:;
                }
                }
            }
            $tmp17 = -1;
            goto $l15;
            $l15:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
            switch ($tmp17) {
                case -1: goto $l33;
                case 0: goto $l26;
            }
            $l33:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp34, 42);
        panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, $tmp34);
        if ($tmp35.value) {
        {
            org$pandalanguage$pandac$Position* $tmp37 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position36 = *$tmp37;
            panda$core$String** $tmp39 = ((panda$core$String**) ((char*) $match$25_99->$data + 16));
            name38 = *$tmp39;
            org$pandalanguage$pandac$Type* $tmp42 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            panda$core$Int64$init$builtin_int64(&$tmp44, 0);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp43, $tmp44);
            org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp42, name38, $tmp43, position36);
            $tmp41 = $tmp42;
            $tmp40 = $tmp41;
            $returnValue24 = $tmp40;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
            $tmp8 = 1;
            goto $l6;
            $l45:;
            return $returnValue24;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp47, 29);
        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, $tmp47);
        if ($tmp48.value) {
        {
            org$pandalanguage$pandac$Position* $tmp50 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position49 = *$tmp50;
            org$pandalanguage$pandac$ASTNode** $tmp52 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$25_99->$data + 16));
            base51 = *$tmp52;
            int $tmp55;
            {
                panda$collections$Array* $tmp59 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp59);
                $tmp58 = $tmp59;
                $tmp57 = $tmp58;
                subtypes56 = $tmp57;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
                org$pandalanguage$pandac$Type* $tmp61 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base51);
                $tmp60 = $tmp61;
                panda$collections$Array$add$panda$collections$Array$T(subtypes56, ((panda$core$Object*) $tmp60));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp60));
                org$pandalanguage$pandac$Type* $tmp64 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$Int64$init$builtin_int64(&$tmp67, 0);
                panda$core$Object* $tmp68 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes56, $tmp67);
                $tmp66 = $tmp68;
                panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp66))->name, &$s69);
                $tmp65 = $tmp70;
                panda$core$Int64$init$builtin_int64(&$tmp72, 1);
                org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp71, $tmp72);
                panda$core$Bit$init$builtin_bit(&$tmp73, false);
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp64, $tmp65, $tmp71, position49, ((panda$collections$ListView*) subtypes56), $tmp73);
                $tmp63 = $tmp64;
                $tmp62 = $tmp63;
                $returnValue24 = $tmp62;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
                panda$core$Panda$unref$panda$core$Object($tmp66);
                $tmp55 = 0;
                goto $l53;
                $l74:;
                $tmp8 = 2;
                goto $l6;
                $l75:;
                return $returnValue24;
            }
            $l53:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes56));
            subtypes56 = NULL;
            switch ($tmp55) {
                case 0: goto $l74;
            }
            $l77:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp78, 19);
        panda$core$Bit $tmp79 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, $tmp78);
        if ($tmp79.value) {
        {
            org$pandalanguage$pandac$Position* $tmp81 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position80 = *$tmp81;
            panda$core$String** $tmp83 = ((panda$core$String**) ((char*) $match$25_99->$data + 16));
            base82 = *$tmp83;
            panda$collections$ImmutableArray** $tmp85 = ((panda$collections$ImmutableArray**) ((char*) $match$25_99->$data + 24));
            args84 = *$tmp85;
            int $tmp88;
            {
                panda$collections$Array* $tmp92 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp92);
                $tmp91 = $tmp92;
                $tmp90 = $tmp91;
                finalArgs89 = $tmp90;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
                {
                    int $tmp95;
                    {
                        ITable* $tmp99 = ((panda$collections$Iterable*) args84)->$class->itable;
                        while ($tmp99->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp99 = $tmp99->next;
                        }
                        $fn101 $tmp100 = $tmp99->methods[0];
                        panda$collections$Iterator* $tmp102 = $tmp100(((panda$collections$Iterable*) args84));
                        $tmp98 = $tmp102;
                        $tmp97 = $tmp98;
                        Iter$41$1796 = $tmp97;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
                        $l103:;
                        ITable* $tmp106 = Iter$41$1796->$class->itable;
                        while ($tmp106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp106 = $tmp106->next;
                        }
                        $fn108 $tmp107 = $tmp106->methods[0];
                        panda$core$Bit $tmp109 = $tmp107(Iter$41$1796);
                        panda$core$Bit $tmp110 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp109);
                        bool $tmp105 = $tmp110.value;
                        if (!$tmp105) goto $l104;
                        {
                            int $tmp113;
                            {
                                ITable* $tmp117 = Iter$41$1796->$class->itable;
                                while ($tmp117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp117 = $tmp117->next;
                                }
                                $fn119 $tmp118 = $tmp117->methods[1];
                                panda$core$Object* $tmp120 = $tmp118(Iter$41$1796);
                                $tmp116 = $tmp120;
                                $tmp115 = ((org$pandalanguage$pandac$ASTNode*) $tmp116);
                                arg114 = $tmp115;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp115));
                                panda$core$Panda$unref$panda$core$Object($tmp116);
                                org$pandalanguage$pandac$Type* $tmp122 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg114);
                                $tmp121 = $tmp122;
                                panda$collections$Array$add$panda$collections$Array$T(finalArgs89, ((panda$core$Object*) $tmp121));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
                            }
                            $tmp113 = -1;
                            goto $l111;
                            $l111:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg114));
                            arg114 = NULL;
                            switch ($tmp113) {
                                case -1: goto $l123;
                            }
                            $l123:;
                        }
                        goto $l103;
                        $l104:;
                    }
                    $tmp95 = -1;
                    goto $l93;
                    $l93:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$41$1796));
                    Iter$41$1796 = NULL;
                    switch ($tmp95) {
                        case -1: goto $l124;
                    }
                    $l124:;
                }
                org$pandalanguage$pandac$Type* $tmp128 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$Int64$init$builtin_int64(&$tmp130, 0);
                org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp129, $tmp130);
                org$pandalanguage$pandac$Position $tmp132 = (($fn131) p_type->$class->vtable[2])(p_type);
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp128, base82, $tmp129, $tmp132);
                $tmp127 = $tmp128;
                org$pandalanguage$pandac$Type* $tmp133 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp127, ((panda$collections$ListView*) finalArgs89));
                $tmp126 = $tmp133;
                $tmp125 = $tmp126;
                $returnValue24 = $tmp125;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
                $tmp88 = 0;
                goto $l86;
                $l134:;
                $tmp8 = 3;
                goto $l6;
                $l135:;
                return $returnValue24;
            }
            $l86:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalArgs89));
            finalArgs89 = NULL;
            switch ($tmp88) {
                case 0: goto $l134;
            }
            $l137:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp138, 27);
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25_99->$rawValue, $tmp138);
        if ($tmp139.value) {
        {
            org$pandalanguage$pandac$Position* $tmp141 = ((org$pandalanguage$pandac$Position*) ((char*) $match$25_99->$data + 0));
            position140 = *$tmp141;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp143 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$25_99->$data + 16));
            kind142 = *$tmp143;
            panda$collections$ImmutableArray** $tmp145 = ((panda$collections$ImmutableArray**) ((char*) $match$25_99->$data + 24));
            rawParameters144 = *$tmp145;
            org$pandalanguage$pandac$ASTNode** $tmp147 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$25_99->$data + 32));
            rawReturnType146 = *$tmp147;
            int $tmp150;
            {
                memset(&typeKind151, 0, sizeof(typeKind151));
                {
                    $match$47_17152 = kind142;
                    panda$core$Int64$init$builtin_int64(&$tmp153, 90);
                    panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17152.$rawValue, $tmp153);
                    if ($tmp154.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp156, 14);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp155, $tmp156);
                        typeKind151 = $tmp155;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp157, 91);
                    panda$core$Bit $tmp158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17152.$rawValue, $tmp157);
                    if ($tmp158.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp160, 15);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp159, $tmp160);
                        typeKind151 = $tmp159;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp161, 92);
                    panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17152.$rawValue, $tmp161);
                    if ($tmp162.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp164, 16);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp163, $tmp164);
                        typeKind151 = $tmp163;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp165, 93);
                    panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17152.$rawValue, $tmp165);
                    if ($tmp166.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp168, 17);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp167, $tmp168);
                        typeKind151 = $tmp167;
                    }
                    }
                    else {
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp169, false);
                        if ($tmp169.value) goto $l170; else goto $l171;
                        $l171:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s172, (panda$core$Int64) { 57 }, &$s173);
                        abort();
                        $l170:;
                    }
                    }
                    }
                    }
                    }
                }
                panda$collections$Array* $tmp177 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp177);
                $tmp176 = $tmp177;
                $tmp175 = $tmp176;
                parameters174 = $tmp175;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
                {
                    int $tmp180;
                    {
                        ITable* $tmp184 = ((panda$collections$Iterable*) rawParameters144)->$class->itable;
                        while ($tmp184->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp184 = $tmp184->next;
                        }
                        $fn186 $tmp185 = $tmp184->methods[0];
                        panda$collections$Iterator* $tmp187 = $tmp185(((panda$collections$Iterable*) rawParameters144));
                        $tmp183 = $tmp187;
                        $tmp182 = $tmp183;
                        Iter$60$17181 = $tmp182;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
                        $l188:;
                        ITable* $tmp191 = Iter$60$17181->$class->itable;
                        while ($tmp191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp191 = $tmp191->next;
                        }
                        $fn193 $tmp192 = $tmp191->methods[0];
                        panda$core$Bit $tmp194 = $tmp192(Iter$60$17181);
                        panda$core$Bit $tmp195 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp194);
                        bool $tmp190 = $tmp195.value;
                        if (!$tmp190) goto $l189;
                        {
                            int $tmp198;
                            {
                                ITable* $tmp202 = Iter$60$17181->$class->itable;
                                while ($tmp202->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp202 = $tmp202->next;
                                }
                                $fn204 $tmp203 = $tmp202->methods[1];
                                panda$core$Object* $tmp205 = $tmp203(Iter$60$17181);
                                $tmp201 = $tmp205;
                                $tmp200 = ((org$pandalanguage$pandac$ASTNode*) $tmp201);
                                p199 = $tmp200;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp200));
                                panda$core$Panda$unref$panda$core$Object($tmp201);
                                org$pandalanguage$pandac$Type* $tmp207 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p199);
                                $tmp206 = $tmp207;
                                panda$collections$Array$add$panda$collections$Array$T(parameters174, ((panda$core$Object*) $tmp206));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
                            }
                            $tmp198 = -1;
                            goto $l196;
                            $l196:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p199));
                            p199 = NULL;
                            switch ($tmp198) {
                                case -1: goto $l208;
                            }
                            $l208:;
                        }
                        goto $l188;
                        $l189:;
                    }
                    $tmp180 = -1;
                    goto $l178;
                    $l178:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$60$17181));
                    Iter$60$17181 = NULL;
                    switch ($tmp180) {
                        case -1: goto $l209;
                    }
                    $l209:;
                }
                memset(&returnType210, 0, sizeof(returnType210));
                if (((panda$core$Bit) { rawReturnType146 != NULL }).value) {
                {
                    {
                        $tmp211 = returnType210;
                        org$pandalanguage$pandac$Type* $tmp214 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType146);
                        $tmp213 = $tmp214;
                        $tmp212 = $tmp213;
                        returnType210 = $tmp212;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp212));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp213));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
                    }
                }
                }
                else {
                {
                    {
                        $tmp215 = returnType210;
                        org$pandalanguage$pandac$Type* $tmp218 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                        $tmp217 = $tmp218;
                        $tmp216 = $tmp217;
                        returnType210 = $tmp216;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
                    }
                }
                }
                org$pandalanguage$pandac$Position $tmp222 = (($fn221) p_type->$class->vtable[2])(p_type);
                panda$collections$ImmutableArray* $tmp224 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters174);
                $tmp223 = $tmp224;
                org$pandalanguage$pandac$Type* $tmp225 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp222, typeKind151, ((panda$collections$ListView*) $tmp223), returnType210);
                $tmp220 = $tmp225;
                $tmp219 = $tmp220;
                $returnValue24 = $tmp219;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp219));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp223));
                $tmp150 = 0;
                goto $l148;
                $l226:;
                $tmp8 = 4;
                goto $l6;
                $l227:;
                return $returnValue24;
            }
            $l148:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters174));
            parameters174 = NULL;
            switch ($tmp150) {
                case 0: goto $l226;
            }
            $l229:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp230, false);
            if ($tmp230.value) goto $l231; else goto $l232;
            $l232:;
            panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s238, ((panda$core$Object*) p_type));
            $tmp237 = $tmp239;
            panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp237, &$s240);
            $tmp236 = $tmp241;
            panda$core$Int64$wrapper* $tmp243;
            $tmp243 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp243->value = p_type->$rawValue;
            $tmp242 = ((panda$core$Object*) $tmp243);
            panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp236, $tmp242);
            $tmp235 = $tmp244;
            panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp235, &$s245);
            $tmp234 = $tmp246;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s233, (panda$core$Int64) { 72 }, $tmp234);
            abort();
            $l231:;
        }
        }
        }
        }
        }
        }
    }
    $tmp8 = -1;
    goto $l6;
    $l6:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    switch ($tmp8) {
        case 2: goto $l75;
        case 4: goto $l227;
        case -1: goto $l247;
        case 0: goto $l27;
        case 3: goto $l135;
        case 1: goto $l45;
    }
    $l247:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$Int64 p_flags, panda$core$Int64 p_flag) {
    panda$core$Int64 $tmp249;
    panda$core$Int64 $returnValue252;
    panda$core$Int64 $tmp248 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_flags, p_flag);
    panda$core$Int64$init$builtin_int64(&$tmp249, 0);
    panda$core$Bit $tmp250 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp248, $tmp249);
    if ($tmp250.value) {
    {
        org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s251);
    }
    }
    panda$core$Int64 $tmp253 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_flags, p_flag);
    $returnValue252 = $tmp253;
    return $returnValue252;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* p_scanner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_text, org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$Bit $returnValue255;
    panda$core$Bit $tmp256;
    panda$core$String* $tmp258;
    panda$core$String* $tmp259;
    panda$core$Bit $tmp264;
    if (((panda$core$Bit) { p_expr != NULL }).value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp256, true);
        $returnValue255 = $tmp256;
        return $returnValue255;
    }
    }
    panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s260, p_text);
    $tmp259 = $tmp261;
    panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp259, &$s262);
    $tmp258 = $tmp263;
    org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(p_scanner, p_position, $tmp258);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
    panda$core$Bit$init$builtin_bit(&$tmp264, false);
    $returnValue255 = $tmp264;
    return $returnValue255;
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags269;
    panda$core$Int64 $tmp270;
    panda$collections$Array* expressions271 = NULL;
    panda$collections$Array* $tmp272;
    panda$core$Method* checkExpression273 = NULL;
    panda$core$Method* $tmp274;
    panda$collections$Iterator* Iter$93$9279 = NULL;
    panda$collections$Iterator* $tmp280;
    panda$collections$Iterator* $tmp281;
    org$pandalanguage$pandac$ASTNode* c297 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp298;
    panda$core$Object* $tmp299;
    org$pandalanguage$pandac$ASTNode* $match$94_13307 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp308;
    panda$core$Int64 $tmp309;
    org$pandalanguage$pandac$Position p311;
    panda$core$String* text313 = NULL;
    org$pandalanguage$pandac$ASTNode* rawExpr315 = NULL;
    org$pandalanguage$pandac$ASTNode* expr320 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp321;
    panda$core$String* $match$97_21325 = NULL;
    panda$core$String* $tmp326;
    panda$core$Int64 $tmp329;
    panda$core$Int64 $tmp333;
    panda$core$Int64 $tmp337;
    panda$core$Int64 $tmp341;
    panda$core$Int64 $tmp345;
    panda$core$Int64 $tmp349;
    panda$core$Int64 $tmp353;
    panda$core$Int64 $tmp357;
    panda$core$Int64 $tmp361;
    panda$core$Int64 $tmp365;
    panda$core$Int64 $tmp369;
    panda$core$Int64 $tmp373;
    panda$core$Int64 $tmp377;
    panda$collections$Array* $tmp381;
    panda$collections$Array* $tmp382;
    panda$collections$Array* $tmp383;
    panda$core$Bit $tmp385;
    org$pandalanguage$pandac$Annotations$Expression* $tmp388;
    panda$core$Int64 $tmp390;
    org$pandalanguage$pandac$ASTNode* $tmp391;
    org$pandalanguage$pandac$ASTNode* $tmp392;
    panda$collections$Array* $tmp395;
    panda$collections$Array* $tmp396;
    panda$collections$Array* $tmp397;
    panda$core$Bit $tmp399;
    org$pandalanguage$pandac$Annotations$Expression* $tmp402;
    panda$core$Int64 $tmp404;
    org$pandalanguage$pandac$ASTNode* $tmp405;
    org$pandalanguage$pandac$ASTNode* $tmp406;
    panda$collections$Array* $tmp409;
    panda$collections$Array* $tmp410;
    panda$collections$Array* $tmp411;
    panda$core$Bit $tmp413;
    org$pandalanguage$pandac$Annotations$Expression* $tmp416;
    panda$core$Int64 $tmp418;
    org$pandalanguage$pandac$ASTNode* $tmp419;
    org$pandalanguage$pandac$ASTNode* $tmp420;
    panda$collections$Array* $tmp423;
    panda$collections$Array* $tmp424;
    panda$collections$Array* $tmp425;
    panda$core$Bit $tmp427;
    org$pandalanguage$pandac$Annotations$Expression* $tmp430;
    panda$core$Int64 $tmp432;
    org$pandalanguage$pandac$ASTNode* $tmp433;
    org$pandalanguage$pandac$ASTNode* $tmp434;
    panda$core$String* $tmp435;
    panda$core$String* $tmp436;
    panda$core$String* $tmp442;
    panda$core$String* $tmp443;
    panda$core$Bit $tmp449;
    org$pandalanguage$pandac$Annotations* $returnValue456;
    org$pandalanguage$pandac$Annotations* $tmp457;
    org$pandalanguage$pandac$Annotations* $tmp458;
    int $tmp268;
    {
        panda$core$Int64$init$builtin_int64(&$tmp270, 0);
        flags269 = $tmp270;
        $tmp272 = NULL;
        expressions271 = $tmp272;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp272));
        panda$core$MutableMethod* $tmp275 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp275, (panda$core$Int8*) &org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit, NULL);
        $tmp274 = ((panda$core$Object*) $tmp275);
        checkExpression273 = $tmp274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
        {
            int $tmp278;
            {
                ITable* $tmp282 = ((panda$collections$Iterable*) p_a)->$class->itable;
                while ($tmp282->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp282 = $tmp282->next;
                }
                $fn284 $tmp283 = $tmp282->methods[0];
                panda$collections$Iterator* $tmp285 = $tmp283(((panda$collections$Iterable*) p_a));
                $tmp281 = $tmp285;
                $tmp280 = $tmp281;
                Iter$93$9279 = $tmp280;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp280));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
                $l286:;
                ITable* $tmp289 = Iter$93$9279->$class->itable;
                while ($tmp289->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp289 = $tmp289->next;
                }
                $fn291 $tmp290 = $tmp289->methods[0];
                panda$core$Bit $tmp292 = $tmp290(Iter$93$9279);
                panda$core$Bit $tmp293 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp292);
                bool $tmp288 = $tmp293.value;
                if (!$tmp288) goto $l287;
                {
                    int $tmp296;
                    {
                        ITable* $tmp300 = Iter$93$9279->$class->itable;
                        while ($tmp300->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp300 = $tmp300->next;
                        }
                        $fn302 $tmp301 = $tmp300->methods[1];
                        panda$core$Object* $tmp303 = $tmp301(Iter$93$9279);
                        $tmp299 = $tmp303;
                        $tmp298 = ((org$pandalanguage$pandac$ASTNode*) $tmp299);
                        c297 = $tmp298;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
                        panda$core$Panda$unref$panda$core$Object($tmp299);
                        int $tmp306;
                        {
                            $tmp308 = c297;
                            $match$94_13307 = $tmp308;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
                            panda$core$Int64$init$builtin_int64(&$tmp309, 0);
                            panda$core$Bit $tmp310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$94_13307->$rawValue, $tmp309);
                            if ($tmp310.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp312 = ((org$pandalanguage$pandac$Position*) ((char*) $match$94_13307->$data + 0));
                                p311 = *$tmp312;
                                panda$core$String** $tmp314 = ((panda$core$String**) ((char*) $match$94_13307->$data + 16));
                                text313 = *$tmp314;
                                org$pandalanguage$pandac$ASTNode** $tmp316 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$94_13307->$data + 24));
                                rawExpr315 = *$tmp316;
                                int $tmp319;
                                {
                                    $tmp321 = rawExpr315;
                                    expr320 = $tmp321;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp321));
                                    int $tmp324;
                                    {
                                        $tmp326 = text313;
                                        $match$97_21325 = $tmp326;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp326));
                                        panda$core$Bit $tmp328 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s327);
                                        if ($tmp328.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp329, 2);
                                            panda$core$Int64 $tmp330 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp329);
                                            flags269 = $tmp330;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp332 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s331);
                                        if ($tmp332.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp333, 4);
                                            panda$core$Int64 $tmp334 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp333);
                                            flags269 = $tmp334;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp336 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s335);
                                        if ($tmp336.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp337, 8);
                                            panda$core$Int64 $tmp338 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp337);
                                            flags269 = $tmp338;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp340 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s339);
                                        if ($tmp340.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp341, 16);
                                            panda$core$Int64 $tmp342 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp341);
                                            flags269 = $tmp342;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp344 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s343);
                                        if ($tmp344.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp345, 32);
                                            panda$core$Int64 $tmp346 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp345);
                                            flags269 = $tmp346;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp348 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s347);
                                        if ($tmp348.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp349, 64);
                                            panda$core$Int64 $tmp350 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp349);
                                            flags269 = $tmp350;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp352 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s351);
                                        if ($tmp352.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp353, 128);
                                            panda$core$Int64 $tmp354 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp353);
                                            flags269 = $tmp354;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp356 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s355);
                                        if ($tmp356.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp357, 256);
                                            panda$core$Int64 $tmp358 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp357);
                                            flags269 = $tmp358;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp360 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s359);
                                        if ($tmp360.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp361, 512);
                                            panda$core$Int64 $tmp362 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp361);
                                            flags269 = $tmp362;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp364 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s363);
                                        if ($tmp364.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp365, 1024);
                                            panda$core$Int64 $tmp366 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp365);
                                            flags269 = $tmp366;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp368 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s367);
                                        if ($tmp368.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp369, 2048);
                                            panda$core$Int64 $tmp370 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp369);
                                            flags269 = $tmp370;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp372 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s371);
                                        if ($tmp372.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp373, 4096);
                                            panda$core$Int64 $tmp374 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp373);
                                            flags269 = $tmp374;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp376 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s375);
                                        if ($tmp376.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp377, 16384);
                                            panda$core$Int64 $tmp378 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p311, flags269, $tmp377);
                                            flags269 = $tmp378;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp380 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s379);
                                        if ($tmp380.value) {
                                        {
                                            if (((panda$core$Bit) { expressions271 == NULL }).value) {
                                            {
                                                {
                                                    $tmp381 = expressions271;
                                                    panda$collections$Array* $tmp384 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp384);
                                                    $tmp383 = $tmp384;
                                                    $tmp382 = $tmp383;
                                                    expressions271 = $tmp382;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp382));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
                                                }
                                            }
                                            }
                                            if (checkExpression273->target) {
                                                $tmp385 = (($fn386) checkExpression273->pointer)(((org$pandalanguage$pandac$Scanner*) checkExpression273->target), self, p311, text313, expr320);
                                            } else {
                                                $tmp385 = (($fn387) checkExpression273->pointer)(self, p311, text313, expr320);
                                            }
                                            if ($tmp385.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp389 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp390, 0);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp389, $tmp390, expr320);
                                                $tmp388 = $tmp389;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions271, ((panda$core$Object*) $tmp388));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp388));
                                                {
                                                    $tmp391 = expr320;
                                                    $tmp392 = NULL;
                                                    expr320 = $tmp392;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp392));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp394 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s393);
                                        if ($tmp394.value) {
                                        {
                                            if (((panda$core$Bit) { expressions271 == NULL }).value) {
                                            {
                                                {
                                                    $tmp395 = expressions271;
                                                    panda$collections$Array* $tmp398 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp398);
                                                    $tmp397 = $tmp398;
                                                    $tmp396 = $tmp397;
                                                    expressions271 = $tmp396;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp396));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp397));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp395));
                                                }
                                            }
                                            }
                                            if (checkExpression273->target) {
                                                $tmp399 = (($fn400) checkExpression273->pointer)(((org$pandalanguage$pandac$Scanner*) checkExpression273->target), self, p311, text313, expr320);
                                            } else {
                                                $tmp399 = (($fn401) checkExpression273->pointer)(self, p311, text313, expr320);
                                            }
                                            if ($tmp399.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp403 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp404, 1);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp403, $tmp404, expr320);
                                                $tmp402 = $tmp403;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions271, ((panda$core$Object*) $tmp402));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp402));
                                                {
                                                    $tmp405 = expr320;
                                                    $tmp406 = NULL;
                                                    expr320 = $tmp406;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp406));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp405));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp408 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s407);
                                        if ($tmp408.value) {
                                        {
                                            if (((panda$core$Bit) { expressions271 == NULL }).value) {
                                            {
                                                {
                                                    $tmp409 = expressions271;
                                                    panda$collections$Array* $tmp412 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp412);
                                                    $tmp411 = $tmp412;
                                                    $tmp410 = $tmp411;
                                                    expressions271 = $tmp410;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp410));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp411));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
                                                }
                                            }
                                            }
                                            if (checkExpression273->target) {
                                                $tmp413 = (($fn414) checkExpression273->pointer)(((org$pandalanguage$pandac$Scanner*) checkExpression273->target), self, p311, text313, expr320);
                                            } else {
                                                $tmp413 = (($fn415) checkExpression273->pointer)(self, p311, text313, expr320);
                                            }
                                            if ($tmp413.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp417 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp418, 2);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp417, $tmp418, expr320);
                                                $tmp416 = $tmp417;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions271, ((panda$core$Object*) $tmp416));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
                                                {
                                                    $tmp419 = expr320;
                                                    $tmp420 = NULL;
                                                    expr320 = $tmp420;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp420));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp422 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$97_21325, &$s421);
                                        if ($tmp422.value) {
                                        {
                                            if (((panda$core$Bit) { expressions271 == NULL }).value) {
                                            {
                                                {
                                                    $tmp423 = expressions271;
                                                    panda$collections$Array* $tmp426 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp426);
                                                    $tmp425 = $tmp426;
                                                    $tmp424 = $tmp425;
                                                    expressions271 = $tmp424;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp424));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
                                                }
                                            }
                                            }
                                            if (checkExpression273->target) {
                                                $tmp427 = (($fn428) checkExpression273->pointer)(((org$pandalanguage$pandac$Scanner*) checkExpression273->target), self, p311, text313, expr320);
                                            } else {
                                                $tmp427 = (($fn429) checkExpression273->pointer)(self, p311, text313, expr320);
                                            }
                                            if ($tmp427.value) {
                                            {
                                                org$pandalanguage$pandac$Annotations$Expression* $tmp431 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                                panda$core$Int64$init$builtin_int64(&$tmp432, 3);
                                                org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp431, $tmp432, expr320);
                                                $tmp430 = $tmp431;
                                                panda$collections$Array$add$panda$collections$Array$T(expressions271, ((panda$core$Object*) $tmp430));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
                                                {
                                                    $tmp433 = expr320;
                                                    $tmp434 = NULL;
                                                    expr320 = $tmp434;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
                                                }
                                            }
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$String* $tmp438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s437, text313);
                                            $tmp436 = $tmp438;
                                            panda$core$String* $tmp440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp436, &$s439);
                                            $tmp435 = $tmp440;
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p311, $tmp435);
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp435));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp436));
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                    }
                                    $tmp324 = -1;
                                    goto $l322;
                                    $l322:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
                                    switch ($tmp324) {
                                        case -1: goto $l441;
                                    }
                                    $l441:;
                                    if (((panda$core$Bit) { expr320 != NULL }).value) {
                                    {
                                        panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s444, text313);
                                        $tmp443 = $tmp445;
                                        panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, &$s446);
                                        $tmp442 = $tmp447;
                                        org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p311, $tmp442);
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp442));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
                                    }
                                    }
                                }
                                $tmp319 = -1;
                                goto $l317;
                                $l317:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr320));
                                expr320 = NULL;
                                switch ($tmp319) {
                                    case -1: goto $l448;
                                }
                                $l448:;
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp449, false);
                                if ($tmp449.value) goto $l450; else goto $l451;
                                $l451:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s452, (panda$core$Int64) { 150 });
                                abort();
                                $l450:;
                            }
                            }
                        }
                        $tmp306 = -1;
                        goto $l304;
                        $l304:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
                        switch ($tmp306) {
                            case -1: goto $l453;
                        }
                        $l453:;
                    }
                    $tmp296 = -1;
                    goto $l294;
                    $l294:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c297));
                    c297 = NULL;
                    switch ($tmp296) {
                        case -1: goto $l454;
                    }
                    $l454:;
                }
                goto $l286;
                $l287:;
            }
            $tmp278 = -1;
            goto $l276;
            $l276:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$93$9279));
            Iter$93$9279 = NULL;
            switch ($tmp278) {
                case -1: goto $l455;
            }
            $l455:;
        }
        org$pandalanguage$pandac$Annotations* $tmp459 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp459, flags269, ((panda$collections$ListView*) expressions271));
        $tmp458 = $tmp459;
        $tmp457 = $tmp458;
        $returnValue456 = $tmp457;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp457));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
        $tmp268 = 0;
        goto $l266;
        $l460:;
        return $returnValue456;
    }
    $l266:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) checkExpression273));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions271));
    checkExpression273 = NULL;
    switch ($tmp268) {
        case 0: goto $l460;
    }
    $l462:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment466 = NULL;
    panda$core$String* $tmp467;
    panda$core$String* $tmp468;
    org$pandalanguage$pandac$ASTNode* $match$164_13472 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp473;
    panda$core$Int64 $tmp474;
    org$pandalanguage$pandac$Position position476;
    panda$core$String* text478 = NULL;
    panda$core$String* $tmp480;
    panda$core$String* $tmp481;
    panda$core$Bit $tmp482;
    org$pandalanguage$pandac$Annotations* annotations487 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp488;
    org$pandalanguage$pandac$Annotations* $tmp489;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind491;
    org$pandalanguage$pandac$ASTNode* $match$173_9495 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp496;
    panda$core$Int64 $tmp497;
    org$pandalanguage$pandac$Variable$Kind kind499;
    panda$collections$ImmutableArray* decls501 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$175_17503;
    panda$core$Int64 $tmp504;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp506;
    panda$core$Int64 $tmp507;
    panda$core$Int64 $tmp508;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp510;
    panda$core$Int64 $tmp511;
    panda$core$Int64 $tmp512;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp514;
    panda$core$Int64 $tmp515;
    panda$core$Int64 $tmp516;
    panda$core$Int64 $tmp518;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp520;
    panda$core$Int64 $tmp521;
    panda$collections$Iterator* Iter$186$17525 = NULL;
    panda$collections$Iterator* $tmp526;
    panda$collections$Iterator* $tmp527;
    org$pandalanguage$pandac$ASTNode* decl543 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp544;
    panda$core$Object* $tmp545;
    org$pandalanguage$pandac$ASTNode* $match$187_21553 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp554;
    panda$core$Int64 $tmp555;
    org$pandalanguage$pandac$Position declPosition557;
    org$pandalanguage$pandac$ASTNode* target559 = NULL;
    org$pandalanguage$pandac$ASTNode* rawValue561 = NULL;
    panda$core$String* name566 = NULL;
    org$pandalanguage$pandac$Type* type567 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$191_29571 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp572;
    panda$core$Int64 $tmp573;
    panda$core$String* id575 = NULL;
    panda$core$String* $tmp577;
    panda$core$String* $tmp578;
    org$pandalanguage$pandac$Type* $tmp579;
    org$pandalanguage$pandac$Type* $tmp580;
    org$pandalanguage$pandac$Type* $tmp581;
    panda$core$Int64 $tmp583;
    panda$core$String* id585 = NULL;
    org$pandalanguage$pandac$ASTNode* idType587 = NULL;
    panda$core$String* $tmp589;
    panda$core$String* $tmp590;
    org$pandalanguage$pandac$Type* $tmp591;
    org$pandalanguage$pandac$Type* $tmp592;
    org$pandalanguage$pandac$Type* $tmp593;
    panda$core$Bit $tmp595;
    org$pandalanguage$pandac$ASTNode* value600 = NULL;
    panda$core$Int64 $tmp607;
    org$pandalanguage$pandac$ASTNode* $tmp610;
    org$pandalanguage$pandac$ASTNode* $tmp611;
    org$pandalanguage$pandac$ASTNode* $tmp612;
    panda$core$Int64 $tmp614;
    org$pandalanguage$pandac$ASTNode* $tmp615;
    org$pandalanguage$pandac$ASTNode* $tmp616;
    org$pandalanguage$pandac$FieldDecl* field617 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp618;
    org$pandalanguage$pandac$FieldDecl* $tmp619;
    panda$core$Bit $tmp622;
    panda$core$Bit $tmp629;
    int $tmp465;
    {
        memset(&doccomment466, 0, sizeof(doccomment466));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp467 = doccomment466;
                $tmp468 = NULL;
                doccomment466 = $tmp468;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
            }
        }
        }
        else {
        {
            int $tmp471;
            {
                $tmp473 = p_rawDoccomment;
                $match$164_13472 = $tmp473;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp473));
                panda$core$Int64$init$builtin_int64(&$tmp474, 38);
                panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$164_13472->$rawValue, $tmp474);
                if ($tmp475.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp477 = ((org$pandalanguage$pandac$Position*) ((char*) $match$164_13472->$data + 0));
                    position476 = *$tmp477;
                    panda$core$String** $tmp479 = ((panda$core$String**) ((char*) $match$164_13472->$data + 16));
                    text478 = *$tmp479;
                    {
                        $tmp480 = doccomment466;
                        $tmp481 = text478;
                        doccomment466 = $tmp481;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp481));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp482, false);
                    if ($tmp482.value) goto $l483; else goto $l484;
                    $l484:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s485, (panda$core$Int64) { 168 });
                    abort();
                    $l483:;
                }
                }
            }
            $tmp471 = -1;
            goto $l469;
            $l469:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
            switch ($tmp471) {
                case -1: goto $l486;
            }
            $l486:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp490 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp489 = $tmp490;
        $tmp488 = $tmp489;
        annotations487 = $tmp488;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp488));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
        memset(&fieldKind491, 0, sizeof(fieldKind491));
        int $tmp494;
        {
            $tmp496 = p_varDecl;
            $match$173_9495 = $tmp496;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp496));
            panda$core$Int64$init$builtin_int64(&$tmp497, 47);
            panda$core$Bit $tmp498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9495->$rawValue, $tmp497);
            if ($tmp498.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp500 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$173_9495->$data + 16));
                kind499 = *$tmp500;
                panda$collections$ImmutableArray** $tmp502 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9495->$data + 24));
                decls501 = *$tmp502;
                {
                    $match$175_17503 = kind499;
                    panda$core$Int64$init$builtin_int64(&$tmp504, 0);
                    panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$175_17503.$rawValue, $tmp504);
                    if ($tmp505.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp507, 0);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp506, $tmp507);
                        fieldKind491 = $tmp506;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp508, 1);
                    panda$core$Bit $tmp509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$175_17503.$rawValue, $tmp508);
                    if ($tmp509.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp511, 1);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp510, $tmp511);
                        fieldKind491 = $tmp510;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp512, 2);
                    panda$core$Bit $tmp513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$175_17503.$rawValue, $tmp512);
                    if ($tmp513.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp515, 2);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp514, $tmp515);
                        fieldKind491 = $tmp514;
                        panda$core$Int64$init$builtin_int64(&$tmp516, 16);
                        panda$core$Int64 $tmp517 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations487->flags, $tmp516);
                        annotations487->flags = $tmp517;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp518, 3);
                    panda$core$Bit $tmp519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$175_17503.$rawValue, $tmp518);
                    if ($tmp519.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp521, 3);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp520, $tmp521);
                        fieldKind491 = $tmp520;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp524;
                    {
                        ITable* $tmp528 = ((panda$collections$Iterable*) decls501)->$class->itable;
                        while ($tmp528->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp528 = $tmp528->next;
                        }
                        $fn530 $tmp529 = $tmp528->methods[0];
                        panda$collections$Iterator* $tmp531 = $tmp529(((panda$collections$Iterable*) decls501));
                        $tmp527 = $tmp531;
                        $tmp526 = $tmp527;
                        Iter$186$17525 = $tmp526;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp526));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp527));
                        $l532:;
                        ITable* $tmp535 = Iter$186$17525->$class->itable;
                        while ($tmp535->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp535 = $tmp535->next;
                        }
                        $fn537 $tmp536 = $tmp535->methods[0];
                        panda$core$Bit $tmp538 = $tmp536(Iter$186$17525);
                        panda$core$Bit $tmp539 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp538);
                        bool $tmp534 = $tmp539.value;
                        if (!$tmp534) goto $l533;
                        {
                            int $tmp542;
                            {
                                ITable* $tmp546 = Iter$186$17525->$class->itable;
                                while ($tmp546->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp546 = $tmp546->next;
                                }
                                $fn548 $tmp547 = $tmp546->methods[1];
                                panda$core$Object* $tmp549 = $tmp547(Iter$186$17525);
                                $tmp545 = $tmp549;
                                $tmp544 = ((org$pandalanguage$pandac$ASTNode*) $tmp545);
                                decl543 = $tmp544;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp544));
                                panda$core$Panda$unref$panda$core$Object($tmp545);
                                int $tmp552;
                                {
                                    $tmp554 = decl543;
                                    $match$187_21553 = $tmp554;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp554));
                                    panda$core$Int64$init$builtin_int64(&$tmp555, 13);
                                    panda$core$Bit $tmp556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$187_21553->$rawValue, $tmp555);
                                    if ($tmp556.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp558 = ((org$pandalanguage$pandac$Position*) ((char*) $match$187_21553->$data + 0));
                                        declPosition557 = *$tmp558;
                                        org$pandalanguage$pandac$ASTNode** $tmp560 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$187_21553->$data + 16));
                                        target559 = *$tmp560;
                                        org$pandalanguage$pandac$ASTNode** $tmp562 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$187_21553->$data + 24));
                                        rawValue561 = *$tmp562;
                                        int $tmp565;
                                        {
                                            memset(&name566, 0, sizeof(name566));
                                            memset(&type567, 0, sizeof(type567));
                                            int $tmp570;
                                            {
                                                $tmp572 = target559;
                                                $match$191_29571 = $tmp572;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp572));
                                                panda$core$Int64$init$builtin_int64(&$tmp573, 20);
                                                panda$core$Bit $tmp574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_29571->$rawValue, $tmp573);
                                                if ($tmp574.value) {
                                                {
                                                    panda$core$String** $tmp576 = ((panda$core$String**) ((char*) $match$191_29571->$data + 16));
                                                    id575 = *$tmp576;
                                                    {
                                                        $tmp577 = name566;
                                                        $tmp578 = id575;
                                                        name566 = $tmp578;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp578));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp577));
                                                    }
                                                    {
                                                        $tmp579 = type567;
                                                        org$pandalanguage$pandac$Type* $tmp582 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp581 = $tmp582;
                                                        $tmp580 = $tmp581;
                                                        type567 = $tmp580;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp580));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Int64$init$builtin_int64(&$tmp583, 44);
                                                panda$core$Bit $tmp584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_29571->$rawValue, $tmp583);
                                                if ($tmp584.value) {
                                                {
                                                    panda$core$String** $tmp586 = ((panda$core$String**) ((char*) $match$191_29571->$data + 16));
                                                    id585 = *$tmp586;
                                                    org$pandalanguage$pandac$ASTNode** $tmp588 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_29571->$data + 24));
                                                    idType587 = *$tmp588;
                                                    {
                                                        $tmp589 = name566;
                                                        $tmp590 = id585;
                                                        name566 = $tmp590;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp590));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp589));
                                                    }
                                                    {
                                                        $tmp591 = type567;
                                                        org$pandalanguage$pandac$Type* $tmp594 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType587);
                                                        $tmp593 = $tmp594;
                                                        $tmp592 = $tmp593;
                                                        type567 = $tmp592;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp592));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp591));
                                                    }
                                                }
                                                }
                                                else {
                                                {
                                                    panda$core$Bit$init$builtin_bit(&$tmp595, false);
                                                    if ($tmp595.value) goto $l596; else goto $l597;
                                                    $l597:;
                                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s598, (panda$core$Int64) { 199 });
                                                    abort();
                                                    $l596:;
                                                }
                                                }
                                                }
                                            }
                                            $tmp570 = -1;
                                            goto $l568;
                                            $l568:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
                                            switch ($tmp570) {
                                                case -1: goto $l599;
                                            }
                                            $l599:;
                                            memset(&value600, 0, sizeof(value600));
                                            bool $tmp602 = ((panda$core$Bit) { rawValue561 == NULL }).value;
                                            if (!$tmp602) goto $l603;
                                            panda$core$Bit $tmp604 = org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(annotations487);
                                            $tmp602 = $tmp604.value;
                                            $l603:;
                                            panda$core$Bit $tmp605 = { $tmp602 };
                                            bool $tmp601 = $tmp605.value;
                                            if (!$tmp601) goto $l606;
                                            panda$core$Int64$init$builtin_int64(&$tmp607, 1);
                                            panda$core$Bit $tmp608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type567->typeKind.$rawValue, $tmp607);
                                            $tmp601 = $tmp608.value;
                                            $l606:;
                                            panda$core$Bit $tmp609 = { $tmp601 };
                                            if ($tmp609.value) {
                                            {
                                                {
                                                    $tmp610 = value600;
                                                    org$pandalanguage$pandac$ASTNode* $tmp613 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp614, 28);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp613, $tmp614, declPosition557);
                                                    $tmp612 = $tmp613;
                                                    $tmp611 = $tmp612;
                                                    value600 = $tmp611;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp611));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp612));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp610));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp615 = value600;
                                                    $tmp616 = rawValue561;
                                                    value600 = $tmp616;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp616));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$FieldDecl* $tmp620 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp620, p_owner, declPosition557, doccomment466, annotations487, fieldKind491, name566, type567, value600);
                                            $tmp619 = $tmp620;
                                            $tmp618 = $tmp619;
                                            field617 = $tmp618;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp618));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field617));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field617));
                                        }
                                        $tmp565 = -1;
                                        goto $l563;
                                        $l563:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field617));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value600));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type567));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name566));
                                        field617 = NULL;
                                        switch ($tmp565) {
                                            case -1: goto $l621;
                                        }
                                        $l621:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp622, false);
                                        if ($tmp622.value) goto $l623; else goto $l624;
                                        $l624:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s625, (panda$core$Int64) { 214 });
                                        abort();
                                        $l623:;
                                    }
                                    }
                                }
                                $tmp552 = -1;
                                goto $l550;
                                $l550:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp554));
                                switch ($tmp552) {
                                    case -1: goto $l626;
                                }
                                $l626:;
                            }
                            $tmp542 = -1;
                            goto $l540;
                            $l540:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl543));
                            decl543 = NULL;
                            switch ($tmp542) {
                                case -1: goto $l627;
                            }
                            $l627:;
                        }
                        goto $l532;
                        $l533:;
                    }
                    $tmp524 = -1;
                    goto $l522;
                    $l522:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$186$17525));
                    Iter$186$17525 = NULL;
                    switch ($tmp524) {
                        case -1: goto $l628;
                    }
                    $l628:;
                }
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp629, false);
                if ($tmp629.value) goto $l630; else goto $l631;
                $l631:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s632, (panda$core$Int64) { 218 });
                abort();
                $l630:;
            }
            }
        }
        $tmp494 = -1;
        goto $l492;
        $l492:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp496));
        switch ($tmp494) {
            case -1: goto $l633;
        }
        $l633:;
    }
    $tmp465 = -1;
    goto $l463;
    $l463:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations487));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment466));
    annotations487 = NULL;
    switch ($tmp465) {
        case -1: goto $l634;
    }
    $l634:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$224_9638 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp639;
    panda$core$Int64 $tmp640;
    org$pandalanguage$pandac$ASTNode* test642 = NULL;
    panda$core$Int64 $returnValue644;
    panda$core$Int64 $tmp648;
    org$pandalanguage$pandac$ASTNode* left650 = NULL;
    org$pandalanguage$pandac$ASTNode* right652 = NULL;
    panda$core$Int64 $tmp654;
    panda$core$Int64 $tmp661;
    panda$core$Int64 $tmp663;
    panda$core$Int64 $tmp666;
    panda$collections$ImmutableArray* statements668 = NULL;
    panda$core$Int64 result670;
    panda$core$Int64 $tmp671;
    panda$collections$Iterator* Iter$233$17675 = NULL;
    panda$collections$Iterator* $tmp676;
    panda$collections$Iterator* $tmp677;
    org$pandalanguage$pandac$ASTNode* s693 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp694;
    panda$core$Object* $tmp695;
    panda$core$Int64 $tmp706;
    panda$core$Int64 $tmp708;
    panda$core$Int64 $tmp711;
    org$pandalanguage$pandac$ASTNode* target713 = NULL;
    panda$collections$ImmutableArray* args715 = NULL;
    panda$core$Int64 result717;
    panda$collections$Iterator* Iter$241$17722 = NULL;
    panda$collections$Iterator* $tmp723;
    panda$collections$Iterator* $tmp724;
    org$pandalanguage$pandac$ASTNode* a740 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp741;
    panda$core$Object* $tmp742;
    panda$core$Int64 $tmp753;
    org$pandalanguage$pandac$ASTNode* base755 = NULL;
    panda$core$Int64 $tmp760;
    panda$core$Int64 $tmp762;
    panda$core$Int64 $tmp765;
    org$pandalanguage$pandac$ASTNode* value767 = NULL;
    panda$core$Int64 $tmp769;
    panda$core$Int64 $tmp775;
    panda$collections$ImmutableArray* statements777 = NULL;
    org$pandalanguage$pandac$ASTNode* test779 = NULL;
    panda$core$Int64 result781;
    panda$collections$Iterator* Iter$256$17786 = NULL;
    panda$collections$Iterator* $tmp787;
    panda$collections$Iterator* $tmp788;
    org$pandalanguage$pandac$ASTNode* s804 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp805;
    panda$core$Object* $tmp806;
    panda$core$Int64 $tmp817;
    org$pandalanguage$pandac$ASTNode* base819 = NULL;
    panda$core$Int64 $tmp824;
    org$pandalanguage$pandac$ASTNode* list826 = NULL;
    panda$collections$ImmutableArray* statements828 = NULL;
    panda$core$Int64 result830;
    panda$collections$Iterator* Iter$264$17835 = NULL;
    panda$collections$Iterator* $tmp836;
    panda$collections$Iterator* $tmp837;
    org$pandalanguage$pandac$ASTNode* s853 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp854;
    panda$core$Object* $tmp855;
    panda$core$Int64 $tmp866;
    panda$core$Int64 $tmp868;
    panda$core$Int64 $tmp871;
    panda$core$Int64 $tmp873;
    panda$core$Int64 $tmp876;
    org$pandalanguage$pandac$ASTNode* test878 = NULL;
    panda$collections$ImmutableArray* ifTrue880 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse882 = NULL;
    panda$core$Int64 result884;
    panda$collections$Iterator* Iter$274$17889 = NULL;
    panda$collections$Iterator* $tmp890;
    panda$collections$Iterator* $tmp891;
    org$pandalanguage$pandac$ASTNode* s907 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp908;
    panda$core$Object* $tmp909;
    panda$core$Int64 $tmp922;
    panda$core$Int64 $tmp924;
    panda$core$Int64 $tmp927;
    panda$collections$ImmutableArray* statements929 = NULL;
    panda$core$Int64 result931;
    panda$core$Int64 $tmp932;
    panda$collections$Iterator* Iter$285$17936 = NULL;
    panda$collections$Iterator* $tmp937;
    panda$collections$Iterator* $tmp938;
    org$pandalanguage$pandac$ASTNode* s954 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp955;
    panda$core$Object* $tmp956;
    panda$core$Int64 $tmp967;
    org$pandalanguage$pandac$ASTNode* value969 = NULL;
    panda$collections$ImmutableArray* whens971 = NULL;
    panda$collections$ImmutableArray* other973 = NULL;
    panda$core$Int64 result975;
    panda$collections$Iterator* Iter$291$17980 = NULL;
    panda$collections$Iterator* $tmp981;
    panda$collections$Iterator* $tmp982;
    org$pandalanguage$pandac$ASTNode* w998 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp999;
    panda$core$Object* $tmp1000;
    panda$collections$Iterator* Iter$295$211012 = NULL;
    panda$collections$Iterator* $tmp1013;
    panda$collections$Iterator* $tmp1014;
    org$pandalanguage$pandac$ASTNode* s1030 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1031;
    panda$core$Object* $tmp1032;
    panda$core$Int64 $tmp1043;
    panda$core$Int64 $tmp1045;
    panda$core$Int64 $tmp1048;
    panda$core$Int64 $tmp1050;
    panda$core$Int64 $tmp1053;
    panda$core$Int64 $tmp1055;
    panda$core$Int64 $tmp1058;
    org$pandalanguage$pandac$ASTNode* base1060 = NULL;
    panda$core$Int64 $tmp1062;
    panda$core$Int64 $tmp1067;
    panda$core$Int64 $tmp1069;
    panda$core$Int64 $tmp1072;
    panda$core$Int64 $tmp1074;
    panda$core$Int64 $tmp1077;
    panda$core$Int64 $tmp1079;
    panda$core$Int64 $tmp1082;
    org$pandalanguage$pandac$ASTNode* value1084 = NULL;
    panda$core$Int64 $tmp1086;
    panda$core$Int64 $tmp1092;
    panda$core$Int64 $tmp1094;
    panda$core$Int64 $tmp1097;
    panda$core$Int64 $tmp1099;
    panda$core$Int64 $tmp1102;
    panda$core$Int64 $tmp1104;
    panda$core$Int64 $tmp1107;
    panda$core$Int64 $tmp1109;
    panda$core$Int64 $tmp1112;
    panda$core$Int64 $tmp1114;
    panda$core$Int64 $tmp1117;
    panda$core$Int64 $tmp1119;
    panda$core$Int64 $tmp1122;
    panda$collections$ImmutableArray* decls1124 = NULL;
    panda$core$Int64 result1126;
    panda$core$Int64 $tmp1127;
    panda$collections$Iterator* Iter$333$171131 = NULL;
    panda$collections$Iterator* $tmp1132;
    panda$collections$Iterator* $tmp1133;
    org$pandalanguage$pandac$ASTNode* decl1149 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1150;
    panda$core$Object* $tmp1151;
    panda$core$Int64 $tmp1162;
    panda$collections$ImmutableArray* tests1164 = NULL;
    panda$collections$ImmutableArray* statements1166 = NULL;
    panda$core$Int64 result1168;
    panda$core$Int64 $tmp1169;
    panda$collections$Iterator* Iter$339$171173 = NULL;
    panda$collections$Iterator* $tmp1174;
    panda$collections$Iterator* $tmp1175;
    org$pandalanguage$pandac$ASTNode* test1191 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1192;
    panda$core$Object* $tmp1193;
    panda$collections$Iterator* Iter$342$171205 = NULL;
    panda$collections$Iterator* $tmp1206;
    panda$collections$Iterator* $tmp1207;
    org$pandalanguage$pandac$ASTNode* s1223 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1224;
    panda$core$Object* $tmp1225;
    panda$core$Int64 $tmp1236;
    org$pandalanguage$pandac$ASTNode* test1238 = NULL;
    panda$collections$ImmutableArray* statements1240 = NULL;
    panda$core$Int64 result1242;
    panda$collections$Iterator* Iter$348$171247 = NULL;
    panda$collections$Iterator* $tmp1248;
    panda$collections$Iterator* $tmp1249;
    org$pandalanguage$pandac$ASTNode* s1265 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1266;
    panda$core$Object* $tmp1267;
    panda$core$Bit $tmp1278;
    panda$core$String* $tmp1282;
    panda$core$String* $tmp1283;
    int $tmp637;
    {
        $tmp639 = p_node;
        $match$224_9638 = $tmp639;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp639));
        panda$core$Int64$init$builtin_int64(&$tmp640, 1);
        panda$core$Bit $tmp641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp640);
        if ($tmp641.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp643 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 16));
            test642 = *$tmp643;
            panda$core$Int64 $tmp645 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test642);
            $returnValue644 = $tmp645;
            $tmp637 = 0;
            goto $l635;
            $l646:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp648, 4);
        panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp648);
        if ($tmp649.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp651 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 16));
            left650 = *$tmp651;
            org$pandalanguage$pandac$ASTNode** $tmp653 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 32));
            right652 = *$tmp653;
            panda$core$Int64$init$builtin_int64(&$tmp654, 1);
            panda$core$Int64 $tmp655 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left650);
            panda$core$Int64 $tmp656 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp654, $tmp655);
            panda$core$Int64 $tmp657 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right652);
            panda$core$Int64 $tmp658 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp656, $tmp657);
            $returnValue644 = $tmp658;
            $tmp637 = 1;
            goto $l635;
            $l659:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp661, 5);
        panda$core$Bit $tmp662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp661);
        if ($tmp662.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp663, 1);
            $returnValue644 = $tmp663;
            $tmp637 = 2;
            goto $l635;
            $l664:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp666, 6);
        panda$core$Bit $tmp667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp666);
        if ($tmp667.value) {
        {
            panda$collections$ImmutableArray** $tmp669 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 16));
            statements668 = *$tmp669;
            panda$core$Int64$init$builtin_int64(&$tmp671, 0);
            result670 = $tmp671;
            {
                int $tmp674;
                {
                    ITable* $tmp678 = ((panda$collections$Iterable*) statements668)->$class->itable;
                    while ($tmp678->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp678 = $tmp678->next;
                    }
                    $fn680 $tmp679 = $tmp678->methods[0];
                    panda$collections$Iterator* $tmp681 = $tmp679(((panda$collections$Iterable*) statements668));
                    $tmp677 = $tmp681;
                    $tmp676 = $tmp677;
                    Iter$233$17675 = $tmp676;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp676));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
                    $l682:;
                    ITable* $tmp685 = Iter$233$17675->$class->itable;
                    while ($tmp685->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp685 = $tmp685->next;
                    }
                    $fn687 $tmp686 = $tmp685->methods[0];
                    panda$core$Bit $tmp688 = $tmp686(Iter$233$17675);
                    panda$core$Bit $tmp689 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp688);
                    bool $tmp684 = $tmp689.value;
                    if (!$tmp684) goto $l683;
                    {
                        int $tmp692;
                        {
                            ITable* $tmp696 = Iter$233$17675->$class->itable;
                            while ($tmp696->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp696 = $tmp696->next;
                            }
                            $fn698 $tmp697 = $tmp696->methods[1];
                            panda$core$Object* $tmp699 = $tmp697(Iter$233$17675);
                            $tmp695 = $tmp699;
                            $tmp694 = ((org$pandalanguage$pandac$ASTNode*) $tmp695);
                            s693 = $tmp694;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp694));
                            panda$core$Panda$unref$panda$core$Object($tmp695);
                            panda$core$Int64 $tmp700 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s693);
                            panda$core$Int64 $tmp701 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result670, $tmp700);
                            result670 = $tmp701;
                        }
                        $tmp692 = -1;
                        goto $l690;
                        $l690:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s693));
                        s693 = NULL;
                        switch ($tmp692) {
                            case -1: goto $l702;
                        }
                        $l702:;
                    }
                    goto $l682;
                    $l683:;
                }
                $tmp674 = -1;
                goto $l672;
                $l672:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$233$17675));
                Iter$233$17675 = NULL;
                switch ($tmp674) {
                    case -1: goto $l703;
                }
                $l703:;
            }
            $returnValue644 = result670;
            $tmp637 = 3;
            goto $l635;
            $l704:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp706, 7);
        panda$core$Bit $tmp707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp706);
        if ($tmp707.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp708, 1);
            $returnValue644 = $tmp708;
            $tmp637 = 4;
            goto $l635;
            $l709:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp711, 8);
        panda$core$Bit $tmp712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp711);
        if ($tmp712.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp714 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 16));
            target713 = *$tmp714;
            panda$collections$ImmutableArray** $tmp716 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 24));
            args715 = *$tmp716;
            panda$core$Int64 $tmp718 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target713);
            result717 = $tmp718;
            {
                int $tmp721;
                {
                    ITable* $tmp725 = ((panda$collections$Iterable*) args715)->$class->itable;
                    while ($tmp725->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp725 = $tmp725->next;
                    }
                    $fn727 $tmp726 = $tmp725->methods[0];
                    panda$collections$Iterator* $tmp728 = $tmp726(((panda$collections$Iterable*) args715));
                    $tmp724 = $tmp728;
                    $tmp723 = $tmp724;
                    Iter$241$17722 = $tmp723;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp723));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
                    $l729:;
                    ITable* $tmp732 = Iter$241$17722->$class->itable;
                    while ($tmp732->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp732 = $tmp732->next;
                    }
                    $fn734 $tmp733 = $tmp732->methods[0];
                    panda$core$Bit $tmp735 = $tmp733(Iter$241$17722);
                    panda$core$Bit $tmp736 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp735);
                    bool $tmp731 = $tmp736.value;
                    if (!$tmp731) goto $l730;
                    {
                        int $tmp739;
                        {
                            ITable* $tmp743 = Iter$241$17722->$class->itable;
                            while ($tmp743->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp743 = $tmp743->next;
                            }
                            $fn745 $tmp744 = $tmp743->methods[1];
                            panda$core$Object* $tmp746 = $tmp744(Iter$241$17722);
                            $tmp742 = $tmp746;
                            $tmp741 = ((org$pandalanguage$pandac$ASTNode*) $tmp742);
                            a740 = $tmp741;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp741));
                            panda$core$Panda$unref$panda$core$Object($tmp742);
                            panda$core$Int64 $tmp747 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a740);
                            panda$core$Int64 $tmp748 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result717, $tmp747);
                            result717 = $tmp748;
                        }
                        $tmp739 = -1;
                        goto $l737;
                        $l737:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a740));
                        a740 = NULL;
                        switch ($tmp739) {
                            case -1: goto $l749;
                        }
                        $l749:;
                    }
                    goto $l729;
                    $l730:;
                }
                $tmp721 = -1;
                goto $l719;
                $l719:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$17722));
                Iter$241$17722 = NULL;
                switch ($tmp721) {
                    case -1: goto $l750;
                }
                $l750:;
            }
            $returnValue644 = result717;
            $tmp637 = 5;
            goto $l635;
            $l751:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp753, 10);
        panda$core$Bit $tmp754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp753);
        if ($tmp754.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp756 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 16));
            base755 = *$tmp756;
            panda$core$Int64 $tmp757 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base755);
            $returnValue644 = $tmp757;
            $tmp637 = 6;
            goto $l635;
            $l758:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp760, 12);
        panda$core$Bit $tmp761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp760);
        if ($tmp761.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp762, 1);
            $returnValue644 = $tmp762;
            $tmp637 = 7;
            goto $l635;
            $l763:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp765, 13);
        panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp765);
        if ($tmp766.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp768 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 24));
            value767 = *$tmp768;
            if (((panda$core$Bit) { value767 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp769, 0);
                $returnValue644 = $tmp769;
                $tmp637 = 8;
                goto $l635;
                $l770:;
                return $returnValue644;
            }
            }
            panda$core$Int64 $tmp772 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value767);
            $returnValue644 = $tmp772;
            $tmp637 = 9;
            goto $l635;
            $l773:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp775, 14);
        panda$core$Bit $tmp776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp775);
        if ($tmp776.value) {
        {
            panda$collections$ImmutableArray** $tmp778 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 24));
            statements777 = *$tmp778;
            org$pandalanguage$pandac$ASTNode** $tmp780 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 32));
            test779 = *$tmp780;
            panda$core$Int64 $tmp782 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test779);
            result781 = $tmp782;
            {
                int $tmp785;
                {
                    ITable* $tmp789 = ((panda$collections$Iterable*) statements777)->$class->itable;
                    while ($tmp789->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp789 = $tmp789->next;
                    }
                    $fn791 $tmp790 = $tmp789->methods[0];
                    panda$collections$Iterator* $tmp792 = $tmp790(((panda$collections$Iterable*) statements777));
                    $tmp788 = $tmp792;
                    $tmp787 = $tmp788;
                    Iter$256$17786 = $tmp787;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp787));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp788));
                    $l793:;
                    ITable* $tmp796 = Iter$256$17786->$class->itable;
                    while ($tmp796->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp796 = $tmp796->next;
                    }
                    $fn798 $tmp797 = $tmp796->methods[0];
                    panda$core$Bit $tmp799 = $tmp797(Iter$256$17786);
                    panda$core$Bit $tmp800 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp799);
                    bool $tmp795 = $tmp800.value;
                    if (!$tmp795) goto $l794;
                    {
                        int $tmp803;
                        {
                            ITable* $tmp807 = Iter$256$17786->$class->itable;
                            while ($tmp807->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp807 = $tmp807->next;
                            }
                            $fn809 $tmp808 = $tmp807->methods[1];
                            panda$core$Object* $tmp810 = $tmp808(Iter$256$17786);
                            $tmp806 = $tmp810;
                            $tmp805 = ((org$pandalanguage$pandac$ASTNode*) $tmp806);
                            s804 = $tmp805;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp805));
                            panda$core$Panda$unref$panda$core$Object($tmp806);
                            panda$core$Int64 $tmp811 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s804);
                            panda$core$Int64 $tmp812 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result781, $tmp811);
                            result781 = $tmp812;
                        }
                        $tmp803 = -1;
                        goto $l801;
                        $l801:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s804));
                        s804 = NULL;
                        switch ($tmp803) {
                            case -1: goto $l813;
                        }
                        $l813:;
                    }
                    goto $l793;
                    $l794:;
                }
                $tmp785 = -1;
                goto $l783;
                $l783:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$256$17786));
                Iter$256$17786 = NULL;
                switch ($tmp785) {
                    case -1: goto $l814;
                }
                $l814:;
            }
            $returnValue644 = result781;
            $tmp637 = 10;
            goto $l635;
            $l815:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp817, 15);
        panda$core$Bit $tmp818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp817);
        if ($tmp818.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp820 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 16));
            base819 = *$tmp820;
            panda$core$Int64 $tmp821 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base819);
            $returnValue644 = $tmp821;
            $tmp637 = 11;
            goto $l635;
            $l822:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp824, 18);
        panda$core$Bit $tmp825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp824);
        if ($tmp825.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp827 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 32));
            list826 = *$tmp827;
            panda$collections$ImmutableArray** $tmp829 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 40));
            statements828 = *$tmp829;
            panda$core$Int64 $tmp831 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list826);
            result830 = $tmp831;
            {
                int $tmp834;
                {
                    ITable* $tmp838 = ((panda$collections$Iterable*) statements828)->$class->itable;
                    while ($tmp838->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp838 = $tmp838->next;
                    }
                    $fn840 $tmp839 = $tmp838->methods[0];
                    panda$collections$Iterator* $tmp841 = $tmp839(((panda$collections$Iterable*) statements828));
                    $tmp837 = $tmp841;
                    $tmp836 = $tmp837;
                    Iter$264$17835 = $tmp836;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp836));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp837));
                    $l842:;
                    ITable* $tmp845 = Iter$264$17835->$class->itable;
                    while ($tmp845->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp845 = $tmp845->next;
                    }
                    $fn847 $tmp846 = $tmp845->methods[0];
                    panda$core$Bit $tmp848 = $tmp846(Iter$264$17835);
                    panda$core$Bit $tmp849 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp848);
                    bool $tmp844 = $tmp849.value;
                    if (!$tmp844) goto $l843;
                    {
                        int $tmp852;
                        {
                            ITable* $tmp856 = Iter$264$17835->$class->itable;
                            while ($tmp856->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp856 = $tmp856->next;
                            }
                            $fn858 $tmp857 = $tmp856->methods[1];
                            panda$core$Object* $tmp859 = $tmp857(Iter$264$17835);
                            $tmp855 = $tmp859;
                            $tmp854 = ((org$pandalanguage$pandac$ASTNode*) $tmp855);
                            s853 = $tmp854;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp854));
                            panda$core$Panda$unref$panda$core$Object($tmp855);
                            panda$core$Int64 $tmp860 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s853);
                            panda$core$Int64 $tmp861 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result830, $tmp860);
                            result830 = $tmp861;
                        }
                        $tmp852 = -1;
                        goto $l850;
                        $l850:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s853));
                        s853 = NULL;
                        switch ($tmp852) {
                            case -1: goto $l862;
                        }
                        $l862:;
                    }
                    goto $l842;
                    $l843:;
                }
                $tmp834 = -1;
                goto $l832;
                $l832:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$264$17835));
                Iter$264$17835 = NULL;
                switch ($tmp834) {
                    case -1: goto $l863;
                }
                $l863:;
            }
            $returnValue644 = result830;
            $tmp637 = 12;
            goto $l635;
            $l864:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp866, 19);
        panda$core$Bit $tmp867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp866);
        if ($tmp867.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp868, 0);
            $returnValue644 = $tmp868;
            $tmp637 = 13;
            goto $l635;
            $l869:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp871, 20);
        panda$core$Bit $tmp872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp871);
        if ($tmp872.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp873, 1);
            $returnValue644 = $tmp873;
            $tmp637 = 14;
            goto $l635;
            $l874:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp876, 21);
        panda$core$Bit $tmp877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp876);
        if ($tmp877.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp879 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 16));
            test878 = *$tmp879;
            panda$collections$ImmutableArray** $tmp881 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 24));
            ifTrue880 = *$tmp881;
            org$pandalanguage$pandac$ASTNode** $tmp883 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 32));
            ifFalse882 = *$tmp883;
            panda$core$Int64 $tmp885 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test878);
            result884 = $tmp885;
            {
                int $tmp888;
                {
                    ITable* $tmp892 = ((panda$collections$Iterable*) ifTrue880)->$class->itable;
                    while ($tmp892->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp892 = $tmp892->next;
                    }
                    $fn894 $tmp893 = $tmp892->methods[0];
                    panda$collections$Iterator* $tmp895 = $tmp893(((panda$collections$Iterable*) ifTrue880));
                    $tmp891 = $tmp895;
                    $tmp890 = $tmp891;
                    Iter$274$17889 = $tmp890;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp890));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp891));
                    $l896:;
                    ITable* $tmp899 = Iter$274$17889->$class->itable;
                    while ($tmp899->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp899 = $tmp899->next;
                    }
                    $fn901 $tmp900 = $tmp899->methods[0];
                    panda$core$Bit $tmp902 = $tmp900(Iter$274$17889);
                    panda$core$Bit $tmp903 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp902);
                    bool $tmp898 = $tmp903.value;
                    if (!$tmp898) goto $l897;
                    {
                        int $tmp906;
                        {
                            ITable* $tmp910 = Iter$274$17889->$class->itable;
                            while ($tmp910->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp910 = $tmp910->next;
                            }
                            $fn912 $tmp911 = $tmp910->methods[1];
                            panda$core$Object* $tmp913 = $tmp911(Iter$274$17889);
                            $tmp909 = $tmp913;
                            $tmp908 = ((org$pandalanguage$pandac$ASTNode*) $tmp909);
                            s907 = $tmp908;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp908));
                            panda$core$Panda$unref$panda$core$Object($tmp909);
                            panda$core$Int64 $tmp914 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s907);
                            panda$core$Int64 $tmp915 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result884, $tmp914);
                            result884 = $tmp915;
                        }
                        $tmp906 = -1;
                        goto $l904;
                        $l904:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s907));
                        s907 = NULL;
                        switch ($tmp906) {
                            case -1: goto $l916;
                        }
                        $l916:;
                    }
                    goto $l896;
                    $l897:;
                }
                $tmp888 = -1;
                goto $l886;
                $l886:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$274$17889));
                Iter$274$17889 = NULL;
                switch ($tmp888) {
                    case -1: goto $l917;
                }
                $l917:;
            }
            if (((panda$core$Bit) { ifFalse882 != NULL }).value) {
            {
                panda$core$Int64 $tmp918 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse882);
                panda$core$Int64 $tmp919 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result884, $tmp918);
                result884 = $tmp919;
            }
            }
            $returnValue644 = result884;
            $tmp637 = 15;
            goto $l635;
            $l920:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp922, 22);
        panda$core$Bit $tmp923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp922);
        if ($tmp923.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp924, 1);
            $returnValue644 = $tmp924;
            $tmp637 = 16;
            goto $l635;
            $l925:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp927, 24);
        panda$core$Bit $tmp928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp927);
        if ($tmp928.value) {
        {
            panda$collections$ImmutableArray** $tmp930 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 24));
            statements929 = *$tmp930;
            panda$core$Int64$init$builtin_int64(&$tmp932, 0);
            result931 = $tmp932;
            {
                int $tmp935;
                {
                    ITable* $tmp939 = ((panda$collections$Iterable*) statements929)->$class->itable;
                    while ($tmp939->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp939 = $tmp939->next;
                    }
                    $fn941 $tmp940 = $tmp939->methods[0];
                    panda$collections$Iterator* $tmp942 = $tmp940(((panda$collections$Iterable*) statements929));
                    $tmp938 = $tmp942;
                    $tmp937 = $tmp938;
                    Iter$285$17936 = $tmp937;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp937));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp938));
                    $l943:;
                    ITable* $tmp946 = Iter$285$17936->$class->itable;
                    while ($tmp946->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp946 = $tmp946->next;
                    }
                    $fn948 $tmp947 = $tmp946->methods[0];
                    panda$core$Bit $tmp949 = $tmp947(Iter$285$17936);
                    panda$core$Bit $tmp950 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp949);
                    bool $tmp945 = $tmp950.value;
                    if (!$tmp945) goto $l944;
                    {
                        int $tmp953;
                        {
                            ITable* $tmp957 = Iter$285$17936->$class->itable;
                            while ($tmp957->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp957 = $tmp957->next;
                            }
                            $fn959 $tmp958 = $tmp957->methods[1];
                            panda$core$Object* $tmp960 = $tmp958(Iter$285$17936);
                            $tmp956 = $tmp960;
                            $tmp955 = ((org$pandalanguage$pandac$ASTNode*) $tmp956);
                            s954 = $tmp955;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp955));
                            panda$core$Panda$unref$panda$core$Object($tmp956);
                            panda$core$Int64 $tmp961 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s954);
                            panda$core$Int64 $tmp962 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result931, $tmp961);
                            result931 = $tmp962;
                        }
                        $tmp953 = -1;
                        goto $l951;
                        $l951:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s954));
                        s954 = NULL;
                        switch ($tmp953) {
                            case -1: goto $l963;
                        }
                        $l963:;
                    }
                    goto $l943;
                    $l944:;
                }
                $tmp935 = -1;
                goto $l933;
                $l933:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$285$17936));
                Iter$285$17936 = NULL;
                switch ($tmp935) {
                    case -1: goto $l964;
                }
                $l964:;
            }
            $returnValue644 = result931;
            $tmp637 = 17;
            goto $l635;
            $l965:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp967, 25);
        panda$core$Bit $tmp968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp967);
        if ($tmp968.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp970 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 16));
            value969 = *$tmp970;
            panda$collections$ImmutableArray** $tmp972 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 24));
            whens971 = *$tmp972;
            panda$collections$ImmutableArray** $tmp974 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 32));
            other973 = *$tmp974;
            panda$core$Int64 $tmp976 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value969);
            result975 = $tmp976;
            {
                int $tmp979;
                {
                    ITable* $tmp983 = ((panda$collections$Iterable*) whens971)->$class->itable;
                    while ($tmp983->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp983 = $tmp983->next;
                    }
                    $fn985 $tmp984 = $tmp983->methods[0];
                    panda$collections$Iterator* $tmp986 = $tmp984(((panda$collections$Iterable*) whens971));
                    $tmp982 = $tmp986;
                    $tmp981 = $tmp982;
                    Iter$291$17980 = $tmp981;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp981));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp982));
                    $l987:;
                    ITable* $tmp990 = Iter$291$17980->$class->itable;
                    while ($tmp990->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp990 = $tmp990->next;
                    }
                    $fn992 $tmp991 = $tmp990->methods[0];
                    panda$core$Bit $tmp993 = $tmp991(Iter$291$17980);
                    panda$core$Bit $tmp994 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp993);
                    bool $tmp989 = $tmp994.value;
                    if (!$tmp989) goto $l988;
                    {
                        int $tmp997;
                        {
                            ITable* $tmp1001 = Iter$291$17980->$class->itable;
                            while ($tmp1001->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1001 = $tmp1001->next;
                            }
                            $fn1003 $tmp1002 = $tmp1001->methods[1];
                            panda$core$Object* $tmp1004 = $tmp1002(Iter$291$17980);
                            $tmp1000 = $tmp1004;
                            $tmp999 = ((org$pandalanguage$pandac$ASTNode*) $tmp1000);
                            w998 = $tmp999;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp999));
                            panda$core$Panda$unref$panda$core$Object($tmp1000);
                            panda$core$Int64 $tmp1005 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w998);
                            panda$core$Int64 $tmp1006 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result975, $tmp1005);
                            result975 = $tmp1006;
                        }
                        $tmp997 = -1;
                        goto $l995;
                        $l995:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w998));
                        w998 = NULL;
                        switch ($tmp997) {
                            case -1: goto $l1007;
                        }
                        $l1007:;
                    }
                    goto $l987;
                    $l988:;
                }
                $tmp979 = -1;
                goto $l977;
                $l977:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$291$17980));
                Iter$291$17980 = NULL;
                switch ($tmp979) {
                    case -1: goto $l1008;
                }
                $l1008:;
            }
            if (((panda$core$Bit) { other973 != NULL }).value) {
            {
                {
                    int $tmp1011;
                    {
                        ITable* $tmp1015 = ((panda$collections$Iterable*) other973)->$class->itable;
                        while ($tmp1015->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1015 = $tmp1015->next;
                        }
                        $fn1017 $tmp1016 = $tmp1015->methods[0];
                        panda$collections$Iterator* $tmp1018 = $tmp1016(((panda$collections$Iterable*) other973));
                        $tmp1014 = $tmp1018;
                        $tmp1013 = $tmp1014;
                        Iter$295$211012 = $tmp1013;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1013));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1014));
                        $l1019:;
                        ITable* $tmp1022 = Iter$295$211012->$class->itable;
                        while ($tmp1022->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1022 = $tmp1022->next;
                        }
                        $fn1024 $tmp1023 = $tmp1022->methods[0];
                        panda$core$Bit $tmp1025 = $tmp1023(Iter$295$211012);
                        panda$core$Bit $tmp1026 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1025);
                        bool $tmp1021 = $tmp1026.value;
                        if (!$tmp1021) goto $l1020;
                        {
                            int $tmp1029;
                            {
                                ITable* $tmp1033 = Iter$295$211012->$class->itable;
                                while ($tmp1033->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1033 = $tmp1033->next;
                                }
                                $fn1035 $tmp1034 = $tmp1033->methods[1];
                                panda$core$Object* $tmp1036 = $tmp1034(Iter$295$211012);
                                $tmp1032 = $tmp1036;
                                $tmp1031 = ((org$pandalanguage$pandac$ASTNode*) $tmp1032);
                                s1030 = $tmp1031;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1031));
                                panda$core$Panda$unref$panda$core$Object($tmp1032);
                                panda$core$Int64 $tmp1037 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1030);
                                panda$core$Int64 $tmp1038 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result975, $tmp1037);
                                result975 = $tmp1038;
                            }
                            $tmp1029 = -1;
                            goto $l1027;
                            $l1027:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1030));
                            s1030 = NULL;
                            switch ($tmp1029) {
                                case -1: goto $l1039;
                            }
                            $l1039:;
                        }
                        goto $l1019;
                        $l1020:;
                    }
                    $tmp1011 = -1;
                    goto $l1009;
                    $l1009:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$295$211012));
                    Iter$295$211012 = NULL;
                    switch ($tmp1011) {
                        case -1: goto $l1040;
                    }
                    $l1040:;
                }
            }
            }
            $returnValue644 = result975;
            $tmp637 = 18;
            goto $l635;
            $l1041:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1043, 26);
        panda$core$Bit $tmp1044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1043);
        if ($tmp1044.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1045, 10);
            $returnValue644 = $tmp1045;
            $tmp637 = 19;
            goto $l635;
            $l1046:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1048, 28);
        panda$core$Bit $tmp1049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1048);
        if ($tmp1049.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1050, 1);
            $returnValue644 = $tmp1050;
            $tmp637 = 20;
            goto $l635;
            $l1051:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1053, 29);
        panda$core$Bit $tmp1054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1053);
        if ($tmp1054.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1055, 0);
            $returnValue644 = $tmp1055;
            $tmp637 = 21;
            goto $l635;
            $l1056:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1058, 32);
        panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1058);
        if ($tmp1059.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1061 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 24));
            base1060 = *$tmp1061;
            panda$core$Int64$init$builtin_int64(&$tmp1062, 1);
            panda$core$Int64 $tmp1063 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base1060);
            panda$core$Int64 $tmp1064 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1062, $tmp1063);
            $returnValue644 = $tmp1064;
            $tmp637 = 22;
            goto $l635;
            $l1065:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1067, 33);
        panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1067);
        if ($tmp1068.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1069, 1);
            $returnValue644 = $tmp1069;
            $tmp637 = 23;
            goto $l635;
            $l1070:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1072, 34);
        panda$core$Bit $tmp1073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1072);
        if ($tmp1073.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1074, 1);
            $returnValue644 = $tmp1074;
            $tmp637 = 24;
            goto $l635;
            $l1075:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1077, 35);
        panda$core$Bit $tmp1078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1077);
        if ($tmp1078.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1079, 1);
            $returnValue644 = $tmp1079;
            $tmp637 = 25;
            goto $l635;
            $l1080:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1082, 36);
        panda$core$Bit $tmp1083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1082);
        if ($tmp1083.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1085 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 16));
            value1084 = *$tmp1085;
            if (((panda$core$Bit) { value1084 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp1086, 0);
                $returnValue644 = $tmp1086;
                $tmp637 = 26;
                goto $l635;
                $l1087:;
                return $returnValue644;
            }
            }
            panda$core$Int64 $tmp1089 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value1084);
            $returnValue644 = $tmp1089;
            $tmp637 = 27;
            goto $l635;
            $l1090:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1092, 37);
        panda$core$Bit $tmp1093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1092);
        if ($tmp1093.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1094, 1);
            $returnValue644 = $tmp1094;
            $tmp637 = 28;
            goto $l635;
            $l1095:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1097, 38);
        panda$core$Bit $tmp1098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1097);
        if ($tmp1098.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1099, 1);
            $returnValue644 = $tmp1099;
            $tmp637 = 29;
            goto $l635;
            $l1100:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1102, 39);
        panda$core$Bit $tmp1103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1102);
        if ($tmp1103.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1104, 1);
            $returnValue644 = $tmp1104;
            $tmp637 = 30;
            goto $l635;
            $l1105:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1107, 42);
        panda$core$Bit $tmp1108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1107);
        if ($tmp1108.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1109, 0);
            $returnValue644 = $tmp1109;
            $tmp637 = 31;
            goto $l635;
            $l1110:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1112, 43);
        panda$core$Bit $tmp1113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1112);
        if ($tmp1113.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1114, 10);
            $returnValue644 = $tmp1114;
            $tmp637 = 32;
            goto $l635;
            $l1115:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1117, 45);
        panda$core$Bit $tmp1118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1117);
        if ($tmp1118.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1119, 10);
            $returnValue644 = $tmp1119;
            $tmp637 = 33;
            goto $l635;
            $l1120:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1122, 47);
        panda$core$Bit $tmp1123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1122);
        if ($tmp1123.value) {
        {
            panda$collections$ImmutableArray** $tmp1125 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 24));
            decls1124 = *$tmp1125;
            panda$core$Int64$init$builtin_int64(&$tmp1127, 0);
            result1126 = $tmp1127;
            {
                int $tmp1130;
                {
                    ITable* $tmp1134 = ((panda$collections$Iterable*) decls1124)->$class->itable;
                    while ($tmp1134->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1134 = $tmp1134->next;
                    }
                    $fn1136 $tmp1135 = $tmp1134->methods[0];
                    panda$collections$Iterator* $tmp1137 = $tmp1135(((panda$collections$Iterable*) decls1124));
                    $tmp1133 = $tmp1137;
                    $tmp1132 = $tmp1133;
                    Iter$333$171131 = $tmp1132;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1132));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1133));
                    $l1138:;
                    ITable* $tmp1141 = Iter$333$171131->$class->itable;
                    while ($tmp1141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1141 = $tmp1141->next;
                    }
                    $fn1143 $tmp1142 = $tmp1141->methods[0];
                    panda$core$Bit $tmp1144 = $tmp1142(Iter$333$171131);
                    panda$core$Bit $tmp1145 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1144);
                    bool $tmp1140 = $tmp1145.value;
                    if (!$tmp1140) goto $l1139;
                    {
                        int $tmp1148;
                        {
                            ITable* $tmp1152 = Iter$333$171131->$class->itable;
                            while ($tmp1152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1152 = $tmp1152->next;
                            }
                            $fn1154 $tmp1153 = $tmp1152->methods[1];
                            panda$core$Object* $tmp1155 = $tmp1153(Iter$333$171131);
                            $tmp1151 = $tmp1155;
                            $tmp1150 = ((org$pandalanguage$pandac$ASTNode*) $tmp1151);
                            decl1149 = $tmp1150;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1150));
                            panda$core$Panda$unref$panda$core$Object($tmp1151);
                            panda$core$Int64 $tmp1156 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl1149);
                            panda$core$Int64 $tmp1157 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1126, $tmp1156);
                            result1126 = $tmp1157;
                        }
                        $tmp1148 = -1;
                        goto $l1146;
                        $l1146:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1149));
                        decl1149 = NULL;
                        switch ($tmp1148) {
                            case -1: goto $l1158;
                        }
                        $l1158:;
                    }
                    goto $l1138;
                    $l1139:;
                }
                $tmp1130 = -1;
                goto $l1128;
                $l1128:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$333$171131));
                Iter$333$171131 = NULL;
                switch ($tmp1130) {
                    case -1: goto $l1159;
                }
                $l1159:;
            }
            $returnValue644 = result1126;
            $tmp637 = 34;
            goto $l635;
            $l1160:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1162, 48);
        panda$core$Bit $tmp1163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1162);
        if ($tmp1163.value) {
        {
            panda$collections$ImmutableArray** $tmp1165 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 16));
            tests1164 = *$tmp1165;
            panda$collections$ImmutableArray** $tmp1167 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 24));
            statements1166 = *$tmp1167;
            panda$core$Int64$init$builtin_int64(&$tmp1169, 0);
            result1168 = $tmp1169;
            {
                int $tmp1172;
                {
                    ITable* $tmp1176 = ((panda$collections$Iterable*) tests1164)->$class->itable;
                    while ($tmp1176->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1176 = $tmp1176->next;
                    }
                    $fn1178 $tmp1177 = $tmp1176->methods[0];
                    panda$collections$Iterator* $tmp1179 = $tmp1177(((panda$collections$Iterable*) tests1164));
                    $tmp1175 = $tmp1179;
                    $tmp1174 = $tmp1175;
                    Iter$339$171173 = $tmp1174;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1174));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1175));
                    $l1180:;
                    ITable* $tmp1183 = Iter$339$171173->$class->itable;
                    while ($tmp1183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1183 = $tmp1183->next;
                    }
                    $fn1185 $tmp1184 = $tmp1183->methods[0];
                    panda$core$Bit $tmp1186 = $tmp1184(Iter$339$171173);
                    panda$core$Bit $tmp1187 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1186);
                    bool $tmp1182 = $tmp1187.value;
                    if (!$tmp1182) goto $l1181;
                    {
                        int $tmp1190;
                        {
                            ITable* $tmp1194 = Iter$339$171173->$class->itable;
                            while ($tmp1194->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1194 = $tmp1194->next;
                            }
                            $fn1196 $tmp1195 = $tmp1194->methods[1];
                            panda$core$Object* $tmp1197 = $tmp1195(Iter$339$171173);
                            $tmp1193 = $tmp1197;
                            $tmp1192 = ((org$pandalanguage$pandac$ASTNode*) $tmp1193);
                            test1191 = $tmp1192;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1192));
                            panda$core$Panda$unref$panda$core$Object($tmp1193);
                            panda$core$Int64 $tmp1198 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1191);
                            panda$core$Int64 $tmp1199 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1168, $tmp1198);
                            result1168 = $tmp1199;
                        }
                        $tmp1190 = -1;
                        goto $l1188;
                        $l1188:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1191));
                        test1191 = NULL;
                        switch ($tmp1190) {
                            case -1: goto $l1200;
                        }
                        $l1200:;
                    }
                    goto $l1180;
                    $l1181:;
                }
                $tmp1172 = -1;
                goto $l1170;
                $l1170:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$339$171173));
                Iter$339$171173 = NULL;
                switch ($tmp1172) {
                    case -1: goto $l1201;
                }
                $l1201:;
            }
            {
                int $tmp1204;
                {
                    ITable* $tmp1208 = ((panda$collections$Iterable*) statements1166)->$class->itable;
                    while ($tmp1208->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1208 = $tmp1208->next;
                    }
                    $fn1210 $tmp1209 = $tmp1208->methods[0];
                    panda$collections$Iterator* $tmp1211 = $tmp1209(((panda$collections$Iterable*) statements1166));
                    $tmp1207 = $tmp1211;
                    $tmp1206 = $tmp1207;
                    Iter$342$171205 = $tmp1206;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1206));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1207));
                    $l1212:;
                    ITable* $tmp1215 = Iter$342$171205->$class->itable;
                    while ($tmp1215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1215 = $tmp1215->next;
                    }
                    $fn1217 $tmp1216 = $tmp1215->methods[0];
                    panda$core$Bit $tmp1218 = $tmp1216(Iter$342$171205);
                    panda$core$Bit $tmp1219 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1218);
                    bool $tmp1214 = $tmp1219.value;
                    if (!$tmp1214) goto $l1213;
                    {
                        int $tmp1222;
                        {
                            ITable* $tmp1226 = Iter$342$171205->$class->itable;
                            while ($tmp1226->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1226 = $tmp1226->next;
                            }
                            $fn1228 $tmp1227 = $tmp1226->methods[1];
                            panda$core$Object* $tmp1229 = $tmp1227(Iter$342$171205);
                            $tmp1225 = $tmp1229;
                            $tmp1224 = ((org$pandalanguage$pandac$ASTNode*) $tmp1225);
                            s1223 = $tmp1224;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1224));
                            panda$core$Panda$unref$panda$core$Object($tmp1225);
                            panda$core$Int64 $tmp1230 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1223);
                            panda$core$Int64 $tmp1231 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1168, $tmp1230);
                            result1168 = $tmp1231;
                        }
                        $tmp1222 = -1;
                        goto $l1220;
                        $l1220:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1223));
                        s1223 = NULL;
                        switch ($tmp1222) {
                            case -1: goto $l1232;
                        }
                        $l1232:;
                    }
                    goto $l1212;
                    $l1213:;
                }
                $tmp1204 = -1;
                goto $l1202;
                $l1202:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$342$171205));
                Iter$342$171205 = NULL;
                switch ($tmp1204) {
                    case -1: goto $l1233;
                }
                $l1233:;
            }
            $returnValue644 = result1168;
            $tmp637 = 35;
            goto $l635;
            $l1234:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1236, 49);
        panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1236);
        if ($tmp1237.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1239 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 24));
            test1238 = *$tmp1239;
            panda$collections$ImmutableArray** $tmp1241 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 32));
            statements1240 = *$tmp1241;
            panda$core$Int64 $tmp1243 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1238);
            result1242 = $tmp1243;
            {
                int $tmp1246;
                {
                    ITable* $tmp1250 = ((panda$collections$Iterable*) statements1240)->$class->itable;
                    while ($tmp1250->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1250 = $tmp1250->next;
                    }
                    $fn1252 $tmp1251 = $tmp1250->methods[0];
                    panda$collections$Iterator* $tmp1253 = $tmp1251(((panda$collections$Iterable*) statements1240));
                    $tmp1249 = $tmp1253;
                    $tmp1248 = $tmp1249;
                    Iter$348$171247 = $tmp1248;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1248));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1249));
                    $l1254:;
                    ITable* $tmp1257 = Iter$348$171247->$class->itable;
                    while ($tmp1257->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1257 = $tmp1257->next;
                    }
                    $fn1259 $tmp1258 = $tmp1257->methods[0];
                    panda$core$Bit $tmp1260 = $tmp1258(Iter$348$171247);
                    panda$core$Bit $tmp1261 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1260);
                    bool $tmp1256 = $tmp1261.value;
                    if (!$tmp1256) goto $l1255;
                    {
                        int $tmp1264;
                        {
                            ITable* $tmp1268 = Iter$348$171247->$class->itable;
                            while ($tmp1268->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1268 = $tmp1268->next;
                            }
                            $fn1270 $tmp1269 = $tmp1268->methods[1];
                            panda$core$Object* $tmp1271 = $tmp1269(Iter$348$171247);
                            $tmp1267 = $tmp1271;
                            $tmp1266 = ((org$pandalanguage$pandac$ASTNode*) $tmp1267);
                            s1265 = $tmp1266;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1266));
                            panda$core$Panda$unref$panda$core$Object($tmp1267);
                            panda$core$Int64 $tmp1272 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1265);
                            panda$core$Int64 $tmp1273 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1242, $tmp1272);
                            result1242 = $tmp1273;
                        }
                        $tmp1264 = -1;
                        goto $l1262;
                        $l1262:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1265));
                        s1265 = NULL;
                        switch ($tmp1264) {
                            case -1: goto $l1274;
                        }
                        $l1274:;
                    }
                    goto $l1254;
                    $l1255:;
                }
                $tmp1246 = -1;
                goto $l1244;
                $l1244:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$348$171247));
                Iter$348$171247 = NULL;
                switch ($tmp1246) {
                    case -1: goto $l1275;
                }
                $l1275:;
            }
            $returnValue644 = result1242;
            $tmp637 = 36;
            goto $l635;
            $l1276:;
            return $returnValue644;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1278, false);
            if ($tmp1278.value) goto $l1279; else goto $l1280;
            $l1280:;
            panda$core$String* $tmp1285 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1284, ((panda$core$Object*) p_node));
            $tmp1283 = $tmp1285;
            panda$core$String* $tmp1287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1283, &$s1286);
            $tmp1282 = $tmp1287;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1281, (panda$core$Int64) { 353 }, $tmp1282);
            abort();
            $l1279:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp637 = -1;
    goto $l635;
    $l635:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
    switch ($tmp637) {
        case 25: goto $l1080;
        case 24: goto $l1075;
        case 15: goto $l920;
        case 18: goto $l1041;
        case 19: goto $l1046;
        case 8: goto $l770;
        case 2: goto $l664;
        case 34: goto $l1160;
        case 4: goto $l709;
        case 31: goto $l1110;
        case 11: goto $l822;
        case 10: goto $l815;
        case 21: goto $l1056;
        case 3: goto $l704;
        case 0: goto $l646;
        case 22: goto $l1065;
        case 9: goto $l773;
        case 33: goto $l1120;
        case 12: goto $l864;
        case 16: goto $l925;
        case 13: goto $l869;
        case 26: goto $l1087;
        case 28: goto $l1095;
        case 35: goto $l1234;
        case 5: goto $l751;
        case 30: goto $l1105;
        case 29: goto $l1100;
        case 23: goto $l1070;
        case 32: goto $l1115;
        case 6: goto $l758;
        case 17: goto $l965;
        case 20: goto $l1051;
        case 7: goto $l763;
        case 14: goto $l874;
        case -1: goto $l1288;
        case 1: goto $l659;
        case 36: goto $l1276;
        case 27: goto $l1090;
    }
    $l1288:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1291;
    panda$core$Int64 $tmp1293;
    panda$core$Int64 c1302;
    panda$core$Int64 $tmp1303;
    panda$collections$Iterator* Iter$361$131307 = NULL;
    panda$collections$Iterator* $tmp1308;
    panda$collections$Iterator* $tmp1309;
    org$pandalanguage$pandac$ASTNode* s1325 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1326;
    panda$core$Object* $tmp1327;
    panda$core$Int64 $tmp1334;
    panda$core$Bit $returnValue1336;
    panda$core$Bit $tmp1337;
    panda$core$Bit $tmp1343;
    panda$core$Bit $tmp1345;
    panda$core$Object* $tmp1292 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp1291 = $tmp1292;
    panda$core$Int64$init$builtin_int64(&$tmp1293, 0);
    panda$core$Bit $tmp1294 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1291)->settings->optimizationLevel, $tmp1293);
    bool $tmp1290 = $tmp1294.value;
    panda$core$Panda$unref$panda$core$Object($tmp1291);
    if (!$tmp1290) goto $l1295;
    panda$core$Bit $tmp1296 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1297 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1296);
    $tmp1290 = $tmp1297.value;
    $l1295:;
    panda$core$Bit $tmp1298 = { $tmp1290 };
    bool $tmp1289 = $tmp1298.value;
    if (!$tmp1289) goto $l1299;
    panda$core$Bit $tmp1300 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1289 = $tmp1300.value;
    $l1299:;
    panda$core$Bit $tmp1301 = { $tmp1289 };
    if ($tmp1301.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1303, 0);
        c1302 = $tmp1303;
        {
            int $tmp1306;
            {
                ITable* $tmp1310 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1310->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1310 = $tmp1310->next;
                }
                $fn1312 $tmp1311 = $tmp1310->methods[0];
                panda$collections$Iterator* $tmp1313 = $tmp1311(((panda$collections$Iterable*) p_statements));
                $tmp1309 = $tmp1313;
                $tmp1308 = $tmp1309;
                Iter$361$131307 = $tmp1308;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1308));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1309));
                $l1314:;
                ITable* $tmp1317 = Iter$361$131307->$class->itable;
                while ($tmp1317->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1317 = $tmp1317->next;
                }
                $fn1319 $tmp1318 = $tmp1317->methods[0];
                panda$core$Bit $tmp1320 = $tmp1318(Iter$361$131307);
                panda$core$Bit $tmp1321 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1320);
                bool $tmp1316 = $tmp1321.value;
                if (!$tmp1316) goto $l1315;
                {
                    int $tmp1324;
                    {
                        ITable* $tmp1328 = Iter$361$131307->$class->itable;
                        while ($tmp1328->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1328 = $tmp1328->next;
                        }
                        $fn1330 $tmp1329 = $tmp1328->methods[1];
                        panda$core$Object* $tmp1331 = $tmp1329(Iter$361$131307);
                        $tmp1327 = $tmp1331;
                        $tmp1326 = ((org$pandalanguage$pandac$ASTNode*) $tmp1327);
                        s1325 = $tmp1326;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1326));
                        panda$core$Panda$unref$panda$core$Object($tmp1327);
                        panda$core$Int64 $tmp1332 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1325);
                        panda$core$Int64 $tmp1333 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1302, $tmp1332);
                        c1302 = $tmp1333;
                        panda$core$Int64$init$builtin_int64(&$tmp1334, 10);
                        panda$core$Bit $tmp1335 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1302, $tmp1334);
                        if ($tmp1335.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp1337, false);
                            $returnValue1336 = $tmp1337;
                            $tmp1324 = 0;
                            goto $l1322;
                            $l1338:;
                            $tmp1306 = 0;
                            goto $l1304;
                            $l1339:;
                            return $returnValue1336;
                        }
                        }
                    }
                    $tmp1324 = -1;
                    goto $l1322;
                    $l1322:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1325));
                    s1325 = NULL;
                    switch ($tmp1324) {
                        case -1: goto $l1341;
                        case 0: goto $l1338;
                    }
                    $l1341:;
                }
                goto $l1314;
                $l1315:;
            }
            $tmp1306 = -1;
            goto $l1304;
            $l1304:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$361$131307));
            Iter$361$131307 = NULL;
            switch ($tmp1306) {
                case 0: goto $l1339;
                case -1: goto $l1342;
            }
            $l1342:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp1343, true);
        $returnValue1336 = $tmp1343;
        return $returnValue1336;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1345, false);
    $returnValue1336 = $tmp1345;
    return $returnValue1336;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawGenerics, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1350 = NULL;
    panda$core$String* $tmp1351;
    panda$core$String* $tmp1352;
    org$pandalanguage$pandac$ASTNode* $match$382_131356 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1357;
    panda$core$Int64 $tmp1358;
    org$pandalanguage$pandac$Position position1360;
    panda$core$String* text1362 = NULL;
    panda$core$String* $tmp1364;
    panda$core$String* $tmp1365;
    panda$core$Bit $tmp1366;
    org$pandalanguage$pandac$Annotations* annotations1371 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1372;
    org$pandalanguage$pandac$Annotations* $tmp1373;
    panda$core$Int64 $tmp1377;
    panda$core$Int64 $tmp1385;
    panda$collections$Array* generics1387 = NULL;
    panda$collections$Array* $tmp1391;
    panda$collections$Array* $tmp1392;
    panda$collections$Array* $tmp1393;
    panda$core$String* fullName1395 = NULL;
    panda$core$String* $tmp1396;
    panda$core$String* $tmp1397;
    panda$core$String* $tmp1398;
    panda$core$String* $tmp1399;
    panda$core$String* $tmp1400;
    panda$collections$Iterator* Iter$397$131410 = NULL;
    panda$collections$Iterator* $tmp1411;
    panda$collections$Iterator* $tmp1412;
    org$pandalanguage$pandac$ASTNode* p1428 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1429;
    panda$core$Object* $tmp1430;
    panda$core$String* parameterName1435 = NULL;
    org$pandalanguage$pandac$Type* bound1436 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$400_171440 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1441;
    panda$core$Int64 $tmp1442;
    panda$core$String* id1444 = NULL;
    panda$core$String* $tmp1446;
    panda$core$String* $tmp1447;
    org$pandalanguage$pandac$Type* $tmp1448;
    org$pandalanguage$pandac$Type* $tmp1449;
    org$pandalanguage$pandac$Type* $tmp1450;
    panda$core$Int64 $tmp1452;
    panda$core$String* id1454 = NULL;
    org$pandalanguage$pandac$ASTNode* type1456 = NULL;
    panda$core$String* $tmp1458;
    panda$core$String* $tmp1459;
    org$pandalanguage$pandac$Type* $tmp1460;
    org$pandalanguage$pandac$Type* $tmp1461;
    org$pandalanguage$pandac$Type* $tmp1462;
    panda$core$Bit $tmp1464;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1469;
    panda$collections$Array* $tmp1476;
    panda$collections$Array* $tmp1477;
    panda$collections$Array* parameters1478 = NULL;
    panda$collections$Array* $tmp1479;
    panda$collections$Array* $tmp1480;
    panda$collections$Iterator* Iter$418$91485 = NULL;
    panda$collections$Iterator* $tmp1486;
    panda$collections$Iterator* $tmp1487;
    org$pandalanguage$pandac$ASTNode* p1503 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1504;
    panda$core$Object* $tmp1505;
    org$pandalanguage$pandac$ASTNode* $match$419_131513 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1514;
    panda$core$Int64 $tmp1515;
    panda$core$String* name1517 = NULL;
    org$pandalanguage$pandac$ASTNode* type1519 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1521;
    org$pandalanguage$pandac$Type* $tmp1523;
    panda$core$Bit $tmp1525;
    org$pandalanguage$pandac$Type* returnType1532 = NULL;
    org$pandalanguage$pandac$Type* $tmp1533;
    org$pandalanguage$pandac$Type* $tmp1534;
    org$pandalanguage$pandac$Type* $tmp1535;
    org$pandalanguage$pandac$Type* $tmp1537;
    org$pandalanguage$pandac$Type* $tmp1538;
    org$pandalanguage$pandac$Type* $tmp1539;
    panda$core$Int64 $tmp1542;
    org$pandalanguage$pandac$Type* $tmp1545;
    panda$core$Int64 $tmp1554;
    panda$core$Int64 $tmp1558;
    panda$core$Int64 $tmp1561;
    org$pandalanguage$pandac$MethodDecl* $returnValue1563;
    org$pandalanguage$pandac$MethodDecl* $tmp1564;
    org$pandalanguage$pandac$MethodDecl* $tmp1565;
    int $tmp1349;
    {
        memset(&doccomment1350, 0, sizeof(doccomment1350));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1351 = doccomment1350;
                $tmp1352 = NULL;
                doccomment1350 = $tmp1352;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1352));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1351));
            }
        }
        }
        else {
        {
            int $tmp1355;
            {
                $tmp1357 = p_rawDoccomment;
                $match$382_131356 = $tmp1357;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1357));
                panda$core$Int64$init$builtin_int64(&$tmp1358, 38);
                panda$core$Bit $tmp1359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382_131356->$rawValue, $tmp1358);
                if ($tmp1359.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1361 = ((org$pandalanguage$pandac$Position*) ((char*) $match$382_131356->$data + 0));
                    position1360 = *$tmp1361;
                    panda$core$String** $tmp1363 = ((panda$core$String**) ((char*) $match$382_131356->$data + 16));
                    text1362 = *$tmp1363;
                    {
                        $tmp1364 = doccomment1350;
                        $tmp1365 = text1362;
                        doccomment1350 = $tmp1365;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1365));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1364));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1366, false);
                    if ($tmp1366.value) goto $l1367; else goto $l1368;
                    $l1368:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1369, (panda$core$Int64) { 386 });
                    abort();
                    $l1367:;
                }
                }
            }
            $tmp1355 = -1;
            goto $l1353;
            $l1353:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1357));
            switch ($tmp1355) {
                case -1: goto $l1370;
            }
            $l1370:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1374 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1373 = $tmp1374;
        $tmp1372 = $tmp1373;
        annotations1371 = $tmp1372;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1372));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1373));
        panda$core$Int64$init$builtin_int64(&$tmp1377, 2);
        panda$core$Bit $tmp1378 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1377);
        bool $tmp1376 = $tmp1378.value;
        if (!$tmp1376) goto $l1379;
        panda$core$Bit $tmp1380 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1376 = $tmp1380.value;
        $l1379:;
        panda$core$Bit $tmp1381 = { $tmp1376 };
        bool $tmp1375 = $tmp1381.value;
        if ($tmp1375) goto $l1382;
        panda$core$Bit $tmp1383 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1371);
        $tmp1375 = $tmp1383.value;
        $l1382:;
        panda$core$Bit $tmp1384 = { $tmp1375 };
        if ($tmp1384.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1385, 256);
            panda$core$Int64 $tmp1386 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1371->flags, $tmp1385);
            annotations1371->flags = $tmp1386;
        }
        }
        memset(&generics1387, 0, sizeof(generics1387));
        if (((panda$core$Bit) { p_rawGenerics != NULL }).value) {
        {
            int $tmp1390;
            {
                {
                    $tmp1391 = generics1387;
                    panda$collections$Array* $tmp1394 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1394);
                    $tmp1393 = $tmp1394;
                    $tmp1392 = $tmp1393;
                    generics1387 = $tmp1392;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1392));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1393));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1391));
                }
                panda$core$String* $tmp1401 = panda$core$String$convert$R$panda$core$String(p_owner->name);
                $tmp1400 = $tmp1401;
                panda$core$String* $tmp1403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1400, &$s1402);
                $tmp1399 = $tmp1403;
                panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1399, p_name);
                $tmp1398 = $tmp1404;
                panda$core$String* $tmp1406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1398, &$s1405);
                $tmp1397 = $tmp1406;
                $tmp1396 = $tmp1397;
                fullName1395 = $tmp1396;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1396));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1397));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1398));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1399));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1400));
                {
                    int $tmp1409;
                    {
                        ITable* $tmp1413 = ((panda$collections$Iterable*) p_rawGenerics)->$class->itable;
                        while ($tmp1413->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1413 = $tmp1413->next;
                        }
                        $fn1415 $tmp1414 = $tmp1413->methods[0];
                        panda$collections$Iterator* $tmp1416 = $tmp1414(((panda$collections$Iterable*) p_rawGenerics));
                        $tmp1412 = $tmp1416;
                        $tmp1411 = $tmp1412;
                        Iter$397$131410 = $tmp1411;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1411));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1412));
                        $l1417:;
                        ITable* $tmp1420 = Iter$397$131410->$class->itable;
                        while ($tmp1420->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1420 = $tmp1420->next;
                        }
                        $fn1422 $tmp1421 = $tmp1420->methods[0];
                        panda$core$Bit $tmp1423 = $tmp1421(Iter$397$131410);
                        panda$core$Bit $tmp1424 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1423);
                        bool $tmp1419 = $tmp1424.value;
                        if (!$tmp1419) goto $l1418;
                        {
                            int $tmp1427;
                            {
                                ITable* $tmp1431 = Iter$397$131410->$class->itable;
                                while ($tmp1431->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1431 = $tmp1431->next;
                                }
                                $fn1433 $tmp1432 = $tmp1431->methods[1];
                                panda$core$Object* $tmp1434 = $tmp1432(Iter$397$131410);
                                $tmp1430 = $tmp1434;
                                $tmp1429 = ((org$pandalanguage$pandac$ASTNode*) $tmp1430);
                                p1428 = $tmp1429;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1429));
                                panda$core$Panda$unref$panda$core$Object($tmp1430);
                                memset(&parameterName1435, 0, sizeof(parameterName1435));
                                memset(&bound1436, 0, sizeof(bound1436));
                                int $tmp1439;
                                {
                                    $tmp1441 = p1428;
                                    $match$400_171440 = $tmp1441;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1441));
                                    panda$core$Int64$init$builtin_int64(&$tmp1442, 20);
                                    panda$core$Bit $tmp1443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$400_171440->$rawValue, $tmp1442);
                                    if ($tmp1443.value) {
                                    {
                                        panda$core$String** $tmp1445 = ((panda$core$String**) ((char*) $match$400_171440->$data + 16));
                                        id1444 = *$tmp1445;
                                        {
                                            $tmp1446 = parameterName1435;
                                            $tmp1447 = id1444;
                                            parameterName1435 = $tmp1447;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1447));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1446));
                                        }
                                        {
                                            $tmp1448 = bound1436;
                                            org$pandalanguage$pandac$Type* $tmp1451 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                            $tmp1450 = $tmp1451;
                                            $tmp1449 = $tmp1450;
                                            bound1436 = $tmp1449;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1449));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1450));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1448));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp1452, 44);
                                    panda$core$Bit $tmp1453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$400_171440->$rawValue, $tmp1452);
                                    if ($tmp1453.value) {
                                    {
                                        panda$core$String** $tmp1455 = ((panda$core$String**) ((char*) $match$400_171440->$data + 16));
                                        id1454 = *$tmp1455;
                                        org$pandalanguage$pandac$ASTNode** $tmp1457 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$400_171440->$data + 24));
                                        type1456 = *$tmp1457;
                                        {
                                            $tmp1458 = parameterName1435;
                                            $tmp1459 = id1454;
                                            parameterName1435 = $tmp1459;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1459));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1458));
                                        }
                                        {
                                            $tmp1460 = bound1436;
                                            org$pandalanguage$pandac$Type* $tmp1463 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1456);
                                            $tmp1462 = $tmp1463;
                                            $tmp1461 = $tmp1462;
                                            bound1436 = $tmp1461;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1461));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1462));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1460));
                                        }
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp1464, false);
                                        if ($tmp1464.value) goto $l1465; else goto $l1466;
                                        $l1466:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1467, (panda$core$Int64) { 408 });
                                        abort();
                                        $l1465:;
                                    }
                                    }
                                    }
                                }
                                $tmp1439 = -1;
                                goto $l1437;
                                $l1437:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1441));
                                switch ($tmp1439) {
                                    case -1: goto $l1468;
                                }
                                $l1468:;
                                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1470 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                                org$pandalanguage$pandac$Position $tmp1472 = (($fn1471) p1428->$class->vtable[2])(p1428);
                                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1470, $tmp1472, fullName1395, parameterName1435, bound1436);
                                $tmp1469 = $tmp1470;
                                panda$collections$Array$add$panda$collections$Array$T(generics1387, ((panda$core$Object*) $tmp1469));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1469));
                            }
                            $tmp1427 = -1;
                            goto $l1425;
                            $l1425:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1436));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameterName1435));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1428));
                            p1428 = NULL;
                            switch ($tmp1427) {
                                case -1: goto $l1473;
                            }
                            $l1473:;
                        }
                        goto $l1417;
                        $l1418:;
                    }
                    $tmp1409 = -1;
                    goto $l1407;
                    $l1407:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$397$131410));
                    Iter$397$131410 = NULL;
                    switch ($tmp1409) {
                        case -1: goto $l1474;
                    }
                    $l1474:;
                }
            }
            $tmp1390 = -1;
            goto $l1388;
            $l1388:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1395));
            fullName1395 = NULL;
            switch ($tmp1390) {
                case -1: goto $l1475;
            }
            $l1475:;
        }
        }
        else {
        {
            {
                $tmp1476 = generics1387;
                $tmp1477 = NULL;
                generics1387 = $tmp1477;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1477));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
            }
        }
        }
        panda$collections$Array* $tmp1481 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1481);
        $tmp1480 = $tmp1481;
        $tmp1479 = $tmp1480;
        parameters1478 = $tmp1479;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1479));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1480));
        {
            int $tmp1484;
            {
                ITable* $tmp1488 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1488->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1488 = $tmp1488->next;
                }
                $fn1490 $tmp1489 = $tmp1488->methods[0];
                panda$collections$Iterator* $tmp1491 = $tmp1489(((panda$collections$Iterable*) p_rawParameters));
                $tmp1487 = $tmp1491;
                $tmp1486 = $tmp1487;
                Iter$418$91485 = $tmp1486;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1486));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1487));
                $l1492:;
                ITable* $tmp1495 = Iter$418$91485->$class->itable;
                while ($tmp1495->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1495 = $tmp1495->next;
                }
                $fn1497 $tmp1496 = $tmp1495->methods[0];
                panda$core$Bit $tmp1498 = $tmp1496(Iter$418$91485);
                panda$core$Bit $tmp1499 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1498);
                bool $tmp1494 = $tmp1499.value;
                if (!$tmp1494) goto $l1493;
                {
                    int $tmp1502;
                    {
                        ITable* $tmp1506 = Iter$418$91485->$class->itable;
                        while ($tmp1506->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1506 = $tmp1506->next;
                        }
                        $fn1508 $tmp1507 = $tmp1506->methods[1];
                        panda$core$Object* $tmp1509 = $tmp1507(Iter$418$91485);
                        $tmp1505 = $tmp1509;
                        $tmp1504 = ((org$pandalanguage$pandac$ASTNode*) $tmp1505);
                        p1503 = $tmp1504;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1504));
                        panda$core$Panda$unref$panda$core$Object($tmp1505);
                        int $tmp1512;
                        {
                            $tmp1514 = p1503;
                            $match$419_131513 = $tmp1514;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1514));
                            panda$core$Int64$init$builtin_int64(&$tmp1515, 31);
                            panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$419_131513->$rawValue, $tmp1515);
                            if ($tmp1516.value) {
                            {
                                panda$core$String** $tmp1518 = ((panda$core$String**) ((char*) $match$419_131513->$data + 16));
                                name1517 = *$tmp1518;
                                org$pandalanguage$pandac$ASTNode** $tmp1520 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$419_131513->$data + 24));
                                type1519 = *$tmp1520;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1522 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1524 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1519);
                                $tmp1523 = $tmp1524;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1522, name1517, $tmp1523);
                                $tmp1521 = $tmp1522;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1478, ((panda$core$Object*) $tmp1521));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1521));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1523));
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1525, false);
                                if ($tmp1525.value) goto $l1526; else goto $l1527;
                                $l1527:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1528, (panda$core$Int64) { 423 });
                                abort();
                                $l1526:;
                            }
                            }
                        }
                        $tmp1512 = -1;
                        goto $l1510;
                        $l1510:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1514));
                        switch ($tmp1512) {
                            case -1: goto $l1529;
                        }
                        $l1529:;
                    }
                    $tmp1502 = -1;
                    goto $l1500;
                    $l1500:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1503));
                    p1503 = NULL;
                    switch ($tmp1502) {
                        case -1: goto $l1530;
                    }
                    $l1530:;
                }
                goto $l1492;
                $l1493:;
            }
            $tmp1484 = -1;
            goto $l1482;
            $l1482:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$418$91485));
            Iter$418$91485 = NULL;
            switch ($tmp1484) {
                case -1: goto $l1531;
            }
            $l1531:;
        }
        memset(&returnType1532, 0, sizeof(returnType1532));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1533 = returnType1532;
                org$pandalanguage$pandac$Type* $tmp1536 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1535 = $tmp1536;
                $tmp1534 = $tmp1535;
                returnType1532 = $tmp1534;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1534));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1533));
            }
        }
        }
        else {
        {
            {
                $tmp1537 = returnType1532;
                org$pandalanguage$pandac$Type* $tmp1540 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1539 = $tmp1540;
                $tmp1538 = $tmp1539;
                returnType1532 = $tmp1538;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1538));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1539));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1537));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1542, 1);
        panda$core$Bit $tmp1543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1542);
        bool $tmp1541 = $tmp1543.value;
        if (!$tmp1541) goto $l1544;
        org$pandalanguage$pandac$Type* $tmp1546 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1545 = $tmp1546;
        panda$core$Bit $tmp1547 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1532, $tmp1545);
        $tmp1541 = $tmp1547.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1545));
        $l1544:;
        panda$core$Bit $tmp1548 = { $tmp1541 };
        if ($tmp1548.value) {
        {
            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1549);
        }
        }
        bool $tmp1550 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1550) goto $l1551;
        panda$core$Bit $tmp1552 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1371, p_statements);
        $tmp1550 = $tmp1552.value;
        $l1551:;
        panda$core$Bit $tmp1553 = { $tmp1550 };
        if ($tmp1553.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1554, 1024);
            panda$core$Int64 $tmp1555 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1371->flags, $tmp1554);
            annotations1371->flags = $tmp1555;
        }
        }
        bool $tmp1556 = ((panda$core$Bit) { p_statements == NULL }).value;
        if (!$tmp1556) goto $l1557;
        panda$core$Int64$init$builtin_int64(&$tmp1558, 1);
        panda$core$Bit $tmp1559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, $tmp1558);
        $tmp1556 = $tmp1559.value;
        $l1557:;
        panda$core$Bit $tmp1560 = { $tmp1556 };
        if ($tmp1560.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1561, 512);
            panda$core$Int64 $tmp1562 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1371->flags, $tmp1561);
            annotations1371->flags = $tmp1562;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1566 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1566, p_owner, p_position, doccomment1350, annotations1371, p_kind, p_name, generics1387, parameters1478, returnType1532, p_statements);
        $tmp1565 = $tmp1566;
        $tmp1564 = $tmp1565;
        $returnValue1563 = $tmp1564;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1564));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1565));
        $tmp1349 = 0;
        goto $l1347;
        $l1567:;
        return $returnValue1563;
    }
    $l1347:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1532));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1478));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics1387));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1371));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1350));
    annotations1371 = NULL;
    parameters1478 = NULL;
    switch ($tmp1349) {
        case 0: goto $l1567;
    }
    $l1569:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$447_91573 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1574;
    panda$core$Int64 $tmp1575;
    org$pandalanguage$pandac$Position position1577;
    org$pandalanguage$pandac$ASTNode* dc1579 = NULL;
    panda$collections$ImmutableArray* annotations1581 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1583 = NULL;
    panda$core$Int64 $tmp1585;
    org$pandalanguage$pandac$Position position1587;
    org$pandalanguage$pandac$ASTNode* dc1589 = NULL;
    panda$collections$ImmutableArray* annotations1591 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1593;
    panda$core$String* name1595 = NULL;
    panda$collections$ImmutableArray* generics1597 = NULL;
    panda$collections$ImmutableArray* parameters1599 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1601 = NULL;
    panda$collections$ImmutableArray* statements1603 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1608 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1609;
    org$pandalanguage$pandac$MethodDecl* $tmp1610;
    panda$core$Int64 $tmp1613;
    org$pandalanguage$pandac$Position position1615;
    org$pandalanguage$pandac$ASTNode* dc1617 = NULL;
    panda$collections$ImmutableArray* annotations1619 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1621;
    panda$core$String* name1623 = NULL;
    panda$collections$ImmutableArray* generics1625 = NULL;
    panda$collections$ImmutableArray* supertypes1627 = NULL;
    panda$collections$ImmutableArray* members1629 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1634 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1635;
    org$pandalanguage$pandac$ClassDecl* $tmp1636;
    panda$core$Weak* $tmp1638;
    panda$core$Weak* $tmp1639;
    panda$core$Weak* $tmp1640;
    panda$core$String* $tmp1642;
    org$pandalanguage$pandac$Alias* $tmp1649;
    panda$core$String* $tmp1651;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1652;
    panda$core$Int64 $tmp1654;
    panda$core$Bit $tmp1656;
    org$pandalanguage$pandac$Position $tmp1658;
    org$pandalanguage$pandac$Alias* $tmp1659;
    panda$core$String* $tmp1661;
    org$pandalanguage$pandac$Position $tmp1663;
    panda$core$Int64 $tmp1665;
    org$pandalanguage$pandac$Position position1667;
    org$pandalanguage$pandac$ASTNode* dc1669 = NULL;
    panda$core$String* name1671 = NULL;
    panda$collections$ImmutableArray* fields1673 = NULL;
    panda$core$Bit $tmp1675;
    panda$core$String* $tmp1679;
    panda$core$String* $tmp1680;
    int $tmp1572;
    {
        $tmp1574 = p_node;
        $match$447_91573 = $tmp1574;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1574));
        panda$core$Int64$init$builtin_int64(&$tmp1575, 16);
        panda$core$Bit $tmp1576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$447_91573->$rawValue, $tmp1575);
        if ($tmp1576.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1578 = ((org$pandalanguage$pandac$Position*) ((char*) $match$447_91573->$data + 0));
            position1577 = *$tmp1578;
            org$pandalanguage$pandac$ASTNode** $tmp1580 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$447_91573->$data + 16));
            dc1579 = *$tmp1580;
            panda$collections$ImmutableArray** $tmp1582 = ((panda$collections$ImmutableArray**) ((char*) $match$447_91573->$data + 24));
            annotations1581 = *$tmp1582;
            org$pandalanguage$pandac$ASTNode** $tmp1584 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$447_91573->$data + 32));
            varDecl1583 = *$tmp1584;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1577, dc1579, annotations1581, varDecl1583);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1585, 26);
        panda$core$Bit $tmp1586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$447_91573->$rawValue, $tmp1585);
        if ($tmp1586.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1588 = ((org$pandalanguage$pandac$Position*) ((char*) $match$447_91573->$data + 0));
            position1587 = *$tmp1588;
            org$pandalanguage$pandac$ASTNode** $tmp1590 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$447_91573->$data + 16));
            dc1589 = *$tmp1590;
            panda$collections$ImmutableArray** $tmp1592 = ((panda$collections$ImmutableArray**) ((char*) $match$447_91573->$data + 24));
            annotations1591 = *$tmp1592;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1594 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$447_91573->$data + 32));
            kind1593 = *$tmp1594;
            panda$core$String** $tmp1596 = ((panda$core$String**) ((char*) $match$447_91573->$data + 40));
            name1595 = *$tmp1596;
            panda$collections$ImmutableArray** $tmp1598 = ((panda$collections$ImmutableArray**) ((char*) $match$447_91573->$data + 48));
            generics1597 = *$tmp1598;
            panda$collections$ImmutableArray** $tmp1600 = ((panda$collections$ImmutableArray**) ((char*) $match$447_91573->$data + 56));
            parameters1599 = *$tmp1600;
            org$pandalanguage$pandac$ASTNode** $tmp1602 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$447_91573->$data + 64));
            returnType1601 = *$tmp1602;
            panda$collections$ImmutableArray** $tmp1604 = ((panda$collections$ImmutableArray**) ((char*) $match$447_91573->$data + 72));
            statements1603 = *$tmp1604;
            int $tmp1607;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1611 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1587, dc1589, annotations1591, kind1593, name1595, generics1597, parameters1599, returnType1601, statements1603);
                $tmp1610 = $tmp1611;
                $tmp1609 = $tmp1610;
                m1608 = $tmp1609;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1609));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1610));
                if (((panda$core$Bit) { m1608 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1608));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1608));
                }
                }
            }
            $tmp1607 = -1;
            goto $l1605;
            $l1605:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1608));
            m1608 = NULL;
            switch ($tmp1607) {
                case -1: goto $l1612;
            }
            $l1612:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1613, 11);
        panda$core$Bit $tmp1614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$447_91573->$rawValue, $tmp1613);
        if ($tmp1614.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1616 = ((org$pandalanguage$pandac$Position*) ((char*) $match$447_91573->$data + 0));
            position1615 = *$tmp1616;
            org$pandalanguage$pandac$ASTNode** $tmp1618 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$447_91573->$data + 16));
            dc1617 = *$tmp1618;
            panda$collections$ImmutableArray** $tmp1620 = ((panda$collections$ImmutableArray**) ((char*) $match$447_91573->$data + 24));
            annotations1619 = *$tmp1620;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1622 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$447_91573->$data + 32));
            kind1621 = *$tmp1622;
            panda$core$String** $tmp1624 = ((panda$core$String**) ((char*) $match$447_91573->$data + 40));
            name1623 = *$tmp1624;
            panda$collections$ImmutableArray** $tmp1626 = ((panda$collections$ImmutableArray**) ((char*) $match$447_91573->$data + 48));
            generics1625 = *$tmp1626;
            panda$collections$ImmutableArray** $tmp1628 = ((panda$collections$ImmutableArray**) ((char*) $match$447_91573->$data + 56));
            supertypes1627 = *$tmp1628;
            panda$collections$ImmutableArray** $tmp1630 = ((panda$collections$ImmutableArray**) ((char*) $match$447_91573->$data + 64));
            members1629 = *$tmp1630;
            int $tmp1633;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1637 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1615, dc1617, annotations1619, kind1621, name1623, generics1625, supertypes1627, members1629);
                $tmp1636 = $tmp1637;
                $tmp1635 = $tmp1636;
                inner1634 = $tmp1635;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1635));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1636));
                if (((panda$core$Bit) { inner1634 != NULL }).value) {
                {
                    {
                        $tmp1638 = inner1634->owner;
                        panda$core$Weak* $tmp1641 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1641, ((panda$core$Object*) p_cl));
                        $tmp1640 = $tmp1641;
                        $tmp1639 = $tmp1640;
                        inner1634->owner = $tmp1639;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1639));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1640));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1638));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1634));
                    panda$core$String* $tmp1644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1643);
                    $tmp1642 = $tmp1644;
                    panda$core$Bit $tmp1645 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1634->name, $tmp1642);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1642));
                    if ($tmp1645.value) goto $l1646; else goto $l1647;
                    $l1647:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1648, (panda$core$Int64) { 465 });
                    abort();
                    $l1646:;
                    org$pandalanguage$pandac$Alias* $tmp1650 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1653 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64$init$builtin_int64(&$tmp1654, 1);
                    panda$core$Int64 $tmp1655 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1653, $tmp1654);
                    panda$core$Bit$init$builtin_bit(&$tmp1656, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1652, ((panda$core$Int64$nullable) { $tmp1655, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1656);
                    panda$core$String* $tmp1657 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1634->name, $tmp1652);
                    $tmp1651 = $tmp1657;
                    org$pandalanguage$pandac$Position$init(&$tmp1658);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1650, $tmp1651, inner1634->name, $tmp1658);
                    $tmp1649 = $tmp1650;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1649));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1649));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1651));
                    org$pandalanguage$pandac$Alias* $tmp1660 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1662 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1661 = $tmp1662;
                    org$pandalanguage$pandac$Position$init(&$tmp1663);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1660, $tmp1661, p_cl->name, $tmp1663);
                    $tmp1659 = $tmp1660;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1634->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1659));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1659));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1661));
                }
                }
            }
            $tmp1633 = -1;
            goto $l1631;
            $l1631:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1634));
            inner1634 = NULL;
            switch ($tmp1633) {
                case -1: goto $l1664;
            }
            $l1664:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1665, 9);
        panda$core$Bit $tmp1666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$447_91573->$rawValue, $tmp1665);
        if ($tmp1666.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1668 = ((org$pandalanguage$pandac$Position*) ((char*) $match$447_91573->$data + 0));
            position1667 = *$tmp1668;
            org$pandalanguage$pandac$ASTNode** $tmp1670 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$447_91573->$data + 16));
            dc1669 = *$tmp1670;
            panda$core$String** $tmp1672 = ((panda$core$String**) ((char*) $match$447_91573->$data + 24));
            name1671 = *$tmp1672;
            panda$collections$ImmutableArray** $tmp1674 = ((panda$collections$ImmutableArray**) ((char*) $match$447_91573->$data + 32));
            fields1673 = *$tmp1674;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1667, dc1669, name1671, fields1673);
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1675, false);
            if ($tmp1675.value) goto $l1676; else goto $l1677;
            $l1677:;
            panda$core$String* $tmp1682 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1681, ((panda$core$Object*) p_node));
            $tmp1680 = $tmp1682;
            panda$core$String* $tmp1684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1680, &$s1683);
            $tmp1679 = $tmp1684;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1678, (panda$core$Int64) { 473 }, $tmp1679);
            abort();
            $l1676:;
        }
        }
        }
        }
        }
    }
    $tmp1572 = -1;
    goto $l1570;
    $l1570:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1574));
    switch ($tmp1572) {
        case -1: goto $l1685;
    }
    $l1685:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1689 = NULL;
    panda$core$String* $tmp1690;
    panda$core$String* $tmp1691;
    org$pandalanguage$pandac$ASTNode* $match$485_131695 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1696;
    panda$core$Int64 $tmp1697;
    org$pandalanguage$pandac$Position position1699;
    panda$core$String* text1701 = NULL;
    panda$core$String* $tmp1703;
    panda$core$String* $tmp1704;
    panda$core$Bit $tmp1705;
    panda$collections$Array* fields1710 = NULL;
    panda$collections$Array* $tmp1711;
    panda$collections$Array* $tmp1712;
    panda$collections$Iterator* Iter$493$91717 = NULL;
    panda$collections$Iterator* $tmp1718;
    panda$collections$Iterator* $tmp1719;
    org$pandalanguage$pandac$ASTNode* t1735 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1736;
    panda$core$Object* $tmp1737;
    org$pandalanguage$pandac$Type* $tmp1742;
    org$pandalanguage$pandac$ChoiceEntry* entry1746 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1747;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1748;
    int $tmp1688;
    {
        memset(&doccomment1689, 0, sizeof(doccomment1689));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1690 = doccomment1689;
                $tmp1691 = NULL;
                doccomment1689 = $tmp1691;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1691));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1690));
            }
        }
        }
        else {
        {
            int $tmp1694;
            {
                $tmp1696 = p_rawDoccomment;
                $match$485_131695 = $tmp1696;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1696));
                panda$core$Int64$init$builtin_int64(&$tmp1697, 38);
                panda$core$Bit $tmp1698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$485_131695->$rawValue, $tmp1697);
                if ($tmp1698.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1700 = ((org$pandalanguage$pandac$Position*) ((char*) $match$485_131695->$data + 0));
                    position1699 = *$tmp1700;
                    panda$core$String** $tmp1702 = ((panda$core$String**) ((char*) $match$485_131695->$data + 16));
                    text1701 = *$tmp1702;
                    {
                        $tmp1703 = doccomment1689;
                        $tmp1704 = text1701;
                        doccomment1689 = $tmp1704;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1704));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1703));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1705, false);
                    if ($tmp1705.value) goto $l1706; else goto $l1707;
                    $l1707:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1708, (panda$core$Int64) { 489 });
                    abort();
                    $l1706:;
                }
                }
            }
            $tmp1694 = -1;
            goto $l1692;
            $l1692:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1696));
            switch ($tmp1694) {
                case -1: goto $l1709;
            }
            $l1709:;
        }
        }
        panda$collections$Array* $tmp1713 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1713);
        $tmp1712 = $tmp1713;
        $tmp1711 = $tmp1712;
        fields1710 = $tmp1711;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1711));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1712));
        {
            int $tmp1716;
            {
                ITable* $tmp1720 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1720->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1720 = $tmp1720->next;
                }
                $fn1722 $tmp1721 = $tmp1720->methods[0];
                panda$collections$Iterator* $tmp1723 = $tmp1721(((panda$collections$Iterable*) p_rawFields));
                $tmp1719 = $tmp1723;
                $tmp1718 = $tmp1719;
                Iter$493$91717 = $tmp1718;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1718));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1719));
                $l1724:;
                ITable* $tmp1727 = Iter$493$91717->$class->itable;
                while ($tmp1727->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1727 = $tmp1727->next;
                }
                $fn1729 $tmp1728 = $tmp1727->methods[0];
                panda$core$Bit $tmp1730 = $tmp1728(Iter$493$91717);
                panda$core$Bit $tmp1731 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1730);
                bool $tmp1726 = $tmp1731.value;
                if (!$tmp1726) goto $l1725;
                {
                    int $tmp1734;
                    {
                        ITable* $tmp1738 = Iter$493$91717->$class->itable;
                        while ($tmp1738->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1738 = $tmp1738->next;
                        }
                        $fn1740 $tmp1739 = $tmp1738->methods[1];
                        panda$core$Object* $tmp1741 = $tmp1739(Iter$493$91717);
                        $tmp1737 = $tmp1741;
                        $tmp1736 = ((org$pandalanguage$pandac$ASTNode*) $tmp1737);
                        t1735 = $tmp1736;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1736));
                        panda$core$Panda$unref$panda$core$Object($tmp1737);
                        org$pandalanguage$pandac$Type* $tmp1743 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1735);
                        $tmp1742 = $tmp1743;
                        panda$collections$Array$add$panda$collections$Array$T(fields1710, ((panda$core$Object*) $tmp1742));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1742));
                    }
                    $tmp1734 = -1;
                    goto $l1732;
                    $l1732:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1735));
                    t1735 = NULL;
                    switch ($tmp1734) {
                        case -1: goto $l1744;
                    }
                    $l1744:;
                }
                goto $l1724;
                $l1725:;
            }
            $tmp1716 = -1;
            goto $l1714;
            $l1714:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$493$91717));
            Iter$493$91717 = NULL;
            switch ($tmp1716) {
                case -1: goto $l1745;
            }
            $l1745:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1749 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1750 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1749, p_cl, p_position, p_name, doccomment1689, $tmp1750, ((panda$collections$ListView*) fields1710));
        $tmp1748 = $tmp1749;
        $tmp1747 = $tmp1748;
        entry1746 = $tmp1747;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1747));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1748));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1746));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1746));
    }
    $tmp1688 = -1;
    goto $l1686;
    $l1686:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1746));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1710));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1689));
    fields1710 = NULL;
    entry1746 = NULL;
    switch ($tmp1688) {
        case -1: goto $l1751;
    }
    $l1751:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1755 = NULL;
    panda$core$String* $tmp1758;
    panda$core$String* $tmp1759;
    panda$core$String* $tmp1760;
    panda$core$String* $tmp1761;
    panda$core$String* $tmp1762;
    panda$core$String* $tmp1763;
    panda$core$String* $tmp1770;
    panda$core$String* $tmp1771;
    panda$core$String* doccomment1772 = NULL;
    panda$core$String* $tmp1773;
    panda$core$String* $tmp1774;
    org$pandalanguage$pandac$ASTNode* $match$519_131778 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1779;
    panda$core$Int64 $tmp1780;
    org$pandalanguage$pandac$Position position1782;
    panda$core$String* text1784 = NULL;
    panda$core$String* $tmp1786;
    panda$core$String* $tmp1787;
    panda$core$Bit $tmp1788;
    org$pandalanguage$pandac$Annotations* annotations1793 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1794;
    org$pandalanguage$pandac$Annotations* $tmp1795;
    panda$collections$Array* parameters1797 = NULL;
    panda$collections$Array* $tmp1798;
    panda$collections$Array* $tmp1799;
    panda$collections$Iterator* Iter$529$131804 = NULL;
    panda$collections$Iterator* $tmp1805;
    panda$collections$Iterator* $tmp1806;
    org$pandalanguage$pandac$ASTNode* p1822 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1823;
    panda$core$Object* $tmp1824;
    panda$core$String* name1829 = NULL;
    org$pandalanguage$pandac$Type* bound1830 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$532_171834 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1835;
    panda$core$Int64 $tmp1836;
    panda$core$String* id1838 = NULL;
    panda$core$String* $tmp1840;
    panda$core$String* $tmp1841;
    org$pandalanguage$pandac$Type* $tmp1842;
    org$pandalanguage$pandac$Type* $tmp1843;
    org$pandalanguage$pandac$Type* $tmp1844;
    panda$core$Int64 $tmp1846;
    panda$core$String* id1848 = NULL;
    org$pandalanguage$pandac$ASTNode* type1850 = NULL;
    panda$core$String* $tmp1852;
    panda$core$String* $tmp1853;
    org$pandalanguage$pandac$Type* $tmp1854;
    org$pandalanguage$pandac$Type* $tmp1855;
    org$pandalanguage$pandac$Type* $tmp1856;
    panda$core$Bit $tmp1858;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1863;
    panda$core$Int64 $tmp1869;
    panda$collections$Array* supertypes1872 = NULL;
    panda$collections$Array* $tmp1873;
    panda$collections$Array* $tmp1874;
    panda$core$Int64 $tmp1876;
    panda$collections$Iterator* Iter$553$131882 = NULL;
    panda$collections$Iterator* $tmp1883;
    panda$collections$Iterator* $tmp1884;
    org$pandalanguage$pandac$ASTNode* s1900 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1901;
    panda$core$Object* $tmp1902;
    org$pandalanguage$pandac$Type* $tmp1907;
    org$pandalanguage$pandac$ClassDecl* result1911 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1912;
    org$pandalanguage$pandac$ClassDecl* $tmp1913;
    panda$core$Object* $tmp1915;
    panda$core$Object* $tmp1917;
    panda$core$Int64 $tmp1919;
    org$pandalanguage$pandac$FieldDecl* rawValue1924 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1925;
    org$pandalanguage$pandac$FieldDecl* $tmp1926;
    org$pandalanguage$pandac$Annotations* $tmp1928;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1930;
    panda$core$Int64 $tmp1931;
    org$pandalanguage$pandac$Type* $tmp1933;
    org$pandalanguage$pandac$FieldDecl* data1935 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1936;
    org$pandalanguage$pandac$FieldDecl* $tmp1937;
    org$pandalanguage$pandac$Annotations* $tmp1939;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1941;
    panda$core$Int64 $tmp1942;
    org$pandalanguage$pandac$Type* $tmp1944;
    panda$collections$Iterator* Iter$570$91950 = NULL;
    panda$collections$Iterator* $tmp1951;
    panda$collections$Iterator* $tmp1952;
    org$pandalanguage$pandac$ASTNode* m1968 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1969;
    panda$core$Object* $tmp1970;
    org$pandalanguage$pandac$ASTNode* $match$571_131978 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1979;
    panda$core$Int64 $tmp1980;
    org$pandalanguage$pandac$Position mPosition1982;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1984;
    panda$core$Int64 $tmp1986;
    org$pandalanguage$pandac$ClassDecl$Kind $match$574_251988;
    panda$core$Int64 $tmp1989;
    panda$core$Int64 $tmp1991;
    panda$core$Int64 $tmp1994;
    panda$core$Bit foundInit2000;
    panda$core$Bit $tmp2001;
    panda$core$Bit foundCleanup2002;
    panda$core$Bit $tmp2003;
    panda$collections$Iterator* Iter$589$92007 = NULL;
    panda$collections$Iterator* $tmp2008;
    panda$collections$Iterator* $tmp2009;
    org$pandalanguage$pandac$MethodDecl* m2025 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2026;
    panda$core$Object* $tmp2027;
    panda$core$Int64 $tmp2032;
    panda$core$Bit $tmp2034;
    panda$core$Int64 $tmp2040;
    panda$core$Bit $tmp2043;
    panda$core$Int64 $tmp2044;
    panda$core$Int64 $tmp2053;
    org$pandalanguage$pandac$MethodDecl* defaultInit2063 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2064;
    org$pandalanguage$pandac$MethodDecl* $tmp2065;
    org$pandalanguage$pandac$Annotations* $tmp2067;
    panda$core$Int64 $tmp2069;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2070;
    panda$core$Int64 $tmp2071;
    panda$collections$Array* $tmp2073;
    panda$collections$Array* $tmp2075;
    org$pandalanguage$pandac$Type* $tmp2077;
    panda$collections$ImmutableArray* $tmp2079;
    panda$core$Int64 $tmp2087;
    panda$core$Int64 $tmp2090;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2101 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2102;
    org$pandalanguage$pandac$MethodDecl* $tmp2103;
    org$pandalanguage$pandac$Annotations* $tmp2105;
    panda$core$Int64 $tmp2107;
    panda$core$Int64 $tmp2108;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2110;
    panda$core$Int64 $tmp2111;
    panda$collections$Array* $tmp2113;
    panda$collections$Array* $tmp2115;
    org$pandalanguage$pandac$Type* $tmp2117;
    panda$collections$ImmutableArray* $tmp2119;
    panda$core$Int64 $tmp2122;
    panda$core$Bit haveFields2124;
    panda$core$Bit $tmp2125;
    panda$collections$Iterator* Iter$619$132129 = NULL;
    panda$collections$Iterator* $tmp2130;
    panda$collections$Iterator* $tmp2131;
    org$pandalanguage$pandac$ChoiceEntry* e2147 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2148;
    panda$core$Object* $tmp2149;
    panda$core$Int64 $tmp2155;
    panda$core$Bit $tmp2157;
    org$pandalanguage$pandac$Type* $tmp2162;
    org$pandalanguage$pandac$Type* $tmp2163;
    org$pandalanguage$pandac$Type* $tmp2164;
    panda$core$Object* $tmp2166;
    panda$core$Object* $tmp2167;
    org$pandalanguage$pandac$ClassDecl* $returnValue2170;
    org$pandalanguage$pandac$ClassDecl* $tmp2171;
    int $tmp1754;
    {
        memset(&fullName1755, 0, sizeof(fullName1755));
        panda$core$Bit $tmp1757 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1756);
        if ($tmp1757.value) {
        {
            {
                $tmp1758 = fullName1755;
                panda$core$String* $tmp1764 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1763 = $tmp1764;
                panda$core$String* $tmp1766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1763, &$s1765);
                $tmp1762 = $tmp1766;
                panda$core$String* $tmp1767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1762, p_name);
                $tmp1761 = $tmp1767;
                panda$core$String* $tmp1769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1761, &$s1768);
                $tmp1760 = $tmp1769;
                $tmp1759 = $tmp1760;
                fullName1755 = $tmp1759;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1759));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1760));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1761));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1762));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1763));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1758));
            }
        }
        }
        else {
        {
            {
                $tmp1770 = fullName1755;
                $tmp1771 = p_name;
                fullName1755 = $tmp1771;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1771));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1770));
            }
        }
        }
        memset(&doccomment1772, 0, sizeof(doccomment1772));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1773 = doccomment1772;
                $tmp1774 = NULL;
                doccomment1772 = $tmp1774;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1774));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1773));
            }
        }
        }
        else {
        {
            int $tmp1777;
            {
                $tmp1779 = p_rawDoccomment;
                $match$519_131778 = $tmp1779;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1779));
                panda$core$Int64$init$builtin_int64(&$tmp1780, 38);
                panda$core$Bit $tmp1781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$519_131778->$rawValue, $tmp1780);
                if ($tmp1781.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1783 = ((org$pandalanguage$pandac$Position*) ((char*) $match$519_131778->$data + 0));
                    position1782 = *$tmp1783;
                    panda$core$String** $tmp1785 = ((panda$core$String**) ((char*) $match$519_131778->$data + 16));
                    text1784 = *$tmp1785;
                    {
                        $tmp1786 = doccomment1772;
                        $tmp1787 = text1784;
                        doccomment1772 = $tmp1787;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1787));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1786));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1788, false);
                    if ($tmp1788.value) goto $l1789; else goto $l1790;
                    $l1790:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1791, (panda$core$Int64) { 523 });
                    abort();
                    $l1789:;
                }
                }
            }
            $tmp1777 = -1;
            goto $l1775;
            $l1775:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1779));
            switch ($tmp1777) {
                case -1: goto $l1792;
            }
            $l1792:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1796 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1795 = $tmp1796;
        $tmp1794 = $tmp1795;
        annotations1793 = $tmp1794;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1794));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1795));
        panda$collections$Array* $tmp1800 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1800);
        $tmp1799 = $tmp1800;
        $tmp1798 = $tmp1799;
        parameters1797 = $tmp1798;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1798));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1799));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1803;
                {
                    ITable* $tmp1807 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1807->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1807 = $tmp1807->next;
                    }
                    $fn1809 $tmp1808 = $tmp1807->methods[0];
                    panda$collections$Iterator* $tmp1810 = $tmp1808(((panda$collections$Iterable*) p_generics));
                    $tmp1806 = $tmp1810;
                    $tmp1805 = $tmp1806;
                    Iter$529$131804 = $tmp1805;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1805));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1806));
                    $l1811:;
                    ITable* $tmp1814 = Iter$529$131804->$class->itable;
                    while ($tmp1814->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1814 = $tmp1814->next;
                    }
                    $fn1816 $tmp1815 = $tmp1814->methods[0];
                    panda$core$Bit $tmp1817 = $tmp1815(Iter$529$131804);
                    panda$core$Bit $tmp1818 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1817);
                    bool $tmp1813 = $tmp1818.value;
                    if (!$tmp1813) goto $l1812;
                    {
                        int $tmp1821;
                        {
                            ITable* $tmp1825 = Iter$529$131804->$class->itable;
                            while ($tmp1825->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1825 = $tmp1825->next;
                            }
                            $fn1827 $tmp1826 = $tmp1825->methods[1];
                            panda$core$Object* $tmp1828 = $tmp1826(Iter$529$131804);
                            $tmp1824 = $tmp1828;
                            $tmp1823 = ((org$pandalanguage$pandac$ASTNode*) $tmp1824);
                            p1822 = $tmp1823;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1823));
                            panda$core$Panda$unref$panda$core$Object($tmp1824);
                            memset(&name1829, 0, sizeof(name1829));
                            memset(&bound1830, 0, sizeof(bound1830));
                            int $tmp1833;
                            {
                                $tmp1835 = p1822;
                                $match$532_171834 = $tmp1835;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1835));
                                panda$core$Int64$init$builtin_int64(&$tmp1836, 20);
                                panda$core$Bit $tmp1837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$532_171834->$rawValue, $tmp1836);
                                if ($tmp1837.value) {
                                {
                                    panda$core$String** $tmp1839 = ((panda$core$String**) ((char*) $match$532_171834->$data + 16));
                                    id1838 = *$tmp1839;
                                    {
                                        $tmp1840 = name1829;
                                        $tmp1841 = id1838;
                                        name1829 = $tmp1841;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1841));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1840));
                                    }
                                    {
                                        $tmp1842 = bound1830;
                                        org$pandalanguage$pandac$Type* $tmp1845 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1844 = $tmp1845;
                                        $tmp1843 = $tmp1844;
                                        bound1830 = $tmp1843;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1843));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1844));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1842));
                                    }
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1846, 44);
                                panda$core$Bit $tmp1847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$532_171834->$rawValue, $tmp1846);
                                if ($tmp1847.value) {
                                {
                                    panda$core$String** $tmp1849 = ((panda$core$String**) ((char*) $match$532_171834->$data + 16));
                                    id1848 = *$tmp1849;
                                    org$pandalanguage$pandac$ASTNode** $tmp1851 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$532_171834->$data + 24));
                                    type1850 = *$tmp1851;
                                    {
                                        $tmp1852 = name1829;
                                        $tmp1853 = id1848;
                                        name1829 = $tmp1853;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1853));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1852));
                                    }
                                    {
                                        $tmp1854 = bound1830;
                                        org$pandalanguage$pandac$Type* $tmp1857 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1850);
                                        $tmp1856 = $tmp1857;
                                        $tmp1855 = $tmp1856;
                                        bound1830 = $tmp1855;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1855));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1856));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1854));
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp1858, false);
                                    if ($tmp1858.value) goto $l1859; else goto $l1860;
                                    $l1860:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1861, (panda$core$Int64) { 540 });
                                    abort();
                                    $l1859:;
                                }
                                }
                                }
                            }
                            $tmp1833 = -1;
                            goto $l1831;
                            $l1831:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1835));
                            switch ($tmp1833) {
                                case -1: goto $l1862;
                            }
                            $l1862:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1864 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1866 = (($fn1865) p1822->$class->vtable[2])(p1822);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1864, $tmp1866, fullName1755, name1829, bound1830);
                            $tmp1863 = $tmp1864;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1797, ((panda$core$Object*) $tmp1863));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1863));
                        }
                        $tmp1821 = -1;
                        goto $l1819;
                        $l1819:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1830));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1829));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1822));
                        p1822 = NULL;
                        switch ($tmp1821) {
                            case -1: goto $l1867;
                        }
                        $l1867:;
                    }
                    goto $l1811;
                    $l1812:;
                }
                $tmp1803 = -1;
                goto $l1801;
                $l1801:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$529$131804));
                Iter$529$131804 = NULL;
                switch ($tmp1803) {
                    case -1: goto $l1868;
                }
                $l1868:;
            }
            panda$core$Int64$init$builtin_int64(&$tmp1869, 2);
            panda$core$Bit $tmp1870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1869);
            if ($tmp1870.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1871);
            }
            }
        }
        }
        panda$collections$Array* $tmp1875 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1875);
        $tmp1874 = $tmp1875;
        $tmp1873 = $tmp1874;
        supertypes1872 = $tmp1873;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1873));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1874));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1876, 2);
            panda$core$Bit $tmp1877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1876);
            if ($tmp1877.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1878);
            }
            }
            {
                int $tmp1881;
                {
                    ITable* $tmp1885 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1885->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1885 = $tmp1885->next;
                    }
                    $fn1887 $tmp1886 = $tmp1885->methods[0];
                    panda$collections$Iterator* $tmp1888 = $tmp1886(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1884 = $tmp1888;
                    $tmp1883 = $tmp1884;
                    Iter$553$131882 = $tmp1883;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1883));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1884));
                    $l1889:;
                    ITable* $tmp1892 = Iter$553$131882->$class->itable;
                    while ($tmp1892->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1892 = $tmp1892->next;
                    }
                    $fn1894 $tmp1893 = $tmp1892->methods[0];
                    panda$core$Bit $tmp1895 = $tmp1893(Iter$553$131882);
                    panda$core$Bit $tmp1896 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1895);
                    bool $tmp1891 = $tmp1896.value;
                    if (!$tmp1891) goto $l1890;
                    {
                        int $tmp1899;
                        {
                            ITable* $tmp1903 = Iter$553$131882->$class->itable;
                            while ($tmp1903->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1903 = $tmp1903->next;
                            }
                            $fn1905 $tmp1904 = $tmp1903->methods[1];
                            panda$core$Object* $tmp1906 = $tmp1904(Iter$553$131882);
                            $tmp1902 = $tmp1906;
                            $tmp1901 = ((org$pandalanguage$pandac$ASTNode*) $tmp1902);
                            s1900 = $tmp1901;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1901));
                            panda$core$Panda$unref$panda$core$Object($tmp1902);
                            org$pandalanguage$pandac$Type* $tmp1908 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1900);
                            $tmp1907 = $tmp1908;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1872, ((panda$core$Object*) $tmp1907));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1907));
                        }
                        $tmp1899 = -1;
                        goto $l1897;
                        $l1897:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1900));
                        s1900 = NULL;
                        switch ($tmp1899) {
                            case -1: goto $l1909;
                        }
                        $l1909:;
                    }
                    goto $l1889;
                    $l1890:;
                }
                $tmp1881 = -1;
                goto $l1879;
                $l1879:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$553$131882));
                Iter$553$131882 = NULL;
                switch ($tmp1881) {
                    case -1: goto $l1910;
                }
                $l1910:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1914 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1916 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1915 = $tmp1916;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1914, p_source, p_position, p_aliases, doccomment1772, annotations1793, p_kind, fullName1755, ((panda$collections$ListView*) supertypes1872), parameters1797, ((org$pandalanguage$pandac$Compiler*) $tmp1915)->root);
        $tmp1913 = $tmp1914;
        $tmp1912 = $tmp1913;
        result1911 = $tmp1912;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1912));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1913));
        panda$core$Panda$unref$panda$core$Object($tmp1915);
        panda$core$Object* $tmp1918 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1917 = $tmp1918;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1917)->currentClass, ((panda$core$Object*) result1911));
        panda$core$Panda$unref$panda$core$Object($tmp1917);
        panda$core$Int64$init$builtin_int64(&$tmp1919, 2);
        panda$core$Bit $tmp1920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1919);
        if ($tmp1920.value) {
        {
            int $tmp1923;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1927 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1929 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1929);
                $tmp1928 = $tmp1929;
                panda$core$Int64$init$builtin_int64(&$tmp1931, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1930, $tmp1931);
                org$pandalanguage$pandac$Type* $tmp1934 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1933 = $tmp1934;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1927, result1911, result1911->position, NULL, $tmp1928, $tmp1930, &$s1932, $tmp1933, NULL);
                $tmp1926 = $tmp1927;
                $tmp1925 = $tmp1926;
                rawValue1924 = $tmp1925;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1925));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1926));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1933));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1928));
                panda$collections$Array$add$panda$collections$Array$T(result1911->fields, ((panda$core$Object*) rawValue1924));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1911->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1924));
                org$pandalanguage$pandac$FieldDecl* $tmp1938 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1940 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1940);
                $tmp1939 = $tmp1940;
                panda$core$Int64$init$builtin_int64(&$tmp1942, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1941, $tmp1942);
                org$pandalanguage$pandac$Type* $tmp1945 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1944 = $tmp1945;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1938, result1911, result1911->position, NULL, $tmp1939, $tmp1941, &$s1943, $tmp1944, NULL);
                $tmp1937 = $tmp1938;
                $tmp1936 = $tmp1937;
                data1935 = $tmp1936;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1936));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1937));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1944));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1939));
                panda$collections$Array$add$panda$collections$Array$T(result1911->fields, ((panda$core$Object*) data1935));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1911->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1935));
            }
            $tmp1923 = -1;
            goto $l1921;
            $l1921:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1935));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1924));
            rawValue1924 = NULL;
            data1935 = NULL;
            switch ($tmp1923) {
                case -1: goto $l1946;
            }
            $l1946:;
        }
        }
        {
            int $tmp1949;
            {
                ITable* $tmp1953 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1953->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1953 = $tmp1953->next;
                }
                $fn1955 $tmp1954 = $tmp1953->methods[0];
                panda$collections$Iterator* $tmp1956 = $tmp1954(((panda$collections$Iterable*) p_members));
                $tmp1952 = $tmp1956;
                $tmp1951 = $tmp1952;
                Iter$570$91950 = $tmp1951;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1951));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1952));
                $l1957:;
                ITable* $tmp1960 = Iter$570$91950->$class->itable;
                while ($tmp1960->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1960 = $tmp1960->next;
                }
                $fn1962 $tmp1961 = $tmp1960->methods[0];
                panda$core$Bit $tmp1963 = $tmp1961(Iter$570$91950);
                panda$core$Bit $tmp1964 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1963);
                bool $tmp1959 = $tmp1964.value;
                if (!$tmp1959) goto $l1958;
                {
                    int $tmp1967;
                    {
                        ITable* $tmp1971 = Iter$570$91950->$class->itable;
                        while ($tmp1971->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1971 = $tmp1971->next;
                        }
                        $fn1973 $tmp1972 = $tmp1971->methods[1];
                        panda$core$Object* $tmp1974 = $tmp1972(Iter$570$91950);
                        $tmp1970 = $tmp1974;
                        $tmp1969 = ((org$pandalanguage$pandac$ASTNode*) $tmp1970);
                        m1968 = $tmp1969;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1969));
                        panda$core$Panda$unref$panda$core$Object($tmp1970);
                        int $tmp1977;
                        {
                            $tmp1979 = m1968;
                            $match$571_131978 = $tmp1979;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1979));
                            panda$core$Int64$init$builtin_int64(&$tmp1980, 26);
                            panda$core$Bit $tmp1981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$571_131978->$rawValue, $tmp1980);
                            if ($tmp1981.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1983 = ((org$pandalanguage$pandac$Position*) ((char*) $match$571_131978->$data + 0));
                                mPosition1982 = *$tmp1983;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1985 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$571_131978->$data + 32));
                                methodKind1984 = *$tmp1985;
                                panda$core$Int64$init$builtin_int64(&$tmp1986, 2);
                                panda$core$Bit $tmp1987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1984.$rawValue, $tmp1986);
                                if ($tmp1987.value) {
                                {
                                    {
                                        $match$574_251988 = p_kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp1989, 0);
                                        panda$core$Bit $tmp1990 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$574_251988.$rawValue, $tmp1989);
                                        if ($tmp1990.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp1991, 1);
                                        panda$core$Bit $tmp1992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$574_251988.$rawValue, $tmp1991);
                                        if ($tmp1992.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition1982, &$s1993);
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp1994, 2);
                                        panda$core$Bit $tmp1995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$574_251988.$rawValue, $tmp1994);
                                        if ($tmp1995.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition1982, &$s1996);
                                        }
                                        }
                                        }
                                        }
                                    }
                                }
                                }
                            }
                            }
                            else {
                            {
                            }
                            }
                        }
                        $tmp1977 = -1;
                        goto $l1975;
                        $l1975:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1979));
                        switch ($tmp1977) {
                            case -1: goto $l1997;
                        }
                        $l1997:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1911, m1968);
                    }
                    $tmp1967 = -1;
                    goto $l1965;
                    $l1965:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1968));
                    m1968 = NULL;
                    switch ($tmp1967) {
                        case -1: goto $l1998;
                    }
                    $l1998:;
                }
                goto $l1957;
                $l1958:;
            }
            $tmp1949 = -1;
            goto $l1947;
            $l1947:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$570$91950));
            Iter$570$91950 = NULL;
            switch ($tmp1949) {
                case -1: goto $l1999;
            }
            $l1999:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp2001, false);
        foundInit2000 = $tmp2001;
        panda$core$Bit$init$builtin_bit(&$tmp2003, false);
        foundCleanup2002 = $tmp2003;
        {
            int $tmp2006;
            {
                ITable* $tmp2010 = ((panda$collections$Iterable*) result1911->methods)->$class->itable;
                while ($tmp2010->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2010 = $tmp2010->next;
                }
                $fn2012 $tmp2011 = $tmp2010->methods[0];
                panda$collections$Iterator* $tmp2013 = $tmp2011(((panda$collections$Iterable*) result1911->methods));
                $tmp2009 = $tmp2013;
                $tmp2008 = $tmp2009;
                Iter$589$92007 = $tmp2008;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2008));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2009));
                $l2014:;
                ITable* $tmp2017 = Iter$589$92007->$class->itable;
                while ($tmp2017->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2017 = $tmp2017->next;
                }
                $fn2019 $tmp2018 = $tmp2017->methods[0];
                panda$core$Bit $tmp2020 = $tmp2018(Iter$589$92007);
                panda$core$Bit $tmp2021 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2020);
                bool $tmp2016 = $tmp2021.value;
                if (!$tmp2016) goto $l2015;
                {
                    int $tmp2024;
                    {
                        ITable* $tmp2028 = Iter$589$92007->$class->itable;
                        while ($tmp2028->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2028 = $tmp2028->next;
                        }
                        $fn2030 $tmp2029 = $tmp2028->methods[1];
                        panda$core$Object* $tmp2031 = $tmp2029(Iter$589$92007);
                        $tmp2027 = $tmp2031;
                        $tmp2026 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2027);
                        m2025 = $tmp2026;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2026));
                        panda$core$Panda$unref$panda$core$Object($tmp2027);
                        panda$core$Int64$init$builtin_int64(&$tmp2032, 2);
                        panda$core$Bit $tmp2033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2025->methodKind.$rawValue, $tmp2032);
                        if ($tmp2033.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2034, true);
                            foundInit2000 = $tmp2034;
                        }
                        }
                        panda$core$Bit $tmp2037 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2025)->name, &$s2036);
                        bool $tmp2035 = $tmp2037.value;
                        if (!$tmp2035) goto $l2038;
                        panda$core$Int64 $tmp2039 = panda$collections$Array$get_count$R$panda$core$Int64(m2025->parameters);
                        panda$core$Int64$init$builtin_int64(&$tmp2040, 0);
                        panda$core$Bit $tmp2041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2039, $tmp2040);
                        $tmp2035 = $tmp2041.value;
                        $l2038:;
                        panda$core$Bit $tmp2042 = { $tmp2035 };
                        if ($tmp2042.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2043, true);
                            foundCleanup2002 = $tmp2043;
                            panda$core$Int64$init$builtin_int64(&$tmp2044, 2);
                            panda$core$Bit $tmp2045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2044);
                            if ($tmp2045.value) {
                            {
                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2046);
                            }
                            }
                        }
                        }
                    }
                    $tmp2024 = -1;
                    goto $l2022;
                    $l2022:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2025));
                    m2025 = NULL;
                    switch ($tmp2024) {
                        case -1: goto $l2047;
                    }
                    $l2047:;
                }
                goto $l2014;
                $l2015:;
            }
            $tmp2006 = -1;
            goto $l2004;
            $l2004:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$589$92007));
            Iter$589$92007 = NULL;
            switch ($tmp2006) {
                case -1: goto $l2048;
            }
            $l2048:;
        }
        panda$core$Bit $tmp2051 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit2000);
        bool $tmp2050 = $tmp2051.value;
        if (!$tmp2050) goto $l2052;
        panda$core$Int64$init$builtin_int64(&$tmp2053, 0);
        panda$core$Bit $tmp2054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2053);
        $tmp2050 = $tmp2054.value;
        $l2052:;
        panda$core$Bit $tmp2055 = { $tmp2050 };
        bool $tmp2049 = $tmp2055.value;
        if (!$tmp2049) goto $l2056;
        panda$core$Bit $tmp2058 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1911->name, &$s2057);
        $tmp2049 = $tmp2058.value;
        $l2056:;
        panda$core$Bit $tmp2059 = { $tmp2049 };
        if ($tmp2059.value) {
        {
            int $tmp2062;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2066 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2068 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2069, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2068, $tmp2069);
                $tmp2067 = $tmp2068;
                panda$core$Int64$init$builtin_int64(&$tmp2071, 2);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2070, $tmp2071);
                panda$collections$Array* $tmp2074 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2074);
                $tmp2073 = $tmp2074;
                panda$collections$Array* $tmp2076 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2076);
                $tmp2075 = $tmp2076;
                org$pandalanguage$pandac$Type* $tmp2078 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2077 = $tmp2078;
                panda$collections$ImmutableArray* $tmp2080 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2080);
                $tmp2079 = $tmp2080;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2066, result1911, p_position, NULL, $tmp2067, $tmp2070, &$s2072, $tmp2073, $tmp2075, $tmp2077, $tmp2079);
                $tmp2065 = $tmp2066;
                $tmp2064 = $tmp2065;
                defaultInit2063 = $tmp2064;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2064));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2065));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2079));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2077));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2075));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2073));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2067));
                panda$collections$Array$add$panda$collections$Array$T(result1911->methods, ((panda$core$Object*) defaultInit2063));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1911->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2063));
            }
            $tmp2062 = -1;
            goto $l2060;
            $l2060:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2063));
            defaultInit2063 = NULL;
            switch ($tmp2062) {
                case -1: goto $l2081;
            }
            $l2081:;
        }
        }
        panda$core$Bit $tmp2084 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup2002);
        bool $tmp2083 = $tmp2084.value;
        if (!$tmp2083) goto $l2085;
        panda$core$Int64$init$builtin_int64(&$tmp2087, 0);
        panda$core$Bit $tmp2088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2087);
        bool $tmp2086 = $tmp2088.value;
        if ($tmp2086) goto $l2089;
        panda$core$Int64$init$builtin_int64(&$tmp2090, 2);
        panda$core$Bit $tmp2091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2090);
        $tmp2086 = $tmp2091.value;
        $l2089:;
        panda$core$Bit $tmp2092 = { $tmp2086 };
        $tmp2083 = $tmp2092.value;
        $l2085:;
        panda$core$Bit $tmp2093 = { $tmp2083 };
        bool $tmp2082 = $tmp2093.value;
        if (!$tmp2082) goto $l2094;
        panda$core$Bit $tmp2096 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1911->name, &$s2095);
        $tmp2082 = $tmp2096.value;
        $l2094:;
        panda$core$Bit $tmp2097 = { $tmp2082 };
        if ($tmp2097.value) {
        {
            int $tmp2100;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2104 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2106 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2107, 32);
                panda$core$Int64$init$builtin_int64(&$tmp2108, 8192);
                panda$core$Int64 $tmp2109 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2107, $tmp2108);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2106, $tmp2109);
                $tmp2105 = $tmp2106;
                panda$core$Int64$init$builtin_int64(&$tmp2111, 0);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2110, $tmp2111);
                panda$collections$Array* $tmp2114 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2114);
                $tmp2113 = $tmp2114;
                panda$collections$Array* $tmp2116 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2116);
                $tmp2115 = $tmp2116;
                org$pandalanguage$pandac$Type* $tmp2118 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2117 = $tmp2118;
                panda$collections$ImmutableArray* $tmp2120 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2120);
                $tmp2119 = $tmp2120;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2104, result1911, p_position, NULL, $tmp2105, $tmp2110, &$s2112, $tmp2113, $tmp2115, $tmp2117, $tmp2119);
                $tmp2103 = $tmp2104;
                $tmp2102 = $tmp2103;
                defaultCleanup2101 = $tmp2102;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2102));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2103));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2119));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2117));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2115));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2105));
                panda$collections$Array$add$panda$collections$Array$T(result1911->methods, ((panda$core$Object*) defaultCleanup2101));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1911->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2101));
            }
            $tmp2100 = -1;
            goto $l2098;
            $l2098:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2101));
            defaultCleanup2101 = NULL;
            switch ($tmp2100) {
                case -1: goto $l2121;
            }
            $l2121:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2122, 2);
        panda$core$Bit $tmp2123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2122);
        if ($tmp2123.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2125, false);
            haveFields2124 = $tmp2125;
            {
                int $tmp2128;
                {
                    ITable* $tmp2132 = ((panda$collections$Iterable*) result1911->choiceEntries)->$class->itable;
                    while ($tmp2132->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2132 = $tmp2132->next;
                    }
                    $fn2134 $tmp2133 = $tmp2132->methods[0];
                    panda$collections$Iterator* $tmp2135 = $tmp2133(((panda$collections$Iterable*) result1911->choiceEntries));
                    $tmp2131 = $tmp2135;
                    $tmp2130 = $tmp2131;
                    Iter$619$132129 = $tmp2130;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2130));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2131));
                    $l2136:;
                    ITable* $tmp2139 = Iter$619$132129->$class->itable;
                    while ($tmp2139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2139 = $tmp2139->next;
                    }
                    $fn2141 $tmp2140 = $tmp2139->methods[0];
                    panda$core$Bit $tmp2142 = $tmp2140(Iter$619$132129);
                    panda$core$Bit $tmp2143 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2142);
                    bool $tmp2138 = $tmp2143.value;
                    if (!$tmp2138) goto $l2137;
                    {
                        int $tmp2146;
                        {
                            ITable* $tmp2150 = Iter$619$132129->$class->itable;
                            while ($tmp2150->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2150 = $tmp2150->next;
                            }
                            $fn2152 $tmp2151 = $tmp2150->methods[1];
                            panda$core$Object* $tmp2153 = $tmp2151(Iter$619$132129);
                            $tmp2149 = $tmp2153;
                            $tmp2148 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp2149);
                            e2147 = $tmp2148;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2148));
                            panda$core$Panda$unref$panda$core$Object($tmp2149);
                            panda$core$Int64 $tmp2154 = panda$collections$Array$get_count$R$panda$core$Int64(e2147->fields);
                            panda$core$Int64$init$builtin_int64(&$tmp2155, 0);
                            panda$core$Bit $tmp2156 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2154, $tmp2155);
                            if ($tmp2156.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp2157, true);
                                haveFields2124 = $tmp2157;
                                $tmp2146 = 0;
                                goto $l2144;
                                $l2158:;
                                goto $l2137;
                            }
                            }
                        }
                        $tmp2146 = -1;
                        goto $l2144;
                        $l2144:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2147));
                        e2147 = NULL;
                        switch ($tmp2146) {
                            case 0: goto $l2158;
                            case -1: goto $l2159;
                        }
                        $l2159:;
                    }
                    goto $l2136;
                    $l2137:;
                }
                $tmp2128 = -1;
                goto $l2126;
                $l2126:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$619$132129));
                Iter$619$132129 = NULL;
                switch ($tmp2128) {
                    case -1: goto $l2160;
                }
                $l2160:;
            }
            panda$core$Bit $tmp2161 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields2124);
            if ($tmp2161.value) {
            {
                {
                    $tmp2162 = result1911->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp2165 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp2164 = $tmp2165;
                    $tmp2163 = $tmp2164;
                    result1911->rawSuper = $tmp2163;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2163));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2164));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2162));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp2168 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp2167 = $tmp2168;
        panda$core$Object* $tmp2169 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2167)->currentClass);
        $tmp2166 = $tmp2169;
        panda$core$Panda$unref$panda$core$Object($tmp2166);
        panda$core$Panda$unref$panda$core$Object($tmp2167);
        $tmp2171 = result1911;
        $returnValue2170 = $tmp2171;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2171));
        $tmp1754 = 0;
        goto $l1752;
        $l2172:;
        return $returnValue2170;
    }
    $l1752:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1911));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1872));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1797));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1793));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1772));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1755));
    annotations1793 = NULL;
    parameters1797 = NULL;
    supertypes1872 = NULL;
    result1911 = NULL;
    switch ($tmp1754) {
        case 0: goto $l2172;
    }
    $l2174:;
    abort();
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$635$92178 = NULL;
    panda$collections$Iterator* $tmp2179;
    panda$collections$Iterator* $tmp2180;
    org$pandalanguage$pandac$ClassDecl* inner2196 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2197;
    panda$core$Object* $tmp2198;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp2177;
        {
            ITable* $tmp2181 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp2181->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2181 = $tmp2181->next;
            }
            $fn2183 $tmp2182 = $tmp2181->methods[0];
            panda$collections$Iterator* $tmp2184 = $tmp2182(((panda$collections$Iterable*) p_cl->classes));
            $tmp2180 = $tmp2184;
            $tmp2179 = $tmp2180;
            Iter$635$92178 = $tmp2179;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2179));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2180));
            $l2185:;
            ITable* $tmp2188 = Iter$635$92178->$class->itable;
            while ($tmp2188->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2188 = $tmp2188->next;
            }
            $fn2190 $tmp2189 = $tmp2188->methods[0];
            panda$core$Bit $tmp2191 = $tmp2189(Iter$635$92178);
            panda$core$Bit $tmp2192 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2191);
            bool $tmp2187 = $tmp2192.value;
            if (!$tmp2187) goto $l2186;
            {
                int $tmp2195;
                {
                    ITable* $tmp2199 = Iter$635$92178->$class->itable;
                    while ($tmp2199->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2199 = $tmp2199->next;
                    }
                    $fn2201 $tmp2200 = $tmp2199->methods[1];
                    panda$core$Object* $tmp2202 = $tmp2200(Iter$635$92178);
                    $tmp2198 = $tmp2202;
                    $tmp2197 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2198);
                    inner2196 = $tmp2197;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2197));
                    panda$core$Panda$unref$panda$core$Object($tmp2198);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner2196, p_arr);
                }
                $tmp2195 = -1;
                goto $l2193;
                $l2193:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner2196));
                inner2196 = NULL;
                switch ($tmp2195) {
                    case -1: goto $l2203;
                }
                $l2203:;
            }
            goto $l2185;
            $l2186:;
        }
        $tmp2177 = -1;
        goto $l2175;
        $l2175:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$635$92178));
        Iter$635$92178 = NULL;
        switch ($tmp2177) {
            case -1: goto $l2204;
        }
        $l2204:;
    }
}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$collections$List* p_classes) {
    org$pandalanguage$pandac$ClassDecl* $tmp2208;
    org$pandalanguage$pandac$ClassDecl* $tmp2209;
    org$pandalanguage$pandac$ClassDecl* $tmp2210;
    org$pandalanguage$pandac$Position $tmp2212;
    org$pandalanguage$pandac$Annotations* $tmp2213;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2215;
    panda$core$Int64 $tmp2216;
    panda$collections$Array* $tmp2218;
    panda$collections$Array* $tmp2220;
    panda$core$Object* $tmp2222;
    org$pandalanguage$pandac$MethodDecl* defaultInit2227 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2228;
    org$pandalanguage$pandac$MethodDecl* $tmp2229;
    org$pandalanguage$pandac$Position $tmp2231;
    org$pandalanguage$pandac$Annotations* $tmp2232;
    panda$core$Int64 $tmp2234;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2235;
    panda$core$Int64 $tmp2236;
    panda$collections$Array* $tmp2238;
    panda$collections$Array* $tmp2240;
    org$pandalanguage$pandac$Type* $tmp2242;
    panda$collections$ImmutableArray* $tmp2244;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2246 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2247;
    org$pandalanguage$pandac$MethodDecl* $tmp2248;
    org$pandalanguage$pandac$Position $tmp2250;
    org$pandalanguage$pandac$Annotations* $tmp2251;
    panda$core$Int64 $tmp2253;
    panda$core$Int64 $tmp2254;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2256;
    panda$core$Int64 $tmp2257;
    panda$collections$Array* $tmp2259;
    panda$collections$Array* $tmp2261;
    org$pandalanguage$pandac$Type* $tmp2263;
    panda$collections$ImmutableArray* $tmp2265;
    if (((panda$core$Bit) { self->bareCodeClass == NULL }).value) {
    {
        int $tmp2207;
        {
            {
                $tmp2208 = self->bareCodeClass;
                org$pandalanguage$pandac$ClassDecl* $tmp2211 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
                org$pandalanguage$pandac$Position$init(&$tmp2212);
                org$pandalanguage$pandac$Annotations* $tmp2214 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp2214);
                $tmp2213 = $tmp2214;
                panda$core$Int64$init$builtin_int64(&$tmp2216, 0);
                org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2215, $tmp2216);
                panda$collections$Array* $tmp2219 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2219);
                $tmp2218 = $tmp2219;
                panda$collections$Array* $tmp2221 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2221);
                $tmp2220 = $tmp2221;
                panda$core$Object* $tmp2223 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp2222 = $tmp2223;
                org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2211, p_source, $tmp2212, p_aliases, NULL, $tmp2213, $tmp2215, &$s2217, ((panda$collections$ListView*) $tmp2218), $tmp2220, ((org$pandalanguage$pandac$Compiler*) $tmp2222)->root);
                $tmp2210 = $tmp2211;
                $tmp2209 = $tmp2210;
                self->bareCodeClass = $tmp2209;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2209));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2210));
                panda$core$Panda$unref$panda$core$Object($tmp2222);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2220));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2218));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2213));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2208));
            }
            ITable* $tmp2224 = ((panda$collections$CollectionWriter*) p_classes)->$class->itable;
            while ($tmp2224->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
                $tmp2224 = $tmp2224->next;
            }
            $fn2226 $tmp2225 = $tmp2224->methods[0];
            $tmp2225(((panda$collections$CollectionWriter*) p_classes), ((panda$core$Object*) self->bareCodeClass));
            org$pandalanguage$pandac$MethodDecl* $tmp2230 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2231);
            org$pandalanguage$pandac$Annotations* $tmp2233 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2234, 8192);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2233, $tmp2234);
            $tmp2232 = $tmp2233;
            panda$core$Int64$init$builtin_int64(&$tmp2236, 2);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2235, $tmp2236);
            panda$collections$Array* $tmp2239 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2239);
            $tmp2238 = $tmp2239;
            panda$collections$Array* $tmp2241 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2241);
            $tmp2240 = $tmp2241;
            org$pandalanguage$pandac$Type* $tmp2243 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2242 = $tmp2243;
            panda$collections$ImmutableArray* $tmp2245 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2245);
            $tmp2244 = $tmp2245;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2230, self->bareCodeClass, $tmp2231, NULL, $tmp2232, $tmp2235, &$s2237, $tmp2238, $tmp2240, $tmp2242, $tmp2244);
            $tmp2229 = $tmp2230;
            $tmp2228 = $tmp2229;
            defaultInit2227 = $tmp2228;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2228));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2229));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2244));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2242));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2240));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2238));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2232));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultInit2227));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2227));
            org$pandalanguage$pandac$MethodDecl* $tmp2249 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2250);
            org$pandalanguage$pandac$Annotations* $tmp2252 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2253, 32);
            panda$core$Int64$init$builtin_int64(&$tmp2254, 8192);
            panda$core$Int64 $tmp2255 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2253, $tmp2254);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2252, $tmp2255);
            $tmp2251 = $tmp2252;
            panda$core$Int64$init$builtin_int64(&$tmp2257, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2256, $tmp2257);
            panda$collections$Array* $tmp2260 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2260);
            $tmp2259 = $tmp2260;
            panda$collections$Array* $tmp2262 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2262);
            $tmp2261 = $tmp2262;
            org$pandalanguage$pandac$Type* $tmp2264 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2263 = $tmp2264;
            panda$collections$ImmutableArray* $tmp2266 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2266);
            $tmp2265 = $tmp2266;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2249, self->bareCodeClass, $tmp2250, NULL, $tmp2251, $tmp2256, &$s2258, $tmp2259, $tmp2261, $tmp2263, $tmp2265);
            $tmp2248 = $tmp2249;
            $tmp2247 = $tmp2248;
            defaultCleanup2246 = $tmp2247;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2247));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2248));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2265));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2263));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2261));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2259));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2251));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultCleanup2246));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2246));
        }
        $tmp2207 = -1;
        goto $l2205;
        $l2205:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2246));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2227));
        defaultInit2227 = NULL;
        defaultCleanup2246 = NULL;
        switch ($tmp2207) {
            case -1: goto $l2267;
        }
        $l2267:;
    }
    }
}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp2272;
    if (((panda$core$Bit) { self->source != NULL }).value) goto $l2268; else goto $l2269;
    $l2269:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2270, (panda$core$Int64) { 663 }, &$s2271);
    abort();
    $l2268:;
    panda$core$Object* $tmp2273 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp2272 = $tmp2273;
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2272), self->source, p_position, p_msg);
    panda$core$Panda$unref$panda$core$Object($tmp2272);
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$io$File* $tmp2274;
    panda$io$File* $tmp2275;
    org$pandalanguage$pandac$ASTNode* $match$669_92279 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2280;
    panda$core$Int64 $tmp2281;
    panda$collections$ImmutableArray* entries2283 = NULL;
    panda$collections$Array* result2288 = NULL;
    panda$collections$Array* $tmp2289;
    panda$collections$Array* $tmp2290;
    panda$core$String* currentPackage2292 = NULL;
    panda$core$String* $tmp2293;
    panda$collections$HashMap* aliases2295 = NULL;
    panda$collections$HashMap* $tmp2296;
    panda$collections$HashMap* $tmp2297;
    panda$collections$Iterator* Iter$674$172302 = NULL;
    panda$collections$Iterator* $tmp2303;
    panda$collections$Iterator* $tmp2304;
    org$pandalanguage$pandac$ASTNode* e2320 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2321;
    panda$core$Object* $tmp2322;
    org$pandalanguage$pandac$ASTNode* $match$675_212330 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2331;
    panda$core$Int64 $tmp2332;
    panda$core$String* name2334 = NULL;
    panda$core$String* $tmp2336;
    panda$core$String* $tmp2337;
    panda$core$Int64 $tmp2338;
    panda$core$String* fullName2340 = NULL;
    panda$core$String$Index$nullable idx2345;
    panda$core$String* alias2348 = NULL;
    panda$core$String* $tmp2349;
    panda$core$String* $tmp2350;
    panda$core$String* $tmp2351;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2352;
    panda$core$Bit $tmp2354;
    panda$core$String* $tmp2356;
    panda$core$String* $tmp2357;
    panda$core$Int64 $tmp2359;
    org$pandalanguage$pandac$Position position2361;
    org$pandalanguage$pandac$ASTNode* dc2363 = NULL;
    panda$collections$ImmutableArray* annotations2365 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind2367;
    panda$core$String* name2369 = NULL;
    panda$collections$ImmutableArray* generics2371 = NULL;
    panda$collections$ImmutableArray* supertypes2373 = NULL;
    panda$collections$ImmutableArray* members2375 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl2380 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2381;
    org$pandalanguage$pandac$ClassDecl* $tmp2382;
    panda$core$Int64 $tmp2385;
    org$pandalanguage$pandac$Position position2387;
    org$pandalanguage$pandac$ASTNode* dc2389 = NULL;
    panda$collections$ImmutableArray* annotations2391 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind2393;
    panda$core$String* rawName2395 = NULL;
    panda$collections$ImmutableArray* generics2397 = NULL;
    panda$collections$ImmutableArray* parameters2399 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType2401 = NULL;
    panda$collections$ImmutableArray* statements2403 = NULL;
    panda$core$Int64 $tmp2408;
    panda$core$String* name2414 = NULL;
    panda$core$String* $tmp2420;
    panda$core$String* $tmp2421;
    panda$collections$Array* mainParameters2423 = NULL;
    panda$collections$Array* $tmp2424;
    panda$collections$Array* $tmp2425;
    panda$collections$Array* mainStatements2427 = NULL;
    panda$collections$Array* $tmp2428;
    panda$collections$Array* $tmp2429;
    panda$collections$Array* mainArguments2431 = NULL;
    panda$collections$Array* $tmp2432;
    panda$collections$Array* $tmp2433;
    panda$collections$Iterator* Iter$708$332438 = NULL;
    panda$collections$Iterator* $tmp2439;
    panda$collections$Iterator* $tmp2440;
    org$pandalanguage$pandac$ASTNode* p2456 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2457;
    panda$core$Object* $tmp2458;
    org$pandalanguage$pandac$ASTNode* $match$709_372466 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2467;
    panda$core$Int64 $tmp2468;
    org$pandalanguage$pandac$Position position2470;
    panda$core$String* name2472 = NULL;
    org$pandalanguage$pandac$ASTNode* type2474 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2476;
    org$pandalanguage$pandac$Type* $tmp2478;
    org$pandalanguage$pandac$ASTNode* $tmp2480;
    panda$core$Int64 $tmp2482;
    panda$core$Bit $tmp2483;
    org$pandalanguage$pandac$ASTNode* bareConstruct2490 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2491;
    org$pandalanguage$pandac$ASTNode* $tmp2492;
    panda$core$Int64 $tmp2494;
    org$pandalanguage$pandac$ASTNode* $tmp2495;
    panda$core$Int64 $tmp2497;
    panda$collections$ImmutableArray* $tmp2499;
    org$pandalanguage$pandac$ASTNode* $tmp2501;
    panda$core$Int64 $tmp2503;
    org$pandalanguage$pandac$ASTNode* $tmp2504;
    panda$core$Int64 $tmp2506;
    panda$collections$ImmutableArray* $tmp2507;
    org$pandalanguage$pandac$Type* returnType2509 = NULL;
    org$pandalanguage$pandac$Type* $tmp2510;
    org$pandalanguage$pandac$Type* $tmp2511;
    org$pandalanguage$pandac$Type* $tmp2512;
    org$pandalanguage$pandac$Type* $tmp2514;
    org$pandalanguage$pandac$Type* $tmp2515;
    org$pandalanguage$pandac$Type* $tmp2516;
    org$pandalanguage$pandac$MethodDecl* bareMain2518 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2519;
    org$pandalanguage$pandac$MethodDecl* $tmp2520;
    org$pandalanguage$pandac$Position $tmp2522;
    org$pandalanguage$pandac$Annotations* $tmp2523;
    panda$core$Int64 $tmp2525;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2526;
    panda$core$Int64 $tmp2527;
    panda$collections$Array* $tmp2529;
    panda$collections$ImmutableArray* $tmp2531;
    panda$core$String* $tmp2534;
    panda$core$String* $tmp2535;
    panda$core$Object* $tmp2536;
    org$pandalanguage$pandac$MethodDecl* m2538 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2539;
    org$pandalanguage$pandac$MethodDecl* $tmp2540;
    panda$core$Int64 $tmp2544;
    panda$core$Object* $tmp2547;
    panda$core$Int64 $tmp2550;
    org$pandalanguage$pandac$Position position2552;
    org$pandalanguage$pandac$ASTNode* dc2554 = NULL;
    panda$collections$ImmutableArray* annotations2556 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl2558 = NULL;
    panda$core$Int64 old2560;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2562;
    panda$core$Bit $tmp2564;
    org$pandalanguage$pandac$FieldDecl* f2581 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp2582;
    panda$core$Object* $tmp2583;
    panda$core$Int64 $tmp2586;
    panda$core$Bit $tmp2599;
    panda$core$String* $tmp2603;
    panda$core$String* $tmp2604;
    panda$core$String* $tmp2605;
    panda$core$String* $tmp2606;
    panda$core$String* $tmp2607;
    panda$core$String* $tmp2608;
    panda$core$Object* $tmp2613;
    panda$core$Object* $tmp2618;
    panda$io$File* $tmp2628;
    panda$io$File* $tmp2629;
    panda$collections$ListView* $returnValue2630;
    panda$collections$ListView* $tmp2631;
    panda$core$Bit $tmp2636;
    {
        $tmp2274 = self->source;
        $tmp2275 = p_source;
        self->source = $tmp2275;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2275));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2274));
    }
    int $tmp2278;
    {
        $tmp2280 = p_file;
        $match$669_92279 = $tmp2280;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2280));
        panda$core$Int64$init$builtin_int64(&$tmp2281, 17);
        panda$core$Bit $tmp2282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$669_92279->$rawValue, $tmp2281);
        if ($tmp2282.value) {
        {
            panda$collections$ImmutableArray** $tmp2284 = ((panda$collections$ImmutableArray**) ((char*) $match$669_92279->$data + 0));
            entries2283 = *$tmp2284;
            int $tmp2287;
            {
                panda$collections$Array* $tmp2291 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2291);
                $tmp2290 = $tmp2291;
                $tmp2289 = $tmp2290;
                result2288 = $tmp2289;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2289));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2290));
                $tmp2293 = &$s2294;
                currentPackage2292 = $tmp2293;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2293));
                panda$collections$HashMap* $tmp2298 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp2298);
                $tmp2297 = $tmp2298;
                $tmp2296 = $tmp2297;
                aliases2295 = $tmp2296;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2296));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2297));
                {
                    int $tmp2301;
                    {
                        ITable* $tmp2305 = ((panda$collections$Iterable*) entries2283)->$class->itable;
                        while ($tmp2305->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2305 = $tmp2305->next;
                        }
                        $fn2307 $tmp2306 = $tmp2305->methods[0];
                        panda$collections$Iterator* $tmp2308 = $tmp2306(((panda$collections$Iterable*) entries2283));
                        $tmp2304 = $tmp2308;
                        $tmp2303 = $tmp2304;
                        Iter$674$172302 = $tmp2303;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2303));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2304));
                        $l2309:;
                        ITable* $tmp2312 = Iter$674$172302->$class->itable;
                        while ($tmp2312->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2312 = $tmp2312->next;
                        }
                        $fn2314 $tmp2313 = $tmp2312->methods[0];
                        panda$core$Bit $tmp2315 = $tmp2313(Iter$674$172302);
                        panda$core$Bit $tmp2316 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2315);
                        bool $tmp2311 = $tmp2316.value;
                        if (!$tmp2311) goto $l2310;
                        {
                            int $tmp2319;
                            {
                                ITable* $tmp2323 = Iter$674$172302->$class->itable;
                                while ($tmp2323->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2323 = $tmp2323->next;
                                }
                                $fn2325 $tmp2324 = $tmp2323->methods[1];
                                panda$core$Object* $tmp2326 = $tmp2324(Iter$674$172302);
                                $tmp2322 = $tmp2326;
                                $tmp2321 = ((org$pandalanguage$pandac$ASTNode*) $tmp2322);
                                e2320 = $tmp2321;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2321));
                                panda$core$Panda$unref$panda$core$Object($tmp2322);
                                int $tmp2329;
                                {
                                    $tmp2331 = e2320;
                                    $match$675_212330 = $tmp2331;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2331));
                                    panda$core$Int64$init$builtin_int64(&$tmp2332, 30);
                                    panda$core$Bit $tmp2333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$675_212330->$rawValue, $tmp2332);
                                    if ($tmp2333.value) {
                                    {
                                        panda$core$String** $tmp2335 = ((panda$core$String**) ((char*) $match$675_212330->$data + 16));
                                        name2334 = *$tmp2335;
                                        {
                                            $tmp2336 = currentPackage2292;
                                            $tmp2337 = name2334;
                                            currentPackage2292 = $tmp2337;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2337));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2336));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2338, 46);
                                    panda$core$Bit $tmp2339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$675_212330->$rawValue, $tmp2338);
                                    if ($tmp2339.value) {
                                    {
                                        panda$core$String** $tmp2341 = ((panda$core$String**) ((char*) $match$675_212330->$data + 16));
                                        fullName2340 = *$tmp2341;
                                        int $tmp2344;
                                        {
                                            panda$core$String$Index$nullable $tmp2347 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName2340, &$s2346);
                                            idx2345 = $tmp2347;
                                            memset(&alias2348, 0, sizeof(alias2348));
                                            if (((panda$core$Bit) { idx2345.nonnull }).value) {
                                            {
                                                {
                                                    $tmp2349 = alias2348;
                                                    panda$core$String$Index $tmp2353 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName2340, ((panda$core$String$Index) idx2345.value));
                                                    panda$core$Bit$init$builtin_bit(&$tmp2354, false);
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp2352, ((panda$core$String$Index$nullable) { $tmp2353, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2354);
                                                    panda$core$String* $tmp2355 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName2340, $tmp2352);
                                                    $tmp2351 = $tmp2355;
                                                    $tmp2350 = $tmp2351;
                                                    alias2348 = $tmp2350;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2350));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2351));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2349));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2356 = alias2348;
                                                    $tmp2357 = fullName2340;
                                                    alias2348 = $tmp2357;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2357));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2356));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases2295, ((panda$collections$Key*) alias2348), ((panda$core$Object*) fullName2340));
                                        }
                                        $tmp2344 = -1;
                                        goto $l2342;
                                        $l2342:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias2348));
                                        switch ($tmp2344) {
                                            case -1: goto $l2358;
                                        }
                                        $l2358:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2359, 11);
                                    panda$core$Bit $tmp2360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$675_212330->$rawValue, $tmp2359);
                                    if ($tmp2360.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2362 = ((org$pandalanguage$pandac$Position*) ((char*) $match$675_212330->$data + 0));
                                        position2361 = *$tmp2362;
                                        org$pandalanguage$pandac$ASTNode** $tmp2364 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$675_212330->$data + 16));
                                        dc2363 = *$tmp2364;
                                        panda$collections$ImmutableArray** $tmp2366 = ((panda$collections$ImmutableArray**) ((char*) $match$675_212330->$data + 24));
                                        annotations2365 = *$tmp2366;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp2368 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$675_212330->$data + 32));
                                        kind2367 = *$tmp2368;
                                        panda$core$String** $tmp2370 = ((panda$core$String**) ((char*) $match$675_212330->$data + 40));
                                        name2369 = *$tmp2370;
                                        panda$collections$ImmutableArray** $tmp2372 = ((panda$collections$ImmutableArray**) ((char*) $match$675_212330->$data + 48));
                                        generics2371 = *$tmp2372;
                                        panda$collections$ImmutableArray** $tmp2374 = ((panda$collections$ImmutableArray**) ((char*) $match$675_212330->$data + 56));
                                        supertypes2373 = *$tmp2374;
                                        panda$collections$ImmutableArray** $tmp2376 = ((panda$collections$ImmutableArray**) ((char*) $match$675_212330->$data + 64));
                                        members2375 = *$tmp2376;
                                        int $tmp2379;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp2383 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases2295), currentPackage2292, position2361, dc2363, annotations2365, kind2367, name2369, generics2371, supertypes2373, members2375);
                                            $tmp2382 = $tmp2383;
                                            $tmp2381 = $tmp2382;
                                            cl2380 = $tmp2381;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2381));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2382));
                                            if (((panda$core$Bit) { cl2380 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl2380, result2288);
                                            }
                                            }
                                        }
                                        $tmp2379 = -1;
                                        goto $l2377;
                                        $l2377:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2380));
                                        cl2380 = NULL;
                                        switch ($tmp2379) {
                                            case -1: goto $l2384;
                                        }
                                        $l2384:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2385, 26);
                                    panda$core$Bit $tmp2386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$675_212330->$rawValue, $tmp2385);
                                    if ($tmp2386.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2388 = ((org$pandalanguage$pandac$Position*) ((char*) $match$675_212330->$data + 0));
                                        position2387 = *$tmp2388;
                                        org$pandalanguage$pandac$ASTNode** $tmp2390 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$675_212330->$data + 16));
                                        dc2389 = *$tmp2390;
                                        panda$collections$ImmutableArray** $tmp2392 = ((panda$collections$ImmutableArray**) ((char*) $match$675_212330->$data + 24));
                                        annotations2391 = *$tmp2392;
                                        org$pandalanguage$pandac$MethodDecl$Kind* $tmp2394 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$675_212330->$data + 32));
                                        kind2393 = *$tmp2394;
                                        panda$core$String** $tmp2396 = ((panda$core$String**) ((char*) $match$675_212330->$data + 40));
                                        rawName2395 = *$tmp2396;
                                        panda$collections$ImmutableArray** $tmp2398 = ((panda$collections$ImmutableArray**) ((char*) $match$675_212330->$data + 48));
                                        generics2397 = *$tmp2398;
                                        panda$collections$ImmutableArray** $tmp2400 = ((panda$collections$ImmutableArray**) ((char*) $match$675_212330->$data + 56));
                                        parameters2399 = *$tmp2400;
                                        org$pandalanguage$pandac$ASTNode** $tmp2402 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$675_212330->$data + 64));
                                        rawReturnType2401 = *$tmp2402;
                                        panda$collections$ImmutableArray** $tmp2404 = ((panda$collections$ImmutableArray**) ((char*) $match$675_212330->$data + 72));
                                        statements2403 = *$tmp2404;
                                        int $tmp2407;
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp2408, 2);
                                            panda$core$Bit $tmp2409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind2393.$rawValue, $tmp2408);
                                            if ($tmp2409.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, position2387, &$s2410);
                                                $tmp2407 = 0;
                                                goto $l2405;
                                                $l2411:;
                                                $tmp2329 = 0;
                                                goto $l2327;
                                                $l2412:;
                                                $tmp2319 = 0;
                                                goto $l2317;
                                                $l2413:;
                                                goto $l2309;
                                            }
                                            }
                                            org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2295), ((panda$collections$List*) result2288));
                                            memset(&name2414, 0, sizeof(name2414));
                                            panda$core$Bit $tmp2416 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(rawName2395, &$s2415);
                                            if ($tmp2416.value) {
                                            {
                                                int $tmp2419;
                                                {
                                                    {
                                                        $tmp2420 = name2414;
                                                        $tmp2421 = &$s2422;
                                                        name2414 = $tmp2421;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2421));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2420));
                                                    }
                                                    panda$collections$Array* $tmp2426 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2426);
                                                    $tmp2425 = $tmp2426;
                                                    $tmp2424 = $tmp2425;
                                                    mainParameters2423 = $tmp2424;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2424));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2425));
                                                    panda$collections$Array* $tmp2430 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2430);
                                                    $tmp2429 = $tmp2430;
                                                    $tmp2428 = $tmp2429;
                                                    mainStatements2427 = $tmp2428;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2428));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2429));
                                                    panda$collections$Array* $tmp2434 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2434);
                                                    $tmp2433 = $tmp2434;
                                                    $tmp2432 = $tmp2433;
                                                    mainArguments2431 = $tmp2432;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2432));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2433));
                                                    {
                                                        int $tmp2437;
                                                        {
                                                            ITable* $tmp2441 = ((panda$collections$Iterable*) parameters2399)->$class->itable;
                                                            while ($tmp2441->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                                                $tmp2441 = $tmp2441->next;
                                                            }
                                                            $fn2443 $tmp2442 = $tmp2441->methods[0];
                                                            panda$collections$Iterator* $tmp2444 = $tmp2442(((panda$collections$Iterable*) parameters2399));
                                                            $tmp2440 = $tmp2444;
                                                            $tmp2439 = $tmp2440;
                                                            Iter$708$332438 = $tmp2439;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2439));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2440));
                                                            $l2445:;
                                                            ITable* $tmp2448 = Iter$708$332438->$class->itable;
                                                            while ($tmp2448->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                $tmp2448 = $tmp2448->next;
                                                            }
                                                            $fn2450 $tmp2449 = $tmp2448->methods[0];
                                                            panda$core$Bit $tmp2451 = $tmp2449(Iter$708$332438);
                                                            panda$core$Bit $tmp2452 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2451);
                                                            bool $tmp2447 = $tmp2452.value;
                                                            if (!$tmp2447) goto $l2446;
                                                            {
                                                                int $tmp2455;
                                                                {
                                                                    ITable* $tmp2459 = Iter$708$332438->$class->itable;
                                                                    while ($tmp2459->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                        $tmp2459 = $tmp2459->next;
                                                                    }
                                                                    $fn2461 $tmp2460 = $tmp2459->methods[1];
                                                                    panda$core$Object* $tmp2462 = $tmp2460(Iter$708$332438);
                                                                    $tmp2458 = $tmp2462;
                                                                    $tmp2457 = ((org$pandalanguage$pandac$ASTNode*) $tmp2458);
                                                                    p2456 = $tmp2457;
                                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2457));
                                                                    panda$core$Panda$unref$panda$core$Object($tmp2458);
                                                                    int $tmp2465;
                                                                    {
                                                                        $tmp2467 = p2456;
                                                                        $match$709_372466 = $tmp2467;
                                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2467));
                                                                        panda$core$Int64$init$builtin_int64(&$tmp2468, 31);
                                                                        panda$core$Bit $tmp2469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_372466->$rawValue, $tmp2468);
                                                                        if ($tmp2469.value) {
                                                                        {
                                                                            org$pandalanguage$pandac$Position* $tmp2471 = ((org$pandalanguage$pandac$Position*) ((char*) $match$709_372466->$data + 0));
                                                                            position2470 = *$tmp2471;
                                                                            panda$core$String** $tmp2473 = ((panda$core$String**) ((char*) $match$709_372466->$data + 16));
                                                                            name2472 = *$tmp2473;
                                                                            org$pandalanguage$pandac$ASTNode** $tmp2475 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$709_372466->$data + 24));
                                                                            type2474 = *$tmp2475;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2477 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                                                            org$pandalanguage$pandac$Type* $tmp2479 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type2474);
                                                                            $tmp2478 = $tmp2479;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2477, name2472, $tmp2478);
                                                                            $tmp2476 = $tmp2477;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainParameters2423, ((panda$core$Object*) $tmp2476));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2476));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2478));
                                                                            org$pandalanguage$pandac$ASTNode* $tmp2481 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                                            panda$core$Int64$init$builtin_int64(&$tmp2482, 20);
                                                                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2481, $tmp2482, position2470, name2472);
                                                                            $tmp2480 = $tmp2481;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainArguments2431, ((panda$core$Object*) $tmp2480));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2480));
                                                                        }
                                                                        }
                                                                        else {
                                                                        {
                                                                            panda$core$Bit$init$builtin_bit(&$tmp2483, false);
                                                                            if ($tmp2483.value) goto $l2484; else goto $l2485;
                                                                            $l2485:;
                                                                            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2486, (panda$core$Int64) { 715 });
                                                                            abort();
                                                                            $l2484:;
                                                                        }
                                                                        }
                                                                    }
                                                                    $tmp2465 = -1;
                                                                    goto $l2463;
                                                                    $l2463:;
                                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2467));
                                                                    switch ($tmp2465) {
                                                                        case -1: goto $l2487;
                                                                    }
                                                                    $l2487:;
                                                                }
                                                                $tmp2455 = -1;
                                                                goto $l2453;
                                                                $l2453:;
                                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p2456));
                                                                p2456 = NULL;
                                                                switch ($tmp2455) {
                                                                    case -1: goto $l2488;
                                                                }
                                                                $l2488:;
                                                            }
                                                            goto $l2445;
                                                            $l2446:;
                                                        }
                                                        $tmp2437 = -1;
                                                        goto $l2435;
                                                        $l2435:;
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$708$332438));
                                                        Iter$708$332438 = NULL;
                                                        switch ($tmp2437) {
                                                            case -1: goto $l2489;
                                                        }
                                                        $l2489:;
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp2493 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2494, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2496 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2497, 20);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2496, $tmp2497, position2387, &$s2498);
                                                    $tmp2495 = $tmp2496;
                                                    panda$collections$ImmutableArray* $tmp2500 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                                                    panda$collections$ImmutableArray$init($tmp2500);
                                                    $tmp2499 = $tmp2500;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2493, $tmp2494, position2387, $tmp2495, $tmp2499);
                                                    $tmp2492 = $tmp2493;
                                                    $tmp2491 = $tmp2492;
                                                    bareConstruct2490 = $tmp2491;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2491));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2492));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2499));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2495));
                                                    org$pandalanguage$pandac$ASTNode* $tmp2502 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2503, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2505 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2506, 15);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2505, $tmp2506, position2387, bareConstruct2490, name2414);
                                                    $tmp2504 = $tmp2505;
                                                    panda$collections$ImmutableArray* $tmp2508 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainArguments2431);
                                                    $tmp2507 = $tmp2508;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2502, $tmp2503, position2387, $tmp2504, $tmp2507);
                                                    $tmp2501 = $tmp2502;
                                                    panda$collections$Array$add$panda$collections$Array$T(mainStatements2427, ((panda$core$Object*) $tmp2501));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2501));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2507));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2504));
                                                    memset(&returnType2509, 0, sizeof(returnType2509));
                                                    if (((panda$core$Bit) { rawReturnType2401 != NULL }).value) {
                                                    {
                                                        {
                                                            $tmp2510 = returnType2509;
                                                            org$pandalanguage$pandac$Type* $tmp2513 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType2401);
                                                            $tmp2512 = $tmp2513;
                                                            $tmp2511 = $tmp2512;
                                                            returnType2509 = $tmp2511;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2511));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2512));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2510));
                                                        }
                                                    }
                                                    }
                                                    else {
                                                    {
                                                        {
                                                            $tmp2514 = returnType2509;
                                                            org$pandalanguage$pandac$Type* $tmp2517 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                            $tmp2516 = $tmp2517;
                                                            $tmp2515 = $tmp2516;
                                                            returnType2509 = $tmp2515;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2515));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2516));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2514));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$MethodDecl* $tmp2521 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                                                    org$pandalanguage$pandac$Position$init(&$tmp2522);
                                                    org$pandalanguage$pandac$Annotations* $tmp2524 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2525, 16);
                                                    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2524, $tmp2525);
                                                    $tmp2523 = $tmp2524;
                                                    panda$core$Int64$init$builtin_int64(&$tmp2527, 0);
                                                    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2526, $tmp2527);
                                                    panda$collections$Array* $tmp2530 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2530);
                                                    $tmp2529 = $tmp2530;
                                                    panda$collections$ImmutableArray* $tmp2532 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainStatements2427);
                                                    $tmp2531 = $tmp2532;
                                                    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2521, self->bareCodeClass, $tmp2522, NULL, $tmp2523, $tmp2526, &$s2528, $tmp2529, mainParameters2423, returnType2509, $tmp2531);
                                                    $tmp2520 = $tmp2521;
                                                    $tmp2519 = $tmp2520;
                                                    bareMain2518 = $tmp2519;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2519));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2520));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2531));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2529));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2523));
                                                    panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) bareMain2518));
                                                }
                                                $tmp2419 = -1;
                                                goto $l2417;
                                                $l2417:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareMain2518));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2509));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareConstruct2490));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainArguments2431));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainStatements2427));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainParameters2423));
                                                mainParameters2423 = NULL;
                                                mainStatements2427 = NULL;
                                                mainArguments2431 = NULL;
                                                bareConstruct2490 = NULL;
                                                bareMain2518 = NULL;
                                                switch ($tmp2419) {
                                                    case -1: goto $l2533;
                                                }
                                                $l2533:;
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2534 = name2414;
                                                    $tmp2535 = rawName2395;
                                                    name2414 = $tmp2535;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2535));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2534));
                                                }
                                            }
                                            }
                                            panda$core$Object* $tmp2537 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                            $tmp2536 = $tmp2537;
                                            panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2536)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2536);
                                            org$pandalanguage$pandac$MethodDecl* $tmp2541 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, self->bareCodeClass, position2387, dc2389, annotations2391, kind2393, name2414, generics2397, parameters2399, rawReturnType2401, statements2403);
                                            $tmp2540 = $tmp2541;
                                            $tmp2539 = $tmp2540;
                                            m2538 = $tmp2539;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2539));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2540));
                                            panda$core$Bit $tmp2542 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2538->annotations);
                                            if ($tmp2542.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) m2538)->position, &$s2543);
                                                panda$core$Int64$init$builtin_int64(&$tmp2544, 16);
                                                panda$core$Int64 $tmp2545 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp2544);
                                                panda$core$Int64 $tmp2546 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(m2538->annotations->flags, $tmp2545);
                                                m2538->annotations->flags = $tmp2546;
                                            }
                                            }
                                            panda$core$Object* $tmp2548 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                            $tmp2547 = $tmp2548;
                                            panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2547)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2547);
                                            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) m2538));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) m2538));
                                        }
                                        $tmp2407 = -1;
                                        goto $l2405;
                                        $l2405:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2538));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2414));
                                        m2538 = NULL;
                                        switch ($tmp2407) {
                                            case 0: goto $l2411;
                                            case -1: goto $l2549;
                                        }
                                        $l2549:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2550, 16);
                                    panda$core$Bit $tmp2551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$675_212330->$rawValue, $tmp2550);
                                    if ($tmp2551.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2553 = ((org$pandalanguage$pandac$Position*) ((char*) $match$675_212330->$data + 0));
                                        position2552 = *$tmp2553;
                                        org$pandalanguage$pandac$ASTNode** $tmp2555 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$675_212330->$data + 16));
                                        dc2554 = *$tmp2555;
                                        panda$collections$ImmutableArray** $tmp2557 = ((panda$collections$ImmutableArray**) ((char*) $match$675_212330->$data + 24));
                                        annotations2556 = *$tmp2557;
                                        org$pandalanguage$pandac$ASTNode** $tmp2559 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$675_212330->$data + 32));
                                        varDecl2558 = *$tmp2559;
                                        org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2295), ((panda$collections$List*) result2288));
                                        panda$core$Int64 $tmp2561 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        old2560 = $tmp2561;
                                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, self->bareCodeClass, position2552, dc2554, annotations2556, varDecl2558);
                                        panda$core$Int64 $tmp2563 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        panda$core$Bit$init$builtin_bit(&$tmp2564, false);
                                        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2562, old2560, $tmp2563, $tmp2564);
                                        int64_t $tmp2566 = $tmp2562.min.value;
                                        panda$core$Int64 i2565 = { $tmp2566 };
                                        int64_t $tmp2568 = $tmp2562.max.value;
                                        bool $tmp2569 = $tmp2562.inclusive.value;
                                        if ($tmp2569) goto $l2576; else goto $l2577;
                                        $l2576:;
                                        if ($tmp2566 <= $tmp2568) goto $l2570; else goto $l2572;
                                        $l2577:;
                                        if ($tmp2566 < $tmp2568) goto $l2570; else goto $l2572;
                                        $l2570:;
                                        {
                                            int $tmp2580;
                                            {
                                                panda$core$Object* $tmp2584 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->bareCodeClass->fields, i2565);
                                                $tmp2583 = $tmp2584;
                                                $tmp2582 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2583);
                                                f2581 = $tmp2582;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2582));
                                                panda$core$Panda$unref$panda$core$Object($tmp2583);
                                                panda$core$Int64$init$builtin_int64(&$tmp2586, 2);
                                                panda$core$Bit $tmp2587 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(f2581->fieldKind.$rawValue, $tmp2586);
                                                bool $tmp2585 = $tmp2587.value;
                                                if (!$tmp2585) goto $l2588;
                                                panda$core$Bit $tmp2589 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f2581->annotations);
                                                $tmp2585 = $tmp2589.value;
                                                $l2588:;
                                                panda$core$Bit $tmp2590 = { $tmp2585 };
                                                if ($tmp2590.value) {
                                                {
                                                    org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) f2581)->position, &$s2591);
                                                }
                                                }
                                            }
                                            $tmp2580 = -1;
                                            goto $l2578;
                                            $l2578:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f2581));
                                            f2581 = NULL;
                                            switch ($tmp2580) {
                                                case -1: goto $l2592;
                                            }
                                            $l2592:;
                                        }
                                        $l2573:;
                                        int64_t $tmp2594 = $tmp2568 - i2565.value;
                                        if ($tmp2569) goto $l2595; else goto $l2596;
                                        $l2595:;
                                        if ((uint64_t) $tmp2594 >= 1) goto $l2593; else goto $l2572;
                                        $l2596:;
                                        if ((uint64_t) $tmp2594 > 1) goto $l2593; else goto $l2572;
                                        $l2593:;
                                        i2565.value += 1;
                                        goto $l2570;
                                        $l2572:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp2599, false);
                                        if ($tmp2599.value) goto $l2600; else goto $l2601;
                                        $l2601:;
                                        panda$core$String* $tmp2610 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2609, ((panda$core$Object*) e2320));
                                        $tmp2608 = $tmp2610;
                                        panda$core$String* $tmp2612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2608, &$s2611);
                                        $tmp2607 = $tmp2612;
                                        panda$core$Int64$wrapper* $tmp2614;
                                        $tmp2614 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                                        $tmp2614->value = e2320->$rawValue;
                                        $tmp2613 = ((panda$core$Object*) $tmp2614);
                                        panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2607, $tmp2613);
                                        $tmp2606 = $tmp2615;
                                        panda$core$String* $tmp2617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2606, &$s2616);
                                        $tmp2605 = $tmp2617;
                                        org$pandalanguage$pandac$Position $tmp2620 = (($fn2619) e2320->$class->vtable[2])(e2320);
                                        org$pandalanguage$pandac$Position$wrapper* $tmp2621;
                                        $tmp2621 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                                        $tmp2621->value = $tmp2620;
                                        $tmp2618 = ((panda$core$Object*) $tmp2621);
                                        panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2605, $tmp2618);
                                        $tmp2604 = $tmp2622;
                                        panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2604, &$s2623);
                                        $tmp2603 = $tmp2624;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2602, (panda$core$Int64) { 764 }, $tmp2603);
                                        abort();
                                        $l2600:;
                                    }
                                    }
                                    }
                                    }
                                    }
                                    }
                                }
                                $tmp2329 = -1;
                                goto $l2327;
                                $l2327:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2331));
                                switch ($tmp2329) {
                                    case 0: goto $l2412;
                                    case -1: goto $l2625;
                                }
                                $l2625:;
                            }
                            $tmp2319 = -1;
                            goto $l2317;
                            $l2317:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2320));
                            e2320 = NULL;
                            switch ($tmp2319) {
                                case 0: goto $l2413;
                                case -1: goto $l2626;
                            }
                            $l2626:;
                        }
                        goto $l2309;
                        $l2310:;
                    }
                    $tmp2301 = -1;
                    goto $l2299;
                    $l2299:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$674$172302));
                    Iter$674$172302 = NULL;
                    switch ($tmp2301) {
                        case -1: goto $l2627;
                    }
                    $l2627:;
                }
                {
                    $tmp2628 = self->source;
                    $tmp2629 = NULL;
                    self->source = $tmp2629;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2629));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2628));
                }
                $tmp2631 = ((panda$collections$ListView*) result2288);
                $returnValue2630 = $tmp2631;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2631));
                $tmp2287 = 0;
                goto $l2285;
                $l2632:;
                $tmp2278 = 0;
                goto $l2276;
                $l2633:;
                return $returnValue2630;
            }
            $l2285:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases2295));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage2292));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2288));
            result2288 = NULL;
            currentPackage2292 = NULL;
            aliases2295 = NULL;
            switch ($tmp2287) {
                case 0: goto $l2632;
            }
            $l2635:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2636, false);
            if ($tmp2636.value) goto $l2637; else goto $l2638;
            $l2638:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2639, (panda$core$Int64) { 770 });
            abort();
            $l2637:;
        }
        }
    }
    $tmp2278 = -1;
    goto $l2276;
    $l2276:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2280));
    switch ($tmp2278) {
        case 0: goto $l2633;
        case -1: goto $l2640;
    }
    $l2640:;
    abort();
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp2643;
    {
    }
    $tmp2643 = -1;
    goto $l2641;
    $l2641:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2643) {
        case -1: goto $l2644;
    }
    $l2644:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bareCodeClass));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}

