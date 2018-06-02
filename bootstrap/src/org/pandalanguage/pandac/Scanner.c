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
typedef panda$collections$Iterator* (*$fn663)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn670)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn681)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn710)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn717)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn728)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn774)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn781)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn792)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn823)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn830)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn841)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn877)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn884)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn895)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn924)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn931)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn942)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn968)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn975)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn986)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1000)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1007)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1018)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1114)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1121)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1132)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1156)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1163)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1174)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1188)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1195)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1206)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1230)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1237)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1248)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1270)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1291)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1298)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1309)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1394)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1401)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1412)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1450)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1469)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1476)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1487)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1701)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1708)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1719)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1788)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1795)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1806)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1844)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1866)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1873)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1884)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1895)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1898)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1936)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1943)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1954)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1993)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2000)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2011)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2115)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2122)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2133)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2149)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn2165)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2172)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2183)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2205)(panda$core$Weak*);
typedef void (*$fn2209)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Object* (*$fn2256)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn2291)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2298)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2309)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2421)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2428)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2439)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2515)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2527)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Position (*$fn2599)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 197438526755717134, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
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
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s2591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };

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
    org$pandalanguage$pandac$ASTNode* value561 = NULL;
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
    org$pandalanguage$pandac$FieldDecl* field600 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp601;
    org$pandalanguage$pandac$FieldDecl* $tmp602;
    panda$core$Bit $tmp605;
    panda$core$Bit $tmp612;
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
                                        value561 = *$tmp562;
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
                                            org$pandalanguage$pandac$FieldDecl* $tmp603 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp603, p_owner, declPosition557, doccomment466, annotations487, fieldKind491, name566, type567, value561);
                                            $tmp602 = $tmp603;
                                            $tmp601 = $tmp602;
                                            field600 = $tmp601;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp601));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp602));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field600));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field600));
                                        }
                                        $tmp565 = -1;
                                        goto $l563;
                                        $l563:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field600));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type567));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name566));
                                        field600 = NULL;
                                        switch ($tmp565) {
                                            case -1: goto $l604;
                                        }
                                        $l604:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp605, false);
                                        if ($tmp605.value) goto $l606; else goto $l607;
                                        $l607:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s608, (panda$core$Int64) { 206 });
                                        abort();
                                        $l606:;
                                    }
                                    }
                                }
                                $tmp552 = -1;
                                goto $l550;
                                $l550:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp554));
                                switch ($tmp552) {
                                    case -1: goto $l609;
                                }
                                $l609:;
                            }
                            $tmp542 = -1;
                            goto $l540;
                            $l540:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl543));
                            decl543 = NULL;
                            switch ($tmp542) {
                                case -1: goto $l610;
                            }
                            $l610:;
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
                        case -1: goto $l611;
                    }
                    $l611:;
                }
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp612, false);
                if ($tmp612.value) goto $l613; else goto $l614;
                $l614:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s615, (panda$core$Int64) { 210 });
                abort();
                $l613:;
            }
            }
        }
        $tmp494 = -1;
        goto $l492;
        $l492:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp496));
        switch ($tmp494) {
            case -1: goto $l616;
        }
        $l616:;
    }
    $tmp465 = -1;
    goto $l463;
    $l463:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations487));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment466));
    annotations487 = NULL;
    switch ($tmp465) {
        case -1: goto $l617;
    }
    $l617:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$216_9621 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp622;
    panda$core$Int64 $tmp623;
    org$pandalanguage$pandac$ASTNode* test625 = NULL;
    panda$core$Int64 $returnValue627;
    panda$core$Int64 $tmp631;
    org$pandalanguage$pandac$ASTNode* left633 = NULL;
    org$pandalanguage$pandac$ASTNode* right635 = NULL;
    panda$core$Int64 $tmp637;
    panda$core$Int64 $tmp644;
    panda$core$Int64 $tmp646;
    panda$core$Int64 $tmp649;
    panda$collections$ImmutableArray* statements651 = NULL;
    panda$core$Int64 result653;
    panda$core$Int64 $tmp654;
    panda$collections$Iterator* Iter$225$17658 = NULL;
    panda$collections$Iterator* $tmp659;
    panda$collections$Iterator* $tmp660;
    org$pandalanguage$pandac$ASTNode* s676 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp677;
    panda$core$Object* $tmp678;
    panda$core$Int64 $tmp689;
    panda$core$Int64 $tmp691;
    panda$core$Int64 $tmp694;
    org$pandalanguage$pandac$ASTNode* target696 = NULL;
    panda$collections$ImmutableArray* args698 = NULL;
    panda$core$Int64 result700;
    panda$collections$Iterator* Iter$233$17705 = NULL;
    panda$collections$Iterator* $tmp706;
    panda$collections$Iterator* $tmp707;
    org$pandalanguage$pandac$ASTNode* a723 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp724;
    panda$core$Object* $tmp725;
    panda$core$Int64 $tmp736;
    org$pandalanguage$pandac$ASTNode* base738 = NULL;
    panda$core$Int64 $tmp743;
    panda$core$Int64 $tmp745;
    panda$core$Int64 $tmp748;
    org$pandalanguage$pandac$ASTNode* value750 = NULL;
    panda$core$Int64 $tmp752;
    panda$core$Int64 $tmp758;
    panda$collections$ImmutableArray* statements760 = NULL;
    org$pandalanguage$pandac$ASTNode* test762 = NULL;
    panda$core$Int64 result764;
    panda$collections$Iterator* Iter$248$17769 = NULL;
    panda$collections$Iterator* $tmp770;
    panda$collections$Iterator* $tmp771;
    org$pandalanguage$pandac$ASTNode* s787 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp788;
    panda$core$Object* $tmp789;
    panda$core$Int64 $tmp800;
    org$pandalanguage$pandac$ASTNode* base802 = NULL;
    panda$core$Int64 $tmp807;
    org$pandalanguage$pandac$ASTNode* list809 = NULL;
    panda$collections$ImmutableArray* statements811 = NULL;
    panda$core$Int64 result813;
    panda$collections$Iterator* Iter$256$17818 = NULL;
    panda$collections$Iterator* $tmp819;
    panda$collections$Iterator* $tmp820;
    org$pandalanguage$pandac$ASTNode* s836 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp837;
    panda$core$Object* $tmp838;
    panda$core$Int64 $tmp849;
    panda$core$Int64 $tmp851;
    panda$core$Int64 $tmp854;
    panda$core$Int64 $tmp856;
    panda$core$Int64 $tmp859;
    org$pandalanguage$pandac$ASTNode* test861 = NULL;
    panda$collections$ImmutableArray* ifTrue863 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse865 = NULL;
    panda$core$Int64 result867;
    panda$collections$Iterator* Iter$266$17872 = NULL;
    panda$collections$Iterator* $tmp873;
    panda$collections$Iterator* $tmp874;
    org$pandalanguage$pandac$ASTNode* s890 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp891;
    panda$core$Object* $tmp892;
    panda$core$Int64 $tmp905;
    panda$core$Int64 $tmp907;
    panda$core$Int64 $tmp910;
    panda$collections$ImmutableArray* statements912 = NULL;
    panda$core$Int64 result914;
    panda$core$Int64 $tmp915;
    panda$collections$Iterator* Iter$277$17919 = NULL;
    panda$collections$Iterator* $tmp920;
    panda$collections$Iterator* $tmp921;
    org$pandalanguage$pandac$ASTNode* s937 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp938;
    panda$core$Object* $tmp939;
    panda$core$Int64 $tmp950;
    org$pandalanguage$pandac$ASTNode* value952 = NULL;
    panda$collections$ImmutableArray* whens954 = NULL;
    panda$collections$ImmutableArray* other956 = NULL;
    panda$core$Int64 result958;
    panda$collections$Iterator* Iter$283$17963 = NULL;
    panda$collections$Iterator* $tmp964;
    panda$collections$Iterator* $tmp965;
    org$pandalanguage$pandac$ASTNode* w981 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp982;
    panda$core$Object* $tmp983;
    panda$collections$Iterator* Iter$287$21995 = NULL;
    panda$collections$Iterator* $tmp996;
    panda$collections$Iterator* $tmp997;
    org$pandalanguage$pandac$ASTNode* s1013 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1014;
    panda$core$Object* $tmp1015;
    panda$core$Int64 $tmp1026;
    panda$core$Int64 $tmp1028;
    panda$core$Int64 $tmp1031;
    panda$core$Int64 $tmp1033;
    panda$core$Int64 $tmp1036;
    panda$core$Int64 $tmp1038;
    panda$core$Int64 $tmp1041;
    org$pandalanguage$pandac$ASTNode* base1043 = NULL;
    panda$core$Int64 $tmp1045;
    panda$core$Int64 $tmp1050;
    panda$core$Int64 $tmp1052;
    panda$core$Int64 $tmp1055;
    panda$core$Int64 $tmp1057;
    panda$core$Int64 $tmp1060;
    org$pandalanguage$pandac$ASTNode* value1062 = NULL;
    panda$core$Int64 $tmp1064;
    panda$core$Int64 $tmp1070;
    panda$core$Int64 $tmp1072;
    panda$core$Int64 $tmp1075;
    panda$core$Int64 $tmp1077;
    panda$core$Int64 $tmp1080;
    panda$core$Int64 $tmp1082;
    panda$core$Int64 $tmp1085;
    panda$core$Int64 $tmp1087;
    panda$core$Int64 $tmp1090;
    panda$core$Int64 $tmp1092;
    panda$core$Int64 $tmp1095;
    panda$core$Int64 $tmp1097;
    panda$core$Int64 $tmp1100;
    panda$collections$ImmutableArray* decls1102 = NULL;
    panda$core$Int64 result1104;
    panda$core$Int64 $tmp1105;
    panda$collections$Iterator* Iter$323$171109 = NULL;
    panda$collections$Iterator* $tmp1110;
    panda$collections$Iterator* $tmp1111;
    org$pandalanguage$pandac$ASTNode* decl1127 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1128;
    panda$core$Object* $tmp1129;
    panda$core$Int64 $tmp1140;
    panda$collections$ImmutableArray* tests1142 = NULL;
    panda$collections$ImmutableArray* statements1144 = NULL;
    panda$core$Int64 result1146;
    panda$core$Int64 $tmp1147;
    panda$collections$Iterator* Iter$329$171151 = NULL;
    panda$collections$Iterator* $tmp1152;
    panda$collections$Iterator* $tmp1153;
    org$pandalanguage$pandac$ASTNode* test1169 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1170;
    panda$core$Object* $tmp1171;
    panda$collections$Iterator* Iter$332$171183 = NULL;
    panda$collections$Iterator* $tmp1184;
    panda$collections$Iterator* $tmp1185;
    org$pandalanguage$pandac$ASTNode* s1201 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1202;
    panda$core$Object* $tmp1203;
    panda$core$Int64 $tmp1214;
    org$pandalanguage$pandac$ASTNode* test1216 = NULL;
    panda$collections$ImmutableArray* statements1218 = NULL;
    panda$core$Int64 result1220;
    panda$collections$Iterator* Iter$338$171225 = NULL;
    panda$collections$Iterator* $tmp1226;
    panda$collections$Iterator* $tmp1227;
    org$pandalanguage$pandac$ASTNode* s1243 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1244;
    panda$core$Object* $tmp1245;
    panda$core$Bit $tmp1256;
    panda$core$String* $tmp1260;
    panda$core$String* $tmp1261;
    int $tmp620;
    {
        $tmp622 = p_node;
        $match$216_9621 = $tmp622;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp622));
        panda$core$Int64$init$builtin_int64(&$tmp623, 1);
        panda$core$Bit $tmp624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp623);
        if ($tmp624.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp626 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 16));
            test625 = *$tmp626;
            panda$core$Int64 $tmp628 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test625);
            $returnValue627 = $tmp628;
            $tmp620 = 0;
            goto $l618;
            $l629:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp631, 4);
        panda$core$Bit $tmp632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp631);
        if ($tmp632.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp634 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 16));
            left633 = *$tmp634;
            org$pandalanguage$pandac$ASTNode** $tmp636 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 32));
            right635 = *$tmp636;
            panda$core$Int64$init$builtin_int64(&$tmp637, 1);
            panda$core$Int64 $tmp638 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left633);
            panda$core$Int64 $tmp639 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp637, $tmp638);
            panda$core$Int64 $tmp640 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right635);
            panda$core$Int64 $tmp641 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp639, $tmp640);
            $returnValue627 = $tmp641;
            $tmp620 = 1;
            goto $l618;
            $l642:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp644, 5);
        panda$core$Bit $tmp645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp644);
        if ($tmp645.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp646, 1);
            $returnValue627 = $tmp646;
            $tmp620 = 2;
            goto $l618;
            $l647:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp649, 6);
        panda$core$Bit $tmp650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp649);
        if ($tmp650.value) {
        {
            panda$collections$ImmutableArray** $tmp652 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 16));
            statements651 = *$tmp652;
            panda$core$Int64$init$builtin_int64(&$tmp654, 0);
            result653 = $tmp654;
            {
                int $tmp657;
                {
                    ITable* $tmp661 = ((panda$collections$Iterable*) statements651)->$class->itable;
                    while ($tmp661->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp661 = $tmp661->next;
                    }
                    $fn663 $tmp662 = $tmp661->methods[0];
                    panda$collections$Iterator* $tmp664 = $tmp662(((panda$collections$Iterable*) statements651));
                    $tmp660 = $tmp664;
                    $tmp659 = $tmp660;
                    Iter$225$17658 = $tmp659;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp659));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp660));
                    $l665:;
                    ITable* $tmp668 = Iter$225$17658->$class->itable;
                    while ($tmp668->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp668 = $tmp668->next;
                    }
                    $fn670 $tmp669 = $tmp668->methods[0];
                    panda$core$Bit $tmp671 = $tmp669(Iter$225$17658);
                    panda$core$Bit $tmp672 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp671);
                    bool $tmp667 = $tmp672.value;
                    if (!$tmp667) goto $l666;
                    {
                        int $tmp675;
                        {
                            ITable* $tmp679 = Iter$225$17658->$class->itable;
                            while ($tmp679->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp679 = $tmp679->next;
                            }
                            $fn681 $tmp680 = $tmp679->methods[1];
                            panda$core$Object* $tmp682 = $tmp680(Iter$225$17658);
                            $tmp678 = $tmp682;
                            $tmp677 = ((org$pandalanguage$pandac$ASTNode*) $tmp678);
                            s676 = $tmp677;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp677));
                            panda$core$Panda$unref$panda$core$Object($tmp678);
                            panda$core$Int64 $tmp683 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s676);
                            panda$core$Int64 $tmp684 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result653, $tmp683);
                            result653 = $tmp684;
                        }
                        $tmp675 = -1;
                        goto $l673;
                        $l673:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s676));
                        s676 = NULL;
                        switch ($tmp675) {
                            case -1: goto $l685;
                        }
                        $l685:;
                    }
                    goto $l665;
                    $l666:;
                }
                $tmp657 = -1;
                goto $l655;
                $l655:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$225$17658));
                Iter$225$17658 = NULL;
                switch ($tmp657) {
                    case -1: goto $l686;
                }
                $l686:;
            }
            $returnValue627 = result653;
            $tmp620 = 3;
            goto $l618;
            $l687:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp689, 7);
        panda$core$Bit $tmp690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp689);
        if ($tmp690.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp691, 1);
            $returnValue627 = $tmp691;
            $tmp620 = 4;
            goto $l618;
            $l692:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp694, 8);
        panda$core$Bit $tmp695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp694);
        if ($tmp695.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp697 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 16));
            target696 = *$tmp697;
            panda$collections$ImmutableArray** $tmp699 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 24));
            args698 = *$tmp699;
            panda$core$Int64 $tmp701 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target696);
            result700 = $tmp701;
            {
                int $tmp704;
                {
                    ITable* $tmp708 = ((panda$collections$Iterable*) args698)->$class->itable;
                    while ($tmp708->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp708 = $tmp708->next;
                    }
                    $fn710 $tmp709 = $tmp708->methods[0];
                    panda$collections$Iterator* $tmp711 = $tmp709(((panda$collections$Iterable*) args698));
                    $tmp707 = $tmp711;
                    $tmp706 = $tmp707;
                    Iter$233$17705 = $tmp706;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp706));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp707));
                    $l712:;
                    ITable* $tmp715 = Iter$233$17705->$class->itable;
                    while ($tmp715->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp715 = $tmp715->next;
                    }
                    $fn717 $tmp716 = $tmp715->methods[0];
                    panda$core$Bit $tmp718 = $tmp716(Iter$233$17705);
                    panda$core$Bit $tmp719 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp718);
                    bool $tmp714 = $tmp719.value;
                    if (!$tmp714) goto $l713;
                    {
                        int $tmp722;
                        {
                            ITable* $tmp726 = Iter$233$17705->$class->itable;
                            while ($tmp726->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp726 = $tmp726->next;
                            }
                            $fn728 $tmp727 = $tmp726->methods[1];
                            panda$core$Object* $tmp729 = $tmp727(Iter$233$17705);
                            $tmp725 = $tmp729;
                            $tmp724 = ((org$pandalanguage$pandac$ASTNode*) $tmp725);
                            a723 = $tmp724;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp724));
                            panda$core$Panda$unref$panda$core$Object($tmp725);
                            panda$core$Int64 $tmp730 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a723);
                            panda$core$Int64 $tmp731 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result700, $tmp730);
                            result700 = $tmp731;
                        }
                        $tmp722 = -1;
                        goto $l720;
                        $l720:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a723));
                        a723 = NULL;
                        switch ($tmp722) {
                            case -1: goto $l732;
                        }
                        $l732:;
                    }
                    goto $l712;
                    $l713:;
                }
                $tmp704 = -1;
                goto $l702;
                $l702:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$233$17705));
                Iter$233$17705 = NULL;
                switch ($tmp704) {
                    case -1: goto $l733;
                }
                $l733:;
            }
            $returnValue627 = result700;
            $tmp620 = 5;
            goto $l618;
            $l734:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp736, 10);
        panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp736);
        if ($tmp737.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp739 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 16));
            base738 = *$tmp739;
            panda$core$Int64 $tmp740 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base738);
            $returnValue627 = $tmp740;
            $tmp620 = 6;
            goto $l618;
            $l741:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp743, 12);
        panda$core$Bit $tmp744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp743);
        if ($tmp744.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp745, 1);
            $returnValue627 = $tmp745;
            $tmp620 = 7;
            goto $l618;
            $l746:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp748, 13);
        panda$core$Bit $tmp749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp748);
        if ($tmp749.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp751 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 24));
            value750 = *$tmp751;
            if (((panda$core$Bit) { value750 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp752, 0);
                $returnValue627 = $tmp752;
                $tmp620 = 8;
                goto $l618;
                $l753:;
                return $returnValue627;
            }
            }
            panda$core$Int64 $tmp755 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value750);
            $returnValue627 = $tmp755;
            $tmp620 = 9;
            goto $l618;
            $l756:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp758, 14);
        panda$core$Bit $tmp759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp758);
        if ($tmp759.value) {
        {
            panda$collections$ImmutableArray** $tmp761 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 24));
            statements760 = *$tmp761;
            org$pandalanguage$pandac$ASTNode** $tmp763 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 32));
            test762 = *$tmp763;
            panda$core$Int64 $tmp765 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test762);
            result764 = $tmp765;
            {
                int $tmp768;
                {
                    ITable* $tmp772 = ((panda$collections$Iterable*) statements760)->$class->itable;
                    while ($tmp772->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp772 = $tmp772->next;
                    }
                    $fn774 $tmp773 = $tmp772->methods[0];
                    panda$collections$Iterator* $tmp775 = $tmp773(((panda$collections$Iterable*) statements760));
                    $tmp771 = $tmp775;
                    $tmp770 = $tmp771;
                    Iter$248$17769 = $tmp770;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp770));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp771));
                    $l776:;
                    ITable* $tmp779 = Iter$248$17769->$class->itable;
                    while ($tmp779->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp779 = $tmp779->next;
                    }
                    $fn781 $tmp780 = $tmp779->methods[0];
                    panda$core$Bit $tmp782 = $tmp780(Iter$248$17769);
                    panda$core$Bit $tmp783 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp782);
                    bool $tmp778 = $tmp783.value;
                    if (!$tmp778) goto $l777;
                    {
                        int $tmp786;
                        {
                            ITable* $tmp790 = Iter$248$17769->$class->itable;
                            while ($tmp790->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp790 = $tmp790->next;
                            }
                            $fn792 $tmp791 = $tmp790->methods[1];
                            panda$core$Object* $tmp793 = $tmp791(Iter$248$17769);
                            $tmp789 = $tmp793;
                            $tmp788 = ((org$pandalanguage$pandac$ASTNode*) $tmp789);
                            s787 = $tmp788;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp788));
                            panda$core$Panda$unref$panda$core$Object($tmp789);
                            panda$core$Int64 $tmp794 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s787);
                            panda$core$Int64 $tmp795 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result764, $tmp794);
                            result764 = $tmp795;
                        }
                        $tmp786 = -1;
                        goto $l784;
                        $l784:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s787));
                        s787 = NULL;
                        switch ($tmp786) {
                            case -1: goto $l796;
                        }
                        $l796:;
                    }
                    goto $l776;
                    $l777:;
                }
                $tmp768 = -1;
                goto $l766;
                $l766:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$248$17769));
                Iter$248$17769 = NULL;
                switch ($tmp768) {
                    case -1: goto $l797;
                }
                $l797:;
            }
            $returnValue627 = result764;
            $tmp620 = 10;
            goto $l618;
            $l798:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp800, 15);
        panda$core$Bit $tmp801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp800);
        if ($tmp801.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp803 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 16));
            base802 = *$tmp803;
            panda$core$Int64 $tmp804 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base802);
            $returnValue627 = $tmp804;
            $tmp620 = 11;
            goto $l618;
            $l805:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp807, 18);
        panda$core$Bit $tmp808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp807);
        if ($tmp808.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp810 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 32));
            list809 = *$tmp810;
            panda$collections$ImmutableArray** $tmp812 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 40));
            statements811 = *$tmp812;
            panda$core$Int64 $tmp814 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list809);
            result813 = $tmp814;
            {
                int $tmp817;
                {
                    ITable* $tmp821 = ((panda$collections$Iterable*) statements811)->$class->itable;
                    while ($tmp821->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp821 = $tmp821->next;
                    }
                    $fn823 $tmp822 = $tmp821->methods[0];
                    panda$collections$Iterator* $tmp824 = $tmp822(((panda$collections$Iterable*) statements811));
                    $tmp820 = $tmp824;
                    $tmp819 = $tmp820;
                    Iter$256$17818 = $tmp819;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp819));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp820));
                    $l825:;
                    ITable* $tmp828 = Iter$256$17818->$class->itable;
                    while ($tmp828->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp828 = $tmp828->next;
                    }
                    $fn830 $tmp829 = $tmp828->methods[0];
                    panda$core$Bit $tmp831 = $tmp829(Iter$256$17818);
                    panda$core$Bit $tmp832 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp831);
                    bool $tmp827 = $tmp832.value;
                    if (!$tmp827) goto $l826;
                    {
                        int $tmp835;
                        {
                            ITable* $tmp839 = Iter$256$17818->$class->itable;
                            while ($tmp839->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp839 = $tmp839->next;
                            }
                            $fn841 $tmp840 = $tmp839->methods[1];
                            panda$core$Object* $tmp842 = $tmp840(Iter$256$17818);
                            $tmp838 = $tmp842;
                            $tmp837 = ((org$pandalanguage$pandac$ASTNode*) $tmp838);
                            s836 = $tmp837;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp837));
                            panda$core$Panda$unref$panda$core$Object($tmp838);
                            panda$core$Int64 $tmp843 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s836);
                            panda$core$Int64 $tmp844 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result813, $tmp843);
                            result813 = $tmp844;
                        }
                        $tmp835 = -1;
                        goto $l833;
                        $l833:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s836));
                        s836 = NULL;
                        switch ($tmp835) {
                            case -1: goto $l845;
                        }
                        $l845:;
                    }
                    goto $l825;
                    $l826:;
                }
                $tmp817 = -1;
                goto $l815;
                $l815:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$256$17818));
                Iter$256$17818 = NULL;
                switch ($tmp817) {
                    case -1: goto $l846;
                }
                $l846:;
            }
            $returnValue627 = result813;
            $tmp620 = 12;
            goto $l618;
            $l847:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp849, 19);
        panda$core$Bit $tmp850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp849);
        if ($tmp850.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp851, 0);
            $returnValue627 = $tmp851;
            $tmp620 = 13;
            goto $l618;
            $l852:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp854, 20);
        panda$core$Bit $tmp855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp854);
        if ($tmp855.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp856, 1);
            $returnValue627 = $tmp856;
            $tmp620 = 14;
            goto $l618;
            $l857:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp859, 21);
        panda$core$Bit $tmp860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp859);
        if ($tmp860.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp862 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 16));
            test861 = *$tmp862;
            panda$collections$ImmutableArray** $tmp864 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 24));
            ifTrue863 = *$tmp864;
            org$pandalanguage$pandac$ASTNode** $tmp866 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 32));
            ifFalse865 = *$tmp866;
            panda$core$Int64 $tmp868 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test861);
            result867 = $tmp868;
            {
                int $tmp871;
                {
                    ITable* $tmp875 = ((panda$collections$Iterable*) ifTrue863)->$class->itable;
                    while ($tmp875->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp875 = $tmp875->next;
                    }
                    $fn877 $tmp876 = $tmp875->methods[0];
                    panda$collections$Iterator* $tmp878 = $tmp876(((panda$collections$Iterable*) ifTrue863));
                    $tmp874 = $tmp878;
                    $tmp873 = $tmp874;
                    Iter$266$17872 = $tmp873;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp873));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp874));
                    $l879:;
                    ITable* $tmp882 = Iter$266$17872->$class->itable;
                    while ($tmp882->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp882 = $tmp882->next;
                    }
                    $fn884 $tmp883 = $tmp882->methods[0];
                    panda$core$Bit $tmp885 = $tmp883(Iter$266$17872);
                    panda$core$Bit $tmp886 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp885);
                    bool $tmp881 = $tmp886.value;
                    if (!$tmp881) goto $l880;
                    {
                        int $tmp889;
                        {
                            ITable* $tmp893 = Iter$266$17872->$class->itable;
                            while ($tmp893->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp893 = $tmp893->next;
                            }
                            $fn895 $tmp894 = $tmp893->methods[1];
                            panda$core$Object* $tmp896 = $tmp894(Iter$266$17872);
                            $tmp892 = $tmp896;
                            $tmp891 = ((org$pandalanguage$pandac$ASTNode*) $tmp892);
                            s890 = $tmp891;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp891));
                            panda$core$Panda$unref$panda$core$Object($tmp892);
                            panda$core$Int64 $tmp897 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s890);
                            panda$core$Int64 $tmp898 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result867, $tmp897);
                            result867 = $tmp898;
                        }
                        $tmp889 = -1;
                        goto $l887;
                        $l887:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s890));
                        s890 = NULL;
                        switch ($tmp889) {
                            case -1: goto $l899;
                        }
                        $l899:;
                    }
                    goto $l879;
                    $l880:;
                }
                $tmp871 = -1;
                goto $l869;
                $l869:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$266$17872));
                Iter$266$17872 = NULL;
                switch ($tmp871) {
                    case -1: goto $l900;
                }
                $l900:;
            }
            if (((panda$core$Bit) { ifFalse865 != NULL }).value) {
            {
                panda$core$Int64 $tmp901 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse865);
                panda$core$Int64 $tmp902 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result867, $tmp901);
                result867 = $tmp902;
            }
            }
            $returnValue627 = result867;
            $tmp620 = 15;
            goto $l618;
            $l903:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp905, 22);
        panda$core$Bit $tmp906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp905);
        if ($tmp906.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp907, 1);
            $returnValue627 = $tmp907;
            $tmp620 = 16;
            goto $l618;
            $l908:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp910, 24);
        panda$core$Bit $tmp911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp910);
        if ($tmp911.value) {
        {
            panda$collections$ImmutableArray** $tmp913 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 24));
            statements912 = *$tmp913;
            panda$core$Int64$init$builtin_int64(&$tmp915, 0);
            result914 = $tmp915;
            {
                int $tmp918;
                {
                    ITable* $tmp922 = ((panda$collections$Iterable*) statements912)->$class->itable;
                    while ($tmp922->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp922 = $tmp922->next;
                    }
                    $fn924 $tmp923 = $tmp922->methods[0];
                    panda$collections$Iterator* $tmp925 = $tmp923(((panda$collections$Iterable*) statements912));
                    $tmp921 = $tmp925;
                    $tmp920 = $tmp921;
                    Iter$277$17919 = $tmp920;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp920));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp921));
                    $l926:;
                    ITable* $tmp929 = Iter$277$17919->$class->itable;
                    while ($tmp929->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp929 = $tmp929->next;
                    }
                    $fn931 $tmp930 = $tmp929->methods[0];
                    panda$core$Bit $tmp932 = $tmp930(Iter$277$17919);
                    panda$core$Bit $tmp933 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp932);
                    bool $tmp928 = $tmp933.value;
                    if (!$tmp928) goto $l927;
                    {
                        int $tmp936;
                        {
                            ITable* $tmp940 = Iter$277$17919->$class->itable;
                            while ($tmp940->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp940 = $tmp940->next;
                            }
                            $fn942 $tmp941 = $tmp940->methods[1];
                            panda$core$Object* $tmp943 = $tmp941(Iter$277$17919);
                            $tmp939 = $tmp943;
                            $tmp938 = ((org$pandalanguage$pandac$ASTNode*) $tmp939);
                            s937 = $tmp938;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp938));
                            panda$core$Panda$unref$panda$core$Object($tmp939);
                            panda$core$Int64 $tmp944 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s937);
                            panda$core$Int64 $tmp945 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result914, $tmp944);
                            result914 = $tmp945;
                        }
                        $tmp936 = -1;
                        goto $l934;
                        $l934:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s937));
                        s937 = NULL;
                        switch ($tmp936) {
                            case -1: goto $l946;
                        }
                        $l946:;
                    }
                    goto $l926;
                    $l927:;
                }
                $tmp918 = -1;
                goto $l916;
                $l916:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$277$17919));
                Iter$277$17919 = NULL;
                switch ($tmp918) {
                    case -1: goto $l947;
                }
                $l947:;
            }
            $returnValue627 = result914;
            $tmp620 = 17;
            goto $l618;
            $l948:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp950, 25);
        panda$core$Bit $tmp951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp950);
        if ($tmp951.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp953 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 16));
            value952 = *$tmp953;
            panda$collections$ImmutableArray** $tmp955 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 24));
            whens954 = *$tmp955;
            panda$collections$ImmutableArray** $tmp957 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 32));
            other956 = *$tmp957;
            panda$core$Int64 $tmp959 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value952);
            result958 = $tmp959;
            {
                int $tmp962;
                {
                    ITable* $tmp966 = ((panda$collections$Iterable*) whens954)->$class->itable;
                    while ($tmp966->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp966 = $tmp966->next;
                    }
                    $fn968 $tmp967 = $tmp966->methods[0];
                    panda$collections$Iterator* $tmp969 = $tmp967(((panda$collections$Iterable*) whens954));
                    $tmp965 = $tmp969;
                    $tmp964 = $tmp965;
                    Iter$283$17963 = $tmp964;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp964));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp965));
                    $l970:;
                    ITable* $tmp973 = Iter$283$17963->$class->itable;
                    while ($tmp973->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp973 = $tmp973->next;
                    }
                    $fn975 $tmp974 = $tmp973->methods[0];
                    panda$core$Bit $tmp976 = $tmp974(Iter$283$17963);
                    panda$core$Bit $tmp977 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp976);
                    bool $tmp972 = $tmp977.value;
                    if (!$tmp972) goto $l971;
                    {
                        int $tmp980;
                        {
                            ITable* $tmp984 = Iter$283$17963->$class->itable;
                            while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp984 = $tmp984->next;
                            }
                            $fn986 $tmp985 = $tmp984->methods[1];
                            panda$core$Object* $tmp987 = $tmp985(Iter$283$17963);
                            $tmp983 = $tmp987;
                            $tmp982 = ((org$pandalanguage$pandac$ASTNode*) $tmp983);
                            w981 = $tmp982;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp982));
                            panda$core$Panda$unref$panda$core$Object($tmp983);
                            panda$core$Int64 $tmp988 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w981);
                            panda$core$Int64 $tmp989 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result958, $tmp988);
                            result958 = $tmp989;
                        }
                        $tmp980 = -1;
                        goto $l978;
                        $l978:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w981));
                        w981 = NULL;
                        switch ($tmp980) {
                            case -1: goto $l990;
                        }
                        $l990:;
                    }
                    goto $l970;
                    $l971:;
                }
                $tmp962 = -1;
                goto $l960;
                $l960:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$283$17963));
                Iter$283$17963 = NULL;
                switch ($tmp962) {
                    case -1: goto $l991;
                }
                $l991:;
            }
            if (((panda$core$Bit) { other956 != NULL }).value) {
            {
                {
                    int $tmp994;
                    {
                        ITable* $tmp998 = ((panda$collections$Iterable*) other956)->$class->itable;
                        while ($tmp998->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp998 = $tmp998->next;
                        }
                        $fn1000 $tmp999 = $tmp998->methods[0];
                        panda$collections$Iterator* $tmp1001 = $tmp999(((panda$collections$Iterable*) other956));
                        $tmp997 = $tmp1001;
                        $tmp996 = $tmp997;
                        Iter$287$21995 = $tmp996;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp996));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp997));
                        $l1002:;
                        ITable* $tmp1005 = Iter$287$21995->$class->itable;
                        while ($tmp1005->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1005 = $tmp1005->next;
                        }
                        $fn1007 $tmp1006 = $tmp1005->methods[0];
                        panda$core$Bit $tmp1008 = $tmp1006(Iter$287$21995);
                        panda$core$Bit $tmp1009 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1008);
                        bool $tmp1004 = $tmp1009.value;
                        if (!$tmp1004) goto $l1003;
                        {
                            int $tmp1012;
                            {
                                ITable* $tmp1016 = Iter$287$21995->$class->itable;
                                while ($tmp1016->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1016 = $tmp1016->next;
                                }
                                $fn1018 $tmp1017 = $tmp1016->methods[1];
                                panda$core$Object* $tmp1019 = $tmp1017(Iter$287$21995);
                                $tmp1015 = $tmp1019;
                                $tmp1014 = ((org$pandalanguage$pandac$ASTNode*) $tmp1015);
                                s1013 = $tmp1014;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1014));
                                panda$core$Panda$unref$panda$core$Object($tmp1015);
                                panda$core$Int64 $tmp1020 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1013);
                                panda$core$Int64 $tmp1021 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result958, $tmp1020);
                                result958 = $tmp1021;
                            }
                            $tmp1012 = -1;
                            goto $l1010;
                            $l1010:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1013));
                            s1013 = NULL;
                            switch ($tmp1012) {
                                case -1: goto $l1022;
                            }
                            $l1022:;
                        }
                        goto $l1002;
                        $l1003:;
                    }
                    $tmp994 = -1;
                    goto $l992;
                    $l992:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$287$21995));
                    Iter$287$21995 = NULL;
                    switch ($tmp994) {
                        case -1: goto $l1023;
                    }
                    $l1023:;
                }
            }
            }
            $returnValue627 = result958;
            $tmp620 = 18;
            goto $l618;
            $l1024:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1026, 26);
        panda$core$Bit $tmp1027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1026);
        if ($tmp1027.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1028, 10);
            $returnValue627 = $tmp1028;
            $tmp620 = 19;
            goto $l618;
            $l1029:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1031, 28);
        panda$core$Bit $tmp1032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1031);
        if ($tmp1032.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1033, 1);
            $returnValue627 = $tmp1033;
            $tmp620 = 20;
            goto $l618;
            $l1034:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1036, 29);
        panda$core$Bit $tmp1037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1036);
        if ($tmp1037.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1038, 0);
            $returnValue627 = $tmp1038;
            $tmp620 = 21;
            goto $l618;
            $l1039:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1041, 32);
        panda$core$Bit $tmp1042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1041);
        if ($tmp1042.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1044 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 24));
            base1043 = *$tmp1044;
            panda$core$Int64$init$builtin_int64(&$tmp1045, 1);
            panda$core$Int64 $tmp1046 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base1043);
            panda$core$Int64 $tmp1047 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1045, $tmp1046);
            $returnValue627 = $tmp1047;
            $tmp620 = 22;
            goto $l618;
            $l1048:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1050, 33);
        panda$core$Bit $tmp1051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1050);
        if ($tmp1051.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1052, 1);
            $returnValue627 = $tmp1052;
            $tmp620 = 23;
            goto $l618;
            $l1053:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1055, 34);
        panda$core$Bit $tmp1056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1055);
        if ($tmp1056.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1057, 1);
            $returnValue627 = $tmp1057;
            $tmp620 = 24;
            goto $l618;
            $l1058:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1060, 36);
        panda$core$Bit $tmp1061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1060);
        if ($tmp1061.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1063 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 16));
            value1062 = *$tmp1063;
            if (((panda$core$Bit) { value1062 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp1064, 0);
                $returnValue627 = $tmp1064;
                $tmp620 = 25;
                goto $l618;
                $l1065:;
                return $returnValue627;
            }
            }
            panda$core$Int64 $tmp1067 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value1062);
            $returnValue627 = $tmp1067;
            $tmp620 = 26;
            goto $l618;
            $l1068:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1070, 37);
        panda$core$Bit $tmp1071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1070);
        if ($tmp1071.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1072, 1);
            $returnValue627 = $tmp1072;
            $tmp620 = 27;
            goto $l618;
            $l1073:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1075, 38);
        panda$core$Bit $tmp1076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1075);
        if ($tmp1076.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1077, 1);
            $returnValue627 = $tmp1077;
            $tmp620 = 28;
            goto $l618;
            $l1078:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1080, 39);
        panda$core$Bit $tmp1081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1080);
        if ($tmp1081.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1082, 1);
            $returnValue627 = $tmp1082;
            $tmp620 = 29;
            goto $l618;
            $l1083:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1085, 42);
        panda$core$Bit $tmp1086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1085);
        if ($tmp1086.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1087, 0);
            $returnValue627 = $tmp1087;
            $tmp620 = 30;
            goto $l618;
            $l1088:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1090, 43);
        panda$core$Bit $tmp1091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1090);
        if ($tmp1091.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1092, 10);
            $returnValue627 = $tmp1092;
            $tmp620 = 31;
            goto $l618;
            $l1093:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1095, 45);
        panda$core$Bit $tmp1096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1095);
        if ($tmp1096.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1097, 10);
            $returnValue627 = $tmp1097;
            $tmp620 = 32;
            goto $l618;
            $l1098:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1100, 47);
        panda$core$Bit $tmp1101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1100);
        if ($tmp1101.value) {
        {
            panda$collections$ImmutableArray** $tmp1103 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 24));
            decls1102 = *$tmp1103;
            panda$core$Int64$init$builtin_int64(&$tmp1105, 0);
            result1104 = $tmp1105;
            {
                int $tmp1108;
                {
                    ITable* $tmp1112 = ((panda$collections$Iterable*) decls1102)->$class->itable;
                    while ($tmp1112->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1112 = $tmp1112->next;
                    }
                    $fn1114 $tmp1113 = $tmp1112->methods[0];
                    panda$collections$Iterator* $tmp1115 = $tmp1113(((panda$collections$Iterable*) decls1102));
                    $tmp1111 = $tmp1115;
                    $tmp1110 = $tmp1111;
                    Iter$323$171109 = $tmp1110;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1110));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1111));
                    $l1116:;
                    ITable* $tmp1119 = Iter$323$171109->$class->itable;
                    while ($tmp1119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1119 = $tmp1119->next;
                    }
                    $fn1121 $tmp1120 = $tmp1119->methods[0];
                    panda$core$Bit $tmp1122 = $tmp1120(Iter$323$171109);
                    panda$core$Bit $tmp1123 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1122);
                    bool $tmp1118 = $tmp1123.value;
                    if (!$tmp1118) goto $l1117;
                    {
                        int $tmp1126;
                        {
                            ITable* $tmp1130 = Iter$323$171109->$class->itable;
                            while ($tmp1130->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1130 = $tmp1130->next;
                            }
                            $fn1132 $tmp1131 = $tmp1130->methods[1];
                            panda$core$Object* $tmp1133 = $tmp1131(Iter$323$171109);
                            $tmp1129 = $tmp1133;
                            $tmp1128 = ((org$pandalanguage$pandac$ASTNode*) $tmp1129);
                            decl1127 = $tmp1128;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1128));
                            panda$core$Panda$unref$panda$core$Object($tmp1129);
                            panda$core$Int64 $tmp1134 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl1127);
                            panda$core$Int64 $tmp1135 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1104, $tmp1134);
                            result1104 = $tmp1135;
                        }
                        $tmp1126 = -1;
                        goto $l1124;
                        $l1124:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1127));
                        decl1127 = NULL;
                        switch ($tmp1126) {
                            case -1: goto $l1136;
                        }
                        $l1136:;
                    }
                    goto $l1116;
                    $l1117:;
                }
                $tmp1108 = -1;
                goto $l1106;
                $l1106:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$323$171109));
                Iter$323$171109 = NULL;
                switch ($tmp1108) {
                    case -1: goto $l1137;
                }
                $l1137:;
            }
            $returnValue627 = result1104;
            $tmp620 = 33;
            goto $l618;
            $l1138:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1140, 48);
        panda$core$Bit $tmp1141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1140);
        if ($tmp1141.value) {
        {
            panda$collections$ImmutableArray** $tmp1143 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 16));
            tests1142 = *$tmp1143;
            panda$collections$ImmutableArray** $tmp1145 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 24));
            statements1144 = *$tmp1145;
            panda$core$Int64$init$builtin_int64(&$tmp1147, 0);
            result1146 = $tmp1147;
            {
                int $tmp1150;
                {
                    ITable* $tmp1154 = ((panda$collections$Iterable*) tests1142)->$class->itable;
                    while ($tmp1154->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1154 = $tmp1154->next;
                    }
                    $fn1156 $tmp1155 = $tmp1154->methods[0];
                    panda$collections$Iterator* $tmp1157 = $tmp1155(((panda$collections$Iterable*) tests1142));
                    $tmp1153 = $tmp1157;
                    $tmp1152 = $tmp1153;
                    Iter$329$171151 = $tmp1152;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1152));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1153));
                    $l1158:;
                    ITable* $tmp1161 = Iter$329$171151->$class->itable;
                    while ($tmp1161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1161 = $tmp1161->next;
                    }
                    $fn1163 $tmp1162 = $tmp1161->methods[0];
                    panda$core$Bit $tmp1164 = $tmp1162(Iter$329$171151);
                    panda$core$Bit $tmp1165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1164);
                    bool $tmp1160 = $tmp1165.value;
                    if (!$tmp1160) goto $l1159;
                    {
                        int $tmp1168;
                        {
                            ITable* $tmp1172 = Iter$329$171151->$class->itable;
                            while ($tmp1172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1172 = $tmp1172->next;
                            }
                            $fn1174 $tmp1173 = $tmp1172->methods[1];
                            panda$core$Object* $tmp1175 = $tmp1173(Iter$329$171151);
                            $tmp1171 = $tmp1175;
                            $tmp1170 = ((org$pandalanguage$pandac$ASTNode*) $tmp1171);
                            test1169 = $tmp1170;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1170));
                            panda$core$Panda$unref$panda$core$Object($tmp1171);
                            panda$core$Int64 $tmp1176 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1169);
                            panda$core$Int64 $tmp1177 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1146, $tmp1176);
                            result1146 = $tmp1177;
                        }
                        $tmp1168 = -1;
                        goto $l1166;
                        $l1166:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1169));
                        test1169 = NULL;
                        switch ($tmp1168) {
                            case -1: goto $l1178;
                        }
                        $l1178:;
                    }
                    goto $l1158;
                    $l1159:;
                }
                $tmp1150 = -1;
                goto $l1148;
                $l1148:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$329$171151));
                Iter$329$171151 = NULL;
                switch ($tmp1150) {
                    case -1: goto $l1179;
                }
                $l1179:;
            }
            {
                int $tmp1182;
                {
                    ITable* $tmp1186 = ((panda$collections$Iterable*) statements1144)->$class->itable;
                    while ($tmp1186->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1186 = $tmp1186->next;
                    }
                    $fn1188 $tmp1187 = $tmp1186->methods[0];
                    panda$collections$Iterator* $tmp1189 = $tmp1187(((panda$collections$Iterable*) statements1144));
                    $tmp1185 = $tmp1189;
                    $tmp1184 = $tmp1185;
                    Iter$332$171183 = $tmp1184;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1184));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1185));
                    $l1190:;
                    ITable* $tmp1193 = Iter$332$171183->$class->itable;
                    while ($tmp1193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1193 = $tmp1193->next;
                    }
                    $fn1195 $tmp1194 = $tmp1193->methods[0];
                    panda$core$Bit $tmp1196 = $tmp1194(Iter$332$171183);
                    panda$core$Bit $tmp1197 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1196);
                    bool $tmp1192 = $tmp1197.value;
                    if (!$tmp1192) goto $l1191;
                    {
                        int $tmp1200;
                        {
                            ITable* $tmp1204 = Iter$332$171183->$class->itable;
                            while ($tmp1204->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1204 = $tmp1204->next;
                            }
                            $fn1206 $tmp1205 = $tmp1204->methods[1];
                            panda$core$Object* $tmp1207 = $tmp1205(Iter$332$171183);
                            $tmp1203 = $tmp1207;
                            $tmp1202 = ((org$pandalanguage$pandac$ASTNode*) $tmp1203);
                            s1201 = $tmp1202;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1202));
                            panda$core$Panda$unref$panda$core$Object($tmp1203);
                            panda$core$Int64 $tmp1208 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1201);
                            panda$core$Int64 $tmp1209 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1146, $tmp1208);
                            result1146 = $tmp1209;
                        }
                        $tmp1200 = -1;
                        goto $l1198;
                        $l1198:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1201));
                        s1201 = NULL;
                        switch ($tmp1200) {
                            case -1: goto $l1210;
                        }
                        $l1210:;
                    }
                    goto $l1190;
                    $l1191:;
                }
                $tmp1182 = -1;
                goto $l1180;
                $l1180:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$332$171183));
                Iter$332$171183 = NULL;
                switch ($tmp1182) {
                    case -1: goto $l1211;
                }
                $l1211:;
            }
            $returnValue627 = result1146;
            $tmp620 = 34;
            goto $l618;
            $l1212:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1214, 49);
        panda$core$Bit $tmp1215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1214);
        if ($tmp1215.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1217 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 24));
            test1216 = *$tmp1217;
            panda$collections$ImmutableArray** $tmp1219 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 32));
            statements1218 = *$tmp1219;
            panda$core$Int64 $tmp1221 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1216);
            result1220 = $tmp1221;
            {
                int $tmp1224;
                {
                    ITable* $tmp1228 = ((panda$collections$Iterable*) statements1218)->$class->itable;
                    while ($tmp1228->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1228 = $tmp1228->next;
                    }
                    $fn1230 $tmp1229 = $tmp1228->methods[0];
                    panda$collections$Iterator* $tmp1231 = $tmp1229(((panda$collections$Iterable*) statements1218));
                    $tmp1227 = $tmp1231;
                    $tmp1226 = $tmp1227;
                    Iter$338$171225 = $tmp1226;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1226));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1227));
                    $l1232:;
                    ITable* $tmp1235 = Iter$338$171225->$class->itable;
                    while ($tmp1235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1235 = $tmp1235->next;
                    }
                    $fn1237 $tmp1236 = $tmp1235->methods[0];
                    panda$core$Bit $tmp1238 = $tmp1236(Iter$338$171225);
                    panda$core$Bit $tmp1239 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1238);
                    bool $tmp1234 = $tmp1239.value;
                    if (!$tmp1234) goto $l1233;
                    {
                        int $tmp1242;
                        {
                            ITable* $tmp1246 = Iter$338$171225->$class->itable;
                            while ($tmp1246->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1246 = $tmp1246->next;
                            }
                            $fn1248 $tmp1247 = $tmp1246->methods[1];
                            panda$core$Object* $tmp1249 = $tmp1247(Iter$338$171225);
                            $tmp1245 = $tmp1249;
                            $tmp1244 = ((org$pandalanguage$pandac$ASTNode*) $tmp1245);
                            s1243 = $tmp1244;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1244));
                            panda$core$Panda$unref$panda$core$Object($tmp1245);
                            panda$core$Int64 $tmp1250 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1243);
                            panda$core$Int64 $tmp1251 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1220, $tmp1250);
                            result1220 = $tmp1251;
                        }
                        $tmp1242 = -1;
                        goto $l1240;
                        $l1240:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1243));
                        s1243 = NULL;
                        switch ($tmp1242) {
                            case -1: goto $l1252;
                        }
                        $l1252:;
                    }
                    goto $l1232;
                    $l1233:;
                }
                $tmp1224 = -1;
                goto $l1222;
                $l1222:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$338$171225));
                Iter$338$171225 = NULL;
                switch ($tmp1224) {
                    case -1: goto $l1253;
                }
                $l1253:;
            }
            $returnValue627 = result1220;
            $tmp620 = 35;
            goto $l618;
            $l1254:;
            return $returnValue627;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1256, false);
            if ($tmp1256.value) goto $l1257; else goto $l1258;
            $l1258:;
            panda$core$String* $tmp1263 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1262, ((panda$core$Object*) p_node));
            $tmp1261 = $tmp1263;
            panda$core$String* $tmp1265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1261, &$s1264);
            $tmp1260 = $tmp1265;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1259, (panda$core$Int64) { 343 }, $tmp1260);
            abort();
            $l1257:;
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
    $tmp620 = -1;
    goto $l618;
    $l618:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp622));
    switch ($tmp620) {
        case 28: goto $l1078;
        case 34: goto $l1212;
        case 8: goto $l753;
        case 22: goto $l1048;
        case 7: goto $l746;
        case 21: goto $l1039;
        case -1: goto $l1266;
        case 24: goto $l1058;
        case 14: goto $l857;
        case 35: goto $l1254;
        case 29: goto $l1083;
        case 1: goto $l642;
        case 25: goto $l1065;
        case 0: goto $l629;
        case 32: goto $l1098;
        case 18: goto $l1024;
        case 16: goto $l908;
        case 19: goto $l1029;
        case 20: goto $l1034;
        case 4: goto $l692;
        case 11: goto $l805;
        case 5: goto $l734;
        case 3: goto $l687;
        case 15: goto $l903;
        case 27: goto $l1073;
        case 10: goto $l798;
        case 6: goto $l741;
        case 26: goto $l1068;
        case 17: goto $l948;
        case 9: goto $l756;
        case 33: goto $l1138;
        case 13: goto $l852;
        case 23: goto $l1053;
        case 2: goto $l647;
        case 30: goto $l1088;
        case 31: goto $l1093;
        case 12: goto $l847;
    }
    $l1266:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1269;
    panda$core$Int64 $tmp1272;
    panda$core$Int64 c1281;
    panda$core$Int64 $tmp1282;
    panda$collections$Iterator* Iter$351$131286 = NULL;
    panda$collections$Iterator* $tmp1287;
    panda$collections$Iterator* $tmp1288;
    org$pandalanguage$pandac$ASTNode* s1304 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1305;
    panda$core$Object* $tmp1306;
    panda$core$Int64 $tmp1313;
    panda$core$Bit $returnValue1315;
    panda$core$Bit $tmp1316;
    panda$core$Bit $tmp1322;
    panda$core$Bit $tmp1324;
    panda$core$Object* $tmp1271 = (($fn1270) self->compiler->$class->vtable[2])(self->compiler);
    $tmp1269 = $tmp1271;
    panda$core$Int64$init$builtin_int64(&$tmp1272, 0);
    panda$core$Bit $tmp1273 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1269)->settings->optimizationLevel, $tmp1272);
    bool $tmp1268 = $tmp1273.value;
    panda$core$Panda$unref$panda$core$Object($tmp1269);
    if (!$tmp1268) goto $l1274;
    panda$core$Bit $tmp1275 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1276 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1275);
    $tmp1268 = $tmp1276.value;
    $l1274:;
    panda$core$Bit $tmp1277 = { $tmp1268 };
    bool $tmp1267 = $tmp1277.value;
    if (!$tmp1267) goto $l1278;
    panda$core$Bit $tmp1279 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1267 = $tmp1279.value;
    $l1278:;
    panda$core$Bit $tmp1280 = { $tmp1267 };
    if ($tmp1280.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1282, 0);
        c1281 = $tmp1282;
        {
            int $tmp1285;
            {
                ITable* $tmp1289 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1289->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1289 = $tmp1289->next;
                }
                $fn1291 $tmp1290 = $tmp1289->methods[0];
                panda$collections$Iterator* $tmp1292 = $tmp1290(((panda$collections$Iterable*) p_statements));
                $tmp1288 = $tmp1292;
                $tmp1287 = $tmp1288;
                Iter$351$131286 = $tmp1287;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1287));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1288));
                $l1293:;
                ITable* $tmp1296 = Iter$351$131286->$class->itable;
                while ($tmp1296->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1296 = $tmp1296->next;
                }
                $fn1298 $tmp1297 = $tmp1296->methods[0];
                panda$core$Bit $tmp1299 = $tmp1297(Iter$351$131286);
                panda$core$Bit $tmp1300 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1299);
                bool $tmp1295 = $tmp1300.value;
                if (!$tmp1295) goto $l1294;
                {
                    int $tmp1303;
                    {
                        ITable* $tmp1307 = Iter$351$131286->$class->itable;
                        while ($tmp1307->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1307 = $tmp1307->next;
                        }
                        $fn1309 $tmp1308 = $tmp1307->methods[1];
                        panda$core$Object* $tmp1310 = $tmp1308(Iter$351$131286);
                        $tmp1306 = $tmp1310;
                        $tmp1305 = ((org$pandalanguage$pandac$ASTNode*) $tmp1306);
                        s1304 = $tmp1305;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1305));
                        panda$core$Panda$unref$panda$core$Object($tmp1306);
                        panda$core$Int64 $tmp1311 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1304);
                        panda$core$Int64 $tmp1312 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1281, $tmp1311);
                        c1281 = $tmp1312;
                        panda$core$Int64$init$builtin_int64(&$tmp1313, 10);
                        panda$core$Bit $tmp1314 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1281, $tmp1313);
                        if ($tmp1314.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp1316, false);
                            $returnValue1315 = $tmp1316;
                            $tmp1303 = 0;
                            goto $l1301;
                            $l1317:;
                            $tmp1285 = 0;
                            goto $l1283;
                            $l1318:;
                            return $returnValue1315;
                        }
                        }
                    }
                    $tmp1303 = -1;
                    goto $l1301;
                    $l1301:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1304));
                    s1304 = NULL;
                    switch ($tmp1303) {
                        case 0: goto $l1317;
                        case -1: goto $l1320;
                    }
                    $l1320:;
                }
                goto $l1293;
                $l1294:;
            }
            $tmp1285 = -1;
            goto $l1283;
            $l1283:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$351$131286));
            Iter$351$131286 = NULL;
            switch ($tmp1285) {
                case -1: goto $l1321;
                case 0: goto $l1318;
            }
            $l1321:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp1322, true);
        $returnValue1315 = $tmp1322;
        return $returnValue1315;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1324, false);
    $returnValue1315 = $tmp1324;
    return $returnValue1315;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawGenerics, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1329 = NULL;
    panda$core$String* $tmp1330;
    panda$core$String* $tmp1331;
    org$pandalanguage$pandac$ASTNode* $match$372_131335 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1336;
    panda$core$Int64 $tmp1337;
    org$pandalanguage$pandac$Position position1339;
    panda$core$String* text1341 = NULL;
    panda$core$String* $tmp1343;
    panda$core$String* $tmp1344;
    panda$core$Bit $tmp1345;
    org$pandalanguage$pandac$Annotations* annotations1350 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1351;
    org$pandalanguage$pandac$Annotations* $tmp1352;
    panda$core$Int64 $tmp1356;
    panda$core$Int64 $tmp1364;
    panda$collections$Array* generics1366 = NULL;
    panda$collections$Array* $tmp1370;
    panda$collections$Array* $tmp1371;
    panda$collections$Array* $tmp1372;
    panda$core$String* fullName1374 = NULL;
    panda$core$String* $tmp1375;
    panda$core$String* $tmp1376;
    panda$core$String* $tmp1377;
    panda$core$String* $tmp1378;
    panda$core$String* $tmp1379;
    panda$collections$Iterator* Iter$387$131389 = NULL;
    panda$collections$Iterator* $tmp1390;
    panda$collections$Iterator* $tmp1391;
    org$pandalanguage$pandac$ASTNode* p1407 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1408;
    panda$core$Object* $tmp1409;
    panda$core$String* parameterName1414 = NULL;
    org$pandalanguage$pandac$Type* bound1415 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$390_171419 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1420;
    panda$core$Int64 $tmp1421;
    panda$core$String* id1423 = NULL;
    panda$core$String* $tmp1425;
    panda$core$String* $tmp1426;
    org$pandalanguage$pandac$Type* $tmp1427;
    org$pandalanguage$pandac$Type* $tmp1428;
    org$pandalanguage$pandac$Type* $tmp1429;
    panda$core$Int64 $tmp1431;
    panda$core$String* id1433 = NULL;
    org$pandalanguage$pandac$ASTNode* type1435 = NULL;
    panda$core$String* $tmp1437;
    panda$core$String* $tmp1438;
    org$pandalanguage$pandac$Type* $tmp1439;
    org$pandalanguage$pandac$Type* $tmp1440;
    org$pandalanguage$pandac$Type* $tmp1441;
    panda$core$Bit $tmp1443;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1448;
    panda$collections$Array* $tmp1455;
    panda$collections$Array* $tmp1456;
    panda$collections$Array* parameters1457 = NULL;
    panda$collections$Array* $tmp1458;
    panda$collections$Array* $tmp1459;
    panda$collections$Iterator* Iter$408$91464 = NULL;
    panda$collections$Iterator* $tmp1465;
    panda$collections$Iterator* $tmp1466;
    org$pandalanguage$pandac$ASTNode* p1482 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1483;
    panda$core$Object* $tmp1484;
    org$pandalanguage$pandac$ASTNode* $match$409_131492 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1493;
    panda$core$Int64 $tmp1494;
    panda$core$String* name1496 = NULL;
    org$pandalanguage$pandac$ASTNode* type1498 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1500;
    org$pandalanguage$pandac$Type* $tmp1502;
    panda$core$Bit $tmp1504;
    org$pandalanguage$pandac$Type* returnType1511 = NULL;
    org$pandalanguage$pandac$Type* $tmp1512;
    org$pandalanguage$pandac$Type* $tmp1513;
    org$pandalanguage$pandac$Type* $tmp1514;
    org$pandalanguage$pandac$Type* $tmp1516;
    org$pandalanguage$pandac$Type* $tmp1517;
    org$pandalanguage$pandac$Type* $tmp1518;
    panda$core$Int64 $tmp1521;
    org$pandalanguage$pandac$Type* $tmp1524;
    panda$core$Int64 $tmp1533;
    panda$core$Int64 $tmp1537;
    panda$core$Int64 $tmp1540;
    org$pandalanguage$pandac$MethodDecl* $returnValue1542;
    org$pandalanguage$pandac$MethodDecl* $tmp1543;
    org$pandalanguage$pandac$MethodDecl* $tmp1544;
    int $tmp1328;
    {
        memset(&doccomment1329, 0, sizeof(doccomment1329));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1330 = doccomment1329;
                $tmp1331 = NULL;
                doccomment1329 = $tmp1331;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1331));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1330));
            }
        }
        }
        else {
        {
            int $tmp1334;
            {
                $tmp1336 = p_rawDoccomment;
                $match$372_131335 = $tmp1336;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1336));
                panda$core$Int64$init$builtin_int64(&$tmp1337, 38);
                panda$core$Bit $tmp1338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$372_131335->$rawValue, $tmp1337);
                if ($tmp1338.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1340 = ((org$pandalanguage$pandac$Position*) ((char*) $match$372_131335->$data + 0));
                    position1339 = *$tmp1340;
                    panda$core$String** $tmp1342 = ((panda$core$String**) ((char*) $match$372_131335->$data + 16));
                    text1341 = *$tmp1342;
                    {
                        $tmp1343 = doccomment1329;
                        $tmp1344 = text1341;
                        doccomment1329 = $tmp1344;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1344));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1345, false);
                    if ($tmp1345.value) goto $l1346; else goto $l1347;
                    $l1347:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1348, (panda$core$Int64) { 376 });
                    abort();
                    $l1346:;
                }
                }
            }
            $tmp1334 = -1;
            goto $l1332;
            $l1332:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1336));
            switch ($tmp1334) {
                case -1: goto $l1349;
            }
            $l1349:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1353 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1352 = $tmp1353;
        $tmp1351 = $tmp1352;
        annotations1350 = $tmp1351;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1351));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
        panda$core$Int64$init$builtin_int64(&$tmp1356, 2);
        panda$core$Bit $tmp1357 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1356);
        bool $tmp1355 = $tmp1357.value;
        if (!$tmp1355) goto $l1358;
        panda$core$Bit $tmp1359 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1355 = $tmp1359.value;
        $l1358:;
        panda$core$Bit $tmp1360 = { $tmp1355 };
        bool $tmp1354 = $tmp1360.value;
        if ($tmp1354) goto $l1361;
        panda$core$Bit $tmp1362 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1350);
        $tmp1354 = $tmp1362.value;
        $l1361:;
        panda$core$Bit $tmp1363 = { $tmp1354 };
        if ($tmp1363.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1364, 256);
            panda$core$Int64 $tmp1365 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1350->flags, $tmp1364);
            annotations1350->flags = $tmp1365;
        }
        }
        memset(&generics1366, 0, sizeof(generics1366));
        if (((panda$core$Bit) { p_rawGenerics != NULL }).value) {
        {
            int $tmp1369;
            {
                {
                    $tmp1370 = generics1366;
                    panda$collections$Array* $tmp1373 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1373);
                    $tmp1372 = $tmp1373;
                    $tmp1371 = $tmp1372;
                    generics1366 = $tmp1371;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1371));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
                }
                panda$core$String* $tmp1380 = panda$core$String$convert$R$panda$core$String(p_owner->name);
                $tmp1379 = $tmp1380;
                panda$core$String* $tmp1382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1379, &$s1381);
                $tmp1378 = $tmp1382;
                panda$core$String* $tmp1383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1378, p_name);
                $tmp1377 = $tmp1383;
                panda$core$String* $tmp1385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1377, &$s1384);
                $tmp1376 = $tmp1385;
                $tmp1375 = $tmp1376;
                fullName1374 = $tmp1375;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1375));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1376));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1377));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1379));
                {
                    int $tmp1388;
                    {
                        ITable* $tmp1392 = ((panda$collections$Iterable*) p_rawGenerics)->$class->itable;
                        while ($tmp1392->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1392 = $tmp1392->next;
                        }
                        $fn1394 $tmp1393 = $tmp1392->methods[0];
                        panda$collections$Iterator* $tmp1395 = $tmp1393(((panda$collections$Iterable*) p_rawGenerics));
                        $tmp1391 = $tmp1395;
                        $tmp1390 = $tmp1391;
                        Iter$387$131389 = $tmp1390;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1390));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1391));
                        $l1396:;
                        ITable* $tmp1399 = Iter$387$131389->$class->itable;
                        while ($tmp1399->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1399 = $tmp1399->next;
                        }
                        $fn1401 $tmp1400 = $tmp1399->methods[0];
                        panda$core$Bit $tmp1402 = $tmp1400(Iter$387$131389);
                        panda$core$Bit $tmp1403 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1402);
                        bool $tmp1398 = $tmp1403.value;
                        if (!$tmp1398) goto $l1397;
                        {
                            int $tmp1406;
                            {
                                ITable* $tmp1410 = Iter$387$131389->$class->itable;
                                while ($tmp1410->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1410 = $tmp1410->next;
                                }
                                $fn1412 $tmp1411 = $tmp1410->methods[1];
                                panda$core$Object* $tmp1413 = $tmp1411(Iter$387$131389);
                                $tmp1409 = $tmp1413;
                                $tmp1408 = ((org$pandalanguage$pandac$ASTNode*) $tmp1409);
                                p1407 = $tmp1408;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1408));
                                panda$core$Panda$unref$panda$core$Object($tmp1409);
                                memset(&parameterName1414, 0, sizeof(parameterName1414));
                                memset(&bound1415, 0, sizeof(bound1415));
                                int $tmp1418;
                                {
                                    $tmp1420 = p1407;
                                    $match$390_171419 = $tmp1420;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1420));
                                    panda$core$Int64$init$builtin_int64(&$tmp1421, 20);
                                    panda$core$Bit $tmp1422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_171419->$rawValue, $tmp1421);
                                    if ($tmp1422.value) {
                                    {
                                        panda$core$String** $tmp1424 = ((panda$core$String**) ((char*) $match$390_171419->$data + 16));
                                        id1423 = *$tmp1424;
                                        {
                                            $tmp1425 = parameterName1414;
                                            $tmp1426 = id1423;
                                            parameterName1414 = $tmp1426;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1426));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1425));
                                        }
                                        {
                                            $tmp1427 = bound1415;
                                            org$pandalanguage$pandac$Type* $tmp1430 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                            $tmp1429 = $tmp1430;
                                            $tmp1428 = $tmp1429;
                                            bound1415 = $tmp1428;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1428));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1429));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1427));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp1431, 44);
                                    panda$core$Bit $tmp1432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_171419->$rawValue, $tmp1431);
                                    if ($tmp1432.value) {
                                    {
                                        panda$core$String** $tmp1434 = ((panda$core$String**) ((char*) $match$390_171419->$data + 16));
                                        id1433 = *$tmp1434;
                                        org$pandalanguage$pandac$ASTNode** $tmp1436 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$390_171419->$data + 24));
                                        type1435 = *$tmp1436;
                                        {
                                            $tmp1437 = parameterName1414;
                                            $tmp1438 = id1433;
                                            parameterName1414 = $tmp1438;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1438));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1437));
                                        }
                                        {
                                            $tmp1439 = bound1415;
                                            org$pandalanguage$pandac$Type* $tmp1442 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1435);
                                            $tmp1441 = $tmp1442;
                                            $tmp1440 = $tmp1441;
                                            bound1415 = $tmp1440;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1440));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1441));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1439));
                                        }
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp1443, false);
                                        if ($tmp1443.value) goto $l1444; else goto $l1445;
                                        $l1445:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1446, (panda$core$Int64) { 398 });
                                        abort();
                                        $l1444:;
                                    }
                                    }
                                    }
                                }
                                $tmp1418 = -1;
                                goto $l1416;
                                $l1416:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1420));
                                switch ($tmp1418) {
                                    case -1: goto $l1447;
                                }
                                $l1447:;
                                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1449 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                                org$pandalanguage$pandac$Position $tmp1451 = (($fn1450) p1407->$class->vtable[2])(p1407);
                                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1449, $tmp1451, fullName1374, parameterName1414, bound1415);
                                $tmp1448 = $tmp1449;
                                panda$collections$Array$add$panda$collections$Array$T(generics1366, ((panda$core$Object*) $tmp1448));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1448));
                            }
                            $tmp1406 = -1;
                            goto $l1404;
                            $l1404:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1415));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameterName1414));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1407));
                            p1407 = NULL;
                            switch ($tmp1406) {
                                case -1: goto $l1452;
                            }
                            $l1452:;
                        }
                        goto $l1396;
                        $l1397:;
                    }
                    $tmp1388 = -1;
                    goto $l1386;
                    $l1386:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$387$131389));
                    Iter$387$131389 = NULL;
                    switch ($tmp1388) {
                        case -1: goto $l1453;
                    }
                    $l1453:;
                }
            }
            $tmp1369 = -1;
            goto $l1367;
            $l1367:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1374));
            fullName1374 = NULL;
            switch ($tmp1369) {
                case -1: goto $l1454;
            }
            $l1454:;
        }
        }
        else {
        {
            {
                $tmp1455 = generics1366;
                $tmp1456 = NULL;
                generics1366 = $tmp1456;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1456));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1455));
            }
        }
        }
        panda$collections$Array* $tmp1460 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1460);
        $tmp1459 = $tmp1460;
        $tmp1458 = $tmp1459;
        parameters1457 = $tmp1458;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1458));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1459));
        {
            int $tmp1463;
            {
                ITable* $tmp1467 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1467->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1467 = $tmp1467->next;
                }
                $fn1469 $tmp1468 = $tmp1467->methods[0];
                panda$collections$Iterator* $tmp1470 = $tmp1468(((panda$collections$Iterable*) p_rawParameters));
                $tmp1466 = $tmp1470;
                $tmp1465 = $tmp1466;
                Iter$408$91464 = $tmp1465;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1465));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1466));
                $l1471:;
                ITable* $tmp1474 = Iter$408$91464->$class->itable;
                while ($tmp1474->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1474 = $tmp1474->next;
                }
                $fn1476 $tmp1475 = $tmp1474->methods[0];
                panda$core$Bit $tmp1477 = $tmp1475(Iter$408$91464);
                panda$core$Bit $tmp1478 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1477);
                bool $tmp1473 = $tmp1478.value;
                if (!$tmp1473) goto $l1472;
                {
                    int $tmp1481;
                    {
                        ITable* $tmp1485 = Iter$408$91464->$class->itable;
                        while ($tmp1485->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1485 = $tmp1485->next;
                        }
                        $fn1487 $tmp1486 = $tmp1485->methods[1];
                        panda$core$Object* $tmp1488 = $tmp1486(Iter$408$91464);
                        $tmp1484 = $tmp1488;
                        $tmp1483 = ((org$pandalanguage$pandac$ASTNode*) $tmp1484);
                        p1482 = $tmp1483;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1483));
                        panda$core$Panda$unref$panda$core$Object($tmp1484);
                        int $tmp1491;
                        {
                            $tmp1493 = p1482;
                            $match$409_131492 = $tmp1493;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1493));
                            panda$core$Int64$init$builtin_int64(&$tmp1494, 31);
                            panda$core$Bit $tmp1495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$409_131492->$rawValue, $tmp1494);
                            if ($tmp1495.value) {
                            {
                                panda$core$String** $tmp1497 = ((panda$core$String**) ((char*) $match$409_131492->$data + 16));
                                name1496 = *$tmp1497;
                                org$pandalanguage$pandac$ASTNode** $tmp1499 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$409_131492->$data + 24));
                                type1498 = *$tmp1499;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1501 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1503 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1498);
                                $tmp1502 = $tmp1503;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1501, name1496, $tmp1502);
                                $tmp1500 = $tmp1501;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1457, ((panda$core$Object*) $tmp1500));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1500));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1502));
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1504, false);
                                if ($tmp1504.value) goto $l1505; else goto $l1506;
                                $l1506:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1507, (panda$core$Int64) { 413 });
                                abort();
                                $l1505:;
                            }
                            }
                        }
                        $tmp1491 = -1;
                        goto $l1489;
                        $l1489:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
                        switch ($tmp1491) {
                            case -1: goto $l1508;
                        }
                        $l1508:;
                    }
                    $tmp1481 = -1;
                    goto $l1479;
                    $l1479:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1482));
                    p1482 = NULL;
                    switch ($tmp1481) {
                        case -1: goto $l1509;
                    }
                    $l1509:;
                }
                goto $l1471;
                $l1472:;
            }
            $tmp1463 = -1;
            goto $l1461;
            $l1461:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$408$91464));
            Iter$408$91464 = NULL;
            switch ($tmp1463) {
                case -1: goto $l1510;
            }
            $l1510:;
        }
        memset(&returnType1511, 0, sizeof(returnType1511));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1512 = returnType1511;
                org$pandalanguage$pandac$Type* $tmp1515 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1514 = $tmp1515;
                $tmp1513 = $tmp1514;
                returnType1511 = $tmp1513;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1513));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1514));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1512));
            }
        }
        }
        else {
        {
            {
                $tmp1516 = returnType1511;
                org$pandalanguage$pandac$Type* $tmp1519 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1518 = $tmp1519;
                $tmp1517 = $tmp1518;
                returnType1511 = $tmp1517;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1517));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1518));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1516));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1521, 1);
        panda$core$Bit $tmp1522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1521);
        bool $tmp1520 = $tmp1522.value;
        if (!$tmp1520) goto $l1523;
        org$pandalanguage$pandac$Type* $tmp1525 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1524 = $tmp1525;
        panda$core$Bit $tmp1526 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1511, $tmp1524);
        $tmp1520 = $tmp1526.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1524));
        $l1523:;
        panda$core$Bit $tmp1527 = { $tmp1520 };
        if ($tmp1527.value) {
        {
            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1528);
        }
        }
        bool $tmp1529 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1529) goto $l1530;
        panda$core$Bit $tmp1531 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1350, p_statements);
        $tmp1529 = $tmp1531.value;
        $l1530:;
        panda$core$Bit $tmp1532 = { $tmp1529 };
        if ($tmp1532.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1533, 1024);
            panda$core$Int64 $tmp1534 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1350->flags, $tmp1533);
            annotations1350->flags = $tmp1534;
        }
        }
        bool $tmp1535 = ((panda$core$Bit) { p_statements == NULL }).value;
        if (!$tmp1535) goto $l1536;
        panda$core$Int64$init$builtin_int64(&$tmp1537, 1);
        panda$core$Bit $tmp1538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, $tmp1537);
        $tmp1535 = $tmp1538.value;
        $l1536:;
        panda$core$Bit $tmp1539 = { $tmp1535 };
        if ($tmp1539.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1540, 512);
            panda$core$Int64 $tmp1541 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1350->flags, $tmp1540);
            annotations1350->flags = $tmp1541;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1545 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1545, p_owner, p_position, doccomment1329, annotations1350, p_kind, p_name, generics1366, parameters1457, returnType1511, p_statements);
        $tmp1544 = $tmp1545;
        $tmp1543 = $tmp1544;
        $returnValue1542 = $tmp1543;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1544));
        $tmp1328 = 0;
        goto $l1326;
        $l1546:;
        return $returnValue1542;
    }
    $l1326:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1511));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1457));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics1366));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1350));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1329));
    annotations1350 = NULL;
    parameters1457 = NULL;
    switch ($tmp1328) {
        case 0: goto $l1546;
    }
    $l1548:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$437_91552 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1553;
    panda$core$Int64 $tmp1554;
    org$pandalanguage$pandac$Position position1556;
    org$pandalanguage$pandac$ASTNode* dc1558 = NULL;
    panda$collections$ImmutableArray* annotations1560 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1562 = NULL;
    panda$core$Int64 $tmp1564;
    org$pandalanguage$pandac$Position position1566;
    org$pandalanguage$pandac$ASTNode* dc1568 = NULL;
    panda$collections$ImmutableArray* annotations1570 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1572;
    panda$core$String* name1574 = NULL;
    panda$collections$ImmutableArray* generics1576 = NULL;
    panda$collections$ImmutableArray* parameters1578 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1580 = NULL;
    panda$collections$ImmutableArray* statements1582 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1587 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1588;
    org$pandalanguage$pandac$MethodDecl* $tmp1589;
    panda$core$Int64 $tmp1592;
    org$pandalanguage$pandac$Position position1594;
    org$pandalanguage$pandac$ASTNode* dc1596 = NULL;
    panda$collections$ImmutableArray* annotations1598 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1600;
    panda$core$String* name1602 = NULL;
    panda$collections$ImmutableArray* generics1604 = NULL;
    panda$collections$ImmutableArray* supertypes1606 = NULL;
    panda$collections$ImmutableArray* members1608 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1613 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1614;
    org$pandalanguage$pandac$ClassDecl* $tmp1615;
    panda$core$Weak* $tmp1617;
    panda$core$Weak* $tmp1618;
    panda$core$Weak* $tmp1619;
    panda$core$String* $tmp1621;
    org$pandalanguage$pandac$Alias* $tmp1628;
    panda$core$String* $tmp1630;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1631;
    panda$core$Int64 $tmp1633;
    panda$core$Bit $tmp1635;
    org$pandalanguage$pandac$Position $tmp1637;
    org$pandalanguage$pandac$Alias* $tmp1638;
    panda$core$String* $tmp1640;
    org$pandalanguage$pandac$Position $tmp1642;
    panda$core$Int64 $tmp1644;
    org$pandalanguage$pandac$Position position1646;
    org$pandalanguage$pandac$ASTNode* dc1648 = NULL;
    panda$core$String* name1650 = NULL;
    panda$collections$ImmutableArray* fields1652 = NULL;
    panda$core$Bit $tmp1654;
    panda$core$String* $tmp1658;
    panda$core$String* $tmp1659;
    int $tmp1551;
    {
        $tmp1553 = p_node;
        $match$437_91552 = $tmp1553;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1553));
        panda$core$Int64$init$builtin_int64(&$tmp1554, 16);
        panda$core$Bit $tmp1555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_91552->$rawValue, $tmp1554);
        if ($tmp1555.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1557 = ((org$pandalanguage$pandac$Position*) ((char*) $match$437_91552->$data + 0));
            position1556 = *$tmp1557;
            org$pandalanguage$pandac$ASTNode** $tmp1559 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$437_91552->$data + 16));
            dc1558 = *$tmp1559;
            panda$collections$ImmutableArray** $tmp1561 = ((panda$collections$ImmutableArray**) ((char*) $match$437_91552->$data + 24));
            annotations1560 = *$tmp1561;
            org$pandalanguage$pandac$ASTNode** $tmp1563 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$437_91552->$data + 32));
            varDecl1562 = *$tmp1563;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1556, dc1558, annotations1560, varDecl1562);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1564, 26);
        panda$core$Bit $tmp1565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_91552->$rawValue, $tmp1564);
        if ($tmp1565.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1567 = ((org$pandalanguage$pandac$Position*) ((char*) $match$437_91552->$data + 0));
            position1566 = *$tmp1567;
            org$pandalanguage$pandac$ASTNode** $tmp1569 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$437_91552->$data + 16));
            dc1568 = *$tmp1569;
            panda$collections$ImmutableArray** $tmp1571 = ((panda$collections$ImmutableArray**) ((char*) $match$437_91552->$data + 24));
            annotations1570 = *$tmp1571;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1573 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$437_91552->$data + 32));
            kind1572 = *$tmp1573;
            panda$core$String** $tmp1575 = ((panda$core$String**) ((char*) $match$437_91552->$data + 40));
            name1574 = *$tmp1575;
            panda$collections$ImmutableArray** $tmp1577 = ((panda$collections$ImmutableArray**) ((char*) $match$437_91552->$data + 48));
            generics1576 = *$tmp1577;
            panda$collections$ImmutableArray** $tmp1579 = ((panda$collections$ImmutableArray**) ((char*) $match$437_91552->$data + 56));
            parameters1578 = *$tmp1579;
            org$pandalanguage$pandac$ASTNode** $tmp1581 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$437_91552->$data + 64));
            returnType1580 = *$tmp1581;
            panda$collections$ImmutableArray** $tmp1583 = ((panda$collections$ImmutableArray**) ((char*) $match$437_91552->$data + 72));
            statements1582 = *$tmp1583;
            int $tmp1586;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1590 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1566, dc1568, annotations1570, kind1572, name1574, generics1576, parameters1578, returnType1580, statements1582);
                $tmp1589 = $tmp1590;
                $tmp1588 = $tmp1589;
                m1587 = $tmp1588;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1588));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1589));
                if (((panda$core$Bit) { m1587 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1587));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1587));
                }
                }
            }
            $tmp1586 = -1;
            goto $l1584;
            $l1584:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1587));
            m1587 = NULL;
            switch ($tmp1586) {
                case -1: goto $l1591;
            }
            $l1591:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1592, 11);
        panda$core$Bit $tmp1593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_91552->$rawValue, $tmp1592);
        if ($tmp1593.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1595 = ((org$pandalanguage$pandac$Position*) ((char*) $match$437_91552->$data + 0));
            position1594 = *$tmp1595;
            org$pandalanguage$pandac$ASTNode** $tmp1597 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$437_91552->$data + 16));
            dc1596 = *$tmp1597;
            panda$collections$ImmutableArray** $tmp1599 = ((panda$collections$ImmutableArray**) ((char*) $match$437_91552->$data + 24));
            annotations1598 = *$tmp1599;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1601 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$437_91552->$data + 32));
            kind1600 = *$tmp1601;
            panda$core$String** $tmp1603 = ((panda$core$String**) ((char*) $match$437_91552->$data + 40));
            name1602 = *$tmp1603;
            panda$collections$ImmutableArray** $tmp1605 = ((panda$collections$ImmutableArray**) ((char*) $match$437_91552->$data + 48));
            generics1604 = *$tmp1605;
            panda$collections$ImmutableArray** $tmp1607 = ((panda$collections$ImmutableArray**) ((char*) $match$437_91552->$data + 56));
            supertypes1606 = *$tmp1607;
            panda$collections$ImmutableArray** $tmp1609 = ((panda$collections$ImmutableArray**) ((char*) $match$437_91552->$data + 64));
            members1608 = *$tmp1609;
            int $tmp1612;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1616 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1594, dc1596, annotations1598, kind1600, name1602, generics1604, supertypes1606, members1608);
                $tmp1615 = $tmp1616;
                $tmp1614 = $tmp1615;
                inner1613 = $tmp1614;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1614));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1615));
                if (((panda$core$Bit) { inner1613 != NULL }).value) {
                {
                    {
                        $tmp1617 = inner1613->owner;
                        panda$core$Weak* $tmp1620 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1620, ((panda$core$Object*) p_cl));
                        $tmp1619 = $tmp1620;
                        $tmp1618 = $tmp1619;
                        inner1613->owner = $tmp1618;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1618));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1619));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1617));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1613));
                    panda$core$String* $tmp1623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1622);
                    $tmp1621 = $tmp1623;
                    panda$core$Bit $tmp1624 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1613->name, $tmp1621);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1621));
                    if ($tmp1624.value) goto $l1625; else goto $l1626;
                    $l1626:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1627, (panda$core$Int64) { 455 });
                    abort();
                    $l1625:;
                    org$pandalanguage$pandac$Alias* $tmp1629 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1632 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64$init$builtin_int64(&$tmp1633, 1);
                    panda$core$Int64 $tmp1634 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1632, $tmp1633);
                    panda$core$Bit$init$builtin_bit(&$tmp1635, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1631, ((panda$core$Int64$nullable) { $tmp1634, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1635);
                    panda$core$String* $tmp1636 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1613->name, $tmp1631);
                    $tmp1630 = $tmp1636;
                    org$pandalanguage$pandac$Position$init(&$tmp1637);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1629, $tmp1630, inner1613->name, $tmp1637);
                    $tmp1628 = $tmp1629;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1628));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1628));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1630));
                    org$pandalanguage$pandac$Alias* $tmp1639 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1641 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1640 = $tmp1641;
                    org$pandalanguage$pandac$Position$init(&$tmp1642);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1639, $tmp1640, p_cl->name, $tmp1642);
                    $tmp1638 = $tmp1639;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1613->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1638));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1638));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1640));
                }
                }
            }
            $tmp1612 = -1;
            goto $l1610;
            $l1610:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1613));
            inner1613 = NULL;
            switch ($tmp1612) {
                case -1: goto $l1643;
            }
            $l1643:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1644, 9);
        panda$core$Bit $tmp1645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_91552->$rawValue, $tmp1644);
        if ($tmp1645.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1647 = ((org$pandalanguage$pandac$Position*) ((char*) $match$437_91552->$data + 0));
            position1646 = *$tmp1647;
            org$pandalanguage$pandac$ASTNode** $tmp1649 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$437_91552->$data + 16));
            dc1648 = *$tmp1649;
            panda$core$String** $tmp1651 = ((panda$core$String**) ((char*) $match$437_91552->$data + 24));
            name1650 = *$tmp1651;
            panda$collections$ImmutableArray** $tmp1653 = ((panda$collections$ImmutableArray**) ((char*) $match$437_91552->$data + 32));
            fields1652 = *$tmp1653;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1646, dc1648, name1650, fields1652);
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1654, false);
            if ($tmp1654.value) goto $l1655; else goto $l1656;
            $l1656:;
            panda$core$String* $tmp1661 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1660, ((panda$core$Object*) p_node));
            $tmp1659 = $tmp1661;
            panda$core$String* $tmp1663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1659, &$s1662);
            $tmp1658 = $tmp1663;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1657, (panda$core$Int64) { 463 }, $tmp1658);
            abort();
            $l1655:;
        }
        }
        }
        }
        }
    }
    $tmp1551 = -1;
    goto $l1549;
    $l1549:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1553));
    switch ($tmp1551) {
        case -1: goto $l1664;
    }
    $l1664:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1668 = NULL;
    panda$core$String* $tmp1669;
    panda$core$String* $tmp1670;
    org$pandalanguage$pandac$ASTNode* $match$475_131674 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1675;
    panda$core$Int64 $tmp1676;
    org$pandalanguage$pandac$Position position1678;
    panda$core$String* text1680 = NULL;
    panda$core$String* $tmp1682;
    panda$core$String* $tmp1683;
    panda$core$Bit $tmp1684;
    panda$collections$Array* fields1689 = NULL;
    panda$collections$Array* $tmp1690;
    panda$collections$Array* $tmp1691;
    panda$collections$Iterator* Iter$483$91696 = NULL;
    panda$collections$Iterator* $tmp1697;
    panda$collections$Iterator* $tmp1698;
    org$pandalanguage$pandac$ASTNode* t1714 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1715;
    panda$core$Object* $tmp1716;
    org$pandalanguage$pandac$Type* $tmp1721;
    org$pandalanguage$pandac$ChoiceEntry* entry1725 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1726;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1727;
    int $tmp1667;
    {
        memset(&doccomment1668, 0, sizeof(doccomment1668));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1669 = doccomment1668;
                $tmp1670 = NULL;
                doccomment1668 = $tmp1670;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1670));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1669));
            }
        }
        }
        else {
        {
            int $tmp1673;
            {
                $tmp1675 = p_rawDoccomment;
                $match$475_131674 = $tmp1675;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1675));
                panda$core$Int64$init$builtin_int64(&$tmp1676, 38);
                panda$core$Bit $tmp1677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$475_131674->$rawValue, $tmp1676);
                if ($tmp1677.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1679 = ((org$pandalanguage$pandac$Position*) ((char*) $match$475_131674->$data + 0));
                    position1678 = *$tmp1679;
                    panda$core$String** $tmp1681 = ((panda$core$String**) ((char*) $match$475_131674->$data + 16));
                    text1680 = *$tmp1681;
                    {
                        $tmp1682 = doccomment1668;
                        $tmp1683 = text1680;
                        doccomment1668 = $tmp1683;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1683));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1682));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1684, false);
                    if ($tmp1684.value) goto $l1685; else goto $l1686;
                    $l1686:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1687, (panda$core$Int64) { 479 });
                    abort();
                    $l1685:;
                }
                }
            }
            $tmp1673 = -1;
            goto $l1671;
            $l1671:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1675));
            switch ($tmp1673) {
                case -1: goto $l1688;
            }
            $l1688:;
        }
        }
        panda$collections$Array* $tmp1692 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1692);
        $tmp1691 = $tmp1692;
        $tmp1690 = $tmp1691;
        fields1689 = $tmp1690;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1690));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1691));
        {
            int $tmp1695;
            {
                ITable* $tmp1699 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1699->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1699 = $tmp1699->next;
                }
                $fn1701 $tmp1700 = $tmp1699->methods[0];
                panda$collections$Iterator* $tmp1702 = $tmp1700(((panda$collections$Iterable*) p_rawFields));
                $tmp1698 = $tmp1702;
                $tmp1697 = $tmp1698;
                Iter$483$91696 = $tmp1697;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1697));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1698));
                $l1703:;
                ITable* $tmp1706 = Iter$483$91696->$class->itable;
                while ($tmp1706->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1706 = $tmp1706->next;
                }
                $fn1708 $tmp1707 = $tmp1706->methods[0];
                panda$core$Bit $tmp1709 = $tmp1707(Iter$483$91696);
                panda$core$Bit $tmp1710 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1709);
                bool $tmp1705 = $tmp1710.value;
                if (!$tmp1705) goto $l1704;
                {
                    int $tmp1713;
                    {
                        ITable* $tmp1717 = Iter$483$91696->$class->itable;
                        while ($tmp1717->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1717 = $tmp1717->next;
                        }
                        $fn1719 $tmp1718 = $tmp1717->methods[1];
                        panda$core$Object* $tmp1720 = $tmp1718(Iter$483$91696);
                        $tmp1716 = $tmp1720;
                        $tmp1715 = ((org$pandalanguage$pandac$ASTNode*) $tmp1716);
                        t1714 = $tmp1715;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1715));
                        panda$core$Panda$unref$panda$core$Object($tmp1716);
                        org$pandalanguage$pandac$Type* $tmp1722 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1714);
                        $tmp1721 = $tmp1722;
                        panda$collections$Array$add$panda$collections$Array$T(fields1689, ((panda$core$Object*) $tmp1721));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1721));
                    }
                    $tmp1713 = -1;
                    goto $l1711;
                    $l1711:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1714));
                    t1714 = NULL;
                    switch ($tmp1713) {
                        case -1: goto $l1723;
                    }
                    $l1723:;
                }
                goto $l1703;
                $l1704:;
            }
            $tmp1695 = -1;
            goto $l1693;
            $l1693:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$483$91696));
            Iter$483$91696 = NULL;
            switch ($tmp1695) {
                case -1: goto $l1724;
            }
            $l1724:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1728 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1729 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1728, p_cl, p_position, p_name, doccomment1668, $tmp1729, ((panda$collections$ListView*) fields1689));
        $tmp1727 = $tmp1728;
        $tmp1726 = $tmp1727;
        entry1725 = $tmp1726;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1726));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1727));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1725));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1725));
    }
    $tmp1667 = -1;
    goto $l1665;
    $l1665:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1725));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1689));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1668));
    fields1689 = NULL;
    entry1725 = NULL;
    switch ($tmp1667) {
        case -1: goto $l1730;
    }
    $l1730:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1734 = NULL;
    panda$core$String* $tmp1737;
    panda$core$String* $tmp1738;
    panda$core$String* $tmp1739;
    panda$core$String* $tmp1740;
    panda$core$String* $tmp1741;
    panda$core$String* $tmp1742;
    panda$core$String* $tmp1749;
    panda$core$String* $tmp1750;
    panda$core$String* doccomment1751 = NULL;
    panda$core$String* $tmp1752;
    panda$core$String* $tmp1753;
    org$pandalanguage$pandac$ASTNode* $match$509_131757 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1758;
    panda$core$Int64 $tmp1759;
    org$pandalanguage$pandac$Position position1761;
    panda$core$String* text1763 = NULL;
    panda$core$String* $tmp1765;
    panda$core$String* $tmp1766;
    panda$core$Bit $tmp1767;
    org$pandalanguage$pandac$Annotations* annotations1772 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1773;
    org$pandalanguage$pandac$Annotations* $tmp1774;
    panda$collections$Array* parameters1776 = NULL;
    panda$collections$Array* $tmp1777;
    panda$collections$Array* $tmp1778;
    panda$collections$Iterator* Iter$519$131783 = NULL;
    panda$collections$Iterator* $tmp1784;
    panda$collections$Iterator* $tmp1785;
    org$pandalanguage$pandac$ASTNode* p1801 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1802;
    panda$core$Object* $tmp1803;
    panda$core$String* name1808 = NULL;
    org$pandalanguage$pandac$Type* bound1809 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$522_171813 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1814;
    panda$core$Int64 $tmp1815;
    panda$core$String* id1817 = NULL;
    panda$core$String* $tmp1819;
    panda$core$String* $tmp1820;
    org$pandalanguage$pandac$Type* $tmp1821;
    org$pandalanguage$pandac$Type* $tmp1822;
    org$pandalanguage$pandac$Type* $tmp1823;
    panda$core$Int64 $tmp1825;
    panda$core$String* id1827 = NULL;
    org$pandalanguage$pandac$ASTNode* type1829 = NULL;
    panda$core$String* $tmp1831;
    panda$core$String* $tmp1832;
    org$pandalanguage$pandac$Type* $tmp1833;
    org$pandalanguage$pandac$Type* $tmp1834;
    org$pandalanguage$pandac$Type* $tmp1835;
    panda$core$Bit $tmp1837;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1842;
    panda$core$Int64 $tmp1848;
    panda$collections$Array* supertypes1851 = NULL;
    panda$collections$Array* $tmp1852;
    panda$collections$Array* $tmp1853;
    panda$core$Int64 $tmp1855;
    panda$collections$Iterator* Iter$543$131861 = NULL;
    panda$collections$Iterator* $tmp1862;
    panda$collections$Iterator* $tmp1863;
    org$pandalanguage$pandac$ASTNode* s1879 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1880;
    panda$core$Object* $tmp1881;
    org$pandalanguage$pandac$Type* $tmp1886;
    org$pandalanguage$pandac$ClassDecl* result1890 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1891;
    org$pandalanguage$pandac$ClassDecl* $tmp1892;
    panda$core$Object* $tmp1894;
    panda$core$Object* $tmp1897;
    panda$core$Int64 $tmp1900;
    org$pandalanguage$pandac$FieldDecl* rawValue1905 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1906;
    org$pandalanguage$pandac$FieldDecl* $tmp1907;
    org$pandalanguage$pandac$Annotations* $tmp1909;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1911;
    panda$core$Int64 $tmp1912;
    org$pandalanguage$pandac$Type* $tmp1914;
    org$pandalanguage$pandac$FieldDecl* data1916 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1917;
    org$pandalanguage$pandac$FieldDecl* $tmp1918;
    org$pandalanguage$pandac$Annotations* $tmp1920;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1922;
    panda$core$Int64 $tmp1923;
    org$pandalanguage$pandac$Type* $tmp1925;
    panda$collections$Iterator* Iter$560$91931 = NULL;
    panda$collections$Iterator* $tmp1932;
    panda$collections$Iterator* $tmp1933;
    org$pandalanguage$pandac$ASTNode* m1949 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1950;
    panda$core$Object* $tmp1951;
    org$pandalanguage$pandac$ASTNode* $match$561_131959 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1960;
    panda$core$Int64 $tmp1961;
    org$pandalanguage$pandac$Position mPosition1963;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1965;
    panda$core$Int64 $tmp1967;
    org$pandalanguage$pandac$ClassDecl$Kind $match$564_251969;
    panda$core$Int64 $tmp1970;
    panda$core$Int64 $tmp1972;
    panda$core$Int64 $tmp1975;
    panda$core$Bit foundInit1981;
    panda$core$Bit $tmp1982;
    panda$core$Bit foundCleanup1983;
    panda$core$Bit $tmp1984;
    panda$collections$Iterator* Iter$579$91988 = NULL;
    panda$collections$Iterator* $tmp1989;
    panda$collections$Iterator* $tmp1990;
    org$pandalanguage$pandac$MethodDecl* m2006 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2007;
    panda$core$Object* $tmp2008;
    panda$core$Int64 $tmp2013;
    panda$core$Bit $tmp2015;
    panda$core$Int64 $tmp2021;
    panda$core$Bit $tmp2024;
    panda$core$Int64 $tmp2025;
    panda$core$Int64 $tmp2034;
    org$pandalanguage$pandac$MethodDecl* defaultInit2044 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2045;
    org$pandalanguage$pandac$MethodDecl* $tmp2046;
    org$pandalanguage$pandac$Annotations* $tmp2048;
    panda$core$Int64 $tmp2050;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2051;
    panda$core$Int64 $tmp2052;
    panda$collections$Array* $tmp2054;
    panda$collections$Array* $tmp2056;
    org$pandalanguage$pandac$Type* $tmp2058;
    panda$collections$ImmutableArray* $tmp2060;
    panda$core$Int64 $tmp2068;
    panda$core$Int64 $tmp2071;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2082 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2083;
    org$pandalanguage$pandac$MethodDecl* $tmp2084;
    org$pandalanguage$pandac$Annotations* $tmp2086;
    panda$core$Int64 $tmp2088;
    panda$core$Int64 $tmp2089;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2091;
    panda$core$Int64 $tmp2092;
    panda$collections$Array* $tmp2094;
    panda$collections$Array* $tmp2096;
    org$pandalanguage$pandac$Type* $tmp2098;
    panda$collections$ImmutableArray* $tmp2100;
    panda$core$Int64 $tmp2103;
    panda$core$Bit haveFields2105;
    panda$core$Bit $tmp2106;
    panda$collections$Iterator* Iter$609$132110 = NULL;
    panda$collections$Iterator* $tmp2111;
    panda$collections$Iterator* $tmp2112;
    org$pandalanguage$pandac$ChoiceEntry* e2128 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2129;
    panda$core$Object* $tmp2130;
    panda$core$Int64 $tmp2136;
    panda$core$Bit $tmp2138;
    org$pandalanguage$pandac$Type* $tmp2143;
    org$pandalanguage$pandac$Type* $tmp2144;
    org$pandalanguage$pandac$Type* $tmp2145;
    panda$core$Object* $tmp2147;
    panda$core$Object* $tmp2148;
    org$pandalanguage$pandac$ClassDecl* $returnValue2152;
    org$pandalanguage$pandac$ClassDecl* $tmp2153;
    int $tmp1733;
    {
        memset(&fullName1734, 0, sizeof(fullName1734));
        panda$core$Bit $tmp1736 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1735);
        if ($tmp1736.value) {
        {
            {
                $tmp1737 = fullName1734;
                panda$core$String* $tmp1743 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1742 = $tmp1743;
                panda$core$String* $tmp1745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1742, &$s1744);
                $tmp1741 = $tmp1745;
                panda$core$String* $tmp1746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1741, p_name);
                $tmp1740 = $tmp1746;
                panda$core$String* $tmp1748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1740, &$s1747);
                $tmp1739 = $tmp1748;
                $tmp1738 = $tmp1739;
                fullName1734 = $tmp1738;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1738));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1739));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1740));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1741));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1742));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1737));
            }
        }
        }
        else {
        {
            {
                $tmp1749 = fullName1734;
                $tmp1750 = p_name;
                fullName1734 = $tmp1750;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1750));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1749));
            }
        }
        }
        memset(&doccomment1751, 0, sizeof(doccomment1751));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1752 = doccomment1751;
                $tmp1753 = NULL;
                doccomment1751 = $tmp1753;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1753));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1752));
            }
        }
        }
        else {
        {
            int $tmp1756;
            {
                $tmp1758 = p_rawDoccomment;
                $match$509_131757 = $tmp1758;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1758));
                panda$core$Int64$init$builtin_int64(&$tmp1759, 38);
                panda$core$Bit $tmp1760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$509_131757->$rawValue, $tmp1759);
                if ($tmp1760.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1762 = ((org$pandalanguage$pandac$Position*) ((char*) $match$509_131757->$data + 0));
                    position1761 = *$tmp1762;
                    panda$core$String** $tmp1764 = ((panda$core$String**) ((char*) $match$509_131757->$data + 16));
                    text1763 = *$tmp1764;
                    {
                        $tmp1765 = doccomment1751;
                        $tmp1766 = text1763;
                        doccomment1751 = $tmp1766;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1766));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1765));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1767, false);
                    if ($tmp1767.value) goto $l1768; else goto $l1769;
                    $l1769:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1770, (panda$core$Int64) { 513 });
                    abort();
                    $l1768:;
                }
                }
            }
            $tmp1756 = -1;
            goto $l1754;
            $l1754:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1758));
            switch ($tmp1756) {
                case -1: goto $l1771;
            }
            $l1771:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1775 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1774 = $tmp1775;
        $tmp1773 = $tmp1774;
        annotations1772 = $tmp1773;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1773));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1774));
        panda$collections$Array* $tmp1779 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1779);
        $tmp1778 = $tmp1779;
        $tmp1777 = $tmp1778;
        parameters1776 = $tmp1777;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1777));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1778));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1782;
                {
                    ITable* $tmp1786 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1786->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1786 = $tmp1786->next;
                    }
                    $fn1788 $tmp1787 = $tmp1786->methods[0];
                    panda$collections$Iterator* $tmp1789 = $tmp1787(((panda$collections$Iterable*) p_generics));
                    $tmp1785 = $tmp1789;
                    $tmp1784 = $tmp1785;
                    Iter$519$131783 = $tmp1784;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1784));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1785));
                    $l1790:;
                    ITable* $tmp1793 = Iter$519$131783->$class->itable;
                    while ($tmp1793->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1793 = $tmp1793->next;
                    }
                    $fn1795 $tmp1794 = $tmp1793->methods[0];
                    panda$core$Bit $tmp1796 = $tmp1794(Iter$519$131783);
                    panda$core$Bit $tmp1797 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1796);
                    bool $tmp1792 = $tmp1797.value;
                    if (!$tmp1792) goto $l1791;
                    {
                        int $tmp1800;
                        {
                            ITable* $tmp1804 = Iter$519$131783->$class->itable;
                            while ($tmp1804->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1804 = $tmp1804->next;
                            }
                            $fn1806 $tmp1805 = $tmp1804->methods[1];
                            panda$core$Object* $tmp1807 = $tmp1805(Iter$519$131783);
                            $tmp1803 = $tmp1807;
                            $tmp1802 = ((org$pandalanguage$pandac$ASTNode*) $tmp1803);
                            p1801 = $tmp1802;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1802));
                            panda$core$Panda$unref$panda$core$Object($tmp1803);
                            memset(&name1808, 0, sizeof(name1808));
                            memset(&bound1809, 0, sizeof(bound1809));
                            int $tmp1812;
                            {
                                $tmp1814 = p1801;
                                $match$522_171813 = $tmp1814;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1814));
                                panda$core$Int64$init$builtin_int64(&$tmp1815, 20);
                                panda$core$Bit $tmp1816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$522_171813->$rawValue, $tmp1815);
                                if ($tmp1816.value) {
                                {
                                    panda$core$String** $tmp1818 = ((panda$core$String**) ((char*) $match$522_171813->$data + 16));
                                    id1817 = *$tmp1818;
                                    {
                                        $tmp1819 = name1808;
                                        $tmp1820 = id1817;
                                        name1808 = $tmp1820;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1820));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1819));
                                    }
                                    {
                                        $tmp1821 = bound1809;
                                        org$pandalanguage$pandac$Type* $tmp1824 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1823 = $tmp1824;
                                        $tmp1822 = $tmp1823;
                                        bound1809 = $tmp1822;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1822));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1823));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1821));
                                    }
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1825, 44);
                                panda$core$Bit $tmp1826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$522_171813->$rawValue, $tmp1825);
                                if ($tmp1826.value) {
                                {
                                    panda$core$String** $tmp1828 = ((panda$core$String**) ((char*) $match$522_171813->$data + 16));
                                    id1827 = *$tmp1828;
                                    org$pandalanguage$pandac$ASTNode** $tmp1830 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$522_171813->$data + 24));
                                    type1829 = *$tmp1830;
                                    {
                                        $tmp1831 = name1808;
                                        $tmp1832 = id1827;
                                        name1808 = $tmp1832;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1832));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1831));
                                    }
                                    {
                                        $tmp1833 = bound1809;
                                        org$pandalanguage$pandac$Type* $tmp1836 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1829);
                                        $tmp1835 = $tmp1836;
                                        $tmp1834 = $tmp1835;
                                        bound1809 = $tmp1834;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1834));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1835));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1833));
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp1837, false);
                                    if ($tmp1837.value) goto $l1838; else goto $l1839;
                                    $l1839:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1840, (panda$core$Int64) { 530 });
                                    abort();
                                    $l1838:;
                                }
                                }
                                }
                            }
                            $tmp1812 = -1;
                            goto $l1810;
                            $l1810:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1814));
                            switch ($tmp1812) {
                                case -1: goto $l1841;
                            }
                            $l1841:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1843 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1845 = (($fn1844) p1801->$class->vtable[2])(p1801);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1843, $tmp1845, fullName1734, name1808, bound1809);
                            $tmp1842 = $tmp1843;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1776, ((panda$core$Object*) $tmp1842));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1842));
                        }
                        $tmp1800 = -1;
                        goto $l1798;
                        $l1798:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1809));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1808));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1801));
                        p1801 = NULL;
                        switch ($tmp1800) {
                            case -1: goto $l1846;
                        }
                        $l1846:;
                    }
                    goto $l1790;
                    $l1791:;
                }
                $tmp1782 = -1;
                goto $l1780;
                $l1780:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$519$131783));
                Iter$519$131783 = NULL;
                switch ($tmp1782) {
                    case -1: goto $l1847;
                }
                $l1847:;
            }
            panda$core$Int64$init$builtin_int64(&$tmp1848, 2);
            panda$core$Bit $tmp1849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1848);
            if ($tmp1849.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1850);
            }
            }
        }
        }
        panda$collections$Array* $tmp1854 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1854);
        $tmp1853 = $tmp1854;
        $tmp1852 = $tmp1853;
        supertypes1851 = $tmp1852;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1852));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1853));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1855, 2);
            panda$core$Bit $tmp1856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1855);
            if ($tmp1856.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1857);
            }
            }
            {
                int $tmp1860;
                {
                    ITable* $tmp1864 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1864->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1864 = $tmp1864->next;
                    }
                    $fn1866 $tmp1865 = $tmp1864->methods[0];
                    panda$collections$Iterator* $tmp1867 = $tmp1865(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1863 = $tmp1867;
                    $tmp1862 = $tmp1863;
                    Iter$543$131861 = $tmp1862;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1862));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1863));
                    $l1868:;
                    ITable* $tmp1871 = Iter$543$131861->$class->itable;
                    while ($tmp1871->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1871 = $tmp1871->next;
                    }
                    $fn1873 $tmp1872 = $tmp1871->methods[0];
                    panda$core$Bit $tmp1874 = $tmp1872(Iter$543$131861);
                    panda$core$Bit $tmp1875 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1874);
                    bool $tmp1870 = $tmp1875.value;
                    if (!$tmp1870) goto $l1869;
                    {
                        int $tmp1878;
                        {
                            ITable* $tmp1882 = Iter$543$131861->$class->itable;
                            while ($tmp1882->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1882 = $tmp1882->next;
                            }
                            $fn1884 $tmp1883 = $tmp1882->methods[1];
                            panda$core$Object* $tmp1885 = $tmp1883(Iter$543$131861);
                            $tmp1881 = $tmp1885;
                            $tmp1880 = ((org$pandalanguage$pandac$ASTNode*) $tmp1881);
                            s1879 = $tmp1880;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1880));
                            panda$core$Panda$unref$panda$core$Object($tmp1881);
                            org$pandalanguage$pandac$Type* $tmp1887 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1879);
                            $tmp1886 = $tmp1887;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1851, ((panda$core$Object*) $tmp1886));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1886));
                        }
                        $tmp1878 = -1;
                        goto $l1876;
                        $l1876:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1879));
                        s1879 = NULL;
                        switch ($tmp1878) {
                            case -1: goto $l1888;
                        }
                        $l1888:;
                    }
                    goto $l1868;
                    $l1869:;
                }
                $tmp1860 = -1;
                goto $l1858;
                $l1858:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$543$131861));
                Iter$543$131861 = NULL;
                switch ($tmp1860) {
                    case -1: goto $l1889;
                }
                $l1889:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1893 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1896 = (($fn1895) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1894 = $tmp1896;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1893, p_source, p_position, p_aliases, doccomment1751, annotations1772, p_kind, fullName1734, ((panda$collections$ListView*) supertypes1851), parameters1776, ((org$pandalanguage$pandac$Compiler*) $tmp1894)->root);
        $tmp1892 = $tmp1893;
        $tmp1891 = $tmp1892;
        result1890 = $tmp1891;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1891));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1892));
        panda$core$Panda$unref$panda$core$Object($tmp1894);
        panda$core$Object* $tmp1899 = (($fn1898) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1897 = $tmp1899;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1897)->currentClass, ((panda$core$Object*) result1890));
        panda$core$Panda$unref$panda$core$Object($tmp1897);
        panda$core$Int64$init$builtin_int64(&$tmp1900, 2);
        panda$core$Bit $tmp1901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1900);
        if ($tmp1901.value) {
        {
            int $tmp1904;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1908 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1910 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1910);
                $tmp1909 = $tmp1910;
                panda$core$Int64$init$builtin_int64(&$tmp1912, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1911, $tmp1912);
                org$pandalanguage$pandac$Type* $tmp1915 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1914 = $tmp1915;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1908, result1890, result1890->position, NULL, $tmp1909, $tmp1911, &$s1913, $tmp1914, NULL);
                $tmp1907 = $tmp1908;
                $tmp1906 = $tmp1907;
                rawValue1905 = $tmp1906;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1906));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1907));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1914));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1909));
                panda$collections$Array$add$panda$collections$Array$T(result1890->fields, ((panda$core$Object*) rawValue1905));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1890->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1905));
                org$pandalanguage$pandac$FieldDecl* $tmp1919 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1921 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1921);
                $tmp1920 = $tmp1921;
                panda$core$Int64$init$builtin_int64(&$tmp1923, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1922, $tmp1923);
                org$pandalanguage$pandac$Type* $tmp1926 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1925 = $tmp1926;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1919, result1890, result1890->position, NULL, $tmp1920, $tmp1922, &$s1924, $tmp1925, NULL);
                $tmp1918 = $tmp1919;
                $tmp1917 = $tmp1918;
                data1916 = $tmp1917;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1917));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1918));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1925));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1920));
                panda$collections$Array$add$panda$collections$Array$T(result1890->fields, ((panda$core$Object*) data1916));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1890->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1916));
            }
            $tmp1904 = -1;
            goto $l1902;
            $l1902:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1916));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1905));
            rawValue1905 = NULL;
            data1916 = NULL;
            switch ($tmp1904) {
                case -1: goto $l1927;
            }
            $l1927:;
        }
        }
        {
            int $tmp1930;
            {
                ITable* $tmp1934 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1934->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1934 = $tmp1934->next;
                }
                $fn1936 $tmp1935 = $tmp1934->methods[0];
                panda$collections$Iterator* $tmp1937 = $tmp1935(((panda$collections$Iterable*) p_members));
                $tmp1933 = $tmp1937;
                $tmp1932 = $tmp1933;
                Iter$560$91931 = $tmp1932;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1932));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1933));
                $l1938:;
                ITable* $tmp1941 = Iter$560$91931->$class->itable;
                while ($tmp1941->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1941 = $tmp1941->next;
                }
                $fn1943 $tmp1942 = $tmp1941->methods[0];
                panda$core$Bit $tmp1944 = $tmp1942(Iter$560$91931);
                panda$core$Bit $tmp1945 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1944);
                bool $tmp1940 = $tmp1945.value;
                if (!$tmp1940) goto $l1939;
                {
                    int $tmp1948;
                    {
                        ITable* $tmp1952 = Iter$560$91931->$class->itable;
                        while ($tmp1952->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1952 = $tmp1952->next;
                        }
                        $fn1954 $tmp1953 = $tmp1952->methods[1];
                        panda$core$Object* $tmp1955 = $tmp1953(Iter$560$91931);
                        $tmp1951 = $tmp1955;
                        $tmp1950 = ((org$pandalanguage$pandac$ASTNode*) $tmp1951);
                        m1949 = $tmp1950;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1950));
                        panda$core$Panda$unref$panda$core$Object($tmp1951);
                        int $tmp1958;
                        {
                            $tmp1960 = m1949;
                            $match$561_131959 = $tmp1960;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1960));
                            panda$core$Int64$init$builtin_int64(&$tmp1961, 26);
                            panda$core$Bit $tmp1962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$561_131959->$rawValue, $tmp1961);
                            if ($tmp1962.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1964 = ((org$pandalanguage$pandac$Position*) ((char*) $match$561_131959->$data + 0));
                                mPosition1963 = *$tmp1964;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1966 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$561_131959->$data + 32));
                                methodKind1965 = *$tmp1966;
                                panda$core$Int64$init$builtin_int64(&$tmp1967, 2);
                                panda$core$Bit $tmp1968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1965.$rawValue, $tmp1967);
                                if ($tmp1968.value) {
                                {
                                    {
                                        $match$564_251969 = p_kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp1970, 0);
                                        panda$core$Bit $tmp1971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$564_251969.$rawValue, $tmp1970);
                                        if ($tmp1971.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp1972, 1);
                                        panda$core$Bit $tmp1973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$564_251969.$rawValue, $tmp1972);
                                        if ($tmp1973.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition1963, &$s1974);
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp1975, 2);
                                        panda$core$Bit $tmp1976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$564_251969.$rawValue, $tmp1975);
                                        if ($tmp1976.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition1963, &$s1977);
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
                        $tmp1958 = -1;
                        goto $l1956;
                        $l1956:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1960));
                        switch ($tmp1958) {
                            case -1: goto $l1978;
                        }
                        $l1978:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1890, m1949);
                    }
                    $tmp1948 = -1;
                    goto $l1946;
                    $l1946:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1949));
                    m1949 = NULL;
                    switch ($tmp1948) {
                        case -1: goto $l1979;
                    }
                    $l1979:;
                }
                goto $l1938;
                $l1939:;
            }
            $tmp1930 = -1;
            goto $l1928;
            $l1928:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$560$91931));
            Iter$560$91931 = NULL;
            switch ($tmp1930) {
                case -1: goto $l1980;
            }
            $l1980:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp1982, false);
        foundInit1981 = $tmp1982;
        panda$core$Bit$init$builtin_bit(&$tmp1984, false);
        foundCleanup1983 = $tmp1984;
        {
            int $tmp1987;
            {
                ITable* $tmp1991 = ((panda$collections$Iterable*) result1890->methods)->$class->itable;
                while ($tmp1991->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1991 = $tmp1991->next;
                }
                $fn1993 $tmp1992 = $tmp1991->methods[0];
                panda$collections$Iterator* $tmp1994 = $tmp1992(((panda$collections$Iterable*) result1890->methods));
                $tmp1990 = $tmp1994;
                $tmp1989 = $tmp1990;
                Iter$579$91988 = $tmp1989;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1989));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1990));
                $l1995:;
                ITable* $tmp1998 = Iter$579$91988->$class->itable;
                while ($tmp1998->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1998 = $tmp1998->next;
                }
                $fn2000 $tmp1999 = $tmp1998->methods[0];
                panda$core$Bit $tmp2001 = $tmp1999(Iter$579$91988);
                panda$core$Bit $tmp2002 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2001);
                bool $tmp1997 = $tmp2002.value;
                if (!$tmp1997) goto $l1996;
                {
                    int $tmp2005;
                    {
                        ITable* $tmp2009 = Iter$579$91988->$class->itable;
                        while ($tmp2009->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2009 = $tmp2009->next;
                        }
                        $fn2011 $tmp2010 = $tmp2009->methods[1];
                        panda$core$Object* $tmp2012 = $tmp2010(Iter$579$91988);
                        $tmp2008 = $tmp2012;
                        $tmp2007 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2008);
                        m2006 = $tmp2007;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2007));
                        panda$core$Panda$unref$panda$core$Object($tmp2008);
                        panda$core$Int64$init$builtin_int64(&$tmp2013, 2);
                        panda$core$Bit $tmp2014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2006->methodKind.$rawValue, $tmp2013);
                        if ($tmp2014.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2015, true);
                            foundInit1981 = $tmp2015;
                        }
                        }
                        panda$core$Bit $tmp2018 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2006)->name, &$s2017);
                        bool $tmp2016 = $tmp2018.value;
                        if (!$tmp2016) goto $l2019;
                        panda$core$Int64 $tmp2020 = panda$collections$Array$get_count$R$panda$core$Int64(m2006->parameters);
                        panda$core$Int64$init$builtin_int64(&$tmp2021, 0);
                        panda$core$Bit $tmp2022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2020, $tmp2021);
                        $tmp2016 = $tmp2022.value;
                        $l2019:;
                        panda$core$Bit $tmp2023 = { $tmp2016 };
                        if ($tmp2023.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2024, true);
                            foundCleanup1983 = $tmp2024;
                            panda$core$Int64$init$builtin_int64(&$tmp2025, 2);
                            panda$core$Bit $tmp2026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2025);
                            if ($tmp2026.value) {
                            {
                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2027);
                            }
                            }
                        }
                        }
                    }
                    $tmp2005 = -1;
                    goto $l2003;
                    $l2003:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2006));
                    m2006 = NULL;
                    switch ($tmp2005) {
                        case -1: goto $l2028;
                    }
                    $l2028:;
                }
                goto $l1995;
                $l1996:;
            }
            $tmp1987 = -1;
            goto $l1985;
            $l1985:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$579$91988));
            Iter$579$91988 = NULL;
            switch ($tmp1987) {
                case -1: goto $l2029;
            }
            $l2029:;
        }
        panda$core$Bit $tmp2032 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1981);
        bool $tmp2031 = $tmp2032.value;
        if (!$tmp2031) goto $l2033;
        panda$core$Int64$init$builtin_int64(&$tmp2034, 0);
        panda$core$Bit $tmp2035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2034);
        $tmp2031 = $tmp2035.value;
        $l2033:;
        panda$core$Bit $tmp2036 = { $tmp2031 };
        bool $tmp2030 = $tmp2036.value;
        if (!$tmp2030) goto $l2037;
        panda$core$Bit $tmp2039 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1890->name, &$s2038);
        $tmp2030 = $tmp2039.value;
        $l2037:;
        panda$core$Bit $tmp2040 = { $tmp2030 };
        if ($tmp2040.value) {
        {
            int $tmp2043;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2047 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2049 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2050, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2049, $tmp2050);
                $tmp2048 = $tmp2049;
                panda$core$Int64$init$builtin_int64(&$tmp2052, 2);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2051, $tmp2052);
                panda$collections$Array* $tmp2055 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2055);
                $tmp2054 = $tmp2055;
                panda$collections$Array* $tmp2057 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2057);
                $tmp2056 = $tmp2057;
                org$pandalanguage$pandac$Type* $tmp2059 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2058 = $tmp2059;
                panda$collections$ImmutableArray* $tmp2061 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2061);
                $tmp2060 = $tmp2061;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2047, result1890, p_position, NULL, $tmp2048, $tmp2051, &$s2053, $tmp2054, $tmp2056, $tmp2058, $tmp2060);
                $tmp2046 = $tmp2047;
                $tmp2045 = $tmp2046;
                defaultInit2044 = $tmp2045;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2045));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2046));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2060));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2058));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2056));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2054));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2048));
                panda$collections$Array$add$panda$collections$Array$T(result1890->methods, ((panda$core$Object*) defaultInit2044));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1890->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2044));
            }
            $tmp2043 = -1;
            goto $l2041;
            $l2041:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2044));
            defaultInit2044 = NULL;
            switch ($tmp2043) {
                case -1: goto $l2062;
            }
            $l2062:;
        }
        }
        panda$core$Bit $tmp2065 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1983);
        bool $tmp2064 = $tmp2065.value;
        if (!$tmp2064) goto $l2066;
        panda$core$Int64$init$builtin_int64(&$tmp2068, 0);
        panda$core$Bit $tmp2069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2068);
        bool $tmp2067 = $tmp2069.value;
        if ($tmp2067) goto $l2070;
        panda$core$Int64$init$builtin_int64(&$tmp2071, 2);
        panda$core$Bit $tmp2072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2071);
        $tmp2067 = $tmp2072.value;
        $l2070:;
        panda$core$Bit $tmp2073 = { $tmp2067 };
        $tmp2064 = $tmp2073.value;
        $l2066:;
        panda$core$Bit $tmp2074 = { $tmp2064 };
        bool $tmp2063 = $tmp2074.value;
        if (!$tmp2063) goto $l2075;
        panda$core$Bit $tmp2077 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1890->name, &$s2076);
        $tmp2063 = $tmp2077.value;
        $l2075:;
        panda$core$Bit $tmp2078 = { $tmp2063 };
        if ($tmp2078.value) {
        {
            int $tmp2081;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2085 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2087 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2088, 32);
                panda$core$Int64$init$builtin_int64(&$tmp2089, 8192);
                panda$core$Int64 $tmp2090 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2088, $tmp2089);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2087, $tmp2090);
                $tmp2086 = $tmp2087;
                panda$core$Int64$init$builtin_int64(&$tmp2092, 0);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2091, $tmp2092);
                panda$collections$Array* $tmp2095 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2095);
                $tmp2094 = $tmp2095;
                panda$collections$Array* $tmp2097 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2097);
                $tmp2096 = $tmp2097;
                org$pandalanguage$pandac$Type* $tmp2099 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2098 = $tmp2099;
                panda$collections$ImmutableArray* $tmp2101 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2101);
                $tmp2100 = $tmp2101;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2085, result1890, p_position, NULL, $tmp2086, $tmp2091, &$s2093, $tmp2094, $tmp2096, $tmp2098, $tmp2100);
                $tmp2084 = $tmp2085;
                $tmp2083 = $tmp2084;
                defaultCleanup2082 = $tmp2083;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2083));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2084));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2100));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2098));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2096));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2094));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2086));
                panda$collections$Array$add$panda$collections$Array$T(result1890->methods, ((panda$core$Object*) defaultCleanup2082));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1890->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2082));
            }
            $tmp2081 = -1;
            goto $l2079;
            $l2079:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2082));
            defaultCleanup2082 = NULL;
            switch ($tmp2081) {
                case -1: goto $l2102;
            }
            $l2102:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2103, 2);
        panda$core$Bit $tmp2104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2103);
        if ($tmp2104.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2106, false);
            haveFields2105 = $tmp2106;
            {
                int $tmp2109;
                {
                    ITable* $tmp2113 = ((panda$collections$Iterable*) result1890->choiceEntries)->$class->itable;
                    while ($tmp2113->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2113 = $tmp2113->next;
                    }
                    $fn2115 $tmp2114 = $tmp2113->methods[0];
                    panda$collections$Iterator* $tmp2116 = $tmp2114(((panda$collections$Iterable*) result1890->choiceEntries));
                    $tmp2112 = $tmp2116;
                    $tmp2111 = $tmp2112;
                    Iter$609$132110 = $tmp2111;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2111));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2112));
                    $l2117:;
                    ITable* $tmp2120 = Iter$609$132110->$class->itable;
                    while ($tmp2120->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2120 = $tmp2120->next;
                    }
                    $fn2122 $tmp2121 = $tmp2120->methods[0];
                    panda$core$Bit $tmp2123 = $tmp2121(Iter$609$132110);
                    panda$core$Bit $tmp2124 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2123);
                    bool $tmp2119 = $tmp2124.value;
                    if (!$tmp2119) goto $l2118;
                    {
                        int $tmp2127;
                        {
                            ITable* $tmp2131 = Iter$609$132110->$class->itable;
                            while ($tmp2131->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2131 = $tmp2131->next;
                            }
                            $fn2133 $tmp2132 = $tmp2131->methods[1];
                            panda$core$Object* $tmp2134 = $tmp2132(Iter$609$132110);
                            $tmp2130 = $tmp2134;
                            $tmp2129 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp2130);
                            e2128 = $tmp2129;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2129));
                            panda$core$Panda$unref$panda$core$Object($tmp2130);
                            panda$core$Int64 $tmp2135 = panda$collections$Array$get_count$R$panda$core$Int64(e2128->fields);
                            panda$core$Int64$init$builtin_int64(&$tmp2136, 0);
                            panda$core$Bit $tmp2137 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2135, $tmp2136);
                            if ($tmp2137.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp2138, true);
                                haveFields2105 = $tmp2138;
                                $tmp2127 = 0;
                                goto $l2125;
                                $l2139:;
                                goto $l2118;
                            }
                            }
                        }
                        $tmp2127 = -1;
                        goto $l2125;
                        $l2125:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2128));
                        e2128 = NULL;
                        switch ($tmp2127) {
                            case -1: goto $l2140;
                            case 0: goto $l2139;
                        }
                        $l2140:;
                    }
                    goto $l2117;
                    $l2118:;
                }
                $tmp2109 = -1;
                goto $l2107;
                $l2107:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$609$132110));
                Iter$609$132110 = NULL;
                switch ($tmp2109) {
                    case -1: goto $l2141;
                }
                $l2141:;
            }
            panda$core$Bit $tmp2142 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields2105);
            if ($tmp2142.value) {
            {
                {
                    $tmp2143 = result1890->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp2146 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp2145 = $tmp2146;
                    $tmp2144 = $tmp2145;
                    result1890->rawSuper = $tmp2144;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2144));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2145));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2143));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp2150 = (($fn2149) self->compiler->$class->vtable[2])(self->compiler);
        $tmp2148 = $tmp2150;
        panda$core$Object* $tmp2151 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2148)->currentClass);
        $tmp2147 = $tmp2151;
        panda$core$Panda$unref$panda$core$Object($tmp2147);
        panda$core$Panda$unref$panda$core$Object($tmp2148);
        $tmp2153 = result1890;
        $returnValue2152 = $tmp2153;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2153));
        $tmp1733 = 0;
        goto $l1731;
        $l2154:;
        return $returnValue2152;
    }
    $l1731:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1890));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1851));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1776));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1772));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1751));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1734));
    annotations1772 = NULL;
    parameters1776 = NULL;
    supertypes1851 = NULL;
    result1890 = NULL;
    switch ($tmp1733) {
        case 0: goto $l2154;
    }
    $l2156:;
    abort();
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$625$92160 = NULL;
    panda$collections$Iterator* $tmp2161;
    panda$collections$Iterator* $tmp2162;
    org$pandalanguage$pandac$ClassDecl* inner2178 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2179;
    panda$core$Object* $tmp2180;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp2159;
        {
            ITable* $tmp2163 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp2163->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2163 = $tmp2163->next;
            }
            $fn2165 $tmp2164 = $tmp2163->methods[0];
            panda$collections$Iterator* $tmp2166 = $tmp2164(((panda$collections$Iterable*) p_cl->classes));
            $tmp2162 = $tmp2166;
            $tmp2161 = $tmp2162;
            Iter$625$92160 = $tmp2161;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2161));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2162));
            $l2167:;
            ITable* $tmp2170 = Iter$625$92160->$class->itable;
            while ($tmp2170->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2170 = $tmp2170->next;
            }
            $fn2172 $tmp2171 = $tmp2170->methods[0];
            panda$core$Bit $tmp2173 = $tmp2171(Iter$625$92160);
            panda$core$Bit $tmp2174 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2173);
            bool $tmp2169 = $tmp2174.value;
            if (!$tmp2169) goto $l2168;
            {
                int $tmp2177;
                {
                    ITable* $tmp2181 = Iter$625$92160->$class->itable;
                    while ($tmp2181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2181 = $tmp2181->next;
                    }
                    $fn2183 $tmp2182 = $tmp2181->methods[1];
                    panda$core$Object* $tmp2184 = $tmp2182(Iter$625$92160);
                    $tmp2180 = $tmp2184;
                    $tmp2179 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2180);
                    inner2178 = $tmp2179;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2179));
                    panda$core$Panda$unref$panda$core$Object($tmp2180);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner2178, p_arr);
                }
                $tmp2177 = -1;
                goto $l2175;
                $l2175:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner2178));
                inner2178 = NULL;
                switch ($tmp2177) {
                    case -1: goto $l2185;
                }
                $l2185:;
            }
            goto $l2167;
            $l2168:;
        }
        $tmp2159 = -1;
        goto $l2157;
        $l2157:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$625$92160));
        Iter$625$92160 = NULL;
        switch ($tmp2159) {
            case -1: goto $l2186;
        }
        $l2186:;
    }
}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$collections$List* p_classes) {
    org$pandalanguage$pandac$ClassDecl* $tmp2190;
    org$pandalanguage$pandac$ClassDecl* $tmp2191;
    org$pandalanguage$pandac$ClassDecl* $tmp2192;
    org$pandalanguage$pandac$Position $tmp2194;
    org$pandalanguage$pandac$Annotations* $tmp2195;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2197;
    panda$core$Int64 $tmp2198;
    panda$collections$Array* $tmp2200;
    panda$collections$Array* $tmp2202;
    panda$core$Object* $tmp2204;
    org$pandalanguage$pandac$MethodDecl* defaultInit2210 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2211;
    org$pandalanguage$pandac$MethodDecl* $tmp2212;
    org$pandalanguage$pandac$Position $tmp2214;
    org$pandalanguage$pandac$Annotations* $tmp2215;
    panda$core$Int64 $tmp2217;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2218;
    panda$core$Int64 $tmp2219;
    panda$collections$Array* $tmp2221;
    panda$collections$Array* $tmp2223;
    org$pandalanguage$pandac$Type* $tmp2225;
    panda$collections$ImmutableArray* $tmp2227;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2229 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2230;
    org$pandalanguage$pandac$MethodDecl* $tmp2231;
    org$pandalanguage$pandac$Position $tmp2233;
    org$pandalanguage$pandac$Annotations* $tmp2234;
    panda$core$Int64 $tmp2236;
    panda$core$Int64 $tmp2237;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2239;
    panda$core$Int64 $tmp2240;
    panda$collections$Array* $tmp2242;
    panda$collections$Array* $tmp2244;
    org$pandalanguage$pandac$Type* $tmp2246;
    panda$collections$ImmutableArray* $tmp2248;
    if (((panda$core$Bit) { self->bareCodeClass == NULL }).value) {
    {
        int $tmp2189;
        {
            {
                $tmp2190 = self->bareCodeClass;
                org$pandalanguage$pandac$ClassDecl* $tmp2193 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
                org$pandalanguage$pandac$Position$init(&$tmp2194);
                org$pandalanguage$pandac$Annotations* $tmp2196 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp2196);
                $tmp2195 = $tmp2196;
                panda$core$Int64$init$builtin_int64(&$tmp2198, 0);
                org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2197, $tmp2198);
                panda$collections$Array* $tmp2201 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2201);
                $tmp2200 = $tmp2201;
                panda$collections$Array* $tmp2203 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2203);
                $tmp2202 = $tmp2203;
                panda$core$Object* $tmp2206 = (($fn2205) self->compiler->$class->vtable[2])(self->compiler);
                $tmp2204 = $tmp2206;
                org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2193, p_source, $tmp2194, p_aliases, NULL, $tmp2195, $tmp2197, &$s2199, ((panda$collections$ListView*) $tmp2200), $tmp2202, ((org$pandalanguage$pandac$Compiler*) $tmp2204)->root);
                $tmp2192 = $tmp2193;
                $tmp2191 = $tmp2192;
                self->bareCodeClass = $tmp2191;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2191));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2192));
                panda$core$Panda$unref$panda$core$Object($tmp2204);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2202));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2200));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2195));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2190));
            }
            ITable* $tmp2207 = ((panda$collections$CollectionWriter*) p_classes)->$class->itable;
            while ($tmp2207->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
                $tmp2207 = $tmp2207->next;
            }
            $fn2209 $tmp2208 = $tmp2207->methods[0];
            $tmp2208(((panda$collections$CollectionWriter*) p_classes), ((panda$core$Object*) self->bareCodeClass));
            org$pandalanguage$pandac$MethodDecl* $tmp2213 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2214);
            org$pandalanguage$pandac$Annotations* $tmp2216 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2217, 8192);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2216, $tmp2217);
            $tmp2215 = $tmp2216;
            panda$core$Int64$init$builtin_int64(&$tmp2219, 2);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2218, $tmp2219);
            panda$collections$Array* $tmp2222 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2222);
            $tmp2221 = $tmp2222;
            panda$collections$Array* $tmp2224 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2224);
            $tmp2223 = $tmp2224;
            org$pandalanguage$pandac$Type* $tmp2226 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2225 = $tmp2226;
            panda$collections$ImmutableArray* $tmp2228 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2228);
            $tmp2227 = $tmp2228;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2213, self->bareCodeClass, $tmp2214, NULL, $tmp2215, $tmp2218, &$s2220, $tmp2221, $tmp2223, $tmp2225, $tmp2227);
            $tmp2212 = $tmp2213;
            $tmp2211 = $tmp2212;
            defaultInit2210 = $tmp2211;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2211));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2212));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2227));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2225));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2223));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2221));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2215));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultInit2210));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2210));
            org$pandalanguage$pandac$MethodDecl* $tmp2232 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2233);
            org$pandalanguage$pandac$Annotations* $tmp2235 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2236, 32);
            panda$core$Int64$init$builtin_int64(&$tmp2237, 8192);
            panda$core$Int64 $tmp2238 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2236, $tmp2237);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2235, $tmp2238);
            $tmp2234 = $tmp2235;
            panda$core$Int64$init$builtin_int64(&$tmp2240, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2239, $tmp2240);
            panda$collections$Array* $tmp2243 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2243);
            $tmp2242 = $tmp2243;
            panda$collections$Array* $tmp2245 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2245);
            $tmp2244 = $tmp2245;
            org$pandalanguage$pandac$Type* $tmp2247 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2246 = $tmp2247;
            panda$collections$ImmutableArray* $tmp2249 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2249);
            $tmp2248 = $tmp2249;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2232, self->bareCodeClass, $tmp2233, NULL, $tmp2234, $tmp2239, &$s2241, $tmp2242, $tmp2244, $tmp2246, $tmp2248);
            $tmp2231 = $tmp2232;
            $tmp2230 = $tmp2231;
            defaultCleanup2229 = $tmp2230;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2230));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2231));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2248));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2246));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2244));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2242));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2234));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultCleanup2229));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2229));
        }
        $tmp2189 = -1;
        goto $l2187;
        $l2187:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2229));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2210));
        defaultInit2210 = NULL;
        defaultCleanup2229 = NULL;
        switch ($tmp2189) {
            case -1: goto $l2250;
        }
        $l2250:;
    }
    }
}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp2255;
    if (((panda$core$Bit) { self->source != NULL }).value) goto $l2251; else goto $l2252;
    $l2252:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2253, (panda$core$Int64) { 653 }, &$s2254);
    abort();
    $l2251:;
    panda$core$Object* $tmp2257 = (($fn2256) self->compiler->$class->vtable[2])(self->compiler);
    $tmp2255 = $tmp2257;
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2255), self->source, p_position, p_msg);
    panda$core$Panda$unref$panda$core$Object($tmp2255);
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$io$File* $tmp2258;
    panda$io$File* $tmp2259;
    org$pandalanguage$pandac$ASTNode* $match$659_92263 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2264;
    panda$core$Int64 $tmp2265;
    panda$collections$ImmutableArray* entries2267 = NULL;
    panda$collections$Array* result2272 = NULL;
    panda$collections$Array* $tmp2273;
    panda$collections$Array* $tmp2274;
    panda$core$String* currentPackage2276 = NULL;
    panda$core$String* $tmp2277;
    panda$collections$HashMap* aliases2279 = NULL;
    panda$collections$HashMap* $tmp2280;
    panda$collections$HashMap* $tmp2281;
    panda$collections$Iterator* Iter$664$172286 = NULL;
    panda$collections$Iterator* $tmp2287;
    panda$collections$Iterator* $tmp2288;
    org$pandalanguage$pandac$ASTNode* e2304 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2305;
    panda$core$Object* $tmp2306;
    org$pandalanguage$pandac$ASTNode* $match$665_212314 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2315;
    panda$core$Int64 $tmp2316;
    panda$core$String* name2318 = NULL;
    panda$core$String* $tmp2320;
    panda$core$String* $tmp2321;
    panda$core$Int64 $tmp2322;
    panda$core$String* fullName2324 = NULL;
    panda$core$String$Index$nullable idx2329;
    panda$core$String* alias2332 = NULL;
    panda$core$String* $tmp2333;
    panda$core$String* $tmp2334;
    panda$core$String* $tmp2335;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2336;
    panda$core$Bit $tmp2338;
    panda$core$String* $tmp2340;
    panda$core$String* $tmp2341;
    panda$core$Int64 $tmp2343;
    org$pandalanguage$pandac$Position position2345;
    org$pandalanguage$pandac$ASTNode* dc2347 = NULL;
    panda$collections$ImmutableArray* annotations2349 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind2351;
    panda$core$String* name2353 = NULL;
    panda$collections$ImmutableArray* generics2355 = NULL;
    panda$collections$ImmutableArray* supertypes2357 = NULL;
    panda$collections$ImmutableArray* members2359 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl2364 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2365;
    org$pandalanguage$pandac$ClassDecl* $tmp2366;
    panda$core$Int64 $tmp2369;
    org$pandalanguage$pandac$Position position2371;
    org$pandalanguage$pandac$ASTNode* dc2373 = NULL;
    panda$collections$ImmutableArray* annotations2375 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind2377;
    panda$core$String* rawName2379 = NULL;
    panda$collections$ImmutableArray* generics2381 = NULL;
    panda$collections$ImmutableArray* parameters2383 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType2385 = NULL;
    panda$collections$ImmutableArray* statements2387 = NULL;
    panda$core$String* name2392 = NULL;
    panda$core$String* $tmp2398;
    panda$core$String* $tmp2399;
    panda$collections$Array* mainParameters2401 = NULL;
    panda$collections$Array* $tmp2402;
    panda$collections$Array* $tmp2403;
    panda$collections$Array* mainStatements2405 = NULL;
    panda$collections$Array* $tmp2406;
    panda$collections$Array* $tmp2407;
    panda$collections$Array* mainArguments2409 = NULL;
    panda$collections$Array* $tmp2410;
    panda$collections$Array* $tmp2411;
    panda$collections$Iterator* Iter$694$332416 = NULL;
    panda$collections$Iterator* $tmp2417;
    panda$collections$Iterator* $tmp2418;
    org$pandalanguage$pandac$ASTNode* p2434 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2435;
    panda$core$Object* $tmp2436;
    org$pandalanguage$pandac$ASTNode* $match$695_372444 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2445;
    panda$core$Int64 $tmp2446;
    org$pandalanguage$pandac$Position position2448;
    panda$core$String* name2450 = NULL;
    org$pandalanguage$pandac$ASTNode* type2452 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2454;
    org$pandalanguage$pandac$Type* $tmp2456;
    org$pandalanguage$pandac$ASTNode* $tmp2458;
    panda$core$Int64 $tmp2460;
    panda$core$Bit $tmp2461;
    org$pandalanguage$pandac$ASTNode* bareConstruct2468 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2469;
    org$pandalanguage$pandac$ASTNode* $tmp2470;
    panda$core$Int64 $tmp2472;
    org$pandalanguage$pandac$ASTNode* $tmp2473;
    panda$core$Int64 $tmp2475;
    panda$collections$ImmutableArray* $tmp2477;
    org$pandalanguage$pandac$ASTNode* $tmp2479;
    panda$core$Int64 $tmp2481;
    org$pandalanguage$pandac$ASTNode* $tmp2482;
    panda$core$Int64 $tmp2484;
    panda$collections$ImmutableArray* $tmp2485;
    org$pandalanguage$pandac$Type* returnType2487 = NULL;
    org$pandalanguage$pandac$Type* $tmp2488;
    org$pandalanguage$pandac$Type* $tmp2489;
    org$pandalanguage$pandac$Type* $tmp2490;
    org$pandalanguage$pandac$Type* $tmp2492;
    org$pandalanguage$pandac$Type* $tmp2493;
    org$pandalanguage$pandac$Type* $tmp2494;
    org$pandalanguage$pandac$MethodDecl* bareMain2496 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2497;
    org$pandalanguage$pandac$MethodDecl* $tmp2498;
    org$pandalanguage$pandac$Position $tmp2500;
    org$pandalanguage$pandac$Annotations* $tmp2501;
    panda$core$Int64 $tmp2503;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2504;
    panda$core$Int64 $tmp2505;
    panda$collections$Array* $tmp2507;
    panda$collections$ImmutableArray* $tmp2509;
    panda$core$String* $tmp2512;
    panda$core$String* $tmp2513;
    panda$core$Object* $tmp2514;
    org$pandalanguage$pandac$MethodDecl* m2517 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2518;
    org$pandalanguage$pandac$MethodDecl* $tmp2519;
    panda$core$Int64 $tmp2523;
    panda$core$Object* $tmp2526;
    panda$core$Int64 $tmp2530;
    org$pandalanguage$pandac$Position position2532;
    org$pandalanguage$pandac$ASTNode* dc2534 = NULL;
    panda$collections$ImmutableArray* annotations2536 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl2538 = NULL;
    panda$core$Int64 old2540;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2542;
    panda$core$Bit $tmp2544;
    org$pandalanguage$pandac$FieldDecl* f2561 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp2562;
    panda$core$Object* $tmp2563;
    panda$core$Int64 $tmp2566;
    panda$core$Bit $tmp2579;
    panda$core$String* $tmp2583;
    panda$core$String* $tmp2584;
    panda$core$String* $tmp2585;
    panda$core$String* $tmp2586;
    panda$core$String* $tmp2587;
    panda$core$String* $tmp2588;
    panda$core$Object* $tmp2593;
    panda$core$Object* $tmp2598;
    panda$io$File* $tmp2608;
    panda$io$File* $tmp2609;
    panda$collections$ListView* $returnValue2610;
    panda$collections$ListView* $tmp2611;
    panda$core$Bit $tmp2616;
    {
        $tmp2258 = self->source;
        $tmp2259 = p_source;
        self->source = $tmp2259;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2259));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2258));
    }
    int $tmp2262;
    {
        $tmp2264 = p_file;
        $match$659_92263 = $tmp2264;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2264));
        panda$core$Int64$init$builtin_int64(&$tmp2265, 17);
        panda$core$Bit $tmp2266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$659_92263->$rawValue, $tmp2265);
        if ($tmp2266.value) {
        {
            panda$collections$ImmutableArray** $tmp2268 = ((panda$collections$ImmutableArray**) ((char*) $match$659_92263->$data + 0));
            entries2267 = *$tmp2268;
            int $tmp2271;
            {
                panda$collections$Array* $tmp2275 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2275);
                $tmp2274 = $tmp2275;
                $tmp2273 = $tmp2274;
                result2272 = $tmp2273;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2273));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2274));
                $tmp2277 = &$s2278;
                currentPackage2276 = $tmp2277;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2277));
                panda$collections$HashMap* $tmp2282 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp2282);
                $tmp2281 = $tmp2282;
                $tmp2280 = $tmp2281;
                aliases2279 = $tmp2280;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2280));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2281));
                {
                    int $tmp2285;
                    {
                        ITable* $tmp2289 = ((panda$collections$Iterable*) entries2267)->$class->itable;
                        while ($tmp2289->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2289 = $tmp2289->next;
                        }
                        $fn2291 $tmp2290 = $tmp2289->methods[0];
                        panda$collections$Iterator* $tmp2292 = $tmp2290(((panda$collections$Iterable*) entries2267));
                        $tmp2288 = $tmp2292;
                        $tmp2287 = $tmp2288;
                        Iter$664$172286 = $tmp2287;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2287));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2288));
                        $l2293:;
                        ITable* $tmp2296 = Iter$664$172286->$class->itable;
                        while ($tmp2296->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2296 = $tmp2296->next;
                        }
                        $fn2298 $tmp2297 = $tmp2296->methods[0];
                        panda$core$Bit $tmp2299 = $tmp2297(Iter$664$172286);
                        panda$core$Bit $tmp2300 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2299);
                        bool $tmp2295 = $tmp2300.value;
                        if (!$tmp2295) goto $l2294;
                        {
                            int $tmp2303;
                            {
                                ITable* $tmp2307 = Iter$664$172286->$class->itable;
                                while ($tmp2307->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2307 = $tmp2307->next;
                                }
                                $fn2309 $tmp2308 = $tmp2307->methods[1];
                                panda$core$Object* $tmp2310 = $tmp2308(Iter$664$172286);
                                $tmp2306 = $tmp2310;
                                $tmp2305 = ((org$pandalanguage$pandac$ASTNode*) $tmp2306);
                                e2304 = $tmp2305;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2305));
                                panda$core$Panda$unref$panda$core$Object($tmp2306);
                                int $tmp2313;
                                {
                                    $tmp2315 = e2304;
                                    $match$665_212314 = $tmp2315;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2315));
                                    panda$core$Int64$init$builtin_int64(&$tmp2316, 30);
                                    panda$core$Bit $tmp2317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$665_212314->$rawValue, $tmp2316);
                                    if ($tmp2317.value) {
                                    {
                                        panda$core$String** $tmp2319 = ((panda$core$String**) ((char*) $match$665_212314->$data + 16));
                                        name2318 = *$tmp2319;
                                        {
                                            $tmp2320 = currentPackage2276;
                                            $tmp2321 = name2318;
                                            currentPackage2276 = $tmp2321;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2321));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2320));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2322, 46);
                                    panda$core$Bit $tmp2323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$665_212314->$rawValue, $tmp2322);
                                    if ($tmp2323.value) {
                                    {
                                        panda$core$String** $tmp2325 = ((panda$core$String**) ((char*) $match$665_212314->$data + 16));
                                        fullName2324 = *$tmp2325;
                                        int $tmp2328;
                                        {
                                            panda$core$String$Index$nullable $tmp2331 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName2324, &$s2330);
                                            idx2329 = $tmp2331;
                                            memset(&alias2332, 0, sizeof(alias2332));
                                            if (((panda$core$Bit) { idx2329.nonnull }).value) {
                                            {
                                                {
                                                    $tmp2333 = alias2332;
                                                    panda$core$String$Index $tmp2337 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName2324, ((panda$core$String$Index) idx2329.value));
                                                    panda$core$Bit$init$builtin_bit(&$tmp2338, false);
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp2336, ((panda$core$String$Index$nullable) { $tmp2337, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2338);
                                                    panda$core$String* $tmp2339 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName2324, $tmp2336);
                                                    $tmp2335 = $tmp2339;
                                                    $tmp2334 = $tmp2335;
                                                    alias2332 = $tmp2334;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2334));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2335));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2333));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2340 = alias2332;
                                                    $tmp2341 = fullName2324;
                                                    alias2332 = $tmp2341;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2341));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2340));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases2279, ((panda$collections$Key*) alias2332), ((panda$core$Object*) fullName2324));
                                        }
                                        $tmp2328 = -1;
                                        goto $l2326;
                                        $l2326:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias2332));
                                        switch ($tmp2328) {
                                            case -1: goto $l2342;
                                        }
                                        $l2342:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2343, 11);
                                    panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$665_212314->$rawValue, $tmp2343);
                                    if ($tmp2344.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2346 = ((org$pandalanguage$pandac$Position*) ((char*) $match$665_212314->$data + 0));
                                        position2345 = *$tmp2346;
                                        org$pandalanguage$pandac$ASTNode** $tmp2348 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$665_212314->$data + 16));
                                        dc2347 = *$tmp2348;
                                        panda$collections$ImmutableArray** $tmp2350 = ((panda$collections$ImmutableArray**) ((char*) $match$665_212314->$data + 24));
                                        annotations2349 = *$tmp2350;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp2352 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$665_212314->$data + 32));
                                        kind2351 = *$tmp2352;
                                        panda$core$String** $tmp2354 = ((panda$core$String**) ((char*) $match$665_212314->$data + 40));
                                        name2353 = *$tmp2354;
                                        panda$collections$ImmutableArray** $tmp2356 = ((panda$collections$ImmutableArray**) ((char*) $match$665_212314->$data + 48));
                                        generics2355 = *$tmp2356;
                                        panda$collections$ImmutableArray** $tmp2358 = ((panda$collections$ImmutableArray**) ((char*) $match$665_212314->$data + 56));
                                        supertypes2357 = *$tmp2358;
                                        panda$collections$ImmutableArray** $tmp2360 = ((panda$collections$ImmutableArray**) ((char*) $match$665_212314->$data + 64));
                                        members2359 = *$tmp2360;
                                        int $tmp2363;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp2367 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases2279), currentPackage2276, position2345, dc2347, annotations2349, kind2351, name2353, generics2355, supertypes2357, members2359);
                                            $tmp2366 = $tmp2367;
                                            $tmp2365 = $tmp2366;
                                            cl2364 = $tmp2365;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2365));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2366));
                                            if (((panda$core$Bit) { cl2364 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl2364, result2272);
                                            }
                                            }
                                        }
                                        $tmp2363 = -1;
                                        goto $l2361;
                                        $l2361:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2364));
                                        cl2364 = NULL;
                                        switch ($tmp2363) {
                                            case -1: goto $l2368;
                                        }
                                        $l2368:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2369, 26);
                                    panda$core$Bit $tmp2370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$665_212314->$rawValue, $tmp2369);
                                    if ($tmp2370.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2372 = ((org$pandalanguage$pandac$Position*) ((char*) $match$665_212314->$data + 0));
                                        position2371 = *$tmp2372;
                                        org$pandalanguage$pandac$ASTNode** $tmp2374 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$665_212314->$data + 16));
                                        dc2373 = *$tmp2374;
                                        panda$collections$ImmutableArray** $tmp2376 = ((panda$collections$ImmutableArray**) ((char*) $match$665_212314->$data + 24));
                                        annotations2375 = *$tmp2376;
                                        org$pandalanguage$pandac$MethodDecl$Kind* $tmp2378 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$665_212314->$data + 32));
                                        kind2377 = *$tmp2378;
                                        panda$core$String** $tmp2380 = ((panda$core$String**) ((char*) $match$665_212314->$data + 40));
                                        rawName2379 = *$tmp2380;
                                        panda$collections$ImmutableArray** $tmp2382 = ((panda$collections$ImmutableArray**) ((char*) $match$665_212314->$data + 48));
                                        generics2381 = *$tmp2382;
                                        panda$collections$ImmutableArray** $tmp2384 = ((panda$collections$ImmutableArray**) ((char*) $match$665_212314->$data + 56));
                                        parameters2383 = *$tmp2384;
                                        org$pandalanguage$pandac$ASTNode** $tmp2386 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$665_212314->$data + 64));
                                        rawReturnType2385 = *$tmp2386;
                                        panda$collections$ImmutableArray** $tmp2388 = ((panda$collections$ImmutableArray**) ((char*) $match$665_212314->$data + 72));
                                        statements2387 = *$tmp2388;
                                        int $tmp2391;
                                        {
                                            org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2279), ((panda$collections$List*) result2272));
                                            memset(&name2392, 0, sizeof(name2392));
                                            panda$core$Bit $tmp2394 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(rawName2379, &$s2393);
                                            if ($tmp2394.value) {
                                            {
                                                int $tmp2397;
                                                {
                                                    {
                                                        $tmp2398 = name2392;
                                                        $tmp2399 = &$s2400;
                                                        name2392 = $tmp2399;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2399));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2398));
                                                    }
                                                    panda$collections$Array* $tmp2404 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2404);
                                                    $tmp2403 = $tmp2404;
                                                    $tmp2402 = $tmp2403;
                                                    mainParameters2401 = $tmp2402;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2402));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2403));
                                                    panda$collections$Array* $tmp2408 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2408);
                                                    $tmp2407 = $tmp2408;
                                                    $tmp2406 = $tmp2407;
                                                    mainStatements2405 = $tmp2406;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2406));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2407));
                                                    panda$collections$Array* $tmp2412 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2412);
                                                    $tmp2411 = $tmp2412;
                                                    $tmp2410 = $tmp2411;
                                                    mainArguments2409 = $tmp2410;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2410));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2411));
                                                    {
                                                        int $tmp2415;
                                                        {
                                                            ITable* $tmp2419 = ((panda$collections$Iterable*) parameters2383)->$class->itable;
                                                            while ($tmp2419->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                                                $tmp2419 = $tmp2419->next;
                                                            }
                                                            $fn2421 $tmp2420 = $tmp2419->methods[0];
                                                            panda$collections$Iterator* $tmp2422 = $tmp2420(((panda$collections$Iterable*) parameters2383));
                                                            $tmp2418 = $tmp2422;
                                                            $tmp2417 = $tmp2418;
                                                            Iter$694$332416 = $tmp2417;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2417));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2418));
                                                            $l2423:;
                                                            ITable* $tmp2426 = Iter$694$332416->$class->itable;
                                                            while ($tmp2426->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                $tmp2426 = $tmp2426->next;
                                                            }
                                                            $fn2428 $tmp2427 = $tmp2426->methods[0];
                                                            panda$core$Bit $tmp2429 = $tmp2427(Iter$694$332416);
                                                            panda$core$Bit $tmp2430 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2429);
                                                            bool $tmp2425 = $tmp2430.value;
                                                            if (!$tmp2425) goto $l2424;
                                                            {
                                                                int $tmp2433;
                                                                {
                                                                    ITable* $tmp2437 = Iter$694$332416->$class->itable;
                                                                    while ($tmp2437->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                        $tmp2437 = $tmp2437->next;
                                                                    }
                                                                    $fn2439 $tmp2438 = $tmp2437->methods[1];
                                                                    panda$core$Object* $tmp2440 = $tmp2438(Iter$694$332416);
                                                                    $tmp2436 = $tmp2440;
                                                                    $tmp2435 = ((org$pandalanguage$pandac$ASTNode*) $tmp2436);
                                                                    p2434 = $tmp2435;
                                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2435));
                                                                    panda$core$Panda$unref$panda$core$Object($tmp2436);
                                                                    int $tmp2443;
                                                                    {
                                                                        $tmp2445 = p2434;
                                                                        $match$695_372444 = $tmp2445;
                                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2445));
                                                                        panda$core$Int64$init$builtin_int64(&$tmp2446, 31);
                                                                        panda$core$Bit $tmp2447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_372444->$rawValue, $tmp2446);
                                                                        if ($tmp2447.value) {
                                                                        {
                                                                            org$pandalanguage$pandac$Position* $tmp2449 = ((org$pandalanguage$pandac$Position*) ((char*) $match$695_372444->$data + 0));
                                                                            position2448 = *$tmp2449;
                                                                            panda$core$String** $tmp2451 = ((panda$core$String**) ((char*) $match$695_372444->$data + 16));
                                                                            name2450 = *$tmp2451;
                                                                            org$pandalanguage$pandac$ASTNode** $tmp2453 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$695_372444->$data + 24));
                                                                            type2452 = *$tmp2453;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2455 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                                                            org$pandalanguage$pandac$Type* $tmp2457 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type2452);
                                                                            $tmp2456 = $tmp2457;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2455, name2450, $tmp2456);
                                                                            $tmp2454 = $tmp2455;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainParameters2401, ((panda$core$Object*) $tmp2454));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2454));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2456));
                                                                            org$pandalanguage$pandac$ASTNode* $tmp2459 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                                            panda$core$Int64$init$builtin_int64(&$tmp2460, 20);
                                                                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2459, $tmp2460, position2448, name2450);
                                                                            $tmp2458 = $tmp2459;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainArguments2409, ((panda$core$Object*) $tmp2458));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2458));
                                                                        }
                                                                        }
                                                                        else {
                                                                        {
                                                                            panda$core$Bit$init$builtin_bit(&$tmp2461, false);
                                                                            if ($tmp2461.value) goto $l2462; else goto $l2463;
                                                                            $l2463:;
                                                                            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2464, (panda$core$Int64) { 701 });
                                                                            abort();
                                                                            $l2462:;
                                                                        }
                                                                        }
                                                                    }
                                                                    $tmp2443 = -1;
                                                                    goto $l2441;
                                                                    $l2441:;
                                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2445));
                                                                    switch ($tmp2443) {
                                                                        case -1: goto $l2465;
                                                                    }
                                                                    $l2465:;
                                                                }
                                                                $tmp2433 = -1;
                                                                goto $l2431;
                                                                $l2431:;
                                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p2434));
                                                                p2434 = NULL;
                                                                switch ($tmp2433) {
                                                                    case -1: goto $l2466;
                                                                }
                                                                $l2466:;
                                                            }
                                                            goto $l2423;
                                                            $l2424:;
                                                        }
                                                        $tmp2415 = -1;
                                                        goto $l2413;
                                                        $l2413:;
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$694$332416));
                                                        Iter$694$332416 = NULL;
                                                        switch ($tmp2415) {
                                                            case -1: goto $l2467;
                                                        }
                                                        $l2467:;
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp2471 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2472, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2474 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2475, 20);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2474, $tmp2475, position2371, &$s2476);
                                                    $tmp2473 = $tmp2474;
                                                    panda$collections$ImmutableArray* $tmp2478 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                                                    panda$collections$ImmutableArray$init($tmp2478);
                                                    $tmp2477 = $tmp2478;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2471, $tmp2472, position2371, $tmp2473, $tmp2477);
                                                    $tmp2470 = $tmp2471;
                                                    $tmp2469 = $tmp2470;
                                                    bareConstruct2468 = $tmp2469;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2469));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2470));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2477));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2473));
                                                    org$pandalanguage$pandac$ASTNode* $tmp2480 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2481, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2483 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2484, 15);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2483, $tmp2484, position2371, bareConstruct2468, name2392);
                                                    $tmp2482 = $tmp2483;
                                                    panda$collections$ImmutableArray* $tmp2486 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainArguments2409);
                                                    $tmp2485 = $tmp2486;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2480, $tmp2481, position2371, $tmp2482, $tmp2485);
                                                    $tmp2479 = $tmp2480;
                                                    panda$collections$Array$add$panda$collections$Array$T(mainStatements2405, ((panda$core$Object*) $tmp2479));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2479));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2485));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2482));
                                                    memset(&returnType2487, 0, sizeof(returnType2487));
                                                    if (((panda$core$Bit) { rawReturnType2385 != NULL }).value) {
                                                    {
                                                        {
                                                            $tmp2488 = returnType2487;
                                                            org$pandalanguage$pandac$Type* $tmp2491 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType2385);
                                                            $tmp2490 = $tmp2491;
                                                            $tmp2489 = $tmp2490;
                                                            returnType2487 = $tmp2489;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2489));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2490));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2488));
                                                        }
                                                    }
                                                    }
                                                    else {
                                                    {
                                                        {
                                                            $tmp2492 = returnType2487;
                                                            org$pandalanguage$pandac$Type* $tmp2495 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                            $tmp2494 = $tmp2495;
                                                            $tmp2493 = $tmp2494;
                                                            returnType2487 = $tmp2493;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2493));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2494));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2492));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$MethodDecl* $tmp2499 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                                                    org$pandalanguage$pandac$Position$init(&$tmp2500);
                                                    org$pandalanguage$pandac$Annotations* $tmp2502 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2503, 16);
                                                    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2502, $tmp2503);
                                                    $tmp2501 = $tmp2502;
                                                    panda$core$Int64$init$builtin_int64(&$tmp2505, 0);
                                                    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2504, $tmp2505);
                                                    panda$collections$Array* $tmp2508 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2508);
                                                    $tmp2507 = $tmp2508;
                                                    panda$collections$ImmutableArray* $tmp2510 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainStatements2405);
                                                    $tmp2509 = $tmp2510;
                                                    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2499, self->bareCodeClass, $tmp2500, NULL, $tmp2501, $tmp2504, &$s2506, $tmp2507, mainParameters2401, returnType2487, $tmp2509);
                                                    $tmp2498 = $tmp2499;
                                                    $tmp2497 = $tmp2498;
                                                    bareMain2496 = $tmp2497;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2497));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2498));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2509));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2507));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2501));
                                                    panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) bareMain2496));
                                                }
                                                $tmp2397 = -1;
                                                goto $l2395;
                                                $l2395:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareMain2496));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2487));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareConstruct2468));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainArguments2409));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainStatements2405));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainParameters2401));
                                                mainParameters2401 = NULL;
                                                mainStatements2405 = NULL;
                                                mainArguments2409 = NULL;
                                                bareConstruct2468 = NULL;
                                                bareMain2496 = NULL;
                                                switch ($tmp2397) {
                                                    case -1: goto $l2511;
                                                }
                                                $l2511:;
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2512 = name2392;
                                                    $tmp2513 = rawName2379;
                                                    name2392 = $tmp2513;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2513));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2512));
                                                }
                                            }
                                            }
                                            panda$core$Object* $tmp2516 = (($fn2515) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp2514 = $tmp2516;
                                            panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2514)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2514);
                                            org$pandalanguage$pandac$MethodDecl* $tmp2520 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, self->bareCodeClass, position2371, dc2373, annotations2375, kind2377, name2392, generics2381, parameters2383, rawReturnType2385, statements2387);
                                            $tmp2519 = $tmp2520;
                                            $tmp2518 = $tmp2519;
                                            m2517 = $tmp2518;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2518));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2519));
                                            panda$core$Bit $tmp2521 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2517->annotations);
                                            if ($tmp2521.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) m2517)->position, &$s2522);
                                                panda$core$Int64$init$builtin_int64(&$tmp2523, 16);
                                                panda$core$Int64 $tmp2524 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp2523);
                                                panda$core$Int64 $tmp2525 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(m2517->annotations->flags, $tmp2524);
                                                m2517->annotations->flags = $tmp2525;
                                            }
                                            }
                                            panda$core$Object* $tmp2528 = (($fn2527) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp2526 = $tmp2528;
                                            panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2526)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2526);
                                            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) m2517));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) m2517));
                                        }
                                        $tmp2391 = -1;
                                        goto $l2389;
                                        $l2389:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2517));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2392));
                                        m2517 = NULL;
                                        switch ($tmp2391) {
                                            case -1: goto $l2529;
                                        }
                                        $l2529:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2530, 16);
                                    panda$core$Bit $tmp2531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$665_212314->$rawValue, $tmp2530);
                                    if ($tmp2531.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2533 = ((org$pandalanguage$pandac$Position*) ((char*) $match$665_212314->$data + 0));
                                        position2532 = *$tmp2533;
                                        org$pandalanguage$pandac$ASTNode** $tmp2535 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$665_212314->$data + 16));
                                        dc2534 = *$tmp2535;
                                        panda$collections$ImmutableArray** $tmp2537 = ((panda$collections$ImmutableArray**) ((char*) $match$665_212314->$data + 24));
                                        annotations2536 = *$tmp2537;
                                        org$pandalanguage$pandac$ASTNode** $tmp2539 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$665_212314->$data + 32));
                                        varDecl2538 = *$tmp2539;
                                        org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2279), ((panda$collections$List*) result2272));
                                        panda$core$Int64 $tmp2541 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        old2540 = $tmp2541;
                                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, self->bareCodeClass, position2532, dc2534, annotations2536, varDecl2538);
                                        panda$core$Int64 $tmp2543 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        panda$core$Bit$init$builtin_bit(&$tmp2544, false);
                                        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2542, old2540, $tmp2543, $tmp2544);
                                        int64_t $tmp2546 = $tmp2542.min.value;
                                        panda$core$Int64 i2545 = { $tmp2546 };
                                        int64_t $tmp2548 = $tmp2542.max.value;
                                        bool $tmp2549 = $tmp2542.inclusive.value;
                                        if ($tmp2549) goto $l2556; else goto $l2557;
                                        $l2556:;
                                        if ($tmp2546 <= $tmp2548) goto $l2550; else goto $l2552;
                                        $l2557:;
                                        if ($tmp2546 < $tmp2548) goto $l2550; else goto $l2552;
                                        $l2550:;
                                        {
                                            int $tmp2560;
                                            {
                                                panda$core$Object* $tmp2564 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->bareCodeClass->fields, i2545);
                                                $tmp2563 = $tmp2564;
                                                $tmp2562 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2563);
                                                f2561 = $tmp2562;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2562));
                                                panda$core$Panda$unref$panda$core$Object($tmp2563);
                                                panda$core$Int64$init$builtin_int64(&$tmp2566, 2);
                                                panda$core$Bit $tmp2567 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(f2561->fieldKind.$rawValue, $tmp2566);
                                                bool $tmp2565 = $tmp2567.value;
                                                if (!$tmp2565) goto $l2568;
                                                panda$core$Bit $tmp2569 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f2561->annotations);
                                                $tmp2565 = $tmp2569.value;
                                                $l2568:;
                                                panda$core$Bit $tmp2570 = { $tmp2565 };
                                                if ($tmp2570.value) {
                                                {
                                                    org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) f2561)->position, &$s2571);
                                                }
                                                }
                                            }
                                            $tmp2560 = -1;
                                            goto $l2558;
                                            $l2558:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f2561));
                                            f2561 = NULL;
                                            switch ($tmp2560) {
                                                case -1: goto $l2572;
                                            }
                                            $l2572:;
                                        }
                                        $l2553:;
                                        int64_t $tmp2574 = $tmp2548 - i2545.value;
                                        if ($tmp2549) goto $l2575; else goto $l2576;
                                        $l2575:;
                                        if ((uint64_t) $tmp2574 >= 1) goto $l2573; else goto $l2552;
                                        $l2576:;
                                        if ((uint64_t) $tmp2574 > 1) goto $l2573; else goto $l2552;
                                        $l2573:;
                                        i2545.value += 1;
                                        goto $l2550;
                                        $l2552:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp2579, false);
                                        if ($tmp2579.value) goto $l2580; else goto $l2581;
                                        $l2581:;
                                        panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2589, ((panda$core$Object*) e2304));
                                        $tmp2588 = $tmp2590;
                                        panda$core$String* $tmp2592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2591);
                                        $tmp2587 = $tmp2592;
                                        panda$core$Int64$wrapper* $tmp2594;
                                        $tmp2594 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                                        $tmp2594->value = e2304->$rawValue;
                                        $tmp2593 = ((panda$core$Object*) $tmp2594);
                                        panda$core$String* $tmp2595 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2587, $tmp2593);
                                        $tmp2586 = $tmp2595;
                                        panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, &$s2596);
                                        $tmp2585 = $tmp2597;
                                        org$pandalanguage$pandac$Position $tmp2600 = (($fn2599) e2304->$class->vtable[2])(e2304);
                                        org$pandalanguage$pandac$Position$wrapper* $tmp2601;
                                        $tmp2601 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                                        $tmp2601->value = $tmp2600;
                                        $tmp2598 = ((panda$core$Object*) $tmp2601);
                                        panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2585, $tmp2598);
                                        $tmp2584 = $tmp2602;
                                        panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, &$s2603);
                                        $tmp2583 = $tmp2604;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2582, (panda$core$Int64) { 750 }, $tmp2583);
                                        abort();
                                        $l2580:;
                                    }
                                    }
                                    }
                                    }
                                    }
                                    }
                                }
                                $tmp2313 = -1;
                                goto $l2311;
                                $l2311:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2315));
                                switch ($tmp2313) {
                                    case -1: goto $l2605;
                                }
                                $l2605:;
                            }
                            $tmp2303 = -1;
                            goto $l2301;
                            $l2301:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2304));
                            e2304 = NULL;
                            switch ($tmp2303) {
                                case -1: goto $l2606;
                            }
                            $l2606:;
                        }
                        goto $l2293;
                        $l2294:;
                    }
                    $tmp2285 = -1;
                    goto $l2283;
                    $l2283:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$664$172286));
                    Iter$664$172286 = NULL;
                    switch ($tmp2285) {
                        case -1: goto $l2607;
                    }
                    $l2607:;
                }
                {
                    $tmp2608 = self->source;
                    $tmp2609 = NULL;
                    self->source = $tmp2609;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2609));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2608));
                }
                $tmp2611 = ((panda$collections$ListView*) result2272);
                $returnValue2610 = $tmp2611;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2611));
                $tmp2271 = 0;
                goto $l2269;
                $l2612:;
                $tmp2262 = 0;
                goto $l2260;
                $l2613:;
                return $returnValue2610;
            }
            $l2269:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases2279));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage2276));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2272));
            result2272 = NULL;
            currentPackage2276 = NULL;
            aliases2279 = NULL;
            switch ($tmp2271) {
                case 0: goto $l2612;
            }
            $l2615:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2616, false);
            if ($tmp2616.value) goto $l2617; else goto $l2618;
            $l2618:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2619, (panda$core$Int64) { 756 });
            abort();
            $l2617:;
        }
        }
    }
    $tmp2262 = -1;
    goto $l2260;
    $l2260:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2264));
    switch ($tmp2262) {
        case -1: goto $l2620;
        case 0: goto $l2613;
    }
    $l2620:;
    abort();
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp2623;
    {
    }
    $tmp2623 = -1;
    goto $l2621;
    $l2621:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2623) {
        case -1: goto $l2624;
    }
    $l2624:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bareCodeClass));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}

