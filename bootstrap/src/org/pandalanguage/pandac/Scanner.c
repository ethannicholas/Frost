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
#include "panda/core/Equatable.h"
#include "panda/collections/Stack.h"
#include "panda/collections/List.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/HashMap.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Key.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Scanner$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

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
typedef panda$core$Bit (*$fn386)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn387)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn400)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn401)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn414)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn415)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn428)(panda$core$Object*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn429)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn531)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn538)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn549)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn691)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn698)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn709)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn738)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn745)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn756)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn802)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn809)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn820)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn851)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn858)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn869)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn905)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn912)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn923)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn952)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn959)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn970)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn996)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1003)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1014)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1028)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1035)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1046)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1147)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1154)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1165)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1189)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1196)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1207)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1221)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1228)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1239)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1263)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1270)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1281)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1323)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1330)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1341)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1427)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1434)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1445)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1483)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1502)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1509)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1520)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1736)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1743)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1754)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1773)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1826)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1833)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1844)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1882)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1904)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1911)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1922)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1974)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1981)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1992)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2031)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2038)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2049)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2079)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2120)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2162)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2169)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2180)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2215)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2222)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2233)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2244)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2273)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2354)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2361)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2372)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2490)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2497)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2508)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn2667)(org$pandalanguage$pandac$ASTNode*);

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
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s2055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static panda$core$String $s2255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static panda$core$String $s2462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s2671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };

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
                panda$core$Int64$init$builtin_int64(&$tmp20, 39);
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
                    panda$core$Int64$init$builtin_int64(&$tmp153, 91);
                    panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17152.$rawValue, $tmp153);
                    if ($tmp154.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp156, 14);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp155, $tmp156);
                        typeKind151 = $tmp155;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp157, 92);
                    panda$core$Bit $tmp158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17152.$rawValue, $tmp157);
                    if ($tmp158.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp160, 15);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp159, $tmp160);
                        typeKind151 = $tmp159;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp161, 93);
                    panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$47_17152.$rawValue, $tmp161);
                    if ($tmp162.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp164, 16);
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp163, $tmp164);
                        typeKind151 = $tmp163;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp165, 94);
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
panda$core$Bit org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Scanner* p_scanner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_text, org$pandalanguage$pandac$ASTNode* p_expr) {
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
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp275, (panda$core$Int8*) &org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit, ((panda$core$Object*) self));
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
                                                $tmp385 = (($fn386) checkExpression273->pointer)(checkExpression273->target, self, p311, text313, expr320);
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
                                                $tmp399 = (($fn400) checkExpression273->pointer)(checkExpression273->target, self, p311, text313, expr320);
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
                                                $tmp413 = (($fn414) checkExpression273->pointer)(checkExpression273->target, self, p311, text313, expr320);
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
                                                $tmp427 = (($fn428) checkExpression273->pointer)(checkExpression273->target, self, p311, text313, expr320);
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
    org$pandalanguage$pandac$Annotations* $tmp516;
    panda$core$Int64 $tmp517;
    panda$core$Int64 $tmp519;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp521;
    panda$core$Int64 $tmp522;
    panda$collections$Iterator* Iter$186$17526 = NULL;
    panda$collections$Iterator* $tmp527;
    panda$collections$Iterator* $tmp528;
    org$pandalanguage$pandac$ASTNode* decl544 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp545;
    panda$core$Object* $tmp546;
    org$pandalanguage$pandac$ASTNode* $match$187_21554 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp555;
    panda$core$Int64 $tmp556;
    org$pandalanguage$pandac$Position declPosition558;
    org$pandalanguage$pandac$ASTNode* target560 = NULL;
    org$pandalanguage$pandac$ASTNode* rawValue562 = NULL;
    panda$core$String* name567 = NULL;
    org$pandalanguage$pandac$Type* type568 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$191_29572 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp573;
    panda$core$Int64 $tmp574;
    panda$core$String* id576 = NULL;
    panda$core$String* $tmp578;
    panda$core$String* $tmp579;
    org$pandalanguage$pandac$Type* $tmp580;
    org$pandalanguage$pandac$Type* $tmp581;
    org$pandalanguage$pandac$Type* $tmp582;
    panda$core$Int64 $tmp584;
    panda$core$String* id586 = NULL;
    org$pandalanguage$pandac$ASTNode* idType588 = NULL;
    panda$core$String* $tmp590;
    panda$core$String* $tmp591;
    org$pandalanguage$pandac$Type* $tmp592;
    org$pandalanguage$pandac$Type* $tmp593;
    org$pandalanguage$pandac$Type* $tmp594;
    panda$core$Bit $tmp596;
    org$pandalanguage$pandac$ASTNode* value601 = NULL;
    panda$core$Int64 $tmp608;
    org$pandalanguage$pandac$ASTNode* $tmp611;
    org$pandalanguage$pandac$ASTNode* $tmp612;
    org$pandalanguage$pandac$ASTNode* $tmp613;
    panda$core$Int64 $tmp615;
    org$pandalanguage$pandac$ASTNode* $tmp616;
    org$pandalanguage$pandac$ASTNode* $tmp617;
    org$pandalanguage$pandac$FieldDecl* field618 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp619;
    org$pandalanguage$pandac$FieldDecl* $tmp620;
    panda$core$Bit $tmp623;
    panda$core$Bit $tmp630;
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
                        $tmp516 = annotations487;
                        panda$core$Int64$init$builtin_int64(&$tmp517, 16);
                        panda$core$Int64 $tmp518 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp516->flags, $tmp517);
                        $tmp516->flags = $tmp518;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp519, 3);
                    panda$core$Bit $tmp520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$175_17503.$rawValue, $tmp519);
                    if ($tmp520.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp522, 3);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp521, $tmp522);
                        fieldKind491 = $tmp521;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp525;
                    {
                        ITable* $tmp529 = ((panda$collections$Iterable*) decls501)->$class->itable;
                        while ($tmp529->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp529 = $tmp529->next;
                        }
                        $fn531 $tmp530 = $tmp529->methods[0];
                        panda$collections$Iterator* $tmp532 = $tmp530(((panda$collections$Iterable*) decls501));
                        $tmp528 = $tmp532;
                        $tmp527 = $tmp528;
                        Iter$186$17526 = $tmp527;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp527));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp528));
                        $l533:;
                        ITable* $tmp536 = Iter$186$17526->$class->itable;
                        while ($tmp536->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp536 = $tmp536->next;
                        }
                        $fn538 $tmp537 = $tmp536->methods[0];
                        panda$core$Bit $tmp539 = $tmp537(Iter$186$17526);
                        panda$core$Bit $tmp540 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp539);
                        bool $tmp535 = $tmp540.value;
                        if (!$tmp535) goto $l534;
                        {
                            int $tmp543;
                            {
                                ITable* $tmp547 = Iter$186$17526->$class->itable;
                                while ($tmp547->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp547 = $tmp547->next;
                                }
                                $fn549 $tmp548 = $tmp547->methods[1];
                                panda$core$Object* $tmp550 = $tmp548(Iter$186$17526);
                                $tmp546 = $tmp550;
                                $tmp545 = ((org$pandalanguage$pandac$ASTNode*) $tmp546);
                                decl544 = $tmp545;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp545));
                                panda$core$Panda$unref$panda$core$Object($tmp546);
                                int $tmp553;
                                {
                                    $tmp555 = decl544;
                                    $match$187_21554 = $tmp555;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp555));
                                    panda$core$Int64$init$builtin_int64(&$tmp556, 13);
                                    panda$core$Bit $tmp557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$187_21554->$rawValue, $tmp556);
                                    if ($tmp557.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp559 = ((org$pandalanguage$pandac$Position*) ((char*) $match$187_21554->$data + 0));
                                        declPosition558 = *$tmp559;
                                        org$pandalanguage$pandac$ASTNode** $tmp561 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$187_21554->$data + 16));
                                        target560 = *$tmp561;
                                        org$pandalanguage$pandac$ASTNode** $tmp563 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$187_21554->$data + 24));
                                        rawValue562 = *$tmp563;
                                        int $tmp566;
                                        {
                                            memset(&name567, 0, sizeof(name567));
                                            memset(&type568, 0, sizeof(type568));
                                            int $tmp571;
                                            {
                                                $tmp573 = target560;
                                                $match$191_29572 = $tmp573;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp573));
                                                panda$core$Int64$init$builtin_int64(&$tmp574, 20);
                                                panda$core$Bit $tmp575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_29572->$rawValue, $tmp574);
                                                if ($tmp575.value) {
                                                {
                                                    panda$core$String** $tmp577 = ((panda$core$String**) ((char*) $match$191_29572->$data + 16));
                                                    id576 = *$tmp577;
                                                    {
                                                        $tmp578 = name567;
                                                        $tmp579 = id576;
                                                        name567 = $tmp579;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp579));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp578));
                                                    }
                                                    {
                                                        $tmp580 = type568;
                                                        org$pandalanguage$pandac$Type* $tmp583 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp582 = $tmp583;
                                                        $tmp581 = $tmp582;
                                                        type568 = $tmp581;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp581));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Int64$init$builtin_int64(&$tmp584, 44);
                                                panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$191_29572->$rawValue, $tmp584);
                                                if ($tmp585.value) {
                                                {
                                                    panda$core$String** $tmp587 = ((panda$core$String**) ((char*) $match$191_29572->$data + 16));
                                                    id586 = *$tmp587;
                                                    org$pandalanguage$pandac$ASTNode** $tmp589 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$191_29572->$data + 24));
                                                    idType588 = *$tmp589;
                                                    {
                                                        $tmp590 = name567;
                                                        $tmp591 = id586;
                                                        name567 = $tmp591;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp591));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
                                                    }
                                                    {
                                                        $tmp592 = type568;
                                                        org$pandalanguage$pandac$Type* $tmp595 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType588);
                                                        $tmp594 = $tmp595;
                                                        $tmp593 = $tmp594;
                                                        type568 = $tmp593;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp593));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
                                                    }
                                                }
                                                }
                                                else {
                                                {
                                                    panda$core$Bit$init$builtin_bit(&$tmp596, false);
                                                    if ($tmp596.value) goto $l597; else goto $l598;
                                                    $l598:;
                                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s599, (panda$core$Int64) { 199 });
                                                    abort();
                                                    $l597:;
                                                }
                                                }
                                                }
                                            }
                                            $tmp571 = -1;
                                            goto $l569;
                                            $l569:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
                                            switch ($tmp571) {
                                                case -1: goto $l600;
                                            }
                                            $l600:;
                                            memset(&value601, 0, sizeof(value601));
                                            bool $tmp603 = ((panda$core$Bit) { rawValue562 == NULL }).value;
                                            if (!$tmp603) goto $l604;
                                            panda$core$Bit $tmp605 = org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(annotations487);
                                            $tmp603 = $tmp605.value;
                                            $l604:;
                                            panda$core$Bit $tmp606 = { $tmp603 };
                                            bool $tmp602 = $tmp606.value;
                                            if (!$tmp602) goto $l607;
                                            panda$core$Int64$init$builtin_int64(&$tmp608, 1);
                                            panda$core$Bit $tmp609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type568->typeKind.$rawValue, $tmp608);
                                            $tmp602 = $tmp609.value;
                                            $l607:;
                                            panda$core$Bit $tmp610 = { $tmp602 };
                                            if ($tmp610.value) {
                                            {
                                                {
                                                    $tmp611 = value601;
                                                    org$pandalanguage$pandac$ASTNode* $tmp614 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp615, 28);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp614, $tmp615, declPosition558);
                                                    $tmp613 = $tmp614;
                                                    $tmp612 = $tmp613;
                                                    value601 = $tmp612;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp612));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp613));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp611));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp616 = value601;
                                                    $tmp617 = rawValue562;
                                                    value601 = $tmp617;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp616));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$FieldDecl* $tmp621 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp621, p_owner, declPosition558, doccomment466, annotations487, fieldKind491, name567, type568, value601);
                                            $tmp620 = $tmp621;
                                            $tmp619 = $tmp620;
                                            field618 = $tmp619;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp619));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field618));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field618));
                                        }
                                        $tmp566 = -1;
                                        goto $l564;
                                        $l564:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field618));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value601));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type568));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name567));
                                        field618 = NULL;
                                        switch ($tmp566) {
                                            case -1: goto $l622;
                                        }
                                        $l622:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp623, false);
                                        if ($tmp623.value) goto $l624; else goto $l625;
                                        $l625:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s626, (panda$core$Int64) { 214 });
                                        abort();
                                        $l624:;
                                    }
                                    }
                                }
                                $tmp553 = -1;
                                goto $l551;
                                $l551:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
                                switch ($tmp553) {
                                    case -1: goto $l627;
                                }
                                $l627:;
                            }
                            $tmp543 = -1;
                            goto $l541;
                            $l541:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl544));
                            decl544 = NULL;
                            switch ($tmp543) {
                                case -1: goto $l628;
                            }
                            $l628:;
                        }
                        goto $l533;
                        $l534:;
                    }
                    $tmp525 = -1;
                    goto $l523;
                    $l523:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$186$17526));
                    Iter$186$17526 = NULL;
                    switch ($tmp525) {
                        case -1: goto $l629;
                    }
                    $l629:;
                }
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp630, false);
                if ($tmp630.value) goto $l631; else goto $l632;
                $l632:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s633, (panda$core$Int64) { 218 });
                abort();
                $l631:;
            }
            }
        }
        $tmp494 = -1;
        goto $l492;
        $l492:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp496));
        switch ($tmp494) {
            case -1: goto $l634;
        }
        $l634:;
    }
    $tmp465 = -1;
    goto $l463;
    $l463:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations487));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment466));
    annotations487 = NULL;
    switch ($tmp465) {
        case -1: goto $l635;
    }
    $l635:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$224_9639 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp640;
    panda$core$Int64 $tmp641;
    org$pandalanguage$pandac$ASTNode* test643 = NULL;
    panda$core$Int64 $returnValue645;
    panda$core$Int64 $tmp649;
    panda$core$Int64 $tmp651;
    panda$core$Int64 $tmp654;
    panda$core$Int64 $tmp656;
    panda$core$Int64 $tmp659;
    org$pandalanguage$pandac$ASTNode* left661 = NULL;
    org$pandalanguage$pandac$ASTNode* right663 = NULL;
    panda$core$Int64 $tmp665;
    panda$core$Int64 $tmp672;
    panda$core$Int64 $tmp674;
    panda$core$Int64 $tmp677;
    panda$collections$ImmutableArray* statements679 = NULL;
    panda$core$Int64 result681;
    panda$core$Int64 $tmp682;
    panda$collections$Iterator* Iter$237$17686 = NULL;
    panda$collections$Iterator* $tmp687;
    panda$collections$Iterator* $tmp688;
    org$pandalanguage$pandac$ASTNode* s704 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp705;
    panda$core$Object* $tmp706;
    panda$core$Int64 $tmp717;
    panda$core$Int64 $tmp719;
    panda$core$Int64 $tmp722;
    org$pandalanguage$pandac$ASTNode* target724 = NULL;
    panda$collections$ImmutableArray* args726 = NULL;
    panda$core$Int64 result728;
    panda$collections$Iterator* Iter$245$17733 = NULL;
    panda$collections$Iterator* $tmp734;
    panda$collections$Iterator* $tmp735;
    org$pandalanguage$pandac$ASTNode* a751 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp752;
    panda$core$Object* $tmp753;
    panda$core$Int64 $tmp764;
    org$pandalanguage$pandac$ASTNode* base766 = NULL;
    panda$core$Int64 $tmp771;
    panda$core$Int64 $tmp773;
    panda$core$Int64 $tmp776;
    org$pandalanguage$pandac$ASTNode* value778 = NULL;
    panda$core$Int64 $tmp780;
    panda$core$Int64 $tmp786;
    panda$collections$ImmutableArray* statements788 = NULL;
    org$pandalanguage$pandac$ASTNode* test790 = NULL;
    panda$core$Int64 result792;
    panda$collections$Iterator* Iter$260$17797 = NULL;
    panda$collections$Iterator* $tmp798;
    panda$collections$Iterator* $tmp799;
    org$pandalanguage$pandac$ASTNode* s815 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp816;
    panda$core$Object* $tmp817;
    panda$core$Int64 $tmp828;
    org$pandalanguage$pandac$ASTNode* base830 = NULL;
    panda$core$Int64 $tmp835;
    org$pandalanguage$pandac$ASTNode* list837 = NULL;
    panda$collections$ImmutableArray* statements839 = NULL;
    panda$core$Int64 result841;
    panda$collections$Iterator* Iter$268$17846 = NULL;
    panda$collections$Iterator* $tmp847;
    panda$collections$Iterator* $tmp848;
    org$pandalanguage$pandac$ASTNode* s864 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp865;
    panda$core$Object* $tmp866;
    panda$core$Int64 $tmp877;
    panda$core$Int64 $tmp879;
    panda$core$Int64 $tmp882;
    panda$core$Int64 $tmp884;
    panda$core$Int64 $tmp887;
    org$pandalanguage$pandac$ASTNode* test889 = NULL;
    panda$collections$ImmutableArray* ifTrue891 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse893 = NULL;
    panda$core$Int64 result895;
    panda$collections$Iterator* Iter$278$17900 = NULL;
    panda$collections$Iterator* $tmp901;
    panda$collections$Iterator* $tmp902;
    org$pandalanguage$pandac$ASTNode* s918 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp919;
    panda$core$Object* $tmp920;
    panda$core$Int64 $tmp933;
    panda$core$Int64 $tmp935;
    panda$core$Int64 $tmp938;
    panda$collections$ImmutableArray* statements940 = NULL;
    panda$core$Int64 result942;
    panda$core$Int64 $tmp943;
    panda$collections$Iterator* Iter$289$17947 = NULL;
    panda$collections$Iterator* $tmp948;
    panda$collections$Iterator* $tmp949;
    org$pandalanguage$pandac$ASTNode* s965 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp966;
    panda$core$Object* $tmp967;
    panda$core$Int64 $tmp978;
    org$pandalanguage$pandac$ASTNode* value980 = NULL;
    panda$collections$ImmutableArray* whens982 = NULL;
    panda$collections$ImmutableArray* other984 = NULL;
    panda$core$Int64 result986;
    panda$collections$Iterator* Iter$295$17991 = NULL;
    panda$collections$Iterator* $tmp992;
    panda$collections$Iterator* $tmp993;
    org$pandalanguage$pandac$ASTNode* w1009 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1010;
    panda$core$Object* $tmp1011;
    panda$collections$Iterator* Iter$299$211023 = NULL;
    panda$collections$Iterator* $tmp1024;
    panda$collections$Iterator* $tmp1025;
    org$pandalanguage$pandac$ASTNode* s1041 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1042;
    panda$core$Object* $tmp1043;
    panda$core$Int64 $tmp1054;
    panda$core$Int64 $tmp1056;
    panda$core$Int64 $tmp1059;
    panda$core$Int64 $tmp1061;
    panda$core$Int64 $tmp1064;
    panda$core$Int64 $tmp1066;
    panda$core$Int64 $tmp1069;
    org$pandalanguage$pandac$ASTNode* base1071 = NULL;
    panda$core$Int64 $tmp1073;
    panda$core$Int64 $tmp1078;
    panda$core$Int64 $tmp1080;
    panda$core$Int64 $tmp1083;
    panda$core$Int64 $tmp1085;
    panda$core$Int64 $tmp1088;
    panda$core$Int64 $tmp1090;
    panda$core$Int64 $tmp1093;
    org$pandalanguage$pandac$ASTNode* value1095 = NULL;
    panda$core$Int64 $tmp1097;
    panda$core$Int64 $tmp1103;
    panda$core$Int64 $tmp1105;
    panda$core$Int64 $tmp1108;
    panda$core$Int64 $tmp1110;
    panda$core$Int64 $tmp1113;
    panda$core$Int64 $tmp1115;
    panda$core$Int64 $tmp1118;
    panda$core$Int64 $tmp1120;
    panda$core$Int64 $tmp1123;
    panda$core$Int64 $tmp1125;
    panda$core$Int64 $tmp1128;
    panda$core$Int64 $tmp1130;
    panda$core$Int64 $tmp1133;
    panda$collections$ImmutableArray* decls1135 = NULL;
    panda$core$Int64 result1137;
    panda$core$Int64 $tmp1138;
    panda$collections$Iterator* Iter$337$171142 = NULL;
    panda$collections$Iterator* $tmp1143;
    panda$collections$Iterator* $tmp1144;
    org$pandalanguage$pandac$ASTNode* decl1160 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1161;
    panda$core$Object* $tmp1162;
    panda$core$Int64 $tmp1173;
    panda$collections$ImmutableArray* tests1175 = NULL;
    panda$collections$ImmutableArray* statements1177 = NULL;
    panda$core$Int64 result1179;
    panda$core$Int64 $tmp1180;
    panda$collections$Iterator* Iter$343$171184 = NULL;
    panda$collections$Iterator* $tmp1185;
    panda$collections$Iterator* $tmp1186;
    org$pandalanguage$pandac$ASTNode* test1202 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1203;
    panda$core$Object* $tmp1204;
    panda$collections$Iterator* Iter$346$171216 = NULL;
    panda$collections$Iterator* $tmp1217;
    panda$collections$Iterator* $tmp1218;
    org$pandalanguage$pandac$ASTNode* s1234 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1235;
    panda$core$Object* $tmp1236;
    panda$core$Int64 $tmp1247;
    org$pandalanguage$pandac$ASTNode* test1249 = NULL;
    panda$collections$ImmutableArray* statements1251 = NULL;
    panda$core$Int64 result1253;
    panda$collections$Iterator* Iter$352$171258 = NULL;
    panda$collections$Iterator* $tmp1259;
    panda$collections$Iterator* $tmp1260;
    org$pandalanguage$pandac$ASTNode* s1276 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1277;
    panda$core$Object* $tmp1278;
    panda$core$Bit $tmp1289;
    panda$core$String* $tmp1293;
    panda$core$String* $tmp1294;
    int $tmp638;
    {
        $tmp640 = p_node;
        $match$224_9639 = $tmp640;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp640));
        panda$core$Int64$init$builtin_int64(&$tmp641, 1);
        panda$core$Bit $tmp642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp641);
        if ($tmp642.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp644 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9639->$data + 16));
            test643 = *$tmp644;
            panda$core$Int64 $tmp646 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test643);
            $returnValue645 = $tmp646;
            $tmp638 = 0;
            goto $l636;
            $l647:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp649, 2);
        panda$core$Bit $tmp650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp649);
        if ($tmp650.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp651, 0);
            $returnValue645 = $tmp651;
            $tmp638 = 1;
            goto $l636;
            $l652:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp654, 3);
        panda$core$Bit $tmp655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp654);
        if ($tmp655.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp656, 0);
            $returnValue645 = $tmp656;
            $tmp638 = 2;
            goto $l636;
            $l657:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp659, 4);
        panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp659);
        if ($tmp660.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp662 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9639->$data + 16));
            left661 = *$tmp662;
            org$pandalanguage$pandac$ASTNode** $tmp664 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9639->$data + 32));
            right663 = *$tmp664;
            panda$core$Int64$init$builtin_int64(&$tmp665, 1);
            panda$core$Int64 $tmp666 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left661);
            panda$core$Int64 $tmp667 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp665, $tmp666);
            panda$core$Int64 $tmp668 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right663);
            panda$core$Int64 $tmp669 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp667, $tmp668);
            $returnValue645 = $tmp669;
            $tmp638 = 3;
            goto $l636;
            $l670:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp672, 5);
        panda$core$Bit $tmp673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp672);
        if ($tmp673.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp674, 1);
            $returnValue645 = $tmp674;
            $tmp638 = 4;
            goto $l636;
            $l675:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp677, 6);
        panda$core$Bit $tmp678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp677);
        if ($tmp678.value) {
        {
            panda$collections$ImmutableArray** $tmp680 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9639->$data + 16));
            statements679 = *$tmp680;
            panda$core$Int64$init$builtin_int64(&$tmp682, 0);
            result681 = $tmp682;
            {
                int $tmp685;
                {
                    ITable* $tmp689 = ((panda$collections$Iterable*) statements679)->$class->itable;
                    while ($tmp689->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp689 = $tmp689->next;
                    }
                    $fn691 $tmp690 = $tmp689->methods[0];
                    panda$collections$Iterator* $tmp692 = $tmp690(((panda$collections$Iterable*) statements679));
                    $tmp688 = $tmp692;
                    $tmp687 = $tmp688;
                    Iter$237$17686 = $tmp687;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp687));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp688));
                    $l693:;
                    ITable* $tmp696 = Iter$237$17686->$class->itable;
                    while ($tmp696->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp696 = $tmp696->next;
                    }
                    $fn698 $tmp697 = $tmp696->methods[0];
                    panda$core$Bit $tmp699 = $tmp697(Iter$237$17686);
                    panda$core$Bit $tmp700 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp699);
                    bool $tmp695 = $tmp700.value;
                    if (!$tmp695) goto $l694;
                    {
                        int $tmp703;
                        {
                            ITable* $tmp707 = Iter$237$17686->$class->itable;
                            while ($tmp707->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp707 = $tmp707->next;
                            }
                            $fn709 $tmp708 = $tmp707->methods[1];
                            panda$core$Object* $tmp710 = $tmp708(Iter$237$17686);
                            $tmp706 = $tmp710;
                            $tmp705 = ((org$pandalanguage$pandac$ASTNode*) $tmp706);
                            s704 = $tmp705;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp705));
                            panda$core$Panda$unref$panda$core$Object($tmp706);
                            panda$core$Int64 $tmp711 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s704);
                            panda$core$Int64 $tmp712 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result681, $tmp711);
                            result681 = $tmp712;
                        }
                        $tmp703 = -1;
                        goto $l701;
                        $l701:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s704));
                        s704 = NULL;
                        switch ($tmp703) {
                            case -1: goto $l713;
                        }
                        $l713:;
                    }
                    goto $l693;
                    $l694:;
                }
                $tmp685 = -1;
                goto $l683;
                $l683:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$237$17686));
                Iter$237$17686 = NULL;
                switch ($tmp685) {
                    case -1: goto $l714;
                }
                $l714:;
            }
            $returnValue645 = result681;
            $tmp638 = 5;
            goto $l636;
            $l715:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp717, 7);
        panda$core$Bit $tmp718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp717);
        if ($tmp718.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp719, 1);
            $returnValue645 = $tmp719;
            $tmp638 = 6;
            goto $l636;
            $l720:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp722, 8);
        panda$core$Bit $tmp723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp722);
        if ($tmp723.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp725 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9639->$data + 16));
            target724 = *$tmp725;
            panda$collections$ImmutableArray** $tmp727 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9639->$data + 24));
            args726 = *$tmp727;
            panda$core$Int64 $tmp729 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target724);
            result728 = $tmp729;
            {
                int $tmp732;
                {
                    ITable* $tmp736 = ((panda$collections$Iterable*) args726)->$class->itable;
                    while ($tmp736->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp736 = $tmp736->next;
                    }
                    $fn738 $tmp737 = $tmp736->methods[0];
                    panda$collections$Iterator* $tmp739 = $tmp737(((panda$collections$Iterable*) args726));
                    $tmp735 = $tmp739;
                    $tmp734 = $tmp735;
                    Iter$245$17733 = $tmp734;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp734));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp735));
                    $l740:;
                    ITable* $tmp743 = Iter$245$17733->$class->itable;
                    while ($tmp743->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp743 = $tmp743->next;
                    }
                    $fn745 $tmp744 = $tmp743->methods[0];
                    panda$core$Bit $tmp746 = $tmp744(Iter$245$17733);
                    panda$core$Bit $tmp747 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp746);
                    bool $tmp742 = $tmp747.value;
                    if (!$tmp742) goto $l741;
                    {
                        int $tmp750;
                        {
                            ITable* $tmp754 = Iter$245$17733->$class->itable;
                            while ($tmp754->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp754 = $tmp754->next;
                            }
                            $fn756 $tmp755 = $tmp754->methods[1];
                            panda$core$Object* $tmp757 = $tmp755(Iter$245$17733);
                            $tmp753 = $tmp757;
                            $tmp752 = ((org$pandalanguage$pandac$ASTNode*) $tmp753);
                            a751 = $tmp752;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp752));
                            panda$core$Panda$unref$panda$core$Object($tmp753);
                            panda$core$Int64 $tmp758 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a751);
                            panda$core$Int64 $tmp759 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result728, $tmp758);
                            result728 = $tmp759;
                        }
                        $tmp750 = -1;
                        goto $l748;
                        $l748:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a751));
                        a751 = NULL;
                        switch ($tmp750) {
                            case -1: goto $l760;
                        }
                        $l760:;
                    }
                    goto $l740;
                    $l741:;
                }
                $tmp732 = -1;
                goto $l730;
                $l730:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$245$17733));
                Iter$245$17733 = NULL;
                switch ($tmp732) {
                    case -1: goto $l761;
                }
                $l761:;
            }
            $returnValue645 = result728;
            $tmp638 = 7;
            goto $l636;
            $l762:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp764, 10);
        panda$core$Bit $tmp765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp764);
        if ($tmp765.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp767 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9639->$data + 16));
            base766 = *$tmp767;
            panda$core$Int64 $tmp768 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base766);
            $returnValue645 = $tmp768;
            $tmp638 = 8;
            goto $l636;
            $l769:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp771, 12);
        panda$core$Bit $tmp772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp771);
        if ($tmp772.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp773, 1);
            $returnValue645 = $tmp773;
            $tmp638 = 9;
            goto $l636;
            $l774:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp776, 13);
        panda$core$Bit $tmp777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp776);
        if ($tmp777.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp779 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9639->$data + 24));
            value778 = *$tmp779;
            if (((panda$core$Bit) { value778 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp780, 0);
                $returnValue645 = $tmp780;
                $tmp638 = 10;
                goto $l636;
                $l781:;
                return $returnValue645;
            }
            }
            panda$core$Int64 $tmp783 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value778);
            $returnValue645 = $tmp783;
            $tmp638 = 11;
            goto $l636;
            $l784:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp786, 14);
        panda$core$Bit $tmp787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp786);
        if ($tmp787.value) {
        {
            panda$collections$ImmutableArray** $tmp789 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9639->$data + 24));
            statements788 = *$tmp789;
            org$pandalanguage$pandac$ASTNode** $tmp791 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9639->$data + 32));
            test790 = *$tmp791;
            panda$core$Int64 $tmp793 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test790);
            result792 = $tmp793;
            {
                int $tmp796;
                {
                    ITable* $tmp800 = ((panda$collections$Iterable*) statements788)->$class->itable;
                    while ($tmp800->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp800 = $tmp800->next;
                    }
                    $fn802 $tmp801 = $tmp800->methods[0];
                    panda$collections$Iterator* $tmp803 = $tmp801(((panda$collections$Iterable*) statements788));
                    $tmp799 = $tmp803;
                    $tmp798 = $tmp799;
                    Iter$260$17797 = $tmp798;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp798));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
                    $l804:;
                    ITable* $tmp807 = Iter$260$17797->$class->itable;
                    while ($tmp807->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp807 = $tmp807->next;
                    }
                    $fn809 $tmp808 = $tmp807->methods[0];
                    panda$core$Bit $tmp810 = $tmp808(Iter$260$17797);
                    panda$core$Bit $tmp811 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp810);
                    bool $tmp806 = $tmp811.value;
                    if (!$tmp806) goto $l805;
                    {
                        int $tmp814;
                        {
                            ITable* $tmp818 = Iter$260$17797->$class->itable;
                            while ($tmp818->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp818 = $tmp818->next;
                            }
                            $fn820 $tmp819 = $tmp818->methods[1];
                            panda$core$Object* $tmp821 = $tmp819(Iter$260$17797);
                            $tmp817 = $tmp821;
                            $tmp816 = ((org$pandalanguage$pandac$ASTNode*) $tmp817);
                            s815 = $tmp816;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp816));
                            panda$core$Panda$unref$panda$core$Object($tmp817);
                            panda$core$Int64 $tmp822 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s815);
                            panda$core$Int64 $tmp823 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result792, $tmp822);
                            result792 = $tmp823;
                        }
                        $tmp814 = -1;
                        goto $l812;
                        $l812:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s815));
                        s815 = NULL;
                        switch ($tmp814) {
                            case -1: goto $l824;
                        }
                        $l824:;
                    }
                    goto $l804;
                    $l805:;
                }
                $tmp796 = -1;
                goto $l794;
                $l794:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$260$17797));
                Iter$260$17797 = NULL;
                switch ($tmp796) {
                    case -1: goto $l825;
                }
                $l825:;
            }
            $returnValue645 = result792;
            $tmp638 = 12;
            goto $l636;
            $l826:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp828, 15);
        panda$core$Bit $tmp829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp828);
        if ($tmp829.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp831 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9639->$data + 16));
            base830 = *$tmp831;
            panda$core$Int64 $tmp832 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base830);
            $returnValue645 = $tmp832;
            $tmp638 = 13;
            goto $l636;
            $l833:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp835, 18);
        panda$core$Bit $tmp836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp835);
        if ($tmp836.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp838 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9639->$data + 32));
            list837 = *$tmp838;
            panda$collections$ImmutableArray** $tmp840 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9639->$data + 40));
            statements839 = *$tmp840;
            panda$core$Int64 $tmp842 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list837);
            result841 = $tmp842;
            {
                int $tmp845;
                {
                    ITable* $tmp849 = ((panda$collections$Iterable*) statements839)->$class->itable;
                    while ($tmp849->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp849 = $tmp849->next;
                    }
                    $fn851 $tmp850 = $tmp849->methods[0];
                    panda$collections$Iterator* $tmp852 = $tmp850(((panda$collections$Iterable*) statements839));
                    $tmp848 = $tmp852;
                    $tmp847 = $tmp848;
                    Iter$268$17846 = $tmp847;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp847));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp848));
                    $l853:;
                    ITable* $tmp856 = Iter$268$17846->$class->itable;
                    while ($tmp856->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp856 = $tmp856->next;
                    }
                    $fn858 $tmp857 = $tmp856->methods[0];
                    panda$core$Bit $tmp859 = $tmp857(Iter$268$17846);
                    panda$core$Bit $tmp860 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp859);
                    bool $tmp855 = $tmp860.value;
                    if (!$tmp855) goto $l854;
                    {
                        int $tmp863;
                        {
                            ITable* $tmp867 = Iter$268$17846->$class->itable;
                            while ($tmp867->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp867 = $tmp867->next;
                            }
                            $fn869 $tmp868 = $tmp867->methods[1];
                            panda$core$Object* $tmp870 = $tmp868(Iter$268$17846);
                            $tmp866 = $tmp870;
                            $tmp865 = ((org$pandalanguage$pandac$ASTNode*) $tmp866);
                            s864 = $tmp865;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp865));
                            panda$core$Panda$unref$panda$core$Object($tmp866);
                            panda$core$Int64 $tmp871 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s864);
                            panda$core$Int64 $tmp872 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result841, $tmp871);
                            result841 = $tmp872;
                        }
                        $tmp863 = -1;
                        goto $l861;
                        $l861:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s864));
                        s864 = NULL;
                        switch ($tmp863) {
                            case -1: goto $l873;
                        }
                        $l873:;
                    }
                    goto $l853;
                    $l854:;
                }
                $tmp845 = -1;
                goto $l843;
                $l843:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$268$17846));
                Iter$268$17846 = NULL;
                switch ($tmp845) {
                    case -1: goto $l874;
                }
                $l874:;
            }
            $returnValue645 = result841;
            $tmp638 = 14;
            goto $l636;
            $l875:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp877, 19);
        panda$core$Bit $tmp878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp877);
        if ($tmp878.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp879, 0);
            $returnValue645 = $tmp879;
            $tmp638 = 15;
            goto $l636;
            $l880:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp882, 20);
        panda$core$Bit $tmp883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp882);
        if ($tmp883.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp884, 1);
            $returnValue645 = $tmp884;
            $tmp638 = 16;
            goto $l636;
            $l885:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp887, 21);
        panda$core$Bit $tmp888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp887);
        if ($tmp888.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp890 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9639->$data + 16));
            test889 = *$tmp890;
            panda$collections$ImmutableArray** $tmp892 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9639->$data + 24));
            ifTrue891 = *$tmp892;
            org$pandalanguage$pandac$ASTNode** $tmp894 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9639->$data + 32));
            ifFalse893 = *$tmp894;
            panda$core$Int64 $tmp896 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test889);
            result895 = $tmp896;
            {
                int $tmp899;
                {
                    ITable* $tmp903 = ((panda$collections$Iterable*) ifTrue891)->$class->itable;
                    while ($tmp903->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp903 = $tmp903->next;
                    }
                    $fn905 $tmp904 = $tmp903->methods[0];
                    panda$collections$Iterator* $tmp906 = $tmp904(((panda$collections$Iterable*) ifTrue891));
                    $tmp902 = $tmp906;
                    $tmp901 = $tmp902;
                    Iter$278$17900 = $tmp901;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp901));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp902));
                    $l907:;
                    ITable* $tmp910 = Iter$278$17900->$class->itable;
                    while ($tmp910->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp910 = $tmp910->next;
                    }
                    $fn912 $tmp911 = $tmp910->methods[0];
                    panda$core$Bit $tmp913 = $tmp911(Iter$278$17900);
                    panda$core$Bit $tmp914 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp913);
                    bool $tmp909 = $tmp914.value;
                    if (!$tmp909) goto $l908;
                    {
                        int $tmp917;
                        {
                            ITable* $tmp921 = Iter$278$17900->$class->itable;
                            while ($tmp921->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp921 = $tmp921->next;
                            }
                            $fn923 $tmp922 = $tmp921->methods[1];
                            panda$core$Object* $tmp924 = $tmp922(Iter$278$17900);
                            $tmp920 = $tmp924;
                            $tmp919 = ((org$pandalanguage$pandac$ASTNode*) $tmp920);
                            s918 = $tmp919;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp919));
                            panda$core$Panda$unref$panda$core$Object($tmp920);
                            panda$core$Int64 $tmp925 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s918);
                            panda$core$Int64 $tmp926 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result895, $tmp925);
                            result895 = $tmp926;
                        }
                        $tmp917 = -1;
                        goto $l915;
                        $l915:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s918));
                        s918 = NULL;
                        switch ($tmp917) {
                            case -1: goto $l927;
                        }
                        $l927:;
                    }
                    goto $l907;
                    $l908:;
                }
                $tmp899 = -1;
                goto $l897;
                $l897:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$278$17900));
                Iter$278$17900 = NULL;
                switch ($tmp899) {
                    case -1: goto $l928;
                }
                $l928:;
            }
            if (((panda$core$Bit) { ifFalse893 != NULL }).value) {
            {
                panda$core$Int64 $tmp929 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse893);
                panda$core$Int64 $tmp930 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result895, $tmp929);
                result895 = $tmp930;
            }
            }
            $returnValue645 = result895;
            $tmp638 = 17;
            goto $l636;
            $l931:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp933, 22);
        panda$core$Bit $tmp934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp933);
        if ($tmp934.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp935, 1);
            $returnValue645 = $tmp935;
            $tmp638 = 18;
            goto $l636;
            $l936:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp938, 24);
        panda$core$Bit $tmp939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp938);
        if ($tmp939.value) {
        {
            panda$collections$ImmutableArray** $tmp941 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9639->$data + 24));
            statements940 = *$tmp941;
            panda$core$Int64$init$builtin_int64(&$tmp943, 0);
            result942 = $tmp943;
            {
                int $tmp946;
                {
                    ITable* $tmp950 = ((panda$collections$Iterable*) statements940)->$class->itable;
                    while ($tmp950->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp950 = $tmp950->next;
                    }
                    $fn952 $tmp951 = $tmp950->methods[0];
                    panda$collections$Iterator* $tmp953 = $tmp951(((panda$collections$Iterable*) statements940));
                    $tmp949 = $tmp953;
                    $tmp948 = $tmp949;
                    Iter$289$17947 = $tmp948;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp948));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp949));
                    $l954:;
                    ITable* $tmp957 = Iter$289$17947->$class->itable;
                    while ($tmp957->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp957 = $tmp957->next;
                    }
                    $fn959 $tmp958 = $tmp957->methods[0];
                    panda$core$Bit $tmp960 = $tmp958(Iter$289$17947);
                    panda$core$Bit $tmp961 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp960);
                    bool $tmp956 = $tmp961.value;
                    if (!$tmp956) goto $l955;
                    {
                        int $tmp964;
                        {
                            ITable* $tmp968 = Iter$289$17947->$class->itable;
                            while ($tmp968->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp968 = $tmp968->next;
                            }
                            $fn970 $tmp969 = $tmp968->methods[1];
                            panda$core$Object* $tmp971 = $tmp969(Iter$289$17947);
                            $tmp967 = $tmp971;
                            $tmp966 = ((org$pandalanguage$pandac$ASTNode*) $tmp967);
                            s965 = $tmp966;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp966));
                            panda$core$Panda$unref$panda$core$Object($tmp967);
                            panda$core$Int64 $tmp972 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s965);
                            panda$core$Int64 $tmp973 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result942, $tmp972);
                            result942 = $tmp973;
                        }
                        $tmp964 = -1;
                        goto $l962;
                        $l962:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s965));
                        s965 = NULL;
                        switch ($tmp964) {
                            case -1: goto $l974;
                        }
                        $l974:;
                    }
                    goto $l954;
                    $l955:;
                }
                $tmp946 = -1;
                goto $l944;
                $l944:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$289$17947));
                Iter$289$17947 = NULL;
                switch ($tmp946) {
                    case -1: goto $l975;
                }
                $l975:;
            }
            $returnValue645 = result942;
            $tmp638 = 19;
            goto $l636;
            $l976:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp978, 25);
        panda$core$Bit $tmp979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp978);
        if ($tmp979.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp981 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9639->$data + 16));
            value980 = *$tmp981;
            panda$collections$ImmutableArray** $tmp983 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9639->$data + 24));
            whens982 = *$tmp983;
            panda$collections$ImmutableArray** $tmp985 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9639->$data + 32));
            other984 = *$tmp985;
            panda$core$Int64 $tmp987 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value980);
            result986 = $tmp987;
            {
                int $tmp990;
                {
                    ITable* $tmp994 = ((panda$collections$Iterable*) whens982)->$class->itable;
                    while ($tmp994->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp994 = $tmp994->next;
                    }
                    $fn996 $tmp995 = $tmp994->methods[0];
                    panda$collections$Iterator* $tmp997 = $tmp995(((panda$collections$Iterable*) whens982));
                    $tmp993 = $tmp997;
                    $tmp992 = $tmp993;
                    Iter$295$17991 = $tmp992;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp992));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp993));
                    $l998:;
                    ITable* $tmp1001 = Iter$295$17991->$class->itable;
                    while ($tmp1001->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1001 = $tmp1001->next;
                    }
                    $fn1003 $tmp1002 = $tmp1001->methods[0];
                    panda$core$Bit $tmp1004 = $tmp1002(Iter$295$17991);
                    panda$core$Bit $tmp1005 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1004);
                    bool $tmp1000 = $tmp1005.value;
                    if (!$tmp1000) goto $l999;
                    {
                        int $tmp1008;
                        {
                            ITable* $tmp1012 = Iter$295$17991->$class->itable;
                            while ($tmp1012->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1012 = $tmp1012->next;
                            }
                            $fn1014 $tmp1013 = $tmp1012->methods[1];
                            panda$core$Object* $tmp1015 = $tmp1013(Iter$295$17991);
                            $tmp1011 = $tmp1015;
                            $tmp1010 = ((org$pandalanguage$pandac$ASTNode*) $tmp1011);
                            w1009 = $tmp1010;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1010));
                            panda$core$Panda$unref$panda$core$Object($tmp1011);
                            panda$core$Int64 $tmp1016 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w1009);
                            panda$core$Int64 $tmp1017 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result986, $tmp1016);
                            result986 = $tmp1017;
                        }
                        $tmp1008 = -1;
                        goto $l1006;
                        $l1006:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1009));
                        w1009 = NULL;
                        switch ($tmp1008) {
                            case -1: goto $l1018;
                        }
                        $l1018:;
                    }
                    goto $l998;
                    $l999:;
                }
                $tmp990 = -1;
                goto $l988;
                $l988:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$295$17991));
                Iter$295$17991 = NULL;
                switch ($tmp990) {
                    case -1: goto $l1019;
                }
                $l1019:;
            }
            if (((panda$core$Bit) { other984 != NULL }).value) {
            {
                {
                    int $tmp1022;
                    {
                        ITable* $tmp1026 = ((panda$collections$Iterable*) other984)->$class->itable;
                        while ($tmp1026->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1026 = $tmp1026->next;
                        }
                        $fn1028 $tmp1027 = $tmp1026->methods[0];
                        panda$collections$Iterator* $tmp1029 = $tmp1027(((panda$collections$Iterable*) other984));
                        $tmp1025 = $tmp1029;
                        $tmp1024 = $tmp1025;
                        Iter$299$211023 = $tmp1024;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1024));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1025));
                        $l1030:;
                        ITable* $tmp1033 = Iter$299$211023->$class->itable;
                        while ($tmp1033->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1033 = $tmp1033->next;
                        }
                        $fn1035 $tmp1034 = $tmp1033->methods[0];
                        panda$core$Bit $tmp1036 = $tmp1034(Iter$299$211023);
                        panda$core$Bit $tmp1037 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1036);
                        bool $tmp1032 = $tmp1037.value;
                        if (!$tmp1032) goto $l1031;
                        {
                            int $tmp1040;
                            {
                                ITable* $tmp1044 = Iter$299$211023->$class->itable;
                                while ($tmp1044->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1044 = $tmp1044->next;
                                }
                                $fn1046 $tmp1045 = $tmp1044->methods[1];
                                panda$core$Object* $tmp1047 = $tmp1045(Iter$299$211023);
                                $tmp1043 = $tmp1047;
                                $tmp1042 = ((org$pandalanguage$pandac$ASTNode*) $tmp1043);
                                s1041 = $tmp1042;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1042));
                                panda$core$Panda$unref$panda$core$Object($tmp1043);
                                panda$core$Int64 $tmp1048 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1041);
                                panda$core$Int64 $tmp1049 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result986, $tmp1048);
                                result986 = $tmp1049;
                            }
                            $tmp1040 = -1;
                            goto $l1038;
                            $l1038:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1041));
                            s1041 = NULL;
                            switch ($tmp1040) {
                                case -1: goto $l1050;
                            }
                            $l1050:;
                        }
                        goto $l1030;
                        $l1031:;
                    }
                    $tmp1022 = -1;
                    goto $l1020;
                    $l1020:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$299$211023));
                    Iter$299$211023 = NULL;
                    switch ($tmp1022) {
                        case -1: goto $l1051;
                    }
                    $l1051:;
                }
            }
            }
            $returnValue645 = result986;
            $tmp638 = 20;
            goto $l636;
            $l1052:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1054, 26);
        panda$core$Bit $tmp1055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1054);
        if ($tmp1055.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1056, 10);
            $returnValue645 = $tmp1056;
            $tmp638 = 21;
            goto $l636;
            $l1057:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1059, 28);
        panda$core$Bit $tmp1060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1059);
        if ($tmp1060.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1061, 1);
            $returnValue645 = $tmp1061;
            $tmp638 = 22;
            goto $l636;
            $l1062:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1064, 29);
        panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1064);
        if ($tmp1065.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1066, 0);
            $returnValue645 = $tmp1066;
            $tmp638 = 23;
            goto $l636;
            $l1067:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1069, 32);
        panda$core$Bit $tmp1070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1069);
        if ($tmp1070.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1072 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9639->$data + 24));
            base1071 = *$tmp1072;
            panda$core$Int64$init$builtin_int64(&$tmp1073, 1);
            panda$core$Int64 $tmp1074 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base1071);
            panda$core$Int64 $tmp1075 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1073, $tmp1074);
            $returnValue645 = $tmp1075;
            $tmp638 = 24;
            goto $l636;
            $l1076:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1078, 33);
        panda$core$Bit $tmp1079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1078);
        if ($tmp1079.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1080, 1);
            $returnValue645 = $tmp1080;
            $tmp638 = 25;
            goto $l636;
            $l1081:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1083, 34);
        panda$core$Bit $tmp1084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1083);
        if ($tmp1084.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1085, 1);
            $returnValue645 = $tmp1085;
            $tmp638 = 26;
            goto $l636;
            $l1086:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1088, 35);
        panda$core$Bit $tmp1089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1088);
        if ($tmp1089.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1090, 1);
            $returnValue645 = $tmp1090;
            $tmp638 = 27;
            goto $l636;
            $l1091:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1093, 36);
        panda$core$Bit $tmp1094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1093);
        if ($tmp1094.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1096 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9639->$data + 16));
            value1095 = *$tmp1096;
            if (((panda$core$Bit) { value1095 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp1097, 0);
                $returnValue645 = $tmp1097;
                $tmp638 = 28;
                goto $l636;
                $l1098:;
                return $returnValue645;
            }
            }
            panda$core$Int64 $tmp1100 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value1095);
            $returnValue645 = $tmp1100;
            $tmp638 = 29;
            goto $l636;
            $l1101:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1103, 37);
        panda$core$Bit $tmp1104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1103);
        if ($tmp1104.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1105, 1);
            $returnValue645 = $tmp1105;
            $tmp638 = 30;
            goto $l636;
            $l1106:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1108, 38);
        panda$core$Bit $tmp1109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1108);
        if ($tmp1109.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1110, 1);
            $returnValue645 = $tmp1110;
            $tmp638 = 31;
            goto $l636;
            $l1111:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1113, 39);
        panda$core$Bit $tmp1114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1113);
        if ($tmp1114.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1115, 1);
            $returnValue645 = $tmp1115;
            $tmp638 = 32;
            goto $l636;
            $l1116:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1118, 42);
        panda$core$Bit $tmp1119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1118);
        if ($tmp1119.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1120, 0);
            $returnValue645 = $tmp1120;
            $tmp638 = 33;
            goto $l636;
            $l1121:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1123, 43);
        panda$core$Bit $tmp1124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1123);
        if ($tmp1124.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1125, 10);
            $returnValue645 = $tmp1125;
            $tmp638 = 34;
            goto $l636;
            $l1126:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1128, 45);
        panda$core$Bit $tmp1129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1128);
        if ($tmp1129.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1130, 10);
            $returnValue645 = $tmp1130;
            $tmp638 = 35;
            goto $l636;
            $l1131:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1133, 47);
        panda$core$Bit $tmp1134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1133);
        if ($tmp1134.value) {
        {
            panda$collections$ImmutableArray** $tmp1136 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9639->$data + 24));
            decls1135 = *$tmp1136;
            panda$core$Int64$init$builtin_int64(&$tmp1138, 0);
            result1137 = $tmp1138;
            {
                int $tmp1141;
                {
                    ITable* $tmp1145 = ((panda$collections$Iterable*) decls1135)->$class->itable;
                    while ($tmp1145->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1145 = $tmp1145->next;
                    }
                    $fn1147 $tmp1146 = $tmp1145->methods[0];
                    panda$collections$Iterator* $tmp1148 = $tmp1146(((panda$collections$Iterable*) decls1135));
                    $tmp1144 = $tmp1148;
                    $tmp1143 = $tmp1144;
                    Iter$337$171142 = $tmp1143;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1143));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1144));
                    $l1149:;
                    ITable* $tmp1152 = Iter$337$171142->$class->itable;
                    while ($tmp1152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1152 = $tmp1152->next;
                    }
                    $fn1154 $tmp1153 = $tmp1152->methods[0];
                    panda$core$Bit $tmp1155 = $tmp1153(Iter$337$171142);
                    panda$core$Bit $tmp1156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1155);
                    bool $tmp1151 = $tmp1156.value;
                    if (!$tmp1151) goto $l1150;
                    {
                        int $tmp1159;
                        {
                            ITable* $tmp1163 = Iter$337$171142->$class->itable;
                            while ($tmp1163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1163 = $tmp1163->next;
                            }
                            $fn1165 $tmp1164 = $tmp1163->methods[1];
                            panda$core$Object* $tmp1166 = $tmp1164(Iter$337$171142);
                            $tmp1162 = $tmp1166;
                            $tmp1161 = ((org$pandalanguage$pandac$ASTNode*) $tmp1162);
                            decl1160 = $tmp1161;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1161));
                            panda$core$Panda$unref$panda$core$Object($tmp1162);
                            panda$core$Int64 $tmp1167 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl1160);
                            panda$core$Int64 $tmp1168 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1137, $tmp1167);
                            result1137 = $tmp1168;
                        }
                        $tmp1159 = -1;
                        goto $l1157;
                        $l1157:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1160));
                        decl1160 = NULL;
                        switch ($tmp1159) {
                            case -1: goto $l1169;
                        }
                        $l1169:;
                    }
                    goto $l1149;
                    $l1150:;
                }
                $tmp1141 = -1;
                goto $l1139;
                $l1139:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$337$171142));
                Iter$337$171142 = NULL;
                switch ($tmp1141) {
                    case -1: goto $l1170;
                }
                $l1170:;
            }
            $returnValue645 = result1137;
            $tmp638 = 36;
            goto $l636;
            $l1171:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1173, 48);
        panda$core$Bit $tmp1174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1173);
        if ($tmp1174.value) {
        {
            panda$collections$ImmutableArray** $tmp1176 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9639->$data + 16));
            tests1175 = *$tmp1176;
            panda$collections$ImmutableArray** $tmp1178 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9639->$data + 24));
            statements1177 = *$tmp1178;
            panda$core$Int64$init$builtin_int64(&$tmp1180, 0);
            result1179 = $tmp1180;
            {
                int $tmp1183;
                {
                    ITable* $tmp1187 = ((panda$collections$Iterable*) tests1175)->$class->itable;
                    while ($tmp1187->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1187 = $tmp1187->next;
                    }
                    $fn1189 $tmp1188 = $tmp1187->methods[0];
                    panda$collections$Iterator* $tmp1190 = $tmp1188(((panda$collections$Iterable*) tests1175));
                    $tmp1186 = $tmp1190;
                    $tmp1185 = $tmp1186;
                    Iter$343$171184 = $tmp1185;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1185));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1186));
                    $l1191:;
                    ITable* $tmp1194 = Iter$343$171184->$class->itable;
                    while ($tmp1194->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1194 = $tmp1194->next;
                    }
                    $fn1196 $tmp1195 = $tmp1194->methods[0];
                    panda$core$Bit $tmp1197 = $tmp1195(Iter$343$171184);
                    panda$core$Bit $tmp1198 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1197);
                    bool $tmp1193 = $tmp1198.value;
                    if (!$tmp1193) goto $l1192;
                    {
                        int $tmp1201;
                        {
                            ITable* $tmp1205 = Iter$343$171184->$class->itable;
                            while ($tmp1205->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1205 = $tmp1205->next;
                            }
                            $fn1207 $tmp1206 = $tmp1205->methods[1];
                            panda$core$Object* $tmp1208 = $tmp1206(Iter$343$171184);
                            $tmp1204 = $tmp1208;
                            $tmp1203 = ((org$pandalanguage$pandac$ASTNode*) $tmp1204);
                            test1202 = $tmp1203;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1203));
                            panda$core$Panda$unref$panda$core$Object($tmp1204);
                            panda$core$Int64 $tmp1209 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1202);
                            panda$core$Int64 $tmp1210 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1179, $tmp1209);
                            result1179 = $tmp1210;
                        }
                        $tmp1201 = -1;
                        goto $l1199;
                        $l1199:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1202));
                        test1202 = NULL;
                        switch ($tmp1201) {
                            case -1: goto $l1211;
                        }
                        $l1211:;
                    }
                    goto $l1191;
                    $l1192:;
                }
                $tmp1183 = -1;
                goto $l1181;
                $l1181:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$343$171184));
                Iter$343$171184 = NULL;
                switch ($tmp1183) {
                    case -1: goto $l1212;
                }
                $l1212:;
            }
            {
                int $tmp1215;
                {
                    ITable* $tmp1219 = ((panda$collections$Iterable*) statements1177)->$class->itable;
                    while ($tmp1219->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1219 = $tmp1219->next;
                    }
                    $fn1221 $tmp1220 = $tmp1219->methods[0];
                    panda$collections$Iterator* $tmp1222 = $tmp1220(((panda$collections$Iterable*) statements1177));
                    $tmp1218 = $tmp1222;
                    $tmp1217 = $tmp1218;
                    Iter$346$171216 = $tmp1217;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1217));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1218));
                    $l1223:;
                    ITable* $tmp1226 = Iter$346$171216->$class->itable;
                    while ($tmp1226->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1226 = $tmp1226->next;
                    }
                    $fn1228 $tmp1227 = $tmp1226->methods[0];
                    panda$core$Bit $tmp1229 = $tmp1227(Iter$346$171216);
                    panda$core$Bit $tmp1230 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1229);
                    bool $tmp1225 = $tmp1230.value;
                    if (!$tmp1225) goto $l1224;
                    {
                        int $tmp1233;
                        {
                            ITable* $tmp1237 = Iter$346$171216->$class->itable;
                            while ($tmp1237->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1237 = $tmp1237->next;
                            }
                            $fn1239 $tmp1238 = $tmp1237->methods[1];
                            panda$core$Object* $tmp1240 = $tmp1238(Iter$346$171216);
                            $tmp1236 = $tmp1240;
                            $tmp1235 = ((org$pandalanguage$pandac$ASTNode*) $tmp1236);
                            s1234 = $tmp1235;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1235));
                            panda$core$Panda$unref$panda$core$Object($tmp1236);
                            panda$core$Int64 $tmp1241 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1234);
                            panda$core$Int64 $tmp1242 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1179, $tmp1241);
                            result1179 = $tmp1242;
                        }
                        $tmp1233 = -1;
                        goto $l1231;
                        $l1231:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1234));
                        s1234 = NULL;
                        switch ($tmp1233) {
                            case -1: goto $l1243;
                        }
                        $l1243:;
                    }
                    goto $l1223;
                    $l1224:;
                }
                $tmp1215 = -1;
                goto $l1213;
                $l1213:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$346$171216));
                Iter$346$171216 = NULL;
                switch ($tmp1215) {
                    case -1: goto $l1244;
                }
                $l1244:;
            }
            $returnValue645 = result1179;
            $tmp638 = 37;
            goto $l636;
            $l1245:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1247, 49);
        panda$core$Bit $tmp1248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9639->$rawValue, $tmp1247);
        if ($tmp1248.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1250 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9639->$data + 24));
            test1249 = *$tmp1250;
            panda$collections$ImmutableArray** $tmp1252 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9639->$data + 32));
            statements1251 = *$tmp1252;
            panda$core$Int64 $tmp1254 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1249);
            result1253 = $tmp1254;
            {
                int $tmp1257;
                {
                    ITable* $tmp1261 = ((panda$collections$Iterable*) statements1251)->$class->itable;
                    while ($tmp1261->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1261 = $tmp1261->next;
                    }
                    $fn1263 $tmp1262 = $tmp1261->methods[0];
                    panda$collections$Iterator* $tmp1264 = $tmp1262(((panda$collections$Iterable*) statements1251));
                    $tmp1260 = $tmp1264;
                    $tmp1259 = $tmp1260;
                    Iter$352$171258 = $tmp1259;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1259));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1260));
                    $l1265:;
                    ITable* $tmp1268 = Iter$352$171258->$class->itable;
                    while ($tmp1268->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1268 = $tmp1268->next;
                    }
                    $fn1270 $tmp1269 = $tmp1268->methods[0];
                    panda$core$Bit $tmp1271 = $tmp1269(Iter$352$171258);
                    panda$core$Bit $tmp1272 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1271);
                    bool $tmp1267 = $tmp1272.value;
                    if (!$tmp1267) goto $l1266;
                    {
                        int $tmp1275;
                        {
                            ITable* $tmp1279 = Iter$352$171258->$class->itable;
                            while ($tmp1279->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1279 = $tmp1279->next;
                            }
                            $fn1281 $tmp1280 = $tmp1279->methods[1];
                            panda$core$Object* $tmp1282 = $tmp1280(Iter$352$171258);
                            $tmp1278 = $tmp1282;
                            $tmp1277 = ((org$pandalanguage$pandac$ASTNode*) $tmp1278);
                            s1276 = $tmp1277;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1277));
                            panda$core$Panda$unref$panda$core$Object($tmp1278);
                            panda$core$Int64 $tmp1283 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1276);
                            panda$core$Int64 $tmp1284 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1253, $tmp1283);
                            result1253 = $tmp1284;
                        }
                        $tmp1275 = -1;
                        goto $l1273;
                        $l1273:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1276));
                        s1276 = NULL;
                        switch ($tmp1275) {
                            case -1: goto $l1285;
                        }
                        $l1285:;
                    }
                    goto $l1265;
                    $l1266:;
                }
                $tmp1257 = -1;
                goto $l1255;
                $l1255:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$352$171258));
                Iter$352$171258 = NULL;
                switch ($tmp1257) {
                    case -1: goto $l1286;
                }
                $l1286:;
            }
            $returnValue645 = result1253;
            $tmp638 = 38;
            goto $l636;
            $l1287:;
            return $returnValue645;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1289, false);
            if ($tmp1289.value) goto $l1290; else goto $l1291;
            $l1291:;
            panda$core$String* $tmp1296 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1295, ((panda$core$Object*) p_node));
            $tmp1294 = $tmp1296;
            panda$core$String* $tmp1298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1294, &$s1297);
            $tmp1293 = $tmp1298;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1292, (panda$core$Int64) { 357 }, $tmp1293);
            abort();
            $l1290:;
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
        }
    }
    $tmp638 = -1;
    goto $l636;
    $l636:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp640));
    switch ($tmp638) {
        case 35: goto $l1131;
        case 9: goto $l774;
        case 25: goto $l1081;
        case 4: goto $l675;
        case 2: goto $l657;
        case 34: goto $l1126;
        case -1: goto $l1299;
        case 7: goto $l762;
        case 3: goto $l670;
        case 36: goto $l1171;
        case 8: goto $l769;
        case 18: goto $l936;
        case 19: goto $l976;
        case 30: goto $l1106;
        case 14: goto $l875;
        case 15: goto $l880;
        case 38: goto $l1287;
        case 31: goto $l1111;
        case 20: goto $l1052;
        case 21: goto $l1057;
        case 22: goto $l1062;
        case 0: goto $l647;
        case 33: goto $l1121;
        case 23: goto $l1067;
        case 28: goto $l1098;
        case 26: goto $l1086;
        case 5: goto $l715;
        case 17: goto $l931;
        case 6: goto $l720;
        case 24: goto $l1076;
        case 29: goto $l1101;
        case 10: goto $l781;
        case 32: goto $l1116;
        case 16: goto $l885;
        case 11: goto $l784;
        case 12: goto $l826;
        case 13: goto $l833;
        case 37: goto $l1245;
        case 27: goto $l1091;
        case 1: goto $l652;
    }
    $l1299:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1302;
    panda$core$Int64 $tmp1304;
    panda$core$Int64 c1313;
    panda$core$Int64 $tmp1314;
    panda$collections$Iterator* Iter$365$131318 = NULL;
    panda$collections$Iterator* $tmp1319;
    panda$collections$Iterator* $tmp1320;
    org$pandalanguage$pandac$ASTNode* s1336 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1337;
    panda$core$Object* $tmp1338;
    panda$core$Int64 $tmp1345;
    panda$core$Bit $returnValue1347;
    panda$core$Bit $tmp1348;
    panda$core$Bit $tmp1354;
    panda$core$Bit $tmp1356;
    panda$core$Object* $tmp1303 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp1302 = $tmp1303;
    panda$core$Int64$init$builtin_int64(&$tmp1304, 0);
    panda$core$Bit $tmp1305 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1302)->settings->optimizationLevel, $tmp1304);
    bool $tmp1301 = $tmp1305.value;
    panda$core$Panda$unref$panda$core$Object($tmp1302);
    if (!$tmp1301) goto $l1306;
    panda$core$Bit $tmp1307 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1308 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1307);
    $tmp1301 = $tmp1308.value;
    $l1306:;
    panda$core$Bit $tmp1309 = { $tmp1301 };
    bool $tmp1300 = $tmp1309.value;
    if (!$tmp1300) goto $l1310;
    panda$core$Bit $tmp1311 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1300 = $tmp1311.value;
    $l1310:;
    panda$core$Bit $tmp1312 = { $tmp1300 };
    if ($tmp1312.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1314, 0);
        c1313 = $tmp1314;
        {
            int $tmp1317;
            {
                ITable* $tmp1321 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1321->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1321 = $tmp1321->next;
                }
                $fn1323 $tmp1322 = $tmp1321->methods[0];
                panda$collections$Iterator* $tmp1324 = $tmp1322(((panda$collections$Iterable*) p_statements));
                $tmp1320 = $tmp1324;
                $tmp1319 = $tmp1320;
                Iter$365$131318 = $tmp1319;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1319));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1320));
                $l1325:;
                ITable* $tmp1328 = Iter$365$131318->$class->itable;
                while ($tmp1328->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1328 = $tmp1328->next;
                }
                $fn1330 $tmp1329 = $tmp1328->methods[0];
                panda$core$Bit $tmp1331 = $tmp1329(Iter$365$131318);
                panda$core$Bit $tmp1332 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1331);
                bool $tmp1327 = $tmp1332.value;
                if (!$tmp1327) goto $l1326;
                {
                    int $tmp1335;
                    {
                        ITable* $tmp1339 = Iter$365$131318->$class->itable;
                        while ($tmp1339->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1339 = $tmp1339->next;
                        }
                        $fn1341 $tmp1340 = $tmp1339->methods[1];
                        panda$core$Object* $tmp1342 = $tmp1340(Iter$365$131318);
                        $tmp1338 = $tmp1342;
                        $tmp1337 = ((org$pandalanguage$pandac$ASTNode*) $tmp1338);
                        s1336 = $tmp1337;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1337));
                        panda$core$Panda$unref$panda$core$Object($tmp1338);
                        panda$core$Int64 $tmp1343 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1336);
                        panda$core$Int64 $tmp1344 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1313, $tmp1343);
                        c1313 = $tmp1344;
                        panda$core$Int64$init$builtin_int64(&$tmp1345, 10);
                        panda$core$Bit $tmp1346 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1313, $tmp1345);
                        if ($tmp1346.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp1348, false);
                            $returnValue1347 = $tmp1348;
                            $tmp1335 = 0;
                            goto $l1333;
                            $l1349:;
                            $tmp1317 = 0;
                            goto $l1315;
                            $l1350:;
                            return $returnValue1347;
                        }
                        }
                    }
                    $tmp1335 = -1;
                    goto $l1333;
                    $l1333:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1336));
                    s1336 = NULL;
                    switch ($tmp1335) {
                        case -1: goto $l1352;
                        case 0: goto $l1349;
                    }
                    $l1352:;
                }
                goto $l1325;
                $l1326:;
            }
            $tmp1317 = -1;
            goto $l1315;
            $l1315:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$365$131318));
            Iter$365$131318 = NULL;
            switch ($tmp1317) {
                case 0: goto $l1350;
                case -1: goto $l1353;
            }
            $l1353:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp1354, true);
        $returnValue1347 = $tmp1354;
        return $returnValue1347;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1356, false);
    $returnValue1347 = $tmp1356;
    return $returnValue1347;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawGenerics, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1361 = NULL;
    panda$core$String* $tmp1362;
    panda$core$String* $tmp1363;
    org$pandalanguage$pandac$ASTNode* $match$386_131367 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1368;
    panda$core$Int64 $tmp1369;
    org$pandalanguage$pandac$Position position1371;
    panda$core$String* text1373 = NULL;
    panda$core$String* $tmp1375;
    panda$core$String* $tmp1376;
    panda$core$Bit $tmp1377;
    org$pandalanguage$pandac$Annotations* annotations1382 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1383;
    org$pandalanguage$pandac$Annotations* $tmp1384;
    panda$core$Int64 $tmp1388;
    org$pandalanguage$pandac$Annotations* $tmp1396;
    panda$core$Int64 $tmp1397;
    panda$collections$Array* generics1399 = NULL;
    panda$collections$Array* $tmp1403;
    panda$collections$Array* $tmp1404;
    panda$collections$Array* $tmp1405;
    panda$core$String* fullName1407 = NULL;
    panda$core$String* $tmp1408;
    panda$core$String* $tmp1409;
    panda$core$String* $tmp1410;
    panda$core$String* $tmp1411;
    panda$core$String* $tmp1412;
    panda$collections$Iterator* Iter$401$131422 = NULL;
    panda$collections$Iterator* $tmp1423;
    panda$collections$Iterator* $tmp1424;
    org$pandalanguage$pandac$ASTNode* p1440 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1441;
    panda$core$Object* $tmp1442;
    panda$core$String* parameterName1447 = NULL;
    org$pandalanguage$pandac$Type* bound1448 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$404_171452 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1453;
    panda$core$Int64 $tmp1454;
    panda$core$String* id1456 = NULL;
    panda$core$String* $tmp1458;
    panda$core$String* $tmp1459;
    org$pandalanguage$pandac$Type* $tmp1460;
    org$pandalanguage$pandac$Type* $tmp1461;
    org$pandalanguage$pandac$Type* $tmp1462;
    panda$core$Int64 $tmp1464;
    panda$core$String* id1466 = NULL;
    org$pandalanguage$pandac$ASTNode* type1468 = NULL;
    panda$core$String* $tmp1470;
    panda$core$String* $tmp1471;
    org$pandalanguage$pandac$Type* $tmp1472;
    org$pandalanguage$pandac$Type* $tmp1473;
    org$pandalanguage$pandac$Type* $tmp1474;
    panda$core$Bit $tmp1476;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1481;
    panda$collections$Array* $tmp1488;
    panda$collections$Array* $tmp1489;
    panda$collections$Array* parameters1490 = NULL;
    panda$collections$Array* $tmp1491;
    panda$collections$Array* $tmp1492;
    panda$collections$Iterator* Iter$422$91497 = NULL;
    panda$collections$Iterator* $tmp1498;
    panda$collections$Iterator* $tmp1499;
    org$pandalanguage$pandac$ASTNode* p1515 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1516;
    panda$core$Object* $tmp1517;
    org$pandalanguage$pandac$ASTNode* $match$423_131525 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1526;
    panda$core$Int64 $tmp1527;
    panda$core$String* name1529 = NULL;
    org$pandalanguage$pandac$ASTNode* type1531 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1533;
    org$pandalanguage$pandac$Type* $tmp1535;
    panda$core$Bit $tmp1537;
    org$pandalanguage$pandac$Type* returnType1544 = NULL;
    org$pandalanguage$pandac$Type* $tmp1545;
    org$pandalanguage$pandac$Type* $tmp1546;
    org$pandalanguage$pandac$Type* $tmp1547;
    org$pandalanguage$pandac$Type* $tmp1549;
    org$pandalanguage$pandac$Type* $tmp1550;
    org$pandalanguage$pandac$Type* $tmp1551;
    panda$core$Int64 $tmp1554;
    org$pandalanguage$pandac$Type* $tmp1557;
    org$pandalanguage$pandac$Annotations* $tmp1566;
    panda$core$Int64 $tmp1567;
    panda$core$Int64 $tmp1571;
    org$pandalanguage$pandac$Annotations* $tmp1574;
    panda$core$Int64 $tmp1575;
    org$pandalanguage$pandac$MethodDecl* $returnValue1577;
    org$pandalanguage$pandac$MethodDecl* $tmp1578;
    org$pandalanguage$pandac$MethodDecl* $tmp1579;
    int $tmp1360;
    {
        memset(&doccomment1361, 0, sizeof(doccomment1361));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1362 = doccomment1361;
                $tmp1363 = NULL;
                doccomment1361 = $tmp1363;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1363));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1362));
            }
        }
        }
        else {
        {
            int $tmp1366;
            {
                $tmp1368 = p_rawDoccomment;
                $match$386_131367 = $tmp1368;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1368));
                panda$core$Int64$init$builtin_int64(&$tmp1369, 38);
                panda$core$Bit $tmp1370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386_131367->$rawValue, $tmp1369);
                if ($tmp1370.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1372 = ((org$pandalanguage$pandac$Position*) ((char*) $match$386_131367->$data + 0));
                    position1371 = *$tmp1372;
                    panda$core$String** $tmp1374 = ((panda$core$String**) ((char*) $match$386_131367->$data + 16));
                    text1373 = *$tmp1374;
                    {
                        $tmp1375 = doccomment1361;
                        $tmp1376 = text1373;
                        doccomment1361 = $tmp1376;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1376));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1375));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1377, false);
                    if ($tmp1377.value) goto $l1378; else goto $l1379;
                    $l1379:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1380, (panda$core$Int64) { 390 });
                    abort();
                    $l1378:;
                }
                }
            }
            $tmp1366 = -1;
            goto $l1364;
            $l1364:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1368));
            switch ($tmp1366) {
                case -1: goto $l1381;
            }
            $l1381:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1385 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1384 = $tmp1385;
        $tmp1383 = $tmp1384;
        annotations1382 = $tmp1383;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1383));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1384));
        panda$core$Int64$init$builtin_int64(&$tmp1388, 2);
        panda$core$Bit $tmp1389 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1388);
        bool $tmp1387 = $tmp1389.value;
        if (!$tmp1387) goto $l1390;
        panda$core$Bit $tmp1391 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1387 = $tmp1391.value;
        $l1390:;
        panda$core$Bit $tmp1392 = { $tmp1387 };
        bool $tmp1386 = $tmp1392.value;
        if ($tmp1386) goto $l1393;
        panda$core$Bit $tmp1394 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1382);
        $tmp1386 = $tmp1394.value;
        $l1393:;
        panda$core$Bit $tmp1395 = { $tmp1386 };
        if ($tmp1395.value) {
        {
            $tmp1396 = annotations1382;
            panda$core$Int64$init$builtin_int64(&$tmp1397, 256);
            panda$core$Int64 $tmp1398 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1396->flags, $tmp1397);
            $tmp1396->flags = $tmp1398;
        }
        }
        memset(&generics1399, 0, sizeof(generics1399));
        if (((panda$core$Bit) { p_rawGenerics != NULL }).value) {
        {
            int $tmp1402;
            {
                {
                    $tmp1403 = generics1399;
                    panda$collections$Array* $tmp1406 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1406);
                    $tmp1405 = $tmp1406;
                    $tmp1404 = $tmp1405;
                    generics1399 = $tmp1404;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1404));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1405));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1403));
                }
                panda$core$String* $tmp1413 = panda$core$String$convert$R$panda$core$String(p_owner->name);
                $tmp1412 = $tmp1413;
                panda$core$String* $tmp1415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1412, &$s1414);
                $tmp1411 = $tmp1415;
                panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1411, p_name);
                $tmp1410 = $tmp1416;
                panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1410, &$s1417);
                $tmp1409 = $tmp1418;
                $tmp1408 = $tmp1409;
                fullName1407 = $tmp1408;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1408));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1409));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1410));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1411));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1412));
                {
                    int $tmp1421;
                    {
                        ITable* $tmp1425 = ((panda$collections$Iterable*) p_rawGenerics)->$class->itable;
                        while ($tmp1425->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1425 = $tmp1425->next;
                        }
                        $fn1427 $tmp1426 = $tmp1425->methods[0];
                        panda$collections$Iterator* $tmp1428 = $tmp1426(((panda$collections$Iterable*) p_rawGenerics));
                        $tmp1424 = $tmp1428;
                        $tmp1423 = $tmp1424;
                        Iter$401$131422 = $tmp1423;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1423));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1424));
                        $l1429:;
                        ITable* $tmp1432 = Iter$401$131422->$class->itable;
                        while ($tmp1432->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1432 = $tmp1432->next;
                        }
                        $fn1434 $tmp1433 = $tmp1432->methods[0];
                        panda$core$Bit $tmp1435 = $tmp1433(Iter$401$131422);
                        panda$core$Bit $tmp1436 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1435);
                        bool $tmp1431 = $tmp1436.value;
                        if (!$tmp1431) goto $l1430;
                        {
                            int $tmp1439;
                            {
                                ITable* $tmp1443 = Iter$401$131422->$class->itable;
                                while ($tmp1443->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1443 = $tmp1443->next;
                                }
                                $fn1445 $tmp1444 = $tmp1443->methods[1];
                                panda$core$Object* $tmp1446 = $tmp1444(Iter$401$131422);
                                $tmp1442 = $tmp1446;
                                $tmp1441 = ((org$pandalanguage$pandac$ASTNode*) $tmp1442);
                                p1440 = $tmp1441;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1441));
                                panda$core$Panda$unref$panda$core$Object($tmp1442);
                                memset(&parameterName1447, 0, sizeof(parameterName1447));
                                memset(&bound1448, 0, sizeof(bound1448));
                                int $tmp1451;
                                {
                                    $tmp1453 = p1440;
                                    $match$404_171452 = $tmp1453;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1453));
                                    panda$core$Int64$init$builtin_int64(&$tmp1454, 20);
                                    panda$core$Bit $tmp1455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$404_171452->$rawValue, $tmp1454);
                                    if ($tmp1455.value) {
                                    {
                                        panda$core$String** $tmp1457 = ((panda$core$String**) ((char*) $match$404_171452->$data + 16));
                                        id1456 = *$tmp1457;
                                        {
                                            $tmp1458 = parameterName1447;
                                            $tmp1459 = id1456;
                                            parameterName1447 = $tmp1459;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1459));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1458));
                                        }
                                        {
                                            $tmp1460 = bound1448;
                                            org$pandalanguage$pandac$Type* $tmp1463 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                            $tmp1462 = $tmp1463;
                                            $tmp1461 = $tmp1462;
                                            bound1448 = $tmp1461;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1461));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1462));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1460));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp1464, 44);
                                    panda$core$Bit $tmp1465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$404_171452->$rawValue, $tmp1464);
                                    if ($tmp1465.value) {
                                    {
                                        panda$core$String** $tmp1467 = ((panda$core$String**) ((char*) $match$404_171452->$data + 16));
                                        id1466 = *$tmp1467;
                                        org$pandalanguage$pandac$ASTNode** $tmp1469 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$404_171452->$data + 24));
                                        type1468 = *$tmp1469;
                                        {
                                            $tmp1470 = parameterName1447;
                                            $tmp1471 = id1466;
                                            parameterName1447 = $tmp1471;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1471));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1470));
                                        }
                                        {
                                            $tmp1472 = bound1448;
                                            org$pandalanguage$pandac$Type* $tmp1475 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1468);
                                            $tmp1474 = $tmp1475;
                                            $tmp1473 = $tmp1474;
                                            bound1448 = $tmp1473;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1473));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1474));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1472));
                                        }
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp1476, false);
                                        if ($tmp1476.value) goto $l1477; else goto $l1478;
                                        $l1478:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1479, (panda$core$Int64) { 412 });
                                        abort();
                                        $l1477:;
                                    }
                                    }
                                    }
                                }
                                $tmp1451 = -1;
                                goto $l1449;
                                $l1449:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1453));
                                switch ($tmp1451) {
                                    case -1: goto $l1480;
                                }
                                $l1480:;
                                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1482 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                                org$pandalanguage$pandac$Position $tmp1484 = (($fn1483) p1440->$class->vtable[2])(p1440);
                                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1482, $tmp1484, fullName1407, parameterName1447, bound1448);
                                $tmp1481 = $tmp1482;
                                panda$collections$Array$add$panda$collections$Array$T(generics1399, ((panda$core$Object*) $tmp1481));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1481));
                            }
                            $tmp1439 = -1;
                            goto $l1437;
                            $l1437:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1448));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameterName1447));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1440));
                            p1440 = NULL;
                            switch ($tmp1439) {
                                case -1: goto $l1485;
                            }
                            $l1485:;
                        }
                        goto $l1429;
                        $l1430:;
                    }
                    $tmp1421 = -1;
                    goto $l1419;
                    $l1419:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$401$131422));
                    Iter$401$131422 = NULL;
                    switch ($tmp1421) {
                        case -1: goto $l1486;
                    }
                    $l1486:;
                }
            }
            $tmp1402 = -1;
            goto $l1400;
            $l1400:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1407));
            fullName1407 = NULL;
            switch ($tmp1402) {
                case -1: goto $l1487;
            }
            $l1487:;
        }
        }
        else {
        {
            {
                $tmp1488 = generics1399;
                $tmp1489 = NULL;
                generics1399 = $tmp1489;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1489));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1488));
            }
        }
        }
        panda$collections$Array* $tmp1493 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1493);
        $tmp1492 = $tmp1493;
        $tmp1491 = $tmp1492;
        parameters1490 = $tmp1491;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1491));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1492));
        {
            int $tmp1496;
            {
                ITable* $tmp1500 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1500->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1500 = $tmp1500->next;
                }
                $fn1502 $tmp1501 = $tmp1500->methods[0];
                panda$collections$Iterator* $tmp1503 = $tmp1501(((panda$collections$Iterable*) p_rawParameters));
                $tmp1499 = $tmp1503;
                $tmp1498 = $tmp1499;
                Iter$422$91497 = $tmp1498;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1498));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1499));
                $l1504:;
                ITable* $tmp1507 = Iter$422$91497->$class->itable;
                while ($tmp1507->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1507 = $tmp1507->next;
                }
                $fn1509 $tmp1508 = $tmp1507->methods[0];
                panda$core$Bit $tmp1510 = $tmp1508(Iter$422$91497);
                panda$core$Bit $tmp1511 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1510);
                bool $tmp1506 = $tmp1511.value;
                if (!$tmp1506) goto $l1505;
                {
                    int $tmp1514;
                    {
                        ITable* $tmp1518 = Iter$422$91497->$class->itable;
                        while ($tmp1518->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1518 = $tmp1518->next;
                        }
                        $fn1520 $tmp1519 = $tmp1518->methods[1];
                        panda$core$Object* $tmp1521 = $tmp1519(Iter$422$91497);
                        $tmp1517 = $tmp1521;
                        $tmp1516 = ((org$pandalanguage$pandac$ASTNode*) $tmp1517);
                        p1515 = $tmp1516;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1516));
                        panda$core$Panda$unref$panda$core$Object($tmp1517);
                        int $tmp1524;
                        {
                            $tmp1526 = p1515;
                            $match$423_131525 = $tmp1526;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1526));
                            panda$core$Int64$init$builtin_int64(&$tmp1527, 31);
                            panda$core$Bit $tmp1528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_131525->$rawValue, $tmp1527);
                            if ($tmp1528.value) {
                            {
                                panda$core$String** $tmp1530 = ((panda$core$String**) ((char*) $match$423_131525->$data + 16));
                                name1529 = *$tmp1530;
                                org$pandalanguage$pandac$ASTNode** $tmp1532 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$423_131525->$data + 24));
                                type1531 = *$tmp1532;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1534 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1536 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1531);
                                $tmp1535 = $tmp1536;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1534, name1529, $tmp1535);
                                $tmp1533 = $tmp1534;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1490, ((panda$core$Object*) $tmp1533));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1533));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1537, false);
                                if ($tmp1537.value) goto $l1538; else goto $l1539;
                                $l1539:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1540, (panda$core$Int64) { 427 });
                                abort();
                                $l1538:;
                            }
                            }
                        }
                        $tmp1524 = -1;
                        goto $l1522;
                        $l1522:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1526));
                        switch ($tmp1524) {
                            case -1: goto $l1541;
                        }
                        $l1541:;
                    }
                    $tmp1514 = -1;
                    goto $l1512;
                    $l1512:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1515));
                    p1515 = NULL;
                    switch ($tmp1514) {
                        case -1: goto $l1542;
                    }
                    $l1542:;
                }
                goto $l1504;
                $l1505:;
            }
            $tmp1496 = -1;
            goto $l1494;
            $l1494:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$422$91497));
            Iter$422$91497 = NULL;
            switch ($tmp1496) {
                case -1: goto $l1543;
            }
            $l1543:;
        }
        memset(&returnType1544, 0, sizeof(returnType1544));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1545 = returnType1544;
                org$pandalanguage$pandac$Type* $tmp1548 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1547 = $tmp1548;
                $tmp1546 = $tmp1547;
                returnType1544 = $tmp1546;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1546));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1547));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1545));
            }
        }
        }
        else {
        {
            {
                $tmp1549 = returnType1544;
                org$pandalanguage$pandac$Type* $tmp1552 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1551 = $tmp1552;
                $tmp1550 = $tmp1551;
                returnType1544 = $tmp1550;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1550));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1549));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1554, 1);
        panda$core$Bit $tmp1555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1554);
        bool $tmp1553 = $tmp1555.value;
        if (!$tmp1553) goto $l1556;
        org$pandalanguage$pandac$Type* $tmp1558 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1557 = $tmp1558;
        panda$core$Bit $tmp1559 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1544, $tmp1557);
        $tmp1553 = $tmp1559.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1557));
        $l1556:;
        panda$core$Bit $tmp1560 = { $tmp1553 };
        if ($tmp1560.value) {
        {
            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1561);
        }
        }
        bool $tmp1562 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1562) goto $l1563;
        panda$core$Bit $tmp1564 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1382, p_statements);
        $tmp1562 = $tmp1564.value;
        $l1563:;
        panda$core$Bit $tmp1565 = { $tmp1562 };
        if ($tmp1565.value) {
        {
            $tmp1566 = annotations1382;
            panda$core$Int64$init$builtin_int64(&$tmp1567, 1024);
            panda$core$Int64 $tmp1568 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1566->flags, $tmp1567);
            $tmp1566->flags = $tmp1568;
        }
        }
        bool $tmp1569 = ((panda$core$Bit) { p_statements == NULL }).value;
        if (!$tmp1569) goto $l1570;
        panda$core$Int64$init$builtin_int64(&$tmp1571, 1);
        panda$core$Bit $tmp1572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, $tmp1571);
        $tmp1569 = $tmp1572.value;
        $l1570:;
        panda$core$Bit $tmp1573 = { $tmp1569 };
        if ($tmp1573.value) {
        {
            $tmp1574 = annotations1382;
            panda$core$Int64$init$builtin_int64(&$tmp1575, 512);
            panda$core$Int64 $tmp1576 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1574->flags, $tmp1575);
            $tmp1574->flags = $tmp1576;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1580 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1580, p_owner, p_position, doccomment1361, annotations1382, p_kind, p_name, generics1399, parameters1490, returnType1544, p_statements);
        $tmp1579 = $tmp1580;
        $tmp1578 = $tmp1579;
        $returnValue1577 = $tmp1578;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1578));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1579));
        $tmp1360 = 0;
        goto $l1358;
        $l1581:;
        return $returnValue1577;
    }
    $l1358:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1544));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1490));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics1399));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1382));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1361));
    annotations1382 = NULL;
    parameters1490 = NULL;
    switch ($tmp1360) {
        case 0: goto $l1581;
    }
    $l1583:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$451_91587 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1588;
    panda$core$Int64 $tmp1589;
    org$pandalanguage$pandac$Position position1591;
    org$pandalanguage$pandac$ASTNode* dc1593 = NULL;
    panda$collections$ImmutableArray* annotations1595 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1597 = NULL;
    panda$core$Int64 $tmp1599;
    org$pandalanguage$pandac$Position position1601;
    org$pandalanguage$pandac$ASTNode* dc1603 = NULL;
    panda$collections$ImmutableArray* annotations1605 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1607;
    panda$core$String* name1609 = NULL;
    panda$collections$ImmutableArray* generics1611 = NULL;
    panda$collections$ImmutableArray* parameters1613 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1615 = NULL;
    panda$collections$ImmutableArray* statements1617 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1622 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1623;
    org$pandalanguage$pandac$MethodDecl* $tmp1624;
    panda$core$Int64 $tmp1627;
    org$pandalanguage$pandac$Position position1629;
    org$pandalanguage$pandac$ASTNode* dc1631 = NULL;
    panda$collections$ImmutableArray* annotations1633 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1635;
    panda$core$String* name1637 = NULL;
    panda$collections$ImmutableArray* generics1639 = NULL;
    panda$collections$ImmutableArray* supertypes1641 = NULL;
    panda$collections$ImmutableArray* members1643 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1648 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1649;
    org$pandalanguage$pandac$ClassDecl* $tmp1650;
    panda$core$Weak* $tmp1652;
    panda$core$Weak* $tmp1653;
    panda$core$Weak* $tmp1654;
    panda$core$String* $tmp1656;
    org$pandalanguage$pandac$Alias* $tmp1663;
    panda$core$String* $tmp1665;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1666;
    panda$core$Int64 $tmp1668;
    panda$core$Bit $tmp1670;
    org$pandalanguage$pandac$Position $tmp1672;
    org$pandalanguage$pandac$Alias* $tmp1673;
    panda$core$String* $tmp1675;
    org$pandalanguage$pandac$Position $tmp1677;
    panda$core$Int64 $tmp1679;
    org$pandalanguage$pandac$Position position1681;
    org$pandalanguage$pandac$ASTNode* dc1683 = NULL;
    panda$core$String* name1685 = NULL;
    panda$collections$ImmutableArray* fields1687 = NULL;
    panda$core$Bit $tmp1689;
    panda$core$String* $tmp1693;
    panda$core$String* $tmp1694;
    int $tmp1586;
    {
        $tmp1588 = p_node;
        $match$451_91587 = $tmp1588;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1588));
        panda$core$Int64$init$builtin_int64(&$tmp1589, 16);
        panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_91587->$rawValue, $tmp1589);
        if ($tmp1590.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1592 = ((org$pandalanguage$pandac$Position*) ((char*) $match$451_91587->$data + 0));
            position1591 = *$tmp1592;
            org$pandalanguage$pandac$ASTNode** $tmp1594 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91587->$data + 16));
            dc1593 = *$tmp1594;
            panda$collections$ImmutableArray** $tmp1596 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91587->$data + 24));
            annotations1595 = *$tmp1596;
            org$pandalanguage$pandac$ASTNode** $tmp1598 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91587->$data + 32));
            varDecl1597 = *$tmp1598;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1591, dc1593, annotations1595, varDecl1597);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1599, 26);
        panda$core$Bit $tmp1600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_91587->$rawValue, $tmp1599);
        if ($tmp1600.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1602 = ((org$pandalanguage$pandac$Position*) ((char*) $match$451_91587->$data + 0));
            position1601 = *$tmp1602;
            org$pandalanguage$pandac$ASTNode** $tmp1604 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91587->$data + 16));
            dc1603 = *$tmp1604;
            panda$collections$ImmutableArray** $tmp1606 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91587->$data + 24));
            annotations1605 = *$tmp1606;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1608 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$451_91587->$data + 32));
            kind1607 = *$tmp1608;
            panda$core$String** $tmp1610 = ((panda$core$String**) ((char*) $match$451_91587->$data + 40));
            name1609 = *$tmp1610;
            panda$collections$ImmutableArray** $tmp1612 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91587->$data + 48));
            generics1611 = *$tmp1612;
            panda$collections$ImmutableArray** $tmp1614 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91587->$data + 56));
            parameters1613 = *$tmp1614;
            org$pandalanguage$pandac$ASTNode** $tmp1616 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91587->$data + 64));
            returnType1615 = *$tmp1616;
            panda$collections$ImmutableArray** $tmp1618 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91587->$data + 72));
            statements1617 = *$tmp1618;
            int $tmp1621;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1625 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1601, dc1603, annotations1605, kind1607, name1609, generics1611, parameters1613, returnType1615, statements1617);
                $tmp1624 = $tmp1625;
                $tmp1623 = $tmp1624;
                m1622 = $tmp1623;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1623));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1624));
                if (((panda$core$Bit) { m1622 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1622));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1622));
                }
                }
            }
            $tmp1621 = -1;
            goto $l1619;
            $l1619:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1622));
            m1622 = NULL;
            switch ($tmp1621) {
                case -1: goto $l1626;
            }
            $l1626:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1627, 11);
        panda$core$Bit $tmp1628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_91587->$rawValue, $tmp1627);
        if ($tmp1628.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1630 = ((org$pandalanguage$pandac$Position*) ((char*) $match$451_91587->$data + 0));
            position1629 = *$tmp1630;
            org$pandalanguage$pandac$ASTNode** $tmp1632 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91587->$data + 16));
            dc1631 = *$tmp1632;
            panda$collections$ImmutableArray** $tmp1634 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91587->$data + 24));
            annotations1633 = *$tmp1634;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1636 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$451_91587->$data + 32));
            kind1635 = *$tmp1636;
            panda$core$String** $tmp1638 = ((panda$core$String**) ((char*) $match$451_91587->$data + 40));
            name1637 = *$tmp1638;
            panda$collections$ImmutableArray** $tmp1640 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91587->$data + 48));
            generics1639 = *$tmp1640;
            panda$collections$ImmutableArray** $tmp1642 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91587->$data + 56));
            supertypes1641 = *$tmp1642;
            panda$collections$ImmutableArray** $tmp1644 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91587->$data + 64));
            members1643 = *$tmp1644;
            int $tmp1647;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1651 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1629, dc1631, annotations1633, kind1635, name1637, generics1639, supertypes1641, members1643);
                $tmp1650 = $tmp1651;
                $tmp1649 = $tmp1650;
                inner1648 = $tmp1649;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1649));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1650));
                if (((panda$core$Bit) { inner1648 != NULL }).value) {
                {
                    {
                        $tmp1652 = inner1648->owner;
                        panda$core$Weak* $tmp1655 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1655, ((panda$core$Object*) p_cl));
                        $tmp1654 = $tmp1655;
                        $tmp1653 = $tmp1654;
                        inner1648->owner = $tmp1653;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1653));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1654));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1652));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1648));
                    panda$core$String* $tmp1658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1657);
                    $tmp1656 = $tmp1658;
                    panda$core$Bit $tmp1659 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1648->name, $tmp1656);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1656));
                    if ($tmp1659.value) goto $l1660; else goto $l1661;
                    $l1661:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1662, (panda$core$Int64) { 469 });
                    abort();
                    $l1660:;
                    org$pandalanguage$pandac$Alias* $tmp1664 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1667 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64$init$builtin_int64(&$tmp1668, 1);
                    panda$core$Int64 $tmp1669 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1667, $tmp1668);
                    panda$core$Bit$init$builtin_bit(&$tmp1670, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1666, ((panda$core$Int64$nullable) { $tmp1669, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1670);
                    panda$core$String* $tmp1671 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1648->name, $tmp1666);
                    $tmp1665 = $tmp1671;
                    org$pandalanguage$pandac$Position$init(&$tmp1672);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1664, $tmp1665, inner1648->name, $tmp1672);
                    $tmp1663 = $tmp1664;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1663));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1663));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1665));
                    org$pandalanguage$pandac$Alias* $tmp1674 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1676 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1675 = $tmp1676;
                    org$pandalanguage$pandac$Position$init(&$tmp1677);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1674, $tmp1675, p_cl->name, $tmp1677);
                    $tmp1673 = $tmp1674;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1648->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1673));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1673));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1675));
                }
                }
            }
            $tmp1647 = -1;
            goto $l1645;
            $l1645:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1648));
            inner1648 = NULL;
            switch ($tmp1647) {
                case -1: goto $l1678;
            }
            $l1678:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1679, 9);
        panda$core$Bit $tmp1680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_91587->$rawValue, $tmp1679);
        if ($tmp1680.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1682 = ((org$pandalanguage$pandac$Position*) ((char*) $match$451_91587->$data + 0));
            position1681 = *$tmp1682;
            org$pandalanguage$pandac$ASTNode** $tmp1684 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91587->$data + 16));
            dc1683 = *$tmp1684;
            panda$core$String** $tmp1686 = ((panda$core$String**) ((char*) $match$451_91587->$data + 24));
            name1685 = *$tmp1686;
            panda$collections$ImmutableArray** $tmp1688 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91587->$data + 32));
            fields1687 = *$tmp1688;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1681, dc1683, name1685, fields1687);
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1689, false);
            if ($tmp1689.value) goto $l1690; else goto $l1691;
            $l1691:;
            panda$core$String* $tmp1696 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1695, ((panda$core$Object*) p_node));
            $tmp1694 = $tmp1696;
            panda$core$String* $tmp1698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1694, &$s1697);
            $tmp1693 = $tmp1698;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1692, (panda$core$Int64) { 477 }, $tmp1693);
            abort();
            $l1690:;
        }
        }
        }
        }
        }
    }
    $tmp1586 = -1;
    goto $l1584;
    $l1584:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1588));
    switch ($tmp1586) {
        case -1: goto $l1699;
    }
    $l1699:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1703 = NULL;
    panda$core$String* $tmp1704;
    panda$core$String* $tmp1705;
    org$pandalanguage$pandac$ASTNode* $match$489_131709 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1710;
    panda$core$Int64 $tmp1711;
    org$pandalanguage$pandac$Position position1713;
    panda$core$String* text1715 = NULL;
    panda$core$String* $tmp1717;
    panda$core$String* $tmp1718;
    panda$core$Bit $tmp1719;
    panda$collections$Array* fields1724 = NULL;
    panda$collections$Array* $tmp1725;
    panda$collections$Array* $tmp1726;
    panda$collections$Iterator* Iter$497$91731 = NULL;
    panda$collections$Iterator* $tmp1732;
    panda$collections$Iterator* $tmp1733;
    org$pandalanguage$pandac$ASTNode* t1749 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1750;
    panda$core$Object* $tmp1751;
    org$pandalanguage$pandac$Type* $tmp1756;
    org$pandalanguage$pandac$ChoiceEntry* entry1760 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1761;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1762;
    int $tmp1702;
    {
        memset(&doccomment1703, 0, sizeof(doccomment1703));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1704 = doccomment1703;
                $tmp1705 = NULL;
                doccomment1703 = $tmp1705;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1705));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1704));
            }
        }
        }
        else {
        {
            int $tmp1708;
            {
                $tmp1710 = p_rawDoccomment;
                $match$489_131709 = $tmp1710;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1710));
                panda$core$Int64$init$builtin_int64(&$tmp1711, 38);
                panda$core$Bit $tmp1712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$489_131709->$rawValue, $tmp1711);
                if ($tmp1712.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1714 = ((org$pandalanguage$pandac$Position*) ((char*) $match$489_131709->$data + 0));
                    position1713 = *$tmp1714;
                    panda$core$String** $tmp1716 = ((panda$core$String**) ((char*) $match$489_131709->$data + 16));
                    text1715 = *$tmp1716;
                    {
                        $tmp1717 = doccomment1703;
                        $tmp1718 = text1715;
                        doccomment1703 = $tmp1718;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1718));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1717));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1719, false);
                    if ($tmp1719.value) goto $l1720; else goto $l1721;
                    $l1721:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1722, (panda$core$Int64) { 493 });
                    abort();
                    $l1720:;
                }
                }
            }
            $tmp1708 = -1;
            goto $l1706;
            $l1706:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1710));
            switch ($tmp1708) {
                case -1: goto $l1723;
            }
            $l1723:;
        }
        }
        panda$collections$Array* $tmp1727 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1727);
        $tmp1726 = $tmp1727;
        $tmp1725 = $tmp1726;
        fields1724 = $tmp1725;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1725));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1726));
        {
            int $tmp1730;
            {
                ITable* $tmp1734 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1734->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1734 = $tmp1734->next;
                }
                $fn1736 $tmp1735 = $tmp1734->methods[0];
                panda$collections$Iterator* $tmp1737 = $tmp1735(((panda$collections$Iterable*) p_rawFields));
                $tmp1733 = $tmp1737;
                $tmp1732 = $tmp1733;
                Iter$497$91731 = $tmp1732;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1732));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1733));
                $l1738:;
                ITable* $tmp1741 = Iter$497$91731->$class->itable;
                while ($tmp1741->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1741 = $tmp1741->next;
                }
                $fn1743 $tmp1742 = $tmp1741->methods[0];
                panda$core$Bit $tmp1744 = $tmp1742(Iter$497$91731);
                panda$core$Bit $tmp1745 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1744);
                bool $tmp1740 = $tmp1745.value;
                if (!$tmp1740) goto $l1739;
                {
                    int $tmp1748;
                    {
                        ITable* $tmp1752 = Iter$497$91731->$class->itable;
                        while ($tmp1752->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1752 = $tmp1752->next;
                        }
                        $fn1754 $tmp1753 = $tmp1752->methods[1];
                        panda$core$Object* $tmp1755 = $tmp1753(Iter$497$91731);
                        $tmp1751 = $tmp1755;
                        $tmp1750 = ((org$pandalanguage$pandac$ASTNode*) $tmp1751);
                        t1749 = $tmp1750;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1750));
                        panda$core$Panda$unref$panda$core$Object($tmp1751);
                        org$pandalanguage$pandac$Type* $tmp1757 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1749);
                        $tmp1756 = $tmp1757;
                        panda$collections$Array$add$panda$collections$Array$T(fields1724, ((panda$core$Object*) $tmp1756));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1756));
                    }
                    $tmp1748 = -1;
                    goto $l1746;
                    $l1746:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1749));
                    t1749 = NULL;
                    switch ($tmp1748) {
                        case -1: goto $l1758;
                    }
                    $l1758:;
                }
                goto $l1738;
                $l1739:;
            }
            $tmp1730 = -1;
            goto $l1728;
            $l1728:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$497$91731));
            Iter$497$91731 = NULL;
            switch ($tmp1730) {
                case -1: goto $l1759;
            }
            $l1759:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1763 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1764 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1763, p_cl, p_position, p_name, doccomment1703, $tmp1764, ((panda$collections$ListView*) fields1724));
        $tmp1762 = $tmp1763;
        $tmp1761 = $tmp1762;
        entry1760 = $tmp1761;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1761));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1762));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1760));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1760));
    }
    $tmp1702 = -1;
    goto $l1700;
    $l1700:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1760));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1724));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1703));
    fields1724 = NULL;
    entry1760 = NULL;
    switch ($tmp1702) {
        case -1: goto $l1765;
    }
    $l1765:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1769 = NULL;
    panda$core$String* $tmp1775;
    panda$core$String* $tmp1776;
    panda$core$String* $tmp1777;
    panda$core$String* $tmp1778;
    panda$core$String* $tmp1779;
    panda$core$String* $tmp1780;
    panda$core$String* $tmp1787;
    panda$core$String* $tmp1788;
    panda$core$String* doccomment1789 = NULL;
    panda$core$String* $tmp1790;
    panda$core$String* $tmp1791;
    org$pandalanguage$pandac$ASTNode* $match$523_131795 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1796;
    panda$core$Int64 $tmp1797;
    org$pandalanguage$pandac$Position position1799;
    panda$core$String* text1801 = NULL;
    panda$core$String* $tmp1803;
    panda$core$String* $tmp1804;
    panda$core$Bit $tmp1805;
    org$pandalanguage$pandac$Annotations* annotations1810 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1811;
    org$pandalanguage$pandac$Annotations* $tmp1812;
    panda$collections$Array* parameters1814 = NULL;
    panda$collections$Array* $tmp1815;
    panda$collections$Array* $tmp1816;
    panda$collections$Iterator* Iter$533$131821 = NULL;
    panda$collections$Iterator* $tmp1822;
    panda$collections$Iterator* $tmp1823;
    org$pandalanguage$pandac$ASTNode* p1839 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1840;
    panda$core$Object* $tmp1841;
    panda$core$String* name1846 = NULL;
    org$pandalanguage$pandac$Type* bound1847 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$536_171851 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1852;
    panda$core$Int64 $tmp1853;
    panda$core$String* id1855 = NULL;
    panda$core$String* $tmp1857;
    panda$core$String* $tmp1858;
    org$pandalanguage$pandac$Type* $tmp1859;
    org$pandalanguage$pandac$Type* $tmp1860;
    org$pandalanguage$pandac$Type* $tmp1861;
    panda$core$Int64 $tmp1863;
    panda$core$String* id1865 = NULL;
    org$pandalanguage$pandac$ASTNode* type1867 = NULL;
    panda$core$String* $tmp1869;
    panda$core$String* $tmp1870;
    org$pandalanguage$pandac$Type* $tmp1871;
    org$pandalanguage$pandac$Type* $tmp1872;
    org$pandalanguage$pandac$Type* $tmp1873;
    panda$core$Bit $tmp1875;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1880;
    panda$core$Int64 $tmp1886;
    panda$collections$Array* supertypes1889 = NULL;
    panda$collections$Array* $tmp1890;
    panda$collections$Array* $tmp1891;
    panda$core$Int64 $tmp1893;
    panda$collections$Iterator* Iter$557$131899 = NULL;
    panda$collections$Iterator* $tmp1900;
    panda$collections$Iterator* $tmp1901;
    org$pandalanguage$pandac$ASTNode* s1917 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1918;
    panda$core$Object* $tmp1919;
    org$pandalanguage$pandac$Type* $tmp1924;
    org$pandalanguage$pandac$ClassDecl* result1928 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1929;
    org$pandalanguage$pandac$ClassDecl* $tmp1930;
    panda$core$Object* $tmp1932;
    panda$core$Object* $tmp1934;
    panda$core$Int64 $tmp1936;
    org$pandalanguage$pandac$FieldDecl* rawValue1941 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1942;
    org$pandalanguage$pandac$FieldDecl* $tmp1943;
    org$pandalanguage$pandac$Annotations* $tmp1945;
    panda$core$Int64 $tmp1947;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1948;
    panda$core$Int64 $tmp1949;
    org$pandalanguage$pandac$Type* $tmp1951;
    org$pandalanguage$pandac$FieldDecl* data1953 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1954;
    org$pandalanguage$pandac$FieldDecl* $tmp1955;
    org$pandalanguage$pandac$Annotations* $tmp1957;
    panda$core$Int64 $tmp1959;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1960;
    panda$core$Int64 $tmp1961;
    org$pandalanguage$pandac$Type* $tmp1963;
    panda$collections$Iterator* Iter$576$91969 = NULL;
    panda$collections$Iterator* $tmp1970;
    panda$collections$Iterator* $tmp1971;
    org$pandalanguage$pandac$ASTNode* m1987 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1988;
    panda$core$Object* $tmp1989;
    org$pandalanguage$pandac$ASTNode* $match$577_131997 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1998;
    panda$core$Int64 $tmp1999;
    org$pandalanguage$pandac$Position mPosition2001;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind2003;
    panda$core$Int64 $tmp2005;
    org$pandalanguage$pandac$ClassDecl$Kind $match$580_252007;
    panda$core$Int64 $tmp2008;
    panda$core$Int64 $tmp2010;
    panda$core$Int64 $tmp2013;
    panda$core$Bit foundInit2019;
    panda$core$Bit $tmp2020;
    panda$core$Bit foundCleanup2021;
    panda$core$Bit $tmp2022;
    panda$collections$Iterator* Iter$595$92026 = NULL;
    panda$collections$Iterator* $tmp2027;
    panda$collections$Iterator* $tmp2028;
    org$pandalanguage$pandac$MethodDecl* m2044 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2045;
    panda$core$Object* $tmp2046;
    panda$core$Int64 $tmp2051;
    panda$core$Bit $tmp2053;
    panda$core$Int64 $tmp2059;
    panda$core$Bit $tmp2062;
    panda$core$Int64 $tmp2063;
    panda$core$Int64 $tmp2072;
    org$pandalanguage$pandac$MethodDecl* defaultInit2085 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2086;
    org$pandalanguage$pandac$MethodDecl* $tmp2087;
    org$pandalanguage$pandac$Annotations* $tmp2089;
    panda$core$Int64 $tmp2091;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2092;
    panda$core$Int64 $tmp2093;
    panda$collections$Array* $tmp2095;
    panda$collections$Array* $tmp2097;
    org$pandalanguage$pandac$Type* $tmp2099;
    panda$collections$ImmutableArray* $tmp2101;
    panda$core$Int64 $tmp2109;
    panda$core$Int64 $tmp2112;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2126 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2127;
    org$pandalanguage$pandac$MethodDecl* $tmp2128;
    org$pandalanguage$pandac$Annotations* $tmp2130;
    panda$core$Int64 $tmp2132;
    panda$core$Int64 $tmp2133;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2135;
    panda$core$Int64 $tmp2136;
    panda$collections$Array* $tmp2138;
    panda$collections$Array* $tmp2140;
    org$pandalanguage$pandac$Type* $tmp2142;
    panda$collections$ImmutableArray* $tmp2144;
    panda$core$Int64 $tmp2147;
    panda$core$Bit haveFields2149;
    panda$core$Bit $tmp2150;
    panda$core$Int64 $tmp2152;
    panda$collections$Iterator* Iter$626$172157 = NULL;
    panda$collections$Iterator* $tmp2158;
    panda$collections$Iterator* $tmp2159;
    org$pandalanguage$pandac$ChoiceEntry* e2175 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2176;
    panda$core$Object* $tmp2177;
    panda$core$Int64 $tmp2183;
    panda$core$Bit $tmp2185;
    org$pandalanguage$pandac$ClassDecl* $returnValue2190;
    org$pandalanguage$pandac$ClassDecl* $tmp2191;
    org$pandalanguage$pandac$Type* $tmp2195;
    org$pandalanguage$pandac$Type* $tmp2196;
    org$pandalanguage$pandac$Type* $tmp2197;
    panda$core$Object* $tmp2199;
    panda$core$Object* $tmp2200;
    org$pandalanguage$pandac$ClassDecl* $tmp2203;
    int $tmp1768;
    {
        memset(&fullName1769, 0, sizeof(fullName1769));
        ITable* $tmp1771 = ((panda$core$Equatable*) p_contextName)->$class->itable;
        while ($tmp1771->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp1771 = $tmp1771->next;
        }
        $fn1773 $tmp1772 = $tmp1771->methods[1];
        panda$core$Bit $tmp1774 = $tmp1772(((panda$core$Equatable*) p_contextName), ((panda$core$Equatable*) &$s1770));
        if ($tmp1774.value) {
        {
            {
                $tmp1775 = fullName1769;
                panda$core$String* $tmp1781 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1780 = $tmp1781;
                panda$core$String* $tmp1783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1780, &$s1782);
                $tmp1779 = $tmp1783;
                panda$core$String* $tmp1784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1779, p_name);
                $tmp1778 = $tmp1784;
                panda$core$String* $tmp1786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1778, &$s1785);
                $tmp1777 = $tmp1786;
                $tmp1776 = $tmp1777;
                fullName1769 = $tmp1776;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1776));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1777));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1778));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1779));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1780));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1775));
            }
        }
        }
        else {
        {
            {
                $tmp1787 = fullName1769;
                $tmp1788 = p_name;
                fullName1769 = $tmp1788;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1788));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1787));
            }
        }
        }
        memset(&doccomment1789, 0, sizeof(doccomment1789));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1790 = doccomment1789;
                $tmp1791 = NULL;
                doccomment1789 = $tmp1791;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1791));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1790));
            }
        }
        }
        else {
        {
            int $tmp1794;
            {
                $tmp1796 = p_rawDoccomment;
                $match$523_131795 = $tmp1796;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1796));
                panda$core$Int64$init$builtin_int64(&$tmp1797, 38);
                panda$core$Bit $tmp1798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$523_131795->$rawValue, $tmp1797);
                if ($tmp1798.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1800 = ((org$pandalanguage$pandac$Position*) ((char*) $match$523_131795->$data + 0));
                    position1799 = *$tmp1800;
                    panda$core$String** $tmp1802 = ((panda$core$String**) ((char*) $match$523_131795->$data + 16));
                    text1801 = *$tmp1802;
                    {
                        $tmp1803 = doccomment1789;
                        $tmp1804 = text1801;
                        doccomment1789 = $tmp1804;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1804));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1803));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1805, false);
                    if ($tmp1805.value) goto $l1806; else goto $l1807;
                    $l1807:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1808, (panda$core$Int64) { 527 });
                    abort();
                    $l1806:;
                }
                }
            }
            $tmp1794 = -1;
            goto $l1792;
            $l1792:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1796));
            switch ($tmp1794) {
                case -1: goto $l1809;
            }
            $l1809:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1813 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1812 = $tmp1813;
        $tmp1811 = $tmp1812;
        annotations1810 = $tmp1811;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1811));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1812));
        panda$collections$Array* $tmp1817 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1817);
        $tmp1816 = $tmp1817;
        $tmp1815 = $tmp1816;
        parameters1814 = $tmp1815;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1815));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1816));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1820;
                {
                    ITable* $tmp1824 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1824->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1824 = $tmp1824->next;
                    }
                    $fn1826 $tmp1825 = $tmp1824->methods[0];
                    panda$collections$Iterator* $tmp1827 = $tmp1825(((panda$collections$Iterable*) p_generics));
                    $tmp1823 = $tmp1827;
                    $tmp1822 = $tmp1823;
                    Iter$533$131821 = $tmp1822;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1822));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1823));
                    $l1828:;
                    ITable* $tmp1831 = Iter$533$131821->$class->itable;
                    while ($tmp1831->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1831 = $tmp1831->next;
                    }
                    $fn1833 $tmp1832 = $tmp1831->methods[0];
                    panda$core$Bit $tmp1834 = $tmp1832(Iter$533$131821);
                    panda$core$Bit $tmp1835 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1834);
                    bool $tmp1830 = $tmp1835.value;
                    if (!$tmp1830) goto $l1829;
                    {
                        int $tmp1838;
                        {
                            ITable* $tmp1842 = Iter$533$131821->$class->itable;
                            while ($tmp1842->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1842 = $tmp1842->next;
                            }
                            $fn1844 $tmp1843 = $tmp1842->methods[1];
                            panda$core$Object* $tmp1845 = $tmp1843(Iter$533$131821);
                            $tmp1841 = $tmp1845;
                            $tmp1840 = ((org$pandalanguage$pandac$ASTNode*) $tmp1841);
                            p1839 = $tmp1840;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1840));
                            panda$core$Panda$unref$panda$core$Object($tmp1841);
                            memset(&name1846, 0, sizeof(name1846));
                            memset(&bound1847, 0, sizeof(bound1847));
                            int $tmp1850;
                            {
                                $tmp1852 = p1839;
                                $match$536_171851 = $tmp1852;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1852));
                                panda$core$Int64$init$builtin_int64(&$tmp1853, 20);
                                panda$core$Bit $tmp1854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$536_171851->$rawValue, $tmp1853);
                                if ($tmp1854.value) {
                                {
                                    panda$core$String** $tmp1856 = ((panda$core$String**) ((char*) $match$536_171851->$data + 16));
                                    id1855 = *$tmp1856;
                                    {
                                        $tmp1857 = name1846;
                                        $tmp1858 = id1855;
                                        name1846 = $tmp1858;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1858));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1857));
                                    }
                                    {
                                        $tmp1859 = bound1847;
                                        org$pandalanguage$pandac$Type* $tmp1862 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1861 = $tmp1862;
                                        $tmp1860 = $tmp1861;
                                        bound1847 = $tmp1860;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1860));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1861));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1859));
                                    }
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1863, 44);
                                panda$core$Bit $tmp1864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$536_171851->$rawValue, $tmp1863);
                                if ($tmp1864.value) {
                                {
                                    panda$core$String** $tmp1866 = ((panda$core$String**) ((char*) $match$536_171851->$data + 16));
                                    id1865 = *$tmp1866;
                                    org$pandalanguage$pandac$ASTNode** $tmp1868 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$536_171851->$data + 24));
                                    type1867 = *$tmp1868;
                                    {
                                        $tmp1869 = name1846;
                                        $tmp1870 = id1865;
                                        name1846 = $tmp1870;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1870));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1869));
                                    }
                                    {
                                        $tmp1871 = bound1847;
                                        org$pandalanguage$pandac$Type* $tmp1874 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1867);
                                        $tmp1873 = $tmp1874;
                                        $tmp1872 = $tmp1873;
                                        bound1847 = $tmp1872;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1872));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1873));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1871));
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp1875, false);
                                    if ($tmp1875.value) goto $l1876; else goto $l1877;
                                    $l1877:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1878, (panda$core$Int64) { 544 });
                                    abort();
                                    $l1876:;
                                }
                                }
                                }
                            }
                            $tmp1850 = -1;
                            goto $l1848;
                            $l1848:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1852));
                            switch ($tmp1850) {
                                case -1: goto $l1879;
                            }
                            $l1879:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1881 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1883 = (($fn1882) p1839->$class->vtable[2])(p1839);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1881, $tmp1883, fullName1769, name1846, bound1847);
                            $tmp1880 = $tmp1881;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1814, ((panda$core$Object*) $tmp1880));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1880));
                        }
                        $tmp1838 = -1;
                        goto $l1836;
                        $l1836:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1847));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1846));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1839));
                        p1839 = NULL;
                        switch ($tmp1838) {
                            case -1: goto $l1884;
                        }
                        $l1884:;
                    }
                    goto $l1828;
                    $l1829:;
                }
                $tmp1820 = -1;
                goto $l1818;
                $l1818:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$533$131821));
                Iter$533$131821 = NULL;
                switch ($tmp1820) {
                    case -1: goto $l1885;
                }
                $l1885:;
            }
            panda$core$Int64$init$builtin_int64(&$tmp1886, 2);
            panda$core$Bit $tmp1887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1886);
            if ($tmp1887.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1888);
            }
            }
        }
        }
        panda$collections$Array* $tmp1892 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1892);
        $tmp1891 = $tmp1892;
        $tmp1890 = $tmp1891;
        supertypes1889 = $tmp1890;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1890));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1891));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1893, 2);
            panda$core$Bit $tmp1894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1893);
            if ($tmp1894.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1895);
            }
            }
            {
                int $tmp1898;
                {
                    ITable* $tmp1902 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1902->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1902 = $tmp1902->next;
                    }
                    $fn1904 $tmp1903 = $tmp1902->methods[0];
                    panda$collections$Iterator* $tmp1905 = $tmp1903(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1901 = $tmp1905;
                    $tmp1900 = $tmp1901;
                    Iter$557$131899 = $tmp1900;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1900));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1901));
                    $l1906:;
                    ITable* $tmp1909 = Iter$557$131899->$class->itable;
                    while ($tmp1909->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1909 = $tmp1909->next;
                    }
                    $fn1911 $tmp1910 = $tmp1909->methods[0];
                    panda$core$Bit $tmp1912 = $tmp1910(Iter$557$131899);
                    panda$core$Bit $tmp1913 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1912);
                    bool $tmp1908 = $tmp1913.value;
                    if (!$tmp1908) goto $l1907;
                    {
                        int $tmp1916;
                        {
                            ITable* $tmp1920 = Iter$557$131899->$class->itable;
                            while ($tmp1920->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1920 = $tmp1920->next;
                            }
                            $fn1922 $tmp1921 = $tmp1920->methods[1];
                            panda$core$Object* $tmp1923 = $tmp1921(Iter$557$131899);
                            $tmp1919 = $tmp1923;
                            $tmp1918 = ((org$pandalanguage$pandac$ASTNode*) $tmp1919);
                            s1917 = $tmp1918;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1918));
                            panda$core$Panda$unref$panda$core$Object($tmp1919);
                            org$pandalanguage$pandac$Type* $tmp1925 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1917);
                            $tmp1924 = $tmp1925;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1889, ((panda$core$Object*) $tmp1924));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1924));
                        }
                        $tmp1916 = -1;
                        goto $l1914;
                        $l1914:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1917));
                        s1917 = NULL;
                        switch ($tmp1916) {
                            case -1: goto $l1926;
                        }
                        $l1926:;
                    }
                    goto $l1906;
                    $l1907:;
                }
                $tmp1898 = -1;
                goto $l1896;
                $l1896:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$557$131899));
                Iter$557$131899 = NULL;
                switch ($tmp1898) {
                    case -1: goto $l1927;
                }
                $l1927:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1931 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1933 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1932 = $tmp1933;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1931, p_source, p_position, p_aliases, doccomment1789, annotations1810, p_kind, fullName1769, ((panda$collections$ListView*) supertypes1889), parameters1814, ((org$pandalanguage$pandac$Compiler*) $tmp1932)->root);
        $tmp1930 = $tmp1931;
        $tmp1929 = $tmp1930;
        result1928 = $tmp1929;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1929));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1930));
        panda$core$Panda$unref$panda$core$Object($tmp1932);
        panda$core$Object* $tmp1935 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1934 = $tmp1935;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1934)->currentClass, ((panda$core$Object*) result1928));
        panda$core$Panda$unref$panda$core$Object($tmp1934);
        panda$core$Int64$init$builtin_int64(&$tmp1936, 2);
        panda$core$Bit $tmp1937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1936);
        if ($tmp1937.value) {
        {
            int $tmp1940;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1944 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1946 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp1947, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1946, $tmp1947);
                $tmp1945 = $tmp1946;
                panda$core$Int64$init$builtin_int64(&$tmp1949, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1948, $tmp1949);
                org$pandalanguage$pandac$Type* $tmp1952 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1951 = $tmp1952;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1944, result1928, result1928->position, NULL, $tmp1945, $tmp1948, &$s1950, $tmp1951, NULL);
                $tmp1943 = $tmp1944;
                $tmp1942 = $tmp1943;
                rawValue1941 = $tmp1942;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1942));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1943));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1951));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1945));
                panda$collections$Array$add$panda$collections$Array$T(result1928->fields, ((panda$core$Object*) rawValue1941));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1928->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1941));
                org$pandalanguage$pandac$FieldDecl* $tmp1956 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1958 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp1959, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1958, $tmp1959);
                $tmp1957 = $tmp1958;
                panda$core$Int64$init$builtin_int64(&$tmp1961, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1960, $tmp1961);
                org$pandalanguage$pandac$Type* $tmp1964 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1963 = $tmp1964;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1956, result1928, result1928->position, NULL, $tmp1957, $tmp1960, &$s1962, $tmp1963, NULL);
                $tmp1955 = $tmp1956;
                $tmp1954 = $tmp1955;
                data1953 = $tmp1954;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1954));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1955));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1963));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1957));
                panda$collections$Array$add$panda$collections$Array$T(result1928->fields, ((panda$core$Object*) data1953));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1928->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1953));
            }
            $tmp1940 = -1;
            goto $l1938;
            $l1938:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1953));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1941));
            rawValue1941 = NULL;
            data1953 = NULL;
            switch ($tmp1940) {
                case -1: goto $l1965;
            }
            $l1965:;
        }
        }
        {
            int $tmp1968;
            {
                ITable* $tmp1972 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1972->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1972 = $tmp1972->next;
                }
                $fn1974 $tmp1973 = $tmp1972->methods[0];
                panda$collections$Iterator* $tmp1975 = $tmp1973(((panda$collections$Iterable*) p_members));
                $tmp1971 = $tmp1975;
                $tmp1970 = $tmp1971;
                Iter$576$91969 = $tmp1970;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1970));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1971));
                $l1976:;
                ITable* $tmp1979 = Iter$576$91969->$class->itable;
                while ($tmp1979->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1979 = $tmp1979->next;
                }
                $fn1981 $tmp1980 = $tmp1979->methods[0];
                panda$core$Bit $tmp1982 = $tmp1980(Iter$576$91969);
                panda$core$Bit $tmp1983 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1982);
                bool $tmp1978 = $tmp1983.value;
                if (!$tmp1978) goto $l1977;
                {
                    int $tmp1986;
                    {
                        ITable* $tmp1990 = Iter$576$91969->$class->itable;
                        while ($tmp1990->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1990 = $tmp1990->next;
                        }
                        $fn1992 $tmp1991 = $tmp1990->methods[1];
                        panda$core$Object* $tmp1993 = $tmp1991(Iter$576$91969);
                        $tmp1989 = $tmp1993;
                        $tmp1988 = ((org$pandalanguage$pandac$ASTNode*) $tmp1989);
                        m1987 = $tmp1988;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1988));
                        panda$core$Panda$unref$panda$core$Object($tmp1989);
                        int $tmp1996;
                        {
                            $tmp1998 = m1987;
                            $match$577_131997 = $tmp1998;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1998));
                            panda$core$Int64$init$builtin_int64(&$tmp1999, 26);
                            panda$core$Bit $tmp2000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$577_131997->$rawValue, $tmp1999);
                            if ($tmp2000.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp2002 = ((org$pandalanguage$pandac$Position*) ((char*) $match$577_131997->$data + 0));
                                mPosition2001 = *$tmp2002;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp2004 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$577_131997->$data + 32));
                                methodKind2003 = *$tmp2004;
                                panda$core$Int64$init$builtin_int64(&$tmp2005, 2);
                                panda$core$Bit $tmp2006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind2003.$rawValue, $tmp2005);
                                if ($tmp2006.value) {
                                {
                                    {
                                        $match$580_252007 = p_kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp2008, 0);
                                        panda$core$Bit $tmp2009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$580_252007.$rawValue, $tmp2008);
                                        if ($tmp2009.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2010, 1);
                                        panda$core$Bit $tmp2011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$580_252007.$rawValue, $tmp2010);
                                        if ($tmp2011.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition2001, &$s2012);
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2013, 2);
                                        panda$core$Bit $tmp2014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$580_252007.$rawValue, $tmp2013);
                                        if ($tmp2014.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition2001, &$s2015);
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
                        $tmp1996 = -1;
                        goto $l1994;
                        $l1994:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1998));
                        switch ($tmp1996) {
                            case -1: goto $l2016;
                        }
                        $l2016:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1928, m1987);
                    }
                    $tmp1986 = -1;
                    goto $l1984;
                    $l1984:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1987));
                    m1987 = NULL;
                    switch ($tmp1986) {
                        case -1: goto $l2017;
                    }
                    $l2017:;
                }
                goto $l1976;
                $l1977:;
            }
            $tmp1968 = -1;
            goto $l1966;
            $l1966:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$576$91969));
            Iter$576$91969 = NULL;
            switch ($tmp1968) {
                case -1: goto $l2018;
            }
            $l2018:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp2020, false);
        foundInit2019 = $tmp2020;
        panda$core$Bit$init$builtin_bit(&$tmp2022, false);
        foundCleanup2021 = $tmp2022;
        {
            int $tmp2025;
            {
                ITable* $tmp2029 = ((panda$collections$Iterable*) result1928->methods)->$class->itable;
                while ($tmp2029->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2029 = $tmp2029->next;
                }
                $fn2031 $tmp2030 = $tmp2029->methods[0];
                panda$collections$Iterator* $tmp2032 = $tmp2030(((panda$collections$Iterable*) result1928->methods));
                $tmp2028 = $tmp2032;
                $tmp2027 = $tmp2028;
                Iter$595$92026 = $tmp2027;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2027));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2028));
                $l2033:;
                ITable* $tmp2036 = Iter$595$92026->$class->itable;
                while ($tmp2036->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2036 = $tmp2036->next;
                }
                $fn2038 $tmp2037 = $tmp2036->methods[0];
                panda$core$Bit $tmp2039 = $tmp2037(Iter$595$92026);
                panda$core$Bit $tmp2040 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2039);
                bool $tmp2035 = $tmp2040.value;
                if (!$tmp2035) goto $l2034;
                {
                    int $tmp2043;
                    {
                        ITable* $tmp2047 = Iter$595$92026->$class->itable;
                        while ($tmp2047->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2047 = $tmp2047->next;
                        }
                        $fn2049 $tmp2048 = $tmp2047->methods[1];
                        panda$core$Object* $tmp2050 = $tmp2048(Iter$595$92026);
                        $tmp2046 = $tmp2050;
                        $tmp2045 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2046);
                        m2044 = $tmp2045;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2045));
                        panda$core$Panda$unref$panda$core$Object($tmp2046);
                        panda$core$Int64$init$builtin_int64(&$tmp2051, 2);
                        panda$core$Bit $tmp2052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2044->methodKind.$rawValue, $tmp2051);
                        if ($tmp2052.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2053, true);
                            foundInit2019 = $tmp2053;
                        }
                        }
                        panda$core$Bit $tmp2056 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2044)->name, &$s2055);
                        bool $tmp2054 = $tmp2056.value;
                        if (!$tmp2054) goto $l2057;
                        panda$core$Int64 $tmp2058 = panda$collections$Array$get_count$R$panda$core$Int64(m2044->parameters);
                        panda$core$Int64$init$builtin_int64(&$tmp2059, 0);
                        panda$core$Bit $tmp2060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2058, $tmp2059);
                        $tmp2054 = $tmp2060.value;
                        $l2057:;
                        panda$core$Bit $tmp2061 = { $tmp2054 };
                        if ($tmp2061.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2062, true);
                            foundCleanup2021 = $tmp2062;
                            panda$core$Int64$init$builtin_int64(&$tmp2063, 2);
                            panda$core$Bit $tmp2064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2063);
                            if ($tmp2064.value) {
                            {
                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2065);
                            }
                            }
                        }
                        }
                    }
                    $tmp2043 = -1;
                    goto $l2041;
                    $l2041:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2044));
                    m2044 = NULL;
                    switch ($tmp2043) {
                        case -1: goto $l2066;
                    }
                    $l2066:;
                }
                goto $l2033;
                $l2034:;
            }
            $tmp2025 = -1;
            goto $l2023;
            $l2023:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$595$92026));
            Iter$595$92026 = NULL;
            switch ($tmp2025) {
                case -1: goto $l2067;
            }
            $l2067:;
        }
        panda$core$Bit $tmp2070 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit2019);
        bool $tmp2069 = $tmp2070.value;
        if (!$tmp2069) goto $l2071;
        panda$core$Int64$init$builtin_int64(&$tmp2072, 0);
        panda$core$Bit $tmp2073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2072);
        $tmp2069 = $tmp2073.value;
        $l2071:;
        panda$core$Bit $tmp2074 = { $tmp2069 };
        bool $tmp2068 = $tmp2074.value;
        if (!$tmp2068) goto $l2075;
        ITable* $tmp2077 = ((panda$core$Equatable*) result1928->name)->$class->itable;
        while ($tmp2077->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp2077 = $tmp2077->next;
        }
        $fn2079 $tmp2078 = $tmp2077->methods[1];
        panda$core$Bit $tmp2080 = $tmp2078(((panda$core$Equatable*) result1928->name), ((panda$core$Equatable*) &$s2076));
        $tmp2068 = $tmp2080.value;
        $l2075:;
        panda$core$Bit $tmp2081 = { $tmp2068 };
        if ($tmp2081.value) {
        {
            int $tmp2084;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2088 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2090 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2091, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2090, $tmp2091);
                $tmp2089 = $tmp2090;
                panda$core$Int64$init$builtin_int64(&$tmp2093, 2);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2092, $tmp2093);
                panda$collections$Array* $tmp2096 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2096);
                $tmp2095 = $tmp2096;
                panda$collections$Array* $tmp2098 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2098);
                $tmp2097 = $tmp2098;
                org$pandalanguage$pandac$Type* $tmp2100 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2099 = $tmp2100;
                panda$collections$ImmutableArray* $tmp2102 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2102);
                $tmp2101 = $tmp2102;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2088, result1928, p_position, NULL, $tmp2089, $tmp2092, &$s2094, $tmp2095, $tmp2097, $tmp2099, $tmp2101);
                $tmp2087 = $tmp2088;
                $tmp2086 = $tmp2087;
                defaultInit2085 = $tmp2086;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2086));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2087));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2101));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2099));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2097));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2095));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2089));
                panda$collections$Array$add$panda$collections$Array$T(result1928->methods, ((panda$core$Object*) defaultInit2085));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1928->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2085));
            }
            $tmp2084 = -1;
            goto $l2082;
            $l2082:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2085));
            defaultInit2085 = NULL;
            switch ($tmp2084) {
                case -1: goto $l2103;
            }
            $l2103:;
        }
        }
        panda$core$Bit $tmp2106 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup2021);
        bool $tmp2105 = $tmp2106.value;
        if (!$tmp2105) goto $l2107;
        panda$core$Int64$init$builtin_int64(&$tmp2109, 0);
        panda$core$Bit $tmp2110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2109);
        bool $tmp2108 = $tmp2110.value;
        if ($tmp2108) goto $l2111;
        panda$core$Int64$init$builtin_int64(&$tmp2112, 2);
        panda$core$Bit $tmp2113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2112);
        $tmp2108 = $tmp2113.value;
        $l2111:;
        panda$core$Bit $tmp2114 = { $tmp2108 };
        $tmp2105 = $tmp2114.value;
        $l2107:;
        panda$core$Bit $tmp2115 = { $tmp2105 };
        bool $tmp2104 = $tmp2115.value;
        if (!$tmp2104) goto $l2116;
        ITable* $tmp2118 = ((panda$core$Equatable*) result1928->name)->$class->itable;
        while ($tmp2118->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp2118 = $tmp2118->next;
        }
        $fn2120 $tmp2119 = $tmp2118->methods[1];
        panda$core$Bit $tmp2121 = $tmp2119(((panda$core$Equatable*) result1928->name), ((panda$core$Equatable*) &$s2117));
        $tmp2104 = $tmp2121.value;
        $l2116:;
        panda$core$Bit $tmp2122 = { $tmp2104 };
        if ($tmp2122.value) {
        {
            int $tmp2125;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2129 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2131 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2132, 32);
                panda$core$Int64$init$builtin_int64(&$tmp2133, 8192);
                panda$core$Int64 $tmp2134 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2132, $tmp2133);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2131, $tmp2134);
                $tmp2130 = $tmp2131;
                panda$core$Int64$init$builtin_int64(&$tmp2136, 0);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2135, $tmp2136);
                panda$collections$Array* $tmp2139 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2139);
                $tmp2138 = $tmp2139;
                panda$collections$Array* $tmp2141 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2141);
                $tmp2140 = $tmp2141;
                org$pandalanguage$pandac$Type* $tmp2143 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2142 = $tmp2143;
                panda$collections$ImmutableArray* $tmp2145 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2145);
                $tmp2144 = $tmp2145;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2129, result1928, p_position, NULL, $tmp2130, $tmp2135, &$s2137, $tmp2138, $tmp2140, $tmp2142, $tmp2144);
                $tmp2128 = $tmp2129;
                $tmp2127 = $tmp2128;
                defaultCleanup2126 = $tmp2127;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2127));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2128));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2144));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2142));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2140));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2138));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2130));
                panda$collections$Array$add$panda$collections$Array$T(result1928->methods, ((panda$core$Object*) defaultCleanup2126));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1928->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2126));
            }
            $tmp2125 = -1;
            goto $l2123;
            $l2123:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2126));
            defaultCleanup2126 = NULL;
            switch ($tmp2125) {
                case -1: goto $l2146;
            }
            $l2146:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2147, 2);
        panda$core$Bit $tmp2148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2147);
        if ($tmp2148.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2150, false);
            haveFields2149 = $tmp2150;
            panda$core$Int64 $tmp2151 = panda$collections$Array$get_count$R$panda$core$Int64(result1928->choiceEntries);
            panda$core$Int64$init$builtin_int64(&$tmp2152, 0);
            panda$core$Bit $tmp2153 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2151, $tmp2152);
            if ($tmp2153.value) {
            {
                {
                    int $tmp2156;
                    {
                        ITable* $tmp2160 = ((panda$collections$Iterable*) result1928->choiceEntries)->$class->itable;
                        while ($tmp2160->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2160 = $tmp2160->next;
                        }
                        $fn2162 $tmp2161 = $tmp2160->methods[0];
                        panda$collections$Iterator* $tmp2163 = $tmp2161(((panda$collections$Iterable*) result1928->choiceEntries));
                        $tmp2159 = $tmp2163;
                        $tmp2158 = $tmp2159;
                        Iter$626$172157 = $tmp2158;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2158));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2159));
                        $l2164:;
                        ITable* $tmp2167 = Iter$626$172157->$class->itable;
                        while ($tmp2167->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2167 = $tmp2167->next;
                        }
                        $fn2169 $tmp2168 = $tmp2167->methods[0];
                        panda$core$Bit $tmp2170 = $tmp2168(Iter$626$172157);
                        panda$core$Bit $tmp2171 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2170);
                        bool $tmp2166 = $tmp2171.value;
                        if (!$tmp2166) goto $l2165;
                        {
                            int $tmp2174;
                            {
                                ITable* $tmp2178 = Iter$626$172157->$class->itable;
                                while ($tmp2178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2178 = $tmp2178->next;
                                }
                                $fn2180 $tmp2179 = $tmp2178->methods[1];
                                panda$core$Object* $tmp2181 = $tmp2179(Iter$626$172157);
                                $tmp2177 = $tmp2181;
                                $tmp2176 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp2177);
                                e2175 = $tmp2176;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2176));
                                panda$core$Panda$unref$panda$core$Object($tmp2177);
                                panda$core$Int64 $tmp2182 = panda$collections$Array$get_count$R$panda$core$Int64(e2175->fields);
                                panda$core$Int64$init$builtin_int64(&$tmp2183, 0);
                                panda$core$Bit $tmp2184 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2182, $tmp2183);
                                if ($tmp2184.value) {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2185, true);
                                    haveFields2149 = $tmp2185;
                                    $tmp2174 = 0;
                                    goto $l2172;
                                    $l2186:;
                                    goto $l2165;
                                }
                                }
                            }
                            $tmp2174 = -1;
                            goto $l2172;
                            $l2172:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2175));
                            e2175 = NULL;
                            switch ($tmp2174) {
                                case 0: goto $l2186;
                                case -1: goto $l2187;
                            }
                            $l2187:;
                        }
                        goto $l2164;
                        $l2165:;
                    }
                    $tmp2156 = -1;
                    goto $l2154;
                    $l2154:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$626$172157));
                    Iter$626$172157 = NULL;
                    switch ($tmp2156) {
                        case -1: goto $l2188;
                    }
                    $l2188:;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, result1928->position, &$s2189);
                $tmp2191 = NULL;
                $returnValue2190 = $tmp2191;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2191));
                $tmp1768 = 0;
                goto $l1766;
                $l2192:;
                return $returnValue2190;
            }
            }
            panda$core$Bit $tmp2194 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields2149);
            if ($tmp2194.value) {
            {
                {
                    $tmp2195 = result1928->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp2198 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp2197 = $tmp2198;
                    $tmp2196 = $tmp2197;
                    result1928->rawSuper = $tmp2196;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2196));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2197));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2195));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp2201 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp2200 = $tmp2201;
        panda$core$Object* $tmp2202 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2200)->currentClass);
        $tmp2199 = $tmp2202;
        panda$core$Panda$unref$panda$core$Object($tmp2199);
        panda$core$Panda$unref$panda$core$Object($tmp2200);
        $tmp2203 = result1928;
        $returnValue2190 = $tmp2203;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2203));
        $tmp1768 = 1;
        goto $l1766;
        $l2204:;
        return $returnValue2190;
    }
    $l1766:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1928));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1889));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1814));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1810));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1789));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1769));
    annotations1810 = NULL;
    parameters1814 = NULL;
    supertypes1889 = NULL;
    result1928 = NULL;
    switch ($tmp1768) {
        case 1: goto $l2204;
        case 0: goto $l2192;
    }
    $l2206:;
    abort();
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$647$92210 = NULL;
    panda$collections$Iterator* $tmp2211;
    panda$collections$Iterator* $tmp2212;
    org$pandalanguage$pandac$ClassDecl* inner2228 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2229;
    panda$core$Object* $tmp2230;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp2209;
        {
            ITable* $tmp2213 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp2213->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2213 = $tmp2213->next;
            }
            $fn2215 $tmp2214 = $tmp2213->methods[0];
            panda$collections$Iterator* $tmp2216 = $tmp2214(((panda$collections$Iterable*) p_cl->classes));
            $tmp2212 = $tmp2216;
            $tmp2211 = $tmp2212;
            Iter$647$92210 = $tmp2211;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2211));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2212));
            $l2217:;
            ITable* $tmp2220 = Iter$647$92210->$class->itable;
            while ($tmp2220->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2220 = $tmp2220->next;
            }
            $fn2222 $tmp2221 = $tmp2220->methods[0];
            panda$core$Bit $tmp2223 = $tmp2221(Iter$647$92210);
            panda$core$Bit $tmp2224 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2223);
            bool $tmp2219 = $tmp2224.value;
            if (!$tmp2219) goto $l2218;
            {
                int $tmp2227;
                {
                    ITable* $tmp2231 = Iter$647$92210->$class->itable;
                    while ($tmp2231->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2231 = $tmp2231->next;
                    }
                    $fn2233 $tmp2232 = $tmp2231->methods[1];
                    panda$core$Object* $tmp2234 = $tmp2232(Iter$647$92210);
                    $tmp2230 = $tmp2234;
                    $tmp2229 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2230);
                    inner2228 = $tmp2229;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2229));
                    panda$core$Panda$unref$panda$core$Object($tmp2230);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner2228, p_arr);
                }
                $tmp2227 = -1;
                goto $l2225;
                $l2225:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner2228));
                inner2228 = NULL;
                switch ($tmp2227) {
                    case -1: goto $l2235;
                }
                $l2235:;
            }
            goto $l2217;
            $l2218:;
        }
        $tmp2209 = -1;
        goto $l2207;
        $l2207:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$647$92210));
        Iter$647$92210 = NULL;
        switch ($tmp2209) {
            case -1: goto $l2236;
        }
        $l2236:;
    }
}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, panda$collections$List* p_classes) {
    panda$core$String* fullName2240 = NULL;
    panda$core$String* $tmp2246;
    panda$core$String* $tmp2247;
    panda$core$String* $tmp2248;
    panda$core$String* $tmp2249;
    panda$core$String* $tmp2253;
    panda$core$String* $tmp2254;
    org$pandalanguage$pandac$ClassDecl* $tmp2256;
    org$pandalanguage$pandac$ClassDecl* $tmp2257;
    org$pandalanguage$pandac$ClassDecl* $tmp2258;
    org$pandalanguage$pandac$Position $tmp2260;
    org$pandalanguage$pandac$Annotations* $tmp2261;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2263;
    panda$core$Int64 $tmp2264;
    panda$collections$Array* $tmp2265;
    panda$collections$Array* $tmp2267;
    panda$core$Object* $tmp2269;
    org$pandalanguage$pandac$MethodDecl* defaultInit2274 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2275;
    org$pandalanguage$pandac$MethodDecl* $tmp2276;
    org$pandalanguage$pandac$Position $tmp2278;
    org$pandalanguage$pandac$Annotations* $tmp2279;
    panda$core$Int64 $tmp2281;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2282;
    panda$core$Int64 $tmp2283;
    panda$collections$Array* $tmp2285;
    panda$collections$Array* $tmp2287;
    org$pandalanguage$pandac$Type* $tmp2289;
    panda$collections$ImmutableArray* $tmp2291;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2293 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2294;
    org$pandalanguage$pandac$MethodDecl* $tmp2295;
    org$pandalanguage$pandac$Position $tmp2297;
    org$pandalanguage$pandac$Annotations* $tmp2298;
    panda$core$Int64 $tmp2300;
    panda$core$Int64 $tmp2301;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2303;
    panda$core$Int64 $tmp2304;
    panda$collections$Array* $tmp2306;
    panda$collections$Array* $tmp2308;
    org$pandalanguage$pandac$Type* $tmp2310;
    panda$collections$ImmutableArray* $tmp2312;
    if (((panda$core$Bit) { self->bareCodeClass == NULL }).value) {
    {
        int $tmp2239;
        {
            memset(&fullName2240, 0, sizeof(fullName2240));
            ITable* $tmp2242 = ((panda$core$Equatable*) p_contextName)->$class->itable;
            while ($tmp2242->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                $tmp2242 = $tmp2242->next;
            }
            $fn2244 $tmp2243 = $tmp2242->methods[1];
            panda$core$Bit $tmp2245 = $tmp2243(((panda$core$Equatable*) p_contextName), ((panda$core$Equatable*) &$s2241));
            if ($tmp2245.value) {
            {
                {
                    $tmp2246 = fullName2240;
                    panda$core$String* $tmp2250 = panda$core$String$convert$R$panda$core$String(p_contextName);
                    $tmp2249 = $tmp2250;
                    panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, &$s2251);
                    $tmp2248 = $tmp2252;
                    $tmp2247 = $tmp2248;
                    fullName2240 = $tmp2247;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2247));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2248));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2249));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2246));
                }
            }
            }
            else {
            {
                {
                    $tmp2253 = fullName2240;
                    $tmp2254 = &$s2255;
                    fullName2240 = $tmp2254;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2254));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2253));
                }
            }
            }
            {
                $tmp2256 = self->bareCodeClass;
                org$pandalanguage$pandac$ClassDecl* $tmp2259 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
                org$pandalanguage$pandac$Position$init(&$tmp2260);
                org$pandalanguage$pandac$Annotations* $tmp2262 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp2262);
                $tmp2261 = $tmp2262;
                panda$core$Int64$init$builtin_int64(&$tmp2264, 0);
                org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2263, $tmp2264);
                panda$collections$Array* $tmp2266 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2266);
                $tmp2265 = $tmp2266;
                panda$collections$Array* $tmp2268 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2268);
                $tmp2267 = $tmp2268;
                panda$core$Object* $tmp2270 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp2269 = $tmp2270;
                org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2259, p_source, $tmp2260, p_aliases, NULL, $tmp2261, $tmp2263, fullName2240, ((panda$collections$ListView*) $tmp2265), $tmp2267, ((org$pandalanguage$pandac$Compiler*) $tmp2269)->root);
                $tmp2258 = $tmp2259;
                $tmp2257 = $tmp2258;
                self->bareCodeClass = $tmp2257;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2257));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2258));
                panda$core$Panda$unref$panda$core$Object($tmp2269);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2267));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2265));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2261));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2256));
            }
            ITable* $tmp2271 = ((panda$collections$CollectionWriter*) p_classes)->$class->itable;
            while ($tmp2271->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
                $tmp2271 = $tmp2271->next;
            }
            $fn2273 $tmp2272 = $tmp2271->methods[0];
            $tmp2272(((panda$collections$CollectionWriter*) p_classes), ((panda$core$Object*) self->bareCodeClass));
            org$pandalanguage$pandac$MethodDecl* $tmp2277 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2278);
            org$pandalanguage$pandac$Annotations* $tmp2280 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2281, 8192);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2280, $tmp2281);
            $tmp2279 = $tmp2280;
            panda$core$Int64$init$builtin_int64(&$tmp2283, 2);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2282, $tmp2283);
            panda$collections$Array* $tmp2286 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2286);
            $tmp2285 = $tmp2286;
            panda$collections$Array* $tmp2288 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2288);
            $tmp2287 = $tmp2288;
            org$pandalanguage$pandac$Type* $tmp2290 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2289 = $tmp2290;
            panda$collections$ImmutableArray* $tmp2292 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2292);
            $tmp2291 = $tmp2292;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2277, self->bareCodeClass, $tmp2278, NULL, $tmp2279, $tmp2282, &$s2284, $tmp2285, $tmp2287, $tmp2289, $tmp2291);
            $tmp2276 = $tmp2277;
            $tmp2275 = $tmp2276;
            defaultInit2274 = $tmp2275;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2275));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2276));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2291));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2289));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2287));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2285));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2279));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultInit2274));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2274));
            org$pandalanguage$pandac$MethodDecl* $tmp2296 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2297);
            org$pandalanguage$pandac$Annotations* $tmp2299 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2300, 32);
            panda$core$Int64$init$builtin_int64(&$tmp2301, 8192);
            panda$core$Int64 $tmp2302 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2300, $tmp2301);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2299, $tmp2302);
            $tmp2298 = $tmp2299;
            panda$core$Int64$init$builtin_int64(&$tmp2304, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2303, $tmp2304);
            panda$collections$Array* $tmp2307 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2307);
            $tmp2306 = $tmp2307;
            panda$collections$Array* $tmp2309 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2309);
            $tmp2308 = $tmp2309;
            org$pandalanguage$pandac$Type* $tmp2311 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2310 = $tmp2311;
            panda$collections$ImmutableArray* $tmp2313 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2313);
            $tmp2312 = $tmp2313;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2296, self->bareCodeClass, $tmp2297, NULL, $tmp2298, $tmp2303, &$s2305, $tmp2306, $tmp2308, $tmp2310, $tmp2312);
            $tmp2295 = $tmp2296;
            $tmp2294 = $tmp2295;
            defaultCleanup2293 = $tmp2294;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2294));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2295));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2312));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2310));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2308));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2306));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2298));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultCleanup2293));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2293));
        }
        $tmp2239 = -1;
        goto $l2237;
        $l2237:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2293));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName2240));
        defaultInit2274 = NULL;
        defaultCleanup2293 = NULL;
        switch ($tmp2239) {
            case -1: goto $l2314;
        }
        $l2314:;
    }
    }
}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp2319;
    if (((panda$core$Bit) { self->source != NULL }).value) goto $l2315; else goto $l2316;
    $l2316:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2317, (panda$core$Int64) { 682 }, &$s2318);
    abort();
    $l2315:;
    panda$core$Object* $tmp2320 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp2319 = $tmp2320;
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2319), self->source, p_position, p_msg);
    panda$core$Panda$unref$panda$core$Object($tmp2319);
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$io$File* $tmp2321;
    panda$io$File* $tmp2322;
    org$pandalanguage$pandac$ASTNode* $match$688_92326 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2327;
    panda$core$Int64 $tmp2328;
    panda$collections$ImmutableArray* entries2330 = NULL;
    panda$collections$Array* result2335 = NULL;
    panda$collections$Array* $tmp2336;
    panda$collections$Array* $tmp2337;
    panda$core$String* currentPackage2339 = NULL;
    panda$core$String* $tmp2340;
    panda$collections$HashMap* aliases2342 = NULL;
    panda$collections$HashMap* $tmp2343;
    panda$collections$HashMap* $tmp2344;
    panda$collections$Iterator* Iter$693$172349 = NULL;
    panda$collections$Iterator* $tmp2350;
    panda$collections$Iterator* $tmp2351;
    org$pandalanguage$pandac$ASTNode* e2367 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2368;
    panda$core$Object* $tmp2369;
    org$pandalanguage$pandac$ASTNode* $match$694_212377 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2378;
    panda$core$Int64 $tmp2379;
    panda$core$String* name2381 = NULL;
    panda$core$String* $tmp2383;
    panda$core$String* $tmp2384;
    panda$core$Int64 $tmp2385;
    panda$core$String* fullName2387 = NULL;
    panda$core$String$Index$nullable idx2392;
    panda$core$String* alias2395 = NULL;
    panda$core$String* $tmp2396;
    panda$core$String* $tmp2397;
    panda$core$String* $tmp2398;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2399;
    panda$core$Bit $tmp2401;
    panda$core$String* $tmp2403;
    panda$core$String* $tmp2404;
    panda$core$Int64 $tmp2406;
    org$pandalanguage$pandac$Position position2408;
    org$pandalanguage$pandac$ASTNode* dc2410 = NULL;
    panda$collections$ImmutableArray* annotations2412 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind2414;
    panda$core$String* name2416 = NULL;
    panda$collections$ImmutableArray* generics2418 = NULL;
    panda$collections$ImmutableArray* supertypes2420 = NULL;
    panda$collections$ImmutableArray* members2422 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl2427 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2428;
    org$pandalanguage$pandac$ClassDecl* $tmp2429;
    panda$core$Int64 $tmp2432;
    org$pandalanguage$pandac$Position position2434;
    org$pandalanguage$pandac$ASTNode* dc2436 = NULL;
    panda$collections$ImmutableArray* annotations2438 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind2440;
    panda$core$String* rawName2442 = NULL;
    panda$collections$ImmutableArray* generics2444 = NULL;
    panda$collections$ImmutableArray* parameters2446 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType2448 = NULL;
    panda$collections$ImmutableArray* statements2450 = NULL;
    panda$core$Int64 $tmp2455;
    panda$core$String* name2461 = NULL;
    panda$core$String* $tmp2467;
    panda$core$String* $tmp2468;
    panda$collections$Array* mainParameters2470 = NULL;
    panda$collections$Array* $tmp2471;
    panda$collections$Array* $tmp2472;
    panda$collections$Array* mainStatements2474 = NULL;
    panda$collections$Array* $tmp2475;
    panda$collections$Array* $tmp2476;
    panda$collections$Array* mainArguments2478 = NULL;
    panda$collections$Array* $tmp2479;
    panda$collections$Array* $tmp2480;
    panda$collections$Iterator* Iter$727$332485 = NULL;
    panda$collections$Iterator* $tmp2486;
    panda$collections$Iterator* $tmp2487;
    org$pandalanguage$pandac$ASTNode* p2503 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2504;
    panda$core$Object* $tmp2505;
    org$pandalanguage$pandac$ASTNode* $match$728_372513 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2514;
    panda$core$Int64 $tmp2515;
    org$pandalanguage$pandac$Position position2517;
    panda$core$String* name2519 = NULL;
    org$pandalanguage$pandac$ASTNode* type2521 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2523;
    org$pandalanguage$pandac$Type* $tmp2525;
    org$pandalanguage$pandac$ASTNode* $tmp2527;
    panda$core$Int64 $tmp2529;
    panda$core$Bit $tmp2530;
    org$pandalanguage$pandac$ASTNode* bareConstruct2537 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2538;
    org$pandalanguage$pandac$ASTNode* $tmp2539;
    panda$core$Int64 $tmp2541;
    org$pandalanguage$pandac$ASTNode* $tmp2542;
    panda$core$Int64 $tmp2544;
    panda$collections$ImmutableArray* $tmp2546;
    org$pandalanguage$pandac$ASTNode* $tmp2548;
    panda$core$Int64 $tmp2550;
    org$pandalanguage$pandac$ASTNode* $tmp2551;
    panda$core$Int64 $tmp2553;
    panda$collections$ImmutableArray* $tmp2554;
    org$pandalanguage$pandac$Type* returnType2556 = NULL;
    org$pandalanguage$pandac$Type* $tmp2557;
    org$pandalanguage$pandac$Type* $tmp2558;
    org$pandalanguage$pandac$Type* $tmp2559;
    org$pandalanguage$pandac$Type* $tmp2561;
    org$pandalanguage$pandac$Type* $tmp2562;
    org$pandalanguage$pandac$Type* $tmp2563;
    org$pandalanguage$pandac$MethodDecl* bareMain2565 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2566;
    org$pandalanguage$pandac$MethodDecl* $tmp2567;
    org$pandalanguage$pandac$Position $tmp2569;
    org$pandalanguage$pandac$Annotations* $tmp2570;
    panda$core$Int64 $tmp2572;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2573;
    panda$core$Int64 $tmp2574;
    panda$collections$Array* $tmp2576;
    panda$collections$ImmutableArray* $tmp2578;
    panda$core$String* $tmp2581;
    panda$core$String* $tmp2582;
    panda$core$Object* $tmp2583;
    org$pandalanguage$pandac$MethodDecl* m2585 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2586;
    org$pandalanguage$pandac$MethodDecl* $tmp2587;
    org$pandalanguage$pandac$Annotations* $tmp2591;
    panda$core$Int64 $tmp2592;
    panda$core$Object* $tmp2595;
    panda$core$Int64 $tmp2598;
    org$pandalanguage$pandac$Position position2600;
    org$pandalanguage$pandac$ASTNode* dc2602 = NULL;
    panda$collections$ImmutableArray* annotations2604 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl2606 = NULL;
    panda$core$Int64 old2608;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2610;
    panda$core$Bit $tmp2612;
    org$pandalanguage$pandac$FieldDecl* f2629 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp2630;
    panda$core$Object* $tmp2631;
    panda$core$Int64 $tmp2634;
    panda$core$Bit $tmp2647;
    panda$core$String* $tmp2651;
    panda$core$String* $tmp2652;
    panda$core$String* $tmp2653;
    panda$core$String* $tmp2654;
    panda$core$String* $tmp2655;
    panda$core$String* $tmp2656;
    panda$core$Object* $tmp2661;
    panda$core$Object* $tmp2666;
    panda$io$File* $tmp2676;
    panda$io$File* $tmp2677;
    panda$collections$ListView* $returnValue2678;
    panda$collections$ListView* $tmp2679;
    panda$core$Bit $tmp2684;
    {
        $tmp2321 = self->source;
        $tmp2322 = p_source;
        self->source = $tmp2322;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2322));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2321));
    }
    int $tmp2325;
    {
        $tmp2327 = p_file;
        $match$688_92326 = $tmp2327;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2327));
        panda$core$Int64$init$builtin_int64(&$tmp2328, 17);
        panda$core$Bit $tmp2329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$688_92326->$rawValue, $tmp2328);
        if ($tmp2329.value) {
        {
            panda$collections$ImmutableArray** $tmp2331 = ((panda$collections$ImmutableArray**) ((char*) $match$688_92326->$data + 0));
            entries2330 = *$tmp2331;
            int $tmp2334;
            {
                panda$collections$Array* $tmp2338 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2338);
                $tmp2337 = $tmp2338;
                $tmp2336 = $tmp2337;
                result2335 = $tmp2336;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2336));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2337));
                $tmp2340 = &$s2341;
                currentPackage2339 = $tmp2340;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2340));
                panda$collections$HashMap* $tmp2345 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp2345);
                $tmp2344 = $tmp2345;
                $tmp2343 = $tmp2344;
                aliases2342 = $tmp2343;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2343));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2344));
                {
                    int $tmp2348;
                    {
                        ITable* $tmp2352 = ((panda$collections$Iterable*) entries2330)->$class->itable;
                        while ($tmp2352->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2352 = $tmp2352->next;
                        }
                        $fn2354 $tmp2353 = $tmp2352->methods[0];
                        panda$collections$Iterator* $tmp2355 = $tmp2353(((panda$collections$Iterable*) entries2330));
                        $tmp2351 = $tmp2355;
                        $tmp2350 = $tmp2351;
                        Iter$693$172349 = $tmp2350;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2350));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2351));
                        $l2356:;
                        ITable* $tmp2359 = Iter$693$172349->$class->itable;
                        while ($tmp2359->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2359 = $tmp2359->next;
                        }
                        $fn2361 $tmp2360 = $tmp2359->methods[0];
                        panda$core$Bit $tmp2362 = $tmp2360(Iter$693$172349);
                        panda$core$Bit $tmp2363 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2362);
                        bool $tmp2358 = $tmp2363.value;
                        if (!$tmp2358) goto $l2357;
                        {
                            int $tmp2366;
                            {
                                ITable* $tmp2370 = Iter$693$172349->$class->itable;
                                while ($tmp2370->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2370 = $tmp2370->next;
                                }
                                $fn2372 $tmp2371 = $tmp2370->methods[1];
                                panda$core$Object* $tmp2373 = $tmp2371(Iter$693$172349);
                                $tmp2369 = $tmp2373;
                                $tmp2368 = ((org$pandalanguage$pandac$ASTNode*) $tmp2369);
                                e2367 = $tmp2368;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2368));
                                panda$core$Panda$unref$panda$core$Object($tmp2369);
                                int $tmp2376;
                                {
                                    $tmp2378 = e2367;
                                    $match$694_212377 = $tmp2378;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2378));
                                    panda$core$Int64$init$builtin_int64(&$tmp2379, 30);
                                    panda$core$Bit $tmp2380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$694_212377->$rawValue, $tmp2379);
                                    if ($tmp2380.value) {
                                    {
                                        panda$core$String** $tmp2382 = ((panda$core$String**) ((char*) $match$694_212377->$data + 16));
                                        name2381 = *$tmp2382;
                                        {
                                            $tmp2383 = currentPackage2339;
                                            $tmp2384 = name2381;
                                            currentPackage2339 = $tmp2384;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2384));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2383));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2385, 46);
                                    panda$core$Bit $tmp2386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$694_212377->$rawValue, $tmp2385);
                                    if ($tmp2386.value) {
                                    {
                                        panda$core$String** $tmp2388 = ((panda$core$String**) ((char*) $match$694_212377->$data + 16));
                                        fullName2387 = *$tmp2388;
                                        int $tmp2391;
                                        {
                                            panda$core$String$Index$nullable $tmp2394 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName2387, &$s2393);
                                            idx2392 = $tmp2394;
                                            memset(&alias2395, 0, sizeof(alias2395));
                                            if (((panda$core$Bit) { idx2392.nonnull }).value) {
                                            {
                                                {
                                                    $tmp2396 = alias2395;
                                                    panda$core$String$Index $tmp2400 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName2387, ((panda$core$String$Index) idx2392.value));
                                                    panda$core$Bit$init$builtin_bit(&$tmp2401, false);
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp2399, ((panda$core$String$Index$nullable) { $tmp2400, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2401);
                                                    panda$core$String* $tmp2402 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName2387, $tmp2399);
                                                    $tmp2398 = $tmp2402;
                                                    $tmp2397 = $tmp2398;
                                                    alias2395 = $tmp2397;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2397));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2398));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2396));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2403 = alias2395;
                                                    $tmp2404 = fullName2387;
                                                    alias2395 = $tmp2404;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2404));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2403));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases2342, ((panda$collections$Key*) alias2395), ((panda$core$Object*) fullName2387));
                                        }
                                        $tmp2391 = -1;
                                        goto $l2389;
                                        $l2389:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias2395));
                                        switch ($tmp2391) {
                                            case -1: goto $l2405;
                                        }
                                        $l2405:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2406, 11);
                                    panda$core$Bit $tmp2407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$694_212377->$rawValue, $tmp2406);
                                    if ($tmp2407.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2409 = ((org$pandalanguage$pandac$Position*) ((char*) $match$694_212377->$data + 0));
                                        position2408 = *$tmp2409;
                                        org$pandalanguage$pandac$ASTNode** $tmp2411 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$694_212377->$data + 16));
                                        dc2410 = *$tmp2411;
                                        panda$collections$ImmutableArray** $tmp2413 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212377->$data + 24));
                                        annotations2412 = *$tmp2413;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp2415 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$694_212377->$data + 32));
                                        kind2414 = *$tmp2415;
                                        panda$core$String** $tmp2417 = ((panda$core$String**) ((char*) $match$694_212377->$data + 40));
                                        name2416 = *$tmp2417;
                                        panda$collections$ImmutableArray** $tmp2419 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212377->$data + 48));
                                        generics2418 = *$tmp2419;
                                        panda$collections$ImmutableArray** $tmp2421 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212377->$data + 56));
                                        supertypes2420 = *$tmp2421;
                                        panda$collections$ImmutableArray** $tmp2423 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212377->$data + 64));
                                        members2422 = *$tmp2423;
                                        int $tmp2426;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp2430 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases2342), currentPackage2339, position2408, dc2410, annotations2412, kind2414, name2416, generics2418, supertypes2420, members2422);
                                            $tmp2429 = $tmp2430;
                                            $tmp2428 = $tmp2429;
                                            cl2427 = $tmp2428;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2428));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2429));
                                            if (((panda$core$Bit) { cl2427 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl2427, result2335);
                                            }
                                            }
                                        }
                                        $tmp2426 = -1;
                                        goto $l2424;
                                        $l2424:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2427));
                                        cl2427 = NULL;
                                        switch ($tmp2426) {
                                            case -1: goto $l2431;
                                        }
                                        $l2431:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2432, 26);
                                    panda$core$Bit $tmp2433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$694_212377->$rawValue, $tmp2432);
                                    if ($tmp2433.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2435 = ((org$pandalanguage$pandac$Position*) ((char*) $match$694_212377->$data + 0));
                                        position2434 = *$tmp2435;
                                        org$pandalanguage$pandac$ASTNode** $tmp2437 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$694_212377->$data + 16));
                                        dc2436 = *$tmp2437;
                                        panda$collections$ImmutableArray** $tmp2439 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212377->$data + 24));
                                        annotations2438 = *$tmp2439;
                                        org$pandalanguage$pandac$MethodDecl$Kind* $tmp2441 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$694_212377->$data + 32));
                                        kind2440 = *$tmp2441;
                                        panda$core$String** $tmp2443 = ((panda$core$String**) ((char*) $match$694_212377->$data + 40));
                                        rawName2442 = *$tmp2443;
                                        panda$collections$ImmutableArray** $tmp2445 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212377->$data + 48));
                                        generics2444 = *$tmp2445;
                                        panda$collections$ImmutableArray** $tmp2447 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212377->$data + 56));
                                        parameters2446 = *$tmp2447;
                                        org$pandalanguage$pandac$ASTNode** $tmp2449 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$694_212377->$data + 64));
                                        rawReturnType2448 = *$tmp2449;
                                        panda$collections$ImmutableArray** $tmp2451 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212377->$data + 72));
                                        statements2450 = *$tmp2451;
                                        int $tmp2454;
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp2455, 2);
                                            panda$core$Bit $tmp2456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind2440.$rawValue, $tmp2455);
                                            if ($tmp2456.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, position2434, &$s2457);
                                                $tmp2454 = 0;
                                                goto $l2452;
                                                $l2458:;
                                                $tmp2376 = 0;
                                                goto $l2374;
                                                $l2459:;
                                                $tmp2366 = 0;
                                                goto $l2364;
                                                $l2460:;
                                                goto $l2356;
                                            }
                                            }
                                            org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2342), currentPackage2339, ((panda$collections$List*) result2335));
                                            memset(&name2461, 0, sizeof(name2461));
                                            panda$core$Bit $tmp2463 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(rawName2442, &$s2462);
                                            if ($tmp2463.value) {
                                            {
                                                int $tmp2466;
                                                {
                                                    {
                                                        $tmp2467 = name2461;
                                                        $tmp2468 = &$s2469;
                                                        name2461 = $tmp2468;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2468));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2467));
                                                    }
                                                    panda$collections$Array* $tmp2473 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2473);
                                                    $tmp2472 = $tmp2473;
                                                    $tmp2471 = $tmp2472;
                                                    mainParameters2470 = $tmp2471;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2471));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2472));
                                                    panda$collections$Array* $tmp2477 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2477);
                                                    $tmp2476 = $tmp2477;
                                                    $tmp2475 = $tmp2476;
                                                    mainStatements2474 = $tmp2475;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2475));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2476));
                                                    panda$collections$Array* $tmp2481 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2481);
                                                    $tmp2480 = $tmp2481;
                                                    $tmp2479 = $tmp2480;
                                                    mainArguments2478 = $tmp2479;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2479));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2480));
                                                    {
                                                        int $tmp2484;
                                                        {
                                                            ITable* $tmp2488 = ((panda$collections$Iterable*) parameters2446)->$class->itable;
                                                            while ($tmp2488->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                                                $tmp2488 = $tmp2488->next;
                                                            }
                                                            $fn2490 $tmp2489 = $tmp2488->methods[0];
                                                            panda$collections$Iterator* $tmp2491 = $tmp2489(((panda$collections$Iterable*) parameters2446));
                                                            $tmp2487 = $tmp2491;
                                                            $tmp2486 = $tmp2487;
                                                            Iter$727$332485 = $tmp2486;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2486));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2487));
                                                            $l2492:;
                                                            ITable* $tmp2495 = Iter$727$332485->$class->itable;
                                                            while ($tmp2495->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                $tmp2495 = $tmp2495->next;
                                                            }
                                                            $fn2497 $tmp2496 = $tmp2495->methods[0];
                                                            panda$core$Bit $tmp2498 = $tmp2496(Iter$727$332485);
                                                            panda$core$Bit $tmp2499 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2498);
                                                            bool $tmp2494 = $tmp2499.value;
                                                            if (!$tmp2494) goto $l2493;
                                                            {
                                                                int $tmp2502;
                                                                {
                                                                    ITable* $tmp2506 = Iter$727$332485->$class->itable;
                                                                    while ($tmp2506->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                        $tmp2506 = $tmp2506->next;
                                                                    }
                                                                    $fn2508 $tmp2507 = $tmp2506->methods[1];
                                                                    panda$core$Object* $tmp2509 = $tmp2507(Iter$727$332485);
                                                                    $tmp2505 = $tmp2509;
                                                                    $tmp2504 = ((org$pandalanguage$pandac$ASTNode*) $tmp2505);
                                                                    p2503 = $tmp2504;
                                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2504));
                                                                    panda$core$Panda$unref$panda$core$Object($tmp2505);
                                                                    int $tmp2512;
                                                                    {
                                                                        $tmp2514 = p2503;
                                                                        $match$728_372513 = $tmp2514;
                                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2514));
                                                                        panda$core$Int64$init$builtin_int64(&$tmp2515, 31);
                                                                        panda$core$Bit $tmp2516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_372513->$rawValue, $tmp2515);
                                                                        if ($tmp2516.value) {
                                                                        {
                                                                            org$pandalanguage$pandac$Position* $tmp2518 = ((org$pandalanguage$pandac$Position*) ((char*) $match$728_372513->$data + 0));
                                                                            position2517 = *$tmp2518;
                                                                            panda$core$String** $tmp2520 = ((panda$core$String**) ((char*) $match$728_372513->$data + 16));
                                                                            name2519 = *$tmp2520;
                                                                            org$pandalanguage$pandac$ASTNode** $tmp2522 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$728_372513->$data + 24));
                                                                            type2521 = *$tmp2522;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2524 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                                                            org$pandalanguage$pandac$Type* $tmp2526 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type2521);
                                                                            $tmp2525 = $tmp2526;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2524, name2519, $tmp2525);
                                                                            $tmp2523 = $tmp2524;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainParameters2470, ((panda$core$Object*) $tmp2523));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2523));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2525));
                                                                            org$pandalanguage$pandac$ASTNode* $tmp2528 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                                            panda$core$Int64$init$builtin_int64(&$tmp2529, 20);
                                                                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2528, $tmp2529, position2517, name2519);
                                                                            $tmp2527 = $tmp2528;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainArguments2478, ((panda$core$Object*) $tmp2527));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2527));
                                                                        }
                                                                        }
                                                                        else {
                                                                        {
                                                                            panda$core$Bit$init$builtin_bit(&$tmp2530, false);
                                                                            if ($tmp2530.value) goto $l2531; else goto $l2532;
                                                                            $l2532:;
                                                                            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2533, (panda$core$Int64) { 734 });
                                                                            abort();
                                                                            $l2531:;
                                                                        }
                                                                        }
                                                                    }
                                                                    $tmp2512 = -1;
                                                                    goto $l2510;
                                                                    $l2510:;
                                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2514));
                                                                    switch ($tmp2512) {
                                                                        case -1: goto $l2534;
                                                                    }
                                                                    $l2534:;
                                                                }
                                                                $tmp2502 = -1;
                                                                goto $l2500;
                                                                $l2500:;
                                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p2503));
                                                                p2503 = NULL;
                                                                switch ($tmp2502) {
                                                                    case -1: goto $l2535;
                                                                }
                                                                $l2535:;
                                                            }
                                                            goto $l2492;
                                                            $l2493:;
                                                        }
                                                        $tmp2484 = -1;
                                                        goto $l2482;
                                                        $l2482:;
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$727$332485));
                                                        Iter$727$332485 = NULL;
                                                        switch ($tmp2484) {
                                                            case -1: goto $l2536;
                                                        }
                                                        $l2536:;
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp2540 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2541, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2543 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2544, 20);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2543, $tmp2544, position2434, &$s2545);
                                                    $tmp2542 = $tmp2543;
                                                    panda$collections$ImmutableArray* $tmp2547 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                                                    panda$collections$ImmutableArray$init($tmp2547);
                                                    $tmp2546 = $tmp2547;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2540, $tmp2541, position2434, $tmp2542, $tmp2546);
                                                    $tmp2539 = $tmp2540;
                                                    $tmp2538 = $tmp2539;
                                                    bareConstruct2537 = $tmp2538;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2538));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2539));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2546));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2542));
                                                    org$pandalanguage$pandac$ASTNode* $tmp2549 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2550, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2552 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2553, 15);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2552, $tmp2553, position2434, bareConstruct2537, name2461);
                                                    $tmp2551 = $tmp2552;
                                                    panda$collections$ImmutableArray* $tmp2555 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainArguments2478);
                                                    $tmp2554 = $tmp2555;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2549, $tmp2550, position2434, $tmp2551, $tmp2554);
                                                    $tmp2548 = $tmp2549;
                                                    panda$collections$Array$add$panda$collections$Array$T(mainStatements2474, ((panda$core$Object*) $tmp2548));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2548));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2554));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2551));
                                                    memset(&returnType2556, 0, sizeof(returnType2556));
                                                    if (((panda$core$Bit) { rawReturnType2448 != NULL }).value) {
                                                    {
                                                        {
                                                            $tmp2557 = returnType2556;
                                                            org$pandalanguage$pandac$Type* $tmp2560 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType2448);
                                                            $tmp2559 = $tmp2560;
                                                            $tmp2558 = $tmp2559;
                                                            returnType2556 = $tmp2558;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2558));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2559));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2557));
                                                        }
                                                    }
                                                    }
                                                    else {
                                                    {
                                                        {
                                                            $tmp2561 = returnType2556;
                                                            org$pandalanguage$pandac$Type* $tmp2564 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                            $tmp2563 = $tmp2564;
                                                            $tmp2562 = $tmp2563;
                                                            returnType2556 = $tmp2562;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2562));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2563));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2561));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$MethodDecl* $tmp2568 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                                                    org$pandalanguage$pandac$Position$init(&$tmp2569);
                                                    org$pandalanguage$pandac$Annotations* $tmp2571 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2572, 16);
                                                    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2571, $tmp2572);
                                                    $tmp2570 = $tmp2571;
                                                    panda$core$Int64$init$builtin_int64(&$tmp2574, 0);
                                                    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2573, $tmp2574);
                                                    panda$collections$Array* $tmp2577 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2577);
                                                    $tmp2576 = $tmp2577;
                                                    panda$collections$ImmutableArray* $tmp2579 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainStatements2474);
                                                    $tmp2578 = $tmp2579;
                                                    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2568, self->bareCodeClass, $tmp2569, NULL, $tmp2570, $tmp2573, &$s2575, $tmp2576, mainParameters2470, returnType2556, $tmp2578);
                                                    $tmp2567 = $tmp2568;
                                                    $tmp2566 = $tmp2567;
                                                    bareMain2565 = $tmp2566;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2566));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2567));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2578));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2576));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2570));
                                                    panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) bareMain2565));
                                                }
                                                $tmp2466 = -1;
                                                goto $l2464;
                                                $l2464:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareMain2565));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2556));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareConstruct2537));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainArguments2478));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainStatements2474));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainParameters2470));
                                                mainParameters2470 = NULL;
                                                mainStatements2474 = NULL;
                                                mainArguments2478 = NULL;
                                                bareConstruct2537 = NULL;
                                                bareMain2565 = NULL;
                                                switch ($tmp2466) {
                                                    case -1: goto $l2580;
                                                }
                                                $l2580:;
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2581 = name2461;
                                                    $tmp2582 = rawName2442;
                                                    name2461 = $tmp2582;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2582));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2581));
                                                }
                                            }
                                            }
                                            panda$core$Object* $tmp2584 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                            $tmp2583 = $tmp2584;
                                            panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2583)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2583);
                                            org$pandalanguage$pandac$MethodDecl* $tmp2588 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, self->bareCodeClass, position2434, dc2436, annotations2438, kind2440, name2461, generics2444, parameters2446, rawReturnType2448, statements2450);
                                            $tmp2587 = $tmp2588;
                                            $tmp2586 = $tmp2587;
                                            m2585 = $tmp2586;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2586));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2587));
                                            panda$core$Bit $tmp2589 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2585->annotations);
                                            if ($tmp2589.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) m2585)->position, &$s2590);
                                                $tmp2591 = m2585->annotations;
                                                panda$core$Int64$init$builtin_int64(&$tmp2592, 16);
                                                panda$core$Int64 $tmp2593 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp2592);
                                                panda$core$Int64 $tmp2594 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp2591->flags, $tmp2593);
                                                $tmp2591->flags = $tmp2594;
                                            }
                                            }
                                            panda$core$Object* $tmp2596 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                            $tmp2595 = $tmp2596;
                                            panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2595)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2595);
                                            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) m2585));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) m2585));
                                        }
                                        $tmp2454 = -1;
                                        goto $l2452;
                                        $l2452:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2585));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2461));
                                        m2585 = NULL;
                                        switch ($tmp2454) {
                                            case -1: goto $l2597;
                                            case 0: goto $l2458;
                                        }
                                        $l2597:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2598, 16);
                                    panda$core$Bit $tmp2599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$694_212377->$rawValue, $tmp2598);
                                    if ($tmp2599.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2601 = ((org$pandalanguage$pandac$Position*) ((char*) $match$694_212377->$data + 0));
                                        position2600 = *$tmp2601;
                                        org$pandalanguage$pandac$ASTNode** $tmp2603 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$694_212377->$data + 16));
                                        dc2602 = *$tmp2603;
                                        panda$collections$ImmutableArray** $tmp2605 = ((panda$collections$ImmutableArray**) ((char*) $match$694_212377->$data + 24));
                                        annotations2604 = *$tmp2605;
                                        org$pandalanguage$pandac$ASTNode** $tmp2607 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$694_212377->$data + 32));
                                        varDecl2606 = *$tmp2607;
                                        org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2342), currentPackage2339, ((panda$collections$List*) result2335));
                                        panda$core$Int64 $tmp2609 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        old2608 = $tmp2609;
                                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, self->bareCodeClass, position2600, dc2602, annotations2604, varDecl2606);
                                        panda$core$Int64 $tmp2611 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        panda$core$Bit$init$builtin_bit(&$tmp2612, false);
                                        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2610, old2608, $tmp2611, $tmp2612);
                                        int64_t $tmp2614 = $tmp2610.min.value;
                                        panda$core$Int64 i2613 = { $tmp2614 };
                                        int64_t $tmp2616 = $tmp2610.max.value;
                                        bool $tmp2617 = $tmp2610.inclusive.value;
                                        if ($tmp2617) goto $l2624; else goto $l2625;
                                        $l2624:;
                                        if ($tmp2614 <= $tmp2616) goto $l2618; else goto $l2620;
                                        $l2625:;
                                        if ($tmp2614 < $tmp2616) goto $l2618; else goto $l2620;
                                        $l2618:;
                                        {
                                            int $tmp2628;
                                            {
                                                panda$core$Object* $tmp2632 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->bareCodeClass->fields, i2613);
                                                $tmp2631 = $tmp2632;
                                                $tmp2630 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2631);
                                                f2629 = $tmp2630;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2630));
                                                panda$core$Panda$unref$panda$core$Object($tmp2631);
                                                panda$core$Int64$init$builtin_int64(&$tmp2634, 2);
                                                panda$core$Bit $tmp2635 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(f2629->fieldKind.$rawValue, $tmp2634);
                                                bool $tmp2633 = $tmp2635.value;
                                                if (!$tmp2633) goto $l2636;
                                                panda$core$Bit $tmp2637 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f2629->annotations);
                                                $tmp2633 = $tmp2637.value;
                                                $l2636:;
                                                panda$core$Bit $tmp2638 = { $tmp2633 };
                                                if ($tmp2638.value) {
                                                {
                                                    org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) f2629)->position, &$s2639);
                                                }
                                                }
                                            }
                                            $tmp2628 = -1;
                                            goto $l2626;
                                            $l2626:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f2629));
                                            f2629 = NULL;
                                            switch ($tmp2628) {
                                                case -1: goto $l2640;
                                            }
                                            $l2640:;
                                        }
                                        $l2621:;
                                        int64_t $tmp2642 = $tmp2616 - i2613.value;
                                        if ($tmp2617) goto $l2643; else goto $l2644;
                                        $l2643:;
                                        if ((uint64_t) $tmp2642 >= 1) goto $l2641; else goto $l2620;
                                        $l2644:;
                                        if ((uint64_t) $tmp2642 > 1) goto $l2641; else goto $l2620;
                                        $l2641:;
                                        i2613.value += 1;
                                        goto $l2618;
                                        $l2620:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp2647, false);
                                        if ($tmp2647.value) goto $l2648; else goto $l2649;
                                        $l2649:;
                                        panda$core$String* $tmp2658 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2657, ((panda$core$Object*) e2367));
                                        $tmp2656 = $tmp2658;
                                        panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, &$s2659);
                                        $tmp2655 = $tmp2660;
                                        panda$core$Int64$wrapper* $tmp2662;
                                        $tmp2662 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                                        $tmp2662->value = e2367->$rawValue;
                                        $tmp2661 = ((panda$core$Object*) $tmp2662);
                                        panda$core$String* $tmp2663 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2655, $tmp2661);
                                        $tmp2654 = $tmp2663;
                                        panda$core$String* $tmp2665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, &$s2664);
                                        $tmp2653 = $tmp2665;
                                        org$pandalanguage$pandac$Position $tmp2668 = (($fn2667) e2367->$class->vtable[2])(e2367);
                                        org$pandalanguage$pandac$Position$wrapper* $tmp2669;
                                        $tmp2669 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                                        $tmp2669->value = $tmp2668;
                                        $tmp2666 = ((panda$core$Object*) $tmp2669);
                                        panda$core$String* $tmp2670 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2653, $tmp2666);
                                        $tmp2652 = $tmp2670;
                                        panda$core$String* $tmp2672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2652, &$s2671);
                                        $tmp2651 = $tmp2672;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2650, (panda$core$Int64) { 783 }, $tmp2651);
                                        abort();
                                        $l2648:;
                                    }
                                    }
                                    }
                                    }
                                    }
                                    }
                                }
                                $tmp2376 = -1;
                                goto $l2374;
                                $l2374:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2378));
                                switch ($tmp2376) {
                                    case -1: goto $l2673;
                                    case 0: goto $l2459;
                                }
                                $l2673:;
                            }
                            $tmp2366 = -1;
                            goto $l2364;
                            $l2364:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2367));
                            e2367 = NULL;
                            switch ($tmp2366) {
                                case 0: goto $l2460;
                                case -1: goto $l2674;
                            }
                            $l2674:;
                        }
                        goto $l2356;
                        $l2357:;
                    }
                    $tmp2348 = -1;
                    goto $l2346;
                    $l2346:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$693$172349));
                    Iter$693$172349 = NULL;
                    switch ($tmp2348) {
                        case -1: goto $l2675;
                    }
                    $l2675:;
                }
                {
                    $tmp2676 = self->source;
                    $tmp2677 = NULL;
                    self->source = $tmp2677;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2677));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2676));
                }
                $tmp2679 = ((panda$collections$ListView*) result2335);
                $returnValue2678 = $tmp2679;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2679));
                $tmp2334 = 0;
                goto $l2332;
                $l2680:;
                $tmp2325 = 0;
                goto $l2323;
                $l2681:;
                return $returnValue2678;
            }
            $l2332:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases2342));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage2339));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2335));
            result2335 = NULL;
            currentPackage2339 = NULL;
            aliases2342 = NULL;
            switch ($tmp2334) {
                case 0: goto $l2680;
            }
            $l2683:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2684, false);
            if ($tmp2684.value) goto $l2685; else goto $l2686;
            $l2686:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2687, (panda$core$Int64) { 789 });
            abort();
            $l2685:;
        }
        }
    }
    $tmp2325 = -1;
    goto $l2323;
    $l2323:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2327));
    switch ($tmp2325) {
        case 0: goto $l2681;
        case -1: goto $l2688;
    }
    $l2688:;
    abort();
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp2691;
    {
    }
    $tmp2691 = -1;
    goto $l2689;
    $l2689:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2691) {
        case -1: goto $l2692;
    }
    $l2692:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bareCodeClass));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}

