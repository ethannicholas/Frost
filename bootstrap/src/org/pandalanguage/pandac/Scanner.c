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
typedef panda$collections$Iterator* (*$fn270)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn277)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn288)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn504)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn511)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn522)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn637)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn644)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn655)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn684)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn691)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn702)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn748)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn755)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn766)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn797)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn804)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn815)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn851)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn858)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn869)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn898)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn905)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn916)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn942)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn949)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn960)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn974)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn981)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn992)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1088)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1095)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1106)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1130)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1137)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1148)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1162)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1169)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1180)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1204)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1211)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1222)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1244)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1265)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1272)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1283)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1368)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1375)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1386)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1424)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1443)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1450)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1461)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1675)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1682)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1693)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1762)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1769)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1780)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1818)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1840)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1847)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1858)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1869)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1872)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1910)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1917)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1928)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1967)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1974)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1985)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2089)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2096)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2107)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2123)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn2139)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2146)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2157)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2179)(panda$core$Weak*);
typedef void (*$fn2183)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$core$Object* (*$fn2230)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn2265)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2272)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2283)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2395)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2402)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2413)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2489)(panda$core$Weak*);
typedef panda$core$Object* (*$fn2501)(panda$core$Weak*);
typedef org$pandalanguage$pandac$Position (*$fn2573)(org$pandalanguage$pandac$ASTNode*);

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
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s2577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };

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
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags258;
    panda$core$Int64 $tmp259;
    panda$collections$Array* expressions260 = NULL;
    panda$collections$Array* $tmp261;
    panda$collections$Iterator* Iter$86$9265 = NULL;
    panda$collections$Iterator* $tmp266;
    panda$collections$Iterator* $tmp267;
    org$pandalanguage$pandac$ASTNode* c283 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp284;
    panda$core$Object* $tmp285;
    org$pandalanguage$pandac$ASTNode* $match$87_13293 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp294;
    panda$core$Int64 $tmp295;
    org$pandalanguage$pandac$Position p297;
    panda$core$String* text299 = NULL;
    org$pandalanguage$pandac$ASTNode* rawExpr301 = NULL;
    org$pandalanguage$pandac$ASTNode* expr306 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp307;
    panda$core$String* $match$90_21311 = NULL;
    panda$core$String* $tmp312;
    panda$core$Int64 $tmp315;
    panda$core$Int64 $tmp319;
    panda$core$Int64 $tmp323;
    panda$core$Int64 $tmp327;
    panda$core$Int64 $tmp331;
    panda$core$Int64 $tmp335;
    panda$core$Int64 $tmp339;
    panda$core$Int64 $tmp343;
    panda$core$Int64 $tmp347;
    panda$core$Int64 $tmp351;
    panda$core$Int64 $tmp355;
    panda$core$Int64 $tmp359;
    panda$core$Int64 $tmp363;
    panda$collections$Array* $tmp367;
    panda$collections$Array* $tmp368;
    panda$collections$Array* $tmp369;
    org$pandalanguage$pandac$Annotations$Expression* $tmp371;
    panda$core$Int64 $tmp373;
    org$pandalanguage$pandac$ASTNode* $tmp374;
    org$pandalanguage$pandac$ASTNode* $tmp375;
    panda$collections$Array* $tmp378;
    panda$collections$Array* $tmp379;
    panda$collections$Array* $tmp380;
    org$pandalanguage$pandac$Annotations$Expression* $tmp382;
    panda$core$Int64 $tmp384;
    org$pandalanguage$pandac$ASTNode* $tmp385;
    org$pandalanguage$pandac$ASTNode* $tmp386;
    panda$collections$Array* $tmp389;
    panda$collections$Array* $tmp390;
    panda$collections$Array* $tmp391;
    org$pandalanguage$pandac$Annotations$Expression* $tmp393;
    panda$core$Int64 $tmp395;
    org$pandalanguage$pandac$ASTNode* $tmp396;
    org$pandalanguage$pandac$ASTNode* $tmp397;
    panda$collections$Array* $tmp400;
    panda$collections$Array* $tmp401;
    panda$collections$Array* $tmp402;
    org$pandalanguage$pandac$Annotations$Expression* $tmp404;
    panda$core$Int64 $tmp406;
    org$pandalanguage$pandac$ASTNode* $tmp407;
    org$pandalanguage$pandac$ASTNode* $tmp408;
    panda$core$String* $tmp409;
    panda$core$String* $tmp410;
    panda$core$String* $tmp416;
    panda$core$String* $tmp417;
    panda$core$Bit $tmp423;
    org$pandalanguage$pandac$Annotations* $returnValue430;
    org$pandalanguage$pandac$Annotations* $tmp431;
    org$pandalanguage$pandac$Annotations* $tmp432;
    int $tmp257;
    {
        panda$core$Int64$init$builtin_int64(&$tmp259, 0);
        flags258 = $tmp259;
        $tmp261 = NULL;
        expressions260 = $tmp261;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
        {
            int $tmp264;
            {
                ITable* $tmp268 = ((panda$collections$Iterable*) p_a)->$class->itable;
                while ($tmp268->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp268 = $tmp268->next;
                }
                $fn270 $tmp269 = $tmp268->methods[0];
                panda$collections$Iterator* $tmp271 = $tmp269(((panda$collections$Iterable*) p_a));
                $tmp267 = $tmp271;
                $tmp266 = $tmp267;
                Iter$86$9265 = $tmp266;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
                $l272:;
                ITable* $tmp275 = Iter$86$9265->$class->itable;
                while ($tmp275->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp275 = $tmp275->next;
                }
                $fn277 $tmp276 = $tmp275->methods[0];
                panda$core$Bit $tmp278 = $tmp276(Iter$86$9265);
                panda$core$Bit $tmp279 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp278);
                bool $tmp274 = $tmp279.value;
                if (!$tmp274) goto $l273;
                {
                    int $tmp282;
                    {
                        ITable* $tmp286 = Iter$86$9265->$class->itable;
                        while ($tmp286->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp286 = $tmp286->next;
                        }
                        $fn288 $tmp287 = $tmp286->methods[1];
                        panda$core$Object* $tmp289 = $tmp287(Iter$86$9265);
                        $tmp285 = $tmp289;
                        $tmp284 = ((org$pandalanguage$pandac$ASTNode*) $tmp285);
                        c283 = $tmp284;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp284));
                        panda$core$Panda$unref$panda$core$Object($tmp285);
                        int $tmp292;
                        {
                            $tmp294 = c283;
                            $match$87_13293 = $tmp294;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp294));
                            panda$core$Int64$init$builtin_int64(&$tmp295, 0);
                            panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$87_13293->$rawValue, $tmp295);
                            if ($tmp296.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp298 = ((org$pandalanguage$pandac$Position*) ((char*) $match$87_13293->$data + 0));
                                p297 = *$tmp298;
                                panda$core$String** $tmp300 = ((panda$core$String**) ((char*) $match$87_13293->$data + 16));
                                text299 = *$tmp300;
                                org$pandalanguage$pandac$ASTNode** $tmp302 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$87_13293->$data + 24));
                                rawExpr301 = *$tmp302;
                                int $tmp305;
                                {
                                    $tmp307 = rawExpr301;
                                    expr306 = $tmp307;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp307));
                                    int $tmp310;
                                    {
                                        $tmp312 = text299;
                                        $match$90_21311 = $tmp312;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
                                        panda$core$Bit $tmp314 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s313);
                                        if ($tmp314.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp315, 2);
                                            panda$core$Int64 $tmp316 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p297, flags258, $tmp315);
                                            flags258 = $tmp316;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp318 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s317);
                                        if ($tmp318.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp319, 4);
                                            panda$core$Int64 $tmp320 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p297, flags258, $tmp319);
                                            flags258 = $tmp320;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp322 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s321);
                                        if ($tmp322.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp323, 8);
                                            panda$core$Int64 $tmp324 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p297, flags258, $tmp323);
                                            flags258 = $tmp324;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp326 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s325);
                                        if ($tmp326.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp327, 16);
                                            panda$core$Int64 $tmp328 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p297, flags258, $tmp327);
                                            flags258 = $tmp328;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp330 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s329);
                                        if ($tmp330.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp331, 32);
                                            panda$core$Int64 $tmp332 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p297, flags258, $tmp331);
                                            flags258 = $tmp332;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp334 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s333);
                                        if ($tmp334.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp335, 64);
                                            panda$core$Int64 $tmp336 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p297, flags258, $tmp335);
                                            flags258 = $tmp336;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp338 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s337);
                                        if ($tmp338.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp339, 128);
                                            panda$core$Int64 $tmp340 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p297, flags258, $tmp339);
                                            flags258 = $tmp340;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp342 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s341);
                                        if ($tmp342.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp343, 256);
                                            panda$core$Int64 $tmp344 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p297, flags258, $tmp343);
                                            flags258 = $tmp344;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp346 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s345);
                                        if ($tmp346.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp347, 512);
                                            panda$core$Int64 $tmp348 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p297, flags258, $tmp347);
                                            flags258 = $tmp348;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp350 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s349);
                                        if ($tmp350.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp351, 1024);
                                            panda$core$Int64 $tmp352 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p297, flags258, $tmp351);
                                            flags258 = $tmp352;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp354 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s353);
                                        if ($tmp354.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp355, 2048);
                                            panda$core$Int64 $tmp356 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p297, flags258, $tmp355);
                                            flags258 = $tmp356;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp358 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s357);
                                        if ($tmp358.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp359, 4096);
                                            panda$core$Int64 $tmp360 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p297, flags258, $tmp359);
                                            flags258 = $tmp360;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp362 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s361);
                                        if ($tmp362.value) {
                                        {
                                            panda$core$Int64$init$builtin_int64(&$tmp363, 16384);
                                            panda$core$Int64 $tmp364 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(self, p297, flags258, $tmp363);
                                            flags258 = $tmp364;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp366 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s365);
                                        if ($tmp366.value) {
                                        {
                                            if (((panda$core$Bit) { expressions260 == NULL }).value) {
                                            {
                                                {
                                                    $tmp367 = expressions260;
                                                    panda$collections$Array* $tmp370 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp370);
                                                    $tmp369 = $tmp370;
                                                    $tmp368 = $tmp369;
                                                    expressions260 = $tmp368;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp368));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp372 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            panda$core$Int64$init$builtin_int64(&$tmp373, 0);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp372, $tmp373, expr306);
                                            $tmp371 = $tmp372;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions260, ((panda$core$Object*) $tmp371));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp371));
                                            {
                                                $tmp374 = expr306;
                                                $tmp375 = NULL;
                                                expr306 = $tmp375;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp375));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp374));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp377 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s376);
                                        if ($tmp377.value) {
                                        {
                                            if (((panda$core$Bit) { expressions260 == NULL }).value) {
                                            {
                                                {
                                                    $tmp378 = expressions260;
                                                    panda$collections$Array* $tmp381 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp381);
                                                    $tmp380 = $tmp381;
                                                    $tmp379 = $tmp380;
                                                    expressions260 = $tmp379;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp379));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp378));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp383 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            panda$core$Int64$init$builtin_int64(&$tmp384, 1);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp383, $tmp384, expr306);
                                            $tmp382 = $tmp383;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions260, ((panda$core$Object*) $tmp382));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp382));
                                            {
                                                $tmp385 = expr306;
                                                $tmp386 = NULL;
                                                expr306 = $tmp386;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp388 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s387);
                                        if ($tmp388.value) {
                                        {
                                            if (((panda$core$Bit) { expressions260 == NULL }).value) {
                                            {
                                                {
                                                    $tmp389 = expressions260;
                                                    panda$collections$Array* $tmp392 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp392);
                                                    $tmp391 = $tmp392;
                                                    $tmp390 = $tmp391;
                                                    expressions260 = $tmp390;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp394 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            panda$core$Int64$init$builtin_int64(&$tmp395, 2);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp394, $tmp395, expr306);
                                            $tmp393 = $tmp394;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions260, ((panda$core$Object*) $tmp393));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
                                            {
                                                $tmp396 = expr306;
                                                $tmp397 = NULL;
                                                expr306 = $tmp397;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp397));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp399 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$90_21311, &$s398);
                                        if ($tmp399.value) {
                                        {
                                            if (((panda$core$Bit) { expressions260 == NULL }).value) {
                                            {
                                                {
                                                    $tmp400 = expressions260;
                                                    panda$collections$Array* $tmp403 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp403);
                                                    $tmp402 = $tmp403;
                                                    $tmp401 = $tmp402;
                                                    expressions260 = $tmp401;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp401));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp402));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp400));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp405 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            panda$core$Int64$init$builtin_int64(&$tmp406, 3);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp405, $tmp406, expr306);
                                            $tmp404 = $tmp405;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions260, ((panda$core$Object*) $tmp404));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
                                            {
                                                $tmp407 = expr306;
                                                $tmp408 = NULL;
                                                expr306 = $tmp408;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp408));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp407));
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s411, text299);
                                            $tmp410 = $tmp412;
                                            panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp410, &$s413);
                                            $tmp409 = $tmp414;
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p297, $tmp409);
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp410));
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
                                    $tmp310 = -1;
                                    goto $l308;
                                    $l308:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
                                    switch ($tmp310) {
                                        case -1: goto $l415;
                                    }
                                    $l415:;
                                    if (((panda$core$Bit) { expr306 != NULL }).value) {
                                    {
                                        panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s418, text299);
                                        $tmp417 = $tmp419;
                                        panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, &$s420);
                                        $tmp416 = $tmp421;
                                        org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p297, $tmp416);
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
                                    }
                                    }
                                }
                                $tmp305 = -1;
                                goto $l303;
                                $l303:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr306));
                                expr306 = NULL;
                                switch ($tmp305) {
                                    case -1: goto $l422;
                                }
                                $l422:;
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp423, false);
                                if ($tmp423.value) goto $l424; else goto $l425;
                                $l425:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s426, (panda$core$Int64) { 135 });
                                abort();
                                $l424:;
                            }
                            }
                        }
                        $tmp292 = -1;
                        goto $l290;
                        $l290:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
                        switch ($tmp292) {
                            case -1: goto $l427;
                        }
                        $l427:;
                    }
                    $tmp282 = -1;
                    goto $l280;
                    $l280:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c283));
                    c283 = NULL;
                    switch ($tmp282) {
                        case -1: goto $l428;
                    }
                    $l428:;
                }
                goto $l272;
                $l273:;
            }
            $tmp264 = -1;
            goto $l262;
            $l262:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$86$9265));
            Iter$86$9265 = NULL;
            switch ($tmp264) {
                case -1: goto $l429;
            }
            $l429:;
        }
        org$pandalanguage$pandac$Annotations* $tmp433 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp433, flags258, ((panda$collections$ListView*) expressions260));
        $tmp432 = $tmp433;
        $tmp431 = $tmp432;
        $returnValue430 = $tmp431;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp431));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
        $tmp257 = 0;
        goto $l255;
        $l434:;
        return $returnValue430;
    }
    $l255:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions260));
    switch ($tmp257) {
        case 0: goto $l434;
    }
    $l436:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment440 = NULL;
    panda$core$String* $tmp441;
    panda$core$String* $tmp442;
    org$pandalanguage$pandac$ASTNode* $match$149_13446 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp447;
    panda$core$Int64 $tmp448;
    org$pandalanguage$pandac$Position position450;
    panda$core$String* text452 = NULL;
    panda$core$String* $tmp454;
    panda$core$String* $tmp455;
    panda$core$Bit $tmp456;
    org$pandalanguage$pandac$Annotations* annotations461 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp462;
    org$pandalanguage$pandac$Annotations* $tmp463;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind465;
    org$pandalanguage$pandac$ASTNode* $match$158_9469 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp470;
    panda$core$Int64 $tmp471;
    org$pandalanguage$pandac$Variable$Kind kind473;
    panda$collections$ImmutableArray* decls475 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$160_17477;
    panda$core$Int64 $tmp478;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp480;
    panda$core$Int64 $tmp481;
    panda$core$Int64 $tmp482;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp484;
    panda$core$Int64 $tmp485;
    panda$core$Int64 $tmp486;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp488;
    panda$core$Int64 $tmp489;
    panda$core$Int64 $tmp490;
    panda$core$Int64 $tmp492;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp494;
    panda$core$Int64 $tmp495;
    panda$collections$Iterator* Iter$171$17499 = NULL;
    panda$collections$Iterator* $tmp500;
    panda$collections$Iterator* $tmp501;
    org$pandalanguage$pandac$ASTNode* decl517 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp518;
    panda$core$Object* $tmp519;
    org$pandalanguage$pandac$ASTNode* $match$172_21527 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp528;
    panda$core$Int64 $tmp529;
    org$pandalanguage$pandac$Position declPosition531;
    org$pandalanguage$pandac$ASTNode* target533 = NULL;
    org$pandalanguage$pandac$ASTNode* value535 = NULL;
    panda$core$String* name540 = NULL;
    org$pandalanguage$pandac$Type* type541 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$176_29545 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp546;
    panda$core$Int64 $tmp547;
    panda$core$String* id549 = NULL;
    panda$core$String* $tmp551;
    panda$core$String* $tmp552;
    org$pandalanguage$pandac$Type* $tmp553;
    org$pandalanguage$pandac$Type* $tmp554;
    org$pandalanguage$pandac$Type* $tmp555;
    panda$core$Int64 $tmp557;
    panda$core$String* id559 = NULL;
    org$pandalanguage$pandac$ASTNode* idType561 = NULL;
    panda$core$String* $tmp563;
    panda$core$String* $tmp564;
    org$pandalanguage$pandac$Type* $tmp565;
    org$pandalanguage$pandac$Type* $tmp566;
    org$pandalanguage$pandac$Type* $tmp567;
    panda$core$Bit $tmp569;
    org$pandalanguage$pandac$FieldDecl* field574 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp575;
    org$pandalanguage$pandac$FieldDecl* $tmp576;
    panda$core$Bit $tmp579;
    panda$core$Bit $tmp586;
    int $tmp439;
    {
        memset(&doccomment440, 0, sizeof(doccomment440));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp441 = doccomment440;
                $tmp442 = NULL;
                doccomment440 = $tmp442;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp442));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp441));
            }
        }
        }
        else {
        {
            int $tmp445;
            {
                $tmp447 = p_rawDoccomment;
                $match$149_13446 = $tmp447;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp447));
                panda$core$Int64$init$builtin_int64(&$tmp448, 38);
                panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$149_13446->$rawValue, $tmp448);
                if ($tmp449.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp451 = ((org$pandalanguage$pandac$Position*) ((char*) $match$149_13446->$data + 0));
                    position450 = *$tmp451;
                    panda$core$String** $tmp453 = ((panda$core$String**) ((char*) $match$149_13446->$data + 16));
                    text452 = *$tmp453;
                    {
                        $tmp454 = doccomment440;
                        $tmp455 = text452;
                        doccomment440 = $tmp455;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp455));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp456, false);
                    if ($tmp456.value) goto $l457; else goto $l458;
                    $l458:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s459, (panda$core$Int64) { 153 });
                    abort();
                    $l457:;
                }
                }
            }
            $tmp445 = -1;
            goto $l443;
            $l443:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
            switch ($tmp445) {
                case -1: goto $l460;
            }
            $l460:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp464 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp463 = $tmp464;
        $tmp462 = $tmp463;
        annotations461 = $tmp462;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp462));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp463));
        memset(&fieldKind465, 0, sizeof(fieldKind465));
        int $tmp468;
        {
            $tmp470 = p_varDecl;
            $match$158_9469 = $tmp470;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp470));
            panda$core$Int64$init$builtin_int64(&$tmp471, 47);
            panda$core$Bit $tmp472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$158_9469->$rawValue, $tmp471);
            if ($tmp472.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp474 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$158_9469->$data + 16));
                kind473 = *$tmp474;
                panda$collections$ImmutableArray** $tmp476 = ((panda$collections$ImmutableArray**) ((char*) $match$158_9469->$data + 24));
                decls475 = *$tmp476;
                {
                    $match$160_17477 = kind473;
                    panda$core$Int64$init$builtin_int64(&$tmp478, 0);
                    panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_17477.$rawValue, $tmp478);
                    if ($tmp479.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp481, 0);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp480, $tmp481);
                        fieldKind465 = $tmp480;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp482, 1);
                    panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_17477.$rawValue, $tmp482);
                    if ($tmp483.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp485, 1);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp484, $tmp485);
                        fieldKind465 = $tmp484;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp486, 2);
                    panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_17477.$rawValue, $tmp486);
                    if ($tmp487.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp489, 2);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp488, $tmp489);
                        fieldKind465 = $tmp488;
                        panda$core$Int64$init$builtin_int64(&$tmp490, 16);
                        panda$core$Int64 $tmp491 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations461->flags, $tmp490);
                        annotations461->flags = $tmp491;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp492, 3);
                    panda$core$Bit $tmp493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_17477.$rawValue, $tmp492);
                    if ($tmp493.value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp495, 3);
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp494, $tmp495);
                        fieldKind465 = $tmp494;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp498;
                    {
                        ITable* $tmp502 = ((panda$collections$Iterable*) decls475)->$class->itable;
                        while ($tmp502->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp502 = $tmp502->next;
                        }
                        $fn504 $tmp503 = $tmp502->methods[0];
                        panda$collections$Iterator* $tmp505 = $tmp503(((panda$collections$Iterable*) decls475));
                        $tmp501 = $tmp505;
                        $tmp500 = $tmp501;
                        Iter$171$17499 = $tmp500;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp500));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
                        $l506:;
                        ITable* $tmp509 = Iter$171$17499->$class->itable;
                        while ($tmp509->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp509 = $tmp509->next;
                        }
                        $fn511 $tmp510 = $tmp509->methods[0];
                        panda$core$Bit $tmp512 = $tmp510(Iter$171$17499);
                        panda$core$Bit $tmp513 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp512);
                        bool $tmp508 = $tmp513.value;
                        if (!$tmp508) goto $l507;
                        {
                            int $tmp516;
                            {
                                ITable* $tmp520 = Iter$171$17499->$class->itable;
                                while ($tmp520->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp520 = $tmp520->next;
                                }
                                $fn522 $tmp521 = $tmp520->methods[1];
                                panda$core$Object* $tmp523 = $tmp521(Iter$171$17499);
                                $tmp519 = $tmp523;
                                $tmp518 = ((org$pandalanguage$pandac$ASTNode*) $tmp519);
                                decl517 = $tmp518;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp518));
                                panda$core$Panda$unref$panda$core$Object($tmp519);
                                int $tmp526;
                                {
                                    $tmp528 = decl517;
                                    $match$172_21527 = $tmp528;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp528));
                                    panda$core$Int64$init$builtin_int64(&$tmp529, 13);
                                    panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$172_21527->$rawValue, $tmp529);
                                    if ($tmp530.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp532 = ((org$pandalanguage$pandac$Position*) ((char*) $match$172_21527->$data + 0));
                                        declPosition531 = *$tmp532;
                                        org$pandalanguage$pandac$ASTNode** $tmp534 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$172_21527->$data + 16));
                                        target533 = *$tmp534;
                                        org$pandalanguage$pandac$ASTNode** $tmp536 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$172_21527->$data + 24));
                                        value535 = *$tmp536;
                                        int $tmp539;
                                        {
                                            memset(&name540, 0, sizeof(name540));
                                            memset(&type541, 0, sizeof(type541));
                                            int $tmp544;
                                            {
                                                $tmp546 = target533;
                                                $match$176_29545 = $tmp546;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp546));
                                                panda$core$Int64$init$builtin_int64(&$tmp547, 20);
                                                panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$176_29545->$rawValue, $tmp547);
                                                if ($tmp548.value) {
                                                {
                                                    panda$core$String** $tmp550 = ((panda$core$String**) ((char*) $match$176_29545->$data + 16));
                                                    id549 = *$tmp550;
                                                    {
                                                        $tmp551 = name540;
                                                        $tmp552 = id549;
                                                        name540 = $tmp552;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp552));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp551));
                                                    }
                                                    {
                                                        $tmp553 = type541;
                                                        org$pandalanguage$pandac$Type* $tmp556 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp555 = $tmp556;
                                                        $tmp554 = $tmp555;
                                                        type541 = $tmp554;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp554));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp553));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Int64$init$builtin_int64(&$tmp557, 44);
                                                panda$core$Bit $tmp558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$176_29545->$rawValue, $tmp557);
                                                if ($tmp558.value) {
                                                {
                                                    panda$core$String** $tmp560 = ((panda$core$String**) ((char*) $match$176_29545->$data + 16));
                                                    id559 = *$tmp560;
                                                    org$pandalanguage$pandac$ASTNode** $tmp562 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$176_29545->$data + 24));
                                                    idType561 = *$tmp562;
                                                    {
                                                        $tmp563 = name540;
                                                        $tmp564 = id559;
                                                        name540 = $tmp564;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp564));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp563));
                                                    }
                                                    {
                                                        $tmp565 = type541;
                                                        org$pandalanguage$pandac$Type* $tmp568 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType561);
                                                        $tmp567 = $tmp568;
                                                        $tmp566 = $tmp567;
                                                        type541 = $tmp566;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp566));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
                                                    }
                                                }
                                                }
                                                else {
                                                {
                                                    panda$core$Bit$init$builtin_bit(&$tmp569, false);
                                                    if ($tmp569.value) goto $l570; else goto $l571;
                                                    $l571:;
                                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s572, (panda$core$Int64) { 184 });
                                                    abort();
                                                    $l570:;
                                                }
                                                }
                                                }
                                            }
                                            $tmp544 = -1;
                                            goto $l542;
                                            $l542:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
                                            switch ($tmp544) {
                                                case -1: goto $l573;
                                            }
                                            $l573:;
                                            org$pandalanguage$pandac$FieldDecl* $tmp577 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp577, p_owner, declPosition531, doccomment440, annotations461, fieldKind465, name540, type541, value535);
                                            $tmp576 = $tmp577;
                                            $tmp575 = $tmp576;
                                            field574 = $tmp575;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp575));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field574));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field574));
                                        }
                                        $tmp539 = -1;
                                        goto $l537;
                                        $l537:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field574));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type541));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name540));
                                        field574 = NULL;
                                        switch ($tmp539) {
                                            case -1: goto $l578;
                                        }
                                        $l578:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp579, false);
                                        if ($tmp579.value) goto $l580; else goto $l581;
                                        $l581:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s582, (panda$core$Int64) { 191 });
                                        abort();
                                        $l580:;
                                    }
                                    }
                                }
                                $tmp526 = -1;
                                goto $l524;
                                $l524:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp528));
                                switch ($tmp526) {
                                    case -1: goto $l583;
                                }
                                $l583:;
                            }
                            $tmp516 = -1;
                            goto $l514;
                            $l514:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl517));
                            decl517 = NULL;
                            switch ($tmp516) {
                                case -1: goto $l584;
                            }
                            $l584:;
                        }
                        goto $l506;
                        $l507:;
                    }
                    $tmp498 = -1;
                    goto $l496;
                    $l496:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$171$17499));
                    Iter$171$17499 = NULL;
                    switch ($tmp498) {
                        case -1: goto $l585;
                    }
                    $l585:;
                }
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp586, false);
                if ($tmp586.value) goto $l587; else goto $l588;
                $l588:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s589, (panda$core$Int64) { 195 });
                abort();
                $l587:;
            }
            }
        }
        $tmp468 = -1;
        goto $l466;
        $l466:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
        switch ($tmp468) {
            case -1: goto $l590;
        }
        $l590:;
    }
    $tmp439 = -1;
    goto $l437;
    $l437:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations461));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment440));
    annotations461 = NULL;
    switch ($tmp439) {
        case -1: goto $l591;
    }
    $l591:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$201_9595 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp596;
    panda$core$Int64 $tmp597;
    org$pandalanguage$pandac$ASTNode* test599 = NULL;
    panda$core$Int64 $returnValue601;
    panda$core$Int64 $tmp605;
    org$pandalanguage$pandac$ASTNode* left607 = NULL;
    org$pandalanguage$pandac$ASTNode* right609 = NULL;
    panda$core$Int64 $tmp611;
    panda$core$Int64 $tmp618;
    panda$core$Int64 $tmp620;
    panda$core$Int64 $tmp623;
    panda$collections$ImmutableArray* statements625 = NULL;
    panda$core$Int64 result627;
    panda$core$Int64 $tmp628;
    panda$collections$Iterator* Iter$210$17632 = NULL;
    panda$collections$Iterator* $tmp633;
    panda$collections$Iterator* $tmp634;
    org$pandalanguage$pandac$ASTNode* s650 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp651;
    panda$core$Object* $tmp652;
    panda$core$Int64 $tmp663;
    panda$core$Int64 $tmp665;
    panda$core$Int64 $tmp668;
    org$pandalanguage$pandac$ASTNode* target670 = NULL;
    panda$collections$ImmutableArray* args672 = NULL;
    panda$core$Int64 result674;
    panda$collections$Iterator* Iter$218$17679 = NULL;
    panda$collections$Iterator* $tmp680;
    panda$collections$Iterator* $tmp681;
    org$pandalanguage$pandac$ASTNode* a697 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp698;
    panda$core$Object* $tmp699;
    panda$core$Int64 $tmp710;
    org$pandalanguage$pandac$ASTNode* base712 = NULL;
    panda$core$Int64 $tmp717;
    panda$core$Int64 $tmp719;
    panda$core$Int64 $tmp722;
    org$pandalanguage$pandac$ASTNode* value724 = NULL;
    panda$core$Int64 $tmp726;
    panda$core$Int64 $tmp732;
    panda$collections$ImmutableArray* statements734 = NULL;
    org$pandalanguage$pandac$ASTNode* test736 = NULL;
    panda$core$Int64 result738;
    panda$collections$Iterator* Iter$233$17743 = NULL;
    panda$collections$Iterator* $tmp744;
    panda$collections$Iterator* $tmp745;
    org$pandalanguage$pandac$ASTNode* s761 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp762;
    panda$core$Object* $tmp763;
    panda$core$Int64 $tmp774;
    org$pandalanguage$pandac$ASTNode* base776 = NULL;
    panda$core$Int64 $tmp781;
    org$pandalanguage$pandac$ASTNode* list783 = NULL;
    panda$collections$ImmutableArray* statements785 = NULL;
    panda$core$Int64 result787;
    panda$collections$Iterator* Iter$241$17792 = NULL;
    panda$collections$Iterator* $tmp793;
    panda$collections$Iterator* $tmp794;
    org$pandalanguage$pandac$ASTNode* s810 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp811;
    panda$core$Object* $tmp812;
    panda$core$Int64 $tmp823;
    panda$core$Int64 $tmp825;
    panda$core$Int64 $tmp828;
    panda$core$Int64 $tmp830;
    panda$core$Int64 $tmp833;
    org$pandalanguage$pandac$ASTNode* test835 = NULL;
    panda$collections$ImmutableArray* ifTrue837 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse839 = NULL;
    panda$core$Int64 result841;
    panda$collections$Iterator* Iter$251$17846 = NULL;
    panda$collections$Iterator* $tmp847;
    panda$collections$Iterator* $tmp848;
    org$pandalanguage$pandac$ASTNode* s864 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp865;
    panda$core$Object* $tmp866;
    panda$core$Int64 $tmp879;
    panda$core$Int64 $tmp881;
    panda$core$Int64 $tmp884;
    panda$collections$ImmutableArray* statements886 = NULL;
    panda$core$Int64 result888;
    panda$core$Int64 $tmp889;
    panda$collections$Iterator* Iter$262$17893 = NULL;
    panda$collections$Iterator* $tmp894;
    panda$collections$Iterator* $tmp895;
    org$pandalanguage$pandac$ASTNode* s911 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp912;
    panda$core$Object* $tmp913;
    panda$core$Int64 $tmp924;
    org$pandalanguage$pandac$ASTNode* value926 = NULL;
    panda$collections$ImmutableArray* whens928 = NULL;
    panda$collections$ImmutableArray* other930 = NULL;
    panda$core$Int64 result932;
    panda$collections$Iterator* Iter$268$17937 = NULL;
    panda$collections$Iterator* $tmp938;
    panda$collections$Iterator* $tmp939;
    org$pandalanguage$pandac$ASTNode* w955 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp956;
    panda$core$Object* $tmp957;
    panda$collections$Iterator* Iter$272$21969 = NULL;
    panda$collections$Iterator* $tmp970;
    panda$collections$Iterator* $tmp971;
    org$pandalanguage$pandac$ASTNode* s987 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp988;
    panda$core$Object* $tmp989;
    panda$core$Int64 $tmp1000;
    panda$core$Int64 $tmp1002;
    panda$core$Int64 $tmp1005;
    panda$core$Int64 $tmp1007;
    panda$core$Int64 $tmp1010;
    panda$core$Int64 $tmp1012;
    panda$core$Int64 $tmp1015;
    org$pandalanguage$pandac$ASTNode* base1017 = NULL;
    panda$core$Int64 $tmp1019;
    panda$core$Int64 $tmp1024;
    panda$core$Int64 $tmp1026;
    panda$core$Int64 $tmp1029;
    panda$core$Int64 $tmp1031;
    panda$core$Int64 $tmp1034;
    org$pandalanguage$pandac$ASTNode* value1036 = NULL;
    panda$core$Int64 $tmp1038;
    panda$core$Int64 $tmp1044;
    panda$core$Int64 $tmp1046;
    panda$core$Int64 $tmp1049;
    panda$core$Int64 $tmp1051;
    panda$core$Int64 $tmp1054;
    panda$core$Int64 $tmp1056;
    panda$core$Int64 $tmp1059;
    panda$core$Int64 $tmp1061;
    panda$core$Int64 $tmp1064;
    panda$core$Int64 $tmp1066;
    panda$core$Int64 $tmp1069;
    panda$core$Int64 $tmp1071;
    panda$core$Int64 $tmp1074;
    panda$collections$ImmutableArray* decls1076 = NULL;
    panda$core$Int64 result1078;
    panda$core$Int64 $tmp1079;
    panda$collections$Iterator* Iter$308$171083 = NULL;
    panda$collections$Iterator* $tmp1084;
    panda$collections$Iterator* $tmp1085;
    org$pandalanguage$pandac$ASTNode* decl1101 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1102;
    panda$core$Object* $tmp1103;
    panda$core$Int64 $tmp1114;
    panda$collections$ImmutableArray* tests1116 = NULL;
    panda$collections$ImmutableArray* statements1118 = NULL;
    panda$core$Int64 result1120;
    panda$core$Int64 $tmp1121;
    panda$collections$Iterator* Iter$314$171125 = NULL;
    panda$collections$Iterator* $tmp1126;
    panda$collections$Iterator* $tmp1127;
    org$pandalanguage$pandac$ASTNode* test1143 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1144;
    panda$core$Object* $tmp1145;
    panda$collections$Iterator* Iter$317$171157 = NULL;
    panda$collections$Iterator* $tmp1158;
    panda$collections$Iterator* $tmp1159;
    org$pandalanguage$pandac$ASTNode* s1175 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1176;
    panda$core$Object* $tmp1177;
    panda$core$Int64 $tmp1188;
    org$pandalanguage$pandac$ASTNode* test1190 = NULL;
    panda$collections$ImmutableArray* statements1192 = NULL;
    panda$core$Int64 result1194;
    panda$collections$Iterator* Iter$323$171199 = NULL;
    panda$collections$Iterator* $tmp1200;
    panda$collections$Iterator* $tmp1201;
    org$pandalanguage$pandac$ASTNode* s1217 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1218;
    panda$core$Object* $tmp1219;
    panda$core$Bit $tmp1230;
    panda$core$String* $tmp1234;
    panda$core$String* $tmp1235;
    int $tmp594;
    {
        $tmp596 = p_node;
        $match$201_9595 = $tmp596;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp596));
        panda$core$Int64$init$builtin_int64(&$tmp597, 1);
        panda$core$Bit $tmp598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp597);
        if ($tmp598.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp600 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9595->$data + 16));
            test599 = *$tmp600;
            panda$core$Int64 $tmp602 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test599);
            $returnValue601 = $tmp602;
            $tmp594 = 0;
            goto $l592;
            $l603:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp605, 4);
        panda$core$Bit $tmp606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp605);
        if ($tmp606.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp608 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9595->$data + 16));
            left607 = *$tmp608;
            org$pandalanguage$pandac$ASTNode** $tmp610 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9595->$data + 32));
            right609 = *$tmp610;
            panda$core$Int64$init$builtin_int64(&$tmp611, 1);
            panda$core$Int64 $tmp612 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left607);
            panda$core$Int64 $tmp613 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp611, $tmp612);
            panda$core$Int64 $tmp614 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right609);
            panda$core$Int64 $tmp615 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp613, $tmp614);
            $returnValue601 = $tmp615;
            $tmp594 = 1;
            goto $l592;
            $l616:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp618, 5);
        panda$core$Bit $tmp619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp618);
        if ($tmp619.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp620, 1);
            $returnValue601 = $tmp620;
            $tmp594 = 2;
            goto $l592;
            $l621:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp623, 6);
        panda$core$Bit $tmp624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp623);
        if ($tmp624.value) {
        {
            panda$collections$ImmutableArray** $tmp626 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9595->$data + 16));
            statements625 = *$tmp626;
            panda$core$Int64$init$builtin_int64(&$tmp628, 0);
            result627 = $tmp628;
            {
                int $tmp631;
                {
                    ITable* $tmp635 = ((panda$collections$Iterable*) statements625)->$class->itable;
                    while ($tmp635->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp635 = $tmp635->next;
                    }
                    $fn637 $tmp636 = $tmp635->methods[0];
                    panda$collections$Iterator* $tmp638 = $tmp636(((panda$collections$Iterable*) statements625));
                    $tmp634 = $tmp638;
                    $tmp633 = $tmp634;
                    Iter$210$17632 = $tmp633;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp633));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
                    $l639:;
                    ITable* $tmp642 = Iter$210$17632->$class->itable;
                    while ($tmp642->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp642 = $tmp642->next;
                    }
                    $fn644 $tmp643 = $tmp642->methods[0];
                    panda$core$Bit $tmp645 = $tmp643(Iter$210$17632);
                    panda$core$Bit $tmp646 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp645);
                    bool $tmp641 = $tmp646.value;
                    if (!$tmp641) goto $l640;
                    {
                        int $tmp649;
                        {
                            ITable* $tmp653 = Iter$210$17632->$class->itable;
                            while ($tmp653->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp653 = $tmp653->next;
                            }
                            $fn655 $tmp654 = $tmp653->methods[1];
                            panda$core$Object* $tmp656 = $tmp654(Iter$210$17632);
                            $tmp652 = $tmp656;
                            $tmp651 = ((org$pandalanguage$pandac$ASTNode*) $tmp652);
                            s650 = $tmp651;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp651));
                            panda$core$Panda$unref$panda$core$Object($tmp652);
                            panda$core$Int64 $tmp657 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s650);
                            panda$core$Int64 $tmp658 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result627, $tmp657);
                            result627 = $tmp658;
                        }
                        $tmp649 = -1;
                        goto $l647;
                        $l647:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s650));
                        s650 = NULL;
                        switch ($tmp649) {
                            case -1: goto $l659;
                        }
                        $l659:;
                    }
                    goto $l639;
                    $l640:;
                }
                $tmp631 = -1;
                goto $l629;
                $l629:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$210$17632));
                Iter$210$17632 = NULL;
                switch ($tmp631) {
                    case -1: goto $l660;
                }
                $l660:;
            }
            $returnValue601 = result627;
            $tmp594 = 3;
            goto $l592;
            $l661:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp663, 7);
        panda$core$Bit $tmp664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp663);
        if ($tmp664.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp665, 1);
            $returnValue601 = $tmp665;
            $tmp594 = 4;
            goto $l592;
            $l666:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp668, 8);
        panda$core$Bit $tmp669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp668);
        if ($tmp669.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp671 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9595->$data + 16));
            target670 = *$tmp671;
            panda$collections$ImmutableArray** $tmp673 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9595->$data + 24));
            args672 = *$tmp673;
            panda$core$Int64 $tmp675 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target670);
            result674 = $tmp675;
            {
                int $tmp678;
                {
                    ITable* $tmp682 = ((panda$collections$Iterable*) args672)->$class->itable;
                    while ($tmp682->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp682 = $tmp682->next;
                    }
                    $fn684 $tmp683 = $tmp682->methods[0];
                    panda$collections$Iterator* $tmp685 = $tmp683(((panda$collections$Iterable*) args672));
                    $tmp681 = $tmp685;
                    $tmp680 = $tmp681;
                    Iter$218$17679 = $tmp680;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp680));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp681));
                    $l686:;
                    ITable* $tmp689 = Iter$218$17679->$class->itable;
                    while ($tmp689->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp689 = $tmp689->next;
                    }
                    $fn691 $tmp690 = $tmp689->methods[0];
                    panda$core$Bit $tmp692 = $tmp690(Iter$218$17679);
                    panda$core$Bit $tmp693 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp692);
                    bool $tmp688 = $tmp693.value;
                    if (!$tmp688) goto $l687;
                    {
                        int $tmp696;
                        {
                            ITable* $tmp700 = Iter$218$17679->$class->itable;
                            while ($tmp700->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp700 = $tmp700->next;
                            }
                            $fn702 $tmp701 = $tmp700->methods[1];
                            panda$core$Object* $tmp703 = $tmp701(Iter$218$17679);
                            $tmp699 = $tmp703;
                            $tmp698 = ((org$pandalanguage$pandac$ASTNode*) $tmp699);
                            a697 = $tmp698;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp698));
                            panda$core$Panda$unref$panda$core$Object($tmp699);
                            panda$core$Int64 $tmp704 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a697);
                            panda$core$Int64 $tmp705 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result674, $tmp704);
                            result674 = $tmp705;
                        }
                        $tmp696 = -1;
                        goto $l694;
                        $l694:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a697));
                        a697 = NULL;
                        switch ($tmp696) {
                            case -1: goto $l706;
                        }
                        $l706:;
                    }
                    goto $l686;
                    $l687:;
                }
                $tmp678 = -1;
                goto $l676;
                $l676:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$218$17679));
                Iter$218$17679 = NULL;
                switch ($tmp678) {
                    case -1: goto $l707;
                }
                $l707:;
            }
            $returnValue601 = result674;
            $tmp594 = 5;
            goto $l592;
            $l708:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp710, 10);
        panda$core$Bit $tmp711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp710);
        if ($tmp711.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp713 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9595->$data + 16));
            base712 = *$tmp713;
            panda$core$Int64 $tmp714 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base712);
            $returnValue601 = $tmp714;
            $tmp594 = 6;
            goto $l592;
            $l715:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp717, 12);
        panda$core$Bit $tmp718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp717);
        if ($tmp718.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp719, 1);
            $returnValue601 = $tmp719;
            $tmp594 = 7;
            goto $l592;
            $l720:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp722, 13);
        panda$core$Bit $tmp723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp722);
        if ($tmp723.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp725 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9595->$data + 24));
            value724 = *$tmp725;
            if (((panda$core$Bit) { value724 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp726, 0);
                $returnValue601 = $tmp726;
                $tmp594 = 8;
                goto $l592;
                $l727:;
                return $returnValue601;
            }
            }
            panda$core$Int64 $tmp729 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value724);
            $returnValue601 = $tmp729;
            $tmp594 = 9;
            goto $l592;
            $l730:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp732, 14);
        panda$core$Bit $tmp733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp732);
        if ($tmp733.value) {
        {
            panda$collections$ImmutableArray** $tmp735 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9595->$data + 24));
            statements734 = *$tmp735;
            org$pandalanguage$pandac$ASTNode** $tmp737 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9595->$data + 32));
            test736 = *$tmp737;
            panda$core$Int64 $tmp739 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test736);
            result738 = $tmp739;
            {
                int $tmp742;
                {
                    ITable* $tmp746 = ((panda$collections$Iterable*) statements734)->$class->itable;
                    while ($tmp746->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp746 = $tmp746->next;
                    }
                    $fn748 $tmp747 = $tmp746->methods[0];
                    panda$collections$Iterator* $tmp749 = $tmp747(((panda$collections$Iterable*) statements734));
                    $tmp745 = $tmp749;
                    $tmp744 = $tmp745;
                    Iter$233$17743 = $tmp744;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp744));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp745));
                    $l750:;
                    ITable* $tmp753 = Iter$233$17743->$class->itable;
                    while ($tmp753->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp753 = $tmp753->next;
                    }
                    $fn755 $tmp754 = $tmp753->methods[0];
                    panda$core$Bit $tmp756 = $tmp754(Iter$233$17743);
                    panda$core$Bit $tmp757 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp756);
                    bool $tmp752 = $tmp757.value;
                    if (!$tmp752) goto $l751;
                    {
                        int $tmp760;
                        {
                            ITable* $tmp764 = Iter$233$17743->$class->itable;
                            while ($tmp764->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp764 = $tmp764->next;
                            }
                            $fn766 $tmp765 = $tmp764->methods[1];
                            panda$core$Object* $tmp767 = $tmp765(Iter$233$17743);
                            $tmp763 = $tmp767;
                            $tmp762 = ((org$pandalanguage$pandac$ASTNode*) $tmp763);
                            s761 = $tmp762;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp762));
                            panda$core$Panda$unref$panda$core$Object($tmp763);
                            panda$core$Int64 $tmp768 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s761);
                            panda$core$Int64 $tmp769 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result738, $tmp768);
                            result738 = $tmp769;
                        }
                        $tmp760 = -1;
                        goto $l758;
                        $l758:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s761));
                        s761 = NULL;
                        switch ($tmp760) {
                            case -1: goto $l770;
                        }
                        $l770:;
                    }
                    goto $l750;
                    $l751:;
                }
                $tmp742 = -1;
                goto $l740;
                $l740:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$233$17743));
                Iter$233$17743 = NULL;
                switch ($tmp742) {
                    case -1: goto $l771;
                }
                $l771:;
            }
            $returnValue601 = result738;
            $tmp594 = 10;
            goto $l592;
            $l772:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp774, 15);
        panda$core$Bit $tmp775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp774);
        if ($tmp775.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp777 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9595->$data + 16));
            base776 = *$tmp777;
            panda$core$Int64 $tmp778 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base776);
            $returnValue601 = $tmp778;
            $tmp594 = 11;
            goto $l592;
            $l779:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp781, 18);
        panda$core$Bit $tmp782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp781);
        if ($tmp782.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp784 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9595->$data + 32));
            list783 = *$tmp784;
            panda$collections$ImmutableArray** $tmp786 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9595->$data + 40));
            statements785 = *$tmp786;
            panda$core$Int64 $tmp788 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list783);
            result787 = $tmp788;
            {
                int $tmp791;
                {
                    ITable* $tmp795 = ((panda$collections$Iterable*) statements785)->$class->itable;
                    while ($tmp795->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp795 = $tmp795->next;
                    }
                    $fn797 $tmp796 = $tmp795->methods[0];
                    panda$collections$Iterator* $tmp798 = $tmp796(((panda$collections$Iterable*) statements785));
                    $tmp794 = $tmp798;
                    $tmp793 = $tmp794;
                    Iter$241$17792 = $tmp793;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp793));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp794));
                    $l799:;
                    ITable* $tmp802 = Iter$241$17792->$class->itable;
                    while ($tmp802->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp802 = $tmp802->next;
                    }
                    $fn804 $tmp803 = $tmp802->methods[0];
                    panda$core$Bit $tmp805 = $tmp803(Iter$241$17792);
                    panda$core$Bit $tmp806 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp805);
                    bool $tmp801 = $tmp806.value;
                    if (!$tmp801) goto $l800;
                    {
                        int $tmp809;
                        {
                            ITable* $tmp813 = Iter$241$17792->$class->itable;
                            while ($tmp813->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp813 = $tmp813->next;
                            }
                            $fn815 $tmp814 = $tmp813->methods[1];
                            panda$core$Object* $tmp816 = $tmp814(Iter$241$17792);
                            $tmp812 = $tmp816;
                            $tmp811 = ((org$pandalanguage$pandac$ASTNode*) $tmp812);
                            s810 = $tmp811;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp811));
                            panda$core$Panda$unref$panda$core$Object($tmp812);
                            panda$core$Int64 $tmp817 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s810);
                            panda$core$Int64 $tmp818 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result787, $tmp817);
                            result787 = $tmp818;
                        }
                        $tmp809 = -1;
                        goto $l807;
                        $l807:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s810));
                        s810 = NULL;
                        switch ($tmp809) {
                            case -1: goto $l819;
                        }
                        $l819:;
                    }
                    goto $l799;
                    $l800:;
                }
                $tmp791 = -1;
                goto $l789;
                $l789:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$17792));
                Iter$241$17792 = NULL;
                switch ($tmp791) {
                    case -1: goto $l820;
                }
                $l820:;
            }
            $returnValue601 = result787;
            $tmp594 = 12;
            goto $l592;
            $l821:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp823, 19);
        panda$core$Bit $tmp824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp823);
        if ($tmp824.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp825, 0);
            $returnValue601 = $tmp825;
            $tmp594 = 13;
            goto $l592;
            $l826:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp828, 20);
        panda$core$Bit $tmp829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp828);
        if ($tmp829.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp830, 1);
            $returnValue601 = $tmp830;
            $tmp594 = 14;
            goto $l592;
            $l831:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp833, 21);
        panda$core$Bit $tmp834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp833);
        if ($tmp834.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp836 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9595->$data + 16));
            test835 = *$tmp836;
            panda$collections$ImmutableArray** $tmp838 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9595->$data + 24));
            ifTrue837 = *$tmp838;
            org$pandalanguage$pandac$ASTNode** $tmp840 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9595->$data + 32));
            ifFalse839 = *$tmp840;
            panda$core$Int64 $tmp842 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test835);
            result841 = $tmp842;
            {
                int $tmp845;
                {
                    ITable* $tmp849 = ((panda$collections$Iterable*) ifTrue837)->$class->itable;
                    while ($tmp849->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp849 = $tmp849->next;
                    }
                    $fn851 $tmp850 = $tmp849->methods[0];
                    panda$collections$Iterator* $tmp852 = $tmp850(((panda$collections$Iterable*) ifTrue837));
                    $tmp848 = $tmp852;
                    $tmp847 = $tmp848;
                    Iter$251$17846 = $tmp847;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp847));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp848));
                    $l853:;
                    ITable* $tmp856 = Iter$251$17846->$class->itable;
                    while ($tmp856->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp856 = $tmp856->next;
                    }
                    $fn858 $tmp857 = $tmp856->methods[0];
                    panda$core$Bit $tmp859 = $tmp857(Iter$251$17846);
                    panda$core$Bit $tmp860 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp859);
                    bool $tmp855 = $tmp860.value;
                    if (!$tmp855) goto $l854;
                    {
                        int $tmp863;
                        {
                            ITable* $tmp867 = Iter$251$17846->$class->itable;
                            while ($tmp867->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp867 = $tmp867->next;
                            }
                            $fn869 $tmp868 = $tmp867->methods[1];
                            panda$core$Object* $tmp870 = $tmp868(Iter$251$17846);
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$251$17846));
                Iter$251$17846 = NULL;
                switch ($tmp845) {
                    case -1: goto $l874;
                }
                $l874:;
            }
            if (((panda$core$Bit) { ifFalse839 != NULL }).value) {
            {
                panda$core$Int64 $tmp875 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse839);
                panda$core$Int64 $tmp876 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result841, $tmp875);
                result841 = $tmp876;
            }
            }
            $returnValue601 = result841;
            $tmp594 = 15;
            goto $l592;
            $l877:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp879, 22);
        panda$core$Bit $tmp880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp879);
        if ($tmp880.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp881, 1);
            $returnValue601 = $tmp881;
            $tmp594 = 16;
            goto $l592;
            $l882:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp884, 24);
        panda$core$Bit $tmp885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp884);
        if ($tmp885.value) {
        {
            panda$collections$ImmutableArray** $tmp887 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9595->$data + 24));
            statements886 = *$tmp887;
            panda$core$Int64$init$builtin_int64(&$tmp889, 0);
            result888 = $tmp889;
            {
                int $tmp892;
                {
                    ITable* $tmp896 = ((panda$collections$Iterable*) statements886)->$class->itable;
                    while ($tmp896->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp896 = $tmp896->next;
                    }
                    $fn898 $tmp897 = $tmp896->methods[0];
                    panda$collections$Iterator* $tmp899 = $tmp897(((panda$collections$Iterable*) statements886));
                    $tmp895 = $tmp899;
                    $tmp894 = $tmp895;
                    Iter$262$17893 = $tmp894;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp894));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp895));
                    $l900:;
                    ITable* $tmp903 = Iter$262$17893->$class->itable;
                    while ($tmp903->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp903 = $tmp903->next;
                    }
                    $fn905 $tmp904 = $tmp903->methods[0];
                    panda$core$Bit $tmp906 = $tmp904(Iter$262$17893);
                    panda$core$Bit $tmp907 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp906);
                    bool $tmp902 = $tmp907.value;
                    if (!$tmp902) goto $l901;
                    {
                        int $tmp910;
                        {
                            ITable* $tmp914 = Iter$262$17893->$class->itable;
                            while ($tmp914->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp914 = $tmp914->next;
                            }
                            $fn916 $tmp915 = $tmp914->methods[1];
                            panda$core$Object* $tmp917 = $tmp915(Iter$262$17893);
                            $tmp913 = $tmp917;
                            $tmp912 = ((org$pandalanguage$pandac$ASTNode*) $tmp913);
                            s911 = $tmp912;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp912));
                            panda$core$Panda$unref$panda$core$Object($tmp913);
                            panda$core$Int64 $tmp918 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s911);
                            panda$core$Int64 $tmp919 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result888, $tmp918);
                            result888 = $tmp919;
                        }
                        $tmp910 = -1;
                        goto $l908;
                        $l908:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s911));
                        s911 = NULL;
                        switch ($tmp910) {
                            case -1: goto $l920;
                        }
                        $l920:;
                    }
                    goto $l900;
                    $l901:;
                }
                $tmp892 = -1;
                goto $l890;
                $l890:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$262$17893));
                Iter$262$17893 = NULL;
                switch ($tmp892) {
                    case -1: goto $l921;
                }
                $l921:;
            }
            $returnValue601 = result888;
            $tmp594 = 17;
            goto $l592;
            $l922:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp924, 25);
        panda$core$Bit $tmp925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp924);
        if ($tmp925.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp927 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9595->$data + 16));
            value926 = *$tmp927;
            panda$collections$ImmutableArray** $tmp929 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9595->$data + 24));
            whens928 = *$tmp929;
            panda$collections$ImmutableArray** $tmp931 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9595->$data + 32));
            other930 = *$tmp931;
            panda$core$Int64 $tmp933 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value926);
            result932 = $tmp933;
            {
                int $tmp936;
                {
                    ITable* $tmp940 = ((panda$collections$Iterable*) whens928)->$class->itable;
                    while ($tmp940->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp940 = $tmp940->next;
                    }
                    $fn942 $tmp941 = $tmp940->methods[0];
                    panda$collections$Iterator* $tmp943 = $tmp941(((panda$collections$Iterable*) whens928));
                    $tmp939 = $tmp943;
                    $tmp938 = $tmp939;
                    Iter$268$17937 = $tmp938;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp938));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp939));
                    $l944:;
                    ITable* $tmp947 = Iter$268$17937->$class->itable;
                    while ($tmp947->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp947 = $tmp947->next;
                    }
                    $fn949 $tmp948 = $tmp947->methods[0];
                    panda$core$Bit $tmp950 = $tmp948(Iter$268$17937);
                    panda$core$Bit $tmp951 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp950);
                    bool $tmp946 = $tmp951.value;
                    if (!$tmp946) goto $l945;
                    {
                        int $tmp954;
                        {
                            ITable* $tmp958 = Iter$268$17937->$class->itable;
                            while ($tmp958->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp958 = $tmp958->next;
                            }
                            $fn960 $tmp959 = $tmp958->methods[1];
                            panda$core$Object* $tmp961 = $tmp959(Iter$268$17937);
                            $tmp957 = $tmp961;
                            $tmp956 = ((org$pandalanguage$pandac$ASTNode*) $tmp957);
                            w955 = $tmp956;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp956));
                            panda$core$Panda$unref$panda$core$Object($tmp957);
                            panda$core$Int64 $tmp962 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w955);
                            panda$core$Int64 $tmp963 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result932, $tmp962);
                            result932 = $tmp963;
                        }
                        $tmp954 = -1;
                        goto $l952;
                        $l952:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w955));
                        w955 = NULL;
                        switch ($tmp954) {
                            case -1: goto $l964;
                        }
                        $l964:;
                    }
                    goto $l944;
                    $l945:;
                }
                $tmp936 = -1;
                goto $l934;
                $l934:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$268$17937));
                Iter$268$17937 = NULL;
                switch ($tmp936) {
                    case -1: goto $l965;
                }
                $l965:;
            }
            if (((panda$core$Bit) { other930 != NULL }).value) {
            {
                {
                    int $tmp968;
                    {
                        ITable* $tmp972 = ((panda$collections$Iterable*) other930)->$class->itable;
                        while ($tmp972->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp972 = $tmp972->next;
                        }
                        $fn974 $tmp973 = $tmp972->methods[0];
                        panda$collections$Iterator* $tmp975 = $tmp973(((panda$collections$Iterable*) other930));
                        $tmp971 = $tmp975;
                        $tmp970 = $tmp971;
                        Iter$272$21969 = $tmp970;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp970));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp971));
                        $l976:;
                        ITable* $tmp979 = Iter$272$21969->$class->itable;
                        while ($tmp979->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp979 = $tmp979->next;
                        }
                        $fn981 $tmp980 = $tmp979->methods[0];
                        panda$core$Bit $tmp982 = $tmp980(Iter$272$21969);
                        panda$core$Bit $tmp983 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp982);
                        bool $tmp978 = $tmp983.value;
                        if (!$tmp978) goto $l977;
                        {
                            int $tmp986;
                            {
                                ITable* $tmp990 = Iter$272$21969->$class->itable;
                                while ($tmp990->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp990 = $tmp990->next;
                                }
                                $fn992 $tmp991 = $tmp990->methods[1];
                                panda$core$Object* $tmp993 = $tmp991(Iter$272$21969);
                                $tmp989 = $tmp993;
                                $tmp988 = ((org$pandalanguage$pandac$ASTNode*) $tmp989);
                                s987 = $tmp988;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp988));
                                panda$core$Panda$unref$panda$core$Object($tmp989);
                                panda$core$Int64 $tmp994 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s987);
                                panda$core$Int64 $tmp995 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result932, $tmp994);
                                result932 = $tmp995;
                            }
                            $tmp986 = -1;
                            goto $l984;
                            $l984:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s987));
                            s987 = NULL;
                            switch ($tmp986) {
                                case -1: goto $l996;
                            }
                            $l996:;
                        }
                        goto $l976;
                        $l977:;
                    }
                    $tmp968 = -1;
                    goto $l966;
                    $l966:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$272$21969));
                    Iter$272$21969 = NULL;
                    switch ($tmp968) {
                        case -1: goto $l997;
                    }
                    $l997:;
                }
            }
            }
            $returnValue601 = result932;
            $tmp594 = 18;
            goto $l592;
            $l998:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1000, 26);
        panda$core$Bit $tmp1001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1000);
        if ($tmp1001.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1002, 10);
            $returnValue601 = $tmp1002;
            $tmp594 = 19;
            goto $l592;
            $l1003:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1005, 28);
        panda$core$Bit $tmp1006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1005);
        if ($tmp1006.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1007, 1);
            $returnValue601 = $tmp1007;
            $tmp594 = 20;
            goto $l592;
            $l1008:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1010, 29);
        panda$core$Bit $tmp1011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1010);
        if ($tmp1011.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1012, 0);
            $returnValue601 = $tmp1012;
            $tmp594 = 21;
            goto $l592;
            $l1013:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1015, 32);
        panda$core$Bit $tmp1016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1015);
        if ($tmp1016.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1018 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9595->$data + 24));
            base1017 = *$tmp1018;
            panda$core$Int64$init$builtin_int64(&$tmp1019, 1);
            panda$core$Int64 $tmp1020 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base1017);
            panda$core$Int64 $tmp1021 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1019, $tmp1020);
            $returnValue601 = $tmp1021;
            $tmp594 = 22;
            goto $l592;
            $l1022:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1024, 33);
        panda$core$Bit $tmp1025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1024);
        if ($tmp1025.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1026, 1);
            $returnValue601 = $tmp1026;
            $tmp594 = 23;
            goto $l592;
            $l1027:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1029, 34);
        panda$core$Bit $tmp1030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1029);
        if ($tmp1030.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1031, 1);
            $returnValue601 = $tmp1031;
            $tmp594 = 24;
            goto $l592;
            $l1032:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1034, 36);
        panda$core$Bit $tmp1035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1034);
        if ($tmp1035.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1037 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9595->$data + 16));
            value1036 = *$tmp1037;
            if (((panda$core$Bit) { value1036 == NULL }).value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp1038, 0);
                $returnValue601 = $tmp1038;
                $tmp594 = 25;
                goto $l592;
                $l1039:;
                return $returnValue601;
            }
            }
            panda$core$Int64 $tmp1041 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value1036);
            $returnValue601 = $tmp1041;
            $tmp594 = 26;
            goto $l592;
            $l1042:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1044, 37);
        panda$core$Bit $tmp1045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1044);
        if ($tmp1045.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1046, 1);
            $returnValue601 = $tmp1046;
            $tmp594 = 27;
            goto $l592;
            $l1047:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1049, 38);
        panda$core$Bit $tmp1050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1049);
        if ($tmp1050.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1051, 1);
            $returnValue601 = $tmp1051;
            $tmp594 = 28;
            goto $l592;
            $l1052:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1054, 39);
        panda$core$Bit $tmp1055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1054);
        if ($tmp1055.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1056, 1);
            $returnValue601 = $tmp1056;
            $tmp594 = 29;
            goto $l592;
            $l1057:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1059, 42);
        panda$core$Bit $tmp1060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1059);
        if ($tmp1060.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1061, 0);
            $returnValue601 = $tmp1061;
            $tmp594 = 30;
            goto $l592;
            $l1062:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1064, 43);
        panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1064);
        if ($tmp1065.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1066, 10);
            $returnValue601 = $tmp1066;
            $tmp594 = 31;
            goto $l592;
            $l1067:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1069, 45);
        panda$core$Bit $tmp1070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1069);
        if ($tmp1070.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1071, 10);
            $returnValue601 = $tmp1071;
            $tmp594 = 32;
            goto $l592;
            $l1072:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1074, 47);
        panda$core$Bit $tmp1075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1074);
        if ($tmp1075.value) {
        {
            panda$collections$ImmutableArray** $tmp1077 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9595->$data + 24));
            decls1076 = *$tmp1077;
            panda$core$Int64$init$builtin_int64(&$tmp1079, 0);
            result1078 = $tmp1079;
            {
                int $tmp1082;
                {
                    ITable* $tmp1086 = ((panda$collections$Iterable*) decls1076)->$class->itable;
                    while ($tmp1086->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1086 = $tmp1086->next;
                    }
                    $fn1088 $tmp1087 = $tmp1086->methods[0];
                    panda$collections$Iterator* $tmp1089 = $tmp1087(((panda$collections$Iterable*) decls1076));
                    $tmp1085 = $tmp1089;
                    $tmp1084 = $tmp1085;
                    Iter$308$171083 = $tmp1084;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1084));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1085));
                    $l1090:;
                    ITable* $tmp1093 = Iter$308$171083->$class->itable;
                    while ($tmp1093->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1093 = $tmp1093->next;
                    }
                    $fn1095 $tmp1094 = $tmp1093->methods[0];
                    panda$core$Bit $tmp1096 = $tmp1094(Iter$308$171083);
                    panda$core$Bit $tmp1097 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1096);
                    bool $tmp1092 = $tmp1097.value;
                    if (!$tmp1092) goto $l1091;
                    {
                        int $tmp1100;
                        {
                            ITable* $tmp1104 = Iter$308$171083->$class->itable;
                            while ($tmp1104->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1104 = $tmp1104->next;
                            }
                            $fn1106 $tmp1105 = $tmp1104->methods[1];
                            panda$core$Object* $tmp1107 = $tmp1105(Iter$308$171083);
                            $tmp1103 = $tmp1107;
                            $tmp1102 = ((org$pandalanguage$pandac$ASTNode*) $tmp1103);
                            decl1101 = $tmp1102;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1102));
                            panda$core$Panda$unref$panda$core$Object($tmp1103);
                            panda$core$Int64 $tmp1108 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl1101);
                            panda$core$Int64 $tmp1109 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1078, $tmp1108);
                            result1078 = $tmp1109;
                        }
                        $tmp1100 = -1;
                        goto $l1098;
                        $l1098:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1101));
                        decl1101 = NULL;
                        switch ($tmp1100) {
                            case -1: goto $l1110;
                        }
                        $l1110:;
                    }
                    goto $l1090;
                    $l1091:;
                }
                $tmp1082 = -1;
                goto $l1080;
                $l1080:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$308$171083));
                Iter$308$171083 = NULL;
                switch ($tmp1082) {
                    case -1: goto $l1111;
                }
                $l1111:;
            }
            $returnValue601 = result1078;
            $tmp594 = 33;
            goto $l592;
            $l1112:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1114, 48);
        panda$core$Bit $tmp1115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1114);
        if ($tmp1115.value) {
        {
            panda$collections$ImmutableArray** $tmp1117 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9595->$data + 16));
            tests1116 = *$tmp1117;
            panda$collections$ImmutableArray** $tmp1119 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9595->$data + 24));
            statements1118 = *$tmp1119;
            panda$core$Int64$init$builtin_int64(&$tmp1121, 0);
            result1120 = $tmp1121;
            {
                int $tmp1124;
                {
                    ITable* $tmp1128 = ((panda$collections$Iterable*) tests1116)->$class->itable;
                    while ($tmp1128->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1128 = $tmp1128->next;
                    }
                    $fn1130 $tmp1129 = $tmp1128->methods[0];
                    panda$collections$Iterator* $tmp1131 = $tmp1129(((panda$collections$Iterable*) tests1116));
                    $tmp1127 = $tmp1131;
                    $tmp1126 = $tmp1127;
                    Iter$314$171125 = $tmp1126;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1126));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1127));
                    $l1132:;
                    ITable* $tmp1135 = Iter$314$171125->$class->itable;
                    while ($tmp1135->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1135 = $tmp1135->next;
                    }
                    $fn1137 $tmp1136 = $tmp1135->methods[0];
                    panda$core$Bit $tmp1138 = $tmp1136(Iter$314$171125);
                    panda$core$Bit $tmp1139 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1138);
                    bool $tmp1134 = $tmp1139.value;
                    if (!$tmp1134) goto $l1133;
                    {
                        int $tmp1142;
                        {
                            ITable* $tmp1146 = Iter$314$171125->$class->itable;
                            while ($tmp1146->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1146 = $tmp1146->next;
                            }
                            $fn1148 $tmp1147 = $tmp1146->methods[1];
                            panda$core$Object* $tmp1149 = $tmp1147(Iter$314$171125);
                            $tmp1145 = $tmp1149;
                            $tmp1144 = ((org$pandalanguage$pandac$ASTNode*) $tmp1145);
                            test1143 = $tmp1144;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1144));
                            panda$core$Panda$unref$panda$core$Object($tmp1145);
                            panda$core$Int64 $tmp1150 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1143);
                            panda$core$Int64 $tmp1151 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1120, $tmp1150);
                            result1120 = $tmp1151;
                        }
                        $tmp1142 = -1;
                        goto $l1140;
                        $l1140:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1143));
                        test1143 = NULL;
                        switch ($tmp1142) {
                            case -1: goto $l1152;
                        }
                        $l1152:;
                    }
                    goto $l1132;
                    $l1133:;
                }
                $tmp1124 = -1;
                goto $l1122;
                $l1122:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$314$171125));
                Iter$314$171125 = NULL;
                switch ($tmp1124) {
                    case -1: goto $l1153;
                }
                $l1153:;
            }
            {
                int $tmp1156;
                {
                    ITable* $tmp1160 = ((panda$collections$Iterable*) statements1118)->$class->itable;
                    while ($tmp1160->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1160 = $tmp1160->next;
                    }
                    $fn1162 $tmp1161 = $tmp1160->methods[0];
                    panda$collections$Iterator* $tmp1163 = $tmp1161(((panda$collections$Iterable*) statements1118));
                    $tmp1159 = $tmp1163;
                    $tmp1158 = $tmp1159;
                    Iter$317$171157 = $tmp1158;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1158));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1159));
                    $l1164:;
                    ITable* $tmp1167 = Iter$317$171157->$class->itable;
                    while ($tmp1167->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1167 = $tmp1167->next;
                    }
                    $fn1169 $tmp1168 = $tmp1167->methods[0];
                    panda$core$Bit $tmp1170 = $tmp1168(Iter$317$171157);
                    panda$core$Bit $tmp1171 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1170);
                    bool $tmp1166 = $tmp1171.value;
                    if (!$tmp1166) goto $l1165;
                    {
                        int $tmp1174;
                        {
                            ITable* $tmp1178 = Iter$317$171157->$class->itable;
                            while ($tmp1178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1178 = $tmp1178->next;
                            }
                            $fn1180 $tmp1179 = $tmp1178->methods[1];
                            panda$core$Object* $tmp1181 = $tmp1179(Iter$317$171157);
                            $tmp1177 = $tmp1181;
                            $tmp1176 = ((org$pandalanguage$pandac$ASTNode*) $tmp1177);
                            s1175 = $tmp1176;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1176));
                            panda$core$Panda$unref$panda$core$Object($tmp1177);
                            panda$core$Int64 $tmp1182 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1175);
                            panda$core$Int64 $tmp1183 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1120, $tmp1182);
                            result1120 = $tmp1183;
                        }
                        $tmp1174 = -1;
                        goto $l1172;
                        $l1172:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1175));
                        s1175 = NULL;
                        switch ($tmp1174) {
                            case -1: goto $l1184;
                        }
                        $l1184:;
                    }
                    goto $l1164;
                    $l1165:;
                }
                $tmp1156 = -1;
                goto $l1154;
                $l1154:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$317$171157));
                Iter$317$171157 = NULL;
                switch ($tmp1156) {
                    case -1: goto $l1185;
                }
                $l1185:;
            }
            $returnValue601 = result1120;
            $tmp594 = 34;
            goto $l592;
            $l1186:;
            return $returnValue601;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1188, 49);
        panda$core$Bit $tmp1189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$201_9595->$rawValue, $tmp1188);
        if ($tmp1189.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1191 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$201_9595->$data + 24));
            test1190 = *$tmp1191;
            panda$collections$ImmutableArray** $tmp1193 = ((panda$collections$ImmutableArray**) ((char*) $match$201_9595->$data + 32));
            statements1192 = *$tmp1193;
            panda$core$Int64 $tmp1195 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1190);
            result1194 = $tmp1195;
            {
                int $tmp1198;
                {
                    ITable* $tmp1202 = ((panda$collections$Iterable*) statements1192)->$class->itable;
                    while ($tmp1202->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1202 = $tmp1202->next;
                    }
                    $fn1204 $tmp1203 = $tmp1202->methods[0];
                    panda$collections$Iterator* $tmp1205 = $tmp1203(((panda$collections$Iterable*) statements1192));
                    $tmp1201 = $tmp1205;
                    $tmp1200 = $tmp1201;
                    Iter$323$171199 = $tmp1200;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1200));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1201));
                    $l1206:;
                    ITable* $tmp1209 = Iter$323$171199->$class->itable;
                    while ($tmp1209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1209 = $tmp1209->next;
                    }
                    $fn1211 $tmp1210 = $tmp1209->methods[0];
                    panda$core$Bit $tmp1212 = $tmp1210(Iter$323$171199);
                    panda$core$Bit $tmp1213 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1212);
                    bool $tmp1208 = $tmp1213.value;
                    if (!$tmp1208) goto $l1207;
                    {
                        int $tmp1216;
                        {
                            ITable* $tmp1220 = Iter$323$171199->$class->itable;
                            while ($tmp1220->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1220 = $tmp1220->next;
                            }
                            $fn1222 $tmp1221 = $tmp1220->methods[1];
                            panda$core$Object* $tmp1223 = $tmp1221(Iter$323$171199);
                            $tmp1219 = $tmp1223;
                            $tmp1218 = ((org$pandalanguage$pandac$ASTNode*) $tmp1219);
                            s1217 = $tmp1218;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1218));
                            panda$core$Panda$unref$panda$core$Object($tmp1219);
                            panda$core$Int64 $tmp1224 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1217);
                            panda$core$Int64 $tmp1225 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1194, $tmp1224);
                            result1194 = $tmp1225;
                        }
                        $tmp1216 = -1;
                        goto $l1214;
                        $l1214:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1217));
                        s1217 = NULL;
                        switch ($tmp1216) {
                            case -1: goto $l1226;
                        }
                        $l1226:;
                    }
                    goto $l1206;
                    $l1207:;
                }
                $tmp1198 = -1;
                goto $l1196;
                $l1196:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$323$171199));
                Iter$323$171199 = NULL;
                switch ($tmp1198) {
                    case -1: goto $l1227;
                }
                $l1227:;
            }
            $returnValue601 = result1194;
            $tmp594 = 35;
            goto $l592;
            $l1228:;
            return $returnValue601;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1230, false);
            if ($tmp1230.value) goto $l1231; else goto $l1232;
            $l1232:;
            panda$core$String* $tmp1237 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1236, ((panda$core$Object*) p_node));
            $tmp1235 = $tmp1237;
            panda$core$String* $tmp1239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1235, &$s1238);
            $tmp1234 = $tmp1239;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1233, (panda$core$Int64) { 328 }, $tmp1234);
            abort();
            $l1231:;
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
    $tmp594 = -1;
    goto $l592;
    $l592:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
    switch ($tmp594) {
        case 25: goto $l1039;
        case 8: goto $l727;
        case 26: goto $l1042;
        case 35: goto $l1228;
        case 27: goto $l1047;
        case 6: goto $l715;
        case 16: goto $l882;
        case 15: goto $l877;
        case 22: goto $l1022;
        case 5: goto $l708;
        case 29: goto $l1057;
        case 30: goto $l1062;
        case 0: goto $l603;
        case 31: goto $l1067;
        case 1: goto $l616;
        case 17: goto $l922;
        case 23: goto $l1027;
        case -1: goto $l1240;
        case 24: goto $l1032;
        case 21: goto $l1013;
        case 34: goto $l1186;
        case 7: goto $l720;
        case 32: goto $l1072;
        case 4: goto $l666;
        case 33: goto $l1112;
        case 10: goto $l772;
        case 11: goto $l779;
        case 3: goto $l661;
        case 20: goto $l1008;
        case 28: goto $l1052;
        case 2: goto $l621;
        case 13: goto $l826;
        case 18: goto $l998;
        case 14: goto $l831;
        case 19: goto $l1003;
        case 9: goto $l730;
        case 12: goto $l821;
    }
    $l1240:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1243;
    panda$core$Int64 $tmp1246;
    panda$core$Int64 c1255;
    panda$core$Int64 $tmp1256;
    panda$collections$Iterator* Iter$336$131260 = NULL;
    panda$collections$Iterator* $tmp1261;
    panda$collections$Iterator* $tmp1262;
    org$pandalanguage$pandac$ASTNode* s1278 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1279;
    panda$core$Object* $tmp1280;
    panda$core$Int64 $tmp1287;
    panda$core$Bit $returnValue1289;
    panda$core$Bit $tmp1290;
    panda$core$Bit $tmp1296;
    panda$core$Bit $tmp1298;
    panda$core$Object* $tmp1245 = (($fn1244) self->compiler->$class->vtable[2])(self->compiler);
    $tmp1243 = $tmp1245;
    panda$core$Int64$init$builtin_int64(&$tmp1246, 0);
    panda$core$Bit $tmp1247 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1243)->settings->optimizationLevel, $tmp1246);
    bool $tmp1242 = $tmp1247.value;
    panda$core$Panda$unref$panda$core$Object($tmp1243);
    if (!$tmp1242) goto $l1248;
    panda$core$Bit $tmp1249 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1250 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1249);
    $tmp1242 = $tmp1250.value;
    $l1248:;
    panda$core$Bit $tmp1251 = { $tmp1242 };
    bool $tmp1241 = $tmp1251.value;
    if (!$tmp1241) goto $l1252;
    panda$core$Bit $tmp1253 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1241 = $tmp1253.value;
    $l1252:;
    panda$core$Bit $tmp1254 = { $tmp1241 };
    if ($tmp1254.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1256, 0);
        c1255 = $tmp1256;
        {
            int $tmp1259;
            {
                ITable* $tmp1263 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1263->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1263 = $tmp1263->next;
                }
                $fn1265 $tmp1264 = $tmp1263->methods[0];
                panda$collections$Iterator* $tmp1266 = $tmp1264(((panda$collections$Iterable*) p_statements));
                $tmp1262 = $tmp1266;
                $tmp1261 = $tmp1262;
                Iter$336$131260 = $tmp1261;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1261));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1262));
                $l1267:;
                ITable* $tmp1270 = Iter$336$131260->$class->itable;
                while ($tmp1270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1270 = $tmp1270->next;
                }
                $fn1272 $tmp1271 = $tmp1270->methods[0];
                panda$core$Bit $tmp1273 = $tmp1271(Iter$336$131260);
                panda$core$Bit $tmp1274 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1273);
                bool $tmp1269 = $tmp1274.value;
                if (!$tmp1269) goto $l1268;
                {
                    int $tmp1277;
                    {
                        ITable* $tmp1281 = Iter$336$131260->$class->itable;
                        while ($tmp1281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1281 = $tmp1281->next;
                        }
                        $fn1283 $tmp1282 = $tmp1281->methods[1];
                        panda$core$Object* $tmp1284 = $tmp1282(Iter$336$131260);
                        $tmp1280 = $tmp1284;
                        $tmp1279 = ((org$pandalanguage$pandac$ASTNode*) $tmp1280);
                        s1278 = $tmp1279;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1279));
                        panda$core$Panda$unref$panda$core$Object($tmp1280);
                        panda$core$Int64 $tmp1285 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1278);
                        panda$core$Int64 $tmp1286 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1255, $tmp1285);
                        c1255 = $tmp1286;
                        panda$core$Int64$init$builtin_int64(&$tmp1287, 10);
                        panda$core$Bit $tmp1288 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1255, $tmp1287);
                        if ($tmp1288.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp1290, false);
                            $returnValue1289 = $tmp1290;
                            $tmp1277 = 0;
                            goto $l1275;
                            $l1291:;
                            $tmp1259 = 0;
                            goto $l1257;
                            $l1292:;
                            return $returnValue1289;
                        }
                        }
                    }
                    $tmp1277 = -1;
                    goto $l1275;
                    $l1275:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1278));
                    s1278 = NULL;
                    switch ($tmp1277) {
                        case 0: goto $l1291;
                        case -1: goto $l1294;
                    }
                    $l1294:;
                }
                goto $l1267;
                $l1268:;
            }
            $tmp1259 = -1;
            goto $l1257;
            $l1257:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$131260));
            Iter$336$131260 = NULL;
            switch ($tmp1259) {
                case -1: goto $l1295;
                case 0: goto $l1292;
            }
            $l1295:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp1296, true);
        $returnValue1289 = $tmp1296;
        return $returnValue1289;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp1298, false);
    $returnValue1289 = $tmp1298;
    return $returnValue1289;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawGenerics, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1303 = NULL;
    panda$core$String* $tmp1304;
    panda$core$String* $tmp1305;
    org$pandalanguage$pandac$ASTNode* $match$357_131309 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1310;
    panda$core$Int64 $tmp1311;
    org$pandalanguage$pandac$Position position1313;
    panda$core$String* text1315 = NULL;
    panda$core$String* $tmp1317;
    panda$core$String* $tmp1318;
    panda$core$Bit $tmp1319;
    org$pandalanguage$pandac$Annotations* annotations1324 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1325;
    org$pandalanguage$pandac$Annotations* $tmp1326;
    panda$core$Int64 $tmp1330;
    panda$core$Int64 $tmp1338;
    panda$collections$Array* generics1340 = NULL;
    panda$collections$Array* $tmp1344;
    panda$collections$Array* $tmp1345;
    panda$collections$Array* $tmp1346;
    panda$core$String* fullName1348 = NULL;
    panda$core$String* $tmp1349;
    panda$core$String* $tmp1350;
    panda$core$String* $tmp1351;
    panda$core$String* $tmp1352;
    panda$core$String* $tmp1353;
    panda$collections$Iterator* Iter$372$131363 = NULL;
    panda$collections$Iterator* $tmp1364;
    panda$collections$Iterator* $tmp1365;
    org$pandalanguage$pandac$ASTNode* p1381 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1382;
    panda$core$Object* $tmp1383;
    panda$core$String* parameterName1388 = NULL;
    org$pandalanguage$pandac$Type* bound1389 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$375_171393 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1394;
    panda$core$Int64 $tmp1395;
    panda$core$String* id1397 = NULL;
    panda$core$String* $tmp1399;
    panda$core$String* $tmp1400;
    org$pandalanguage$pandac$Type* $tmp1401;
    org$pandalanguage$pandac$Type* $tmp1402;
    org$pandalanguage$pandac$Type* $tmp1403;
    panda$core$Int64 $tmp1405;
    panda$core$String* id1407 = NULL;
    org$pandalanguage$pandac$ASTNode* type1409 = NULL;
    panda$core$String* $tmp1411;
    panda$core$String* $tmp1412;
    org$pandalanguage$pandac$Type* $tmp1413;
    org$pandalanguage$pandac$Type* $tmp1414;
    org$pandalanguage$pandac$Type* $tmp1415;
    panda$core$Bit $tmp1417;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1422;
    panda$collections$Array* $tmp1429;
    panda$collections$Array* $tmp1430;
    panda$collections$Array* parameters1431 = NULL;
    panda$collections$Array* $tmp1432;
    panda$collections$Array* $tmp1433;
    panda$collections$Iterator* Iter$393$91438 = NULL;
    panda$collections$Iterator* $tmp1439;
    panda$collections$Iterator* $tmp1440;
    org$pandalanguage$pandac$ASTNode* p1456 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1457;
    panda$core$Object* $tmp1458;
    org$pandalanguage$pandac$ASTNode* $match$394_131466 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1467;
    panda$core$Int64 $tmp1468;
    panda$core$String* name1470 = NULL;
    org$pandalanguage$pandac$ASTNode* type1472 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1474;
    org$pandalanguage$pandac$Type* $tmp1476;
    panda$core$Bit $tmp1478;
    org$pandalanguage$pandac$Type* returnType1485 = NULL;
    org$pandalanguage$pandac$Type* $tmp1486;
    org$pandalanguage$pandac$Type* $tmp1487;
    org$pandalanguage$pandac$Type* $tmp1488;
    org$pandalanguage$pandac$Type* $tmp1490;
    org$pandalanguage$pandac$Type* $tmp1491;
    org$pandalanguage$pandac$Type* $tmp1492;
    panda$core$Int64 $tmp1495;
    org$pandalanguage$pandac$Type* $tmp1498;
    panda$core$Int64 $tmp1507;
    panda$core$Int64 $tmp1511;
    panda$core$Int64 $tmp1514;
    org$pandalanguage$pandac$MethodDecl* $returnValue1516;
    org$pandalanguage$pandac$MethodDecl* $tmp1517;
    org$pandalanguage$pandac$MethodDecl* $tmp1518;
    int $tmp1302;
    {
        memset(&doccomment1303, 0, sizeof(doccomment1303));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1304 = doccomment1303;
                $tmp1305 = NULL;
                doccomment1303 = $tmp1305;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1305));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1304));
            }
        }
        }
        else {
        {
            int $tmp1308;
            {
                $tmp1310 = p_rawDoccomment;
                $match$357_131309 = $tmp1310;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1310));
                panda$core$Int64$init$builtin_int64(&$tmp1311, 38);
                panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$357_131309->$rawValue, $tmp1311);
                if ($tmp1312.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1314 = ((org$pandalanguage$pandac$Position*) ((char*) $match$357_131309->$data + 0));
                    position1313 = *$tmp1314;
                    panda$core$String** $tmp1316 = ((panda$core$String**) ((char*) $match$357_131309->$data + 16));
                    text1315 = *$tmp1316;
                    {
                        $tmp1317 = doccomment1303;
                        $tmp1318 = text1315;
                        doccomment1303 = $tmp1318;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1318));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1317));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1319, false);
                    if ($tmp1319.value) goto $l1320; else goto $l1321;
                    $l1321:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1322, (panda$core$Int64) { 361 });
                    abort();
                    $l1320:;
                }
                }
            }
            $tmp1308 = -1;
            goto $l1306;
            $l1306:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1310));
            switch ($tmp1308) {
                case -1: goto $l1323;
            }
            $l1323:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1327 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1326 = $tmp1327;
        $tmp1325 = $tmp1326;
        annotations1324 = $tmp1325;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1325));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1326));
        panda$core$Int64$init$builtin_int64(&$tmp1330, 2);
        panda$core$Bit $tmp1331 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1330);
        bool $tmp1329 = $tmp1331.value;
        if (!$tmp1329) goto $l1332;
        panda$core$Bit $tmp1333 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1329 = $tmp1333.value;
        $l1332:;
        panda$core$Bit $tmp1334 = { $tmp1329 };
        bool $tmp1328 = $tmp1334.value;
        if ($tmp1328) goto $l1335;
        panda$core$Bit $tmp1336 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1324);
        $tmp1328 = $tmp1336.value;
        $l1335:;
        panda$core$Bit $tmp1337 = { $tmp1328 };
        if ($tmp1337.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1338, 256);
            panda$core$Int64 $tmp1339 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1324->flags, $tmp1338);
            annotations1324->flags = $tmp1339;
        }
        }
        memset(&generics1340, 0, sizeof(generics1340));
        if (((panda$core$Bit) { p_rawGenerics != NULL }).value) {
        {
            int $tmp1343;
            {
                {
                    $tmp1344 = generics1340;
                    panda$collections$Array* $tmp1347 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1347);
                    $tmp1346 = $tmp1347;
                    $tmp1345 = $tmp1346;
                    generics1340 = $tmp1345;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1345));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1346));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1344));
                }
                panda$core$String* $tmp1354 = panda$core$String$convert$R$panda$core$String(p_owner->name);
                $tmp1353 = $tmp1354;
                panda$core$String* $tmp1356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1353, &$s1355);
                $tmp1352 = $tmp1356;
                panda$core$String* $tmp1357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1352, p_name);
                $tmp1351 = $tmp1357;
                panda$core$String* $tmp1359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1351, &$s1358);
                $tmp1350 = $tmp1359;
                $tmp1349 = $tmp1350;
                fullName1348 = $tmp1349;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1349));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1350));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1351));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
                {
                    int $tmp1362;
                    {
                        ITable* $tmp1366 = ((panda$collections$Iterable*) p_rawGenerics)->$class->itable;
                        while ($tmp1366->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1366 = $tmp1366->next;
                        }
                        $fn1368 $tmp1367 = $tmp1366->methods[0];
                        panda$collections$Iterator* $tmp1369 = $tmp1367(((panda$collections$Iterable*) p_rawGenerics));
                        $tmp1365 = $tmp1369;
                        $tmp1364 = $tmp1365;
                        Iter$372$131363 = $tmp1364;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1364));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1365));
                        $l1370:;
                        ITable* $tmp1373 = Iter$372$131363->$class->itable;
                        while ($tmp1373->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1373 = $tmp1373->next;
                        }
                        $fn1375 $tmp1374 = $tmp1373->methods[0];
                        panda$core$Bit $tmp1376 = $tmp1374(Iter$372$131363);
                        panda$core$Bit $tmp1377 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1376);
                        bool $tmp1372 = $tmp1377.value;
                        if (!$tmp1372) goto $l1371;
                        {
                            int $tmp1380;
                            {
                                ITable* $tmp1384 = Iter$372$131363->$class->itable;
                                while ($tmp1384->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1384 = $tmp1384->next;
                                }
                                $fn1386 $tmp1385 = $tmp1384->methods[1];
                                panda$core$Object* $tmp1387 = $tmp1385(Iter$372$131363);
                                $tmp1383 = $tmp1387;
                                $tmp1382 = ((org$pandalanguage$pandac$ASTNode*) $tmp1383);
                                p1381 = $tmp1382;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1382));
                                panda$core$Panda$unref$panda$core$Object($tmp1383);
                                memset(&parameterName1388, 0, sizeof(parameterName1388));
                                memset(&bound1389, 0, sizeof(bound1389));
                                int $tmp1392;
                                {
                                    $tmp1394 = p1381;
                                    $match$375_171393 = $tmp1394;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1394));
                                    panda$core$Int64$init$builtin_int64(&$tmp1395, 20);
                                    panda$core$Bit $tmp1396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$375_171393->$rawValue, $tmp1395);
                                    if ($tmp1396.value) {
                                    {
                                        panda$core$String** $tmp1398 = ((panda$core$String**) ((char*) $match$375_171393->$data + 16));
                                        id1397 = *$tmp1398;
                                        {
                                            $tmp1399 = parameterName1388;
                                            $tmp1400 = id1397;
                                            parameterName1388 = $tmp1400;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1400));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1399));
                                        }
                                        {
                                            $tmp1401 = bound1389;
                                            org$pandalanguage$pandac$Type* $tmp1404 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                            $tmp1403 = $tmp1404;
                                            $tmp1402 = $tmp1403;
                                            bound1389 = $tmp1402;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1402));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1403));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1401));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp1405, 44);
                                    panda$core$Bit $tmp1406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$375_171393->$rawValue, $tmp1405);
                                    if ($tmp1406.value) {
                                    {
                                        panda$core$String** $tmp1408 = ((panda$core$String**) ((char*) $match$375_171393->$data + 16));
                                        id1407 = *$tmp1408;
                                        org$pandalanguage$pandac$ASTNode** $tmp1410 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$375_171393->$data + 24));
                                        type1409 = *$tmp1410;
                                        {
                                            $tmp1411 = parameterName1388;
                                            $tmp1412 = id1407;
                                            parameterName1388 = $tmp1412;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1412));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1411));
                                        }
                                        {
                                            $tmp1413 = bound1389;
                                            org$pandalanguage$pandac$Type* $tmp1416 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1409);
                                            $tmp1415 = $tmp1416;
                                            $tmp1414 = $tmp1415;
                                            bound1389 = $tmp1414;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1414));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1415));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1413));
                                        }
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp1417, false);
                                        if ($tmp1417.value) goto $l1418; else goto $l1419;
                                        $l1419:;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1420, (panda$core$Int64) { 383 });
                                        abort();
                                        $l1418:;
                                    }
                                    }
                                    }
                                }
                                $tmp1392 = -1;
                                goto $l1390;
                                $l1390:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1394));
                                switch ($tmp1392) {
                                    case -1: goto $l1421;
                                }
                                $l1421:;
                                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1423 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                                org$pandalanguage$pandac$Position $tmp1425 = (($fn1424) p1381->$class->vtable[2])(p1381);
                                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1423, $tmp1425, fullName1348, parameterName1388, bound1389);
                                $tmp1422 = $tmp1423;
                                panda$collections$Array$add$panda$collections$Array$T(generics1340, ((panda$core$Object*) $tmp1422));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1422));
                            }
                            $tmp1380 = -1;
                            goto $l1378;
                            $l1378:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1389));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameterName1388));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1381));
                            p1381 = NULL;
                            switch ($tmp1380) {
                                case -1: goto $l1426;
                            }
                            $l1426:;
                        }
                        goto $l1370;
                        $l1371:;
                    }
                    $tmp1362 = -1;
                    goto $l1360;
                    $l1360:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$372$131363));
                    Iter$372$131363 = NULL;
                    switch ($tmp1362) {
                        case -1: goto $l1427;
                    }
                    $l1427:;
                }
            }
            $tmp1343 = -1;
            goto $l1341;
            $l1341:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1348));
            fullName1348 = NULL;
            switch ($tmp1343) {
                case -1: goto $l1428;
            }
            $l1428:;
        }
        }
        else {
        {
            {
                $tmp1429 = generics1340;
                $tmp1430 = NULL;
                generics1340 = $tmp1430;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1430));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1429));
            }
        }
        }
        panda$collections$Array* $tmp1434 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1434);
        $tmp1433 = $tmp1434;
        $tmp1432 = $tmp1433;
        parameters1431 = $tmp1432;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1432));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
        {
            int $tmp1437;
            {
                ITable* $tmp1441 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1441->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1441 = $tmp1441->next;
                }
                $fn1443 $tmp1442 = $tmp1441->methods[0];
                panda$collections$Iterator* $tmp1444 = $tmp1442(((panda$collections$Iterable*) p_rawParameters));
                $tmp1440 = $tmp1444;
                $tmp1439 = $tmp1440;
                Iter$393$91438 = $tmp1439;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1439));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1440));
                $l1445:;
                ITable* $tmp1448 = Iter$393$91438->$class->itable;
                while ($tmp1448->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1448 = $tmp1448->next;
                }
                $fn1450 $tmp1449 = $tmp1448->methods[0];
                panda$core$Bit $tmp1451 = $tmp1449(Iter$393$91438);
                panda$core$Bit $tmp1452 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1451);
                bool $tmp1447 = $tmp1452.value;
                if (!$tmp1447) goto $l1446;
                {
                    int $tmp1455;
                    {
                        ITable* $tmp1459 = Iter$393$91438->$class->itable;
                        while ($tmp1459->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1459 = $tmp1459->next;
                        }
                        $fn1461 $tmp1460 = $tmp1459->methods[1];
                        panda$core$Object* $tmp1462 = $tmp1460(Iter$393$91438);
                        $tmp1458 = $tmp1462;
                        $tmp1457 = ((org$pandalanguage$pandac$ASTNode*) $tmp1458);
                        p1456 = $tmp1457;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1457));
                        panda$core$Panda$unref$panda$core$Object($tmp1458);
                        int $tmp1465;
                        {
                            $tmp1467 = p1456;
                            $match$394_131466 = $tmp1467;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1467));
                            panda$core$Int64$init$builtin_int64(&$tmp1468, 31);
                            panda$core$Bit $tmp1469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$394_131466->$rawValue, $tmp1468);
                            if ($tmp1469.value) {
                            {
                                panda$core$String** $tmp1471 = ((panda$core$String**) ((char*) $match$394_131466->$data + 16));
                                name1470 = *$tmp1471;
                                org$pandalanguage$pandac$ASTNode** $tmp1473 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$394_131466->$data + 24));
                                type1472 = *$tmp1473;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1475 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1477 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1472);
                                $tmp1476 = $tmp1477;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1475, name1470, $tmp1476);
                                $tmp1474 = $tmp1475;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1431, ((panda$core$Object*) $tmp1474));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1474));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
                            }
                            }
                            else {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1478, false);
                                if ($tmp1478.value) goto $l1479; else goto $l1480;
                                $l1480:;
                                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1481, (panda$core$Int64) { 398 });
                                abort();
                                $l1479:;
                            }
                            }
                        }
                        $tmp1465 = -1;
                        goto $l1463;
                        $l1463:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1467));
                        switch ($tmp1465) {
                            case -1: goto $l1482;
                        }
                        $l1482:;
                    }
                    $tmp1455 = -1;
                    goto $l1453;
                    $l1453:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1456));
                    p1456 = NULL;
                    switch ($tmp1455) {
                        case -1: goto $l1483;
                    }
                    $l1483:;
                }
                goto $l1445;
                $l1446:;
            }
            $tmp1437 = -1;
            goto $l1435;
            $l1435:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$393$91438));
            Iter$393$91438 = NULL;
            switch ($tmp1437) {
                case -1: goto $l1484;
            }
            $l1484:;
        }
        memset(&returnType1485, 0, sizeof(returnType1485));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1486 = returnType1485;
                org$pandalanguage$pandac$Type* $tmp1489 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1488 = $tmp1489;
                $tmp1487 = $tmp1488;
                returnType1485 = $tmp1487;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1487));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1488));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1486));
            }
        }
        }
        else {
        {
            {
                $tmp1490 = returnType1485;
                org$pandalanguage$pandac$Type* $tmp1493 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1492 = $tmp1493;
                $tmp1491 = $tmp1492;
                returnType1485 = $tmp1491;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1491));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1492));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1490));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1495, 1);
        panda$core$Bit $tmp1496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1495);
        bool $tmp1494 = $tmp1496.value;
        if (!$tmp1494) goto $l1497;
        org$pandalanguage$pandac$Type* $tmp1499 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1498 = $tmp1499;
        panda$core$Bit $tmp1500 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1485, $tmp1498);
        $tmp1494 = $tmp1500.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1498));
        $l1497:;
        panda$core$Bit $tmp1501 = { $tmp1494 };
        if ($tmp1501.value) {
        {
            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1502);
        }
        }
        bool $tmp1503 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1503) goto $l1504;
        panda$core$Bit $tmp1505 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1324, p_statements);
        $tmp1503 = $tmp1505.value;
        $l1504:;
        panda$core$Bit $tmp1506 = { $tmp1503 };
        if ($tmp1506.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1507, 1024);
            panda$core$Int64 $tmp1508 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1324->flags, $tmp1507);
            annotations1324->flags = $tmp1508;
        }
        }
        bool $tmp1509 = ((panda$core$Bit) { p_statements == NULL }).value;
        if (!$tmp1509) goto $l1510;
        panda$core$Int64$init$builtin_int64(&$tmp1511, 1);
        panda$core$Bit $tmp1512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, $tmp1511);
        $tmp1509 = $tmp1512.value;
        $l1510:;
        panda$core$Bit $tmp1513 = { $tmp1509 };
        if ($tmp1513.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1514, 512);
            panda$core$Int64 $tmp1515 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1324->flags, $tmp1514);
            annotations1324->flags = $tmp1515;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1519 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1519, p_owner, p_position, doccomment1303, annotations1324, p_kind, p_name, generics1340, parameters1431, returnType1485, p_statements);
        $tmp1518 = $tmp1519;
        $tmp1517 = $tmp1518;
        $returnValue1516 = $tmp1517;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1517));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1518));
        $tmp1302 = 0;
        goto $l1300;
        $l1520:;
        return $returnValue1516;
    }
    $l1300:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1485));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1431));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics1340));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1324));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1303));
    annotations1324 = NULL;
    parameters1431 = NULL;
    switch ($tmp1302) {
        case 0: goto $l1520;
    }
    $l1522:;
    abort();
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$422_91526 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1527;
    panda$core$Int64 $tmp1528;
    org$pandalanguage$pandac$Position position1530;
    org$pandalanguage$pandac$ASTNode* dc1532 = NULL;
    panda$collections$ImmutableArray* annotations1534 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1536 = NULL;
    panda$core$Int64 $tmp1538;
    org$pandalanguage$pandac$Position position1540;
    org$pandalanguage$pandac$ASTNode* dc1542 = NULL;
    panda$collections$ImmutableArray* annotations1544 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1546;
    panda$core$String* name1548 = NULL;
    panda$collections$ImmutableArray* generics1550 = NULL;
    panda$collections$ImmutableArray* parameters1552 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1554 = NULL;
    panda$collections$ImmutableArray* statements1556 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1561 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1562;
    org$pandalanguage$pandac$MethodDecl* $tmp1563;
    panda$core$Int64 $tmp1566;
    org$pandalanguage$pandac$Position position1568;
    org$pandalanguage$pandac$ASTNode* dc1570 = NULL;
    panda$collections$ImmutableArray* annotations1572 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1574;
    panda$core$String* name1576 = NULL;
    panda$collections$ImmutableArray* generics1578 = NULL;
    panda$collections$ImmutableArray* supertypes1580 = NULL;
    panda$collections$ImmutableArray* members1582 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1587 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1588;
    org$pandalanguage$pandac$ClassDecl* $tmp1589;
    panda$core$Weak* $tmp1591;
    panda$core$Weak* $tmp1592;
    panda$core$Weak* $tmp1593;
    panda$core$String* $tmp1595;
    org$pandalanguage$pandac$Alias* $tmp1602;
    panda$core$String* $tmp1604;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1605;
    panda$core$Int64 $tmp1607;
    panda$core$Bit $tmp1609;
    org$pandalanguage$pandac$Position $tmp1611;
    org$pandalanguage$pandac$Alias* $tmp1612;
    panda$core$String* $tmp1614;
    org$pandalanguage$pandac$Position $tmp1616;
    panda$core$Int64 $tmp1618;
    org$pandalanguage$pandac$Position position1620;
    org$pandalanguage$pandac$ASTNode* dc1622 = NULL;
    panda$core$String* name1624 = NULL;
    panda$collections$ImmutableArray* fields1626 = NULL;
    panda$core$Bit $tmp1628;
    panda$core$String* $tmp1632;
    panda$core$String* $tmp1633;
    int $tmp1525;
    {
        $tmp1527 = p_node;
        $match$422_91526 = $tmp1527;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1527));
        panda$core$Int64$init$builtin_int64(&$tmp1528, 16);
        panda$core$Bit $tmp1529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91526->$rawValue, $tmp1528);
        if ($tmp1529.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1531 = ((org$pandalanguage$pandac$Position*) ((char*) $match$422_91526->$data + 0));
            position1530 = *$tmp1531;
            org$pandalanguage$pandac$ASTNode** $tmp1533 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91526->$data + 16));
            dc1532 = *$tmp1533;
            panda$collections$ImmutableArray** $tmp1535 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91526->$data + 24));
            annotations1534 = *$tmp1535;
            org$pandalanguage$pandac$ASTNode** $tmp1537 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91526->$data + 32));
            varDecl1536 = *$tmp1537;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1530, dc1532, annotations1534, varDecl1536);
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1538, 26);
        panda$core$Bit $tmp1539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91526->$rawValue, $tmp1538);
        if ($tmp1539.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1541 = ((org$pandalanguage$pandac$Position*) ((char*) $match$422_91526->$data + 0));
            position1540 = *$tmp1541;
            org$pandalanguage$pandac$ASTNode** $tmp1543 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91526->$data + 16));
            dc1542 = *$tmp1543;
            panda$collections$ImmutableArray** $tmp1545 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91526->$data + 24));
            annotations1544 = *$tmp1545;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1547 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$422_91526->$data + 32));
            kind1546 = *$tmp1547;
            panda$core$String** $tmp1549 = ((panda$core$String**) ((char*) $match$422_91526->$data + 40));
            name1548 = *$tmp1549;
            panda$collections$ImmutableArray** $tmp1551 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91526->$data + 48));
            generics1550 = *$tmp1551;
            panda$collections$ImmutableArray** $tmp1553 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91526->$data + 56));
            parameters1552 = *$tmp1553;
            org$pandalanguage$pandac$ASTNode** $tmp1555 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91526->$data + 64));
            returnType1554 = *$tmp1555;
            panda$collections$ImmutableArray** $tmp1557 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91526->$data + 72));
            statements1556 = *$tmp1557;
            int $tmp1560;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1564 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1540, dc1542, annotations1544, kind1546, name1548, generics1550, parameters1552, returnType1554, statements1556);
                $tmp1563 = $tmp1564;
                $tmp1562 = $tmp1563;
                m1561 = $tmp1562;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1562));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1563));
                if (((panda$core$Bit) { m1561 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1561));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1561));
                }
                }
            }
            $tmp1560 = -1;
            goto $l1558;
            $l1558:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1561));
            m1561 = NULL;
            switch ($tmp1560) {
                case -1: goto $l1565;
            }
            $l1565:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1566, 11);
        panda$core$Bit $tmp1567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91526->$rawValue, $tmp1566);
        if ($tmp1567.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1569 = ((org$pandalanguage$pandac$Position*) ((char*) $match$422_91526->$data + 0));
            position1568 = *$tmp1569;
            org$pandalanguage$pandac$ASTNode** $tmp1571 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91526->$data + 16));
            dc1570 = *$tmp1571;
            panda$collections$ImmutableArray** $tmp1573 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91526->$data + 24));
            annotations1572 = *$tmp1573;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1575 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$422_91526->$data + 32));
            kind1574 = *$tmp1575;
            panda$core$String** $tmp1577 = ((panda$core$String**) ((char*) $match$422_91526->$data + 40));
            name1576 = *$tmp1577;
            panda$collections$ImmutableArray** $tmp1579 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91526->$data + 48));
            generics1578 = *$tmp1579;
            panda$collections$ImmutableArray** $tmp1581 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91526->$data + 56));
            supertypes1580 = *$tmp1581;
            panda$collections$ImmutableArray** $tmp1583 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91526->$data + 64));
            members1582 = *$tmp1583;
            int $tmp1586;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1590 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1568, dc1570, annotations1572, kind1574, name1576, generics1578, supertypes1580, members1582);
                $tmp1589 = $tmp1590;
                $tmp1588 = $tmp1589;
                inner1587 = $tmp1588;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1588));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1589));
                if (((panda$core$Bit) { inner1587 != NULL }).value) {
                {
                    {
                        $tmp1591 = inner1587->owner;
                        panda$core$Weak* $tmp1594 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1594, ((panda$core$Object*) p_cl));
                        $tmp1593 = $tmp1594;
                        $tmp1592 = $tmp1593;
                        inner1587->owner = $tmp1592;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1592));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1593));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1591));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1587));
                    panda$core$String* $tmp1597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1596);
                    $tmp1595 = $tmp1597;
                    panda$core$Bit $tmp1598 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1587->name, $tmp1595);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1595));
                    if ($tmp1598.value) goto $l1599; else goto $l1600;
                    $l1600:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1601, (panda$core$Int64) { 440 });
                    abort();
                    $l1599:;
                    org$pandalanguage$pandac$Alias* $tmp1603 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1606 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64$init$builtin_int64(&$tmp1607, 1);
                    panda$core$Int64 $tmp1608 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1606, $tmp1607);
                    panda$core$Bit$init$builtin_bit(&$tmp1609, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1605, ((panda$core$Int64$nullable) { $tmp1608, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1609);
                    panda$core$String* $tmp1610 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1587->name, $tmp1605);
                    $tmp1604 = $tmp1610;
                    org$pandalanguage$pandac$Position$init(&$tmp1611);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1603, $tmp1604, inner1587->name, $tmp1611);
                    $tmp1602 = $tmp1603;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1602));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1602));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1604));
                    org$pandalanguage$pandac$Alias* $tmp1613 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1615 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1614 = $tmp1615;
                    org$pandalanguage$pandac$Position$init(&$tmp1616);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1613, $tmp1614, p_cl->name, $tmp1616);
                    $tmp1612 = $tmp1613;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1587->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1612));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1612));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1614));
                }
                }
            }
            $tmp1586 = -1;
            goto $l1584;
            $l1584:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1587));
            inner1587 = NULL;
            switch ($tmp1586) {
                case -1: goto $l1617;
            }
            $l1617:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1618, 9);
        panda$core$Bit $tmp1619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91526->$rawValue, $tmp1618);
        if ($tmp1619.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1621 = ((org$pandalanguage$pandac$Position*) ((char*) $match$422_91526->$data + 0));
            position1620 = *$tmp1621;
            org$pandalanguage$pandac$ASTNode** $tmp1623 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$422_91526->$data + 16));
            dc1622 = *$tmp1623;
            panda$core$String** $tmp1625 = ((panda$core$String**) ((char*) $match$422_91526->$data + 24));
            name1624 = *$tmp1625;
            panda$collections$ImmutableArray** $tmp1627 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91526->$data + 32));
            fields1626 = *$tmp1627;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1620, dc1622, name1624, fields1626);
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1628, false);
            if ($tmp1628.value) goto $l1629; else goto $l1630;
            $l1630:;
            panda$core$String* $tmp1635 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1634, ((panda$core$Object*) p_node));
            $tmp1633 = $tmp1635;
            panda$core$String* $tmp1637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1633, &$s1636);
            $tmp1632 = $tmp1637;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1631, (panda$core$Int64) { 448 }, $tmp1632);
            abort();
            $l1629:;
        }
        }
        }
        }
        }
    }
    $tmp1525 = -1;
    goto $l1523;
    $l1523:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1527));
    switch ($tmp1525) {
        case -1: goto $l1638;
    }
    $l1638:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1642 = NULL;
    panda$core$String* $tmp1643;
    panda$core$String* $tmp1644;
    org$pandalanguage$pandac$ASTNode* $match$460_131648 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1649;
    panda$core$Int64 $tmp1650;
    org$pandalanguage$pandac$Position position1652;
    panda$core$String* text1654 = NULL;
    panda$core$String* $tmp1656;
    panda$core$String* $tmp1657;
    panda$core$Bit $tmp1658;
    panda$collections$Array* fields1663 = NULL;
    panda$collections$Array* $tmp1664;
    panda$collections$Array* $tmp1665;
    panda$collections$Iterator* Iter$468$91670 = NULL;
    panda$collections$Iterator* $tmp1671;
    panda$collections$Iterator* $tmp1672;
    org$pandalanguage$pandac$ASTNode* t1688 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1689;
    panda$core$Object* $tmp1690;
    org$pandalanguage$pandac$Type* $tmp1695;
    org$pandalanguage$pandac$ChoiceEntry* entry1699 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1700;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1701;
    int $tmp1641;
    {
        memset(&doccomment1642, 0, sizeof(doccomment1642));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1643 = doccomment1642;
                $tmp1644 = NULL;
                doccomment1642 = $tmp1644;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1644));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1643));
            }
        }
        }
        else {
        {
            int $tmp1647;
            {
                $tmp1649 = p_rawDoccomment;
                $match$460_131648 = $tmp1649;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1649));
                panda$core$Int64$init$builtin_int64(&$tmp1650, 38);
                panda$core$Bit $tmp1651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$460_131648->$rawValue, $tmp1650);
                if ($tmp1651.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1653 = ((org$pandalanguage$pandac$Position*) ((char*) $match$460_131648->$data + 0));
                    position1652 = *$tmp1653;
                    panda$core$String** $tmp1655 = ((panda$core$String**) ((char*) $match$460_131648->$data + 16));
                    text1654 = *$tmp1655;
                    {
                        $tmp1656 = doccomment1642;
                        $tmp1657 = text1654;
                        doccomment1642 = $tmp1657;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1657));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1656));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1658, false);
                    if ($tmp1658.value) goto $l1659; else goto $l1660;
                    $l1660:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1661, (panda$core$Int64) { 464 });
                    abort();
                    $l1659:;
                }
                }
            }
            $tmp1647 = -1;
            goto $l1645;
            $l1645:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1649));
            switch ($tmp1647) {
                case -1: goto $l1662;
            }
            $l1662:;
        }
        }
        panda$collections$Array* $tmp1666 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1666);
        $tmp1665 = $tmp1666;
        $tmp1664 = $tmp1665;
        fields1663 = $tmp1664;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1664));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1665));
        {
            int $tmp1669;
            {
                ITable* $tmp1673 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1673->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1673 = $tmp1673->next;
                }
                $fn1675 $tmp1674 = $tmp1673->methods[0];
                panda$collections$Iterator* $tmp1676 = $tmp1674(((panda$collections$Iterable*) p_rawFields));
                $tmp1672 = $tmp1676;
                $tmp1671 = $tmp1672;
                Iter$468$91670 = $tmp1671;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1671));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1672));
                $l1677:;
                ITable* $tmp1680 = Iter$468$91670->$class->itable;
                while ($tmp1680->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1680 = $tmp1680->next;
                }
                $fn1682 $tmp1681 = $tmp1680->methods[0];
                panda$core$Bit $tmp1683 = $tmp1681(Iter$468$91670);
                panda$core$Bit $tmp1684 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1683);
                bool $tmp1679 = $tmp1684.value;
                if (!$tmp1679) goto $l1678;
                {
                    int $tmp1687;
                    {
                        ITable* $tmp1691 = Iter$468$91670->$class->itable;
                        while ($tmp1691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1691 = $tmp1691->next;
                        }
                        $fn1693 $tmp1692 = $tmp1691->methods[1];
                        panda$core$Object* $tmp1694 = $tmp1692(Iter$468$91670);
                        $tmp1690 = $tmp1694;
                        $tmp1689 = ((org$pandalanguage$pandac$ASTNode*) $tmp1690);
                        t1688 = $tmp1689;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1689));
                        panda$core$Panda$unref$panda$core$Object($tmp1690);
                        org$pandalanguage$pandac$Type* $tmp1696 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1688);
                        $tmp1695 = $tmp1696;
                        panda$collections$Array$add$panda$collections$Array$T(fields1663, ((panda$core$Object*) $tmp1695));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1695));
                    }
                    $tmp1687 = -1;
                    goto $l1685;
                    $l1685:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1688));
                    t1688 = NULL;
                    switch ($tmp1687) {
                        case -1: goto $l1697;
                    }
                    $l1697:;
                }
                goto $l1677;
                $l1678:;
            }
            $tmp1669 = -1;
            goto $l1667;
            $l1667:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$468$91670));
            Iter$468$91670 = NULL;
            switch ($tmp1669) {
                case -1: goto $l1698;
            }
            $l1698:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1702 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1703 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1702, p_cl, p_position, p_name, doccomment1642, $tmp1703, ((panda$collections$ListView*) fields1663));
        $tmp1701 = $tmp1702;
        $tmp1700 = $tmp1701;
        entry1699 = $tmp1700;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1700));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1701));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1699));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1699));
    }
    $tmp1641 = -1;
    goto $l1639;
    $l1639:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1699));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1663));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1642));
    fields1663 = NULL;
    entry1699 = NULL;
    switch ($tmp1641) {
        case -1: goto $l1704;
    }
    $l1704:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1708 = NULL;
    panda$core$String* $tmp1711;
    panda$core$String* $tmp1712;
    panda$core$String* $tmp1713;
    panda$core$String* $tmp1714;
    panda$core$String* $tmp1715;
    panda$core$String* $tmp1716;
    panda$core$String* $tmp1723;
    panda$core$String* $tmp1724;
    panda$core$String* doccomment1725 = NULL;
    panda$core$String* $tmp1726;
    panda$core$String* $tmp1727;
    org$pandalanguage$pandac$ASTNode* $match$494_131731 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1732;
    panda$core$Int64 $tmp1733;
    org$pandalanguage$pandac$Position position1735;
    panda$core$String* text1737 = NULL;
    panda$core$String* $tmp1739;
    panda$core$String* $tmp1740;
    panda$core$Bit $tmp1741;
    org$pandalanguage$pandac$Annotations* annotations1746 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1747;
    org$pandalanguage$pandac$Annotations* $tmp1748;
    panda$collections$Array* parameters1750 = NULL;
    panda$collections$Array* $tmp1751;
    panda$collections$Array* $tmp1752;
    panda$collections$Iterator* Iter$504$131757 = NULL;
    panda$collections$Iterator* $tmp1758;
    panda$collections$Iterator* $tmp1759;
    org$pandalanguage$pandac$ASTNode* p1775 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1776;
    panda$core$Object* $tmp1777;
    panda$core$String* name1782 = NULL;
    org$pandalanguage$pandac$Type* bound1783 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$507_171787 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1788;
    panda$core$Int64 $tmp1789;
    panda$core$String* id1791 = NULL;
    panda$core$String* $tmp1793;
    panda$core$String* $tmp1794;
    org$pandalanguage$pandac$Type* $tmp1795;
    org$pandalanguage$pandac$Type* $tmp1796;
    org$pandalanguage$pandac$Type* $tmp1797;
    panda$core$Int64 $tmp1799;
    panda$core$String* id1801 = NULL;
    org$pandalanguage$pandac$ASTNode* type1803 = NULL;
    panda$core$String* $tmp1805;
    panda$core$String* $tmp1806;
    org$pandalanguage$pandac$Type* $tmp1807;
    org$pandalanguage$pandac$Type* $tmp1808;
    org$pandalanguage$pandac$Type* $tmp1809;
    panda$core$Bit $tmp1811;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1816;
    panda$core$Int64 $tmp1822;
    panda$collections$Array* supertypes1825 = NULL;
    panda$collections$Array* $tmp1826;
    panda$collections$Array* $tmp1827;
    panda$core$Int64 $tmp1829;
    panda$collections$Iterator* Iter$528$131835 = NULL;
    panda$collections$Iterator* $tmp1836;
    panda$collections$Iterator* $tmp1837;
    org$pandalanguage$pandac$ASTNode* s1853 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1854;
    panda$core$Object* $tmp1855;
    org$pandalanguage$pandac$Type* $tmp1860;
    org$pandalanguage$pandac$ClassDecl* result1864 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1865;
    org$pandalanguage$pandac$ClassDecl* $tmp1866;
    panda$core$Object* $tmp1868;
    panda$core$Object* $tmp1871;
    panda$core$Int64 $tmp1874;
    org$pandalanguage$pandac$FieldDecl* rawValue1879 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1880;
    org$pandalanguage$pandac$FieldDecl* $tmp1881;
    org$pandalanguage$pandac$Annotations* $tmp1883;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1885;
    panda$core$Int64 $tmp1886;
    org$pandalanguage$pandac$Type* $tmp1888;
    org$pandalanguage$pandac$FieldDecl* data1890 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1891;
    org$pandalanguage$pandac$FieldDecl* $tmp1892;
    org$pandalanguage$pandac$Annotations* $tmp1894;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1896;
    panda$core$Int64 $tmp1897;
    org$pandalanguage$pandac$Type* $tmp1899;
    panda$collections$Iterator* Iter$545$91905 = NULL;
    panda$collections$Iterator* $tmp1906;
    panda$collections$Iterator* $tmp1907;
    org$pandalanguage$pandac$ASTNode* m1923 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1924;
    panda$core$Object* $tmp1925;
    org$pandalanguage$pandac$ASTNode* $match$546_131933 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1934;
    panda$core$Int64 $tmp1935;
    org$pandalanguage$pandac$Position mPosition1937;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1939;
    panda$core$Int64 $tmp1941;
    org$pandalanguage$pandac$ClassDecl$Kind $match$549_251943;
    panda$core$Int64 $tmp1944;
    panda$core$Int64 $tmp1946;
    panda$core$Int64 $tmp1949;
    panda$core$Bit foundInit1955;
    panda$core$Bit $tmp1956;
    panda$core$Bit foundCleanup1957;
    panda$core$Bit $tmp1958;
    panda$collections$Iterator* Iter$564$91962 = NULL;
    panda$collections$Iterator* $tmp1963;
    panda$collections$Iterator* $tmp1964;
    org$pandalanguage$pandac$MethodDecl* m1980 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1981;
    panda$core$Object* $tmp1982;
    panda$core$Int64 $tmp1987;
    panda$core$Bit $tmp1989;
    panda$core$Int64 $tmp1995;
    panda$core$Bit $tmp1998;
    panda$core$Int64 $tmp1999;
    panda$core$Int64 $tmp2008;
    org$pandalanguage$pandac$MethodDecl* defaultInit2018 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2019;
    org$pandalanguage$pandac$MethodDecl* $tmp2020;
    org$pandalanguage$pandac$Annotations* $tmp2022;
    panda$core$Int64 $tmp2024;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2025;
    panda$core$Int64 $tmp2026;
    panda$collections$Array* $tmp2028;
    panda$collections$Array* $tmp2030;
    org$pandalanguage$pandac$Type* $tmp2032;
    panda$collections$ImmutableArray* $tmp2034;
    panda$core$Int64 $tmp2042;
    panda$core$Int64 $tmp2045;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2056 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2057;
    org$pandalanguage$pandac$MethodDecl* $tmp2058;
    org$pandalanguage$pandac$Annotations* $tmp2060;
    panda$core$Int64 $tmp2062;
    panda$core$Int64 $tmp2063;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2065;
    panda$core$Int64 $tmp2066;
    panda$collections$Array* $tmp2068;
    panda$collections$Array* $tmp2070;
    org$pandalanguage$pandac$Type* $tmp2072;
    panda$collections$ImmutableArray* $tmp2074;
    panda$core$Int64 $tmp2077;
    panda$core$Bit haveFields2079;
    panda$core$Bit $tmp2080;
    panda$collections$Iterator* Iter$594$132084 = NULL;
    panda$collections$Iterator* $tmp2085;
    panda$collections$Iterator* $tmp2086;
    org$pandalanguage$pandac$ChoiceEntry* e2102 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2103;
    panda$core$Object* $tmp2104;
    panda$core$Int64 $tmp2110;
    panda$core$Bit $tmp2112;
    org$pandalanguage$pandac$Type* $tmp2117;
    org$pandalanguage$pandac$Type* $tmp2118;
    org$pandalanguage$pandac$Type* $tmp2119;
    panda$core$Object* $tmp2121;
    panda$core$Object* $tmp2122;
    org$pandalanguage$pandac$ClassDecl* $returnValue2126;
    org$pandalanguage$pandac$ClassDecl* $tmp2127;
    int $tmp1707;
    {
        memset(&fullName1708, 0, sizeof(fullName1708));
        panda$core$Bit $tmp1710 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1709);
        if ($tmp1710.value) {
        {
            {
                $tmp1711 = fullName1708;
                panda$core$String* $tmp1717 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1716 = $tmp1717;
                panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1716, &$s1718);
                $tmp1715 = $tmp1719;
                panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1715, p_name);
                $tmp1714 = $tmp1720;
                panda$core$String* $tmp1722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1714, &$s1721);
                $tmp1713 = $tmp1722;
                $tmp1712 = $tmp1713;
                fullName1708 = $tmp1712;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1712));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1713));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1714));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1715));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1716));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1711));
            }
        }
        }
        else {
        {
            {
                $tmp1723 = fullName1708;
                $tmp1724 = p_name;
                fullName1708 = $tmp1724;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1724));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1723));
            }
        }
        }
        memset(&doccomment1725, 0, sizeof(doccomment1725));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1726 = doccomment1725;
                $tmp1727 = NULL;
                doccomment1725 = $tmp1727;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1727));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1726));
            }
        }
        }
        else {
        {
            int $tmp1730;
            {
                $tmp1732 = p_rawDoccomment;
                $match$494_131731 = $tmp1732;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1732));
                panda$core$Int64$init$builtin_int64(&$tmp1733, 38);
                panda$core$Bit $tmp1734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$494_131731->$rawValue, $tmp1733);
                if ($tmp1734.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1736 = ((org$pandalanguage$pandac$Position*) ((char*) $match$494_131731->$data + 0));
                    position1735 = *$tmp1736;
                    panda$core$String** $tmp1738 = ((panda$core$String**) ((char*) $match$494_131731->$data + 16));
                    text1737 = *$tmp1738;
                    {
                        $tmp1739 = doccomment1725;
                        $tmp1740 = text1737;
                        doccomment1725 = $tmp1740;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1740));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1739));
                    }
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1741, false);
                    if ($tmp1741.value) goto $l1742; else goto $l1743;
                    $l1743:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1744, (panda$core$Int64) { 498 });
                    abort();
                    $l1742:;
                }
                }
            }
            $tmp1730 = -1;
            goto $l1728;
            $l1728:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1732));
            switch ($tmp1730) {
                case -1: goto $l1745;
            }
            $l1745:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1749 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1748 = $tmp1749;
        $tmp1747 = $tmp1748;
        annotations1746 = $tmp1747;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1747));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1748));
        panda$collections$Array* $tmp1753 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1753);
        $tmp1752 = $tmp1753;
        $tmp1751 = $tmp1752;
        parameters1750 = $tmp1751;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1751));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1752));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1756;
                {
                    ITable* $tmp1760 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1760->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1760 = $tmp1760->next;
                    }
                    $fn1762 $tmp1761 = $tmp1760->methods[0];
                    panda$collections$Iterator* $tmp1763 = $tmp1761(((panda$collections$Iterable*) p_generics));
                    $tmp1759 = $tmp1763;
                    $tmp1758 = $tmp1759;
                    Iter$504$131757 = $tmp1758;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1758));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1759));
                    $l1764:;
                    ITable* $tmp1767 = Iter$504$131757->$class->itable;
                    while ($tmp1767->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1767 = $tmp1767->next;
                    }
                    $fn1769 $tmp1768 = $tmp1767->methods[0];
                    panda$core$Bit $tmp1770 = $tmp1768(Iter$504$131757);
                    panda$core$Bit $tmp1771 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1770);
                    bool $tmp1766 = $tmp1771.value;
                    if (!$tmp1766) goto $l1765;
                    {
                        int $tmp1774;
                        {
                            ITable* $tmp1778 = Iter$504$131757->$class->itable;
                            while ($tmp1778->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1778 = $tmp1778->next;
                            }
                            $fn1780 $tmp1779 = $tmp1778->methods[1];
                            panda$core$Object* $tmp1781 = $tmp1779(Iter$504$131757);
                            $tmp1777 = $tmp1781;
                            $tmp1776 = ((org$pandalanguage$pandac$ASTNode*) $tmp1777);
                            p1775 = $tmp1776;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1776));
                            panda$core$Panda$unref$panda$core$Object($tmp1777);
                            memset(&name1782, 0, sizeof(name1782));
                            memset(&bound1783, 0, sizeof(bound1783));
                            int $tmp1786;
                            {
                                $tmp1788 = p1775;
                                $match$507_171787 = $tmp1788;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1788));
                                panda$core$Int64$init$builtin_int64(&$tmp1789, 20);
                                panda$core$Bit $tmp1790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$507_171787->$rawValue, $tmp1789);
                                if ($tmp1790.value) {
                                {
                                    panda$core$String** $tmp1792 = ((panda$core$String**) ((char*) $match$507_171787->$data + 16));
                                    id1791 = *$tmp1792;
                                    {
                                        $tmp1793 = name1782;
                                        $tmp1794 = id1791;
                                        name1782 = $tmp1794;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1794));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1793));
                                    }
                                    {
                                        $tmp1795 = bound1783;
                                        org$pandalanguage$pandac$Type* $tmp1798 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1797 = $tmp1798;
                                        $tmp1796 = $tmp1797;
                                        bound1783 = $tmp1796;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1796));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1797));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1795));
                                    }
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1799, 44);
                                panda$core$Bit $tmp1800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$507_171787->$rawValue, $tmp1799);
                                if ($tmp1800.value) {
                                {
                                    panda$core$String** $tmp1802 = ((panda$core$String**) ((char*) $match$507_171787->$data + 16));
                                    id1801 = *$tmp1802;
                                    org$pandalanguage$pandac$ASTNode** $tmp1804 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$507_171787->$data + 24));
                                    type1803 = *$tmp1804;
                                    {
                                        $tmp1805 = name1782;
                                        $tmp1806 = id1801;
                                        name1782 = $tmp1806;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1806));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1805));
                                    }
                                    {
                                        $tmp1807 = bound1783;
                                        org$pandalanguage$pandac$Type* $tmp1810 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1803);
                                        $tmp1809 = $tmp1810;
                                        $tmp1808 = $tmp1809;
                                        bound1783 = $tmp1808;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1808));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1809));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1807));
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp1811, false);
                                    if ($tmp1811.value) goto $l1812; else goto $l1813;
                                    $l1813:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1814, (panda$core$Int64) { 515 });
                                    abort();
                                    $l1812:;
                                }
                                }
                                }
                            }
                            $tmp1786 = -1;
                            goto $l1784;
                            $l1784:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1788));
                            switch ($tmp1786) {
                                case -1: goto $l1815;
                            }
                            $l1815:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1817 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1819 = (($fn1818) p1775->$class->vtable[2])(p1775);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1817, $tmp1819, fullName1708, name1782, bound1783);
                            $tmp1816 = $tmp1817;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1750, ((panda$core$Object*) $tmp1816));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1816));
                        }
                        $tmp1774 = -1;
                        goto $l1772;
                        $l1772:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1783));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1782));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1775));
                        p1775 = NULL;
                        switch ($tmp1774) {
                            case -1: goto $l1820;
                        }
                        $l1820:;
                    }
                    goto $l1764;
                    $l1765:;
                }
                $tmp1756 = -1;
                goto $l1754;
                $l1754:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$504$131757));
                Iter$504$131757 = NULL;
                switch ($tmp1756) {
                    case -1: goto $l1821;
                }
                $l1821:;
            }
            panda$core$Int64$init$builtin_int64(&$tmp1822, 2);
            panda$core$Bit $tmp1823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1822);
            if ($tmp1823.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1824);
            }
            }
        }
        }
        panda$collections$Array* $tmp1828 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1828);
        $tmp1827 = $tmp1828;
        $tmp1826 = $tmp1827;
        supertypes1825 = $tmp1826;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1826));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1827));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1829, 2);
            panda$core$Bit $tmp1830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1829);
            if ($tmp1830.value) {
            {
                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s1831);
            }
            }
            {
                int $tmp1834;
                {
                    ITable* $tmp1838 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1838->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1838 = $tmp1838->next;
                    }
                    $fn1840 $tmp1839 = $tmp1838->methods[0];
                    panda$collections$Iterator* $tmp1841 = $tmp1839(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1837 = $tmp1841;
                    $tmp1836 = $tmp1837;
                    Iter$528$131835 = $tmp1836;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1836));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1837));
                    $l1842:;
                    ITable* $tmp1845 = Iter$528$131835->$class->itable;
                    while ($tmp1845->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1845 = $tmp1845->next;
                    }
                    $fn1847 $tmp1846 = $tmp1845->methods[0];
                    panda$core$Bit $tmp1848 = $tmp1846(Iter$528$131835);
                    panda$core$Bit $tmp1849 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1848);
                    bool $tmp1844 = $tmp1849.value;
                    if (!$tmp1844) goto $l1843;
                    {
                        int $tmp1852;
                        {
                            ITable* $tmp1856 = Iter$528$131835->$class->itable;
                            while ($tmp1856->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1856 = $tmp1856->next;
                            }
                            $fn1858 $tmp1857 = $tmp1856->methods[1];
                            panda$core$Object* $tmp1859 = $tmp1857(Iter$528$131835);
                            $tmp1855 = $tmp1859;
                            $tmp1854 = ((org$pandalanguage$pandac$ASTNode*) $tmp1855);
                            s1853 = $tmp1854;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1854));
                            panda$core$Panda$unref$panda$core$Object($tmp1855);
                            org$pandalanguage$pandac$Type* $tmp1861 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1853);
                            $tmp1860 = $tmp1861;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1825, ((panda$core$Object*) $tmp1860));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1860));
                        }
                        $tmp1852 = -1;
                        goto $l1850;
                        $l1850:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1853));
                        s1853 = NULL;
                        switch ($tmp1852) {
                            case -1: goto $l1862;
                        }
                        $l1862:;
                    }
                    goto $l1842;
                    $l1843:;
                }
                $tmp1834 = -1;
                goto $l1832;
                $l1832:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$528$131835));
                Iter$528$131835 = NULL;
                switch ($tmp1834) {
                    case -1: goto $l1863;
                }
                $l1863:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1867 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1870 = (($fn1869) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1868 = $tmp1870;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1867, p_source, p_position, p_aliases, doccomment1725, annotations1746, p_kind, fullName1708, ((panda$collections$ListView*) supertypes1825), parameters1750, ((org$pandalanguage$pandac$Compiler*) $tmp1868)->root);
        $tmp1866 = $tmp1867;
        $tmp1865 = $tmp1866;
        result1864 = $tmp1865;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1865));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1866));
        panda$core$Panda$unref$panda$core$Object($tmp1868);
        panda$core$Object* $tmp1873 = (($fn1872) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1871 = $tmp1873;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1871)->currentClass, ((panda$core$Object*) result1864));
        panda$core$Panda$unref$panda$core$Object($tmp1871);
        panda$core$Int64$init$builtin_int64(&$tmp1874, 2);
        panda$core$Bit $tmp1875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1874);
        if ($tmp1875.value) {
        {
            int $tmp1878;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1882 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1884 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1884);
                $tmp1883 = $tmp1884;
                panda$core$Int64$init$builtin_int64(&$tmp1886, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1885, $tmp1886);
                org$pandalanguage$pandac$Type* $tmp1889 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1888 = $tmp1889;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1882, result1864, result1864->position, NULL, $tmp1883, $tmp1885, &$s1887, $tmp1888, NULL);
                $tmp1881 = $tmp1882;
                $tmp1880 = $tmp1881;
                rawValue1879 = $tmp1880;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1880));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1881));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1888));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1883));
                panda$collections$Array$add$panda$collections$Array$T(result1864->fields, ((panda$core$Object*) rawValue1879));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1864->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1879));
                org$pandalanguage$pandac$FieldDecl* $tmp1893 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(120, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1895 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1895);
                $tmp1894 = $tmp1895;
                panda$core$Int64$init$builtin_int64(&$tmp1897, 1);
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1896, $tmp1897);
                org$pandalanguage$pandac$Type* $tmp1900 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1899 = $tmp1900;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1893, result1864, result1864->position, NULL, $tmp1894, $tmp1896, &$s1898, $tmp1899, NULL);
                $tmp1892 = $tmp1893;
                $tmp1891 = $tmp1892;
                data1890 = $tmp1891;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1891));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1892));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1899));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1894));
                panda$collections$Array$add$panda$collections$Array$T(result1864->fields, ((panda$core$Object*) data1890));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1864->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1890));
            }
            $tmp1878 = -1;
            goto $l1876;
            $l1876:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1890));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1879));
            rawValue1879 = NULL;
            data1890 = NULL;
            switch ($tmp1878) {
                case -1: goto $l1901;
            }
            $l1901:;
        }
        }
        {
            int $tmp1904;
            {
                ITable* $tmp1908 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1908->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1908 = $tmp1908->next;
                }
                $fn1910 $tmp1909 = $tmp1908->methods[0];
                panda$collections$Iterator* $tmp1911 = $tmp1909(((panda$collections$Iterable*) p_members));
                $tmp1907 = $tmp1911;
                $tmp1906 = $tmp1907;
                Iter$545$91905 = $tmp1906;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1906));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1907));
                $l1912:;
                ITable* $tmp1915 = Iter$545$91905->$class->itable;
                while ($tmp1915->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1915 = $tmp1915->next;
                }
                $fn1917 $tmp1916 = $tmp1915->methods[0];
                panda$core$Bit $tmp1918 = $tmp1916(Iter$545$91905);
                panda$core$Bit $tmp1919 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1918);
                bool $tmp1914 = $tmp1919.value;
                if (!$tmp1914) goto $l1913;
                {
                    int $tmp1922;
                    {
                        ITable* $tmp1926 = Iter$545$91905->$class->itable;
                        while ($tmp1926->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1926 = $tmp1926->next;
                        }
                        $fn1928 $tmp1927 = $tmp1926->methods[1];
                        panda$core$Object* $tmp1929 = $tmp1927(Iter$545$91905);
                        $tmp1925 = $tmp1929;
                        $tmp1924 = ((org$pandalanguage$pandac$ASTNode*) $tmp1925);
                        m1923 = $tmp1924;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1924));
                        panda$core$Panda$unref$panda$core$Object($tmp1925);
                        int $tmp1932;
                        {
                            $tmp1934 = m1923;
                            $match$546_131933 = $tmp1934;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1934));
                            panda$core$Int64$init$builtin_int64(&$tmp1935, 26);
                            panda$core$Bit $tmp1936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$546_131933->$rawValue, $tmp1935);
                            if ($tmp1936.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1938 = ((org$pandalanguage$pandac$Position*) ((char*) $match$546_131933->$data + 0));
                                mPosition1937 = *$tmp1938;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1940 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$546_131933->$data + 32));
                                methodKind1939 = *$tmp1940;
                                panda$core$Int64$init$builtin_int64(&$tmp1941, 2);
                                panda$core$Bit $tmp1942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1939.$rawValue, $tmp1941);
                                if ($tmp1942.value) {
                                {
                                    {
                                        $match$549_251943 = p_kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp1944, 0);
                                        panda$core$Bit $tmp1945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$549_251943.$rawValue, $tmp1944);
                                        if ($tmp1945.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp1946, 1);
                                        panda$core$Bit $tmp1947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$549_251943.$rawValue, $tmp1946);
                                        if ($tmp1947.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition1937, &$s1948);
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp1949, 2);
                                        panda$core$Bit $tmp1950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$549_251943.$rawValue, $tmp1949);
                                        if ($tmp1950.value) {
                                        {
                                            org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, mPosition1937, &$s1951);
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
                        $tmp1932 = -1;
                        goto $l1930;
                        $l1930:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1934));
                        switch ($tmp1932) {
                            case -1: goto $l1952;
                        }
                        $l1952:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1864, m1923);
                    }
                    $tmp1922 = -1;
                    goto $l1920;
                    $l1920:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1923));
                    m1923 = NULL;
                    switch ($tmp1922) {
                        case -1: goto $l1953;
                    }
                    $l1953:;
                }
                goto $l1912;
                $l1913:;
            }
            $tmp1904 = -1;
            goto $l1902;
            $l1902:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$545$91905));
            Iter$545$91905 = NULL;
            switch ($tmp1904) {
                case -1: goto $l1954;
            }
            $l1954:;
        }
        panda$core$Bit$init$builtin_bit(&$tmp1956, false);
        foundInit1955 = $tmp1956;
        panda$core$Bit$init$builtin_bit(&$tmp1958, false);
        foundCleanup1957 = $tmp1958;
        {
            int $tmp1961;
            {
                ITable* $tmp1965 = ((panda$collections$Iterable*) result1864->methods)->$class->itable;
                while ($tmp1965->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1965 = $tmp1965->next;
                }
                $fn1967 $tmp1966 = $tmp1965->methods[0];
                panda$collections$Iterator* $tmp1968 = $tmp1966(((panda$collections$Iterable*) result1864->methods));
                $tmp1964 = $tmp1968;
                $tmp1963 = $tmp1964;
                Iter$564$91962 = $tmp1963;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1963));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1964));
                $l1969:;
                ITable* $tmp1972 = Iter$564$91962->$class->itable;
                while ($tmp1972->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1972 = $tmp1972->next;
                }
                $fn1974 $tmp1973 = $tmp1972->methods[0];
                panda$core$Bit $tmp1975 = $tmp1973(Iter$564$91962);
                panda$core$Bit $tmp1976 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1975);
                bool $tmp1971 = $tmp1976.value;
                if (!$tmp1971) goto $l1970;
                {
                    int $tmp1979;
                    {
                        ITable* $tmp1983 = Iter$564$91962->$class->itable;
                        while ($tmp1983->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1983 = $tmp1983->next;
                        }
                        $fn1985 $tmp1984 = $tmp1983->methods[1];
                        panda$core$Object* $tmp1986 = $tmp1984(Iter$564$91962);
                        $tmp1982 = $tmp1986;
                        $tmp1981 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1982);
                        m1980 = $tmp1981;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1981));
                        panda$core$Panda$unref$panda$core$Object($tmp1982);
                        panda$core$Int64$init$builtin_int64(&$tmp1987, 2);
                        panda$core$Bit $tmp1988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1980->methodKind.$rawValue, $tmp1987);
                        if ($tmp1988.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp1989, true);
                            foundInit1955 = $tmp1989;
                        }
                        }
                        panda$core$Bit $tmp1992 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1980)->name, &$s1991);
                        bool $tmp1990 = $tmp1992.value;
                        if (!$tmp1990) goto $l1993;
                        panda$core$Int64 $tmp1994 = panda$collections$Array$get_count$R$panda$core$Int64(m1980->parameters);
                        panda$core$Int64$init$builtin_int64(&$tmp1995, 0);
                        panda$core$Bit $tmp1996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1994, $tmp1995);
                        $tmp1990 = $tmp1996.value;
                        $l1993:;
                        panda$core$Bit $tmp1997 = { $tmp1990 };
                        if ($tmp1997.value) {
                        {
                            panda$core$Bit$init$builtin_bit(&$tmp1998, true);
                            foundCleanup1957 = $tmp1998;
                            panda$core$Int64$init$builtin_int64(&$tmp1999, 2);
                            panda$core$Bit $tmp2000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp1999);
                            if ($tmp2000.value) {
                            {
                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2001);
                            }
                            }
                        }
                        }
                    }
                    $tmp1979 = -1;
                    goto $l1977;
                    $l1977:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1980));
                    m1980 = NULL;
                    switch ($tmp1979) {
                        case -1: goto $l2002;
                    }
                    $l2002:;
                }
                goto $l1969;
                $l1970:;
            }
            $tmp1961 = -1;
            goto $l1959;
            $l1959:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$564$91962));
            Iter$564$91962 = NULL;
            switch ($tmp1961) {
                case -1: goto $l2003;
            }
            $l2003:;
        }
        panda$core$Bit $tmp2006 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1955);
        bool $tmp2005 = $tmp2006.value;
        if (!$tmp2005) goto $l2007;
        panda$core$Int64$init$builtin_int64(&$tmp2008, 0);
        panda$core$Bit $tmp2009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2008);
        $tmp2005 = $tmp2009.value;
        $l2007:;
        panda$core$Bit $tmp2010 = { $tmp2005 };
        bool $tmp2004 = $tmp2010.value;
        if (!$tmp2004) goto $l2011;
        panda$core$Bit $tmp2013 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1864->name, &$s2012);
        $tmp2004 = $tmp2013.value;
        $l2011:;
        panda$core$Bit $tmp2014 = { $tmp2004 };
        if ($tmp2014.value) {
        {
            int $tmp2017;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2021 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2023 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2024, 8192);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2023, $tmp2024);
                $tmp2022 = $tmp2023;
                panda$core$Int64$init$builtin_int64(&$tmp2026, 2);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2025, $tmp2026);
                panda$collections$Array* $tmp2029 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2029);
                $tmp2028 = $tmp2029;
                panda$collections$Array* $tmp2031 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2031);
                $tmp2030 = $tmp2031;
                org$pandalanguage$pandac$Type* $tmp2033 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2032 = $tmp2033;
                panda$collections$ImmutableArray* $tmp2035 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2035);
                $tmp2034 = $tmp2035;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2021, result1864, p_position, NULL, $tmp2022, $tmp2025, &$s2027, $tmp2028, $tmp2030, $tmp2032, $tmp2034);
                $tmp2020 = $tmp2021;
                $tmp2019 = $tmp2020;
                defaultInit2018 = $tmp2019;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2019));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2020));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2034));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2032));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2030));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2028));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2022));
                panda$collections$Array$add$panda$collections$Array$T(result1864->methods, ((panda$core$Object*) defaultInit2018));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1864->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2018));
            }
            $tmp2017 = -1;
            goto $l2015;
            $l2015:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2018));
            defaultInit2018 = NULL;
            switch ($tmp2017) {
                case -1: goto $l2036;
            }
            $l2036:;
        }
        }
        panda$core$Bit $tmp2039 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1957);
        bool $tmp2038 = $tmp2039.value;
        if (!$tmp2038) goto $l2040;
        panda$core$Int64$init$builtin_int64(&$tmp2042, 0);
        panda$core$Bit $tmp2043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2042);
        bool $tmp2041 = $tmp2043.value;
        if ($tmp2041) goto $l2044;
        panda$core$Int64$init$builtin_int64(&$tmp2045, 2);
        panda$core$Bit $tmp2046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2045);
        $tmp2041 = $tmp2046.value;
        $l2044:;
        panda$core$Bit $tmp2047 = { $tmp2041 };
        $tmp2038 = $tmp2047.value;
        $l2040:;
        panda$core$Bit $tmp2048 = { $tmp2038 };
        bool $tmp2037 = $tmp2048.value;
        if (!$tmp2037) goto $l2049;
        panda$core$Bit $tmp2051 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1864->name, &$s2050);
        $tmp2037 = $tmp2051.value;
        $l2049:;
        panda$core$Bit $tmp2052 = { $tmp2037 };
        if ($tmp2052.value) {
        {
            int $tmp2055;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp2059 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp2061 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64$init$builtin_int64(&$tmp2062, 32);
                panda$core$Int64$init$builtin_int64(&$tmp2063, 8192);
                panda$core$Int64 $tmp2064 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2062, $tmp2063);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2061, $tmp2064);
                $tmp2060 = $tmp2061;
                panda$core$Int64$init$builtin_int64(&$tmp2066, 0);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2065, $tmp2066);
                panda$collections$Array* $tmp2069 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2069);
                $tmp2068 = $tmp2069;
                panda$collections$Array* $tmp2071 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2071);
                $tmp2070 = $tmp2071;
                org$pandalanguage$pandac$Type* $tmp2073 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp2072 = $tmp2073;
                panda$collections$ImmutableArray* $tmp2075 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp2075);
                $tmp2074 = $tmp2075;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2059, result1864, p_position, NULL, $tmp2060, $tmp2065, &$s2067, $tmp2068, $tmp2070, $tmp2072, $tmp2074);
                $tmp2058 = $tmp2059;
                $tmp2057 = $tmp2058;
                defaultCleanup2056 = $tmp2057;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2057));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2058));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2074));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2072));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2070));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2068));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2060));
                panda$collections$Array$add$panda$collections$Array$T(result1864->methods, ((panda$core$Object*) defaultCleanup2056));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1864->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2056));
            }
            $tmp2055 = -1;
            goto $l2053;
            $l2053:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2056));
            defaultCleanup2056 = NULL;
            switch ($tmp2055) {
                case -1: goto $l2076;
            }
            $l2076:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2077, 2);
        panda$core$Bit $tmp2078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, $tmp2077);
        if ($tmp2078.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2080, false);
            haveFields2079 = $tmp2080;
            {
                int $tmp2083;
                {
                    ITable* $tmp2087 = ((panda$collections$Iterable*) result1864->choiceEntries)->$class->itable;
                    while ($tmp2087->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2087 = $tmp2087->next;
                    }
                    $fn2089 $tmp2088 = $tmp2087->methods[0];
                    panda$collections$Iterator* $tmp2090 = $tmp2088(((panda$collections$Iterable*) result1864->choiceEntries));
                    $tmp2086 = $tmp2090;
                    $tmp2085 = $tmp2086;
                    Iter$594$132084 = $tmp2085;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2085));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2086));
                    $l2091:;
                    ITable* $tmp2094 = Iter$594$132084->$class->itable;
                    while ($tmp2094->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2094 = $tmp2094->next;
                    }
                    $fn2096 $tmp2095 = $tmp2094->methods[0];
                    panda$core$Bit $tmp2097 = $tmp2095(Iter$594$132084);
                    panda$core$Bit $tmp2098 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2097);
                    bool $tmp2093 = $tmp2098.value;
                    if (!$tmp2093) goto $l2092;
                    {
                        int $tmp2101;
                        {
                            ITable* $tmp2105 = Iter$594$132084->$class->itable;
                            while ($tmp2105->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2105 = $tmp2105->next;
                            }
                            $fn2107 $tmp2106 = $tmp2105->methods[1];
                            panda$core$Object* $tmp2108 = $tmp2106(Iter$594$132084);
                            $tmp2104 = $tmp2108;
                            $tmp2103 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp2104);
                            e2102 = $tmp2103;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2103));
                            panda$core$Panda$unref$panda$core$Object($tmp2104);
                            panda$core$Int64 $tmp2109 = panda$collections$Array$get_count$R$panda$core$Int64(e2102->fields);
                            panda$core$Int64$init$builtin_int64(&$tmp2110, 0);
                            panda$core$Bit $tmp2111 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2109, $tmp2110);
                            if ($tmp2111.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp2112, true);
                                haveFields2079 = $tmp2112;
                                $tmp2101 = 0;
                                goto $l2099;
                                $l2113:;
                                goto $l2092;
                            }
                            }
                        }
                        $tmp2101 = -1;
                        goto $l2099;
                        $l2099:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2102));
                        e2102 = NULL;
                        switch ($tmp2101) {
                            case -1: goto $l2114;
                            case 0: goto $l2113;
                        }
                        $l2114:;
                    }
                    goto $l2091;
                    $l2092:;
                }
                $tmp2083 = -1;
                goto $l2081;
                $l2081:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$594$132084));
                Iter$594$132084 = NULL;
                switch ($tmp2083) {
                    case -1: goto $l2115;
                }
                $l2115:;
            }
            panda$core$Bit $tmp2116 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields2079);
            if ($tmp2116.value) {
            {
                {
                    $tmp2117 = result1864->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp2120 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp2119 = $tmp2120;
                    $tmp2118 = $tmp2119;
                    result1864->rawSuper = $tmp2118;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2118));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2119));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2117));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp2124 = (($fn2123) self->compiler->$class->vtable[2])(self->compiler);
        $tmp2122 = $tmp2124;
        panda$core$Object* $tmp2125 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2122)->currentClass);
        $tmp2121 = $tmp2125;
        panda$core$Panda$unref$panda$core$Object($tmp2121);
        panda$core$Panda$unref$panda$core$Object($tmp2122);
        $tmp2127 = result1864;
        $returnValue2126 = $tmp2127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2127));
        $tmp1707 = 0;
        goto $l1705;
        $l2128:;
        return $returnValue2126;
    }
    $l1705:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1864));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1825));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1750));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1746));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1725));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1708));
    annotations1746 = NULL;
    parameters1750 = NULL;
    supertypes1825 = NULL;
    result1864 = NULL;
    switch ($tmp1707) {
        case 0: goto $l2128;
    }
    $l2130:;
    abort();
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$610$92134 = NULL;
    panda$collections$Iterator* $tmp2135;
    panda$collections$Iterator* $tmp2136;
    org$pandalanguage$pandac$ClassDecl* inner2152 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2153;
    panda$core$Object* $tmp2154;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp2133;
        {
            ITable* $tmp2137 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp2137->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2137 = $tmp2137->next;
            }
            $fn2139 $tmp2138 = $tmp2137->methods[0];
            panda$collections$Iterator* $tmp2140 = $tmp2138(((panda$collections$Iterable*) p_cl->classes));
            $tmp2136 = $tmp2140;
            $tmp2135 = $tmp2136;
            Iter$610$92134 = $tmp2135;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2135));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2136));
            $l2141:;
            ITable* $tmp2144 = Iter$610$92134->$class->itable;
            while ($tmp2144->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2144 = $tmp2144->next;
            }
            $fn2146 $tmp2145 = $tmp2144->methods[0];
            panda$core$Bit $tmp2147 = $tmp2145(Iter$610$92134);
            panda$core$Bit $tmp2148 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2147);
            bool $tmp2143 = $tmp2148.value;
            if (!$tmp2143) goto $l2142;
            {
                int $tmp2151;
                {
                    ITable* $tmp2155 = Iter$610$92134->$class->itable;
                    while ($tmp2155->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2155 = $tmp2155->next;
                    }
                    $fn2157 $tmp2156 = $tmp2155->methods[1];
                    panda$core$Object* $tmp2158 = $tmp2156(Iter$610$92134);
                    $tmp2154 = $tmp2158;
                    $tmp2153 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2154);
                    inner2152 = $tmp2153;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2153));
                    panda$core$Panda$unref$panda$core$Object($tmp2154);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner2152, p_arr);
                }
                $tmp2151 = -1;
                goto $l2149;
                $l2149:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner2152));
                inner2152 = NULL;
                switch ($tmp2151) {
                    case -1: goto $l2159;
                }
                $l2159:;
            }
            goto $l2141;
            $l2142:;
        }
        $tmp2133 = -1;
        goto $l2131;
        $l2131:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$610$92134));
        Iter$610$92134 = NULL;
        switch ($tmp2133) {
            case -1: goto $l2160;
        }
        $l2160:;
    }
}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$collections$List* p_classes) {
    org$pandalanguage$pandac$ClassDecl* $tmp2164;
    org$pandalanguage$pandac$ClassDecl* $tmp2165;
    org$pandalanguage$pandac$ClassDecl* $tmp2166;
    org$pandalanguage$pandac$Position $tmp2168;
    org$pandalanguage$pandac$Annotations* $tmp2169;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2171;
    panda$core$Int64 $tmp2172;
    panda$collections$Array* $tmp2174;
    panda$collections$Array* $tmp2176;
    panda$core$Object* $tmp2178;
    org$pandalanguage$pandac$MethodDecl* defaultInit2184 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2185;
    org$pandalanguage$pandac$MethodDecl* $tmp2186;
    org$pandalanguage$pandac$Position $tmp2188;
    org$pandalanguage$pandac$Annotations* $tmp2189;
    panda$core$Int64 $tmp2191;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2192;
    panda$core$Int64 $tmp2193;
    panda$collections$Array* $tmp2195;
    panda$collections$Array* $tmp2197;
    org$pandalanguage$pandac$Type* $tmp2199;
    panda$collections$ImmutableArray* $tmp2201;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup2203 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2204;
    org$pandalanguage$pandac$MethodDecl* $tmp2205;
    org$pandalanguage$pandac$Position $tmp2207;
    org$pandalanguage$pandac$Annotations* $tmp2208;
    panda$core$Int64 $tmp2210;
    panda$core$Int64 $tmp2211;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2213;
    panda$core$Int64 $tmp2214;
    panda$collections$Array* $tmp2216;
    panda$collections$Array* $tmp2218;
    org$pandalanguage$pandac$Type* $tmp2220;
    panda$collections$ImmutableArray* $tmp2222;
    if (((panda$core$Bit) { self->bareCodeClass == NULL }).value) {
    {
        int $tmp2163;
        {
            {
                $tmp2164 = self->bareCodeClass;
                org$pandalanguage$pandac$ClassDecl* $tmp2167 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
                org$pandalanguage$pandac$Position$init(&$tmp2168);
                org$pandalanguage$pandac$Annotations* $tmp2170 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp2170);
                $tmp2169 = $tmp2170;
                panda$core$Int64$init$builtin_int64(&$tmp2172, 0);
                org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2171, $tmp2172);
                panda$collections$Array* $tmp2175 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2175);
                $tmp2174 = $tmp2175;
                panda$collections$Array* $tmp2177 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2177);
                $tmp2176 = $tmp2177;
                panda$core$Object* $tmp2180 = (($fn2179) self->compiler->$class->vtable[2])(self->compiler);
                $tmp2178 = $tmp2180;
                org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2167, p_source, $tmp2168, p_aliases, NULL, $tmp2169, $tmp2171, &$s2173, ((panda$collections$ListView*) $tmp2174), $tmp2176, ((org$pandalanguage$pandac$Compiler*) $tmp2178)->root);
                $tmp2166 = $tmp2167;
                $tmp2165 = $tmp2166;
                self->bareCodeClass = $tmp2165;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2165));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2166));
                panda$core$Panda$unref$panda$core$Object($tmp2178);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2176));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2174));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2169));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2164));
            }
            ITable* $tmp2181 = ((panda$collections$CollectionWriter*) p_classes)->$class->itable;
            while ($tmp2181->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
                $tmp2181 = $tmp2181->next;
            }
            $fn2183 $tmp2182 = $tmp2181->methods[0];
            $tmp2182(((panda$collections$CollectionWriter*) p_classes), ((panda$core$Object*) self->bareCodeClass));
            org$pandalanguage$pandac$MethodDecl* $tmp2187 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2188);
            org$pandalanguage$pandac$Annotations* $tmp2190 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2191, 8192);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2190, $tmp2191);
            $tmp2189 = $tmp2190;
            panda$core$Int64$init$builtin_int64(&$tmp2193, 2);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2192, $tmp2193);
            panda$collections$Array* $tmp2196 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2196);
            $tmp2195 = $tmp2196;
            panda$collections$Array* $tmp2198 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2198);
            $tmp2197 = $tmp2198;
            org$pandalanguage$pandac$Type* $tmp2200 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2199 = $tmp2200;
            panda$collections$ImmutableArray* $tmp2202 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2202);
            $tmp2201 = $tmp2202;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2187, self->bareCodeClass, $tmp2188, NULL, $tmp2189, $tmp2192, &$s2194, $tmp2195, $tmp2197, $tmp2199, $tmp2201);
            $tmp2186 = $tmp2187;
            $tmp2185 = $tmp2186;
            defaultInit2184 = $tmp2185;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2185));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2186));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2201));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2199));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2197));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2195));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2189));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultInit2184));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit2184));
            org$pandalanguage$pandac$MethodDecl* $tmp2206 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
            org$pandalanguage$pandac$Position$init(&$tmp2207);
            org$pandalanguage$pandac$Annotations* $tmp2209 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
            panda$core$Int64$init$builtin_int64(&$tmp2210, 32);
            panda$core$Int64$init$builtin_int64(&$tmp2211, 8192);
            panda$core$Int64 $tmp2212 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2210, $tmp2211);
            org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2209, $tmp2212);
            $tmp2208 = $tmp2209;
            panda$core$Int64$init$builtin_int64(&$tmp2214, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2213, $tmp2214);
            panda$collections$Array* $tmp2217 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2217);
            $tmp2216 = $tmp2217;
            panda$collections$Array* $tmp2219 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2219);
            $tmp2218 = $tmp2219;
            org$pandalanguage$pandac$Type* $tmp2221 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            $tmp2220 = $tmp2221;
            panda$collections$ImmutableArray* $tmp2223 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2223);
            $tmp2222 = $tmp2223;
            org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2206, self->bareCodeClass, $tmp2207, NULL, $tmp2208, $tmp2213, &$s2215, $tmp2216, $tmp2218, $tmp2220, $tmp2222);
            $tmp2205 = $tmp2206;
            $tmp2204 = $tmp2205;
            defaultCleanup2203 = $tmp2204;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2204));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2205));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2222));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2220));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2218));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2216));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2208));
            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) defaultCleanup2203));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup2203));
        }
        $tmp2163 = -1;
        goto $l2161;
        $l2161:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup2203));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit2184));
        defaultInit2184 = NULL;
        defaultCleanup2203 = NULL;
        switch ($tmp2163) {
            case -1: goto $l2224;
        }
        $l2224:;
    }
    }
}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp2229;
    if (((panda$core$Bit) { self->source != NULL }).value) goto $l2225; else goto $l2226;
    $l2226:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2227, (panda$core$Int64) { 638 }, &$s2228);
    abort();
    $l2225:;
    panda$core$Object* $tmp2231 = (($fn2230) self->compiler->$class->vtable[2])(self->compiler);
    $tmp2229 = $tmp2231;
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2229), self->source, p_position, p_msg);
    panda$core$Panda$unref$panda$core$Object($tmp2229);
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$io$File* $tmp2232;
    panda$io$File* $tmp2233;
    org$pandalanguage$pandac$ASTNode* $match$644_92237 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2238;
    panda$core$Int64 $tmp2239;
    panda$collections$ImmutableArray* entries2241 = NULL;
    panda$collections$Array* result2246 = NULL;
    panda$collections$Array* $tmp2247;
    panda$collections$Array* $tmp2248;
    panda$core$String* currentPackage2250 = NULL;
    panda$core$String* $tmp2251;
    panda$collections$HashMap* aliases2253 = NULL;
    panda$collections$HashMap* $tmp2254;
    panda$collections$HashMap* $tmp2255;
    panda$collections$Iterator* Iter$649$172260 = NULL;
    panda$collections$Iterator* $tmp2261;
    panda$collections$Iterator* $tmp2262;
    org$pandalanguage$pandac$ASTNode* e2278 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2279;
    panda$core$Object* $tmp2280;
    org$pandalanguage$pandac$ASTNode* $match$650_212288 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2289;
    panda$core$Int64 $tmp2290;
    panda$core$String* name2292 = NULL;
    panda$core$String* $tmp2294;
    panda$core$String* $tmp2295;
    panda$core$Int64 $tmp2296;
    panda$core$String* fullName2298 = NULL;
    panda$core$String$Index$nullable idx2303;
    panda$core$String* alias2306 = NULL;
    panda$core$String* $tmp2307;
    panda$core$String* $tmp2308;
    panda$core$String* $tmp2309;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2310;
    panda$core$Bit $tmp2312;
    panda$core$String* $tmp2314;
    panda$core$String* $tmp2315;
    panda$core$Int64 $tmp2317;
    org$pandalanguage$pandac$Position position2319;
    org$pandalanguage$pandac$ASTNode* dc2321 = NULL;
    panda$collections$ImmutableArray* annotations2323 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind2325;
    panda$core$String* name2327 = NULL;
    panda$collections$ImmutableArray* generics2329 = NULL;
    panda$collections$ImmutableArray* supertypes2331 = NULL;
    panda$collections$ImmutableArray* members2333 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl2338 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp2339;
    org$pandalanguage$pandac$ClassDecl* $tmp2340;
    panda$core$Int64 $tmp2343;
    org$pandalanguage$pandac$Position position2345;
    org$pandalanguage$pandac$ASTNode* dc2347 = NULL;
    panda$collections$ImmutableArray* annotations2349 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind2351;
    panda$core$String* rawName2353 = NULL;
    panda$collections$ImmutableArray* generics2355 = NULL;
    panda$collections$ImmutableArray* parameters2357 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType2359 = NULL;
    panda$collections$ImmutableArray* statements2361 = NULL;
    panda$core$String* name2366 = NULL;
    panda$core$String* $tmp2372;
    panda$core$String* $tmp2373;
    panda$collections$Array* mainParameters2375 = NULL;
    panda$collections$Array* $tmp2376;
    panda$collections$Array* $tmp2377;
    panda$collections$Array* mainStatements2379 = NULL;
    panda$collections$Array* $tmp2380;
    panda$collections$Array* $tmp2381;
    panda$collections$Array* mainArguments2383 = NULL;
    panda$collections$Array* $tmp2384;
    panda$collections$Array* $tmp2385;
    panda$collections$Iterator* Iter$679$332390 = NULL;
    panda$collections$Iterator* $tmp2391;
    panda$collections$Iterator* $tmp2392;
    org$pandalanguage$pandac$ASTNode* p2408 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2409;
    panda$core$Object* $tmp2410;
    org$pandalanguage$pandac$ASTNode* $match$680_372418 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2419;
    panda$core$Int64 $tmp2420;
    org$pandalanguage$pandac$Position position2422;
    panda$core$String* name2424 = NULL;
    org$pandalanguage$pandac$ASTNode* type2426 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2428;
    org$pandalanguage$pandac$Type* $tmp2430;
    org$pandalanguage$pandac$ASTNode* $tmp2432;
    panda$core$Int64 $tmp2434;
    panda$core$Bit $tmp2435;
    org$pandalanguage$pandac$ASTNode* bareConstruct2442 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2443;
    org$pandalanguage$pandac$ASTNode* $tmp2444;
    panda$core$Int64 $tmp2446;
    org$pandalanguage$pandac$ASTNode* $tmp2447;
    panda$core$Int64 $tmp2449;
    panda$collections$ImmutableArray* $tmp2451;
    org$pandalanguage$pandac$ASTNode* $tmp2453;
    panda$core$Int64 $tmp2455;
    org$pandalanguage$pandac$ASTNode* $tmp2456;
    panda$core$Int64 $tmp2458;
    panda$collections$ImmutableArray* $tmp2459;
    org$pandalanguage$pandac$Type* returnType2461 = NULL;
    org$pandalanguage$pandac$Type* $tmp2462;
    org$pandalanguage$pandac$Type* $tmp2463;
    org$pandalanguage$pandac$Type* $tmp2464;
    org$pandalanguage$pandac$Type* $tmp2466;
    org$pandalanguage$pandac$Type* $tmp2467;
    org$pandalanguage$pandac$Type* $tmp2468;
    org$pandalanguage$pandac$MethodDecl* bareMain2470 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2471;
    org$pandalanguage$pandac$MethodDecl* $tmp2472;
    org$pandalanguage$pandac$Position $tmp2474;
    org$pandalanguage$pandac$Annotations* $tmp2475;
    panda$core$Int64 $tmp2477;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2478;
    panda$core$Int64 $tmp2479;
    panda$collections$Array* $tmp2481;
    panda$collections$ImmutableArray* $tmp2483;
    panda$core$String* $tmp2486;
    panda$core$String* $tmp2487;
    panda$core$Object* $tmp2488;
    org$pandalanguage$pandac$MethodDecl* m2491 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2492;
    org$pandalanguage$pandac$MethodDecl* $tmp2493;
    panda$core$Int64 $tmp2497;
    panda$core$Object* $tmp2500;
    panda$core$Int64 $tmp2504;
    org$pandalanguage$pandac$Position position2506;
    org$pandalanguage$pandac$ASTNode* dc2508 = NULL;
    panda$collections$ImmutableArray* annotations2510 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl2512 = NULL;
    panda$core$Int64 old2514;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2516;
    panda$core$Bit $tmp2518;
    org$pandalanguage$pandac$FieldDecl* f2535 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp2536;
    panda$core$Object* $tmp2537;
    panda$core$Int64 $tmp2540;
    panda$core$Bit $tmp2553;
    panda$core$String* $tmp2557;
    panda$core$String* $tmp2558;
    panda$core$String* $tmp2559;
    panda$core$String* $tmp2560;
    panda$core$String* $tmp2561;
    panda$core$String* $tmp2562;
    panda$core$Object* $tmp2567;
    panda$core$Object* $tmp2572;
    panda$io$File* $tmp2582;
    panda$io$File* $tmp2583;
    panda$collections$ListView* $returnValue2584;
    panda$collections$ListView* $tmp2585;
    panda$core$Bit $tmp2590;
    {
        $tmp2232 = self->source;
        $tmp2233 = p_source;
        self->source = $tmp2233;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2233));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2232));
    }
    int $tmp2236;
    {
        $tmp2238 = p_file;
        $match$644_92237 = $tmp2238;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2238));
        panda$core$Int64$init$builtin_int64(&$tmp2239, 17);
        panda$core$Bit $tmp2240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$644_92237->$rawValue, $tmp2239);
        if ($tmp2240.value) {
        {
            panda$collections$ImmutableArray** $tmp2242 = ((panda$collections$ImmutableArray**) ((char*) $match$644_92237->$data + 0));
            entries2241 = *$tmp2242;
            int $tmp2245;
            {
                panda$collections$Array* $tmp2249 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2249);
                $tmp2248 = $tmp2249;
                $tmp2247 = $tmp2248;
                result2246 = $tmp2247;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2247));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2248));
                $tmp2251 = &$s2252;
                currentPackage2250 = $tmp2251;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2251));
                panda$collections$HashMap* $tmp2256 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp2256);
                $tmp2255 = $tmp2256;
                $tmp2254 = $tmp2255;
                aliases2253 = $tmp2254;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2254));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2255));
                {
                    int $tmp2259;
                    {
                        ITable* $tmp2263 = ((panda$collections$Iterable*) entries2241)->$class->itable;
                        while ($tmp2263->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2263 = $tmp2263->next;
                        }
                        $fn2265 $tmp2264 = $tmp2263->methods[0];
                        panda$collections$Iterator* $tmp2266 = $tmp2264(((panda$collections$Iterable*) entries2241));
                        $tmp2262 = $tmp2266;
                        $tmp2261 = $tmp2262;
                        Iter$649$172260 = $tmp2261;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2261));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
                        $l2267:;
                        ITable* $tmp2270 = Iter$649$172260->$class->itable;
                        while ($tmp2270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2270 = $tmp2270->next;
                        }
                        $fn2272 $tmp2271 = $tmp2270->methods[0];
                        panda$core$Bit $tmp2273 = $tmp2271(Iter$649$172260);
                        panda$core$Bit $tmp2274 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2273);
                        bool $tmp2269 = $tmp2274.value;
                        if (!$tmp2269) goto $l2268;
                        {
                            int $tmp2277;
                            {
                                ITable* $tmp2281 = Iter$649$172260->$class->itable;
                                while ($tmp2281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2281 = $tmp2281->next;
                                }
                                $fn2283 $tmp2282 = $tmp2281->methods[1];
                                panda$core$Object* $tmp2284 = $tmp2282(Iter$649$172260);
                                $tmp2280 = $tmp2284;
                                $tmp2279 = ((org$pandalanguage$pandac$ASTNode*) $tmp2280);
                                e2278 = $tmp2279;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2279));
                                panda$core$Panda$unref$panda$core$Object($tmp2280);
                                int $tmp2287;
                                {
                                    $tmp2289 = e2278;
                                    $match$650_212288 = $tmp2289;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2289));
                                    panda$core$Int64$init$builtin_int64(&$tmp2290, 30);
                                    panda$core$Bit $tmp2291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$650_212288->$rawValue, $tmp2290);
                                    if ($tmp2291.value) {
                                    {
                                        panda$core$String** $tmp2293 = ((panda$core$String**) ((char*) $match$650_212288->$data + 16));
                                        name2292 = *$tmp2293;
                                        {
                                            $tmp2294 = currentPackage2250;
                                            $tmp2295 = name2292;
                                            currentPackage2250 = $tmp2295;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2295));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2294));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2296, 46);
                                    panda$core$Bit $tmp2297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$650_212288->$rawValue, $tmp2296);
                                    if ($tmp2297.value) {
                                    {
                                        panda$core$String** $tmp2299 = ((panda$core$String**) ((char*) $match$650_212288->$data + 16));
                                        fullName2298 = *$tmp2299;
                                        int $tmp2302;
                                        {
                                            panda$core$String$Index$nullable $tmp2305 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName2298, &$s2304);
                                            idx2303 = $tmp2305;
                                            memset(&alias2306, 0, sizeof(alias2306));
                                            if (((panda$core$Bit) { idx2303.nonnull }).value) {
                                            {
                                                {
                                                    $tmp2307 = alias2306;
                                                    panda$core$String$Index $tmp2311 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName2298, ((panda$core$String$Index) idx2303.value));
                                                    panda$core$Bit$init$builtin_bit(&$tmp2312, false);
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp2310, ((panda$core$String$Index$nullable) { $tmp2311, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2312);
                                                    panda$core$String* $tmp2313 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName2298, $tmp2310);
                                                    $tmp2309 = $tmp2313;
                                                    $tmp2308 = $tmp2309;
                                                    alias2306 = $tmp2308;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2308));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2309));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2307));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2314 = alias2306;
                                                    $tmp2315 = fullName2298;
                                                    alias2306 = $tmp2315;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2315));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2314));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases2253, ((panda$collections$Key*) alias2306), ((panda$core$Object*) fullName2298));
                                        }
                                        $tmp2302 = -1;
                                        goto $l2300;
                                        $l2300:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias2306));
                                        switch ($tmp2302) {
                                            case -1: goto $l2316;
                                        }
                                        $l2316:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2317, 11);
                                    panda$core$Bit $tmp2318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$650_212288->$rawValue, $tmp2317);
                                    if ($tmp2318.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2320 = ((org$pandalanguage$pandac$Position*) ((char*) $match$650_212288->$data + 0));
                                        position2319 = *$tmp2320;
                                        org$pandalanguage$pandac$ASTNode** $tmp2322 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$650_212288->$data + 16));
                                        dc2321 = *$tmp2322;
                                        panda$collections$ImmutableArray** $tmp2324 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212288->$data + 24));
                                        annotations2323 = *$tmp2324;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp2326 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$650_212288->$data + 32));
                                        kind2325 = *$tmp2326;
                                        panda$core$String** $tmp2328 = ((panda$core$String**) ((char*) $match$650_212288->$data + 40));
                                        name2327 = *$tmp2328;
                                        panda$collections$ImmutableArray** $tmp2330 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212288->$data + 48));
                                        generics2329 = *$tmp2330;
                                        panda$collections$ImmutableArray** $tmp2332 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212288->$data + 56));
                                        supertypes2331 = *$tmp2332;
                                        panda$collections$ImmutableArray** $tmp2334 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212288->$data + 64));
                                        members2333 = *$tmp2334;
                                        int $tmp2337;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp2341 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases2253), currentPackage2250, position2319, dc2321, annotations2323, kind2325, name2327, generics2329, supertypes2331, members2333);
                                            $tmp2340 = $tmp2341;
                                            $tmp2339 = $tmp2340;
                                            cl2338 = $tmp2339;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2339));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2340));
                                            if (((panda$core$Bit) { cl2338 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl2338, result2246);
                                            }
                                            }
                                        }
                                        $tmp2337 = -1;
                                        goto $l2335;
                                        $l2335:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl2338));
                                        cl2338 = NULL;
                                        switch ($tmp2337) {
                                            case -1: goto $l2342;
                                        }
                                        $l2342:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2343, 26);
                                    panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$650_212288->$rawValue, $tmp2343);
                                    if ($tmp2344.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2346 = ((org$pandalanguage$pandac$Position*) ((char*) $match$650_212288->$data + 0));
                                        position2345 = *$tmp2346;
                                        org$pandalanguage$pandac$ASTNode** $tmp2348 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$650_212288->$data + 16));
                                        dc2347 = *$tmp2348;
                                        panda$collections$ImmutableArray** $tmp2350 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212288->$data + 24));
                                        annotations2349 = *$tmp2350;
                                        org$pandalanguage$pandac$MethodDecl$Kind* $tmp2352 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$650_212288->$data + 32));
                                        kind2351 = *$tmp2352;
                                        panda$core$String** $tmp2354 = ((panda$core$String**) ((char*) $match$650_212288->$data + 40));
                                        rawName2353 = *$tmp2354;
                                        panda$collections$ImmutableArray** $tmp2356 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212288->$data + 48));
                                        generics2355 = *$tmp2356;
                                        panda$collections$ImmutableArray** $tmp2358 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212288->$data + 56));
                                        parameters2357 = *$tmp2358;
                                        org$pandalanguage$pandac$ASTNode** $tmp2360 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$650_212288->$data + 64));
                                        rawReturnType2359 = *$tmp2360;
                                        panda$collections$ImmutableArray** $tmp2362 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212288->$data + 72));
                                        statements2361 = *$tmp2362;
                                        int $tmp2365;
                                        {
                                            org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2253), ((panda$collections$List*) result2246));
                                            memset(&name2366, 0, sizeof(name2366));
                                            panda$core$Bit $tmp2368 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(rawName2353, &$s2367);
                                            if ($tmp2368.value) {
                                            {
                                                int $tmp2371;
                                                {
                                                    {
                                                        $tmp2372 = name2366;
                                                        $tmp2373 = &$s2374;
                                                        name2366 = $tmp2373;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2373));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2372));
                                                    }
                                                    panda$collections$Array* $tmp2378 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2378);
                                                    $tmp2377 = $tmp2378;
                                                    $tmp2376 = $tmp2377;
                                                    mainParameters2375 = $tmp2376;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2376));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2377));
                                                    panda$collections$Array* $tmp2382 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2382);
                                                    $tmp2381 = $tmp2382;
                                                    $tmp2380 = $tmp2381;
                                                    mainStatements2379 = $tmp2380;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2380));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2381));
                                                    panda$collections$Array* $tmp2386 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2386);
                                                    $tmp2385 = $tmp2386;
                                                    $tmp2384 = $tmp2385;
                                                    mainArguments2383 = $tmp2384;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2384));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2385));
                                                    {
                                                        int $tmp2389;
                                                        {
                                                            ITable* $tmp2393 = ((panda$collections$Iterable*) parameters2357)->$class->itable;
                                                            while ($tmp2393->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                                                $tmp2393 = $tmp2393->next;
                                                            }
                                                            $fn2395 $tmp2394 = $tmp2393->methods[0];
                                                            panda$collections$Iterator* $tmp2396 = $tmp2394(((panda$collections$Iterable*) parameters2357));
                                                            $tmp2392 = $tmp2396;
                                                            $tmp2391 = $tmp2392;
                                                            Iter$679$332390 = $tmp2391;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2391));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2392));
                                                            $l2397:;
                                                            ITable* $tmp2400 = Iter$679$332390->$class->itable;
                                                            while ($tmp2400->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                $tmp2400 = $tmp2400->next;
                                                            }
                                                            $fn2402 $tmp2401 = $tmp2400->methods[0];
                                                            panda$core$Bit $tmp2403 = $tmp2401(Iter$679$332390);
                                                            panda$core$Bit $tmp2404 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2403);
                                                            bool $tmp2399 = $tmp2404.value;
                                                            if (!$tmp2399) goto $l2398;
                                                            {
                                                                int $tmp2407;
                                                                {
                                                                    ITable* $tmp2411 = Iter$679$332390->$class->itable;
                                                                    while ($tmp2411->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                                        $tmp2411 = $tmp2411->next;
                                                                    }
                                                                    $fn2413 $tmp2412 = $tmp2411->methods[1];
                                                                    panda$core$Object* $tmp2414 = $tmp2412(Iter$679$332390);
                                                                    $tmp2410 = $tmp2414;
                                                                    $tmp2409 = ((org$pandalanguage$pandac$ASTNode*) $tmp2410);
                                                                    p2408 = $tmp2409;
                                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2409));
                                                                    panda$core$Panda$unref$panda$core$Object($tmp2410);
                                                                    int $tmp2417;
                                                                    {
                                                                        $tmp2419 = p2408;
                                                                        $match$680_372418 = $tmp2419;
                                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2419));
                                                                        panda$core$Int64$init$builtin_int64(&$tmp2420, 31);
                                                                        panda$core$Bit $tmp2421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$680_372418->$rawValue, $tmp2420);
                                                                        if ($tmp2421.value) {
                                                                        {
                                                                            org$pandalanguage$pandac$Position* $tmp2423 = ((org$pandalanguage$pandac$Position*) ((char*) $match$680_372418->$data + 0));
                                                                            position2422 = *$tmp2423;
                                                                            panda$core$String** $tmp2425 = ((panda$core$String**) ((char*) $match$680_372418->$data + 16));
                                                                            name2424 = *$tmp2425;
                                                                            org$pandalanguage$pandac$ASTNode** $tmp2427 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$680_372418->$data + 24));
                                                                            type2426 = *$tmp2427;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2429 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                                                            org$pandalanguage$pandac$Type* $tmp2431 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type2426);
                                                                            $tmp2430 = $tmp2431;
                                                                            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2429, name2424, $tmp2430);
                                                                            $tmp2428 = $tmp2429;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainParameters2375, ((panda$core$Object*) $tmp2428));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2428));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2430));
                                                                            org$pandalanguage$pandac$ASTNode* $tmp2433 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                                            panda$core$Int64$init$builtin_int64(&$tmp2434, 20);
                                                                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2433, $tmp2434, position2422, name2424);
                                                                            $tmp2432 = $tmp2433;
                                                                            panda$collections$Array$add$panda$collections$Array$T(mainArguments2383, ((panda$core$Object*) $tmp2432));
                                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2432));
                                                                        }
                                                                        }
                                                                        else {
                                                                        {
                                                                            panda$core$Bit$init$builtin_bit(&$tmp2435, false);
                                                                            if ($tmp2435.value) goto $l2436; else goto $l2437;
                                                                            $l2437:;
                                                                            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2438, (panda$core$Int64) { 686 });
                                                                            abort();
                                                                            $l2436:;
                                                                        }
                                                                        }
                                                                    }
                                                                    $tmp2417 = -1;
                                                                    goto $l2415;
                                                                    $l2415:;
                                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2419));
                                                                    switch ($tmp2417) {
                                                                        case -1: goto $l2439;
                                                                    }
                                                                    $l2439:;
                                                                }
                                                                $tmp2407 = -1;
                                                                goto $l2405;
                                                                $l2405:;
                                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p2408));
                                                                p2408 = NULL;
                                                                switch ($tmp2407) {
                                                                    case -1: goto $l2440;
                                                                }
                                                                $l2440:;
                                                            }
                                                            goto $l2397;
                                                            $l2398:;
                                                        }
                                                        $tmp2389 = -1;
                                                        goto $l2387;
                                                        $l2387:;
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$679$332390));
                                                        Iter$679$332390 = NULL;
                                                        switch ($tmp2389) {
                                                            case -1: goto $l2441;
                                                        }
                                                        $l2441:;
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp2445 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2446, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2448 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2449, 20);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2448, $tmp2449, position2345, &$s2450);
                                                    $tmp2447 = $tmp2448;
                                                    panda$collections$ImmutableArray* $tmp2452 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                                                    panda$collections$ImmutableArray$init($tmp2452);
                                                    $tmp2451 = $tmp2452;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2445, $tmp2446, position2345, $tmp2447, $tmp2451);
                                                    $tmp2444 = $tmp2445;
                                                    $tmp2443 = $tmp2444;
                                                    bareConstruct2442 = $tmp2443;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2443));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2444));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2451));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2447));
                                                    org$pandalanguage$pandac$ASTNode* $tmp2454 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2455, 8);
                                                    org$pandalanguage$pandac$ASTNode* $tmp2457 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2458, 15);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2457, $tmp2458, position2345, bareConstruct2442, name2366);
                                                    $tmp2456 = $tmp2457;
                                                    panda$collections$ImmutableArray* $tmp2460 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainArguments2383);
                                                    $tmp2459 = $tmp2460;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2454, $tmp2455, position2345, $tmp2456, $tmp2459);
                                                    $tmp2453 = $tmp2454;
                                                    panda$collections$Array$add$panda$collections$Array$T(mainStatements2379, ((panda$core$Object*) $tmp2453));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2453));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2459));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2456));
                                                    memset(&returnType2461, 0, sizeof(returnType2461));
                                                    if (((panda$core$Bit) { rawReturnType2359 != NULL }).value) {
                                                    {
                                                        {
                                                            $tmp2462 = returnType2461;
                                                            org$pandalanguage$pandac$Type* $tmp2465 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType2359);
                                                            $tmp2464 = $tmp2465;
                                                            $tmp2463 = $tmp2464;
                                                            returnType2461 = $tmp2463;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2463));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2464));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2462));
                                                        }
                                                    }
                                                    }
                                                    else {
                                                    {
                                                        {
                                                            $tmp2466 = returnType2461;
                                                            org$pandalanguage$pandac$Type* $tmp2469 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                            $tmp2468 = $tmp2469;
                                                            $tmp2467 = $tmp2468;
                                                            returnType2461 = $tmp2467;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2467));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2468));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2466));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$MethodDecl* $tmp2473 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                                                    org$pandalanguage$pandac$Position$init(&$tmp2474);
                                                    org$pandalanguage$pandac$Annotations* $tmp2476 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp2477, 16);
                                                    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2476, $tmp2477);
                                                    $tmp2475 = $tmp2476;
                                                    panda$core$Int64$init$builtin_int64(&$tmp2479, 0);
                                                    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2478, $tmp2479);
                                                    panda$collections$Array* $tmp2482 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp2482);
                                                    $tmp2481 = $tmp2482;
                                                    panda$collections$ImmutableArray* $tmp2484 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(mainStatements2379);
                                                    $tmp2483 = $tmp2484;
                                                    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2473, self->bareCodeClass, $tmp2474, NULL, $tmp2475, $tmp2478, &$s2480, $tmp2481, mainParameters2375, returnType2461, $tmp2483);
                                                    $tmp2472 = $tmp2473;
                                                    $tmp2471 = $tmp2472;
                                                    bareMain2470 = $tmp2471;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2471));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2472));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2483));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2481));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2475));
                                                    panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) bareMain2470));
                                                }
                                                $tmp2371 = -1;
                                                goto $l2369;
                                                $l2369:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareMain2470));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType2461));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bareConstruct2442));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainArguments2383));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainStatements2379));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mainParameters2375));
                                                mainParameters2375 = NULL;
                                                mainStatements2379 = NULL;
                                                mainArguments2383 = NULL;
                                                bareConstruct2442 = NULL;
                                                bareMain2470 = NULL;
                                                switch ($tmp2371) {
                                                    case -1: goto $l2485;
                                                }
                                                $l2485:;
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp2486 = name2366;
                                                    $tmp2487 = rawName2353;
                                                    name2366 = $tmp2487;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2487));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2486));
                                                }
                                            }
                                            }
                                            panda$core$Object* $tmp2490 = (($fn2489) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp2488 = $tmp2490;
                                            panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2488)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2488);
                                            org$pandalanguage$pandac$MethodDecl* $tmp2494 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, self->bareCodeClass, position2345, dc2347, annotations2349, kind2351, name2366, generics2355, parameters2357, rawReturnType2359, statements2361);
                                            $tmp2493 = $tmp2494;
                                            $tmp2492 = $tmp2493;
                                            m2491 = $tmp2492;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2492));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2493));
                                            panda$core$Bit $tmp2495 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2491->annotations);
                                            if ($tmp2495.value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) m2491)->position, &$s2496);
                                                panda$core$Int64$init$builtin_int64(&$tmp2497, 16);
                                                panda$core$Int64 $tmp2498 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp2497);
                                                panda$core$Int64 $tmp2499 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(m2491->annotations->flags, $tmp2498);
                                                m2491->annotations->flags = $tmp2499;
                                            }
                                            }
                                            panda$core$Object* $tmp2502 = (($fn2501) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp2500 = $tmp2502;
                                            panda$collections$Stack$pop$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp2500)->currentClass, ((panda$core$Object*) self->bareCodeClass));
                                            panda$core$Panda$unref$panda$core$Object($tmp2500);
                                            panda$collections$Array$add$panda$collections$Array$T(self->bareCodeClass->methods, ((panda$core$Object*) m2491));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->bareCodeClass->symbolTable, ((org$pandalanguage$pandac$Symbol*) m2491));
                                        }
                                        $tmp2365 = -1;
                                        goto $l2363;
                                        $l2363:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m2491));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2366));
                                        m2491 = NULL;
                                        switch ($tmp2365) {
                                            case -1: goto $l2503;
                                        }
                                        $l2503:;
                                    }
                                    }
                                    else {
                                    panda$core$Int64$init$builtin_int64(&$tmp2504, 16);
                                    panda$core$Bit $tmp2505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$650_212288->$rawValue, $tmp2504);
                                    if ($tmp2505.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp2507 = ((org$pandalanguage$pandac$Position*) ((char*) $match$650_212288->$data + 0));
                                        position2506 = *$tmp2507;
                                        org$pandalanguage$pandac$ASTNode** $tmp2509 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$650_212288->$data + 16));
                                        dc2508 = *$tmp2509;
                                        panda$collections$ImmutableArray** $tmp2511 = ((panda$collections$ImmutableArray**) ((char*) $match$650_212288->$data + 24));
                                        annotations2510 = *$tmp2511;
                                        org$pandalanguage$pandac$ASTNode** $tmp2513 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$650_212288->$data + 32));
                                        varDecl2512 = *$tmp2513;
                                        org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_source, ((panda$collections$MapView*) aliases2253), ((panda$collections$List*) result2246));
                                        panda$core$Int64 $tmp2515 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        old2514 = $tmp2515;
                                        org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, self->bareCodeClass, position2506, dc2508, annotations2510, varDecl2512);
                                        panda$core$Int64 $tmp2517 = panda$collections$Array$get_count$R$panda$core$Int64(self->bareCodeClass->fields);
                                        panda$core$Bit$init$builtin_bit(&$tmp2518, false);
                                        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2516, old2514, $tmp2517, $tmp2518);
                                        int64_t $tmp2520 = $tmp2516.min.value;
                                        panda$core$Int64 i2519 = { $tmp2520 };
                                        int64_t $tmp2522 = $tmp2516.max.value;
                                        bool $tmp2523 = $tmp2516.inclusive.value;
                                        if ($tmp2523) goto $l2530; else goto $l2531;
                                        $l2530:;
                                        if ($tmp2520 <= $tmp2522) goto $l2524; else goto $l2526;
                                        $l2531:;
                                        if ($tmp2520 < $tmp2522) goto $l2524; else goto $l2526;
                                        $l2524:;
                                        {
                                            int $tmp2534;
                                            {
                                                panda$core$Object* $tmp2538 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->bareCodeClass->fields, i2519);
                                                $tmp2537 = $tmp2538;
                                                $tmp2536 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2537);
                                                f2535 = $tmp2536;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2536));
                                                panda$core$Panda$unref$panda$core$Object($tmp2537);
                                                panda$core$Int64$init$builtin_int64(&$tmp2540, 2);
                                                panda$core$Bit $tmp2541 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(f2535->fieldKind.$rawValue, $tmp2540);
                                                bool $tmp2539 = $tmp2541.value;
                                                if (!$tmp2539) goto $l2542;
                                                panda$core$Bit $tmp2543 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f2535->annotations);
                                                $tmp2539 = $tmp2543.value;
                                                $l2542:;
                                                panda$core$Bit $tmp2544 = { $tmp2539 };
                                                if ($tmp2544.value) {
                                                {
                                                    org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) f2535)->position, &$s2545);
                                                }
                                                }
                                            }
                                            $tmp2534 = -1;
                                            goto $l2532;
                                            $l2532:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f2535));
                                            f2535 = NULL;
                                            switch ($tmp2534) {
                                                case -1: goto $l2546;
                                            }
                                            $l2546:;
                                        }
                                        $l2527:;
                                        int64_t $tmp2548 = $tmp2522 - i2519.value;
                                        if ($tmp2523) goto $l2549; else goto $l2550;
                                        $l2549:;
                                        if ((uint64_t) $tmp2548 >= 1) goto $l2547; else goto $l2526;
                                        $l2550:;
                                        if ((uint64_t) $tmp2548 > 1) goto $l2547; else goto $l2526;
                                        $l2547:;
                                        i2519.value += 1;
                                        goto $l2524;
                                        $l2526:;
                                    }
                                    }
                                    else {
                                    {
                                        panda$core$Bit$init$builtin_bit(&$tmp2553, false);
                                        if ($tmp2553.value) goto $l2554; else goto $l2555;
                                        $l2555:;
                                        panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2563, ((panda$core$Object*) e2278));
                                        $tmp2562 = $tmp2564;
                                        panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2562, &$s2565);
                                        $tmp2561 = $tmp2566;
                                        panda$core$Int64$wrapper* $tmp2568;
                                        $tmp2568 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
                                        $tmp2568->value = e2278->$rawValue;
                                        $tmp2567 = ((panda$core$Object*) $tmp2568);
                                        panda$core$String* $tmp2569 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2561, $tmp2567);
                                        $tmp2560 = $tmp2569;
                                        panda$core$String* $tmp2571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2560, &$s2570);
                                        $tmp2559 = $tmp2571;
                                        org$pandalanguage$pandac$Position $tmp2574 = (($fn2573) e2278->$class->vtable[2])(e2278);
                                        org$pandalanguage$pandac$Position$wrapper* $tmp2575;
                                        $tmp2575 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                                        $tmp2575->value = $tmp2574;
                                        $tmp2572 = ((panda$core$Object*) $tmp2575);
                                        panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2559, $tmp2572);
                                        $tmp2558 = $tmp2576;
                                        panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2558, &$s2577);
                                        $tmp2557 = $tmp2578;
                                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2556, (panda$core$Int64) { 735 }, $tmp2557);
                                        abort();
                                        $l2554:;
                                    }
                                    }
                                    }
                                    }
                                    }
                                    }
                                }
                                $tmp2287 = -1;
                                goto $l2285;
                                $l2285:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2289));
                                switch ($tmp2287) {
                                    case -1: goto $l2579;
                                }
                                $l2579:;
                            }
                            $tmp2277 = -1;
                            goto $l2275;
                            $l2275:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e2278));
                            e2278 = NULL;
                            switch ($tmp2277) {
                                case -1: goto $l2580;
                            }
                            $l2580:;
                        }
                        goto $l2267;
                        $l2268:;
                    }
                    $tmp2259 = -1;
                    goto $l2257;
                    $l2257:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$649$172260));
                    Iter$649$172260 = NULL;
                    switch ($tmp2259) {
                        case -1: goto $l2581;
                    }
                    $l2581:;
                }
                {
                    $tmp2582 = self->source;
                    $tmp2583 = NULL;
                    self->source = $tmp2583;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2583));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2582));
                }
                $tmp2585 = ((panda$collections$ListView*) result2246);
                $returnValue2584 = $tmp2585;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2585));
                $tmp2245 = 0;
                goto $l2243;
                $l2586:;
                $tmp2236 = 0;
                goto $l2234;
                $l2587:;
                return $returnValue2584;
            }
            $l2243:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases2253));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage2250));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2246));
            result2246 = NULL;
            currentPackage2250 = NULL;
            aliases2253 = NULL;
            switch ($tmp2245) {
                case 0: goto $l2586;
            }
            $l2589:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2590, false);
            if ($tmp2590.value) goto $l2591; else goto $l2592;
            $l2592:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2593, (panda$core$Int64) { 741 });
            abort();
            $l2591:;
        }
        }
    }
    $tmp2236 = -1;
    goto $l2234;
    $l2234:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2238));
    switch ($tmp2236) {
        case -1: goto $l2594;
        case 0: goto $l2587;
    }
    $l2594:;
    abort();
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp2597;
    {
    }
    $tmp2597 = -1;
    goto $l2595;
    $l2595:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2597) {
        case -1: goto $l2598;
    }
    $l2598:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bareCodeClass));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
}

