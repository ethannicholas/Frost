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
typedef panda$collections$Iterator* (*$fn530)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn537)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn548)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn690)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn697)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn708)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn737)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn744)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn755)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn801)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn808)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn819)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn850)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn857)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn868)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn904)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn911)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn922)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn951)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn958)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn969)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn995)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1002)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1013)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1027)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1034)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1045)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1146)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1153)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1164)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1188)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1195)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1206)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1220)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1227)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1238)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1262)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1269)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1280)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1322)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1329)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1340)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1425)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1432)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1443)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1481)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1500)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1507)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1518)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1732)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1739)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1750)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1819)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1826)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1837)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1875)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1897)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1904)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1915)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1965)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1972)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1983)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2022)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2029)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2040)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2147)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2154)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2165)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2200)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2207)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2218)(panda$collections$Iterator*);
typedef void (*$fn2255)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2336)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2343)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2354)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2472)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2479)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2490)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn2648)(org$pandalanguage$pandac$ASTNode*);

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
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static panda$core$String $s2226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static panda$core$String $s2444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s2652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };

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
    panda$core$Int64 $tmp650;
    panda$core$Int64 $tmp653;
    panda$core$Int64 $tmp655;
    panda$core$Int64 $tmp658;
    org$pandalanguage$pandac$ASTNode* left660 = NULL;
    org$pandalanguage$pandac$ASTNode* right662 = NULL;
    panda$core$Int64 $tmp664;
    panda$core$Int64 $tmp671;
    panda$core$Int64 $tmp673;
    panda$core$Int64 $tmp676;
    panda$collections$ImmutableArray* statements678 = NULL;
    panda$core$Int64 result680;
    panda$core$Int64 $tmp681;
    panda$collections$Iterator* Iter$237$17685 = NULL;
    panda$collections$Iterator* $tmp686;
    panda$collections$Iterator* $tmp687;
    org$pandalanguage$pandac$ASTNode* s703 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp704;
    panda$core$Object* $tmp705;
    panda$core$Int64 $tmp716;
    panda$core$Int64 $tmp718;
    panda$core$Int64 $tmp721;
    org$pandalanguage$pandac$ASTNode* target723 = NULL;
    panda$collections$ImmutableArray* args725 = NULL;
    panda$core$Int64 result727;
    panda$collections$Iterator* Iter$245$17732 = NULL;
    panda$collections$Iterator* $tmp733;
    panda$collections$Iterator* $tmp734;
    org$pandalanguage$pandac$ASTNode* a750 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp751;
    panda$core$Object* $tmp752;
    panda$core$Int64 $tmp763;
    org$pandalanguage$pandac$ASTNode* base765 = NULL;
    panda$core$Int64 $tmp770;
    panda$core$Int64 $tmp772;
    panda$core$Int64 $tmp775;
    org$pandalanguage$pandac$ASTNode* value777 = NULL;
    panda$core$Int64 $tmp779;
    panda$core$Int64 $tmp785;
    panda$collections$ImmutableArray* statements787 = NULL;
    org$pandalanguage$pandac$ASTNode* test789 = NULL;
    panda$core$Int64 result791;
    panda$collections$Iterator* Iter$260$17796 = NULL;
    panda$collections$Iterator* $tmp797;
    panda$collections$Iterator* $tmp798;
    org$pandalanguage$pandac$ASTNode* s814 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp815;
    panda$core$Object* $tmp816;
    panda$core$Int64 $tmp827;
    org$pandalanguage$pandac$ASTNode* base829 = NULL;
    panda$core$Int64 $tmp834;
    org$pandalanguage$pandac$ASTNode* list836 = NULL;
    panda$collections$ImmutableArray* statements838 = NULL;
    panda$core$Int64 result840;
    panda$collections$Iterator* Iter$268$17845 = NULL;
    panda$collections$Iterator* $tmp846;
    panda$collections$Iterator* $tmp847;
    org$pandalanguage$pandac$ASTNode* s863 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp864;
    panda$core$Object* $tmp865;
    panda$core$Int64 $tmp876;
    panda$core$Int64 $tmp878;
    panda$core$Int64 $tmp881;
    panda$core$Int64 $tmp883;
    panda$core$Int64 $tmp886;
    org$pandalanguage$pandac$ASTNode* test888 = NULL;
    panda$collections$ImmutableArray* ifTrue890 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse892 = NULL;
    panda$core$Int64 result894;
    panda$collections$Iterator* Iter$278$17899 = NULL;
    panda$collections$Iterator* $tmp900;
    panda$collections$Iterator* $tmp901;
    org$pandalanguage$pandac$ASTNode* s917 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp918;
    panda$core$Object* $tmp919;
    panda$core$Int64 $tmp932;
    panda$core$Int64 $tmp934;
    panda$core$Int64 $tmp937;
    panda$collections$ImmutableArray* statements939 = NULL;
    panda$core$Int64 result941;
    panda$core$Int64 $tmp942;
    panda$collections$Iterator* Iter$289$17946 = NULL;
    panda$collections$Iterator* $tmp947;
    panda$collections$Iterator* $tmp948;
    org$pandalanguage$pandac$ASTNode* s964 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp965;
    panda$core$Object* $tmp966;
    panda$core$Int64 $tmp977;
    org$pandalanguage$pandac$ASTNode* value979 = NULL;
    panda$collections$ImmutableArray* whens981 = NULL;
    panda$collections$ImmutableArray* other983 = NULL;
    panda$core$Int64 result985;
    panda$collections$Iterator* Iter$295$17990 = NULL;
    panda$collections$Iterator* $tmp991;
    panda$collections$Iterator* $tmp992;
    org$pandalanguage$pandac$ASTNode* w1008 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1009;
    panda$core$Object* $tmp1010;
    panda$collections$Iterator* Iter$299$211022 = NULL;
    panda$collections$Iterator* $tmp1023;
    panda$collections$Iterator* $tmp1024;
    org$pandalanguage$pandac$ASTNode* s1040 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1041;
    panda$core$Object* $tmp1042;
    panda$core$Int64 $tmp1053;
    panda$core$Int64 $tmp1055;
    panda$core$Int64 $tmp1058;
    panda$core$Int64 $tmp1060;
    panda$core$Int64 $tmp1063;
    panda$core$Int64 $tmp1065;
    panda$core$Int64 $tmp1068;
    org$pandalanguage$pandac$ASTNode* base1070 = NULL;
    panda$core$Int64 $tmp1072;
    panda$core$Int64 $tmp1077;
    panda$core$Int64 $tmp1079;
    panda$core$Int64 $tmp1082;
    panda$core$Int64 $tmp1084;
    panda$core$Int64 $tmp1087;
    panda$core$Int64 $tmp1089;
    panda$core$Int64 $tmp1092;
    org$pandalanguage$pandac$ASTNode* value1094 = NULL;
    panda$core$Int64 $tmp1096;
    panda$core$Int64 $tmp1102;
    panda$core$Int64 $tmp1104;
    panda$core$Int64 $tmp1107;
    panda$core$Int64 $tmp1109;
    panda$core$Int64 $tmp1112;
    panda$core$Int64 $tmp1114;
    panda$core$Int64 $tmp1117;
    panda$core$Int64 $tmp1119;
    panda$core$Int64 $tmp1122;
    panda$core$Int64 $tmp1124;
    panda$core$Int64 $tmp1127;
    panda$core$Int64 $tmp1129;
    panda$core$Int64 $tmp1132;
    panda$collections$ImmutableArray* decls1134 = NULL;
    panda$core$Int64 result1136;
    panda$core$Int64 $tmp1137;
    panda$collections$Iterator* Iter$337$171141 = NULL;
    panda$collections$Iterator* $tmp1142;
    panda$collections$Iterator* $tmp1143;
    org$pandalanguage$pandac$ASTNode* decl1159 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1160;
    panda$core$Object* $tmp1161;
    panda$core$Int64 $tmp1172;
    panda$collections$ImmutableArray* tests1174 = NULL;
    panda$collections$ImmutableArray* statements1176 = NULL;
    panda$core$Int64 result1178;
    panda$core$Int64 $tmp1179;
    panda$collections$Iterator* Iter$343$171183 = NULL;
    panda$collections$Iterator* $tmp1184;
    panda$collections$Iterator* $tmp1185;
    org$pandalanguage$pandac$ASTNode* test1201 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1202;
    panda$core$Object* $tmp1203;
    panda$collections$Iterator* Iter$346$171215 = NULL;
    panda$collections$Iterator* $tmp1216;
    panda$collections$Iterator* $tmp1217;
    org$pandalanguage$pandac$ASTNode* s1233 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1234;
    panda$core$Object* $tmp1235;
    panda$core$Int64 $tmp1246;
    org$pandalanguage$pandac$ASTNode* test1248 = NULL;
    panda$collections$ImmutableArray* statements1250 = NULL;
    panda$core$Int64 result1252;
    panda$collections$Iterator* Iter$352$171257 = NULL;
    panda$collections$Iterator* $tmp1258;
    panda$collections$Iterator* $tmp1259;
    org$pandalanguage$pandac$ASTNode* s1275 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1276;
    panda$core$Object* $tmp1277;
    panda$core$Bit $tmp1288;
    panda$core$String* $tmp1292;
    panda$core$String* $tmp1293;
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
        panda$core$Int64$init$builtin_int64(&$tmp648, 2);
        panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp648);
        if ($tmp649.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp650, 0);
            $returnValue644 = $tmp650;
            $tmp637 = 1;
            goto $l635;
            $l651:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp653, 3);
        panda$core$Bit $tmp654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp653);
        if ($tmp654.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp655, 0);
            $returnValue644 = $tmp655;
            $tmp637 = 2;
            goto $l635;
            $l656:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp658, 4);
        panda$core$Bit $tmp659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp658);
        if ($tmp659.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp661 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 16));
            left660 = *$tmp661;
            org$pandalanguage$pandac$ASTNode** $tmp663 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 32));
            right662 = *$tmp663;
            panda$core$Int64$init$builtin_int64(&$tmp664, 1);
            panda$core$Int64 $tmp665 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left660);
            panda$core$Int64 $tmp666 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp664, $tmp665);
            panda$core$Int64 $tmp667 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right662);
            panda$core$Int64 $tmp668 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp666, $tmp667);
            $returnValue644 = $tmp668;
            $tmp637 = 3;
            goto $l635;
            $l669:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp671, 5);
        panda$core$Bit $tmp672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp671);
        if ($tmp672.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp673, 1);
            $returnValue644 = $tmp673;
            $tmp637 = 4;
            goto $l635;
            $l674:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp676, 6);
        panda$core$Bit $tmp677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp676);
        if ($tmp677.value) {
        {
            panda$collections$ImmutableArray** $tmp679 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 16));
            statements678 = *$tmp679;
            panda$core$Int64$init$builtin_int64(&$tmp681, 0);
            result680 = $tmp681;
            {
                int $tmp684;
                {
                    ITable* $tmp688 = ((panda$collections$Iterable*) statements678)->$class->itable;
                    while ($tmp688->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp688 = $tmp688->next;
                    }
                    $fn690 $tmp689 = $tmp688->methods[0];
                    panda$collections$Iterator* $tmp691 = $tmp689(((panda$collections$Iterable*) statements678));
                    $tmp687 = $tmp691;
                    $tmp686 = $tmp687;
                    Iter$237$17685 = $tmp686;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp686));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp687));
                    $l692:;
                    ITable* $tmp695 = Iter$237$17685->$class->itable;
                    while ($tmp695->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp695 = $tmp695->next;
                    }
                    $fn697 $tmp696 = $tmp695->methods[0];
                    panda$core$Bit $tmp698 = $tmp696(Iter$237$17685);
                    panda$core$Bit $tmp699 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp698);
                    bool $tmp694 = $tmp699.value;
                    if (!$tmp694) goto $l693;
                    {
                        int $tmp702;
                        {
                            ITable* $tmp706 = Iter$237$17685->$class->itable;
                            while ($tmp706->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp706 = $tmp706->next;
                            }
                            $fn708 $tmp707 = $tmp706->methods[1];
                            panda$core$Object* $tmp709 = $tmp707(Iter$237$17685);
                            $tmp705 = $tmp709;
                            $tmp704 = ((org$pandalanguage$pandac$ASTNode*) $tmp705);
                            s703 = $tmp704;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp704));
                            panda$core$Panda$unref$panda$core$Object($tmp705);
                            panda$core$Int64 $tmp710 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s703);
                            panda$core$Int64 $tmp711 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result680, $tmp710);
                            result680 = $tmp711;
                        }
                        $tmp702 = -1;
                        goto $l700;
                        $l700:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s703));
                        s703 = NULL;
                        switch ($tmp702) {
                            case -1: goto $l712;
                        }
                        $l712:;
                    }
                    goto $l692;
                    $l693:;
                }
                $tmp684 = -1;
                goto $l682;
                $l682:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$237$17685));
                Iter$237$17685 = NULL;
                switch ($tmp684) {
                    case -1: goto $l713;
                }
                $l713:;
            }
            $returnValue644 = result680;
            $tmp637 = 5;
            goto $l635;
            $l714:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp716, 7);
        panda$core$Bit $tmp717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp716);
        if ($tmp717.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp718, 1);
            $returnValue644 = $tmp718;
            $tmp637 = 6;
            goto $l635;
            $l719:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp721, 8);
        panda$core$Bit $tmp722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp721);
        if ($tmp722.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp724 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 16));
            target723 = *$tmp724;
            panda$collections$ImmutableArray** $tmp726 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 24));
            args725 = *$tmp726;
            panda$core$Int64 $tmp728 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target723);
            result727 = $tmp728;
            {
                int $tmp731;
                {
                    ITable* $tmp735 = ((panda$collections$Iterable*) args725)->$class->itable;
                    while ($tmp735->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp735 = $tmp735->next;
                    }
                    $fn737 $tmp736 = $tmp735->methods[0];
                    panda$collections$Iterator* $tmp738 = $tmp736(((panda$collections$Iterable*) args725));
                    $tmp734 = $tmp738;
                    $tmp733 = $tmp734;
                    Iter$245$17732 = $tmp733;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp733));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp734));
                    $l739:;
                    ITable* $tmp742 = Iter$245$17732->$class->itable;
                    while ($tmp742->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp742 = $tmp742->next;
                    }
                    $fn744 $tmp743 = $tmp742->methods[0];
                    panda$core$Bit $tmp745 = $tmp743(Iter$245$17732);
                    panda$core$Bit $tmp746 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp745);
                    bool $tmp741 = $tmp746.value;
                    if (!$tmp741) goto $l740;
                    {
                        int $tmp749;
                        {
                            ITable* $tmp753 = Iter$245$17732->$class->itable;
                            while ($tmp753->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp753 = $tmp753->next;
                            }
                            $fn755 $tmp754 = $tmp753->methods[1];
                            panda$core$Object* $tmp756 = $tmp754(Iter$245$17732);
                            $tmp752 = $tmp756;
                            $tmp751 = ((org$pandalanguage$pandac$ASTNode*) $tmp752);
                            a750 = $tmp751;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp751));
                            panda$core$Panda$unref$panda$core$Object($tmp752);
                            panda$core$Int64 $tmp757 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a750);
                            panda$core$Int64 $tmp758 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result727, $tmp757);
                            result727 = $tmp758;
                        }
                        $tmp749 = -1;
                        goto $l747;
                        $l747:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a750));
                        a750 = NULL;
                        switch ($tmp749) {
                            case -1: goto $l759;
                        }
                        $l759:;
                    }
                    goto $l739;
                    $l740:;
                }
                $tmp731 = -1;
                goto $l729;
                $l729:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$245$17732));
                Iter$245$17732 = NULL;
                switch ($tmp731) {
                    case -1: goto $l760;
                }
                $l760:;
            }
            $returnValue644 = result727;
            $tmp637 = 7;
            goto $l635;
            $l761:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp763, 10);
        panda$core$Bit $tmp764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp763);
        if ($tmp764.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp766 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 16));
            base765 = *$tmp766;
            panda$core$Int64 $tmp767 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base765);
            $returnValue644 = $tmp767;
            $tmp637 = 8;
            goto $l635;
            $l768:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp770, 12);
        panda$core$Bit $tmp771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp770);
        if ($tmp771.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp772, 1);
            $returnValue644 = $tmp772;
            $tmp637 = 9;
            goto $l635;
            $l773:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp775, 13);
        panda$core$Bit $tmp776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp775);
        if ($tmp776.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp778 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 24));
            value777 = *$tmp778;
            if (((panda$core$Bit) { value777 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp779, 0);
                $returnValue644 = $tmp779;
                $tmp637 = 10;
                goto $l635;
                $l780:;
                return $returnValue644;
            }
            }
            panda$core$Int64 $tmp782 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value777);
            $returnValue644 = $tmp782;
            $tmp637 = 11;
            goto $l635;
            $l783:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp785, 14);
        panda$core$Bit $tmp786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp785);
        if ($tmp786.value) {
        {
            panda$collections$ImmutableArray** $tmp788 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 24));
            statements787 = *$tmp788;
            org$pandalanguage$pandac$ASTNode** $tmp790 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 32));
            test789 = *$tmp790;
            panda$core$Int64 $tmp792 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test789);
            result791 = $tmp792;
            {
                int $tmp795;
                {
                    ITable* $tmp799 = ((panda$collections$Iterable*) statements787)->$class->itable;
                    while ($tmp799->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp799 = $tmp799->next;
                    }
                    $fn801 $tmp800 = $tmp799->methods[0];
                    panda$collections$Iterator* $tmp802 = $tmp800(((panda$collections$Iterable*) statements787));
                    $tmp798 = $tmp802;
                    $tmp797 = $tmp798;
                    Iter$260$17796 = $tmp797;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp797));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp798));
                    $l803:;
                    ITable* $tmp806 = Iter$260$17796->$class->itable;
                    while ($tmp806->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp806 = $tmp806->next;
                    }
                    $fn808 $tmp807 = $tmp806->methods[0];
                    panda$core$Bit $tmp809 = $tmp807(Iter$260$17796);
                    panda$core$Bit $tmp810 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp809);
                    bool $tmp805 = $tmp810.value;
                    if (!$tmp805) goto $l804;
                    {
                        int $tmp813;
                        {
                            ITable* $tmp817 = Iter$260$17796->$class->itable;
                            while ($tmp817->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp817 = $tmp817->next;
                            }
                            $fn819 $tmp818 = $tmp817->methods[1];
                            panda$core$Object* $tmp820 = $tmp818(Iter$260$17796);
                            $tmp816 = $tmp820;
                            $tmp815 = ((org$pandalanguage$pandac$ASTNode*) $tmp816);
                            s814 = $tmp815;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp815));
                            panda$core$Panda$unref$panda$core$Object($tmp816);
                            panda$core$Int64 $tmp821 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s814);
                            panda$core$Int64 $tmp822 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result791, $tmp821);
                            result791 = $tmp822;
                        }
                        $tmp813 = -1;
                        goto $l811;
                        $l811:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s814));
                        s814 = NULL;
                        switch ($tmp813) {
                            case -1: goto $l823;
                        }
                        $l823:;
                    }
                    goto $l803;
                    $l804:;
                }
                $tmp795 = -1;
                goto $l793;
                $l793:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$260$17796));
                Iter$260$17796 = NULL;
                switch ($tmp795) {
                    case -1: goto $l824;
                }
                $l824:;
            }
            $returnValue644 = result791;
            $tmp637 = 12;
            goto $l635;
            $l825:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp827, 15);
        panda$core$Bit $tmp828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp827);
        if ($tmp828.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp830 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 16));
            base829 = *$tmp830;
            panda$core$Int64 $tmp831 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base829);
            $returnValue644 = $tmp831;
            $tmp637 = 13;
            goto $l635;
            $l832:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp834, 18);
        panda$core$Bit $tmp835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp834);
        if ($tmp835.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp837 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 32));
            list836 = *$tmp837;
            panda$collections$ImmutableArray** $tmp839 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 40));
            statements838 = *$tmp839;
            panda$core$Int64 $tmp841 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list836);
            result840 = $tmp841;
            {
                int $tmp844;
                {
                    ITable* $tmp848 = ((panda$collections$Iterable*) statements838)->$class->itable;
                    while ($tmp848->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp848 = $tmp848->next;
                    }
                    $fn850 $tmp849 = $tmp848->methods[0];
                    panda$collections$Iterator* $tmp851 = $tmp849(((panda$collections$Iterable*) statements838));
                    $tmp847 = $tmp851;
                    $tmp846 = $tmp847;
                    Iter$268$17845 = $tmp846;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp846));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp847));
                    $l852:;
                    ITable* $tmp855 = Iter$268$17845->$class->itable;
                    while ($tmp855->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp855 = $tmp855->next;
                    }
                    $fn857 $tmp856 = $tmp855->methods[0];
                    panda$core$Bit $tmp858 = $tmp856(Iter$268$17845);
                    panda$core$Bit $tmp859 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp858);
                    bool $tmp854 = $tmp859.value;
                    if (!$tmp854) goto $l853;
                    {
                        int $tmp862;
                        {
                            ITable* $tmp866 = Iter$268$17845->$class->itable;
                            while ($tmp866->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp866 = $tmp866->next;
                            }
                            $fn868 $tmp867 = $tmp866->methods[1];
                            panda$core$Object* $tmp869 = $tmp867(Iter$268$17845);
                            $tmp865 = $tmp869;
                            $tmp864 = ((org$pandalanguage$pandac$ASTNode*) $tmp865);
                            s863 = $tmp864;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp864));
                            panda$core$Panda$unref$panda$core$Object($tmp865);
                            panda$core$Int64 $tmp870 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s863);
                            panda$core$Int64 $tmp871 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result840, $tmp870);
                            result840 = $tmp871;
                        }
                        $tmp862 = -1;
                        goto $l860;
                        $l860:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s863));
                        s863 = NULL;
                        switch ($tmp862) {
                            case -1: goto $l872;
                        }
                        $l872:;
                    }
                    goto $l852;
                    $l853:;
                }
                $tmp844 = -1;
                goto $l842;
                $l842:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$268$17845));
                Iter$268$17845 = NULL;
                switch ($tmp844) {
                    case -1: goto $l873;
                }
                $l873:;
            }
            $returnValue644 = result840;
            $tmp637 = 14;
            goto $l635;
            $l874:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp876, 19);
        panda$core$Bit $tmp877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp876);
        if ($tmp877.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp878, 0);
            $returnValue644 = $tmp878;
            $tmp637 = 15;
            goto $l635;
            $l879:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp881, 20);
        panda$core$Bit $tmp882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp881);
        if ($tmp882.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp883, 1);
            $returnValue644 = $tmp883;
            $tmp637 = 16;
            goto $l635;
            $l884:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp886, 21);
        panda$core$Bit $tmp887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp886);
        if ($tmp887.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp889 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 16));
            test888 = *$tmp889;
            panda$collections$ImmutableArray** $tmp891 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 24));
            ifTrue890 = *$tmp891;
            org$pandalanguage$pandac$ASTNode** $tmp893 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 32));
            ifFalse892 = *$tmp893;
            panda$core$Int64 $tmp895 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test888);
            result894 = $tmp895;
            {
                int $tmp898;
                {
                    ITable* $tmp902 = ((panda$collections$Iterable*) ifTrue890)->$class->itable;
                    while ($tmp902->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp902 = $tmp902->next;
                    }
                    $fn904 $tmp903 = $tmp902->methods[0];
                    panda$collections$Iterator* $tmp905 = $tmp903(((panda$collections$Iterable*) ifTrue890));
                    $tmp901 = $tmp905;
                    $tmp900 = $tmp901;
                    Iter$278$17899 = $tmp900;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp900));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp901));
                    $l906:;
                    ITable* $tmp909 = Iter$278$17899->$class->itable;
                    while ($tmp909->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp909 = $tmp909->next;
                    }
                    $fn911 $tmp910 = $tmp909->methods[0];
                    panda$core$Bit $tmp912 = $tmp910(Iter$278$17899);
                    panda$core$Bit $tmp913 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp912);
                    bool $tmp908 = $tmp913.value;
                    if (!$tmp908) goto $l907;
                    {
                        int $tmp916;
                        {
                            ITable* $tmp920 = Iter$278$17899->$class->itable;
                            while ($tmp920->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp920 = $tmp920->next;
                            }
                            $fn922 $tmp921 = $tmp920->methods[1];
                            panda$core$Object* $tmp923 = $tmp921(Iter$278$17899);
                            $tmp919 = $tmp923;
                            $tmp918 = ((org$pandalanguage$pandac$ASTNode*) $tmp919);
                            s917 = $tmp918;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp918));
                            panda$core$Panda$unref$panda$core$Object($tmp919);
                            panda$core$Int64 $tmp924 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s917);
                            panda$core$Int64 $tmp925 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result894, $tmp924);
                            result894 = $tmp925;
                        }
                        $tmp916 = -1;
                        goto $l914;
                        $l914:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s917));
                        s917 = NULL;
                        switch ($tmp916) {
                            case -1: goto $l926;
                        }
                        $l926:;
                    }
                    goto $l906;
                    $l907:;
                }
                $tmp898 = -1;
                goto $l896;
                $l896:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$278$17899));
                Iter$278$17899 = NULL;
                switch ($tmp898) {
                    case -1: goto $l927;
                }
                $l927:;
            }
            if (((panda$core$Bit) { ifFalse892 != NULL }).value) {
            {
                panda$core$Int64 $tmp928 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse892);
                panda$core$Int64 $tmp929 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result894, $tmp928);
                result894 = $tmp929;
            }
            }
            $returnValue644 = result894;
            $tmp637 = 17;
            goto $l635;
            $l930:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp932, 22);
        panda$core$Bit $tmp933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp932);
        if ($tmp933.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp934, 1);
            $returnValue644 = $tmp934;
            $tmp637 = 18;
            goto $l635;
            $l935:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp937, 24);
        panda$core$Bit $tmp938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp937);
        if ($tmp938.value) {
        {
            panda$collections$ImmutableArray** $tmp940 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 24));
            statements939 = *$tmp940;
            panda$core$Int64$init$builtin_int64(&$tmp942, 0);
            result941 = $tmp942;
            {
                int $tmp945;
                {
                    ITable* $tmp949 = ((panda$collections$Iterable*) statements939)->$class->itable;
                    while ($tmp949->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp949 = $tmp949->next;
                    }
                    $fn951 $tmp950 = $tmp949->methods[0];
                    panda$collections$Iterator* $tmp952 = $tmp950(((panda$collections$Iterable*) statements939));
                    $tmp948 = $tmp952;
                    $tmp947 = $tmp948;
                    Iter$289$17946 = $tmp947;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp947));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp948));
                    $l953:;
                    ITable* $tmp956 = Iter$289$17946->$class->itable;
                    while ($tmp956->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp956 = $tmp956->next;
                    }
                    $fn958 $tmp957 = $tmp956->methods[0];
                    panda$core$Bit $tmp959 = $tmp957(Iter$289$17946);
                    panda$core$Bit $tmp960 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp959);
                    bool $tmp955 = $tmp960.value;
                    if (!$tmp955) goto $l954;
                    {
                        int $tmp963;
                        {
                            ITable* $tmp967 = Iter$289$17946->$class->itable;
                            while ($tmp967->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp967 = $tmp967->next;
                            }
                            $fn969 $tmp968 = $tmp967->methods[1];
                            panda$core$Object* $tmp970 = $tmp968(Iter$289$17946);
                            $tmp966 = $tmp970;
                            $tmp965 = ((org$pandalanguage$pandac$ASTNode*) $tmp966);
                            s964 = $tmp965;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp965));
                            panda$core$Panda$unref$panda$core$Object($tmp966);
                            panda$core$Int64 $tmp971 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s964);
                            panda$core$Int64 $tmp972 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result941, $tmp971);
                            result941 = $tmp972;
                        }
                        $tmp963 = -1;
                        goto $l961;
                        $l961:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s964));
                        s964 = NULL;
                        switch ($tmp963) {
                            case -1: goto $l973;
                        }
                        $l973:;
                    }
                    goto $l953;
                    $l954:;
                }
                $tmp945 = -1;
                goto $l943;
                $l943:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$289$17946));
                Iter$289$17946 = NULL;
                switch ($tmp945) {
                    case -1: goto $l974;
                }
                $l974:;
            }
            $returnValue644 = result941;
            $tmp637 = 19;
            goto $l635;
            $l975:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp977, 25);
        panda$core$Bit $tmp978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp977);
        if ($tmp978.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp980 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 16));
            value979 = *$tmp980;
            panda$collections$ImmutableArray** $tmp982 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 24));
            whens981 = *$tmp982;
            panda$collections$ImmutableArray** $tmp984 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 32));
            other983 = *$tmp984;
            panda$core$Int64 $tmp986 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value979);
            result985 = $tmp986;
            {
                int $tmp989;
                {
                    ITable* $tmp993 = ((panda$collections$Iterable*) whens981)->$class->itable;
                    while ($tmp993->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp993 = $tmp993->next;
                    }
                    $fn995 $tmp994 = $tmp993->methods[0];
                    panda$collections$Iterator* $tmp996 = $tmp994(((panda$collections$Iterable*) whens981));
                    $tmp992 = $tmp996;
                    $tmp991 = $tmp992;
                    Iter$295$17990 = $tmp991;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp991));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp992));
                    $l997:;
                    ITable* $tmp1000 = Iter$295$17990->$class->itable;
                    while ($tmp1000->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1000 = $tmp1000->next;
                    }
                    $fn1002 $tmp1001 = $tmp1000->methods[0];
                    panda$core$Bit $tmp1003 = $tmp1001(Iter$295$17990);
                    panda$core$Bit $tmp1004 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1003);
                    bool $tmp999 = $tmp1004.value;
                    if (!$tmp999) goto $l998;
                    {
                        int $tmp1007;
                        {
                            ITable* $tmp1011 = Iter$295$17990->$class->itable;
                            while ($tmp1011->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1011 = $tmp1011->next;
                            }
                            $fn1013 $tmp1012 = $tmp1011->methods[1];
                            panda$core$Object* $tmp1014 = $tmp1012(Iter$295$17990);
                            $tmp1010 = $tmp1014;
                            $tmp1009 = ((org$pandalanguage$pandac$ASTNode*) $tmp1010);
                            w1008 = $tmp1009;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1009));
                            panda$core$Panda$unref$panda$core$Object($tmp1010);
                            panda$core$Int64 $tmp1015 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w1008);
                            panda$core$Int64 $tmp1016 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result985, $tmp1015);
                            result985 = $tmp1016;
                        }
                        $tmp1007 = -1;
                        goto $l1005;
                        $l1005:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1008));
                        w1008 = NULL;
                        switch ($tmp1007) {
                            case -1: goto $l1017;
                        }
                        $l1017:;
                    }
                    goto $l997;
                    $l998:;
                }
                $tmp989 = -1;
                goto $l987;
                $l987:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$295$17990));
                Iter$295$17990 = NULL;
                switch ($tmp989) {
                    case -1: goto $l1018;
                }
                $l1018:;
            }
            if (((panda$core$Bit) { other983 != NULL }).value) {
            {
                {
                    int $tmp1021;
                    {
                        ITable* $tmp1025 = ((panda$collections$Iterable*) other983)->$class->itable;
                        while ($tmp1025->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1025 = $tmp1025->next;
                        }
                        $fn1027 $tmp1026 = $tmp1025->methods[0];
                        panda$collections$Iterator* $tmp1028 = $tmp1026(((panda$collections$Iterable*) other983));
                        $tmp1024 = $tmp1028;
                        $tmp1023 = $tmp1024;
                        Iter$299$211022 = $tmp1023;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1023));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1024));
                        $l1029:;
                        ITable* $tmp1032 = Iter$299$211022->$class->itable;
                        while ($tmp1032->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1032 = $tmp1032->next;
                        }
                        $fn1034 $tmp1033 = $tmp1032->methods[0];
                        panda$core$Bit $tmp1035 = $tmp1033(Iter$299$211022);
                        panda$core$Bit $tmp1036 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1035);
                        bool $tmp1031 = $tmp1036.value;
                        if (!$tmp1031) goto $l1030;
                        {
                            int $tmp1039;
                            {
                                ITable* $tmp1043 = Iter$299$211022->$class->itable;
                                while ($tmp1043->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1043 = $tmp1043->next;
                                }
                                $fn1045 $tmp1044 = $tmp1043->methods[1];
                                panda$core$Object* $tmp1046 = $tmp1044(Iter$299$211022);
                                $tmp1042 = $tmp1046;
                                $tmp1041 = ((org$pandalanguage$pandac$ASTNode*) $tmp1042);
                                s1040 = $tmp1041;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1041));
                                panda$core$Panda$unref$panda$core$Object($tmp1042);
                                panda$core$Int64 $tmp1047 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1040);
                                panda$core$Int64 $tmp1048 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result985, $tmp1047);
                                result985 = $tmp1048;
                            }
                            $tmp1039 = -1;
                            goto $l1037;
                            $l1037:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1040));
                            s1040 = NULL;
                            switch ($tmp1039) {
                                case -1: goto $l1049;
                            }
                            $l1049:;
                        }
                        goto $l1029;
                        $l1030:;
                    }
                    $tmp1021 = -1;
                    goto $l1019;
                    $l1019:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$299$211022));
                    Iter$299$211022 = NULL;
                    switch ($tmp1021) {
                        case -1: goto $l1050;
                    }
                    $l1050:;
                }
            }
            }
            $returnValue644 = result985;
            $tmp637 = 20;
            goto $l635;
            $l1051:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1053, 26);
        panda$core$Bit $tmp1054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1053);
        if ($tmp1054.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1055, 10);
            $returnValue644 = $tmp1055;
            $tmp637 = 21;
            goto $l635;
            $l1056:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1058, 28);
        panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1058);
        if ($tmp1059.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1060, 1);
            $returnValue644 = $tmp1060;
            $tmp637 = 22;
            goto $l635;
            $l1061:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1063, 29);
        panda$core$Bit $tmp1064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1063);
        if ($tmp1064.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1065, 0);
            $returnValue644 = $tmp1065;
            $tmp637 = 23;
            goto $l635;
            $l1066:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1068, 32);
        panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1068);
        if ($tmp1069.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1071 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 24));
            base1070 = *$tmp1071;
            panda$core$Int64$init$builtin_int64(&$tmp1072, 1);
            panda$core$Int64 $tmp1073 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base1070);
            panda$core$Int64 $tmp1074 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1072, $tmp1073);
            $returnValue644 = $tmp1074;
            $tmp637 = 24;
            goto $l635;
            $l1075:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1077, 33);
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
        panda$core$Int64$init$builtin_int64(&$tmp1082, 34);
        panda$core$Bit $tmp1083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1082);
        if ($tmp1083.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1084, 1);
            $returnValue644 = $tmp1084;
            $tmp637 = 26;
            goto $l635;
            $l1085:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1087, 35);
        panda$core$Bit $tmp1088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1087);
        if ($tmp1088.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1089, 1);
            $returnValue644 = $tmp1089;
            $tmp637 = 27;
            goto $l635;
            $l1090:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1092, 36);
        panda$core$Bit $tmp1093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1092);
        if ($tmp1093.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1095 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 16));
            value1094 = *$tmp1095;
            if (((panda$core$Bit) { value1094 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp1096, 0);
                $returnValue644 = $tmp1096;
                $tmp637 = 28;
                goto $l635;
                $l1097:;
                return $returnValue644;
            }
            }
            panda$core$Int64 $tmp1099 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value1094);
            $returnValue644 = $tmp1099;
            $tmp637 = 29;
            goto $l635;
            $l1100:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1102, 37);
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
        panda$core$Int64$init$builtin_int64(&$tmp1107, 38);
        panda$core$Bit $tmp1108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1107);
        if ($tmp1108.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1109, 1);
            $returnValue644 = $tmp1109;
            $tmp637 = 31;
            goto $l635;
            $l1110:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1112, 39);
        panda$core$Bit $tmp1113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1112);
        if ($tmp1113.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1114, 1);
            $returnValue644 = $tmp1114;
            $tmp637 = 32;
            goto $l635;
            $l1115:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1117, 42);
        panda$core$Bit $tmp1118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1117);
        if ($tmp1118.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1119, 0);
            $returnValue644 = $tmp1119;
            $tmp637 = 33;
            goto $l635;
            $l1120:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1122, 43);
        panda$core$Bit $tmp1123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1122);
        if ($tmp1123.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1124, 10);
            $returnValue644 = $tmp1124;
            $tmp637 = 34;
            goto $l635;
            $l1125:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1127, 45);
        panda$core$Bit $tmp1128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1127);
        if ($tmp1128.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1129, 10);
            $returnValue644 = $tmp1129;
            $tmp637 = 35;
            goto $l635;
            $l1130:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1132, 47);
        panda$core$Bit $tmp1133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1132);
        if ($tmp1133.value) {
        {
            panda$collections$ImmutableArray** $tmp1135 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 24));
            decls1134 = *$tmp1135;
            panda$core$Int64$init$builtin_int64(&$tmp1137, 0);
            result1136 = $tmp1137;
            {
                int $tmp1140;
                {
                    ITable* $tmp1144 = ((panda$collections$Iterable*) decls1134)->$class->itable;
                    while ($tmp1144->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1144 = $tmp1144->next;
                    }
                    $fn1146 $tmp1145 = $tmp1144->methods[0];
                    panda$collections$Iterator* $tmp1147 = $tmp1145(((panda$collections$Iterable*) decls1134));
                    $tmp1143 = $tmp1147;
                    $tmp1142 = $tmp1143;
                    Iter$337$171141 = $tmp1142;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1142));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1143));
                    $l1148:;
                    ITable* $tmp1151 = Iter$337$171141->$class->itable;
                    while ($tmp1151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1151 = $tmp1151->next;
                    }
                    $fn1153 $tmp1152 = $tmp1151->methods[0];
                    panda$core$Bit $tmp1154 = $tmp1152(Iter$337$171141);
                    panda$core$Bit $tmp1155 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1154);
                    bool $tmp1150 = $tmp1155.value;
                    if (!$tmp1150) goto $l1149;
                    {
                        int $tmp1158;
                        {
                            ITable* $tmp1162 = Iter$337$171141->$class->itable;
                            while ($tmp1162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1162 = $tmp1162->next;
                            }
                            $fn1164 $tmp1163 = $tmp1162->methods[1];
                            panda$core$Object* $tmp1165 = $tmp1163(Iter$337$171141);
                            $tmp1161 = $tmp1165;
                            $tmp1160 = ((org$pandalanguage$pandac$ASTNode*) $tmp1161);
                            decl1159 = $tmp1160;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1160));
                            panda$core$Panda$unref$panda$core$Object($tmp1161);
                            panda$core$Int64 $tmp1166 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl1159);
                            panda$core$Int64 $tmp1167 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1136, $tmp1166);
                            result1136 = $tmp1167;
                        }
                        $tmp1158 = -1;
                        goto $l1156;
                        $l1156:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1159));
                        decl1159 = NULL;
                        switch ($tmp1158) {
                            case -1: goto $l1168;
                        }
                        $l1168:;
                    }
                    goto $l1148;
                    $l1149:;
                }
                $tmp1140 = -1;
                goto $l1138;
                $l1138:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$337$171141));
                Iter$337$171141 = NULL;
                switch ($tmp1140) {
                    case -1: goto $l1169;
                }
                $l1169:;
            }
            $returnValue644 = result1136;
            $tmp637 = 36;
            goto $l635;
            $l1170:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1172, 48);
        panda$core$Bit $tmp1173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1172);
        if ($tmp1173.value) {
        {
            panda$collections$ImmutableArray** $tmp1175 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 16));
            tests1174 = *$tmp1175;
            panda$collections$ImmutableArray** $tmp1177 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 24));
            statements1176 = *$tmp1177;
            panda$core$Int64$init$builtin_int64(&$tmp1179, 0);
            result1178 = $tmp1179;
            {
                int $tmp1182;
                {
                    ITable* $tmp1186 = ((panda$collections$Iterable*) tests1174)->$class->itable;
                    while ($tmp1186->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1186 = $tmp1186->next;
                    }
                    $fn1188 $tmp1187 = $tmp1186->methods[0];
                    panda$collections$Iterator* $tmp1189 = $tmp1187(((panda$collections$Iterable*) tests1174));
                    $tmp1185 = $tmp1189;
                    $tmp1184 = $tmp1185;
                    Iter$343$171183 = $tmp1184;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1184));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1185));
                    $l1190:;
                    ITable* $tmp1193 = Iter$343$171183->$class->itable;
                    while ($tmp1193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1193 = $tmp1193->next;
                    }
                    $fn1195 $tmp1194 = $tmp1193->methods[0];
                    panda$core$Bit $tmp1196 = $tmp1194(Iter$343$171183);
                    panda$core$Bit $tmp1197 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1196);
                    bool $tmp1192 = $tmp1197.value;
                    if (!$tmp1192) goto $l1191;
                    {
                        int $tmp1200;
                        {
                            ITable* $tmp1204 = Iter$343$171183->$class->itable;
                            while ($tmp1204->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1204 = $tmp1204->next;
                            }
                            $fn1206 $tmp1205 = $tmp1204->methods[1];
                            panda$core$Object* $tmp1207 = $tmp1205(Iter$343$171183);
                            $tmp1203 = $tmp1207;
                            $tmp1202 = ((org$pandalanguage$pandac$ASTNode*) $tmp1203);
                            test1201 = $tmp1202;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1202));
                            panda$core$Panda$unref$panda$core$Object($tmp1203);
                            panda$core$Int64 $tmp1208 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1201);
                            panda$core$Int64 $tmp1209 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1178, $tmp1208);
                            result1178 = $tmp1209;
                        }
                        $tmp1200 = -1;
                        goto $l1198;
                        $l1198:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1201));
                        test1201 = NULL;
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$343$171183));
                Iter$343$171183 = NULL;
                switch ($tmp1182) {
                    case -1: goto $l1211;
                }
                $l1211:;
            }
            {
                int $tmp1214;
                {
                    ITable* $tmp1218 = ((panda$collections$Iterable*) statements1176)->$class->itable;
                    while ($tmp1218->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1218 = $tmp1218->next;
                    }
                    $fn1220 $tmp1219 = $tmp1218->methods[0];
                    panda$collections$Iterator* $tmp1221 = $tmp1219(((panda$collections$Iterable*) statements1176));
                    $tmp1217 = $tmp1221;
                    $tmp1216 = $tmp1217;
                    Iter$346$171215 = $tmp1216;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1216));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1217));
                    $l1222:;
                    ITable* $tmp1225 = Iter$346$171215->$class->itable;
                    while ($tmp1225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1225 = $tmp1225->next;
                    }
                    $fn1227 $tmp1226 = $tmp1225->methods[0];
                    panda$core$Bit $tmp1228 = $tmp1226(Iter$346$171215);
                    panda$core$Bit $tmp1229 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1228);
                    bool $tmp1224 = $tmp1229.value;
                    if (!$tmp1224) goto $l1223;
                    {
                        int $tmp1232;
                        {
                            ITable* $tmp1236 = Iter$346$171215->$class->itable;
                            while ($tmp1236->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1236 = $tmp1236->next;
                            }
                            $fn1238 $tmp1237 = $tmp1236->methods[1];
                            panda$core$Object* $tmp1239 = $tmp1237(Iter$346$171215);
                            $tmp1235 = $tmp1239;
                            $tmp1234 = ((org$pandalanguage$pandac$ASTNode*) $tmp1235);
                            s1233 = $tmp1234;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1234));
                            panda$core$Panda$unref$panda$core$Object($tmp1235);
                            panda$core$Int64 $tmp1240 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1233);
                            panda$core$Int64 $tmp1241 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1178, $tmp1240);
                            result1178 = $tmp1241;
                        }
                        $tmp1232 = -1;
                        goto $l1230;
                        $l1230:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1233));
                        s1233 = NULL;
                        switch ($tmp1232) {
                            case -1: goto $l1242;
                        }
                        $l1242:;
                    }
                    goto $l1222;
                    $l1223:;
                }
                $tmp1214 = -1;
                goto $l1212;
                $l1212:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$346$171215));
                Iter$346$171215 = NULL;
                switch ($tmp1214) {
                    case -1: goto $l1243;
                }
                $l1243:;
            }
            $returnValue644 = result1178;
            $tmp637 = 37;
            goto $l635;
            $l1244:;
            return $returnValue644;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1246, 49);
        panda$core$Bit $tmp1247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$224_9638->$rawValue, $tmp1246);
        if ($tmp1247.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1249 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$224_9638->$data + 24));
            test1248 = *$tmp1249;
            panda$collections$ImmutableArray** $tmp1251 = ((panda$collections$ImmutableArray**) ((char*) $match$224_9638->$data + 32));
            statements1250 = *$tmp1251;
            panda$core$Int64 $tmp1253 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1248);
            result1252 = $tmp1253;
            {
                int $tmp1256;
                {
                    ITable* $tmp1260 = ((panda$collections$Iterable*) statements1250)->$class->itable;
                    while ($tmp1260->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1260 = $tmp1260->next;
                    }
                    $fn1262 $tmp1261 = $tmp1260->methods[0];
                    panda$collections$Iterator* $tmp1263 = $tmp1261(((panda$collections$Iterable*) statements1250));
                    $tmp1259 = $tmp1263;
                    $tmp1258 = $tmp1259;
                    Iter$352$171257 = $tmp1258;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1258));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1259));
                    $l1264:;
                    ITable* $tmp1267 = Iter$352$171257->$class->itable;
                    while ($tmp1267->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1267 = $tmp1267->next;
                    }
                    $fn1269 $tmp1268 = $tmp1267->methods[0];
                    panda$core$Bit $tmp1270 = $tmp1268(Iter$352$171257);
                    panda$core$Bit $tmp1271 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1270);
                    bool $tmp1266 = $tmp1271.value;
                    if (!$tmp1266) goto $l1265;
                    {
                        int $tmp1274;
                        {
                            ITable* $tmp1278 = Iter$352$171257->$class->itable;
                            while ($tmp1278->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1278 = $tmp1278->next;
                            }
                            $fn1280 $tmp1279 = $tmp1278->methods[1];
                            panda$core$Object* $tmp1281 = $tmp1279(Iter$352$171257);
                            $tmp1277 = $tmp1281;
                            $tmp1276 = ((org$pandalanguage$pandac$ASTNode*) $tmp1277);
                            s1275 = $tmp1276;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1276));
                            panda$core$Panda$unref$panda$core$Object($tmp1277);
                            panda$core$Int64 $tmp1282 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1275);
                            panda$core$Int64 $tmp1283 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1252, $tmp1282);
                            result1252 = $tmp1283;
                        }
                        $tmp1274 = -1;
                        goto $l1272;
                        $l1272:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1275));
                        s1275 = NULL;
                        switch ($tmp1274) {
                            case -1: goto $l1284;
                        }
                        $l1284:;
                    }
                    goto $l1264;
                    $l1265:;
                }
                $tmp1256 = -1;
                goto $l1254;
                $l1254:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$352$171257));
                Iter$352$171257 = NULL;
                switch ($tmp1256) {
                    case -1: goto $l1285;
                }
                $l1285:;
            }
            $returnValue644 = result1252;
            $tmp637 = 38;
            goto $l635;
            $l1286:;
            return $returnValue644;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1288, false);
            if ($tmp1288.value) goto $l1289; else goto $l1290;
            $l1290:;
            panda$core$String* $tmp1295 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1294, ((panda$core$Object*) p_node));
            $tmp1293 = $tmp1295;
            panda$core$String* $tmp1297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1293, &$s1296);
            $tmp1292 = $tmp1297;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1291, (panda$core$Int64) { 357 }, $tmp1292);
            abort();
            $l1289:;
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
    $tmp637 = -1;
    goto $l635;
    $l635:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
    switch ($tmp637) {
        case 25: goto $l1080;
        case 35: goto $l1130;
        case 9: goto $l773;
        case 34: goto $l1125;
        case 2: goto $l656;
        case 8: goto $l768;
        case 3: goto $l669;
        case 7: goto $l761;
        case 18: goto $l935;
        case 15: goto $l879;
        case 19: goto $l975;
        case 38: goto $l1286;
        case 14: goto $l874;
        case 31: goto $l1110;
        case -1: goto $l1298;
        case 4: goto $l674;
        case 21: goto $l1056;
        case 0: goto $l646;
        case 16: goto $l884;
        case 22: goto $l1061;
        case 33: goto $l1120;
        case 20: goto $l1051;
        case 23: goto $l1066;
        case 26: goto $l1085;
        case 28: goto $l1097;
        case 17: goto $l930;
        case 37: goto $l1244;
        case 6: goto $l719;
        case 5: goto $l714;
        case 29: goto $l1100;
        case 10: goto $l780;
        case 24: goto $l1075;
        case 36: goto $l1170;
        case 30: goto $l1105;
        case 32: goto $l1115;
        case 12: goto $l825;
        case 13: goto $l832;
        case 11: goto $l783;
        case 27: goto $l1090;
        case 1: goto $l651;
    }
    $l1298:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1301;
    panda$core$Int64 $tmp1303;
    panda$core$Int64 c1312;
    panda$core$Int64 $tmp1313;
    panda$collections$Iterator* Iter$365$131317 = NULL;
    panda$collections$Iterator* $tmp1318;
    panda$collections$Iterator* $tmp1319;
    org$pandalanguage$pandac$ASTNode* s1335 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1336;
    panda$core$Object* $tmp1337;
    panda$core$Int64 $tmp1344;
    panda$core$Bit $returnValue1346;
    panda$core$Bit $tmp1347;
    panda$core$Bit $tmp1353;
    panda$core$Bit $tmp1355;
    panda$core$Object* $tmp1302 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp1301 = $tmp1302;
    panda$core$Int64$init$builtin_int64(&$tmp1303, 0);
    panda$core$Bit $tmp1304 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1301)->settings->optimizationLevel, $tmp1303);
    bool $tmp1300 = $tmp1304.value;
    panda$core$Panda$unref$panda$core$Object($tmp1301);
    if (!$tmp1300) goto $l1305;
    panda$core$Bit $tmp1306 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1307 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1306);
    $tmp1300 = $tmp1307.value;
    $l1305:;
    panda$core$Bit $tmp1308 = { $tmp1300 };
    bool $tmp1299 = $tmp1308.value;
    if (!$tmp1299) goto $l1309;
    panda$core$Bit $tmp1310 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1299 = $tmp1310.value;
    $l1309:;
    panda$core$Bit $tmp1311 = { $tmp1299 };
    if ($tmp1311.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1313, 0);
        c1312 = $tmp1313;
        {
            int $tmp1316;
            {
                ITable* $tmp1320 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1320->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1320 = $tmp1320->next;
                }
                $fn1322 $tmp1321 = $tmp1320->methods[0];
                panda$collections$Iterator* $tmp1323 = $tmp1321(((panda$collections$Iterable*) p_statements));
                $tmp1319 = $tmp1323;
                $tmp1318 = $tmp1319;
                Iter$365$131317 = $tmp1318;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1318));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
                $l1324:;
                ITable* $tmp1327 = Iter$365$131317->$class->itable;
                while ($tmp1327->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1327 = $tmp1327->next;
                }
                $fn1329 $tmp1328 = $tmp1327->methods[0];
                panda$core$Bit $tmp1330 = $tmp1328(Iter$365$131317);
                panda$core$Bit $tmp1331 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1330);
                bool $tmp1326 = $tmp1331.value;
                if (!$tmp1326) goto $l1325;
                {
                    int $tmp1334;
                    {
                        ITable* $tmp1338 = Iter$365$131317->$class->itable;
                        while ($tmp1338->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1338 = $tmp1338->next;
                        }
                        $fn1340 $tmp1339 = $tmp1338->methods[1];
                        panda$core$Object* $tmp1341 = $tmp1339(Iter$365$131317);
                        $tmp1337 = $tmp1341;
                        $tmp1336 = ((org$pandalanguage$pandac$ASTNode*) $tmp1337);
                        s1335 = $tmp1336;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1336));
                        panda$core$Panda$unref$panda$core$Object($tmp1337);
                        panda$core$Int64 $tmp1342 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1335);
                        panda$core$Int64 $tmp1343 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1312, $tmp1342);
                        c1312 = $tmp1343;
                        panda$core$Int64$init$builtin_int64(&$tmp1344, 10);
                        panda$core$Bit $tmp1345 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1312, $tmp1344);
                        if ($tmp1345.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp1347, false);
                            $returnValue1346 = $tmp1347;
                            $tmp1334 = 0;
                            goto $l1332;
                            $l1348:;
                            $tmp1316 = 0;
                            goto $l1314;
                            $l1349:;
                            return $returnValue1346;
                        }
                        }
                    }
                    $tmp1334 = -1;
                    goto $l1332;
                    $l1332:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1335));
                    s1335 = NULL;
                    switch ($tmp1334) {
                        case -1: goto $l1351;
                        case 0: goto $l1348;
                    }
                    $l1351:;
                }
                goto $l1324;
                $l1325:;
            }
            $tmp1316 = -1;
            goto $l1314;
            $l1314:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$365$131317));
            Iter$365$131317 = NULL;
            switch ($tmp1316) {
                case -1: goto $l1352;
                case 0: goto $l1349;
            }
            $l1352:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp1353, true);
        $returnValue1346 = $tmp1353;
        return $returnValue1346;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1355, false);
    $returnValue1346 = $tmp1355;
    return $returnValue1346;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawGenerics, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1360 = NULL;
    panda$core$String* $tmp1361;
    panda$core$String* $tmp1362;
    org$pandalanguage$pandac$ASTNode* $match$386_131366 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1367;
    panda$core$Int64 $tmp1368;
    org$pandalanguage$pandac$Position position1370;
    panda$core$String* text1372 = NULL;
    panda$core$String* $tmp1374;
    panda$core$String* $tmp1375;
    panda$core$Bit $tmp1376;
    org$pandalanguage$pandac$Annotations* annotations1381 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1382;
    org$pandalanguage$pandac$Annotations* $tmp1383;
    panda$core$Int64 $tmp1387;
    panda$core$Int64 $tmp1395;
    panda$collections$Array* generics1397 = NULL;
    panda$collections$Array* $tmp1401;
    panda$collections$Array* $tmp1402;
    panda$collections$Array* $tmp1403;
    panda$core$String* fullName1405 = NULL;
    panda$core$String* $tmp1406;
    panda$core$String* $tmp1407;
    panda$core$String* $tmp1408;
    panda$core$String* $tmp1409;
    panda$core$String* $tmp1410;
    panda$collections$Iterator* Iter$401$131420 = NULL;
    panda$collections$Iterator* $tmp1421;
    panda$collections$Iterator* $tmp1422;
    org$pandalanguage$pandac$ASTNode* p1438 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1439;
    panda$core$Object* $tmp1440;
    panda$core$String* parameterName1445 = NULL;
    org$pandalanguage$pandac$Type* bound1446 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$404_171450 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1451;
    panda$core$Int64 $tmp1452;
    panda$core$String* id1454 = NULL;
    panda$core$String* $tmp1456;
    panda$core$String* $tmp1457;
    org$pandalanguage$pandac$Type* $tmp1458;
    org$pandalanguage$pandac$Type* $tmp1459;
    org$pandalanguage$pandac$Type* $tmp1460;
    panda$core$Int64 $tmp1462;
    panda$core$String* id1464 = NULL;
    org$pandalanguage$pandac$ASTNode* type1466 = NULL;
    panda$core$String* $tmp1468;
    panda$core$String* $tmp1469;
    org$pandalanguage$pandac$Type* $tmp1470;
    org$pandalanguage$pandac$Type* $tmp1471;
    org$pandalanguage$pandac$Type* $tmp1472;
    panda$core$Bit $tmp1474;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1479;
    panda$collections$Array* $tmp1486;
    panda$collections$Array* $tmp1487;
    panda$collections$Array* parameters1488 = NULL;
    panda$collections$Array* $tmp1489;
    panda$collections$Array* $tmp1490;
    panda$collections$Iterator* Iter$422$91495 = NULL;
    panda$collections$Iterator* $tmp1496;
    panda$collections$Iterator* $tmp1497;
    org$pandalanguage$pandac$ASTNode* p1513 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1514;
    panda$core$Object* $tmp1515;
    org$pandalanguage$pandac$ASTNode* $match$423_131523 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1524;
    panda$core$Int64 $tmp1525;
    panda$core$String* name1527 = NULL;
    org$pandalanguage$pandac$ASTNode* type1529 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1531;
    org$pandalanguage$pandac$Type* $tmp1533;
    panda$core$Bit $tmp1535;
    org$pandalanguage$pandac$Type* returnType1542 = NULL;
    org$pandalanguage$pandac$Type* $tmp1543;
    org$pandalanguage$pandac$Type* $tmp1544;
    org$pandalanguage$pandac$Type* $tmp1545;
    org$pandalanguage$pandac$Type* $tmp1547;
    org$pandalanguage$pandac$Type* $tmp1548;
    org$pandalanguage$pandac$Type* $tmp1549;
    panda$core$Int64 $tmp1552;
    org$pandalanguage$pandac$Type* $tmp1555;
    panda$core$Int64 $tmp1564;
    panda$core$Int64 $tmp1568;
    panda$core$Int64 $tmp1571;
    org$pandalanguage$pandac$MethodDecl* $returnValue1573;
    org$pandalanguage$pandac$MethodDecl* $tmp1574;
    org$pandalanguage$pandac$MethodDecl* $tmp1575;
    int $tmp1359;
    {
        memset(&doccomment1360, 0, sizeof(doccomment1360));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1361 = doccomment1360;
                $tmp1362 = NULL;
                doccomment1360 = $tmp1362;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1362));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1361));
            }
        }
        }
        else {
        {
            int $tmp1365;
            {
                $tmp1367 = p_rawDoccomment;
                $match$386_131366 = $tmp1367;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1367));
                panda$core$Int64$init$builtin_int64(&$tmp1368, 38);
                panda$core$Bit $tmp1369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386_131366->$rawValue, $tmp1368);
                if ($tmp1369.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1371 = ((org$pandalanguage$pandac$Position*) ((char*) $match$386_131366->$data + 0));
                    position1370 = *$tmp1371;
                    panda$core$String** $tmp1373 = ((panda$core$String**) ((char*) $match$386_131366->$data + 16));
                    text1372 = *$tmp1373;
                    {
                        $tmp1374 = doccomment1360;
                        $tmp1375 = text1372;
                        doccomment1360 = $tmp1375;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1375));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1374));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1376, false);
                    if ($tmp1376.value) goto $l1377; else goto $l1378;
                    $l1378:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1379, (panda$core$Int64) { 390 });
                    abort();
                    $l1377:;
                }
                }
            }
            $tmp1365 = -1;
            goto $l1363;
            $l1363:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
            switch ($tmp1365) {
                case -1: goto $l1380;
            }
            $l1380:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1384 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1383 = $tmp1384;
        $tmp1382 = $tmp1383;
        annotations1381 = $tmp1382;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1382));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1383));
        panda$core$Int64$init$builtin_int64(&$tmp1387, 2);
        panda$core$Bit $tmp1388 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1387);
        bool $tmp1386 = $tmp1388.value;
        if (!$tmp1386) goto $l1389;
        panda$core$Bit $tmp1390 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1386 = $tmp1390.value;
        $l1389:;
        panda$core$Bit $tmp1391 = { $tmp1386 };
        bool $tmp1385 = $tmp1391.value;
        if ($tmp1385) goto $l1392;
        panda$core$Bit $tmp1393 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1381);
        $tmp1385 = $tmp1393.value;
        $l1392:;
        panda$core$Bit $tmp1394 = { $tmp1385 };
        if ($tmp1394.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1395, 256);
            panda$core$Int64 $tmp1396 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1381->flags, $tmp1395);
            annotations1381->flags = $tmp1396;
        }
        }
        memset(&generics1397, 0, sizeof(generics1397));
        if (((panda$core$Bit) { p_rawGenerics != NULL }).value) {
        {
            int $tmp1400;
            {
                {
                    $tmp1401 = generics1397;
                    panda$collections$Array* $tmp1404 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1404);
                    $tmp1403 = $tmp1404;
                    $tmp1402 = $tmp1403;
                    generics1397 = $tmp1402;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1402));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1403));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1401));
                }
                panda$core$String* $tmp1411 = panda$core$String$convert$R$panda$core$String(p_owner->name);
                $tmp1410 = $tmp1411;
                panda$core$String* $tmp1413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1410, &$s1412);
                $tmp1409 = $tmp1413;
                panda$core$String* $tmp1414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1409, p_name);
                $tmp1408 = $tmp1414;
                panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1408, &$s1415);
                $tmp1407 = $tmp1416;
                $tmp1406 = $tmp1407;
                fullName1405 = $tmp1406;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1406));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1407));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1408));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1409));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1410));
                {
                    int $tmp1419;
                    {
                        ITable* $tmp1423 = ((panda$collections$Iterable*) p_rawGenerics)->$class->itable;
                        while ($tmp1423->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1423 = $tmp1423->next;
                        }
                        $fn1425 $tmp1424 = $tmp1423->methods[0];
                        panda$collections$Iterator* $tmp1426 = $tmp1424(((panda$collections$Iterable*) p_rawGenerics));
                        $tmp1422 = $tmp1426;
                        $tmp1421 = $tmp1422;
                        Iter$401$131420 = $tmp1421;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1421));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1422));
                        $l1427:;
                        ITable* $tmp1430 = Iter$401$131420->$class->itable;
                        while ($tmp1430->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1430 = $tmp1430->next;
                        }
                        $fn1432 $tmp1431 = $tmp1430->methods[0];
                        panda$core$Bit $tmp1433 = $tmp1431(Iter$401$131420);
                        panda$core$Bit $tmp1434 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1433);
                        bool $tmp1429 = $tmp1434.value;
                        if (!$tmp1429) goto $l1428;
                        {
                            int $tmp1437;
                            {
                                ITable* $tmp1441 = Iter$401$131420->$class->itable;
                                while ($tmp1441->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1441 = $tmp1441->next;
                                }
                                $fn1443 $tmp1442 = $tmp1441->methods[1];
                                panda$core$Object* $tmp1444 = $tmp1442(Iter$401$131420);
                                $tmp1440 = $tmp1444;
                                $tmp1439 = ((org$pandalanguage$pandac$ASTNode*) $tmp1440);
                                p1438 = $tmp1439;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1439));
                                panda$core$Panda$unref$panda$core$Object($tmp1440);
                                memset(&parameterName1445, 0, sizeof(parameterName1445));
                                memset(&bound1446, 0, sizeof(bound1446));
                                int $tmp1449;
                                {
                                    $tmp1451 = p1438;
                                    $match$404_171450 = $tmp1451;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1451));
                                    panda$core$Int64$init$builtin_int64(&$tmp1452, 20);
                                    panda$core$Bit $tmp1453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$404_171450->$rawValue, $tmp1452);
                                    if ($tmp1453.value) {
                                    {
                                        panda$core$String** $tmp1455 = ((panda$core$String**) ((char*) $match$404_171450->$data + 16));
                                        id1454 = *$tmp1455;
                                        {
                                            $tmp1456 = parameterName1445;
                                            $tmp1457 = id1454;
                                            parameterName1445 = $tmp1457;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1457));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1456));
                                        }
                                        {
                                            $tmp1458 = bound1446;
                                            org$pandalanguage$pandac$Type* $tmp1461 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                            $tmp1460 = $tmp1461;
                                            $tmp1459 = $tmp1460;
                                            bound1446 = $tmp1459;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1459));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1460));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1458));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp1462, 44);
                                    panda$core$Bit $tmp1463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$404_171450->$rawValue, $tmp1462);
                                    if ($tmp1463.value) {
                                    {
                                        panda$core$String** $tmp1465 = ((panda$core$String**) ((char*) $match$404_171450->$data + 16));
                                        id1464 = *$tmp1465;
                                        org$pandalanguage$pandac$ASTNode** $tmp1467 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$404_171450->$data + 24));
                                        type1466 = *$tmp1467;
                                        {
                                            $tmp1468 = parameterName1445;
                                            $tmp1469 = id1464;
                                            parameterName1445 = $tmp1469;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1469));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1468));
                                        }
                                        {
                                            $tmp1470 = bound1446;
                                            org$pandalanguage$pandac$Type* $tmp1473 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1466);
                                            $tmp1472 = $tmp1473;
                                            $tmp1471 = $tmp1472;
                                            bound1446 = $tmp1471;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1471));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1472));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1470));
                                        }
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp1474, false);
                                        if ($tmp1474.value) goto $l1475; else goto $l1476;
                                        $l1476:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1477, (panda$core$Int64) { 412 });
                                        abort();
                                        $l1475:;
                                    }
                                    }
                                    }
                                }
                                $tmp1449 = -1;
                                goto $l1447;
                                $l1447:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1451));
                                switch ($tmp1449) {
                                    case -1: goto $l1478;
                                }
                                $l1478:;
                                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1480 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                                org$pandalanguage$pandac$Position $tmp1482 = (($fn1481) p1438->$class->vtable[2])(p1438);
                                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1480, $tmp1482, fullName1405, parameterName1445, bound1446);
                                $tmp1479 = $tmp1480;
                                panda$collections$Array$add$panda$collections$Array$T(generics1397, ((panda$core$Object*) $tmp1479));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1479));
                            }
                            $tmp1437 = -1;
                            goto $l1435;
                            $l1435:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1446));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameterName1445));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1438));
                            p1438 = NULL;
                            switch ($tmp1437) {
                                case -1: goto $l1483;
                            }
                            $l1483:;
                        }
                        goto $l1427;
                        $l1428:;
                    }
                    $tmp1419 = -1;
                    goto $l1417;
                    $l1417:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$401$131420));
                    Iter$401$131420 = NULL;
                    switch ($tmp1419) {
                        case -1: goto $l1484;
                    }
                    $l1484:;
                }
            }
            $tmp1400 = -1;
            goto $l1398;
            $l1398:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1405));
            fullName1405 = NULL;
            switch ($tmp1400) {
                case -1: goto $l1485;
            }
            $l1485:;
        }
        }
        else {
        {
            {
                $tmp1486 = generics1397;
                $tmp1487 = NULL;
                generics1397 = $tmp1487;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1487));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1486));
            }
        }
        }
        panda$collections$Array* $tmp1491 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1491);
        $tmp1490 = $tmp1491;
        $tmp1489 = $tmp1490;
        parameters1488 = $tmp1489;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1489));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1490));
        {
            int $tmp1494;
            {
                ITable* $tmp1498 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1498->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1498 = $tmp1498->next;
                }
                $fn1500 $tmp1499 = $tmp1498->methods[0];
                panda$collections$Iterator* $tmp1501 = $tmp1499(((panda$collections$Iterable*) p_rawParameters));
                $tmp1497 = $tmp1501;
                $tmp1496 = $tmp1497;
                Iter$422$91495 = $tmp1496;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1496));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1497));
                $l1502:;
                ITable* $tmp1505 = Iter$422$91495->$class->itable;
                while ($tmp1505->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1505 = $tmp1505->next;
                }
                $fn1507 $tmp1506 = $tmp1505->methods[0];
                panda$core$Bit $tmp1508 = $tmp1506(Iter$422$91495);
                panda$core$Bit $tmp1509 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1508);
                bool $tmp1504 = $tmp1509.value;
                if (!$tmp1504) goto $l1503;
                {
                    int $tmp1512;
                    {
                        ITable* $tmp1516 = Iter$422$91495->$class->itable;
                        while ($tmp1516->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1516 = $tmp1516->next;
                        }
                        $fn1518 $tmp1517 = $tmp1516->methods[1];
                        panda$core$Object* $tmp1519 = $tmp1517(Iter$422$91495);
                        $tmp1515 = $tmp1519;
                        $tmp1514 = ((org$pandalanguage$pandac$ASTNode*) $tmp1515);
                        p1513 = $tmp1514;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1514));
                        panda$core$Panda$unref$panda$core$Object($tmp1515);
                        int $tmp1522;
                        {
                            $tmp1524 = p1513;
                            $match$423_131523 = $tmp1524;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1524));
                            panda$core$Int64$init$builtin_int64(&$tmp1525, 31);
                            panda$core$Bit $tmp1526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_131523->$rawValue, $tmp1525);
                            if ($tmp1526.value) {
                            {
                                panda$core$String** $tmp1528 = ((panda$core$String**) ((char*) $match$423_131523->$data + 16));
                                name1527 = *$tmp1528;
                                org$pandalanguage$pandac$ASTNode** $tmp1530 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$423_131523->$data + 24));
                                type1529 = *$tmp1530;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1532 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1534 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1529);
                                $tmp1533 = $tmp1534;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1532, name1527, $tmp1533);
                                $tmp1531 = $tmp1532;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1488, ((panda$core$Object*) $tmp1531));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1531));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1533));
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1535, false);
                                if ($tmp1535.value) goto $l1536; else goto $l1537;
                                $l1537:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1538, (panda$core$Int64) { 427 });
                                abort();
                                $l1536:;
                            }
                            }
                        }
                        $tmp1522 = -1;
                        goto $l1520;
                        $l1520:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1524));
                        switch ($tmp1522) {
                            case -1: goto $l1539;
                        }
                        $l1539:;
                    }
                    $tmp1512 = -1;
                    goto $l1510;
                    $l1510:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1513));
                    p1513 = NULL;
                    switch ($tmp1512) {
                        case -1: goto $l1540;
                    }
                    $l1540:;
                }
                goto $l1502;
                $l1503:;
            }
            $tmp1494 = -1;
            goto $l1492;
            $l1492:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$422$91495));
            Iter$422$91495 = NULL;
            switch ($tmp1494) {
                case -1: goto $l1541;
            }
            $l1541:;
        }
        memset(&returnType1542, 0, sizeof(returnType1542));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1543 = returnType1542;
                org$pandalanguage$pandac$Type* $tmp1546 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1545 = $tmp1546;
                $tmp1544 = $tmp1545;
                returnType1542 = $tmp1544;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1544));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1545));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1543));
            }
        }
        }
        else {
        {
            {
                $tmp1547 = returnType1542;
                org$pandalanguage$pandac$Type* $tmp1550 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1549 = $tmp1550;
                $tmp1548 = $tmp1549;
                returnType1542 = $tmp1548;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1548));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1549));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1547));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1552, 1);
        panda$core$Bit $tmp1553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1552);
        bool $tmp1551 = $tmp1553.value;
        if (!$tmp1551) goto $l1554;
        org$pandalanguage$pandac$Type* $tmp1556 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1555 = $tmp1556;
        panda$core$Bit $tmp1557 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1542, $tmp1555);
        $tmp1551 = $tmp1557.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1555));
        $l1554:;
        panda$core$Bit $tmp1558 = { $tmp1551 };
        if ($tmp1558.value) {
        {
            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1559);
        }
        }
        bool $tmp1560 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1560) goto $l1561;
        panda$core$Bit $tmp1562 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1381, p_statements);
        $tmp1560 = $tmp1562.value;
        $l1561:;
        panda$core$Bit $tmp1563 = { $tmp1560 };
        if ($tmp1563.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1564, 1024);
            panda$core$Int64 $tmp1565 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1381->flags, $tmp1564);
            annotations1381->flags = $tmp1565;
        }
        }
        bool $tmp1566 = ((panda$core$Bit) { p_statements == NULL }).value;
        if (!$tmp1566) goto $l1567;
        panda$core$Int64$init$builtin_int64(&$tmp1568, 1);
        panda$core$Bit $tmp1569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, $tmp1568);
        $tmp1566 = $tmp1569.value;
        $l1567:;
        panda$core$Bit $tmp1570 = { $tmp1566 };
        if ($tmp1570.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1571, 512);
            panda$core$Int64 $tmp1572 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1381->flags, $tmp1571);
            annotations1381->flags = $tmp1572;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1576 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1576, p_owner, p_position, doccomment1360, annotations1381, p_kind, p_name, generics1397, parameters1488, returnType1542, p_statements);
        $tmp1575 = $tmp1576;
        $tmp1574 = $tmp1575;
        $returnValue1573 = $tmp1574;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1574));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1575));
        $tmp1359 = 0;
        goto $l1357;
        $l1577:;
        return $returnValue1573;
    }
    $l1357:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1542));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1488));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics1397));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1381));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1360));
    annotations1381 = NULL;
    parameters1488 = NULL;
    switch ($tmp1359) {
        case 0: goto $l1577;
    }
    $l1579:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$451_91583 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1584;
    panda$core$Int64 $tmp1585;
    org$pandalanguage$pandac$Position position1587;
    org$pandalanguage$pandac$ASTNode* dc1589 = NULL;
    panda$collections$ImmutableArray* annotations1591 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1593 = NULL;
    panda$core$Int64 $tmp1595;
    org$pandalanguage$pandac$Position position1597;
    org$pandalanguage$pandac$ASTNode* dc1599 = NULL;
    panda$collections$ImmutableArray* annotations1601 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1603;
    panda$core$String* name1605 = NULL;
    panda$collections$ImmutableArray* generics1607 = NULL;
    panda$collections$ImmutableArray* parameters1609 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1611 = NULL;
    panda$collections$ImmutableArray* statements1613 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1618 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1619;
    org$pandalanguage$pandac$MethodDecl* $tmp1620;
    panda$core$Int64 $tmp1623;
    org$pandalanguage$pandac$Position position1625;
    org$pandalanguage$pandac$ASTNode* dc1627 = NULL;
    panda$collections$ImmutableArray* annotations1629 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1631;
    panda$core$String* name1633 = NULL;
    panda$collections$ImmutableArray* generics1635 = NULL;
    panda$collections$ImmutableArray* supertypes1637 = NULL;
    panda$collections$ImmutableArray* members1639 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1644 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1645;
    org$pandalanguage$pandac$ClassDecl* $tmp1646;
    panda$core$Weak* $tmp1648;
    panda$core$Weak* $tmp1649;
    panda$core$Weak* $tmp1650;
    panda$core$String* $tmp1652;
    org$pandalanguage$pandac$Alias* $tmp1659;
    panda$core$String* $tmp1661;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1662;
    panda$core$Int64 $tmp1664;
    panda$core$Bit $tmp1666;
    org$pandalanguage$pandac$Position $tmp1668;
    org$pandalanguage$pandac$Alias* $tmp1669;
    panda$core$String* $tmp1671;
    org$pandalanguage$pandac$Position $tmp1673;
    panda$core$Int64 $tmp1675;
    org$pandalanguage$pandac$Position position1677;
    org$pandalanguage$pandac$ASTNode* dc1679 = NULL;
    panda$core$String* name1681 = NULL;
    panda$collections$ImmutableArray* fields1683 = NULL;
    panda$core$Bit $tmp1685;
    panda$core$String* $tmp1689;
    panda$core$String* $tmp1690;
    int $tmp1582;
    {
        $tmp1584 = p_node;
        $match$451_91583 = $tmp1584;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1584));
        panda$core$Int64$init$builtin_int64(&$tmp1585, 16);
        panda$core$Bit $tmp1586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_91583->$rawValue, $tmp1585);
        if ($tmp1586.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1588 = ((org$pandalanguage$pandac$Position*) ((char*) $match$451_91583->$data + 0));
            position1587 = *$tmp1588;
            org$pandalanguage$pandac$ASTNode** $tmp1590 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91583->$data + 16));
            dc1589 = *$tmp1590;
            panda$collections$ImmutableArray** $tmp1592 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91583->$data + 24));
            annotations1591 = *$tmp1592;
            org$pandalanguage$pandac$ASTNode** $tmp1594 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91583->$data + 32));
            varDecl1593 = *$tmp1594;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1587, dc1589, annotations1591, varDecl1593);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1595, 26);
        panda$core$Bit $tmp1596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_91583->$rawValue, $tmp1595);
        if ($tmp1596.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1598 = ((org$pandalanguage$pandac$Position*) ((char*) $match$451_91583->$data + 0));
            position1597 = *$tmp1598;
            org$pandalanguage$pandac$ASTNode** $tmp1600 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91583->$data + 16));
            dc1599 = *$tmp1600;
            panda$collections$ImmutableArray** $tmp1602 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91583->$data + 24));
            annotations1601 = *$tmp1602;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1604 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$451_91583->$data + 32));
            kind1603 = *$tmp1604;
            panda$core$String** $tmp1606 = ((panda$core$String**) ((char*) $match$451_91583->$data + 40));
            name1605 = *$tmp1606;
            panda$collections$ImmutableArray** $tmp1608 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91583->$data + 48));
            generics1607 = *$tmp1608;
            panda$collections$ImmutableArray** $tmp1610 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91583->$data + 56));
            parameters1609 = *$tmp1610;
            org$pandalanguage$pandac$ASTNode** $tmp1612 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91583->$data + 64));
            returnType1611 = *$tmp1612;
            panda$collections$ImmutableArray** $tmp1614 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91583->$data + 72));
            statements1613 = *$tmp1614;
            int $tmp1617;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1621 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1597, dc1599, annotations1601, kind1603, name1605, generics1607, parameters1609, returnType1611, statements1613);
                $tmp1620 = $tmp1621;
                $tmp1619 = $tmp1620;
                m1618 = $tmp1619;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1619));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1620));
                if (((panda$core$Bit) { m1618 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1618));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1618));
                }
                }
            }
            $tmp1617 = -1;
            goto $l1615;
            $l1615:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1618));
            m1618 = NULL;
            switch ($tmp1617) {
                case -1: goto $l1622;
            }
            $l1622:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1623, 11);
        panda$core$Bit $tmp1624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_91583->$rawValue, $tmp1623);
        if ($tmp1624.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1626 = ((org$pandalanguage$pandac$Position*) ((char*) $match$451_91583->$data + 0));
            position1625 = *$tmp1626;
            org$pandalanguage$pandac$ASTNode** $tmp1628 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91583->$data + 16));
            dc1627 = *$tmp1628;
            panda$collections$ImmutableArray** $tmp1630 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91583->$data + 24));
            annotations1629 = *$tmp1630;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1632 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$451_91583->$data + 32));
            kind1631 = *$tmp1632;
            panda$core$String** $tmp1634 = ((panda$core$String**) ((char*) $match$451_91583->$data + 40));
            name1633 = *$tmp1634;
            panda$collections$ImmutableArray** $tmp1636 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91583->$data + 48));
            generics1635 = *$tmp1636;
            panda$collections$ImmutableArray** $tmp1638 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91583->$data + 56));
            supertypes1637 = *$tmp1638;
            panda$collections$ImmutableArray** $tmp1640 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91583->$data + 64));
            members1639 = *$tmp1640;
            int $tmp1643;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1647 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1625, dc1627, annotations1629, kind1631, name1633, generics1635, supertypes1637, members1639);
                $tmp1646 = $tmp1647;
                $tmp1645 = $tmp1646;
                inner1644 = $tmp1645;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1645));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1646));
                if (((panda$core$Bit) { inner1644 != NULL }).value) {
                {
                    {
                        $tmp1648 = inner1644->owner;
                        panda$core$Weak* $tmp1651 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1651, ((panda$core$Object*) p_cl));
                        $tmp1650 = $tmp1651;
                        $tmp1649 = $tmp1650;
                        inner1644->owner = $tmp1649;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1649));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1650));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1648));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1644));
                    panda$core$String* $tmp1654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1653);
                    $tmp1652 = $tmp1654;
                    panda$core$Bit $tmp1655 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1644->name, $tmp1652);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1652));
                    if ($tmp1655.value) goto $l1656; else goto $l1657;
                    $l1657:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1658, (panda$core$Int64) { 469 });
                    abort();
                    $l1656:;
                    org$pandalanguage$pandac$Alias* $tmp1660 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1663 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64$init$builtin_int64(&$tmp1664, 1);
                    panda$core$Int64 $tmp1665 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1663, $tmp1664);
                    panda$core$Bit$init$builtin_bit(&$tmp1666, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1662, ((panda$core$Int64$nullable) { $tmp1665, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1666);
                    panda$core$String* $tmp1667 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1644->name, $tmp1662);
                    $tmp1661 = $tmp1667;
                    org$pandalanguage$pandac$Position$init(&$tmp1668);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1660, $tmp1661, inner1644->name, $tmp1668);
                    $tmp1659 = $tmp1660;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1659));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1659));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1661));
                    org$pandalanguage$pandac$Alias* $tmp1670 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1672 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1671 = $tmp1672;
                    org$pandalanguage$pandac$Position$init(&$tmp1673);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1670, $tmp1671, p_cl->name, $tmp1673);
                    $tmp1669 = $tmp1670;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1644->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1669));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1669));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1671));
                }
                }
            }
            $tmp1643 = -1;
            goto $l1641;
            $l1641:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1644));
            inner1644 = NULL;
            switch ($tmp1643) {
                case -1: goto $l1674;
            }
            $l1674:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1675, 9);
        panda$core$Bit $tmp1676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$451_91583->$rawValue, $tmp1675);
        if ($tmp1676.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1678 = ((org$pandalanguage$pandac$Position*) ((char*) $match$451_91583->$data + 0));
            position1677 = *$tmp1678;
            org$pandalanguage$pandac$ASTNode** $tmp1680 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$451_91583->$data + 16));
            dc1679 = *$tmp1680;
            panda$core$String** $tmp1682 = ((panda$core$String**) ((char*) $match$451_91583->$data + 24));
            name1681 = *$tmp1682;
            panda$collections$ImmutableArray** $tmp1684 = ((panda$collections$ImmutableArray**) ((char*) $match$451_91583->$data + 32));
            fields1683 = *$tmp1684;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1677, dc1679, name1681, fields1683);
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1685, false);
            if ($tmp1685.value) goto $l1686; else goto $l1687;
            $l1687:;
            panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1691, ((panda$core$Object*) p_node));
            $tmp1690 = $tmp1692;
            panda$core$String* $tmp1694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1690, &$s1693);
            $tmp1689 = $tmp1694;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1688, (panda$core$Int64) { 477 }, $tmp1689);
            abort();
            $l1686:;
        }
        }
        }
        }
        }
    }
    $tmp1582 = -1;
    goto $l1580;
    $l1580:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1584));
    switch ($tmp1582) {
        case -1: goto $l1695;
    }
    $l1695:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1699 = NULL;
    panda$core$String* $tmp1700;
    panda$core$String* $tmp1701;
    org$pandalanguage$pandac$ASTNode* $match$489_131705 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1706;
    panda$core$Int64 $tmp1707;
    org$pandalanguage$pandac$Position position1709;
    panda$core$String* text1711 = NULL;
    panda$core$String* $tmp1713;
    panda$core$String* $tmp1714;
    panda$core$Bit $tmp1715;
    panda$collections$Array* fields1720 = NULL;
    panda$collections$Array* $tmp1721;
    panda$collections$Array* $tmp1722;
    panda$collections$Iterator* Iter$497$91727 = NULL;
    panda$collections$Iterator* $tmp1728;
    panda$collections$Iterator* $tmp1729;
    org$pandalanguage$pandac$ASTNode* t1745 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1746;
    panda$core$Object* $tmp1747;
    org$pandalanguage$pandac$Type* $tmp1752;
    org$pandalanguage$pandac$ChoiceEntry* entry1756 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1757;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1758;
    int $tmp1698;
    {
        memset(&doccomment1699, 0, sizeof(doccomment1699));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1700 = doccomment1699;
                $tmp1701 = NULL;
                doccomment1699 = $tmp1701;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1701));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1700));
            }
        }
        }
        else {
        {
            int $tmp1704;
            {
                $tmp1706 = p_rawDoccomment;
                $match$489_131705 = $tmp1706;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1706));
                panda$core$Int64$init$builtin_int64(&$tmp1707, 38);
                panda$core$Bit $tmp1708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$489_131705->$rawValue, $tmp1707);
                if ($tmp1708.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1710 = ((org$pandalanguage$pandac$Position*) ((char*) $match$489_131705->$data + 0));
                    position1709 = *$tmp1710;
                    panda$core$String** $tmp1712 = ((panda$core$String**) ((char*) $match$489_131705->$data + 16));
                    text1711 = *$tmp1712;
                    {
                        $tmp1713 = doccomment1699;
                        $tmp1714 = text1711;
                        doccomment1699 = $tmp1714;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1714));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1713));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1715, false);
                    if ($tmp1715.value) goto $l1716; else goto $l1717;
                    $l1717:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1718, (panda$core$Int64) { 493 });
                    abort();
                    $l1716:;
                }
                }
            }
            $tmp1704 = -1;
            goto $l1702;
            $l1702:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1706));
            switch ($tmp1704) {
                case -1: goto $l1719;
            }
            $l1719:;
        }
        }
        panda$collections$Array* $tmp1723 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1723);
        $tmp1722 = $tmp1723;
        $tmp1721 = $tmp1722;
        fields1720 = $tmp1721;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1721));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1722));
        {
            int $tmp1726;
            {
                ITable* $tmp1730 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1730->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1730 = $tmp1730->next;
                }
                $fn1732 $tmp1731 = $tmp1730->methods[0];
                panda$collections$Iterator* $tmp1733 = $tmp1731(((panda$collections$Iterable*) p_rawFields));
                $tmp1729 = $tmp1733;
                $tmp1728 = $tmp1729;
                Iter$497$91727 = $tmp1728;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1728));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1729));
                $l1734:;
                ITable* $tmp1737 = Iter$497$91727->$class->itable;
                while ($tmp1737->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1737 = $tmp1737->next;
                }
                $fn1739 $tmp1738 = $tmp1737->methods[0];
                panda$core$Bit $tmp1740 = $tmp1738(Iter$497$91727);
                panda$core$Bit $tmp1741 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1740);
                bool $tmp1736 = $tmp1741.value;
                if (!$tmp1736) goto $l1735;
                {
                    int $tmp1744;
                    {
                        ITable* $tmp1748 = Iter$497$91727->$class->itable;
                        while ($tmp1748->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1748 = $tmp1748->next;
                        }
                        $fn1750 $tmp1749 = $tmp1748->methods[1];
                        panda$core$Object* $tmp1751 = $tmp1749(Iter$497$91727);
                        $tmp1747 = $tmp1751;
                        $tmp1746 = ((org$pandalanguage$pandac$ASTNode*) $tmp1747);
                        t1745 = $tmp1746;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1746));
                        panda$core$Panda$unref$panda$core$Object($tmp1747);
                        org$pandalanguage$pandac$Type* $tmp1753 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1745);
                        $tmp1752 = $tmp1753;
                        panda$collections$Array$add$panda$collections$Array$T(fields1720, ((panda$core$Object*) $tmp1752));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1752));
                    }
                    $tmp1744 = -1;
                    goto $l1742;
                    $l1742:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1745));
                    t1745 = NULL;
                    switch ($tmp1744) {
                        case -1: goto $l1754;
                    }
                    $l1754:;
                }
                goto $l1734;
                $l1735:;
            }
            $tmp1726 = -1;
            goto $l1724;
            $l1724:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$497$91727));
            Iter$497$91727 = NULL;
            switch ($tmp1726) {
                case -1: goto $l1755;
            }
            $l1755:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1759 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1760 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1759, p_cl, p_position, p_name, doccomment1699, $tmp1760, ((panda$collections$ListView*) fields1720));
        $tmp1758 = $tmp1759;
        $tmp1757 = $tmp1758;
        entry1756 = $tmp1757;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1757));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1758));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1756));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1756));
    }
    $tmp1698 = -1;
    goto $l1696;
    $l1696:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1756));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1720));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1699));
    fields1720 = NULL;
    entry1756 = NULL;
    switch ($tmp1698) {
        case -1: goto $l1761;
    }
    $l1761:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1765 = NULL;
    panda$core$String* $tmp1768;
    panda$core$String* $tmp1769;
    panda$core$String* $tmp1770;
    panda$core$String* $tmp1771;
    panda$core$String* $tmp1772;
    panda$core$String* $tmp1773;
    panda$core$String* $tmp1780;
    panda$core$String* $tmp1781;
    panda$core$String* doccomment1782 = NULL;
    panda$core$String* $tmp1783;
    panda$core$String* $tmp1784;
    org$pandalanguage$pandac$ASTNode* $match$523_131788 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1789;
    panda$core$Int64 $tmp1790;
    org$pandalanguage$pandac$Position position1792;
    panda$core$String* text1794 = NULL;
    panda$core$String* $tmp1796;
    panda$core$String* $tmp1797;
    panda$core$Bit $tmp1798;
    org$pandalanguage$pandac$Annotations* annotations1803 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1804;
    org$pandalanguage$pandac$Annotations* $tmp1805;
    panda$collections$Array* parameters1807 = NULL;
    panda$collections$Array* $tmp1808;
    panda$collections$Array* $tmp1809;
    panda$collections$Iterator* Iter$533$131814 = NULL;
    panda$collections$Iterator* $tmp1815;
    panda$collections$Iterator* $tmp1816;
    org$pandalanguage$pandac$ASTNode* p1832 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1833;
    panda$core$Object* $tmp1834;
    panda$core$String* name1839 = NULL;
    org$pandalanguage$pandac$Type* bound1840 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$536_171844 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1845;
    panda$core$Int64 $tmp1846;
    panda$core$String* id1848 = NULL;
    panda$core$String* $tmp1850;
    panda$core$String* $tmp1851;
    org$pandalanguage$pandac$Type* $tmp1852;
    org$pandalanguage$pandac$Type* $tmp1853;
    org$pandalanguage$pandac$Type* $tmp1854;
    panda$core$Int64 $tmp1856;
    panda$core$String* id1858 = NULL;
    org$pandalanguage$pandac$ASTNode* type1860 = NULL;
    panda$core$String* $tmp1862;
    panda$core$String* $tmp1863;
    org$pandalanguage$pandac$Type* $tmp1864;
    org$pandalanguage$pandac$Type* $tmp1865;
    org$pandalanguage$pandac$Type* $tmp1866;
    panda$core$Bit $tmp1868;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1873;
    panda$core$Int64 $tmp1879;
    panda$collections$Array* supertypes1882 = NULL;
    panda$collections$Array* $tmp1883;
    panda$collections$Array* $tmp1884;
    panda$core$Int64 $tmp1886;
    panda$collections$Iterator* Iter$557$131892 = NULL;
    panda$collections$Iterator* $tmp1893;
    panda$collections$Iterator* $tmp1894;
    org$pandalanguage$pandac$ASTNode* s1910 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1911;
    panda$core$Object* $tmp1912;
    org$pandalanguage$pandac$Type* $tmp1917;
    org$pandalanguage$pandac$ClassDecl* result1921 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1922;
    org$pandalanguage$pandac$ClassDecl* $tmp1923;
    panda$core$Object* $tmp1925;
    panda$core$Object* $tmp1927;
    panda$core$Int64 $tmp1929;
    org$pandalanguage$pandac$FieldDecl* rawValue1934 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1935;
    org$pandalanguage$pandac$FieldDecl* $tmp1936;
    org$pandalanguage$pandac$Annotations* $tmp1938;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1940;
    panda$core$Int64 $tmp1941;
    org$pandalanguage$pandac$Type* $tmp1943;
    org$pandalanguage$pandac$FieldDecl* data1945 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1946;
    org$pandalanguage$pandac$FieldDecl* $tmp1947;
    org$pandalanguage$pandac$Annotations* $tmp1949;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1951;
    panda$core$Int64 $tmp1952;
    org$pandalanguage$pandac$Type* $tmp1954;
    panda$collections$Iterator* Iter$574$91960 = NULL;
    panda$collections$Iterator* $tmp1961;
    panda$collections$Iterator* $tmp1962;
    org$pandalanguage$pandac$ASTNode* m1978 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1979;
    panda$core$Object* $tmp1980;
    org$pandalanguage$pandac$ASTNode* $match$575_131988 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1989;
    panda$core$Int64 $tmp1990;
    org$pandalanguage$pandac$Position mPosition1992;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1994;
    panda$core$Int64 $tmp1996;
    org$pandalanguage$pandac$ClassDecl$Kind $match$578_251998;
    panda$core$Int64 $tmp1999;
    panda$core$Int64 $tmp2001;
    panda$core$Int64 $tmp2004;
    panda$core$Bit foundInit2010;
    panda$core$Bit $tmp2011;
    panda$core$Bit foundCleanup2012;
    panda$core$Bit $tmp2013;
    panda$collections$Iterator* Iter$593$92017 = NULL;
    panda$collections$Iterator* $tmp2018;
    panda$collections$Iterator* $tmp2019;
    org$pandalanguage$pandac$MethodDecl* m2035 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2036;
    panda$core$Object* $tmp2037;
    panda$core$Int64 $tmp2042;
    panda$core$Bit $tmp2044;
    panda$core$Int64 $tmp2050;
    panda$core$Bit $tmp2053;
    panda$core$Int64 $tmp2054;
    panda$core$Int64 $tmp2063;
    org$pandalanguage$pandac$MethodDecl* defaultInit2073 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2074;
    org$pandalanguage$pandac$MethodDecl* $tmp2075;
    org$pandalanguage$pandac$Annotations* $tmp2077;
    panda$core$Int64 $tmp2079;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2080;
    panda$core$Int64 $tmp2081;
    panda$collections$Array* $tmp2083;
    panda$collections$Array* $tmp2085;
    org$pandalanguage$pandac$Type* $tmp2087;
    panda$collections$ImmutableArray* $tmp2089;
    panda$core$Int64 $tmp2097;
    panda$core$Int64 $tmp2100;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2111 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2112;
    org$pandalanguage$pandac$MethodDecl* $tmp2113;
    org$pandalanguage$pandac$Annotations* $tmp2115;
    panda$core$Int64 $tmp2117;
    panda$core$Int64 $tmp2118;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2120;
    panda$core$Int64 $tmp2121;
    panda$collections$Array* $tmp2123;
    panda$collections$Array* $tmp2125;
    org$pandalanguage$pandac$Type* $tmp2127;
    panda$collections$ImmutableArray* $tmp2129;
    panda$core$Int64 $tmp2132;
    panda$core$Bit haveFields2134;
    panda$core$Bit $tmp2135;
    panda$core$Int64 $tmp2137;
    panda$collections$Iterator* Iter$624$172142 = NULL;
    panda$collections$Iterator* $tmp2143;
    panda$collections$Iterator* $tmp2144;
    org$pandalanguage$pandac$ChoiceEntry* e2160 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2161;
    panda$core$Object* $tmp2162;
    panda$core$Int64 $tmp2168;
    panda$core$Bit $tmp2170;
    org$pandalanguage$pandac$ClassDecl* $returnValue2175;
    org$pandalanguage$pandac$ClassDecl* $tmp2176;
    org$pandalanguage$pandac$Type* $tmp2180;
    org$pandalanguage$pandac$Type* $tmp2181;
    org$pandalanguage$pandac$Type* $tmp2182;
    panda$core$Object* $tmp2184;
    panda$core$Object* $tmp2185;
    org$pandalanguage$pandac$ClassDecl* $tmp2188;
    int $tmp1764;
    {
        memset(&fullName1765, 0, sizeof(fullName1765));
        panda$core$Bit $tmp1767 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1766);
        if ($tmp1767.value) {
        {
            {
                $tmp1768 = fullName1765;
                panda$core$String* $tmp1774 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1773 = $tmp1774;
                panda$core$String* $tmp1776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1773, &$s1775);
                $tmp1772 = $tmp1776;
                panda$core$String* $tmp1777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1772, p_name);
                $tmp1771 = $tmp1777;
                panda$core$String* $tmp1779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1771, &$s1778);
                $tmp1770 = $tmp1779;
                $tmp1769 = $tmp1770;
                fullName1765 = $tmp1769;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1769));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1770));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1771));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1772));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1773));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1768));
            }
        }
        }
        else {
        {
            {
                $tmp1780 = fullName1765;
                $tmp1781 = p_name;
                fullName1765 = $tmp1781;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1781));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1780));
            }
        }
        }
        memset(&doccomment1782, 0, sizeof(doccomment1782));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1783 = doccomment1782;
                $tmp1784 = NULL;
                doccomment1782 = $tmp1784;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1784));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1783));
            }
        }
        }
        else {
        {
            int $tmp1787;
            {
                $tmp1789 = p_rawDoccomment;
                $match$523_131788 = $tmp1789;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1789));
                panda$core$Int64$init$builtin_int64(&$tmp1790, 38);
                panda$core$Bit $tmp1791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$523_131788->$rawValue, $tmp1790);
                if ($tmp1791.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1793 = ((org$pandalanguage$pandac$Position*) ((char*) $match$523_131788->$data + 0));
                    position1792 = *$tmp1793;
                    panda$core$String** $tmp1795 = ((panda$core$String**) ((char*) $match$523_131788->$data + 16));
                    text1794 = *$tmp1795;
                    {
                        $tmp1796 = doccomment1782;
                        $tmp1797 = text1794;
                        doccomment1782 = $tmp1797;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1797));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1796));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1798, false);
                    if ($tmp1798.value) goto $l1799; else goto $l1800;
                    $l1800:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1801, (panda$core$Int64) { 527 });
                    abort();
                    $l1799:;
                }
                }
            }
            $tmp1787 = -1;
            goto $l1785;
            $l1785:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1789));
            switch ($tmp1787) {
                case -1: goto $l1802;
            }
            $l1802:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1806 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1805 = $tmp1806;
        $tmp1804 = $tmp1805;
        annotations1803 = $tmp1804;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1804));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1805));
        panda$collections$Array* $tmp1810 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1810);
        $tmp1809 = $tmp1810;
        $tmp1808 = $tmp1809;
        parameters1807 = $tmp1808;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1808));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1809));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1813;
                {
                    ITable* $tmp1817 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1817->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1817 = $tmp1817->next;
                    }
                    $fn1819 $tmp1818 = $tmp1817->methods[0];
                    panda$collections$Iterator* $tmp1820 = $tmp1818(((panda$collections$Iterable*) p_generics));
                    $tmp1816 = $tmp1820;
                    $tmp1815 = $tmp1816;
                    Iter$533$131814 = $tmp1815;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1815));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1816));
                    $l1821:;
                    ITable* $tmp1824 = Iter$533$131814->$class->itable;
                    while ($tmp1824->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1824 = $tmp1824->next;
                    }
                    $fn1826 $tmp1825 = $tmp1824->methods[0];
                    panda$core$Bit $tmp1827 = $tmp1825(Iter$533$131814);
                    panda$core$Bit $tmp1828 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1827);
                    bool $tmp1823 = $tmp1828.value;
                    if (!$tmp1823) goto $l1822;
                    {
                        int $tmp1831;
                        {
                            ITable* $tmp1835 = Iter$533$131814->$class->itable;
                            while ($tmp1835->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1835 = $tmp1835->next;
                            }
                            $fn1837 $tmp1836 = $tmp1835->methods[1];
                            panda$core$Object* $tmp1838 = $tmp1836(Iter$533$131814);
                            $tmp1834 = $tmp1838;
                            $tmp1833 = ((org$pandalanguage$pandac$ASTNode*) $tmp1834);
                            p1832 = $tmp1833;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1833));
                            panda$core$Panda$unref$panda$core$Object($tmp1834);
                            memset(&name1839, 0, sizeof(name1839));
                            memset(&bound1840, 0, sizeof(bound1840));
                            int $tmp1843;
                            {
                                $tmp1845 = p1832;
                                $match$536_171844 = $tmp1845;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1845));
                                panda$core$Int64$init$builtin_int64(&$tmp1846, 20);
                                panda$core$Bit $tmp1847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$536_171844->$rawValue, $tmp1846);
                                if ($tmp1847.value) {
                                {
                                    panda$core$String** $tmp1849 = ((panda$core$String**) ((char*) $match$536_171844->$data + 16));
                                    id1848 = *$tmp1849;
                                    {
                                        $tmp1850 = name1839;
                                        $tmp1851 = id1848;
                                        name1839 = $tmp1851;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1851));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1850));
                                    }
                                    {
                                        $tmp1852 = bound1840;
                                        org$pandalanguage$pandac$Type* $tmp1855 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1854 = $tmp1855;
                                        $tmp1853 = $tmp1854;
                                        bound1840 = $tmp1853;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1853));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1854));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1852));
                                    }
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1856, 44);
                                panda$core$Bit $tmp1857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$536_171844->$rawValue, $tmp1856);
                                if ($tmp1857.value) {
                                {
                                    panda$core$String** $tmp1859 = ((panda$core$String**) ((char*) $match$536_171844->$data + 16));
                                    id1858 = *$tmp1859;
                                    org$pandalanguage$pandac$ASTNode** $tmp1861 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$536_171844->$data + 24));
                                    type1860 = *$tmp1861;
                                    {
                                        $tmp1862 = name1839;
                                        $tmp1863 = id1858;
                                        name1839 = $tmp1863;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1863));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1862));
                                    }
                                    {
                                        $tmp1864 = bound1840;
                                        org$pandalanguage$pandac$Type* $tmp1867 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1860);
                                        $tmp1866 = $tmp1867;
                                        $tmp1865 = $tmp1866;
                                        bound1840 = $tmp1865;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1865));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1866));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1864));
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp1868, false);
                                    if ($tmp1868.value) goto $l1869; else goto $l1870;
                                    $l1870:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1871, (panda$core$Int64) { 544 });
                                    abort();
                                    $l1869:;
                                }
                                }
                                }
                            }
                            $tmp1843 = -1;
                            goto $l1841;
                            $l1841:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1845));
                            switch ($tmp1843) {
                                case -1: goto $l1872;
                            }
                            $l1872:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1874 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1876 = (($fn1875) p1832->$class->vtable[2])(p1832);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1874, $tmp1876, fullName1765, name1839, bound1840);
                            $tmp1873 = $tmp1874;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1807, ((panda$core$Object*) $tmp1873));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1873));
                        }
                        $tmp1831 = -1;
                        goto $l1829;
                        $l1829:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1840));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1839));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1832));
                        p1832 = NULL;
                        switch ($tmp1831) {
                            case -1: goto $l1877;
                        }
                        $l1877:;
                    }
                    goto $l1821;
                    $l1822:;
                }
                $tmp1813 = -1;
                goto $l1811;
                $l1811:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$533$131814));
                Iter$533$131814 = NULL;
                switch ($tmp1813) {
                    case -1: goto $l1878;
                }
                $l1878:;
            }
            panda$core$Int64$init$builtin_int64(&$tmp1879, 2);
            panda$core$Bit $tmp1880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1879);
            if ($tmp1880.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1881);
            }
            }
        }
        }
        panda$collections$Array* $tmp1885 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1885);
        $tmp1884 = $tmp1885;
        $tmp1883 = $tmp1884;
        supertypes1882 = $tmp1883;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1883));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1884));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1886, 2);
            panda$core$Bit $tmp1887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1886);
            if ($tmp1887.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1888);
            }
            }
            {
                int $tmp1891;
                {
                    ITable* $tmp1895 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1895->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1895 = $tmp1895->next;
                    }
                    $fn1897 $tmp1896 = $tmp1895->methods[0];
                    panda$collections$Iterator* $tmp1898 = $tmp1896(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1894 = $tmp1898;
                    $tmp1893 = $tmp1894;
                    Iter$557$131892 = $tmp1893;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1893));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1894));
                    $l1899:;
                    ITable* $tmp1902 = Iter$557$131892->$class->itable;
                    while ($tmp1902->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1902 = $tmp1902->next;
                    }
                    $fn1904 $tmp1903 = $tmp1902->methods[0];
                    panda$core$Bit $tmp1905 = $tmp1903(Iter$557$131892);
                    panda$core$Bit $tmp1906 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1905);
                    bool $tmp1901 = $tmp1906.value;
                    if (!$tmp1901) goto $l1900;
                    {
                        int $tmp1909;
                        {
                            ITable* $tmp1913 = Iter$557$131892->$class->itable;
                            while ($tmp1913->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1913 = $tmp1913->next;
                            }
                            $fn1915 $tmp1914 = $tmp1913->methods[1];
                            panda$core$Object* $tmp1916 = $tmp1914(Iter$557$131892);
                            $tmp1912 = $tmp1916;
                            $tmp1911 = ((org$pandalanguage$pandac$ASTNode*) $tmp1912);
                            s1910 = $tmp1911;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
                            panda$core$Panda$unref$panda$core$Object($tmp1912);
                            org$pandalanguage$pandac$Type* $tmp1918 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1910);
                            $tmp1917 = $tmp1918;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1882, ((panda$core$Object*) $tmp1917));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1917));
                        }
                        $tmp1909 = -1;
                        goto $l1907;
                        $l1907:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1910));
                        s1910 = NULL;
                        switch ($tmp1909) {
                            case -1: goto $l1919;
                        }
                        $l1919:;
                    }
                    goto $l1899;
                    $l1900:;
                }
                $tmp1891 = -1;
                goto $l1889;
                $l1889:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$557$131892));
                Iter$557$131892 = NULL;
                switch ($tmp1891) {
                    case -1: goto $l1920;
                }
                $l1920:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1924 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1926 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1925 = $tmp1926;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1924, p_source, p_position, p_aliases, doccomment1782, annotations1803, p_kind, fullName1765, ((panda$collections$ListView*) supertypes1882), parameters1807, ((org$pandalanguage$pandac$Compiler*) $tmp1925)->root);
        $tmp1923 = $tmp1924;
        $tmp1922 = $tmp1923;
        result1921 = $tmp1922;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1922));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1923));
        panda$core$Panda$unref$panda$core$Object($tmp1925);
        panda$core$Object* $tmp1928 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1927 = $tmp1928;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1927)->currentClass, ((panda$core$Object*) result1921));
        panda$core$Panda$unref$panda$core$Object($tmp1927);
        panda$core$Int64$init$builtin_int64(&$tmp1929, 2);
        panda$core$Bit $tmp1930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1929);
        if ($tmp1930.value) {
        {
            int $tmp1933;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1937 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1939 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1939);
                $tmp1938 = $tmp1939;
                panda$core$Int64$init$builtin_int64(&$tmp1941, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1940, $tmp1941);
                org$pandalanguage$pandac$Type* $tmp1944 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1943 = $tmp1944;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1937, result1921, result1921->position, NULL, $tmp1938, $tmp1940, &$s1942, $tmp1943, NULL);
                $tmp1936 = $tmp1937;
                $tmp1935 = $tmp1936;
                rawValue1934 = $tmp1935;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1935));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1936));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1943));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1938));
                panda$collections$Array$add$panda$collections$Array$T(result1921->fields, ((panda$core$Object*) rawValue1934));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1921->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1934));
                org$pandalanguage$pandac$FieldDecl* $tmp1948 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1950 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1950);
                $tmp1949 = $tmp1950;
                panda$core$Int64$init$builtin_int64(&$tmp1952, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1951, $tmp1952);
                org$pandalanguage$pandac$Type* $tmp1955 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1954 = $tmp1955;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1948, result1921, result1921->position, NULL, $tmp1949, $tmp1951, &$s1953, $tmp1954, NULL);
                $tmp1947 = $tmp1948;
                $tmp1946 = $tmp1947;
                data1945 = $tmp1946;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1946));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1947));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1954));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1949));
                panda$collections$Array$add$panda$collections$Array$T(result1921->fields, ((panda$core$Object*) data1945));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1921->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1945));
            }
            $tmp1933 = -1;
            goto $l1931;
            $l1931:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1945));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1934));
            rawValue1934 = NULL;
            data1945 = NULL;
            switch ($tmp1933) {
                case -1: goto $l1956;
            }
            $l1956:;
        }
        }
        {
            int $tmp1959;
            {
                ITable* $tmp1963 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1963->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1963 = $tmp1963->next;
                }
                $fn1965 $tmp1964 = $tmp1963->methods[0];
                panda$collections$Iterator* $tmp1966 = $tmp1964(((panda$collections$Iterable*) p_members));
                $tmp1962 = $tmp1966;
                $tmp1961 = $tmp1962;
                Iter$574$91960 = $tmp1961;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1961));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1962));
                $l1967:;
                ITable* $tmp1970 = Iter$574$91960->$class->itable;
                while ($tmp1970->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1970 = $tmp1970->next;
                }
                $fn1972 $tmp1971 = $tmp1970->methods[0];
                panda$core$Bit $tmp1973 = $tmp1971(Iter$574$91960);
                panda$core$Bit $tmp1974 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1973);
                bool $tmp1969 = $tmp1974.value;
                if (!$tmp1969) goto $l1968;
                {
                    int $tmp1977;
                    {
                        ITable* $tmp1981 = Iter$574$91960->$class->itable;
                        while ($tmp1981->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1981 = $tmp1981->next;
                        }
                        $fn1983 $tmp1982 = $tmp1981->methods[1];
                        panda$core$Object* $tmp1984 = $tmp1982(Iter$574$91960);
                        $tmp1980 = $tmp1984;
                        $tmp1979 = ((org$pandalanguage$pandac$ASTNode*) $tmp1980);
                        m1978 = $tmp1979;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1979));
                        panda$core$Panda$unref$panda$core$Object($tmp1980);
                        int $tmp1987;
                        {
                            $tmp1989 = m1978;
                            $match$575_131988 = $tmp1989;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1989));
                            panda$core$Int64$init$builtin_int64(&$tmp1990, 26);
                            panda$core$Bit $tmp1991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$575_131988->$rawValue, $tmp1990);
                            if ($tmp1991.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1993 = ((org$pandalanguage$pandac$Position*) ((char*) $match$575_131988->$data + 0));
                                mPosition1992 = *$tmp1993;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1995 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$575_131988->$data + 32));
                                methodKind1994 = *$tmp1995;
                                panda$core$Int64$init$builtin_int64(&$tmp1996, 2);
                                panda$core$Bit $tmp1997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1994.$rawValue, $tmp1996);
                                if ($tmp1997.value) {
                                {
                                    {
                                        $match$578_251998 = p_kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp1999, 0);
                                        panda$core$Bit $tmp2000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_251998.$rawValue, $tmp1999);
                                        if ($tmp2000.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2001, 1);
                                        panda$core$Bit $tmp2002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_251998.$rawValue, $tmp2001);
                                        if ($tmp2002.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition1992, &$s2003);
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2004, 2);
                                        panda$core$Bit $tmp2005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_251998.$rawValue, $tmp2004);
                                        if ($tmp2005.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition1992, &$s2006);
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
                        $tmp1987 = -1;
                        goto $l1985;
                        $l1985:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1989));
                        switch ($tmp1987) {
                            case -1: goto $l2007;
                        }
                        $l2007:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1921, m1978);
                    }
                    $tmp1977 = -1;
                    goto $l1975;
                    $l1975:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1978));
                    m1978 = NULL;
                    switch ($tmp1977) {
                        case -1: goto $l2008;
                    }
                    $l2008:;
                }
                goto $l1967;
                $l1968:;
            }
            $tmp1959 = -1;
            goto $l1957;
            $l1957:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$574$91960));
            Iter$574$91960 = NULL;
            switch ($tmp1959) {
                case -1: goto $l2009;
            }
            $l2009:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp2011, false);
        foundInit2010 = $tmp2011;
        panda$core$Bit$init$builtin_bit(&$tmp2013, false);
        foundCleanup2012 = $tmp2013;
        {
            int $tmp2016;
            {
                ITable* $tmp2020 = ((panda$collections$Iterable*) result1921->methods)->$class->itable;
                while ($tmp2020->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2020 = $tmp2020->next;
                }
                $fn2022 $tmp2021 = $tmp2020->methods[0];
                panda$collections$Iterator* $tmp2023 = $tmp2021(((panda$collections$Iterable*) result1921->methods));
                $tmp2019 = $tmp2023;
                $tmp2018 = $tmp2019;
                Iter$593$92017 = $tmp2018;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2018));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2019));
                $l2024:;
                ITable* $tmp2027 = Iter$593$92017->$class->itable;
                while ($tmp2027->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2027 = $tmp2027->next;
                }
                $fn2029 $tmp2028 = $tmp2027->methods[0];
                panda$core$Bit $tmp2030 = $tmp2028(Iter$593$92017);
                panda$core$Bit $tmp2031 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2030);
                bool $tmp2026 = $tmp2031.value;
                if (!$tmp2026) goto $l2025;
                {
                    int $tmp2034;
                    {
                        ITable* $tmp2038 = Iter$593$92017->$class->itable;
                        while ($tmp2038->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2038 = $tmp2038->next;
                        }
                        $fn2040 $tmp2039 = $tmp2038->methods[1];
                        panda$core$Object* $tmp2041 = $tmp2039(Iter$593$92017);
                        $tmp2037 = $tmp2041;
                        $tmp2036 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2037);
                        m2035 = $tmp2036;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2036));
                        panda$core$Panda$unref$panda$core$Object($tmp2037);
                        panda$core$Int64$init$builtin_int64(&$tmp2042, 2);
                        panda$core$Bit $tmp2043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2035->methodKind.$rawValue, $tmp2042);
                        if ($tmp2043.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2044, true);
                            foundInit2010 = $tmp2044;
                        }
                        }
                        panda$core$Bit $tmp2047 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2035)->name, &$s2046);
                        bool $tmp2045 = $tmp2047.value;
                        if (!$tmp2045) goto $l2048;
                        panda$core$Int64 $tmp2049 = panda$collections$Array$get_count$R$panda$core$Int64(m2035->parameters);
                        panda$core$Int64$init$builtin_int64(&$tmp2050, 0);
                        panda$core$Bit $tmp2051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2049, $tmp2050);
                        $tmp2045 = $tmp2051.value;
                        $l2048:;
                        panda$core$Bit $tmp2052 = { $tmp2045 };
                        if ($tmp2052.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp2053, true);
                            foundCleanup2012 = $tmp2053;
                            panda$core$Int64$init$builtin_int64(&$tmp2054, 2);
                            panda$core$Bit $tmp2055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2054);
                            if ($tmp2055.value) {
                            {
                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2056);
                            }
                            }
                        }
                        }
                    }
                    $tmp2034 = -1;
                    goto $l2032;
                    $l2032:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2035));
                    m2035 = NULL;
                    switch ($tmp2034) {
                        case -1: goto $l2057;
                    }
                    $l2057:;
                }
                goto $l2024;
                $l2025:;
            }
            $tmp2016 = -1;
            goto $l2014;
            $l2014:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$593$92017));
            Iter$593$92017 = NULL;
            switch ($tmp2016) {
                case -1: goto $l2058;
            }
            $l2058:;
        }
        panda$core$Bit $tmp2061 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit2010);
        bool $tmp2060 = $tmp2061.value;
        if (!$tmp2060) goto $l2062;
        panda$core$Int64$init$builtin_int64(&$tmp2063, 0);
        panda$core$Bit $tmp2064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2063);
        $tmp2060 = $tmp2064.value;
        $l2062:;
        panda$core$Bit $tmp2065 = { $tmp2060 };
        bool $tmp2059 = $tmp2065.value;
        if (!$tmp2059) goto $l2066;
        panda$core$Bit $tmp2068 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1921->name, &$s2067);
        $tmp2059 = $tmp2068.value;
        $l2066:;
        panda$core$Bit $tmp2069 = { $tmp2059 };
        if ($tmp2069.value) {
        {
            int $tmp2072;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2076 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2078 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2079, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2078, $tmp2079);
                $tmp2077 = $tmp2078;
                panda$core$Int64$init$builtin_int64(&$tmp2081, 2);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2080, $tmp2081);
                panda$collections$Array* $tmp2084 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2084);
                $tmp2083 = $tmp2084;
                panda$collections$Array* $tmp2086 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2086);
                $tmp2085 = $tmp2086;
                org$pandalanguage$pandac$Type* $tmp2088 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2087 = $tmp2088;
                panda$collections$ImmutableArray* $tmp2090 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2090);
                $tmp2089 = $tmp2090;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2076, result1921, p_position, NULL, $tmp2077, $tmp2080, &$s2082, $tmp2083, $tmp2085, $tmp2087, $tmp2089);
                $tmp2075 = $tmp2076;
                $tmp2074 = $tmp2075;
                defaultInit2073 = $tmp2074;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2074));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2075));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2089));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2087));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2085));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2083));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2077));
                panda$collections$Array$add$panda$collections$Array$T(result1921->methods, ((panda$core$Object*) defaultInit2073));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1921->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2073));
            }
            $tmp2072 = -1;
            goto $l2070;
            $l2070:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2073));
            defaultInit2073 = NULL;
            switch ($tmp2072) {
                case -1: goto $l2091;
            }
            $l2091:;
        }
        }
        panda$core$Bit $tmp2094 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup2012);
        bool $tmp2093 = $tmp2094.value;
        if (!$tmp2093) goto $l2095;
        panda$core$Int64$init$builtin_int64(&$tmp2097, 0);
        panda$core$Bit $tmp2098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2097);
        bool $tmp2096 = $tmp2098.value;
        if ($tmp2096) goto $l2099;
        panda$core$Int64$init$builtin_int64(&$tmp2100, 2);
        panda$core$Bit $tmp2101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2100);
        $tmp2096 = $tmp2101.value;
        $l2099:;
        panda$core$Bit $tmp2102 = { $tmp2096 };
        $tmp2093 = $tmp2102.value;
        $l2095:;
        panda$core$Bit $tmp2103 = { $tmp2093 };
        bool $tmp2092 = $tmp2103.value;
        if (!$tmp2092) goto $l2104;
        panda$core$Bit $tmp2106 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1921->name, &$s2105);
        $tmp2092 = $tmp2106.value;
        $l2104:;
        panda$core$Bit $tmp2107 = { $tmp2092 };
        if ($tmp2107.value) {
        {
            int $tmp2110;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2114 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2116 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2117, 32);
                panda$core$Int64$init$builtin_int64(&$tmp2118, 8192);
                panda$core$Int64 $tmp2119 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2117, $tmp2118);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2116, $tmp2119);
                $tmp2115 = $tmp2116;
                panda$core$Int64$init$builtin_int64(&$tmp2121, 0);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2120, $tmp2121);
                panda$collections$Array* $tmp2124 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2124);
                $tmp2123 = $tmp2124;
                panda$collections$Array* $tmp2126 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2126);
                $tmp2125 = $tmp2126;
                org$pandalanguage$pandac$Type* $tmp2128 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2127 = $tmp2128;
                panda$collections$ImmutableArray* $tmp2130 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2130);
                $tmp2129 = $tmp2130;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2114, result1921, p_position, NULL, $tmp2115, $tmp2120, &$s2122, $tmp2123, $tmp2125, $tmp2127, $tmp2129);
                $tmp2113 = $tmp2114;
                $tmp2112 = $tmp2113;
                defaultCleanup2111 = $tmp2112;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2112));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2129));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2127));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2123));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2115));
                panda$collections$Array$add$panda$collections$Array$T(result1921->methods, ((panda$core$Object*) defaultCleanup2111));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1921->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2111));
            }
            $tmp2110 = -1;
            goto $l2108;
            $l2108:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2111));
            defaultCleanup2111 = NULL;
            switch ($tmp2110) {
                case -1: goto $l2131;
            }
            $l2131:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2132, 2);
        panda$core$Bit $tmp2133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2132);
        if ($tmp2133.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2135, false);
            haveFields2134 = $tmp2135;
            panda$core$Int64 $tmp2136 = panda$collections$Array$get_count$R$panda$core$Int64(result1921->choiceEntries);
            panda$core$Int64$init$builtin_int64(&$tmp2137, 0);
            panda$core$Bit $tmp2138 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2136, $tmp2137);
            if ($tmp2138.value) {
            {
                {
                    int $tmp2141;
                    {
                        ITable* $tmp2145 = ((panda$collections$Iterable*) result1921->choiceEntries)->$class->itable;
                        while ($tmp2145->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2145 = $tmp2145->next;
                        }
                        $fn2147 $tmp2146 = $tmp2145->methods[0];
                        panda$collections$Iterator* $tmp2148 = $tmp2146(((panda$collections$Iterable*) result1921->choiceEntries));
                        $tmp2144 = $tmp2148;
                        $tmp2143 = $tmp2144;
                        Iter$624$172142 = $tmp2143;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2143));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2144));
                        $l2149:;
                        ITable* $tmp2152 = Iter$624$172142->$class->itable;
                        while ($tmp2152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2152 = $tmp2152->next;
                        }
                        $fn2154 $tmp2153 = $tmp2152->methods[0];
                        panda$core$Bit $tmp2155 = $tmp2153(Iter$624$172142);
                        panda$core$Bit $tmp2156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2155);
                        bool $tmp2151 = $tmp2156.value;
                        if (!$tmp2151) goto $l2150;
                        {
                            int $tmp2159;
                            {
                                ITable* $tmp2163 = Iter$624$172142->$class->itable;
                                while ($tmp2163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2163 = $tmp2163->next;
                                }
                                $fn2165 $tmp2164 = $tmp2163->methods[1];
                                panda$core$Object* $tmp2166 = $tmp2164(Iter$624$172142);
                                $tmp2162 = $tmp2166;
                                $tmp2161 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp2162);
                                e2160 = $tmp2161;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2161));
                                panda$core$Panda$unref$panda$core$Object($tmp2162);
                                panda$core$Int64 $tmp2167 = panda$collections$Array$get_count$R$panda$core$Int64(e2160->fields);
                                panda$core$Int64$init$builtin_int64(&$tmp2168, 0);
                                panda$core$Bit $tmp2169 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2167, $tmp2168);
                                if ($tmp2169.value) {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2170, true);
                                    haveFields2134 = $tmp2170;
                                    $tmp2159 = 0;
                                    goto $l2157;
                                    $l2171:;
                                    goto $l2150;
                                }
                                }
                            }
                            $tmp2159 = -1;
                            goto $l2157;
                            $l2157:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2160));
                            e2160 = NULL;
                            switch ($tmp2159) {
                                case -1: goto $l2172;
                                case 0: goto $l2171;
                            }
                            $l2172:;
                        }
                        goto $l2149;
                        $l2150:;
                    }
                    $tmp2141 = -1;
                    goto $l2139;
                    $l2139:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$624$172142));
                    Iter$624$172142 = NULL;
                    switch ($tmp2141) {
                        case -1: goto $l2173;
                    }
                    $l2173:;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, result1921->position, &$s2174);
                $tmp2176 = NULL;
                $returnValue2175 = $tmp2176;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2176));
                $tmp1764 = 0;
                goto $l1762;
                $l2177:;
                return $returnValue2175;
            }
            }
            panda$core$Bit $tmp2179 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields2134);
            if ($tmp2179.value) {
            {
                {
                    $tmp2180 = result1921->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp2183 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp2182 = $tmp2183;
                    $tmp2181 = $tmp2182;
                    result1921->rawSuper = $tmp2181;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2181));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2182));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2180));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp2186 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp2185 = $tmp2186;
        panda$core$Object* $tmp2187 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2185)->currentClass);
        $tmp2184 = $tmp2187;
        panda$core$Panda$unref$panda$core$Object($tmp2184);
        panda$core$Panda$unref$panda$core$Object($tmp2185);
        $tmp2188 = result1921;
        $returnValue2175 = $tmp2188;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2188));
        $tmp1764 = 1;
        goto $l1762;
        $l2189:;
        return $returnValue2175;
    }
    $l1762:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1921));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1882));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1807));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1803));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1782));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1765));
    annotations1803 = NULL;
    parameters1807 = NULL;
    supertypes1882 = NULL;
    result1921 = NULL;
    switch ($tmp1764) {
        case 1: goto $l2189;
        case 0: goto $l2177;
    }
    $l2191:;
    abort();
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$645$92195 = NULL;
    panda$collections$Iterator* $tmp2196;
    panda$collections$Iterator* $tmp2197;
    org$pandalanguage$pandac$ClassDecl* inner2213 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2214;
    panda$core$Object* $tmp2215;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp2194;
        {
            ITable* $tmp2198 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp2198->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2198 = $tmp2198->next;
            }
            $fn2200 $tmp2199 = $tmp2198->methods[0];
            panda$collections$Iterator* $tmp2201 = $tmp2199(((panda$collections$Iterable*) p_cl->classes));
            $tmp2197 = $tmp2201;
            $tmp2196 = $tmp2197;
            Iter$645$92195 = $tmp2196;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2196));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2197));
            $l2202:;
            ITable* $tmp2205 = Iter$645$92195->$class->itable;
            while ($tmp2205->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2205 = $tmp2205->next;
            }
            $fn2207 $tmp2206 = $tmp2205->methods[0];
            panda$core$Bit $tmp2208 = $tmp2206(Iter$645$92195);
            panda$core$Bit $tmp2209 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2208);
            bool $tmp2204 = $tmp2209.value;
            if (!$tmp2204) goto $l2203;
            {
                int $tmp2212;
                {
                    ITable* $tmp2216 = Iter$645$92195->$class->itable;
                    while ($tmp2216->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2216 = $tmp2216->next;
                    }
                    $fn2218 $tmp2217 = $tmp2216->methods[1];
                    panda$core$Object* $tmp2219 = $tmp2217(Iter$645$92195);
                    $tmp2215 = $tmp2219;
                    $tmp2214 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2215);
                    inner2213 = $tmp2214;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2214));
                    panda$core$Panda$unref$panda$core$Object($tmp2215);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner2213, p_arr);
                }
                $tmp2212 = -1;
                goto $l2210;
                $l2210:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner2213));
                inner2213 = NULL;
                switch ($tmp2212) {
                    case -1: goto $l2220;
                }
                $l2220:;
            }
            goto $l2202;
            $l2203:;
        }
        $tmp2194 = -1;
        goto $l2192;
        $l2192:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$645$92195));
        Iter$645$92195 = NULL;
        switch ($tmp2194) {
            case -1: goto $l2221;
        }
        $l2221:;
    }
}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, panda$collections$List* p_classes) {
    panda$core$String* fullName2225 = NULL;
    panda$core$String* $tmp2228;
    panda$core$String* $tmp2229;
    panda$core$String* $tmp2230;
    panda$core$String* $tmp2231;
    panda$core$String* $tmp2235;
    panda$core$String* $tmp2236;
    org$pandalanguage$pandac$ClassDecl* $tmp2238;
    org$pandalanguage$pandac$ClassDecl* $tmp2239;
    org$pandalanguage$pandac$ClassDecl* $tmp2240;
    org$pandalanguage$pandac$Position $tmp2242;
    org$pandalanguage$pandac$Annotations* $tmp2243;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2245;
    panda$core$Int64 $tmp2246;
    panda$collections$Array* $tmp2247;
    panda$collections$Array* $tmp2249;
    panda$core$Object* $tmp2251;
    org$pandalanguage$pandac$MethodDecl* defaultInit2256 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2257;
    org$pandalanguage$pandac$MethodDecl* $tmp2258;
    org$pandalanguage$pandac$Position $tmp2260;
    org$pandalanguage$pandac$Annotations* $tmp2261;
    panda$core$Int64 $tmp2263;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2264;
    panda$core$Int64 $tmp2265;
    panda$collections$Array* $tmp2267;
    panda$collections$Array* $tmp2269;
    org$pandalanguage$pandac$Type* $tmp2271;
    panda$collections$ImmutableArray* $tmp2273;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2275 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2276;
    org$pandalanguage$pandac$MethodDecl* $tmp2277;
    org$pandalanguage$pandac$Position $tmp2279;
    org$pandalanguage$pandac$Annotations* $tmp2280;
    panda$core$Int64 $tmp2282;
    panda$core$Int64 $tmp2283;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2285;
    panda$core$Int64 $tmp2286;
    panda$collections$Array* $tmp2288;
    panda$collections$Array* $tmp2290;
    org$pandalanguage$pandac$Type* $tmp2292;
    panda$collections$ImmutableArray* $tmp2294;
    if (((panda$core$Bit) { self->bareCodeClass == NULL }).value) {
    {
        int $tmp2224;
        {
            memset(&fullName2225, 0, sizeof(fullName2225));
            panda$core$Bit $tmp2227 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s2226);
            if ($tmp2227.value) {
            {
                {
                    $tmp2228 = fullName2225;
                    panda$core$String* $tmp2232 = panda$core$String$convert$R$panda$core$String(p_contextName);
                    $tmp2231 = $tmp2232;
                    panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2231, &$s2233);
                    $tmp2230 = $tmp2234;
                    $tmp2229 = $tmp2230;
                    fullName2225 = $tmp2229;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2229));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2230));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2231));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2228));
                }
            }
            }
            else {
            {
                {
                    $tmp2235 = fullName2225;
                    $tmp2236 = &$s2237;
                    fullName2225 = $tmp2236;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2236));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2235));
                }
            }
            }
            {
                $tmp2238 = self->bareCodeClass;
                org$pandalanguage$pandac$ClassDecl* $tmp2241 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(200, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
                org$pandalanguage$pandac$Position$init(&$tmp2242);
                org$pandalanguage$pandac$Annotations* $tmp2244 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp2244);
                $tmp2243 = $tmp2244;
                panda$core$Int64$init$builtin_int64(&$tmp2246, 0);
                org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2245, $tmp2246);
                panda$collections$Array* $tmp2248 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2248);
                $tmp2247 = $tmp2248;
                panda$collections$Array* $tmp2250 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2250);
                $tmp2249 = $tmp2250;
                panda$core$Object* $tmp2252 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp2251 = $tmp2252;
                org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2241, p_source, $tmp2242, p_aliases, NULL, $tmp2243, $tmp2245, fullName2225, ((panda$collections$ListView*) $tmp2247), $tmp2249, ((org$pandalanguage$pandac$Compiler*) $tmp2251)->root);
                $tmp2240 = $tmp2241;
                $tmp2239 = $tmp2240;
                self->bareCodeClass = $tmp2239;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2239));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2240));
                panda$core$Panda$unref$panda$core$Object($tmp2251);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2249));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2247));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2243));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2238));
            }
            ITable* $tmp2253 = ((panda$collections$CollectionWriter*) p_classes)->$class->itable;
            while ($tmp2253->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
                $tmp2253 = $tmp2253->next;
            }
            $fn2255 $tmp2254 = $tmp2253->methods[0];
            $tmp2254(((panda$collections$CollectionWriter*) p_classes), ((panda$core$Object*) self->bareCodeClass));
            org$pandalanguage$pandac$MethodDecl* $tmp2259 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2260);
            org$pandalanguage$pandac$Annotations* $tmp2262 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2263, 8192);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2262, $tmp2263);
            $tmp2261 = $tmp2262;
            panda$core$Int64$init$builtin_int64(&$tmp2265, 2);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2264, $tmp2265);
            panda$collections$Array* $tmp2268 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2268);
            $tmp2267 = $tmp2268;
            panda$collections$Array* $tmp2270 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2270);
            $tmp2269 = $tmp2270;
            org$pandalanguage$pandac$Type* $tmp2272 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2271 = $tmp2272;
            panda$collections$ImmutableArray* $tmp2274 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2274);
            $tmp2273 = $tmp2274;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2259, self->bareCodeClass, $tmp2260, NULL, $tmp2261, $tmp2264, &$s2266, $tmp2267, $tmp2269, $tmp2271, $tmp2273);
            $tmp2258 = $tmp2259;
            $tmp2257 = $tmp2258;
            defaultInit2256 = $tmp2257;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2257));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2258));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2273));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2271));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2269));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2267));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2261));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultInit2256));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2256));
            org$pandalanguage$pandac$MethodDecl* $tmp2278 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2279);
            org$pandalanguage$pandac$Annotations* $tmp2281 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2282, 32);
            panda$core$Int64$init$builtin_int64(&$tmp2283, 8192);
            panda$core$Int64 $tmp2284 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2282, $tmp2283);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2281, $tmp2284);
            $tmp2280 = $tmp2281;
            panda$core$Int64$init$builtin_int64(&$tmp2286, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2285, $tmp2286);
            panda$collections$Array* $tmp2289 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2289);
            $tmp2288 = $tmp2289;
            panda$collections$Array* $tmp2291 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2291);
            $tmp2290 = $tmp2291;
            org$pandalanguage$pandac$Type* $tmp2293 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2292 = $tmp2293;
            panda$collections$ImmutableArray* $tmp2295 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2295);
            $tmp2294 = $tmp2295;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2278, self->bareCodeClass, $tmp2279, NULL, $tmp2280, $tmp2285, &$s2287, $tmp2288, $tmp2290, $tmp2292, $tmp2294);
            $tmp2277 = $tmp2278;
            $tmp2276 = $tmp2277;
            defaultCleanup2275 = $tmp2276;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2276));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2277));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2294));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2292));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2290));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2288));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2280));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultCleanup2275));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2275));
        }
        $tmp2224 = -1;
        goto $l2222;
        $l2222:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2275));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2256));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName2225));
        defaultInit2256 = NULL;
        defaultCleanup2275 = NULL;
        switch ($tmp2224) {
            case -1: goto $l2296;
        }
        $l2296:;
    }
    }
}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp2301;
    if (((panda$core$Bit) { self->source != NULL }).value) goto $l2297; else goto $l2298;
    $l2298:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2299, (panda$core$Int64) { 680 }, &$s2300);
    abort();
    $l2297:;
    panda$core$Object* $tmp2302 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp2301 = $tmp2302;
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2301), self->source, p_position, p_msg);
    panda$core$Panda$unref$panda$core$Object($tmp2301);
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$io$File* $tmp2303;
    panda$io$File* $tmp2304;
    org$pandalanguage$pandac$ASTNode* $match$686_92308 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2309;
    panda$core$Int64 $tmp2310;
    panda$collections$ImmutableArray* entries2312 = NULL;
    panda$collections$Array* result2317 = NULL;
    panda$collections$Array* $tmp2318;
    panda$collections$Array* $tmp2319;
    panda$core$String* currentPackage2321 = NULL;
    panda$core$String* $tmp2322;
    panda$collections$HashMap* aliases2324 = NULL;
    panda$collections$HashMap* $tmp2325;
    panda$collections$HashMap* $tmp2326;
    panda$collections$Iterator* Iter$691$172331 = NULL;
    panda$collections$Iterator* $tmp2332;
    panda$collections$Iterator* $tmp2333;
    org$pandalanguage$pandac$ASTNode* e2349 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2350;
    panda$core$Object* $tmp2351;
    org$pandalanguage$pandac$ASTNode* $match$692_212359 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2360;
    panda$core$Int64 $tmp2361;
    panda$core$String* name2363 = NULL;
    panda$core$String* $tmp2365;
    panda$core$String* $tmp2366;
    panda$core$Int64 $tmp2367;
    panda$core$String* fullName2369 = NULL;
    panda$core$String$Index$nullable idx2374;
    panda$core$String* alias2377 = NULL;
    panda$core$String* $tmp2378;
    panda$core$String* $tmp2379;
    panda$core$String* $tmp2380;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2381;
    panda$core$Bit $tmp2383;
    panda$core$String* $tmp2385;
    panda$core$String* $tmp2386;
    panda$core$Int64 $tmp2388;
    org$pandalanguage$pandac$Position position2390;
    org$pandalanguage$pandac$ASTNode* dc2392 = NULL;
    panda$collections$ImmutableArray* annotations2394 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind2396;
    panda$core$String* name2398 = NULL;
    panda$collections$ImmutableArray* generics2400 = NULL;
    panda$collections$ImmutableArray* supertypes2402 = NULL;
    panda$collections$ImmutableArray* members2404 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl2409 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2410;
    org$pandalanguage$pandac$ClassDecl* $tmp2411;
    panda$core$Int64 $tmp2414;
    org$pandalanguage$pandac$Position position2416;
    org$pandalanguage$pandac$ASTNode* dc2418 = NULL;
    panda$collections$ImmutableArray* annotations2420 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind2422;
    panda$core$String* rawName2424 = NULL;
    panda$collections$ImmutableArray* generics2426 = NULL;
    panda$collections$ImmutableArray* parameters2428 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType2430 = NULL;
    panda$collections$ImmutableArray* statements2432 = NULL;
    panda$core$Int64 $tmp2437;
    panda$core$String* name2443 = NULL;
    panda$core$String* $tmp2449;
    panda$core$String* $tmp2450;
    panda$collections$Array* mainParameters2452 = NULL;
    panda$collections$Array* $tmp2453;
    panda$collections$Array* $tmp2454;
    panda$collections$Array* mainStatements2456 = NULL;
    panda$collections$Array* $tmp2457;
    panda$collections$Array* $tmp2458;
    panda$collections$Array* mainArguments2460 = NULL;
    panda$collections$Array* $tmp2461;
    panda$collections$Array* $tmp2462;
    panda$collections$Iterator* Iter$725$332467 = NULL;
    panda$collections$Iterator* $tmp2468;
    panda$collections$Iterator* $tmp2469;
    org$pandalanguage$pandac$ASTNode* p2485 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2486;
    panda$core$Object* $tmp2487;
    org$pandalanguage$pandac$ASTNode* $match$726_372495 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2496;
    panda$core$Int64 $tmp2497;
    org$pandalanguage$pandac$Position position2499;
    panda$core$String* name2501 = NULL;
    org$pandalanguage$pandac$ASTNode* type2503 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2505;
    org$pandalanguage$pandac$Type* $tmp2507;
    org$pandalanguage$pandac$ASTNode* $tmp2509;
    panda$core$Int64 $tmp2511;
    panda$core$Bit $tmp2512;
    org$pandalanguage$pandac$ASTNode* bareConstruct2519 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2520;
    org$pandalanguage$pandac$ASTNode* $tmp2521;
    panda$core$Int64 $tmp2523;
    org$pandalanguage$pandac$ASTNode* $tmp2524;
    panda$core$Int64 $tmp2526;
    panda$collections$ImmutableArray* $tmp2528;
    org$pandalanguage$pandac$ASTNode* $tmp2530;
    panda$core$Int64 $tmp2532;
    org$pandalanguage$pandac$ASTNode* $tmp2533;
    panda$core$Int64 $tmp2535;
    panda$collections$ImmutableArray* $tmp2536;
    org$pandalanguage$pandac$Type* returnType2538 = NULL;
    org$pandalanguage$pandac$Type* $tmp2539;
    org$pandalanguage$pandac$Type* $tmp2540;
    org$pandalanguage$pandac$Type* $tmp2541;
    org$pandalanguage$pandac$Type* $tmp2543;
    org$pandalanguage$pandac$Type* $tmp2544;
    org$pandalanguage$pandac$Type* $tmp2545;
    org$pandalanguage$pandac$MethodDecl* bareMain2547 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2548;
    org$pandalanguage$pandac$MethodDecl* $tmp2549;
    org$pandalanguage$pandac$Position $tmp2551;
    org$pandalanguage$pandac$Annotations* $tmp2552;
    panda$core$Int64 $tmp2554;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2555;
    panda$core$Int64 $tmp2556;
    panda$collections$Array* $tmp2558;
    panda$collections$ImmutableArray* $tmp2560;
    panda$core$String* $tmp2563;
    panda$core$String* $tmp2564;
    panda$core$Object* $tmp2565;
    org$pandalanguage$pandac$MethodDecl* m2567 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2568;
    org$pandalanguage$pandac$MethodDecl* $tmp2569;
    panda$core$Int64 $tmp2573;
    panda$core$Object* $tmp2576;
    panda$core$Int64 $tmp2579;
    org$pandalanguage$pandac$Position position2581;
    org$pandalanguage$pandac$ASTNode* dc2583 = NULL;
    panda$collections$ImmutableArray* annotations2585 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl2587 = NULL;
    panda$core$Int64 old2589;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2591;
    panda$core$Bit $tmp2593;
    org$pandalanguage$pandac$FieldDecl* f2610 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp2611;
    panda$core$Object* $tmp2612;
    panda$core$Int64 $tmp2615;
    panda$core$Bit $tmp2628;
    panda$core$String* $tmp2632;
    panda$core$String* $tmp2633;
    panda$core$String* $tmp2634;
    panda$core$String* $tmp2635;
    panda$core$String* $tmp2636;
    panda$core$String* $tmp2637;
    panda$core$Object* $tmp2642;
    panda$core$Object* $tmp2647;
    panda$io$File* $tmp2657;
    panda$io$File* $tmp2658;
    panda$collections$ListView* $returnValue2659;
    panda$collections$ListView* $tmp2660;
    panda$core$Bit $tmp2665;
    {
        $tmp2303 = self->source;
        $tmp2304 = p_source;
        self->source = $tmp2304;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2304));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2303));
    }
    int $tmp2307;
    {
        $tmp2309 = p_file;
        $match$686_92308 = $tmp2309;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2309));
        panda$core$Int64$init$builtin_int64(&$tmp2310, 17);
        panda$core$Bit $tmp2311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$686_92308->$rawValue, $tmp2310);
        if ($tmp2311.value) {
        {
            panda$collections$ImmutableArray** $tmp2313 = ((panda$collections$ImmutableArray**) ((char*) $match$686_92308->$data + 0));
            entries2312 = *$tmp2313;
            int $tmp2316;
            {
                panda$collections$Array* $tmp2320 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2320);
                $tmp2319 = $tmp2320;
                $tmp2318 = $tmp2319;
                result2317 = $tmp2318;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2318));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2319));
                $tmp2322 = &$s2323;
                currentPackage2321 = $tmp2322;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2322));
                panda$collections$HashMap* $tmp2327 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp2327);
                $tmp2326 = $tmp2327;
                $tmp2325 = $tmp2326;
                aliases2324 = $tmp2325;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2325));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2326));
                {
                    int $tmp2330;
                    {
                        ITable* $tmp2334 = ((panda$collections$Iterable*) entries2312)->$class->itable;
                        while ($tmp2334->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2334 = $tmp2334->next;
                        }
                        $fn2336 $tmp2335 = $tmp2334->methods[0];
                        panda$collections$Iterator* $tmp2337 = $tmp2335(((panda$collections$Iterable*) entries2312));
                        $tmp2333 = $tmp2337;
                        $tmp2332 = $tmp2333;
                        Iter$691$172331 = $tmp2332;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2332));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2333));
                        $l2338:;
                        ITable* $tmp2341 = Iter$691$172331->$class->itable;
                        while ($tmp2341->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2341 = $tmp2341->next;
                        }
                        $fn2343 $tmp2342 = $tmp2341->methods[0];
                        panda$core$Bit $tmp2344 = $tmp2342(Iter$691$172331);
                        panda$core$Bit $tmp2345 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2344);
                        bool $tmp2340 = $tmp2345.value;
                        if (!$tmp2340) goto $l2339;
                        {
                            int $tmp2348;
                            {
                                ITable* $tmp2352 = Iter$691$172331->$class->itable;
                                while ($tmp2352->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2352 = $tmp2352->next;
                                }
                                $fn2354 $tmp2353 = $tmp2352->methods[1];
                                panda$core$Object* $tmp2355 = $tmp2353(Iter$691$172331);
                                $tmp2351 = $tmp2355;
                                $tmp2350 = ((org$pandalanguage$pandac$ASTNode*) $tmp2351);
                                e2349 = $tmp2350;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2350));
                                panda$core$Panda$unref$panda$core$Object($tmp2351);
                                int $tmp2358;
                                {
                                    $tmp2360 = e2349;
                                    $match$692_212359 = $tmp2360;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2360));
                                    panda$core$Int64$init$builtin_int64(&$tmp2361, 30);
                                    panda$core$Bit $tmp2362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$692_212359->$rawValue, $tmp2361);
                                    if ($tmp2362.value) {
                                    {
                                        panda$core$String** $tmp2364 = ((panda$core$String**) ((char*) $match$692_212359->$data + 16));
                                        name2363 = *$tmp2364;
                                        {
                                            $tmp2365 = currentPackage2321;
                                            $tmp2366 = name2363;
                                            currentPackage2321 = $tmp2366;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2366));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2365));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2367, 46);
                                    panda$core$Bit $tmp2368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$692_212359->$rawValue, $tmp2367);
                                    if ($tmp2368.value) {
                                    {
                                        panda$core$String** $tmp2370 = ((panda$core$String**) ((char*) $match$692_212359->$data + 16));
                                        fullName2369 = *$tmp2370;
                                        int $tmp2373;
                                        {
                                            panda$core$String$Index$nullable $tmp2376 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName2369, &$s2375);
                                            idx2374 = $tmp2376;
                                            memset(&alias2377, 0, sizeof(alias2377));
                                            if (((panda$core$Bit) { idx2374.nonnull }).value) {
                                            {
                                                {
                                                    $tmp2378 = alias2377;
                                                    panda$core$String$Index $tmp2382 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName2369, ((panda$core$String$Index) idx2374.value));
                                                    panda$core$Bit$init$builtin_bit(&$tmp2383, false);
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp2381, ((panda$core$String$Index$nullable) { $tmp2382, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2383);
                                                    panda$core$String* $tmp2384 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName2369, $tmp2381);
                                                    $tmp2380 = $tmp2384;
                                                    $tmp2379 = $tmp2380;
                                                    alias2377 = $tmp2379;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2379));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2380));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2378));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2385 = alias2377;
                                                    $tmp2386 = fullName2369;
                                                    alias2377 = $tmp2386;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2386));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2385));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases2324, ((panda$collections$Key*) alias2377), ((panda$core$Object*) fullName2369));
                                        }
                                        $tmp2373 = -1;
                                        goto $l2371;
                                        $l2371:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias2377));
                                        switch ($tmp2373) {
                                            case -1: goto $l2387;
                                        }
                                        $l2387:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2388, 11);
                                    panda$core$Bit $tmp2389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$692_212359->$rawValue, $tmp2388);
                                    if ($tmp2389.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2391 = ((org$pandalanguage$pandac$Position*) ((char*) $match$692_212359->$data + 0));
                                        position2390 = *$tmp2391;
                                        org$pandalanguage$pandac$ASTNode** $tmp2393 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$692_212359->$data + 16));
                                        dc2392 = *$tmp2393;
                                        panda$collections$ImmutableArray** $tmp2395 = ((panda$collections$ImmutableArray**) ((char*) $match$692_212359->$data + 24));
                                        annotations2394 = *$tmp2395;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp2397 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$692_212359->$data + 32));
                                        kind2396 = *$tmp2397;
                                        panda$core$String** $tmp2399 = ((panda$core$String**) ((char*) $match$692_212359->$data + 40));
                                        name2398 = *$tmp2399;
                                        panda$collections$ImmutableArray** $tmp2401 = ((panda$collections$ImmutableArray**) ((char*) $match$692_212359->$data + 48));
                                        generics2400 = *$tmp2401;
                                        panda$collections$ImmutableArray** $tmp2403 = ((panda$collections$ImmutableArray**) ((char*) $match$692_212359->$data + 56));
                                        supertypes2402 = *$tmp2403;
                                        panda$collections$ImmutableArray** $tmp2405 = ((panda$collections$ImmutableArray**) ((char*) $match$692_212359->$data + 64));
                                        members2404 = *$tmp2405;
                                        int $tmp2408;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp2412 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases2324), currentPackage2321, position2390, dc2392, annotations2394, kind2396, name2398, generics2400, supertypes2402, members2404);
                                            $tmp2411 = $tmp2412;
                                            $tmp2410 = $tmp2411;
                                            cl2409 = $tmp2410;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2410));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2411));
                                            if (((panda$core$Bit) { cl2409 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl2409, result2317);
                                            }
                                            }
                                        }
                                        $tmp2408 = -1;
                                        goto $l2406;
                                        $l2406:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2409));
                                        cl2409 = NULL;
                                        switch ($tmp2408) {
                                            case -1: goto $l2413;
                                        }
                                        $l2413:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2414, 26);
                                    panda$core$Bit $tmp2415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$692_212359->$rawValue, $tmp2414);
                                    if ($tmp2415.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2417 = ((org$pandalanguage$pandac$Position*) ((char*) $match$692_212359->$data + 0));
                                        position2416 = *$tmp2417;
                                        org$pandalanguage$pandac$ASTNode** $tmp2419 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$692_212359->$data + 16));
                                        dc2418 = *$tmp2419;
                                        panda$collections$ImmutableArray** $tmp2421 = ((panda$collections$ImmutableArray**) ((char*) $match$692_212359->$data + 24));
                                        annotations2420 = *$tmp2421;
                                        org$pandalanguage$pandac$MethodDecl$Kind* $tmp2423 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$692_212359->$data + 32));
                                        kind2422 = *$tmp2423;
                                        panda$core$String** $tmp2425 = ((panda$core$String**) ((char*) $match$692_212359->$data + 40));
                                        rawName2424 = *$tmp2425;
                                        panda$collections$ImmutableArray** $tmp2427 = ((panda$collections$ImmutableArray**) ((char*) $match$692_212359->$data + 48));
                                        generics2426 = *$tmp2427;
                                        panda$collections$ImmutableArray** $tmp2429 = ((panda$collections$ImmutableArray**) ((char*) $match$692_212359->$data + 56));
                                        parameters2428 = *$tmp2429;
                                        org$pandalanguage$pandac$ASTNode** $tmp2431 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$692_212359->$data + 64));
                                        rawReturnType2430 = *$tmp2431;
                                        panda$collections$ImmutableArray** $tmp2433 = ((panda$collections$ImmutableArray**) ((char*) $match$692_212359->$data + 72));
                                        statements2432 = *$tmp2433;
                                        int $tmp2436;
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp2437, 2);
                                            panda$core$Bit $tmp2438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind2422.$rawValue, $tmp2437);
                                            if ($tmp2438.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, position2416, &$s2439);
                                                $tmp2436 = 0;
                                                goto $l2434;
                                                $l2440:;
                                                $tmp2358 = 0;
                                                goto $l2356;
                                                $l2441:;
                                                $tmp2348 = 0;
                                                goto $l2346;
                                                $l2442:;
                                                goto $l2338;
                                            }
                                            }
                                            org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2324), currentPackage2321, ((panda$collections$List*) result2317));
                                            memset(&name2443, 0, sizeof(name2443));
                                            panda$core$Bit $tmp2445 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(rawName2424, &$s2444);
                                            if ($tmp2445.value) {
                                            {
                                                int $tmp2448;
                                                {
                                                    {
                                                        $tmp2449 = name2443;
                                                        $tmp2450 = &$s2451;
                                                        name2443 = $tmp2450;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2450));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2449));
                                                    }
                                                    panda$collections$Array* $tmp2455 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2455);
                                                    $tmp2454 = $tmp2455;
                                                    $tmp2453 = $tmp2454;
                                                    mainParameters2452 = $tmp2453;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2453));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2454));
                                                    panda$collections$Array* $tmp2459 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2459);
                                                    $tmp2458 = $tmp2459;
                                                    $tmp2457 = $tmp2458;
                                                    mainStatements2456 = $tmp2457;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2457));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2458));
                                                    panda$collections$Array* $tmp2463 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2463);
                                                    $tmp2462 = $tmp2463;
                                                    $tmp2461 = $tmp2462;
                                                    mainArguments2460 = $tmp2461;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2461));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2462));
                                                    {
                                                        int $tmp2466;
                                                        {
                                                            ITable* $tmp2470 = ((panda$collections$Iterable*) parameters2428)->$class->itable;
                                                            while ($tmp2470->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                                                $tmp2470 = $tmp2470->next;
                                                            }
                                                            $fn2472 $tmp2471 = $tmp2470->methods[0];
                                                            panda$collections$Iterator* $tmp2473 = $tmp2471(((panda$collections$Iterable*) parameters2428));
                                                            $tmp2469 = $tmp2473;
                                                            $tmp2468 = $tmp2469;
                                                            Iter$725$332467 = $tmp2468;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2468));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2469));
                                                            $l2474:;
                                                            ITable* $tmp2477 = Iter$725$332467->$class->itable;
                                                            while ($tmp2477->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                $tmp2477 = $tmp2477->next;
                                                            }
                                                            $fn2479 $tmp2478 = $tmp2477->methods[0];
                                                            panda$core$Bit $tmp2480 = $tmp2478(Iter$725$332467);
                                                            panda$core$Bit $tmp2481 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2480);
                                                            bool $tmp2476 = $tmp2481.value;
                                                            if (!$tmp2476) goto $l2475;
                                                            {
                                                                int $tmp2484;
                                                                {
                                                                    ITable* $tmp2488 = Iter$725$332467->$class->itable;
                                                                    while ($tmp2488->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                        $tmp2488 = $tmp2488->next;
                                                                    }
                                                                    $fn2490 $tmp2489 = $tmp2488->methods[1];
                                                                    panda$core$Object* $tmp2491 = $tmp2489(Iter$725$332467);
                                                                    $tmp2487 = $tmp2491;
                                                                    $tmp2486 = ((org$pandalanguage$pandac$ASTNode*) $tmp2487);
                                                                    p2485 = $tmp2486;
                                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2486));
                                                                    panda$core$Panda$unref$panda$core$Object($tmp2487);
                                                                    int $tmp2494;
                                                                    {
                                                                        $tmp2496 = p2485;
                                                                        $match$726_372495 = $tmp2496;
                                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2496));
                                                                        panda$core$Int64$init$builtin_int64(&$tmp2497, 31);
                                                                        panda$core$Bit $tmp2498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$726_372495->$rawValue, $tmp2497);
                                                                        if ($tmp2498.value) {
                                                                        {
                                                                            org$pandalanguage$pandac$Position* $tmp2500 = ((org$pandalanguage$pandac$Position*) ((char*) $match$726_372495->$data + 0));
                                                                            position2499 = *$tmp2500;
                                                                            panda$core$String** $tmp2502 = ((panda$core$String**) ((char*) $match$726_372495->$data + 16));
                                                                            name2501 = *$tmp2502;
                                                                            org$pandalanguage$pandac$ASTNode** $tmp2504 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$726_372495->$data + 24));
                                                                            type2503 = *$tmp2504;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2506 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                                                            org$pandalanguage$pandac$Type* $tmp2508 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type2503);
                                                                            $tmp2507 = $tmp2508;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2506, name2501, $tmp2507);
                                                                            $tmp2505 = $tmp2506;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainParameters2452, ((panda$core$Object*) $tmp2505));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2505));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2507));
                                                                            org$pandalanguage$pandac$ASTNode* $tmp2510 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                                            panda$core$Int64$init$builtin_int64(&$tmp2511, 20);
                                                                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2510, $tmp2511, position2499, name2501);
                                                                            $tmp2509 = $tmp2510;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainArguments2460, ((panda$core$Object*) $tmp2509));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2509));
                                                                        }
                                                                        }
                                                                        else {
                                                                        {
                                                                            panda$core$Bit$init$builtin_bit(&$tmp2512, false);
                                                                            if ($tmp2512.value) goto $l2513; else goto $l2514;
                                                                            $l2514:;
                                                                            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2515, (panda$core$Int64) { 732 });
                                                                            abort();
                                                                            $l2513:;
                                                                        }
                                                                        }
                                                                    }
                                                                    $tmp2494 = -1;
                                                                    goto $l2492;
                                                                    $l2492:;
                                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2496));
                                                                    switch ($tmp2494) {
                                                                        case -1: goto $l2516;
                                                                    }
                                                                    $l2516:;
                                                                }
                                                                $tmp2484 = -1;
                                                                goto $l2482;
                                                                $l2482:;
                                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p2485));
                                                                p2485 = NULL;
                                                                switch ($tmp2484) {
                                                                    case -1: goto $l2517;
                                                                }
                                                                $l2517:;
                                                            }
                                                            goto $l2474;
                                                            $l2475:;
                                                        }
                                                        $tmp2466 = -1;
                                                        goto $l2464;
                                                        $l2464:;
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$725$332467));
                                                        Iter$725$332467 = NULL;
                                                        switch ($tmp2466) {
                                                            case -1: goto $l2518;
                                                        }
                                                        $l2518:;
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp2522 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2523, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2525 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2526, 20);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2525, $tmp2526, position2416, &$s2527);
                                                    $tmp2524 = $tmp2525;
                                                    panda$collections$ImmutableArray* $tmp2529 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                                                    panda$collections$ImmutableArray$init($tmp2529);
                                                    $tmp2528 = $tmp2529;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2522, $tmp2523, position2416, $tmp2524, $tmp2528);
                                                    $tmp2521 = $tmp2522;
                                                    $tmp2520 = $tmp2521;
                                                    bareConstruct2519 = $tmp2520;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2520));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2521));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2528));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2524));
                                                    org$pandalanguage$pandac$ASTNode* $tmp2531 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2532, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2534 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2535, 15);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2534, $tmp2535, position2416, bareConstruct2519, name2443);
                                                    $tmp2533 = $tmp2534;
                                                    panda$collections$ImmutableArray* $tmp2537 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainArguments2460);
                                                    $tmp2536 = $tmp2537;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2531, $tmp2532, position2416, $tmp2533, $tmp2536);
                                                    $tmp2530 = $tmp2531;
                                                    panda$collections$Array$add$panda$collections$Array$T(mainStatements2456, ((panda$core$Object*) $tmp2530));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2530));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2536));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2533));
                                                    memset(&returnType2538, 0, sizeof(returnType2538));
                                                    if (((panda$core$Bit) { rawReturnType2430 != NULL }).value) {
                                                    {
                                                        {
                                                            $tmp2539 = returnType2538;
                                                            org$pandalanguage$pandac$Type* $tmp2542 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType2430);
                                                            $tmp2541 = $tmp2542;
                                                            $tmp2540 = $tmp2541;
                                                            returnType2538 = $tmp2540;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2540));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2541));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2539));
                                                        }
                                                    }
                                                    }
                                                    else {
                                                    {
                                                        {
                                                            $tmp2543 = returnType2538;
                                                            org$pandalanguage$pandac$Type* $tmp2546 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                            $tmp2545 = $tmp2546;
                                                            $tmp2544 = $tmp2545;
                                                            returnType2538 = $tmp2544;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2544));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2545));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2543));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$MethodDecl* $tmp2550 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                                                    org$pandalanguage$pandac$Position$init(&$tmp2551);
                                                    org$pandalanguage$pandac$Annotations* $tmp2553 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2554, 16);
                                                    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2553, $tmp2554);
                                                    $tmp2552 = $tmp2553;
                                                    panda$core$Int64$init$builtin_int64(&$tmp2556, 0);
                                                    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2555, $tmp2556);
                                                    panda$collections$Array* $tmp2559 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2559);
                                                    $tmp2558 = $tmp2559;
                                                    panda$collections$ImmutableArray* $tmp2561 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainStatements2456);
                                                    $tmp2560 = $tmp2561;
                                                    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2550, self->bareCodeClass, $tmp2551, NULL, $tmp2552, $tmp2555, &$s2557, $tmp2558, mainParameters2452, returnType2538, $tmp2560);
                                                    $tmp2549 = $tmp2550;
                                                    $tmp2548 = $tmp2549;
                                                    bareMain2547 = $tmp2548;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2548));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2549));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2560));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2558));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2552));
                                                    panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) bareMain2547));
                                                }
                                                $tmp2448 = -1;
                                                goto $l2446;
                                                $l2446:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareMain2547));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2538));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareConstruct2519));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainArguments2460));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainStatements2456));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainParameters2452));
                                                mainParameters2452 = NULL;
                                                mainStatements2456 = NULL;
                                                mainArguments2460 = NULL;
                                                bareConstruct2519 = NULL;
                                                bareMain2547 = NULL;
                                                switch ($tmp2448) {
                                                    case -1: goto $l2562;
                                                }
                                                $l2562:;
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2563 = name2443;
                                                    $tmp2564 = rawName2424;
                                                    name2443 = $tmp2564;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2564));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2563));
                                                }
                                            }
                                            }
                                            panda$core$Object* $tmp2566 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                            $tmp2565 = $tmp2566;
                                            panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2565)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2565);
                                            org$pandalanguage$pandac$MethodDecl* $tmp2570 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, self->bareCodeClass, position2416, dc2418, annotations2420, kind2422, name2443, generics2426, parameters2428, rawReturnType2430, statements2432);
                                            $tmp2569 = $tmp2570;
                                            $tmp2568 = $tmp2569;
                                            m2567 = $tmp2568;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2568));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2569));
                                            panda$core$Bit $tmp2571 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2567->annotations);
                                            if ($tmp2571.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) m2567)->position, &$s2572);
                                                panda$core$Int64$init$builtin_int64(&$tmp2573, 16);
                                                panda$core$Int64 $tmp2574 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp2573);
                                                panda$core$Int64 $tmp2575 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(m2567->annotations->flags, $tmp2574);
                                                m2567->annotations->flags = $tmp2575;
                                            }
                                            }
                                            panda$core$Object* $tmp2577 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                            $tmp2576 = $tmp2577;
                                            panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2576)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2576);
                                            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) m2567));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) m2567));
                                        }
                                        $tmp2436 = -1;
                                        goto $l2434;
                                        $l2434:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2567));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2443));
                                        m2567 = NULL;
                                        switch ($tmp2436) {
                                            case 0: goto $l2440;
                                            case -1: goto $l2578;
                                        }
                                        $l2578:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2579, 16);
                                    panda$core$Bit $tmp2580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$692_212359->$rawValue, $tmp2579);
                                    if ($tmp2580.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2582 = ((org$pandalanguage$pandac$Position*) ((char*) $match$692_212359->$data + 0));
                                        position2581 = *$tmp2582;
                                        org$pandalanguage$pandac$ASTNode** $tmp2584 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$692_212359->$data + 16));
                                        dc2583 = *$tmp2584;
                                        panda$collections$ImmutableArray** $tmp2586 = ((panda$collections$ImmutableArray**) ((char*) $match$692_212359->$data + 24));
                                        annotations2585 = *$tmp2586;
                                        org$pandalanguage$pandac$ASTNode** $tmp2588 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$692_212359->$data + 32));
                                        varDecl2587 = *$tmp2588;
                                        org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2324), currentPackage2321, ((panda$collections$List*) result2317));
                                        panda$core$Int64 $tmp2590 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        old2589 = $tmp2590;
                                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, self->bareCodeClass, position2581, dc2583, annotations2585, varDecl2587);
                                        panda$core$Int64 $tmp2592 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        panda$core$Bit$init$builtin_bit(&$tmp2593, false);
                                        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2591, old2589, $tmp2592, $tmp2593);
                                        int64_t $tmp2595 = $tmp2591.min.value;
                                        panda$core$Int64 i2594 = { $tmp2595 };
                                        int64_t $tmp2597 = $tmp2591.max.value;
                                        bool $tmp2598 = $tmp2591.inclusive.value;
                                        if ($tmp2598) goto $l2605; else goto $l2606;
                                        $l2605:;
                                        if ($tmp2595 <= $tmp2597) goto $l2599; else goto $l2601;
                                        $l2606:;
                                        if ($tmp2595 < $tmp2597) goto $l2599; else goto $l2601;
                                        $l2599:;
                                        {
                                            int $tmp2609;
                                            {
                                                panda$core$Object* $tmp2613 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->bareCodeClass->fields, i2594);
                                                $tmp2612 = $tmp2613;
                                                $tmp2611 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2612);
                                                f2610 = $tmp2611;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2611));
                                                panda$core$Panda$unref$panda$core$Object($tmp2612);
                                                panda$core$Int64$init$builtin_int64(&$tmp2615, 2);
                                                panda$core$Bit $tmp2616 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(f2610->fieldKind.$rawValue, $tmp2615);
                                                bool $tmp2614 = $tmp2616.value;
                                                if (!$tmp2614) goto $l2617;
                                                panda$core$Bit $tmp2618 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f2610->annotations);
                                                $tmp2614 = $tmp2618.value;
                                                $l2617:;
                                                panda$core$Bit $tmp2619 = { $tmp2614 };
                                                if ($tmp2619.value) {
                                                {
                                                    org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) f2610)->position, &$s2620);
                                                }
                                                }
                                            }
                                            $tmp2609 = -1;
                                            goto $l2607;
                                            $l2607:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f2610));
                                            f2610 = NULL;
                                            switch ($tmp2609) {
                                                case -1: goto $l2621;
                                            }
                                            $l2621:;
                                        }
                                        $l2602:;
                                        int64_t $tmp2623 = $tmp2597 - i2594.value;
                                        if ($tmp2598) goto $l2624; else goto $l2625;
                                        $l2624:;
                                        if ((uint64_t) $tmp2623 >= 1) goto $l2622; else goto $l2601;
                                        $l2625:;
                                        if ((uint64_t) $tmp2623 > 1) goto $l2622; else goto $l2601;
                                        $l2622:;
                                        i2594.value += 1;
                                        goto $l2599;
                                        $l2601:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp2628, false);
                                        if ($tmp2628.value) goto $l2629; else goto $l2630;
                                        $l2630:;
                                        panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2638, ((panda$core$Object*) e2349));
                                        $tmp2637 = $tmp2639;
                                        panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, &$s2640);
                                        $tmp2636 = $tmp2641;
                                        panda$core$Int64$wrapper* $tmp2643;
                                        $tmp2643 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                                        $tmp2643->value = e2349->$rawValue;
                                        $tmp2642 = ((panda$core$Object*) $tmp2643);
                                        panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2636, $tmp2642);
                                        $tmp2635 = $tmp2644;
                                        panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2635, &$s2645);
                                        $tmp2634 = $tmp2646;
                                        org$pandalanguage$pandac$Position $tmp2649 = (($fn2648) e2349->$class->vtable[2])(e2349);
                                        org$pandalanguage$pandac$Position$wrapper* $tmp2650;
                                        $tmp2650 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                                        $tmp2650->value = $tmp2649;
                                        $tmp2647 = ((panda$core$Object*) $tmp2650);
                                        panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2634, $tmp2647);
                                        $tmp2633 = $tmp2651;
                                        panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2633, &$s2652);
                                        $tmp2632 = $tmp2653;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2631, (panda$core$Int64) { 781 }, $tmp2632);
                                        abort();
                                        $l2629:;
                                    }
                                    }
                                    }
                                    }
                                    }
                                    }
                                }
                                $tmp2358 = -1;
                                goto $l2356;
                                $l2356:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2360));
                                switch ($tmp2358) {
                                    case 0: goto $l2441;
                                    case -1: goto $l2654;
                                }
                                $l2654:;
                            }
                            $tmp2348 = -1;
                            goto $l2346;
                            $l2346:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2349));
                            e2349 = NULL;
                            switch ($tmp2348) {
                                case 0: goto $l2442;
                                case -1: goto $l2655;
                            }
                            $l2655:;
                        }
                        goto $l2338;
                        $l2339:;
                    }
                    $tmp2330 = -1;
                    goto $l2328;
                    $l2328:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$691$172331));
                    Iter$691$172331 = NULL;
                    switch ($tmp2330) {
                        case -1: goto $l2656;
                    }
                    $l2656:;
                }
                {
                    $tmp2657 = self->source;
                    $tmp2658 = NULL;
                    self->source = $tmp2658;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2658));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2657));
                }
                $tmp2660 = ((panda$collections$ListView*) result2317);
                $returnValue2659 = $tmp2660;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2660));
                $tmp2316 = 0;
                goto $l2314;
                $l2661:;
                $tmp2307 = 0;
                goto $l2305;
                $l2662:;
                return $returnValue2659;
            }
            $l2314:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases2324));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage2321));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2317));
            result2317 = NULL;
            currentPackage2321 = NULL;
            aliases2324 = NULL;
            switch ($tmp2316) {
                case 0: goto $l2661;
            }
            $l2664:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2665, false);
            if ($tmp2665.value) goto $l2666; else goto $l2667;
            $l2667:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2668, (panda$core$Int64) { 787 });
            abort();
            $l2666:;
        }
        }
    }
    $tmp2307 = -1;
    goto $l2305;
    $l2305:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2309));
    switch ($tmp2307) {
        case -1: goto $l2669;
        case 0: goto $l2662;
    }
    $l2669:;
    abort();
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp2672;
    {
    }
    $tmp2672 = -1;
    goto $l2670;
    $l2670:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2672) {
        case -1: goto $l2673;
    }
    $l2673:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bareCodeClass));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}

