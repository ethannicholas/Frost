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
typedef panda$collections$Iterator* (*$fn1119)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1126)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1137)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1161)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1168)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1179)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1193)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1200)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1211)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1235)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1242)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1253)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1295)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1302)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1313)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1398)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1405)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1416)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1454)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1473)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1480)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1491)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1705)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1712)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1723)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1792)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1799)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1810)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1848)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1870)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1877)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1888)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1938)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1945)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1956)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1995)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2002)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2013)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2117)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2124)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2135)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2166)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2173)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2184)(panda$collections$Iterator*);
typedef void (*$fn2209)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2290)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2297)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2308)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2420)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2427)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2438)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn2596)(org$pandalanguage$pandac$ASTNode*);

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
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s2588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };

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
    panda$core$Int64 $tmp1062;
    panda$core$Int64 $tmp1065;
    org$pandalanguage$pandac$ASTNode* value1067 = NULL;
    panda$core$Int64 $tmp1069;
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
    panda$core$Int64 $tmp1102;
    panda$core$Int64 $tmp1105;
    panda$collections$ImmutableArray* decls1107 = NULL;
    panda$core$Int64 result1109;
    panda$core$Int64 $tmp1110;
    panda$collections$Iterator* Iter$325$171114 = NULL;
    panda$collections$Iterator* $tmp1115;
    panda$collections$Iterator* $tmp1116;
    org$pandalanguage$pandac$ASTNode* decl1132 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1133;
    panda$core$Object* $tmp1134;
    panda$core$Int64 $tmp1145;
    panda$collections$ImmutableArray* tests1147 = NULL;
    panda$collections$ImmutableArray* statements1149 = NULL;
    panda$core$Int64 result1151;
    panda$core$Int64 $tmp1152;
    panda$collections$Iterator* Iter$331$171156 = NULL;
    panda$collections$Iterator* $tmp1157;
    panda$collections$Iterator* $tmp1158;
    org$pandalanguage$pandac$ASTNode* test1174 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1175;
    panda$core$Object* $tmp1176;
    panda$collections$Iterator* Iter$334$171188 = NULL;
    panda$collections$Iterator* $tmp1189;
    panda$collections$Iterator* $tmp1190;
    org$pandalanguage$pandac$ASTNode* s1206 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1207;
    panda$core$Object* $tmp1208;
    panda$core$Int64 $tmp1219;
    org$pandalanguage$pandac$ASTNode* test1221 = NULL;
    panda$collections$ImmutableArray* statements1223 = NULL;
    panda$core$Int64 result1225;
    panda$collections$Iterator* Iter$340$171230 = NULL;
    panda$collections$Iterator* $tmp1231;
    panda$collections$Iterator* $tmp1232;
    org$pandalanguage$pandac$ASTNode* s1248 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1249;
    panda$core$Object* $tmp1250;
    panda$core$Bit $tmp1261;
    panda$core$String* $tmp1265;
    panda$core$String* $tmp1266;
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
        panda$core$Int64$init$builtin_int64(&$tmp1060, 35);
        panda$core$Bit $tmp1061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1060);
        if ($tmp1061.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1062, 1);
            $returnValue627 = $tmp1062;
            $tmp620 = 25;
            goto $l618;
            $l1063:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1065, 36);
        panda$core$Bit $tmp1066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1065);
        if ($tmp1066.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1068 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 16));
            value1067 = *$tmp1068;
            if (((panda$core$Bit) { value1067 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp1069, 0);
                $returnValue627 = $tmp1069;
                $tmp620 = 26;
                goto $l618;
                $l1070:;
                return $returnValue627;
            }
            }
            panda$core$Int64 $tmp1072 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value1067);
            $returnValue627 = $tmp1072;
            $tmp620 = 27;
            goto $l618;
            $l1073:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1075, 37);
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
        panda$core$Int64$init$builtin_int64(&$tmp1080, 38);
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
        panda$core$Int64$init$builtin_int64(&$tmp1085, 39);
        panda$core$Bit $tmp1086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1085);
        if ($tmp1086.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1087, 1);
            $returnValue627 = $tmp1087;
            $tmp620 = 30;
            goto $l618;
            $l1088:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1090, 42);
        panda$core$Bit $tmp1091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1090);
        if ($tmp1091.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1092, 0);
            $returnValue627 = $tmp1092;
            $tmp620 = 31;
            goto $l618;
            $l1093:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1095, 43);
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
        panda$core$Int64$init$builtin_int64(&$tmp1100, 45);
        panda$core$Bit $tmp1101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1100);
        if ($tmp1101.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1102, 10);
            $returnValue627 = $tmp1102;
            $tmp620 = 33;
            goto $l618;
            $l1103:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1105, 47);
        panda$core$Bit $tmp1106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1105);
        if ($tmp1106.value) {
        {
            panda$collections$ImmutableArray** $tmp1108 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 24));
            decls1107 = *$tmp1108;
            panda$core$Int64$init$builtin_int64(&$tmp1110, 0);
            result1109 = $tmp1110;
            {
                int $tmp1113;
                {
                    ITable* $tmp1117 = ((panda$collections$Iterable*) decls1107)->$class->itable;
                    while ($tmp1117->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1117 = $tmp1117->next;
                    }
                    $fn1119 $tmp1118 = $tmp1117->methods[0];
                    panda$collections$Iterator* $tmp1120 = $tmp1118(((panda$collections$Iterable*) decls1107));
                    $tmp1116 = $tmp1120;
                    $tmp1115 = $tmp1116;
                    Iter$325$171114 = $tmp1115;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1115));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1116));
                    $l1121:;
                    ITable* $tmp1124 = Iter$325$171114->$class->itable;
                    while ($tmp1124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1124 = $tmp1124->next;
                    }
                    $fn1126 $tmp1125 = $tmp1124->methods[0];
                    panda$core$Bit $tmp1127 = $tmp1125(Iter$325$171114);
                    panda$core$Bit $tmp1128 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1127);
                    bool $tmp1123 = $tmp1128.value;
                    if (!$tmp1123) goto $l1122;
                    {
                        int $tmp1131;
                        {
                            ITable* $tmp1135 = Iter$325$171114->$class->itable;
                            while ($tmp1135->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1135 = $tmp1135->next;
                            }
                            $fn1137 $tmp1136 = $tmp1135->methods[1];
                            panda$core$Object* $tmp1138 = $tmp1136(Iter$325$171114);
                            $tmp1134 = $tmp1138;
                            $tmp1133 = ((org$pandalanguage$pandac$ASTNode*) $tmp1134);
                            decl1132 = $tmp1133;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1133));
                            panda$core$Panda$unref$panda$core$Object($tmp1134);
                            panda$core$Int64 $tmp1139 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl1132);
                            panda$core$Int64 $tmp1140 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1109, $tmp1139);
                            result1109 = $tmp1140;
                        }
                        $tmp1131 = -1;
                        goto $l1129;
                        $l1129:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1132));
                        decl1132 = NULL;
                        switch ($tmp1131) {
                            case -1: goto $l1141;
                        }
                        $l1141:;
                    }
                    goto $l1121;
                    $l1122:;
                }
                $tmp1113 = -1;
                goto $l1111;
                $l1111:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$325$171114));
                Iter$325$171114 = NULL;
                switch ($tmp1113) {
                    case -1: goto $l1142;
                }
                $l1142:;
            }
            $returnValue627 = result1109;
            $tmp620 = 34;
            goto $l618;
            $l1143:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1145, 48);
        panda$core$Bit $tmp1146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1145);
        if ($tmp1146.value) {
        {
            panda$collections$ImmutableArray** $tmp1148 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 16));
            tests1147 = *$tmp1148;
            panda$collections$ImmutableArray** $tmp1150 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 24));
            statements1149 = *$tmp1150;
            panda$core$Int64$init$builtin_int64(&$tmp1152, 0);
            result1151 = $tmp1152;
            {
                int $tmp1155;
                {
                    ITable* $tmp1159 = ((panda$collections$Iterable*) tests1147)->$class->itable;
                    while ($tmp1159->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1159 = $tmp1159->next;
                    }
                    $fn1161 $tmp1160 = $tmp1159->methods[0];
                    panda$collections$Iterator* $tmp1162 = $tmp1160(((panda$collections$Iterable*) tests1147));
                    $tmp1158 = $tmp1162;
                    $tmp1157 = $tmp1158;
                    Iter$331$171156 = $tmp1157;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1157));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1158));
                    $l1163:;
                    ITable* $tmp1166 = Iter$331$171156->$class->itable;
                    while ($tmp1166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1166 = $tmp1166->next;
                    }
                    $fn1168 $tmp1167 = $tmp1166->methods[0];
                    panda$core$Bit $tmp1169 = $tmp1167(Iter$331$171156);
                    panda$core$Bit $tmp1170 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1169);
                    bool $tmp1165 = $tmp1170.value;
                    if (!$tmp1165) goto $l1164;
                    {
                        int $tmp1173;
                        {
                            ITable* $tmp1177 = Iter$331$171156->$class->itable;
                            while ($tmp1177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1177 = $tmp1177->next;
                            }
                            $fn1179 $tmp1178 = $tmp1177->methods[1];
                            panda$core$Object* $tmp1180 = $tmp1178(Iter$331$171156);
                            $tmp1176 = $tmp1180;
                            $tmp1175 = ((org$pandalanguage$pandac$ASTNode*) $tmp1176);
                            test1174 = $tmp1175;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1175));
                            panda$core$Panda$unref$panda$core$Object($tmp1176);
                            panda$core$Int64 $tmp1181 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1174);
                            panda$core$Int64 $tmp1182 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1151, $tmp1181);
                            result1151 = $tmp1182;
                        }
                        $tmp1173 = -1;
                        goto $l1171;
                        $l1171:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1174));
                        test1174 = NULL;
                        switch ($tmp1173) {
                            case -1: goto $l1183;
                        }
                        $l1183:;
                    }
                    goto $l1163;
                    $l1164:;
                }
                $tmp1155 = -1;
                goto $l1153;
                $l1153:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$331$171156));
                Iter$331$171156 = NULL;
                switch ($tmp1155) {
                    case -1: goto $l1184;
                }
                $l1184:;
            }
            {
                int $tmp1187;
                {
                    ITable* $tmp1191 = ((panda$collections$Iterable*) statements1149)->$class->itable;
                    while ($tmp1191->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1191 = $tmp1191->next;
                    }
                    $fn1193 $tmp1192 = $tmp1191->methods[0];
                    panda$collections$Iterator* $tmp1194 = $tmp1192(((panda$collections$Iterable*) statements1149));
                    $tmp1190 = $tmp1194;
                    $tmp1189 = $tmp1190;
                    Iter$334$171188 = $tmp1189;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1189));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1190));
                    $l1195:;
                    ITable* $tmp1198 = Iter$334$171188->$class->itable;
                    while ($tmp1198->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1198 = $tmp1198->next;
                    }
                    $fn1200 $tmp1199 = $tmp1198->methods[0];
                    panda$core$Bit $tmp1201 = $tmp1199(Iter$334$171188);
                    panda$core$Bit $tmp1202 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1201);
                    bool $tmp1197 = $tmp1202.value;
                    if (!$tmp1197) goto $l1196;
                    {
                        int $tmp1205;
                        {
                            ITable* $tmp1209 = Iter$334$171188->$class->itable;
                            while ($tmp1209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1209 = $tmp1209->next;
                            }
                            $fn1211 $tmp1210 = $tmp1209->methods[1];
                            panda$core$Object* $tmp1212 = $tmp1210(Iter$334$171188);
                            $tmp1208 = $tmp1212;
                            $tmp1207 = ((org$pandalanguage$pandac$ASTNode*) $tmp1208);
                            s1206 = $tmp1207;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1207));
                            panda$core$Panda$unref$panda$core$Object($tmp1208);
                            panda$core$Int64 $tmp1213 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1206);
                            panda$core$Int64 $tmp1214 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1151, $tmp1213);
                            result1151 = $tmp1214;
                        }
                        $tmp1205 = -1;
                        goto $l1203;
                        $l1203:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1206));
                        s1206 = NULL;
                        switch ($tmp1205) {
                            case -1: goto $l1215;
                        }
                        $l1215:;
                    }
                    goto $l1195;
                    $l1196:;
                }
                $tmp1187 = -1;
                goto $l1185;
                $l1185:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$334$171188));
                Iter$334$171188 = NULL;
                switch ($tmp1187) {
                    case -1: goto $l1216;
                }
                $l1216:;
            }
            $returnValue627 = result1151;
            $tmp620 = 35;
            goto $l618;
            $l1217:;
            return $returnValue627;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1219, 49);
        panda$core$Bit $tmp1220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$216_9621->$rawValue, $tmp1219);
        if ($tmp1220.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1222 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$216_9621->$data + 24));
            test1221 = *$tmp1222;
            panda$collections$ImmutableArray** $tmp1224 = ((panda$collections$ImmutableArray**) ((char*) $match$216_9621->$data + 32));
            statements1223 = *$tmp1224;
            panda$core$Int64 $tmp1226 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1221);
            result1225 = $tmp1226;
            {
                int $tmp1229;
                {
                    ITable* $tmp1233 = ((panda$collections$Iterable*) statements1223)->$class->itable;
                    while ($tmp1233->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1233 = $tmp1233->next;
                    }
                    $fn1235 $tmp1234 = $tmp1233->methods[0];
                    panda$collections$Iterator* $tmp1236 = $tmp1234(((panda$collections$Iterable*) statements1223));
                    $tmp1232 = $tmp1236;
                    $tmp1231 = $tmp1232;
                    Iter$340$171230 = $tmp1231;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1231));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1232));
                    $l1237:;
                    ITable* $tmp1240 = Iter$340$171230->$class->itable;
                    while ($tmp1240->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1240 = $tmp1240->next;
                    }
                    $fn1242 $tmp1241 = $tmp1240->methods[0];
                    panda$core$Bit $tmp1243 = $tmp1241(Iter$340$171230);
                    panda$core$Bit $tmp1244 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1243);
                    bool $tmp1239 = $tmp1244.value;
                    if (!$tmp1239) goto $l1238;
                    {
                        int $tmp1247;
                        {
                            ITable* $tmp1251 = Iter$340$171230->$class->itable;
                            while ($tmp1251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1251 = $tmp1251->next;
                            }
                            $fn1253 $tmp1252 = $tmp1251->methods[1];
                            panda$core$Object* $tmp1254 = $tmp1252(Iter$340$171230);
                            $tmp1250 = $tmp1254;
                            $tmp1249 = ((org$pandalanguage$pandac$ASTNode*) $tmp1250);
                            s1248 = $tmp1249;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1249));
                            panda$core$Panda$unref$panda$core$Object($tmp1250);
                            panda$core$Int64 $tmp1255 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1248);
                            panda$core$Int64 $tmp1256 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1225, $tmp1255);
                            result1225 = $tmp1256;
                        }
                        $tmp1247 = -1;
                        goto $l1245;
                        $l1245:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1248));
                        s1248 = NULL;
                        switch ($tmp1247) {
                            case -1: goto $l1257;
                        }
                        $l1257:;
                    }
                    goto $l1237;
                    $l1238:;
                }
                $tmp1229 = -1;
                goto $l1227;
                $l1227:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$340$171230));
                Iter$340$171230 = NULL;
                switch ($tmp1229) {
                    case -1: goto $l1258;
                }
                $l1258:;
            }
            $returnValue627 = result1225;
            $tmp620 = 36;
            goto $l618;
            $l1259:;
            return $returnValue627;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1261, false);
            if ($tmp1261.value) goto $l1262; else goto $l1263;
            $l1263:;
            panda$core$String* $tmp1268 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1267, ((panda$core$Object*) p_node));
            $tmp1266 = $tmp1268;
            panda$core$String* $tmp1270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1266, &$s1269);
            $tmp1265 = $tmp1270;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1264, (panda$core$Int64) { 345 }, $tmp1265);
            abort();
            $l1262:;
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
    $tmp620 = -1;
    goto $l618;
    $l618:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp622));
    switch ($tmp620) {
        case 28: goto $l1078;
        case 27: goto $l1073;
        case 8: goto $l753;
        case 22: goto $l1048;
        case 34: goto $l1143;
        case 7: goto $l746;
        case 21: goto $l1039;
        case 36: goto $l1259;
        case 24: goto $l1058;
        case 14: goto $l857;
        case 29: goto $l1083;
        case 1: goto $l642;
        case 25: goto $l1063;
        case 0: goto $l629;
        case 32: goto $l1098;
        case 26: goto $l1070;
        case 18: goto $l1024;
        case 16: goto $l908;
        case 19: goto $l1029;
        case 20: goto $l1034;
        case 4: goto $l692;
        case 11: goto $l805;
        case 5: goto $l734;
        case 3: goto $l687;
        case 15: goto $l903;
        case 10: goto $l798;
        case 6: goto $l741;
        case 33: goto $l1103;
        case 17: goto $l948;
        case 9: goto $l756;
        case 13: goto $l852;
        case 23: goto $l1053;
        case 35: goto $l1217;
        case 2: goto $l647;
        case 30: goto $l1088;
        case -1: goto $l1271;
        case 31: goto $l1093;
        case 12: goto $l847;
    }
    $l1271:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1274;
    panda$core$Int64 $tmp1276;
    panda$core$Int64 c1285;
    panda$core$Int64 $tmp1286;
    panda$collections$Iterator* Iter$353$131290 = NULL;
    panda$collections$Iterator* $tmp1291;
    panda$collections$Iterator* $tmp1292;
    org$pandalanguage$pandac$ASTNode* s1308 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1309;
    panda$core$Object* $tmp1310;
    panda$core$Int64 $tmp1317;
    panda$core$Bit $returnValue1319;
    panda$core$Bit $tmp1320;
    panda$core$Bit $tmp1326;
    panda$core$Bit $tmp1328;
    panda$core$Object* $tmp1275 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp1274 = $tmp1275;
    panda$core$Int64$init$builtin_int64(&$tmp1276, 0);
    panda$core$Bit $tmp1277 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1274)->settings->optimizationLevel, $tmp1276);
    bool $tmp1273 = $tmp1277.value;
    panda$core$Panda$unref$panda$core$Object($tmp1274);
    if (!$tmp1273) goto $l1278;
    panda$core$Bit $tmp1279 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1280 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1279);
    $tmp1273 = $tmp1280.value;
    $l1278:;
    panda$core$Bit $tmp1281 = { $tmp1273 };
    bool $tmp1272 = $tmp1281.value;
    if (!$tmp1272) goto $l1282;
    panda$core$Bit $tmp1283 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1272 = $tmp1283.value;
    $l1282:;
    panda$core$Bit $tmp1284 = { $tmp1272 };
    if ($tmp1284.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1286, 0);
        c1285 = $tmp1286;
        {
            int $tmp1289;
            {
                ITable* $tmp1293 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1293->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1293 = $tmp1293->next;
                }
                $fn1295 $tmp1294 = $tmp1293->methods[0];
                panda$collections$Iterator* $tmp1296 = $tmp1294(((panda$collections$Iterable*) p_statements));
                $tmp1292 = $tmp1296;
                $tmp1291 = $tmp1292;
                Iter$353$131290 = $tmp1291;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1291));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1292));
                $l1297:;
                ITable* $tmp1300 = Iter$353$131290->$class->itable;
                while ($tmp1300->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1300 = $tmp1300->next;
                }
                $fn1302 $tmp1301 = $tmp1300->methods[0];
                panda$core$Bit $tmp1303 = $tmp1301(Iter$353$131290);
                panda$core$Bit $tmp1304 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1303);
                bool $tmp1299 = $tmp1304.value;
                if (!$tmp1299) goto $l1298;
                {
                    int $tmp1307;
                    {
                        ITable* $tmp1311 = Iter$353$131290->$class->itable;
                        while ($tmp1311->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1311 = $tmp1311->next;
                        }
                        $fn1313 $tmp1312 = $tmp1311->methods[1];
                        panda$core$Object* $tmp1314 = $tmp1312(Iter$353$131290);
                        $tmp1310 = $tmp1314;
                        $tmp1309 = ((org$pandalanguage$pandac$ASTNode*) $tmp1310);
                        s1308 = $tmp1309;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1309));
                        panda$core$Panda$unref$panda$core$Object($tmp1310);
                        panda$core$Int64 $tmp1315 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1308);
                        panda$core$Int64 $tmp1316 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1285, $tmp1315);
                        c1285 = $tmp1316;
                        panda$core$Int64$init$builtin_int64(&$tmp1317, 10);
                        panda$core$Bit $tmp1318 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1285, $tmp1317);
                        if ($tmp1318.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp1320, false);
                            $returnValue1319 = $tmp1320;
                            $tmp1307 = 0;
                            goto $l1305;
                            $l1321:;
                            $tmp1289 = 0;
                            goto $l1287;
                            $l1322:;
                            return $returnValue1319;
                        }
                        }
                    }
                    $tmp1307 = -1;
                    goto $l1305;
                    $l1305:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1308));
                    s1308 = NULL;
                    switch ($tmp1307) {
                        case 0: goto $l1321;
                        case -1: goto $l1324;
                    }
                    $l1324:;
                }
                goto $l1297;
                $l1298:;
            }
            $tmp1289 = -1;
            goto $l1287;
            $l1287:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$353$131290));
            Iter$353$131290 = NULL;
            switch ($tmp1289) {
                case -1: goto $l1325;
                case 0: goto $l1322;
            }
            $l1325:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp1326, true);
        $returnValue1319 = $tmp1326;
        return $returnValue1319;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1328, false);
    $returnValue1319 = $tmp1328;
    return $returnValue1319;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawGenerics, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1333 = NULL;
    panda$core$String* $tmp1334;
    panda$core$String* $tmp1335;
    org$pandalanguage$pandac$ASTNode* $match$374_131339 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1340;
    panda$core$Int64 $tmp1341;
    org$pandalanguage$pandac$Position position1343;
    panda$core$String* text1345 = NULL;
    panda$core$String* $tmp1347;
    panda$core$String* $tmp1348;
    panda$core$Bit $tmp1349;
    org$pandalanguage$pandac$Annotations* annotations1354 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1355;
    org$pandalanguage$pandac$Annotations* $tmp1356;
    panda$core$Int64 $tmp1360;
    panda$core$Int64 $tmp1368;
    panda$collections$Array* generics1370 = NULL;
    panda$collections$Array* $tmp1374;
    panda$collections$Array* $tmp1375;
    panda$collections$Array* $tmp1376;
    panda$core$String* fullName1378 = NULL;
    panda$core$String* $tmp1379;
    panda$core$String* $tmp1380;
    panda$core$String* $tmp1381;
    panda$core$String* $tmp1382;
    panda$core$String* $tmp1383;
    panda$collections$Iterator* Iter$389$131393 = NULL;
    panda$collections$Iterator* $tmp1394;
    panda$collections$Iterator* $tmp1395;
    org$pandalanguage$pandac$ASTNode* p1411 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1412;
    panda$core$Object* $tmp1413;
    panda$core$String* parameterName1418 = NULL;
    org$pandalanguage$pandac$Type* bound1419 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$392_171423 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1424;
    panda$core$Int64 $tmp1425;
    panda$core$String* id1427 = NULL;
    panda$core$String* $tmp1429;
    panda$core$String* $tmp1430;
    org$pandalanguage$pandac$Type* $tmp1431;
    org$pandalanguage$pandac$Type* $tmp1432;
    org$pandalanguage$pandac$Type* $tmp1433;
    panda$core$Int64 $tmp1435;
    panda$core$String* id1437 = NULL;
    org$pandalanguage$pandac$ASTNode* type1439 = NULL;
    panda$core$String* $tmp1441;
    panda$core$String* $tmp1442;
    org$pandalanguage$pandac$Type* $tmp1443;
    org$pandalanguage$pandac$Type* $tmp1444;
    org$pandalanguage$pandac$Type* $tmp1445;
    panda$core$Bit $tmp1447;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1452;
    panda$collections$Array* $tmp1459;
    panda$collections$Array* $tmp1460;
    panda$collections$Array* parameters1461 = NULL;
    panda$collections$Array* $tmp1462;
    panda$collections$Array* $tmp1463;
    panda$collections$Iterator* Iter$410$91468 = NULL;
    panda$collections$Iterator* $tmp1469;
    panda$collections$Iterator* $tmp1470;
    org$pandalanguage$pandac$ASTNode* p1486 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1487;
    panda$core$Object* $tmp1488;
    org$pandalanguage$pandac$ASTNode* $match$411_131496 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1497;
    panda$core$Int64 $tmp1498;
    panda$core$String* name1500 = NULL;
    org$pandalanguage$pandac$ASTNode* type1502 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1504;
    org$pandalanguage$pandac$Type* $tmp1506;
    panda$core$Bit $tmp1508;
    org$pandalanguage$pandac$Type* returnType1515 = NULL;
    org$pandalanguage$pandac$Type* $tmp1516;
    org$pandalanguage$pandac$Type* $tmp1517;
    org$pandalanguage$pandac$Type* $tmp1518;
    org$pandalanguage$pandac$Type* $tmp1520;
    org$pandalanguage$pandac$Type* $tmp1521;
    org$pandalanguage$pandac$Type* $tmp1522;
    panda$core$Int64 $tmp1525;
    org$pandalanguage$pandac$Type* $tmp1528;
    panda$core$Int64 $tmp1537;
    panda$core$Int64 $tmp1541;
    panda$core$Int64 $tmp1544;
    org$pandalanguage$pandac$MethodDecl* $returnValue1546;
    org$pandalanguage$pandac$MethodDecl* $tmp1547;
    org$pandalanguage$pandac$MethodDecl* $tmp1548;
    int $tmp1332;
    {
        memset(&doccomment1333, 0, sizeof(doccomment1333));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1334 = doccomment1333;
                $tmp1335 = NULL;
                doccomment1333 = $tmp1335;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1335));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1334));
            }
        }
        }
        else {
        {
            int $tmp1338;
            {
                $tmp1340 = p_rawDoccomment;
                $match$374_131339 = $tmp1340;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1340));
                panda$core$Int64$init$builtin_int64(&$tmp1341, 38);
                panda$core$Bit $tmp1342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374_131339->$rawValue, $tmp1341);
                if ($tmp1342.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1344 = ((org$pandalanguage$pandac$Position*) ((char*) $match$374_131339->$data + 0));
                    position1343 = *$tmp1344;
                    panda$core$String** $tmp1346 = ((panda$core$String**) ((char*) $match$374_131339->$data + 16));
                    text1345 = *$tmp1346;
                    {
                        $tmp1347 = doccomment1333;
                        $tmp1348 = text1345;
                        doccomment1333 = $tmp1348;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1348));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1347));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1349, false);
                    if ($tmp1349.value) goto $l1350; else goto $l1351;
                    $l1351:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1352, (panda$core$Int64) { 378 });
                    abort();
                    $l1350:;
                }
                }
            }
            $tmp1338 = -1;
            goto $l1336;
            $l1336:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1340));
            switch ($tmp1338) {
                case -1: goto $l1353;
            }
            $l1353:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1357 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1356 = $tmp1357;
        $tmp1355 = $tmp1356;
        annotations1354 = $tmp1355;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1355));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1356));
        panda$core$Int64$init$builtin_int64(&$tmp1360, 2);
        panda$core$Bit $tmp1361 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1360);
        bool $tmp1359 = $tmp1361.value;
        if (!$tmp1359) goto $l1362;
        panda$core$Bit $tmp1363 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1359 = $tmp1363.value;
        $l1362:;
        panda$core$Bit $tmp1364 = { $tmp1359 };
        bool $tmp1358 = $tmp1364.value;
        if ($tmp1358) goto $l1365;
        panda$core$Bit $tmp1366 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1354);
        $tmp1358 = $tmp1366.value;
        $l1365:;
        panda$core$Bit $tmp1367 = { $tmp1358 };
        if ($tmp1367.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1368, 256);
            panda$core$Int64 $tmp1369 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1354->flags, $tmp1368);
            annotations1354->flags = $tmp1369;
        }
        }
        memset(&generics1370, 0, sizeof(generics1370));
        if (((panda$core$Bit) { p_rawGenerics != NULL }).value) {
        {
            int $tmp1373;
            {
                {
                    $tmp1374 = generics1370;
                    panda$collections$Array* $tmp1377 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1377);
                    $tmp1376 = $tmp1377;
                    $tmp1375 = $tmp1376;
                    generics1370 = $tmp1375;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1375));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1376));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1374));
                }
                panda$core$String* $tmp1384 = panda$core$String$convert$R$panda$core$String(p_owner->name);
                $tmp1383 = $tmp1384;
                panda$core$String* $tmp1386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1383, &$s1385);
                $tmp1382 = $tmp1386;
                panda$core$String* $tmp1387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1382, p_name);
                $tmp1381 = $tmp1387;
                panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1381, &$s1388);
                $tmp1380 = $tmp1389;
                $tmp1379 = $tmp1380;
                fullName1378 = $tmp1379;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1379));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1380));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1382));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1383));
                {
                    int $tmp1392;
                    {
                        ITable* $tmp1396 = ((panda$collections$Iterable*) p_rawGenerics)->$class->itable;
                        while ($tmp1396->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1396 = $tmp1396->next;
                        }
                        $fn1398 $tmp1397 = $tmp1396->methods[0];
                        panda$collections$Iterator* $tmp1399 = $tmp1397(((panda$collections$Iterable*) p_rawGenerics));
                        $tmp1395 = $tmp1399;
                        $tmp1394 = $tmp1395;
                        Iter$389$131393 = $tmp1394;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1394));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1395));
                        $l1400:;
                        ITable* $tmp1403 = Iter$389$131393->$class->itable;
                        while ($tmp1403->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1403 = $tmp1403->next;
                        }
                        $fn1405 $tmp1404 = $tmp1403->methods[0];
                        panda$core$Bit $tmp1406 = $tmp1404(Iter$389$131393);
                        panda$core$Bit $tmp1407 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1406);
                        bool $tmp1402 = $tmp1407.value;
                        if (!$tmp1402) goto $l1401;
                        {
                            int $tmp1410;
                            {
                                ITable* $tmp1414 = Iter$389$131393->$class->itable;
                                while ($tmp1414->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1414 = $tmp1414->next;
                                }
                                $fn1416 $tmp1415 = $tmp1414->methods[1];
                                panda$core$Object* $tmp1417 = $tmp1415(Iter$389$131393);
                                $tmp1413 = $tmp1417;
                                $tmp1412 = ((org$pandalanguage$pandac$ASTNode*) $tmp1413);
                                p1411 = $tmp1412;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1412));
                                panda$core$Panda$unref$panda$core$Object($tmp1413);
                                memset(&parameterName1418, 0, sizeof(parameterName1418));
                                memset(&bound1419, 0, sizeof(bound1419));
                                int $tmp1422;
                                {
                                    $tmp1424 = p1411;
                                    $match$392_171423 = $tmp1424;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1424));
                                    panda$core$Int64$init$builtin_int64(&$tmp1425, 20);
                                    panda$core$Bit $tmp1426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$392_171423->$rawValue, $tmp1425);
                                    if ($tmp1426.value) {
                                    {
                                        panda$core$String** $tmp1428 = ((panda$core$String**) ((char*) $match$392_171423->$data + 16));
                                        id1427 = *$tmp1428;
                                        {
                                            $tmp1429 = parameterName1418;
                                            $tmp1430 = id1427;
                                            parameterName1418 = $tmp1430;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1430));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1429));
                                        }
                                        {
                                            $tmp1431 = bound1419;
                                            org$pandalanguage$pandac$Type* $tmp1434 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                            $tmp1433 = $tmp1434;
                                            $tmp1432 = $tmp1433;
                                            bound1419 = $tmp1432;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1432));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1431));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp1435, 44);
                                    panda$core$Bit $tmp1436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$392_171423->$rawValue, $tmp1435);
                                    if ($tmp1436.value) {
                                    {
                                        panda$core$String** $tmp1438 = ((panda$core$String**) ((char*) $match$392_171423->$data + 16));
                                        id1437 = *$tmp1438;
                                        org$pandalanguage$pandac$ASTNode** $tmp1440 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$392_171423->$data + 24));
                                        type1439 = *$tmp1440;
                                        {
                                            $tmp1441 = parameterName1418;
                                            $tmp1442 = id1437;
                                            parameterName1418 = $tmp1442;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1442));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1441));
                                        }
                                        {
                                            $tmp1443 = bound1419;
                                            org$pandalanguage$pandac$Type* $tmp1446 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1439);
                                            $tmp1445 = $tmp1446;
                                            $tmp1444 = $tmp1445;
                                            bound1419 = $tmp1444;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1444));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1445));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1443));
                                        }
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp1447, false);
                                        if ($tmp1447.value) goto $l1448; else goto $l1449;
                                        $l1449:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1450, (panda$core$Int64) { 400 });
                                        abort();
                                        $l1448:;
                                    }
                                    }
                                    }
                                }
                                $tmp1422 = -1;
                                goto $l1420;
                                $l1420:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1424));
                                switch ($tmp1422) {
                                    case -1: goto $l1451;
                                }
                                $l1451:;
                                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1453 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                                org$pandalanguage$pandac$Position $tmp1455 = (($fn1454) p1411->$class->vtable[2])(p1411);
                                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1453, $tmp1455, fullName1378, parameterName1418, bound1419);
                                $tmp1452 = $tmp1453;
                                panda$collections$Array$add$panda$collections$Array$T(generics1370, ((panda$core$Object*) $tmp1452));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1452));
                            }
                            $tmp1410 = -1;
                            goto $l1408;
                            $l1408:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1419));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameterName1418));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1411));
                            p1411 = NULL;
                            switch ($tmp1410) {
                                case -1: goto $l1456;
                            }
                            $l1456:;
                        }
                        goto $l1400;
                        $l1401:;
                    }
                    $tmp1392 = -1;
                    goto $l1390;
                    $l1390:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$389$131393));
                    Iter$389$131393 = NULL;
                    switch ($tmp1392) {
                        case -1: goto $l1457;
                    }
                    $l1457:;
                }
            }
            $tmp1373 = -1;
            goto $l1371;
            $l1371:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1378));
            fullName1378 = NULL;
            switch ($tmp1373) {
                case -1: goto $l1458;
            }
            $l1458:;
        }
        }
        else {
        {
            {
                $tmp1459 = generics1370;
                $tmp1460 = NULL;
                generics1370 = $tmp1460;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1460));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1459));
            }
        }
        }
        panda$collections$Array* $tmp1464 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1464);
        $tmp1463 = $tmp1464;
        $tmp1462 = $tmp1463;
        parameters1461 = $tmp1462;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1462));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1463));
        {
            int $tmp1467;
            {
                ITable* $tmp1471 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1471->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1471 = $tmp1471->next;
                }
                $fn1473 $tmp1472 = $tmp1471->methods[0];
                panda$collections$Iterator* $tmp1474 = $tmp1472(((panda$collections$Iterable*) p_rawParameters));
                $tmp1470 = $tmp1474;
                $tmp1469 = $tmp1470;
                Iter$410$91468 = $tmp1469;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1469));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1470));
                $l1475:;
                ITable* $tmp1478 = Iter$410$91468->$class->itable;
                while ($tmp1478->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1478 = $tmp1478->next;
                }
                $fn1480 $tmp1479 = $tmp1478->methods[0];
                panda$core$Bit $tmp1481 = $tmp1479(Iter$410$91468);
                panda$core$Bit $tmp1482 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1481);
                bool $tmp1477 = $tmp1482.value;
                if (!$tmp1477) goto $l1476;
                {
                    int $tmp1485;
                    {
                        ITable* $tmp1489 = Iter$410$91468->$class->itable;
                        while ($tmp1489->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1489 = $tmp1489->next;
                        }
                        $fn1491 $tmp1490 = $tmp1489->methods[1];
                        panda$core$Object* $tmp1492 = $tmp1490(Iter$410$91468);
                        $tmp1488 = $tmp1492;
                        $tmp1487 = ((org$pandalanguage$pandac$ASTNode*) $tmp1488);
                        p1486 = $tmp1487;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1487));
                        panda$core$Panda$unref$panda$core$Object($tmp1488);
                        int $tmp1495;
                        {
                            $tmp1497 = p1486;
                            $match$411_131496 = $tmp1497;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1497));
                            panda$core$Int64$init$builtin_int64(&$tmp1498, 31);
                            panda$core$Bit $tmp1499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$411_131496->$rawValue, $tmp1498);
                            if ($tmp1499.value) {
                            {
                                panda$core$String** $tmp1501 = ((panda$core$String**) ((char*) $match$411_131496->$data + 16));
                                name1500 = *$tmp1501;
                                org$pandalanguage$pandac$ASTNode** $tmp1503 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$411_131496->$data + 24));
                                type1502 = *$tmp1503;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1505 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1507 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1502);
                                $tmp1506 = $tmp1507;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1505, name1500, $tmp1506);
                                $tmp1504 = $tmp1505;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1461, ((panda$core$Object*) $tmp1504));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1504));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1506));
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1508, false);
                                if ($tmp1508.value) goto $l1509; else goto $l1510;
                                $l1510:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1511, (panda$core$Int64) { 415 });
                                abort();
                                $l1509:;
                            }
                            }
                        }
                        $tmp1495 = -1;
                        goto $l1493;
                        $l1493:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1497));
                        switch ($tmp1495) {
                            case -1: goto $l1512;
                        }
                        $l1512:;
                    }
                    $tmp1485 = -1;
                    goto $l1483;
                    $l1483:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1486));
                    p1486 = NULL;
                    switch ($tmp1485) {
                        case -1: goto $l1513;
                    }
                    $l1513:;
                }
                goto $l1475;
                $l1476:;
            }
            $tmp1467 = -1;
            goto $l1465;
            $l1465:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$410$91468));
            Iter$410$91468 = NULL;
            switch ($tmp1467) {
                case -1: goto $l1514;
            }
            $l1514:;
        }
        memset(&returnType1515, 0, sizeof(returnType1515));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1516 = returnType1515;
                org$pandalanguage$pandac$Type* $tmp1519 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1518 = $tmp1519;
                $tmp1517 = $tmp1518;
                returnType1515 = $tmp1517;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1517));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1518));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1516));
            }
        }
        }
        else {
        {
            {
                $tmp1520 = returnType1515;
                org$pandalanguage$pandac$Type* $tmp1523 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1522 = $tmp1523;
                $tmp1521 = $tmp1522;
                returnType1515 = $tmp1521;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1521));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1522));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1520));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1525, 1);
        panda$core$Bit $tmp1526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1525);
        bool $tmp1524 = $tmp1526.value;
        if (!$tmp1524) goto $l1527;
        org$pandalanguage$pandac$Type* $tmp1529 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1528 = $tmp1529;
        panda$core$Bit $tmp1530 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1515, $tmp1528);
        $tmp1524 = $tmp1530.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1528));
        $l1527:;
        panda$core$Bit $tmp1531 = { $tmp1524 };
        if ($tmp1531.value) {
        {
            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1532);
        }
        }
        bool $tmp1533 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1533) goto $l1534;
        panda$core$Bit $tmp1535 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1354, p_statements);
        $tmp1533 = $tmp1535.value;
        $l1534:;
        panda$core$Bit $tmp1536 = { $tmp1533 };
        if ($tmp1536.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1537, 1024);
            panda$core$Int64 $tmp1538 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1354->flags, $tmp1537);
            annotations1354->flags = $tmp1538;
        }
        }
        bool $tmp1539 = ((panda$core$Bit) { p_statements == NULL }).value;
        if (!$tmp1539) goto $l1540;
        panda$core$Int64$init$builtin_int64(&$tmp1541, 1);
        panda$core$Bit $tmp1542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, $tmp1541);
        $tmp1539 = $tmp1542.value;
        $l1540:;
        panda$core$Bit $tmp1543 = { $tmp1539 };
        if ($tmp1543.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1544, 512);
            panda$core$Int64 $tmp1545 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1354->flags, $tmp1544);
            annotations1354->flags = $tmp1545;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1549 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1549, p_owner, p_position, doccomment1333, annotations1354, p_kind, p_name, generics1370, parameters1461, returnType1515, p_statements);
        $tmp1548 = $tmp1549;
        $tmp1547 = $tmp1548;
        $returnValue1546 = $tmp1547;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1548));
        $tmp1332 = 0;
        goto $l1330;
        $l1550:;
        return $returnValue1546;
    }
    $l1330:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1515));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1461));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics1370));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1354));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1333));
    annotations1354 = NULL;
    parameters1461 = NULL;
    switch ($tmp1332) {
        case 0: goto $l1550;
    }
    $l1552:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$439_91556 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1557;
    panda$core$Int64 $tmp1558;
    org$pandalanguage$pandac$Position position1560;
    org$pandalanguage$pandac$ASTNode* dc1562 = NULL;
    panda$collections$ImmutableArray* annotations1564 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1566 = NULL;
    panda$core$Int64 $tmp1568;
    org$pandalanguage$pandac$Position position1570;
    org$pandalanguage$pandac$ASTNode* dc1572 = NULL;
    panda$collections$ImmutableArray* annotations1574 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1576;
    panda$core$String* name1578 = NULL;
    panda$collections$ImmutableArray* generics1580 = NULL;
    panda$collections$ImmutableArray* parameters1582 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1584 = NULL;
    panda$collections$ImmutableArray* statements1586 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1591 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1592;
    org$pandalanguage$pandac$MethodDecl* $tmp1593;
    panda$core$Int64 $tmp1596;
    org$pandalanguage$pandac$Position position1598;
    org$pandalanguage$pandac$ASTNode* dc1600 = NULL;
    panda$collections$ImmutableArray* annotations1602 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1604;
    panda$core$String* name1606 = NULL;
    panda$collections$ImmutableArray* generics1608 = NULL;
    panda$collections$ImmutableArray* supertypes1610 = NULL;
    panda$collections$ImmutableArray* members1612 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1617 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1618;
    org$pandalanguage$pandac$ClassDecl* $tmp1619;
    panda$core$Weak* $tmp1621;
    panda$core$Weak* $tmp1622;
    panda$core$Weak* $tmp1623;
    panda$core$String* $tmp1625;
    org$pandalanguage$pandac$Alias* $tmp1632;
    panda$core$String* $tmp1634;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1635;
    panda$core$Int64 $tmp1637;
    panda$core$Bit $tmp1639;
    org$pandalanguage$pandac$Position $tmp1641;
    org$pandalanguage$pandac$Alias* $tmp1642;
    panda$core$String* $tmp1644;
    org$pandalanguage$pandac$Position $tmp1646;
    panda$core$Int64 $tmp1648;
    org$pandalanguage$pandac$Position position1650;
    org$pandalanguage$pandac$ASTNode* dc1652 = NULL;
    panda$core$String* name1654 = NULL;
    panda$collections$ImmutableArray* fields1656 = NULL;
    panda$core$Bit $tmp1658;
    panda$core$String* $tmp1662;
    panda$core$String* $tmp1663;
    int $tmp1555;
    {
        $tmp1557 = p_node;
        $match$439_91556 = $tmp1557;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1557));
        panda$core$Int64$init$builtin_int64(&$tmp1558, 16);
        panda$core$Bit $tmp1559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439_91556->$rawValue, $tmp1558);
        if ($tmp1559.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1561 = ((org$pandalanguage$pandac$Position*) ((char*) $match$439_91556->$data + 0));
            position1560 = *$tmp1561;
            org$pandalanguage$pandac$ASTNode** $tmp1563 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$439_91556->$data + 16));
            dc1562 = *$tmp1563;
            panda$collections$ImmutableArray** $tmp1565 = ((panda$collections$ImmutableArray**) ((char*) $match$439_91556->$data + 24));
            annotations1564 = *$tmp1565;
            org$pandalanguage$pandac$ASTNode** $tmp1567 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$439_91556->$data + 32));
            varDecl1566 = *$tmp1567;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1560, dc1562, annotations1564, varDecl1566);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1568, 26);
        panda$core$Bit $tmp1569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439_91556->$rawValue, $tmp1568);
        if ($tmp1569.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1571 = ((org$pandalanguage$pandac$Position*) ((char*) $match$439_91556->$data + 0));
            position1570 = *$tmp1571;
            org$pandalanguage$pandac$ASTNode** $tmp1573 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$439_91556->$data + 16));
            dc1572 = *$tmp1573;
            panda$collections$ImmutableArray** $tmp1575 = ((panda$collections$ImmutableArray**) ((char*) $match$439_91556->$data + 24));
            annotations1574 = *$tmp1575;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1577 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$439_91556->$data + 32));
            kind1576 = *$tmp1577;
            panda$core$String** $tmp1579 = ((panda$core$String**) ((char*) $match$439_91556->$data + 40));
            name1578 = *$tmp1579;
            panda$collections$ImmutableArray** $tmp1581 = ((panda$collections$ImmutableArray**) ((char*) $match$439_91556->$data + 48));
            generics1580 = *$tmp1581;
            panda$collections$ImmutableArray** $tmp1583 = ((panda$collections$ImmutableArray**) ((char*) $match$439_91556->$data + 56));
            parameters1582 = *$tmp1583;
            org$pandalanguage$pandac$ASTNode** $tmp1585 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$439_91556->$data + 64));
            returnType1584 = *$tmp1585;
            panda$collections$ImmutableArray** $tmp1587 = ((panda$collections$ImmutableArray**) ((char*) $match$439_91556->$data + 72));
            statements1586 = *$tmp1587;
            int $tmp1590;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1594 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1570, dc1572, annotations1574, kind1576, name1578, generics1580, parameters1582, returnType1584, statements1586);
                $tmp1593 = $tmp1594;
                $tmp1592 = $tmp1593;
                m1591 = $tmp1592;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1592));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1593));
                if (((panda$core$Bit) { m1591 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1591));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1591));
                }
                }
            }
            $tmp1590 = -1;
            goto $l1588;
            $l1588:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1591));
            m1591 = NULL;
            switch ($tmp1590) {
                case -1: goto $l1595;
            }
            $l1595:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1596, 11);
        panda$core$Bit $tmp1597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439_91556->$rawValue, $tmp1596);
        if ($tmp1597.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1599 = ((org$pandalanguage$pandac$Position*) ((char*) $match$439_91556->$data + 0));
            position1598 = *$tmp1599;
            org$pandalanguage$pandac$ASTNode** $tmp1601 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$439_91556->$data + 16));
            dc1600 = *$tmp1601;
            panda$collections$ImmutableArray** $tmp1603 = ((panda$collections$ImmutableArray**) ((char*) $match$439_91556->$data + 24));
            annotations1602 = *$tmp1603;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1605 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$439_91556->$data + 32));
            kind1604 = *$tmp1605;
            panda$core$String** $tmp1607 = ((panda$core$String**) ((char*) $match$439_91556->$data + 40));
            name1606 = *$tmp1607;
            panda$collections$ImmutableArray** $tmp1609 = ((panda$collections$ImmutableArray**) ((char*) $match$439_91556->$data + 48));
            generics1608 = *$tmp1609;
            panda$collections$ImmutableArray** $tmp1611 = ((panda$collections$ImmutableArray**) ((char*) $match$439_91556->$data + 56));
            supertypes1610 = *$tmp1611;
            panda$collections$ImmutableArray** $tmp1613 = ((panda$collections$ImmutableArray**) ((char*) $match$439_91556->$data + 64));
            members1612 = *$tmp1613;
            int $tmp1616;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1620 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1598, dc1600, annotations1602, kind1604, name1606, generics1608, supertypes1610, members1612);
                $tmp1619 = $tmp1620;
                $tmp1618 = $tmp1619;
                inner1617 = $tmp1618;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1618));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1619));
                if (((panda$core$Bit) { inner1617 != NULL }).value) {
                {
                    {
                        $tmp1621 = inner1617->owner;
                        panda$core$Weak* $tmp1624 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1624, ((panda$core$Object*) p_cl));
                        $tmp1623 = $tmp1624;
                        $tmp1622 = $tmp1623;
                        inner1617->owner = $tmp1622;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1622));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1623));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1621));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1617));
                    panda$core$String* $tmp1627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1626);
                    $tmp1625 = $tmp1627;
                    panda$core$Bit $tmp1628 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1617->name, $tmp1625);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1625));
                    if ($tmp1628.value) goto $l1629; else goto $l1630;
                    $l1630:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1631, (panda$core$Int64) { 457 });
                    abort();
                    $l1629:;
                    org$pandalanguage$pandac$Alias* $tmp1633 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1636 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64$init$builtin_int64(&$tmp1637, 1);
                    panda$core$Int64 $tmp1638 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1636, $tmp1637);
                    panda$core$Bit$init$builtin_bit(&$tmp1639, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1635, ((panda$core$Int64$nullable) { $tmp1638, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1639);
                    panda$core$String* $tmp1640 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1617->name, $tmp1635);
                    $tmp1634 = $tmp1640;
                    org$pandalanguage$pandac$Position$init(&$tmp1641);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1633, $tmp1634, inner1617->name, $tmp1641);
                    $tmp1632 = $tmp1633;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1632));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1632));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1634));
                    org$pandalanguage$pandac$Alias* $tmp1643 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1645 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1644 = $tmp1645;
                    org$pandalanguage$pandac$Position$init(&$tmp1646);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1643, $tmp1644, p_cl->name, $tmp1646);
                    $tmp1642 = $tmp1643;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1617->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1642));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1642));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1644));
                }
                }
            }
            $tmp1616 = -1;
            goto $l1614;
            $l1614:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1617));
            inner1617 = NULL;
            switch ($tmp1616) {
                case -1: goto $l1647;
            }
            $l1647:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1648, 9);
        panda$core$Bit $tmp1649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$439_91556->$rawValue, $tmp1648);
        if ($tmp1649.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1651 = ((org$pandalanguage$pandac$Position*) ((char*) $match$439_91556->$data + 0));
            position1650 = *$tmp1651;
            org$pandalanguage$pandac$ASTNode** $tmp1653 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$439_91556->$data + 16));
            dc1652 = *$tmp1653;
            panda$core$String** $tmp1655 = ((panda$core$String**) ((char*) $match$439_91556->$data + 24));
            name1654 = *$tmp1655;
            panda$collections$ImmutableArray** $tmp1657 = ((panda$collections$ImmutableArray**) ((char*) $match$439_91556->$data + 32));
            fields1656 = *$tmp1657;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1650, dc1652, name1654, fields1656);
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1658, false);
            if ($tmp1658.value) goto $l1659; else goto $l1660;
            $l1660:;
            panda$core$String* $tmp1665 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1664, ((panda$core$Object*) p_node));
            $tmp1663 = $tmp1665;
            panda$core$String* $tmp1667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1663, &$s1666);
            $tmp1662 = $tmp1667;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1661, (panda$core$Int64) { 465 }, $tmp1662);
            abort();
            $l1659:;
        }
        }
        }
        }
        }
    }
    $tmp1555 = -1;
    goto $l1553;
    $l1553:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1557));
    switch ($tmp1555) {
        case -1: goto $l1668;
    }
    $l1668:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1672 = NULL;
    panda$core$String* $tmp1673;
    panda$core$String* $tmp1674;
    org$pandalanguage$pandac$ASTNode* $match$477_131678 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1679;
    panda$core$Int64 $tmp1680;
    org$pandalanguage$pandac$Position position1682;
    panda$core$String* text1684 = NULL;
    panda$core$String* $tmp1686;
    panda$core$String* $tmp1687;
    panda$core$Bit $tmp1688;
    panda$collections$Array* fields1693 = NULL;
    panda$collections$Array* $tmp1694;
    panda$collections$Array* $tmp1695;
    panda$collections$Iterator* Iter$485$91700 = NULL;
    panda$collections$Iterator* $tmp1701;
    panda$collections$Iterator* $tmp1702;
    org$pandalanguage$pandac$ASTNode* t1718 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1719;
    panda$core$Object* $tmp1720;
    org$pandalanguage$pandac$Type* $tmp1725;
    org$pandalanguage$pandac$ChoiceEntry* entry1729 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1730;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1731;
    int $tmp1671;
    {
        memset(&doccomment1672, 0, sizeof(doccomment1672));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1673 = doccomment1672;
                $tmp1674 = NULL;
                doccomment1672 = $tmp1674;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1674));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1673));
            }
        }
        }
        else {
        {
            int $tmp1677;
            {
                $tmp1679 = p_rawDoccomment;
                $match$477_131678 = $tmp1679;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1679));
                panda$core$Int64$init$builtin_int64(&$tmp1680, 38);
                panda$core$Bit $tmp1681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$477_131678->$rawValue, $tmp1680);
                if ($tmp1681.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1683 = ((org$pandalanguage$pandac$Position*) ((char*) $match$477_131678->$data + 0));
                    position1682 = *$tmp1683;
                    panda$core$String** $tmp1685 = ((panda$core$String**) ((char*) $match$477_131678->$data + 16));
                    text1684 = *$tmp1685;
                    {
                        $tmp1686 = doccomment1672;
                        $tmp1687 = text1684;
                        doccomment1672 = $tmp1687;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1687));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1686));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1688, false);
                    if ($tmp1688.value) goto $l1689; else goto $l1690;
                    $l1690:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1691, (panda$core$Int64) { 481 });
                    abort();
                    $l1689:;
                }
                }
            }
            $tmp1677 = -1;
            goto $l1675;
            $l1675:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1679));
            switch ($tmp1677) {
                case -1: goto $l1692;
            }
            $l1692:;
        }
        }
        panda$collections$Array* $tmp1696 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1696);
        $tmp1695 = $tmp1696;
        $tmp1694 = $tmp1695;
        fields1693 = $tmp1694;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1694));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1695));
        {
            int $tmp1699;
            {
                ITable* $tmp1703 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1703->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1703 = $tmp1703->next;
                }
                $fn1705 $tmp1704 = $tmp1703->methods[0];
                panda$collections$Iterator* $tmp1706 = $tmp1704(((panda$collections$Iterable*) p_rawFields));
                $tmp1702 = $tmp1706;
                $tmp1701 = $tmp1702;
                Iter$485$91700 = $tmp1701;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1701));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1702));
                $l1707:;
                ITable* $tmp1710 = Iter$485$91700->$class->itable;
                while ($tmp1710->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1710 = $tmp1710->next;
                }
                $fn1712 $tmp1711 = $tmp1710->methods[0];
                panda$core$Bit $tmp1713 = $tmp1711(Iter$485$91700);
                panda$core$Bit $tmp1714 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1713);
                bool $tmp1709 = $tmp1714.value;
                if (!$tmp1709) goto $l1708;
                {
                    int $tmp1717;
                    {
                        ITable* $tmp1721 = Iter$485$91700->$class->itable;
                        while ($tmp1721->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1721 = $tmp1721->next;
                        }
                        $fn1723 $tmp1722 = $tmp1721->methods[1];
                        panda$core$Object* $tmp1724 = $tmp1722(Iter$485$91700);
                        $tmp1720 = $tmp1724;
                        $tmp1719 = ((org$pandalanguage$pandac$ASTNode*) $tmp1720);
                        t1718 = $tmp1719;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1719));
                        panda$core$Panda$unref$panda$core$Object($tmp1720);
                        org$pandalanguage$pandac$Type* $tmp1726 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1718);
                        $tmp1725 = $tmp1726;
                        panda$collections$Array$add$panda$collections$Array$T(fields1693, ((panda$core$Object*) $tmp1725));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1725));
                    }
                    $tmp1717 = -1;
                    goto $l1715;
                    $l1715:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1718));
                    t1718 = NULL;
                    switch ($tmp1717) {
                        case -1: goto $l1727;
                    }
                    $l1727:;
                }
                goto $l1707;
                $l1708:;
            }
            $tmp1699 = -1;
            goto $l1697;
            $l1697:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$485$91700));
            Iter$485$91700 = NULL;
            switch ($tmp1699) {
                case -1: goto $l1728;
            }
            $l1728:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1732 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1733 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1732, p_cl, p_position, p_name, doccomment1672, $tmp1733, ((panda$collections$ListView*) fields1693));
        $tmp1731 = $tmp1732;
        $tmp1730 = $tmp1731;
        entry1729 = $tmp1730;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1730));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1731));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1729));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1729));
    }
    $tmp1671 = -1;
    goto $l1669;
    $l1669:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1729));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1693));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1672));
    fields1693 = NULL;
    entry1729 = NULL;
    switch ($tmp1671) {
        case -1: goto $l1734;
    }
    $l1734:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1738 = NULL;
    panda$core$String* $tmp1741;
    panda$core$String* $tmp1742;
    panda$core$String* $tmp1743;
    panda$core$String* $tmp1744;
    panda$core$String* $tmp1745;
    panda$core$String* $tmp1746;
    panda$core$String* $tmp1753;
    panda$core$String* $tmp1754;
    panda$core$String* doccomment1755 = NULL;
    panda$core$String* $tmp1756;
    panda$core$String* $tmp1757;
    org$pandalanguage$pandac$ASTNode* $match$511_131761 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1762;
    panda$core$Int64 $tmp1763;
    org$pandalanguage$pandac$Position position1765;
    panda$core$String* text1767 = NULL;
    panda$core$String* $tmp1769;
    panda$core$String* $tmp1770;
    panda$core$Bit $tmp1771;
    org$pandalanguage$pandac$Annotations* annotations1776 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1777;
    org$pandalanguage$pandac$Annotations* $tmp1778;
    panda$collections$Array* parameters1780 = NULL;
    panda$collections$Array* $tmp1781;
    panda$collections$Array* $tmp1782;
    panda$collections$Iterator* Iter$521$131787 = NULL;
    panda$collections$Iterator* $tmp1788;
    panda$collections$Iterator* $tmp1789;
    org$pandalanguage$pandac$ASTNode* p1805 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1806;
    panda$core$Object* $tmp1807;
    panda$core$String* name1812 = NULL;
    org$pandalanguage$pandac$Type* bound1813 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$524_171817 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1818;
    panda$core$Int64 $tmp1819;
    panda$core$String* id1821 = NULL;
    panda$core$String* $tmp1823;
    panda$core$String* $tmp1824;
    org$pandalanguage$pandac$Type* $tmp1825;
    org$pandalanguage$pandac$Type* $tmp1826;
    org$pandalanguage$pandac$Type* $tmp1827;
    panda$core$Int64 $tmp1829;
    panda$core$String* id1831 = NULL;
    org$pandalanguage$pandac$ASTNode* type1833 = NULL;
    panda$core$String* $tmp1835;
    panda$core$String* $tmp1836;
    org$pandalanguage$pandac$Type* $tmp1837;
    org$pandalanguage$pandac$Type* $tmp1838;
    org$pandalanguage$pandac$Type* $tmp1839;
    panda$core$Bit $tmp1841;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1846;
    panda$core$Int64 $tmp1852;
    panda$collections$Array* supertypes1855 = NULL;
    panda$collections$Array* $tmp1856;
    panda$collections$Array* $tmp1857;
    panda$core$Int64 $tmp1859;
    panda$collections$Iterator* Iter$545$131865 = NULL;
    panda$collections$Iterator* $tmp1866;
    panda$collections$Iterator* $tmp1867;
    org$pandalanguage$pandac$ASTNode* s1883 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1884;
    panda$core$Object* $tmp1885;
    org$pandalanguage$pandac$Type* $tmp1890;
    org$pandalanguage$pandac$ClassDecl* result1894 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1895;
    org$pandalanguage$pandac$ClassDecl* $tmp1896;
    panda$core$Object* $tmp1898;
    panda$core$Object* $tmp1900;
    panda$core$Int64 $tmp1902;
    org$pandalanguage$pandac$FieldDecl* rawValue1907 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1908;
    org$pandalanguage$pandac$FieldDecl* $tmp1909;
    org$pandalanguage$pandac$Annotations* $tmp1911;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1913;
    panda$core$Int64 $tmp1914;
    org$pandalanguage$pandac$Type* $tmp1916;
    org$pandalanguage$pandac$FieldDecl* data1918 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1919;
    org$pandalanguage$pandac$FieldDecl* $tmp1920;
    org$pandalanguage$pandac$Annotations* $tmp1922;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1924;
    panda$core$Int64 $tmp1925;
    org$pandalanguage$pandac$Type* $tmp1927;
    panda$collections$Iterator* Iter$562$91933 = NULL;
    panda$collections$Iterator* $tmp1934;
    panda$collections$Iterator* $tmp1935;
    org$pandalanguage$pandac$ASTNode* m1951 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1952;
    panda$core$Object* $tmp1953;
    org$pandalanguage$pandac$ASTNode* $match$563_131961 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1962;
    panda$core$Int64 $tmp1963;
    org$pandalanguage$pandac$Position mPosition1965;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1967;
    panda$core$Int64 $tmp1969;
    org$pandalanguage$pandac$ClassDecl$Kind $match$566_251971;
    panda$core$Int64 $tmp1972;
    panda$core$Int64 $tmp1974;
    panda$core$Int64 $tmp1977;
    panda$core$Bit foundInit1983;
    panda$core$Bit $tmp1984;
    panda$core$Bit foundCleanup1985;
    panda$core$Bit $tmp1986;
    panda$collections$Iterator* Iter$581$91990 = NULL;
    panda$collections$Iterator* $tmp1991;
    panda$collections$Iterator* $tmp1992;
    org$pandalanguage$pandac$MethodDecl* m2008 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2009;
    panda$core$Object* $tmp2010;
    panda$core$Int64 $tmp2015;
    panda$core$Bit $tmp2017;
    panda$core$Int64 $tmp2023;
    panda$core$Bit $tmp2026;
    panda$core$Int64 $tmp2027;
    panda$core$Int64 $tmp2036;
    org$pandalanguage$pandac$MethodDecl* defaultInit2046 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2047;
    org$pandalanguage$pandac$MethodDecl* $tmp2048;
    org$pandalanguage$pandac$Annotations* $tmp2050;
    panda$core$Int64 $tmp2052;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2053;
    panda$core$Int64 $tmp2054;
    panda$collections$Array* $tmp2056;
    panda$collections$Array* $tmp2058;
    org$pandalanguage$pandac$Type* $tmp2060;
    panda$collections$ImmutableArray* $tmp2062;
    panda$core$Int64 $tmp2070;
    panda$core$Int64 $tmp2073;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2084 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2085;
    org$pandalanguage$pandac$MethodDecl* $tmp2086;
    org$pandalanguage$pandac$Annotations* $tmp2088;
    panda$core$Int64 $tmp2090;
    panda$core$Int64 $tmp2091;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2093;
    panda$core$Int64 $tmp2094;
    panda$collections$Array* $tmp2096;
    panda$collections$Array* $tmp2098;
    org$pandalanguage$pandac$Type* $tmp2100;
    panda$collections$ImmutableArray* $tmp2102;
    panda$core$Int64 $tmp2105;
    panda$core$Bit haveFields2107;
    panda$core$Bit $tmp2108;
    panda$collections$Iterator* Iter$611$132112 = NULL;
    panda$collections$Iterator* $tmp2113;
    panda$collections$Iterator* $tmp2114;
    org$pandalanguage$pandac$ChoiceEntry* e2130 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2131;
    panda$core$Object* $tmp2132;
    panda$core$Int64 $tmp2138;
    panda$core$Bit $tmp2140;
    org$pandalanguage$pandac$Type* $tmp2145;
    org$pandalanguage$pandac$Type* $tmp2146;
    org$pandalanguage$pandac$Type* $tmp2147;
    panda$core$Object* $tmp2149;
    panda$core$Object* $tmp2150;
    org$pandalanguage$pandac$ClassDecl* $returnValue2153;
    org$pandalanguage$pandac$ClassDecl* $tmp2154;
    int $tmp1737;
    {
        memset(&fullName1738, 0, sizeof(fullName1738));
        panda$core$Bit $tmp1740 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1739);
        if ($tmp1740.value) {
        {
            {
                $tmp1741 = fullName1738;
                panda$core$String* $tmp1747 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1746 = $tmp1747;
                panda$core$String* $tmp1749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1746, &$s1748);
                $tmp1745 = $tmp1749;
                panda$core$String* $tmp1750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1745, p_name);
                $tmp1744 = $tmp1750;
                panda$core$String* $tmp1752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1744, &$s1751);
                $tmp1743 = $tmp1752;
                $tmp1742 = $tmp1743;
                fullName1738 = $tmp1742;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1742));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1743));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1744));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1745));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1746));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1741));
            }
        }
        }
        else {
        {
            {
                $tmp1753 = fullName1738;
                $tmp1754 = p_name;
                fullName1738 = $tmp1754;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1754));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1753));
            }
        }
        }
        memset(&doccomment1755, 0, sizeof(doccomment1755));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1756 = doccomment1755;
                $tmp1757 = NULL;
                doccomment1755 = $tmp1757;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1757));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1756));
            }
        }
        }
        else {
        {
            int $tmp1760;
            {
                $tmp1762 = p_rawDoccomment;
                $match$511_131761 = $tmp1762;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1762));
                panda$core$Int64$init$builtin_int64(&$tmp1763, 38);
                panda$core$Bit $tmp1764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$511_131761->$rawValue, $tmp1763);
                if ($tmp1764.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1766 = ((org$pandalanguage$pandac$Position*) ((char*) $match$511_131761->$data + 0));
                    position1765 = *$tmp1766;
                    panda$core$String** $tmp1768 = ((panda$core$String**) ((char*) $match$511_131761->$data + 16));
                    text1767 = *$tmp1768;
                    {
                        $tmp1769 = doccomment1755;
                        $tmp1770 = text1767;
                        doccomment1755 = $tmp1770;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1770));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1769));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1771, false);
                    if ($tmp1771.value) goto $l1772; else goto $l1773;
                    $l1773:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1774, (panda$core$Int64) { 515 });
                    abort();
                    $l1772:;
                }
                }
            }
            $tmp1760 = -1;
            goto $l1758;
            $l1758:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1762));
            switch ($tmp1760) {
                case -1: goto $l1775;
            }
            $l1775:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1779 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1778 = $tmp1779;
        $tmp1777 = $tmp1778;
        annotations1776 = $tmp1777;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1777));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1778));
        panda$collections$Array* $tmp1783 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1783);
        $tmp1782 = $tmp1783;
        $tmp1781 = $tmp1782;
        parameters1780 = $tmp1781;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1781));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1782));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1786;
                {
                    ITable* $tmp1790 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1790->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1790 = $tmp1790->next;
                    }
                    $fn1792 $tmp1791 = $tmp1790->methods[0];
                    panda$collections$Iterator* $tmp1793 = $tmp1791(((panda$collections$Iterable*) p_generics));
                    $tmp1789 = $tmp1793;
                    $tmp1788 = $tmp1789;
                    Iter$521$131787 = $tmp1788;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1788));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1789));
                    $l1794:;
                    ITable* $tmp1797 = Iter$521$131787->$class->itable;
                    while ($tmp1797->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1797 = $tmp1797->next;
                    }
                    $fn1799 $tmp1798 = $tmp1797->methods[0];
                    panda$core$Bit $tmp1800 = $tmp1798(Iter$521$131787);
                    panda$core$Bit $tmp1801 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1800);
                    bool $tmp1796 = $tmp1801.value;
                    if (!$tmp1796) goto $l1795;
                    {
                        int $tmp1804;
                        {
                            ITable* $tmp1808 = Iter$521$131787->$class->itable;
                            while ($tmp1808->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1808 = $tmp1808->next;
                            }
                            $fn1810 $tmp1809 = $tmp1808->methods[1];
                            panda$core$Object* $tmp1811 = $tmp1809(Iter$521$131787);
                            $tmp1807 = $tmp1811;
                            $tmp1806 = ((org$pandalanguage$pandac$ASTNode*) $tmp1807);
                            p1805 = $tmp1806;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1806));
                            panda$core$Panda$unref$panda$core$Object($tmp1807);
                            memset(&name1812, 0, sizeof(name1812));
                            memset(&bound1813, 0, sizeof(bound1813));
                            int $tmp1816;
                            {
                                $tmp1818 = p1805;
                                $match$524_171817 = $tmp1818;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1818));
                                panda$core$Int64$init$builtin_int64(&$tmp1819, 20);
                                panda$core$Bit $tmp1820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_171817->$rawValue, $tmp1819);
                                if ($tmp1820.value) {
                                {
                                    panda$core$String** $tmp1822 = ((panda$core$String**) ((char*) $match$524_171817->$data + 16));
                                    id1821 = *$tmp1822;
                                    {
                                        $tmp1823 = name1812;
                                        $tmp1824 = id1821;
                                        name1812 = $tmp1824;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1824));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1823));
                                    }
                                    {
                                        $tmp1825 = bound1813;
                                        org$pandalanguage$pandac$Type* $tmp1828 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1827 = $tmp1828;
                                        $tmp1826 = $tmp1827;
                                        bound1813 = $tmp1826;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1826));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1827));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1825));
                                    }
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1829, 44);
                                panda$core$Bit $tmp1830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$524_171817->$rawValue, $tmp1829);
                                if ($tmp1830.value) {
                                {
                                    panda$core$String** $tmp1832 = ((panda$core$String**) ((char*) $match$524_171817->$data + 16));
                                    id1831 = *$tmp1832;
                                    org$pandalanguage$pandac$ASTNode** $tmp1834 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$524_171817->$data + 24));
                                    type1833 = *$tmp1834;
                                    {
                                        $tmp1835 = name1812;
                                        $tmp1836 = id1831;
                                        name1812 = $tmp1836;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1836));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1835));
                                    }
                                    {
                                        $tmp1837 = bound1813;
                                        org$pandalanguage$pandac$Type* $tmp1840 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1833);
                                        $tmp1839 = $tmp1840;
                                        $tmp1838 = $tmp1839;
                                        bound1813 = $tmp1838;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1838));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1839));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1837));
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp1841, false);
                                    if ($tmp1841.value) goto $l1842; else goto $l1843;
                                    $l1843:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1844, (panda$core$Int64) { 532 });
                                    abort();
                                    $l1842:;
                                }
                                }
                                }
                            }
                            $tmp1816 = -1;
                            goto $l1814;
                            $l1814:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1818));
                            switch ($tmp1816) {
                                case -1: goto $l1845;
                            }
                            $l1845:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1847 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1849 = (($fn1848) p1805->$class->vtable[2])(p1805);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1847, $tmp1849, fullName1738, name1812, bound1813);
                            $tmp1846 = $tmp1847;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1780, ((panda$core$Object*) $tmp1846));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1846));
                        }
                        $tmp1804 = -1;
                        goto $l1802;
                        $l1802:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1813));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1812));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1805));
                        p1805 = NULL;
                        switch ($tmp1804) {
                            case -1: goto $l1850;
                        }
                        $l1850:;
                    }
                    goto $l1794;
                    $l1795:;
                }
                $tmp1786 = -1;
                goto $l1784;
                $l1784:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$521$131787));
                Iter$521$131787 = NULL;
                switch ($tmp1786) {
                    case -1: goto $l1851;
                }
                $l1851:;
            }
            panda$core$Int64$init$builtin_int64(&$tmp1852, 2);
            panda$core$Bit $tmp1853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1852);
            if ($tmp1853.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1854);
            }
            }
        }
        }
        panda$collections$Array* $tmp1858 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1858);
        $tmp1857 = $tmp1858;
        $tmp1856 = $tmp1857;
        supertypes1855 = $tmp1856;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1856));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1857));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1859, 2);
            panda$core$Bit $tmp1860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1859);
            if ($tmp1860.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1861);
            }
            }
            {
                int $tmp1864;
                {
                    ITable* $tmp1868 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1868->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1868 = $tmp1868->next;
                    }
                    $fn1870 $tmp1869 = $tmp1868->methods[0];
                    panda$collections$Iterator* $tmp1871 = $tmp1869(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1867 = $tmp1871;
                    $tmp1866 = $tmp1867;
                    Iter$545$131865 = $tmp1866;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1866));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1867));
                    $l1872:;
                    ITable* $tmp1875 = Iter$545$131865->$class->itable;
                    while ($tmp1875->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1875 = $tmp1875->next;
                    }
                    $fn1877 $tmp1876 = $tmp1875->methods[0];
                    panda$core$Bit $tmp1878 = $tmp1876(Iter$545$131865);
                    panda$core$Bit $tmp1879 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1878);
                    bool $tmp1874 = $tmp1879.value;
                    if (!$tmp1874) goto $l1873;
                    {
                        int $tmp1882;
                        {
                            ITable* $tmp1886 = Iter$545$131865->$class->itable;
                            while ($tmp1886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1886 = $tmp1886->next;
                            }
                            $fn1888 $tmp1887 = $tmp1886->methods[1];
                            panda$core$Object* $tmp1889 = $tmp1887(Iter$545$131865);
                            $tmp1885 = $tmp1889;
                            $tmp1884 = ((org$pandalanguage$pandac$ASTNode*) $tmp1885);
                            s1883 = $tmp1884;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1884));
                            panda$core$Panda$unref$panda$core$Object($tmp1885);
                            org$pandalanguage$pandac$Type* $tmp1891 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1883);
                            $tmp1890 = $tmp1891;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1855, ((panda$core$Object*) $tmp1890));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1890));
                        }
                        $tmp1882 = -1;
                        goto $l1880;
                        $l1880:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1883));
                        s1883 = NULL;
                        switch ($tmp1882) {
                            case -1: goto $l1892;
                        }
                        $l1892:;
                    }
                    goto $l1872;
                    $l1873:;
                }
                $tmp1864 = -1;
                goto $l1862;
                $l1862:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$545$131865));
                Iter$545$131865 = NULL;
                switch ($tmp1864) {
                    case -1: goto $l1893;
                }
                $l1893:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1897 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1899 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1898 = $tmp1899;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1897, p_source, p_position, p_aliases, doccomment1755, annotations1776, p_kind, fullName1738, ((panda$collections$ListView*) supertypes1855), parameters1780, ((org$pandalanguage$pandac$Compiler*) $tmp1898)->root);
        $tmp1896 = $tmp1897;
        $tmp1895 = $tmp1896;
        result1894 = $tmp1895;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1895));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1896));
        panda$core$Panda$unref$panda$core$Object($tmp1898);
        panda$core$Object* $tmp1901 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1900 = $tmp1901;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1900)->currentClass, ((panda$core$Object*) result1894));
        panda$core$Panda$unref$panda$core$Object($tmp1900);
        panda$core$Int64$init$builtin_int64(&$tmp1902, 2);
        panda$core$Bit $tmp1903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1902);
        if ($tmp1903.value) {
        {
            int $tmp1906;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1910 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1912 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1912);
                $tmp1911 = $tmp1912;
                panda$core$Int64$init$builtin_int64(&$tmp1914, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1913, $tmp1914);
                org$pandalanguage$pandac$Type* $tmp1917 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1916 = $tmp1917;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1910, result1894, result1894->position, NULL, $tmp1911, $tmp1913, &$s1915, $tmp1916, NULL);
                $tmp1909 = $tmp1910;
                $tmp1908 = $tmp1909;
                rawValue1907 = $tmp1908;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1908));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1909));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1916));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1911));
                panda$collections$Array$add$panda$collections$Array$T(result1894->fields, ((panda$core$Object*) rawValue1907));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1894->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1907));
                org$pandalanguage$pandac$FieldDecl* $tmp1921 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1923 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1923);
                $tmp1922 = $tmp1923;
                panda$core$Int64$init$builtin_int64(&$tmp1925, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1924, $tmp1925);
                org$pandalanguage$pandac$Type* $tmp1928 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1927 = $tmp1928;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1921, result1894, result1894->position, NULL, $tmp1922, $tmp1924, &$s1926, $tmp1927, NULL);
                $tmp1920 = $tmp1921;
                $tmp1919 = $tmp1920;
                data1918 = $tmp1919;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1919));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1920));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1927));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1922));
                panda$collections$Array$add$panda$collections$Array$T(result1894->fields, ((panda$core$Object*) data1918));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1894->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1918));
            }
            $tmp1906 = -1;
            goto $l1904;
            $l1904:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1918));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1907));
            rawValue1907 = NULL;
            data1918 = NULL;
            switch ($tmp1906) {
                case -1: goto $l1929;
            }
            $l1929:;
        }
        }
        {
            int $tmp1932;
            {
                ITable* $tmp1936 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1936->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1936 = $tmp1936->next;
                }
                $fn1938 $tmp1937 = $tmp1936->methods[0];
                panda$collections$Iterator* $tmp1939 = $tmp1937(((panda$collections$Iterable*) p_members));
                $tmp1935 = $tmp1939;
                $tmp1934 = $tmp1935;
                Iter$562$91933 = $tmp1934;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1934));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1935));
                $l1940:;
                ITable* $tmp1943 = Iter$562$91933->$class->itable;
                while ($tmp1943->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1943 = $tmp1943->next;
                }
                $fn1945 $tmp1944 = $tmp1943->methods[0];
                panda$core$Bit $tmp1946 = $tmp1944(Iter$562$91933);
                panda$core$Bit $tmp1947 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1946);
                bool $tmp1942 = $tmp1947.value;
                if (!$tmp1942) goto $l1941;
                {
                    int $tmp1950;
                    {
                        ITable* $tmp1954 = Iter$562$91933->$class->itable;
                        while ($tmp1954->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1954 = $tmp1954->next;
                        }
                        $fn1956 $tmp1955 = $tmp1954->methods[1];
                        panda$core$Object* $tmp1957 = $tmp1955(Iter$562$91933);
                        $tmp1953 = $tmp1957;
                        $tmp1952 = ((org$pandalanguage$pandac$ASTNode*) $tmp1953);
                        m1951 = $tmp1952;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1952));
                        panda$core$Panda$unref$panda$core$Object($tmp1953);
                        int $tmp1960;
                        {
                            $tmp1962 = m1951;
                            $match$563_131961 = $tmp1962;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1962));
                            panda$core$Int64$init$builtin_int64(&$tmp1963, 26);
                            panda$core$Bit $tmp1964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$563_131961->$rawValue, $tmp1963);
                            if ($tmp1964.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1966 = ((org$pandalanguage$pandac$Position*) ((char*) $match$563_131961->$data + 0));
                                mPosition1965 = *$tmp1966;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1968 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$563_131961->$data + 32));
                                methodKind1967 = *$tmp1968;
                                panda$core$Int64$init$builtin_int64(&$tmp1969, 2);
                                panda$core$Bit $tmp1970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1967.$rawValue, $tmp1969);
                                if ($tmp1970.value) {
                                {
                                    {
                                        $match$566_251971 = p_kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp1972, 0);
                                        panda$core$Bit $tmp1973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$566_251971.$rawValue, $tmp1972);
                                        if ($tmp1973.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp1974, 1);
                                        panda$core$Bit $tmp1975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$566_251971.$rawValue, $tmp1974);
                                        if ($tmp1975.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition1965, &$s1976);
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp1977, 2);
                                        panda$core$Bit $tmp1978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$566_251971.$rawValue, $tmp1977);
                                        if ($tmp1978.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition1965, &$s1979);
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
                        $tmp1960 = -1;
                        goto $l1958;
                        $l1958:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1962));
                        switch ($tmp1960) {
                            case -1: goto $l1980;
                        }
                        $l1980:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1894, m1951);
                    }
                    $tmp1950 = -1;
                    goto $l1948;
                    $l1948:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1951));
                    m1951 = NULL;
                    switch ($tmp1950) {
                        case -1: goto $l1981;
                    }
                    $l1981:;
                }
                goto $l1940;
                $l1941:;
            }
            $tmp1932 = -1;
            goto $l1930;
            $l1930:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$562$91933));
            Iter$562$91933 = NULL;
            switch ($tmp1932) {
                case -1: goto $l1982;
            }
            $l1982:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp1984, false);
        foundInit1983 = $tmp1984;
        panda$core$Bit$init$builtin_bit(&$tmp1986, false);
        foundCleanup1985 = $tmp1986;
        {
            int $tmp1989;
            {
                ITable* $tmp1993 = ((panda$collections$Iterable*) result1894->methods)->$class->itable;
                while ($tmp1993->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1993 = $tmp1993->next;
                }
                $fn1995 $tmp1994 = $tmp1993->methods[0];
                panda$collections$Iterator* $tmp1996 = $tmp1994(((panda$collections$Iterable*) result1894->methods));
                $tmp1992 = $tmp1996;
                $tmp1991 = $tmp1992;
                Iter$581$91990 = $tmp1991;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1991));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1992));
                $l1997:;
                ITable* $tmp2000 = Iter$581$91990->$class->itable;
                while ($tmp2000->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2000 = $tmp2000->next;
                }
                $fn2002 $tmp2001 = $tmp2000->methods[0];
                panda$core$Bit $tmp2003 = $tmp2001(Iter$581$91990);
                panda$core$Bit $tmp2004 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2003);
                bool $tmp1999 = $tmp2004.value;
                if (!$tmp1999) goto $l1998;
                {
                    int $tmp2007;
                    {
                        ITable* $tmp2011 = Iter$581$91990->$class->itable;
                        while ($tmp2011->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2011 = $tmp2011->next;
                        }
                        $fn2013 $tmp2012 = $tmp2011->methods[1];
                        panda$core$Object* $tmp2014 = $tmp2012(Iter$581$91990);
                        $tmp2010 = $tmp2014;
                        $tmp2009 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2010);
                        m2008 = $tmp2009;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2009));
                        panda$core$Panda$unref$panda$core$Object($tmp2010);
                        panda$core$Int64$init$builtin_int64(&$tmp2015, 2);
                        panda$core$Bit $tmp2016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2008->methodKind.$rawValue, $tmp2015);
                        if ($tmp2016.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2017, true);
                            foundInit1983 = $tmp2017;
                        }
                        }
                        panda$core$Bit $tmp2020 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2008)->name, &$s2019);
                        bool $tmp2018 = $tmp2020.value;
                        if (!$tmp2018) goto $l2021;
                        panda$core$Int64 $tmp2022 = panda$collections$Array$get_count$R$panda$core$Int64(m2008->parameters);
                        panda$core$Int64$init$builtin_int64(&$tmp2023, 0);
                        panda$core$Bit $tmp2024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2022, $tmp2023);
                        $tmp2018 = $tmp2024.value;
                        $l2021:;
                        panda$core$Bit $tmp2025 = { $tmp2018 };
                        if ($tmp2025.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2026, true);
                            foundCleanup1985 = $tmp2026;
                            panda$core$Int64$init$builtin_int64(&$tmp2027, 2);
                            panda$core$Bit $tmp2028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2027);
                            if ($tmp2028.value) {
                            {
                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2029);
                            }
                            }
                        }
                        }
                    }
                    $tmp2007 = -1;
                    goto $l2005;
                    $l2005:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2008));
                    m2008 = NULL;
                    switch ($tmp2007) {
                        case -1: goto $l2030;
                    }
                    $l2030:;
                }
                goto $l1997;
                $l1998:;
            }
            $tmp1989 = -1;
            goto $l1987;
            $l1987:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$581$91990));
            Iter$581$91990 = NULL;
            switch ($tmp1989) {
                case -1: goto $l2031;
            }
            $l2031:;
        }
        panda$core$Bit $tmp2034 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1983);
        bool $tmp2033 = $tmp2034.value;
        if (!$tmp2033) goto $l2035;
        panda$core$Int64$init$builtin_int64(&$tmp2036, 0);
        panda$core$Bit $tmp2037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2036);
        $tmp2033 = $tmp2037.value;
        $l2035:;
        panda$core$Bit $tmp2038 = { $tmp2033 };
        bool $tmp2032 = $tmp2038.value;
        if (!$tmp2032) goto $l2039;
        panda$core$Bit $tmp2041 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1894->name, &$s2040);
        $tmp2032 = $tmp2041.value;
        $l2039:;
        panda$core$Bit $tmp2042 = { $tmp2032 };
        if ($tmp2042.value) {
        {
            int $tmp2045;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2049 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2051 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2052, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2051, $tmp2052);
                $tmp2050 = $tmp2051;
                panda$core$Int64$init$builtin_int64(&$tmp2054, 2);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2053, $tmp2054);
                panda$collections$Array* $tmp2057 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2057);
                $tmp2056 = $tmp2057;
                panda$collections$Array* $tmp2059 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2059);
                $tmp2058 = $tmp2059;
                org$pandalanguage$pandac$Type* $tmp2061 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2060 = $tmp2061;
                panda$collections$ImmutableArray* $tmp2063 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2063);
                $tmp2062 = $tmp2063;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2049, result1894, p_position, NULL, $tmp2050, $tmp2053, &$s2055, $tmp2056, $tmp2058, $tmp2060, $tmp2062);
                $tmp2048 = $tmp2049;
                $tmp2047 = $tmp2048;
                defaultInit2046 = $tmp2047;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2047));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2048));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2062));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2060));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2058));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2056));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2050));
                panda$collections$Array$add$panda$collections$Array$T(result1894->methods, ((panda$core$Object*) defaultInit2046));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1894->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2046));
            }
            $tmp2045 = -1;
            goto $l2043;
            $l2043:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2046));
            defaultInit2046 = NULL;
            switch ($tmp2045) {
                case -1: goto $l2064;
            }
            $l2064:;
        }
        }
        panda$core$Bit $tmp2067 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1985);
        bool $tmp2066 = $tmp2067.value;
        if (!$tmp2066) goto $l2068;
        panda$core$Int64$init$builtin_int64(&$tmp2070, 0);
        panda$core$Bit $tmp2071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2070);
        bool $tmp2069 = $tmp2071.value;
        if ($tmp2069) goto $l2072;
        panda$core$Int64$init$builtin_int64(&$tmp2073, 2);
        panda$core$Bit $tmp2074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2073);
        $tmp2069 = $tmp2074.value;
        $l2072:;
        panda$core$Bit $tmp2075 = { $tmp2069 };
        $tmp2066 = $tmp2075.value;
        $l2068:;
        panda$core$Bit $tmp2076 = { $tmp2066 };
        bool $tmp2065 = $tmp2076.value;
        if (!$tmp2065) goto $l2077;
        panda$core$Bit $tmp2079 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1894->name, &$s2078);
        $tmp2065 = $tmp2079.value;
        $l2077:;
        panda$core$Bit $tmp2080 = { $tmp2065 };
        if ($tmp2080.value) {
        {
            int $tmp2083;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2087 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2089 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2090, 32);
                panda$core$Int64$init$builtin_int64(&$tmp2091, 8192);
                panda$core$Int64 $tmp2092 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2090, $tmp2091);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2089, $tmp2092);
                $tmp2088 = $tmp2089;
                panda$core$Int64$init$builtin_int64(&$tmp2094, 0);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2093, $tmp2094);
                panda$collections$Array* $tmp2097 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2097);
                $tmp2096 = $tmp2097;
                panda$collections$Array* $tmp2099 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2099);
                $tmp2098 = $tmp2099;
                org$pandalanguage$pandac$Type* $tmp2101 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2100 = $tmp2101;
                panda$collections$ImmutableArray* $tmp2103 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2103);
                $tmp2102 = $tmp2103;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2087, result1894, p_position, NULL, $tmp2088, $tmp2093, &$s2095, $tmp2096, $tmp2098, $tmp2100, $tmp2102);
                $tmp2086 = $tmp2087;
                $tmp2085 = $tmp2086;
                defaultCleanup2084 = $tmp2085;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2085));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2086));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2102));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2100));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2098));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2096));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2088));
                panda$collections$Array$add$panda$collections$Array$T(result1894->methods, ((panda$core$Object*) defaultCleanup2084));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1894->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2084));
            }
            $tmp2083 = -1;
            goto $l2081;
            $l2081:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2084));
            defaultCleanup2084 = NULL;
            switch ($tmp2083) {
                case -1: goto $l2104;
            }
            $l2104:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2105, 2);
        panda$core$Bit $tmp2106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2105);
        if ($tmp2106.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2108, false);
            haveFields2107 = $tmp2108;
            {
                int $tmp2111;
                {
                    ITable* $tmp2115 = ((panda$collections$Iterable*) result1894->choiceEntries)->$class->itable;
                    while ($tmp2115->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2115 = $tmp2115->next;
                    }
                    $fn2117 $tmp2116 = $tmp2115->methods[0];
                    panda$collections$Iterator* $tmp2118 = $tmp2116(((panda$collections$Iterable*) result1894->choiceEntries));
                    $tmp2114 = $tmp2118;
                    $tmp2113 = $tmp2114;
                    Iter$611$132112 = $tmp2113;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2113));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2114));
                    $l2119:;
                    ITable* $tmp2122 = Iter$611$132112->$class->itable;
                    while ($tmp2122->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2122 = $tmp2122->next;
                    }
                    $fn2124 $tmp2123 = $tmp2122->methods[0];
                    panda$core$Bit $tmp2125 = $tmp2123(Iter$611$132112);
                    panda$core$Bit $tmp2126 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2125);
                    bool $tmp2121 = $tmp2126.value;
                    if (!$tmp2121) goto $l2120;
                    {
                        int $tmp2129;
                        {
                            ITable* $tmp2133 = Iter$611$132112->$class->itable;
                            while ($tmp2133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2133 = $tmp2133->next;
                            }
                            $fn2135 $tmp2134 = $tmp2133->methods[1];
                            panda$core$Object* $tmp2136 = $tmp2134(Iter$611$132112);
                            $tmp2132 = $tmp2136;
                            $tmp2131 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp2132);
                            e2130 = $tmp2131;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2131));
                            panda$core$Panda$unref$panda$core$Object($tmp2132);
                            panda$core$Int64 $tmp2137 = panda$collections$Array$get_count$R$panda$core$Int64(e2130->fields);
                            panda$core$Int64$init$builtin_int64(&$tmp2138, 0);
                            panda$core$Bit $tmp2139 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2137, $tmp2138);
                            if ($tmp2139.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp2140, true);
                                haveFields2107 = $tmp2140;
                                $tmp2129 = 0;
                                goto $l2127;
                                $l2141:;
                                goto $l2120;
                            }
                            }
                        }
                        $tmp2129 = -1;
                        goto $l2127;
                        $l2127:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2130));
                        e2130 = NULL;
                        switch ($tmp2129) {
                            case -1: goto $l2142;
                            case 0: goto $l2141;
                        }
                        $l2142:;
                    }
                    goto $l2119;
                    $l2120:;
                }
                $tmp2111 = -1;
                goto $l2109;
                $l2109:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$611$132112));
                Iter$611$132112 = NULL;
                switch ($tmp2111) {
                    case -1: goto $l2143;
                }
                $l2143:;
            }
            panda$core$Bit $tmp2144 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields2107);
            if ($tmp2144.value) {
            {
                {
                    $tmp2145 = result1894->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp2148 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp2147 = $tmp2148;
                    $tmp2146 = $tmp2147;
                    result1894->rawSuper = $tmp2146;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2146));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2147));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2145));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp2151 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp2150 = $tmp2151;
        panda$core$Object* $tmp2152 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2150)->currentClass);
        $tmp2149 = $tmp2152;
        panda$core$Panda$unref$panda$core$Object($tmp2149);
        panda$core$Panda$unref$panda$core$Object($tmp2150);
        $tmp2154 = result1894;
        $returnValue2153 = $tmp2154;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2154));
        $tmp1737 = 0;
        goto $l1735;
        $l2155:;
        return $returnValue2153;
    }
    $l1735:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1894));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1855));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1780));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1776));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1755));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1738));
    annotations1776 = NULL;
    parameters1780 = NULL;
    supertypes1855 = NULL;
    result1894 = NULL;
    switch ($tmp1737) {
        case 0: goto $l2155;
    }
    $l2157:;
    abort();
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$627$92161 = NULL;
    panda$collections$Iterator* $tmp2162;
    panda$collections$Iterator* $tmp2163;
    org$pandalanguage$pandac$ClassDecl* inner2179 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2180;
    panda$core$Object* $tmp2181;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp2160;
        {
            ITable* $tmp2164 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp2164->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2164 = $tmp2164->next;
            }
            $fn2166 $tmp2165 = $tmp2164->methods[0];
            panda$collections$Iterator* $tmp2167 = $tmp2165(((panda$collections$Iterable*) p_cl->classes));
            $tmp2163 = $tmp2167;
            $tmp2162 = $tmp2163;
            Iter$627$92161 = $tmp2162;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2162));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2163));
            $l2168:;
            ITable* $tmp2171 = Iter$627$92161->$class->itable;
            while ($tmp2171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2171 = $tmp2171->next;
            }
            $fn2173 $tmp2172 = $tmp2171->methods[0];
            panda$core$Bit $tmp2174 = $tmp2172(Iter$627$92161);
            panda$core$Bit $tmp2175 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2174);
            bool $tmp2170 = $tmp2175.value;
            if (!$tmp2170) goto $l2169;
            {
                int $tmp2178;
                {
                    ITable* $tmp2182 = Iter$627$92161->$class->itable;
                    while ($tmp2182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2182 = $tmp2182->next;
                    }
                    $fn2184 $tmp2183 = $tmp2182->methods[1];
                    panda$core$Object* $tmp2185 = $tmp2183(Iter$627$92161);
                    $tmp2181 = $tmp2185;
                    $tmp2180 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2181);
                    inner2179 = $tmp2180;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2180));
                    panda$core$Panda$unref$panda$core$Object($tmp2181);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner2179, p_arr);
                }
                $tmp2178 = -1;
                goto $l2176;
                $l2176:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner2179));
                inner2179 = NULL;
                switch ($tmp2178) {
                    case -1: goto $l2186;
                }
                $l2186:;
            }
            goto $l2168;
            $l2169:;
        }
        $tmp2160 = -1;
        goto $l2158;
        $l2158:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$627$92161));
        Iter$627$92161 = NULL;
        switch ($tmp2160) {
            case -1: goto $l2187;
        }
        $l2187:;
    }
}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$collections$List* p_classes) {
    org$pandalanguage$pandac$ClassDecl* $tmp2191;
    org$pandalanguage$pandac$ClassDecl* $tmp2192;
    org$pandalanguage$pandac$ClassDecl* $tmp2193;
    org$pandalanguage$pandac$Position $tmp2195;
    org$pandalanguage$pandac$Annotations* $tmp2196;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2198;
    panda$core$Int64 $tmp2199;
    panda$collections$Array* $tmp2201;
    panda$collections$Array* $tmp2203;
    panda$core$Object* $tmp2205;
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
        int $tmp2190;
        {
            {
                $tmp2191 = self->bareCodeClass;
                org$pandalanguage$pandac$ClassDecl* $tmp2194 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
                org$pandalanguage$pandac$Position$init(&$tmp2195);
                org$pandalanguage$pandac$Annotations* $tmp2197 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp2197);
                $tmp2196 = $tmp2197;
                panda$core$Int64$init$builtin_int64(&$tmp2199, 0);
                org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2198, $tmp2199);
                panda$collections$Array* $tmp2202 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2202);
                $tmp2201 = $tmp2202;
                panda$collections$Array* $tmp2204 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2204);
                $tmp2203 = $tmp2204;
                panda$core$Object* $tmp2206 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp2205 = $tmp2206;
                org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2194, p_source, $tmp2195, p_aliases, NULL, $tmp2196, $tmp2198, &$s2200, ((panda$collections$ListView*) $tmp2201), $tmp2203, ((org$pandalanguage$pandac$Compiler*) $tmp2205)->root);
                $tmp2193 = $tmp2194;
                $tmp2192 = $tmp2193;
                self->bareCodeClass = $tmp2192;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2192));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2193));
                panda$core$Panda$unref$panda$core$Object($tmp2205);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2203));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2201));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2196));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2191));
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
        $tmp2190 = -1;
        goto $l2188;
        $l2188:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2229));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2210));
        defaultInit2210 = NULL;
        defaultCleanup2229 = NULL;
        switch ($tmp2190) {
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
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2253, (panda$core$Int64) { 655 }, &$s2254);
    abort();
    $l2251:;
    panda$core$Object* $tmp2256 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp2255 = $tmp2256;
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2255), self->source, p_position, p_msg);
    panda$core$Panda$unref$panda$core$Object($tmp2255);
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$io$File* $tmp2257;
    panda$io$File* $tmp2258;
    org$pandalanguage$pandac$ASTNode* $match$661_92262 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2263;
    panda$core$Int64 $tmp2264;
    panda$collections$ImmutableArray* entries2266 = NULL;
    panda$collections$Array* result2271 = NULL;
    panda$collections$Array* $tmp2272;
    panda$collections$Array* $tmp2273;
    panda$core$String* currentPackage2275 = NULL;
    panda$core$String* $tmp2276;
    panda$collections$HashMap* aliases2278 = NULL;
    panda$collections$HashMap* $tmp2279;
    panda$collections$HashMap* $tmp2280;
    panda$collections$Iterator* Iter$666$172285 = NULL;
    panda$collections$Iterator* $tmp2286;
    panda$collections$Iterator* $tmp2287;
    org$pandalanguage$pandac$ASTNode* e2303 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2304;
    panda$core$Object* $tmp2305;
    org$pandalanguage$pandac$ASTNode* $match$667_212313 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2314;
    panda$core$Int64 $tmp2315;
    panda$core$String* name2317 = NULL;
    panda$core$String* $tmp2319;
    panda$core$String* $tmp2320;
    panda$core$Int64 $tmp2321;
    panda$core$String* fullName2323 = NULL;
    panda$core$String$Index$nullable idx2328;
    panda$core$String* alias2331 = NULL;
    panda$core$String* $tmp2332;
    panda$core$String* $tmp2333;
    panda$core$String* $tmp2334;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2335;
    panda$core$Bit $tmp2337;
    panda$core$String* $tmp2339;
    panda$core$String* $tmp2340;
    panda$core$Int64 $tmp2342;
    org$pandalanguage$pandac$Position position2344;
    org$pandalanguage$pandac$ASTNode* dc2346 = NULL;
    panda$collections$ImmutableArray* annotations2348 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind2350;
    panda$core$String* name2352 = NULL;
    panda$collections$ImmutableArray* generics2354 = NULL;
    panda$collections$ImmutableArray* supertypes2356 = NULL;
    panda$collections$ImmutableArray* members2358 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl2363 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2364;
    org$pandalanguage$pandac$ClassDecl* $tmp2365;
    panda$core$Int64 $tmp2368;
    org$pandalanguage$pandac$Position position2370;
    org$pandalanguage$pandac$ASTNode* dc2372 = NULL;
    panda$collections$ImmutableArray* annotations2374 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind2376;
    panda$core$String* rawName2378 = NULL;
    panda$collections$ImmutableArray* generics2380 = NULL;
    panda$collections$ImmutableArray* parameters2382 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType2384 = NULL;
    panda$collections$ImmutableArray* statements2386 = NULL;
    panda$core$String* name2391 = NULL;
    panda$core$String* $tmp2397;
    panda$core$String* $tmp2398;
    panda$collections$Array* mainParameters2400 = NULL;
    panda$collections$Array* $tmp2401;
    panda$collections$Array* $tmp2402;
    panda$collections$Array* mainStatements2404 = NULL;
    panda$collections$Array* $tmp2405;
    panda$collections$Array* $tmp2406;
    panda$collections$Array* mainArguments2408 = NULL;
    panda$collections$Array* $tmp2409;
    panda$collections$Array* $tmp2410;
    panda$collections$Iterator* Iter$696$332415 = NULL;
    panda$collections$Iterator* $tmp2416;
    panda$collections$Iterator* $tmp2417;
    org$pandalanguage$pandac$ASTNode* p2433 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2434;
    panda$core$Object* $tmp2435;
    org$pandalanguage$pandac$ASTNode* $match$697_372443 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2444;
    panda$core$Int64 $tmp2445;
    org$pandalanguage$pandac$Position position2447;
    panda$core$String* name2449 = NULL;
    org$pandalanguage$pandac$ASTNode* type2451 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2453;
    org$pandalanguage$pandac$Type* $tmp2455;
    org$pandalanguage$pandac$ASTNode* $tmp2457;
    panda$core$Int64 $tmp2459;
    panda$core$Bit $tmp2460;
    org$pandalanguage$pandac$ASTNode* bareConstruct2467 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2468;
    org$pandalanguage$pandac$ASTNode* $tmp2469;
    panda$core$Int64 $tmp2471;
    org$pandalanguage$pandac$ASTNode* $tmp2472;
    panda$core$Int64 $tmp2474;
    panda$collections$ImmutableArray* $tmp2476;
    org$pandalanguage$pandac$ASTNode* $tmp2478;
    panda$core$Int64 $tmp2480;
    org$pandalanguage$pandac$ASTNode* $tmp2481;
    panda$core$Int64 $tmp2483;
    panda$collections$ImmutableArray* $tmp2484;
    org$pandalanguage$pandac$Type* returnType2486 = NULL;
    org$pandalanguage$pandac$Type* $tmp2487;
    org$pandalanguage$pandac$Type* $tmp2488;
    org$pandalanguage$pandac$Type* $tmp2489;
    org$pandalanguage$pandac$Type* $tmp2491;
    org$pandalanguage$pandac$Type* $tmp2492;
    org$pandalanguage$pandac$Type* $tmp2493;
    org$pandalanguage$pandac$MethodDecl* bareMain2495 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2496;
    org$pandalanguage$pandac$MethodDecl* $tmp2497;
    org$pandalanguage$pandac$Position $tmp2499;
    org$pandalanguage$pandac$Annotations* $tmp2500;
    panda$core$Int64 $tmp2502;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2503;
    panda$core$Int64 $tmp2504;
    panda$collections$Array* $tmp2506;
    panda$collections$ImmutableArray* $tmp2508;
    panda$core$String* $tmp2511;
    panda$core$String* $tmp2512;
    panda$core$Object* $tmp2513;
    org$pandalanguage$pandac$MethodDecl* m2515 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2516;
    org$pandalanguage$pandac$MethodDecl* $tmp2517;
    panda$core$Int64 $tmp2521;
    panda$core$Object* $tmp2524;
    panda$core$Int64 $tmp2527;
    org$pandalanguage$pandac$Position position2529;
    org$pandalanguage$pandac$ASTNode* dc2531 = NULL;
    panda$collections$ImmutableArray* annotations2533 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl2535 = NULL;
    panda$core$Int64 old2537;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2539;
    panda$core$Bit $tmp2541;
    org$pandalanguage$pandac$FieldDecl* f2558 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp2559;
    panda$core$Object* $tmp2560;
    panda$core$Int64 $tmp2563;
    panda$core$Bit $tmp2576;
    panda$core$String* $tmp2580;
    panda$core$String* $tmp2581;
    panda$core$String* $tmp2582;
    panda$core$String* $tmp2583;
    panda$core$String* $tmp2584;
    panda$core$String* $tmp2585;
    panda$core$Object* $tmp2590;
    panda$core$Object* $tmp2595;
    panda$io$File* $tmp2605;
    panda$io$File* $tmp2606;
    panda$collections$ListView* $returnValue2607;
    panda$collections$ListView* $tmp2608;
    panda$core$Bit $tmp2613;
    {
        $tmp2257 = self->source;
        $tmp2258 = p_source;
        self->source = $tmp2258;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2258));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2257));
    }
    int $tmp2261;
    {
        $tmp2263 = p_file;
        $match$661_92262 = $tmp2263;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2263));
        panda$core$Int64$init$builtin_int64(&$tmp2264, 17);
        panda$core$Bit $tmp2265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$661_92262->$rawValue, $tmp2264);
        if ($tmp2265.value) {
        {
            panda$collections$ImmutableArray** $tmp2267 = ((panda$collections$ImmutableArray**) ((char*) $match$661_92262->$data + 0));
            entries2266 = *$tmp2267;
            int $tmp2270;
            {
                panda$collections$Array* $tmp2274 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2274);
                $tmp2273 = $tmp2274;
                $tmp2272 = $tmp2273;
                result2271 = $tmp2272;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2272));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2273));
                $tmp2276 = &$s2277;
                currentPackage2275 = $tmp2276;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2276));
                panda$collections$HashMap* $tmp2281 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp2281);
                $tmp2280 = $tmp2281;
                $tmp2279 = $tmp2280;
                aliases2278 = $tmp2279;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2279));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2280));
                {
                    int $tmp2284;
                    {
                        ITable* $tmp2288 = ((panda$collections$Iterable*) entries2266)->$class->itable;
                        while ($tmp2288->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2288 = $tmp2288->next;
                        }
                        $fn2290 $tmp2289 = $tmp2288->methods[0];
                        panda$collections$Iterator* $tmp2291 = $tmp2289(((panda$collections$Iterable*) entries2266));
                        $tmp2287 = $tmp2291;
                        $tmp2286 = $tmp2287;
                        Iter$666$172285 = $tmp2286;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2286));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2287));
                        $l2292:;
                        ITable* $tmp2295 = Iter$666$172285->$class->itable;
                        while ($tmp2295->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2295 = $tmp2295->next;
                        }
                        $fn2297 $tmp2296 = $tmp2295->methods[0];
                        panda$core$Bit $tmp2298 = $tmp2296(Iter$666$172285);
                        panda$core$Bit $tmp2299 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2298);
                        bool $tmp2294 = $tmp2299.value;
                        if (!$tmp2294) goto $l2293;
                        {
                            int $tmp2302;
                            {
                                ITable* $tmp2306 = Iter$666$172285->$class->itable;
                                while ($tmp2306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2306 = $tmp2306->next;
                                }
                                $fn2308 $tmp2307 = $tmp2306->methods[1];
                                panda$core$Object* $tmp2309 = $tmp2307(Iter$666$172285);
                                $tmp2305 = $tmp2309;
                                $tmp2304 = ((org$pandalanguage$pandac$ASTNode*) $tmp2305);
                                e2303 = $tmp2304;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2304));
                                panda$core$Panda$unref$panda$core$Object($tmp2305);
                                int $tmp2312;
                                {
                                    $tmp2314 = e2303;
                                    $match$667_212313 = $tmp2314;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2314));
                                    panda$core$Int64$init$builtin_int64(&$tmp2315, 30);
                                    panda$core$Bit $tmp2316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$667_212313->$rawValue, $tmp2315);
                                    if ($tmp2316.value) {
                                    {
                                        panda$core$String** $tmp2318 = ((panda$core$String**) ((char*) $match$667_212313->$data + 16));
                                        name2317 = *$tmp2318;
                                        {
                                            $tmp2319 = currentPackage2275;
                                            $tmp2320 = name2317;
                                            currentPackage2275 = $tmp2320;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2320));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2319));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2321, 46);
                                    panda$core$Bit $tmp2322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$667_212313->$rawValue, $tmp2321);
                                    if ($tmp2322.value) {
                                    {
                                        panda$core$String** $tmp2324 = ((panda$core$String**) ((char*) $match$667_212313->$data + 16));
                                        fullName2323 = *$tmp2324;
                                        int $tmp2327;
                                        {
                                            panda$core$String$Index$nullable $tmp2330 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName2323, &$s2329);
                                            idx2328 = $tmp2330;
                                            memset(&alias2331, 0, sizeof(alias2331));
                                            if (((panda$core$Bit) { idx2328.nonnull }).value) {
                                            {
                                                {
                                                    $tmp2332 = alias2331;
                                                    panda$core$String$Index $tmp2336 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName2323, ((panda$core$String$Index) idx2328.value));
                                                    panda$core$Bit$init$builtin_bit(&$tmp2337, false);
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp2335, ((panda$core$String$Index$nullable) { $tmp2336, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2337);
                                                    panda$core$String* $tmp2338 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName2323, $tmp2335);
                                                    $tmp2334 = $tmp2338;
                                                    $tmp2333 = $tmp2334;
                                                    alias2331 = $tmp2333;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2333));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2334));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2332));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2339 = alias2331;
                                                    $tmp2340 = fullName2323;
                                                    alias2331 = $tmp2340;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2340));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2339));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases2278, ((panda$collections$Key*) alias2331), ((panda$core$Object*) fullName2323));
                                        }
                                        $tmp2327 = -1;
                                        goto $l2325;
                                        $l2325:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias2331));
                                        switch ($tmp2327) {
                                            case -1: goto $l2341;
                                        }
                                        $l2341:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2342, 11);
                                    panda$core$Bit $tmp2343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$667_212313->$rawValue, $tmp2342);
                                    if ($tmp2343.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2345 = ((org$pandalanguage$pandac$Position*) ((char*) $match$667_212313->$data + 0));
                                        position2344 = *$tmp2345;
                                        org$pandalanguage$pandac$ASTNode** $tmp2347 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$667_212313->$data + 16));
                                        dc2346 = *$tmp2347;
                                        panda$collections$ImmutableArray** $tmp2349 = ((panda$collections$ImmutableArray**) ((char*) $match$667_212313->$data + 24));
                                        annotations2348 = *$tmp2349;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp2351 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$667_212313->$data + 32));
                                        kind2350 = *$tmp2351;
                                        panda$core$String** $tmp2353 = ((panda$core$String**) ((char*) $match$667_212313->$data + 40));
                                        name2352 = *$tmp2353;
                                        panda$collections$ImmutableArray** $tmp2355 = ((panda$collections$ImmutableArray**) ((char*) $match$667_212313->$data + 48));
                                        generics2354 = *$tmp2355;
                                        panda$collections$ImmutableArray** $tmp2357 = ((panda$collections$ImmutableArray**) ((char*) $match$667_212313->$data + 56));
                                        supertypes2356 = *$tmp2357;
                                        panda$collections$ImmutableArray** $tmp2359 = ((panda$collections$ImmutableArray**) ((char*) $match$667_212313->$data + 64));
                                        members2358 = *$tmp2359;
                                        int $tmp2362;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp2366 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases2278), currentPackage2275, position2344, dc2346, annotations2348, kind2350, name2352, generics2354, supertypes2356, members2358);
                                            $tmp2365 = $tmp2366;
                                            $tmp2364 = $tmp2365;
                                            cl2363 = $tmp2364;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2364));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2365));
                                            if (((panda$core$Bit) { cl2363 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl2363, result2271);
                                            }
                                            }
                                        }
                                        $tmp2362 = -1;
                                        goto $l2360;
                                        $l2360:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2363));
                                        cl2363 = NULL;
                                        switch ($tmp2362) {
                                            case -1: goto $l2367;
                                        }
                                        $l2367:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2368, 26);
                                    panda$core$Bit $tmp2369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$667_212313->$rawValue, $tmp2368);
                                    if ($tmp2369.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2371 = ((org$pandalanguage$pandac$Position*) ((char*) $match$667_212313->$data + 0));
                                        position2370 = *$tmp2371;
                                        org$pandalanguage$pandac$ASTNode** $tmp2373 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$667_212313->$data + 16));
                                        dc2372 = *$tmp2373;
                                        panda$collections$ImmutableArray** $tmp2375 = ((panda$collections$ImmutableArray**) ((char*) $match$667_212313->$data + 24));
                                        annotations2374 = *$tmp2375;
                                        org$pandalanguage$pandac$MethodDecl$Kind* $tmp2377 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$667_212313->$data + 32));
                                        kind2376 = *$tmp2377;
                                        panda$core$String** $tmp2379 = ((panda$core$String**) ((char*) $match$667_212313->$data + 40));
                                        rawName2378 = *$tmp2379;
                                        panda$collections$ImmutableArray** $tmp2381 = ((panda$collections$ImmutableArray**) ((char*) $match$667_212313->$data + 48));
                                        generics2380 = *$tmp2381;
                                        panda$collections$ImmutableArray** $tmp2383 = ((panda$collections$ImmutableArray**) ((char*) $match$667_212313->$data + 56));
                                        parameters2382 = *$tmp2383;
                                        org$pandalanguage$pandac$ASTNode** $tmp2385 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$667_212313->$data + 64));
                                        rawReturnType2384 = *$tmp2385;
                                        panda$collections$ImmutableArray** $tmp2387 = ((panda$collections$ImmutableArray**) ((char*) $match$667_212313->$data + 72));
                                        statements2386 = *$tmp2387;
                                        int $tmp2390;
                                        {
                                            org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2278), ((panda$collections$List*) result2271));
                                            memset(&name2391, 0, sizeof(name2391));
                                            panda$core$Bit $tmp2393 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(rawName2378, &$s2392);
                                            if ($tmp2393.value) {
                                            {
                                                int $tmp2396;
                                                {
                                                    {
                                                        $tmp2397 = name2391;
                                                        $tmp2398 = &$s2399;
                                                        name2391 = $tmp2398;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2398));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2397));
                                                    }
                                                    panda$collections$Array* $tmp2403 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2403);
                                                    $tmp2402 = $tmp2403;
                                                    $tmp2401 = $tmp2402;
                                                    mainParameters2400 = $tmp2401;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2401));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2402));
                                                    panda$collections$Array* $tmp2407 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2407);
                                                    $tmp2406 = $tmp2407;
                                                    $tmp2405 = $tmp2406;
                                                    mainStatements2404 = $tmp2405;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2405));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2406));
                                                    panda$collections$Array* $tmp2411 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2411);
                                                    $tmp2410 = $tmp2411;
                                                    $tmp2409 = $tmp2410;
                                                    mainArguments2408 = $tmp2409;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2409));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2410));
                                                    {
                                                        int $tmp2414;
                                                        {
                                                            ITable* $tmp2418 = ((panda$collections$Iterable*) parameters2382)->$class->itable;
                                                            while ($tmp2418->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                                                $tmp2418 = $tmp2418->next;
                                                            }
                                                            $fn2420 $tmp2419 = $tmp2418->methods[0];
                                                            panda$collections$Iterator* $tmp2421 = $tmp2419(((panda$collections$Iterable*) parameters2382));
                                                            $tmp2417 = $tmp2421;
                                                            $tmp2416 = $tmp2417;
                                                            Iter$696$332415 = $tmp2416;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2416));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2417));
                                                            $l2422:;
                                                            ITable* $tmp2425 = Iter$696$332415->$class->itable;
                                                            while ($tmp2425->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                $tmp2425 = $tmp2425->next;
                                                            }
                                                            $fn2427 $tmp2426 = $tmp2425->methods[0];
                                                            panda$core$Bit $tmp2428 = $tmp2426(Iter$696$332415);
                                                            panda$core$Bit $tmp2429 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2428);
                                                            bool $tmp2424 = $tmp2429.value;
                                                            if (!$tmp2424) goto $l2423;
                                                            {
                                                                int $tmp2432;
                                                                {
                                                                    ITable* $tmp2436 = Iter$696$332415->$class->itable;
                                                                    while ($tmp2436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                        $tmp2436 = $tmp2436->next;
                                                                    }
                                                                    $fn2438 $tmp2437 = $tmp2436->methods[1];
                                                                    panda$core$Object* $tmp2439 = $tmp2437(Iter$696$332415);
                                                                    $tmp2435 = $tmp2439;
                                                                    $tmp2434 = ((org$pandalanguage$pandac$ASTNode*) $tmp2435);
                                                                    p2433 = $tmp2434;
                                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2434));
                                                                    panda$core$Panda$unref$panda$core$Object($tmp2435);
                                                                    int $tmp2442;
                                                                    {
                                                                        $tmp2444 = p2433;
                                                                        $match$697_372443 = $tmp2444;
                                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2444));
                                                                        panda$core$Int64$init$builtin_int64(&$tmp2445, 31);
                                                                        panda$core$Bit $tmp2446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$697_372443->$rawValue, $tmp2445);
                                                                        if ($tmp2446.value) {
                                                                        {
                                                                            org$pandalanguage$pandac$Position* $tmp2448 = ((org$pandalanguage$pandac$Position*) ((char*) $match$697_372443->$data + 0));
                                                                            position2447 = *$tmp2448;
                                                                            panda$core$String** $tmp2450 = ((panda$core$String**) ((char*) $match$697_372443->$data + 16));
                                                                            name2449 = *$tmp2450;
                                                                            org$pandalanguage$pandac$ASTNode** $tmp2452 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$697_372443->$data + 24));
                                                                            type2451 = *$tmp2452;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2454 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                                                            org$pandalanguage$pandac$Type* $tmp2456 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type2451);
                                                                            $tmp2455 = $tmp2456;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2454, name2449, $tmp2455);
                                                                            $tmp2453 = $tmp2454;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainParameters2400, ((panda$core$Object*) $tmp2453));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2453));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2455));
                                                                            org$pandalanguage$pandac$ASTNode* $tmp2458 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                                            panda$core$Int64$init$builtin_int64(&$tmp2459, 20);
                                                                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2458, $tmp2459, position2447, name2449);
                                                                            $tmp2457 = $tmp2458;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainArguments2408, ((panda$core$Object*) $tmp2457));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2457));
                                                                        }
                                                                        }
                                                                        else {
                                                                        {
                                                                            panda$core$Bit$init$builtin_bit(&$tmp2460, false);
                                                                            if ($tmp2460.value) goto $l2461; else goto $l2462;
                                                                            $l2462:;
                                                                            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2463, (panda$core$Int64) { 703 });
                                                                            abort();
                                                                            $l2461:;
                                                                        }
                                                                        }
                                                                    }
                                                                    $tmp2442 = -1;
                                                                    goto $l2440;
                                                                    $l2440:;
                                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2444));
                                                                    switch ($tmp2442) {
                                                                        case -1: goto $l2464;
                                                                    }
                                                                    $l2464:;
                                                                }
                                                                $tmp2432 = -1;
                                                                goto $l2430;
                                                                $l2430:;
                                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p2433));
                                                                p2433 = NULL;
                                                                switch ($tmp2432) {
                                                                    case -1: goto $l2465;
                                                                }
                                                                $l2465:;
                                                            }
                                                            goto $l2422;
                                                            $l2423:;
                                                        }
                                                        $tmp2414 = -1;
                                                        goto $l2412;
                                                        $l2412:;
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$696$332415));
                                                        Iter$696$332415 = NULL;
                                                        switch ($tmp2414) {
                                                            case -1: goto $l2466;
                                                        }
                                                        $l2466:;
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp2470 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2471, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2473 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2474, 20);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2473, $tmp2474, position2370, &$s2475);
                                                    $tmp2472 = $tmp2473;
                                                    panda$collections$ImmutableArray* $tmp2477 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                                                    panda$collections$ImmutableArray$init($tmp2477);
                                                    $tmp2476 = $tmp2477;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2470, $tmp2471, position2370, $tmp2472, $tmp2476);
                                                    $tmp2469 = $tmp2470;
                                                    $tmp2468 = $tmp2469;
                                                    bareConstruct2467 = $tmp2468;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2468));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2469));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2476));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2472));
                                                    org$pandalanguage$pandac$ASTNode* $tmp2479 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2480, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2482 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2483, 15);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2482, $tmp2483, position2370, bareConstruct2467, name2391);
                                                    $tmp2481 = $tmp2482;
                                                    panda$collections$ImmutableArray* $tmp2485 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainArguments2408);
                                                    $tmp2484 = $tmp2485;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2479, $tmp2480, position2370, $tmp2481, $tmp2484);
                                                    $tmp2478 = $tmp2479;
                                                    panda$collections$Array$add$panda$collections$Array$T(mainStatements2404, ((panda$core$Object*) $tmp2478));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2478));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2484));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2481));
                                                    memset(&returnType2486, 0, sizeof(returnType2486));
                                                    if (((panda$core$Bit) { rawReturnType2384 != NULL }).value) {
                                                    {
                                                        {
                                                            $tmp2487 = returnType2486;
                                                            org$pandalanguage$pandac$Type* $tmp2490 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType2384);
                                                            $tmp2489 = $tmp2490;
                                                            $tmp2488 = $tmp2489;
                                                            returnType2486 = $tmp2488;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2488));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2489));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2487));
                                                        }
                                                    }
                                                    }
                                                    else {
                                                    {
                                                        {
                                                            $tmp2491 = returnType2486;
                                                            org$pandalanguage$pandac$Type* $tmp2494 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                            $tmp2493 = $tmp2494;
                                                            $tmp2492 = $tmp2493;
                                                            returnType2486 = $tmp2492;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2492));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2493));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2491));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$MethodDecl* $tmp2498 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                                                    org$pandalanguage$pandac$Position$init(&$tmp2499);
                                                    org$pandalanguage$pandac$Annotations* $tmp2501 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2502, 16);
                                                    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2501, $tmp2502);
                                                    $tmp2500 = $tmp2501;
                                                    panda$core$Int64$init$builtin_int64(&$tmp2504, 0);
                                                    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2503, $tmp2504);
                                                    panda$collections$Array* $tmp2507 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2507);
                                                    $tmp2506 = $tmp2507;
                                                    panda$collections$ImmutableArray* $tmp2509 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainStatements2404);
                                                    $tmp2508 = $tmp2509;
                                                    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2498, self->bareCodeClass, $tmp2499, NULL, $tmp2500, $tmp2503, &$s2505, $tmp2506, mainParameters2400, returnType2486, $tmp2508);
                                                    $tmp2497 = $tmp2498;
                                                    $tmp2496 = $tmp2497;
                                                    bareMain2495 = $tmp2496;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2496));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2508));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2506));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2500));
                                                    panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) bareMain2495));
                                                }
                                                $tmp2396 = -1;
                                                goto $l2394;
                                                $l2394:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareMain2495));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2486));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareConstruct2467));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainArguments2408));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainStatements2404));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainParameters2400));
                                                mainParameters2400 = NULL;
                                                mainStatements2404 = NULL;
                                                mainArguments2408 = NULL;
                                                bareConstruct2467 = NULL;
                                                bareMain2495 = NULL;
                                                switch ($tmp2396) {
                                                    case -1: goto $l2510;
                                                }
                                                $l2510:;
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2511 = name2391;
                                                    $tmp2512 = rawName2378;
                                                    name2391 = $tmp2512;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2512));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2511));
                                                }
                                            }
                                            }
                                            panda$core$Object* $tmp2514 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                            $tmp2513 = $tmp2514;
                                            panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2513)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2513);
                                            org$pandalanguage$pandac$MethodDecl* $tmp2518 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, self->bareCodeClass, position2370, dc2372, annotations2374, kind2376, name2391, generics2380, parameters2382, rawReturnType2384, statements2386);
                                            $tmp2517 = $tmp2518;
                                            $tmp2516 = $tmp2517;
                                            m2515 = $tmp2516;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2516));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2517));
                                            panda$core$Bit $tmp2519 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2515->annotations);
                                            if ($tmp2519.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) m2515)->position, &$s2520);
                                                panda$core$Int64$init$builtin_int64(&$tmp2521, 16);
                                                panda$core$Int64 $tmp2522 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp2521);
                                                panda$core$Int64 $tmp2523 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(m2515->annotations->flags, $tmp2522);
                                                m2515->annotations->flags = $tmp2523;
                                            }
                                            }
                                            panda$core$Object* $tmp2525 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                            $tmp2524 = $tmp2525;
                                            panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2524)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2524);
                                            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) m2515));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) m2515));
                                        }
                                        $tmp2390 = -1;
                                        goto $l2388;
                                        $l2388:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2515));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2391));
                                        m2515 = NULL;
                                        switch ($tmp2390) {
                                            case -1: goto $l2526;
                                        }
                                        $l2526:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2527, 16);
                                    panda$core$Bit $tmp2528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$667_212313->$rawValue, $tmp2527);
                                    if ($tmp2528.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2530 = ((org$pandalanguage$pandac$Position*) ((char*) $match$667_212313->$data + 0));
                                        position2529 = *$tmp2530;
                                        org$pandalanguage$pandac$ASTNode** $tmp2532 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$667_212313->$data + 16));
                                        dc2531 = *$tmp2532;
                                        panda$collections$ImmutableArray** $tmp2534 = ((panda$collections$ImmutableArray**) ((char*) $match$667_212313->$data + 24));
                                        annotations2533 = *$tmp2534;
                                        org$pandalanguage$pandac$ASTNode** $tmp2536 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$667_212313->$data + 32));
                                        varDecl2535 = *$tmp2536;
                                        org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2278), ((panda$collections$List*) result2271));
                                        panda$core$Int64 $tmp2538 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        old2537 = $tmp2538;
                                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, self->bareCodeClass, position2529, dc2531, annotations2533, varDecl2535);
                                        panda$core$Int64 $tmp2540 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        panda$core$Bit$init$builtin_bit(&$tmp2541, false);
                                        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2539, old2537, $tmp2540, $tmp2541);
                                        int64_t $tmp2543 = $tmp2539.min.value;
                                        panda$core$Int64 i2542 = { $tmp2543 };
                                        int64_t $tmp2545 = $tmp2539.max.value;
                                        bool $tmp2546 = $tmp2539.inclusive.value;
                                        if ($tmp2546) goto $l2553; else goto $l2554;
                                        $l2553:;
                                        if ($tmp2543 <= $tmp2545) goto $l2547; else goto $l2549;
                                        $l2554:;
                                        if ($tmp2543 < $tmp2545) goto $l2547; else goto $l2549;
                                        $l2547:;
                                        {
                                            int $tmp2557;
                                            {
                                                panda$core$Object* $tmp2561 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->bareCodeClass->fields, i2542);
                                                $tmp2560 = $tmp2561;
                                                $tmp2559 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2560);
                                                f2558 = $tmp2559;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2559));
                                                panda$core$Panda$unref$panda$core$Object($tmp2560);
                                                panda$core$Int64$init$builtin_int64(&$tmp2563, 2);
                                                panda$core$Bit $tmp2564 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(f2558->fieldKind.$rawValue, $tmp2563);
                                                bool $tmp2562 = $tmp2564.value;
                                                if (!$tmp2562) goto $l2565;
                                                panda$core$Bit $tmp2566 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f2558->annotations);
                                                $tmp2562 = $tmp2566.value;
                                                $l2565:;
                                                panda$core$Bit $tmp2567 = { $tmp2562 };
                                                if ($tmp2567.value) {
                                                {
                                                    org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) f2558)->position, &$s2568);
                                                }
                                                }
                                            }
                                            $tmp2557 = -1;
                                            goto $l2555;
                                            $l2555:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f2558));
                                            f2558 = NULL;
                                            switch ($tmp2557) {
                                                case -1: goto $l2569;
                                            }
                                            $l2569:;
                                        }
                                        $l2550:;
                                        int64_t $tmp2571 = $tmp2545 - i2542.value;
                                        if ($tmp2546) goto $l2572; else goto $l2573;
                                        $l2572:;
                                        if ((uint64_t) $tmp2571 >= 1) goto $l2570; else goto $l2549;
                                        $l2573:;
                                        if ((uint64_t) $tmp2571 > 1) goto $l2570; else goto $l2549;
                                        $l2570:;
                                        i2542.value += 1;
                                        goto $l2547;
                                        $l2549:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp2576, false);
                                        if ($tmp2576.value) goto $l2577; else goto $l2578;
                                        $l2578:;
                                        panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2586, ((panda$core$Object*) e2303));
                                        $tmp2585 = $tmp2587;
                                        panda$core$String* $tmp2589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, &$s2588);
                                        $tmp2584 = $tmp2589;
                                        panda$core$Int64$wrapper* $tmp2591;
                                        $tmp2591 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                                        $tmp2591->value = e2303->$rawValue;
                                        $tmp2590 = ((panda$core$Object*) $tmp2591);
                                        panda$core$String* $tmp2592 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2584, $tmp2590);
                                        $tmp2583 = $tmp2592;
                                        panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2583, &$s2593);
                                        $tmp2582 = $tmp2594;
                                        org$pandalanguage$pandac$Position $tmp2597 = (($fn2596) e2303->$class->vtable[2])(e2303);
                                        org$pandalanguage$pandac$Position$wrapper* $tmp2598;
                                        $tmp2598 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                                        $tmp2598->value = $tmp2597;
                                        $tmp2595 = ((panda$core$Object*) $tmp2598);
                                        panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2582, $tmp2595);
                                        $tmp2581 = $tmp2599;
                                        panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2581, &$s2600);
                                        $tmp2580 = $tmp2601;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2579, (panda$core$Int64) { 752 }, $tmp2580);
                                        abort();
                                        $l2577:;
                                    }
                                    }
                                    }
                                    }
                                    }
                                    }
                                }
                                $tmp2312 = -1;
                                goto $l2310;
                                $l2310:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2314));
                                switch ($tmp2312) {
                                    case -1: goto $l2602;
                                }
                                $l2602:;
                            }
                            $tmp2302 = -1;
                            goto $l2300;
                            $l2300:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2303));
                            e2303 = NULL;
                            switch ($tmp2302) {
                                case -1: goto $l2603;
                            }
                            $l2603:;
                        }
                        goto $l2292;
                        $l2293:;
                    }
                    $tmp2284 = -1;
                    goto $l2282;
                    $l2282:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$666$172285));
                    Iter$666$172285 = NULL;
                    switch ($tmp2284) {
                        case -1: goto $l2604;
                    }
                    $l2604:;
                }
                {
                    $tmp2605 = self->source;
                    $tmp2606 = NULL;
                    self->source = $tmp2606;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2606));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2605));
                }
                $tmp2608 = ((panda$collections$ListView*) result2271);
                $returnValue2607 = $tmp2608;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2608));
                $tmp2270 = 0;
                goto $l2268;
                $l2609:;
                $tmp2261 = 0;
                goto $l2259;
                $l2610:;
                return $returnValue2607;
            }
            $l2268:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases2278));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage2275));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2271));
            result2271 = NULL;
            currentPackage2275 = NULL;
            aliases2278 = NULL;
            switch ($tmp2270) {
                case 0: goto $l2609;
            }
            $l2612:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2613, false);
            if ($tmp2613.value) goto $l2614; else goto $l2615;
            $l2615:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2616, (panda$core$Int64) { 758 });
            abort();
            $l2614:;
        }
        }
    }
    $tmp2261 = -1;
    goto $l2259;
    $l2259:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2263));
    switch ($tmp2261) {
        case 0: goto $l2610;
        case -1: goto $l2617;
    }
    $l2617:;
    abort();
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp2620;
    {
    }
    $tmp2620 = -1;
    goto $l2618;
    $l2618:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2620) {
        case -1: goto $l2621;
    }
    $l2621:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bareCodeClass));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}

