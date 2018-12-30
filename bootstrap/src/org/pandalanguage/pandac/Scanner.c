#include "org/pandalanguage/pandac/Scanner.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Weak.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/Array.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/Method.h"
#include "panda/core/Immutable.h"
#include "org/pandalanguage/pandac/Annotations/Expression.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/ChoiceCase.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/io/File.h"
#include "panda/collections/MapView.h"
#include "org/pandalanguage/pandac/Alias.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Stack.h"
#include "panda/collections/List.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/HashMap.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Key.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Scanner$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef panda$collections$Iterator* (*$fn66)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn70)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn75)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn87)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn164)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn168)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn173)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn189)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn236)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn241)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn245)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn250)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn388)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn390)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn417)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn419)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn446)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn448)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn475)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn477)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn504)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn506)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn610)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn614)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn619)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn690)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn800)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn804)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn809)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn842)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn846)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn851)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn920)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn924)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn929)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn976)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn980)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn985)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1026)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1030)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1035)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1078)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1082)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1087)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1119)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1123)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1128)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1145)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1149)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1154)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1265)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1269)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1274)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1302)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1306)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1311)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1325)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1329)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1334)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1366)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1370)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1375)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1425)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1429)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1434)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1484)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1517)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1521)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1526)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1571)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1585)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1589)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1594)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1635)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1666)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1927)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1931)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1936)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1949)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1965)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2004)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2008)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2013)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn2058)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn2076)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2082)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2086)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2091)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2123)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2170)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2174)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2179)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2213)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2240)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2244)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2249)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2261)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2276)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2289)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2303)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2313)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2347)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2356)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2367)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2400)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2409)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2422)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2426)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2431)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2439)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2485)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2489)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2494)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2506)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2536)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2623)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2627)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2632)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2762)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2794)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2798)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2803)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2980)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2995)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn3031)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3085)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 197438526755717134, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6e\x76\x65\x72\x74\x54\x79\x70\x65\x28\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 145, 2505294641206069548, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, -5891455126768809117, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, -1200106393953033593, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, 17797457560281006, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 1798843608756893563, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6d\x70\x6c\x65\x78\x69\x74\x79\x28\x6e\x6f\x64\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 133, -6414000039548560057, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static panda$core$String $s1833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s2136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s2224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s2229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s3043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s3073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s3075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x73\x63\x61\x6e\x28\x73\x6f\x75\x72\x63\x65\x3a\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x66\x69\x6c\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 193, 7895019779626162639, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 21
panda$core$Weak* $tmp2 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp2, ((panda$core$Object*) param1));
panda$core$Weak** $tmp3 = &param0->compiler;
panda$core$Weak* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$core$Weak** $tmp5 = &param0->compiler;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
return;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ASTNode* param1) {

org$pandalanguage$pandac$Position local0;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$Position local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
panda$collections$Array* local4 = NULL;
org$pandalanguage$pandac$Position local5;
panda$core$String* local6 = NULL;
panda$collections$ImmutableArray* local7 = NULL;
panda$collections$Array* local8 = NULL;
org$pandalanguage$pandac$ASTNode* local9 = NULL;
org$pandalanguage$pandac$IR$Value* local10 = NULL;
org$pandalanguage$pandac$Type* local11 = NULL;
org$pandalanguage$pandac$Position local12;
org$pandalanguage$pandac$parser$Token$Kind local13;
panda$collections$ImmutableArray* local14 = NULL;
org$pandalanguage$pandac$ASTNode* local15 = NULL;
org$pandalanguage$pandac$Type$Kind local16;
panda$collections$Array* local17 = NULL;
org$pandalanguage$pandac$ASTNode* local18 = NULL;
org$pandalanguage$pandac$Type* local19 = NULL;
// line 25
panda$core$Int64* $tmp6 = &param1->$rawValue;
panda$core$Int64 $tmp7 = *$tmp6;
panda$core$Int64 $tmp8 = (panda$core$Int64) {42};
panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp7, $tmp8);
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp11 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp12 = *$tmp11;
*(&local0) = $tmp12;
panda$core$String** $tmp13 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp14 = *$tmp13;
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp15 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
*(&local1) = $tmp14;
// line 27
org$pandalanguage$pandac$Type* $tmp16 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp17 = *(&local1);
panda$core$Int64 $tmp18 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp19 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp18);
org$pandalanguage$pandac$Position $tmp20 = *(&local0);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp16, $tmp17, $tmp19, $tmp20);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$core$String* $tmp21 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing name
*(&local1) = ((panda$core$String*) NULL);
return $tmp16;
block3:;
panda$core$Int64 $tmp22 = (panda$core$Int64) {29};
panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp7, $tmp22);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp25 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp26 = *$tmp25;
*(&local2) = $tmp26;
org$pandalanguage$pandac$ASTNode** $tmp27 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp28 = *$tmp27;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp29 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
*(&local3) = $tmp28;
// line 29
panda$collections$Array* $tmp30 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp30);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp31 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
*(&local4) = $tmp30;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// line 30
panda$collections$Array* $tmp32 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp33 = *(&local3);
org$pandalanguage$pandac$Type* $tmp34 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp33);
panda$collections$Array$add$panda$collections$Array$T($tmp32, ((panda$core$Object*) $tmp34));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// line 31
org$pandalanguage$pandac$Type* $tmp35 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$collections$Array* $tmp36 = *(&local4);
panda$core$Int64 $tmp37 = (panda$core$Int64) {0};
panda$core$Object* $tmp38 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp36, $tmp37);
panda$core$String** $tmp39 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp38))->name;
panda$core$String* $tmp40 = *$tmp39;
panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp40, &$s42);
panda$core$Int64 $tmp43 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp44 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp43);
org$pandalanguage$pandac$Position $tmp45 = *(&local2);
panda$collections$Array* $tmp46 = *(&local4);
panda$core$Bit $tmp47 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp35, $tmp41, $tmp44, $tmp45, ((panda$collections$ListView*) $tmp46), $tmp47);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Panda$unref$panda$core$Object$Q($tmp38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$collections$Array* $tmp48 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
// unreffing subtypes
*(&local4) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp49 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing base
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp35;
block5:;
panda$core$Int64 $tmp50 = (panda$core$Int64) {19};
panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp7, $tmp50);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp53 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp54 = *$tmp53;
*(&local5) = $tmp54;
panda$core$String** $tmp55 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp56 = *$tmp55;
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp57 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
*(&local6) = $tmp56;
panda$collections$ImmutableArray** $tmp58 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp59 = *$tmp58;
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp60 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
*(&local7) = $tmp59;
// line 33
panda$collections$Array* $tmp61 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp61);
*(&local8) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp62 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
*(&local8) = $tmp61;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// line 34
panda$collections$ImmutableArray* $tmp63 = *(&local7);
ITable* $tmp64 = ((panda$collections$Iterable*) $tmp63)->$class->itable;
while ($tmp64->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp64 = $tmp64->next;
}
$fn66 $tmp65 = $tmp64->methods[0];
panda$collections$Iterator* $tmp67 = $tmp65(((panda$collections$Iterable*) $tmp63));
goto block8;
block8:;
ITable* $tmp68 = $tmp67->$class->itable;
while ($tmp68->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp68 = $tmp68->next;
}
$fn70 $tmp69 = $tmp68->methods[0];
panda$core$Bit $tmp71 = $tmp69($tmp67);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block10; else goto block9;
block9:;
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp73 = $tmp67->$class->itable;
while ($tmp73->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp73 = $tmp73->next;
}
$fn75 $tmp74 = $tmp73->methods[1];
panda$core$Object* $tmp76 = $tmp74($tmp67);
org$pandalanguage$pandac$ASTNode* $tmp77 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp76)));
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) $tmp76);
// line 35
panda$collections$Array* $tmp78 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp79 = *(&local9);
org$pandalanguage$pandac$Type* $tmp80 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp79);
panda$collections$Array$add$panda$collections$Array$T($tmp78, ((panda$core$Object*) $tmp80));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
panda$core$Panda$unref$panda$core$Object$Q($tmp76);
org$pandalanguage$pandac$ASTNode* $tmp81 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// unreffing arg
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block10:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// line 37
org$pandalanguage$pandac$Type* $tmp82 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp83 = *(&local6);
panda$core$Int64 $tmp84 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp85 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp84);
$fn87 $tmp86 = ($fn87) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp88 = $tmp86(param1);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp82, $tmp83, $tmp85, $tmp88);
panda$collections$Array* $tmp89 = *(&local8);
org$pandalanguage$pandac$Type* $tmp90 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp82, ((panda$collections$ListView*) $tmp89));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
panda$collections$Array* $tmp91 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// unreffing finalArgs
*(&local8) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp92 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// unreffing args
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp93 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
// unreffing base
*(&local6) = ((panda$core$String*) NULL);
return $tmp90;
block7:;
panda$core$Int64 $tmp94 = (panda$core$Int64) {23};
panda$core$Bit $tmp95 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp7, $tmp94);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block11; else goto block12;
block11:;
org$pandalanguage$pandac$Position* $tmp97 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp98 = *$tmp97;
org$pandalanguage$pandac$IR$Value** $tmp99 = (org$pandalanguage$pandac$IR$Value**) (param1->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp100 = *$tmp99;
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp101 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
*(&local10) = $tmp100;
// line 39
org$pandalanguage$pandac$IR$Value* $tmp102 = *(&local10);
panda$core$Int64* $tmp103 = &$tmp102->$rawValue;
panda$core$Int64 $tmp104 = *$tmp103;
panda$core$Int64 $tmp105 = (panda$core$Int64) {12};
panda$core$Bit $tmp106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp104, $tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block14; else goto block13;
block14:;
org$pandalanguage$pandac$Type** $tmp108 = (org$pandalanguage$pandac$Type**) ($tmp102->$data + 0);
org$pandalanguage$pandac$Type* $tmp109 = *$tmp108;
*(&local11) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp110 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
*(&local11) = $tmp109;
// line 41
org$pandalanguage$pandac$Type* $tmp111 = *(&local11);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
org$pandalanguage$pandac$Type* $tmp112 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing t
*(&local11) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp113 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
// unreffing type
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp111;
block13:;
// line 43
panda$core$Bit $tmp114 = panda$core$Bit$init$builtin_bit(false);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp116 = (panda$core$Int64) {43};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s117, $tmp116);
abort(); // unreachable
block15:;
org$pandalanguage$pandac$IR$Value* $tmp118 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing type
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block12:;
panda$core$Int64 $tmp119 = (panda$core$Int64) {27};
panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp7, $tmp119);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block17; else goto block18;
block17:;
org$pandalanguage$pandac$Position* $tmp122 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp123 = *$tmp122;
*(&local12) = $tmp123;
org$pandalanguage$pandac$parser$Token$Kind* $tmp124 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp125 = *$tmp124;
*(&local13) = $tmp125;
panda$collections$ImmutableArray** $tmp126 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp127 = *$tmp126;
*(&local14) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp128 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
*(&local14) = $tmp127;
org$pandalanguage$pandac$ASTNode** $tmp129 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp130 = *$tmp129;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp131 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
*(&local15) = $tmp130;
// line 45
// line 46
org$pandalanguage$pandac$parser$Token$Kind $tmp132 = *(&local13);
panda$core$Int64 $tmp133 = $tmp132.$rawValue;
panda$core$Int64 $tmp134 = (panda$core$Int64) {91};
panda$core$Bit $tmp135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp133, $tmp134);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block20; else goto block21;
block20:;
// line 48
panda$core$Int64 $tmp137 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp138 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp137);
*(&local16) = $tmp138;
goto block19;
block21:;
panda$core$Int64 $tmp139 = (panda$core$Int64) {92};
panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp133, $tmp139);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block22; else goto block23;
block22:;
// line 50
panda$core$Int64 $tmp142 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp143 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp142);
*(&local16) = $tmp143;
goto block19;
block23:;
panda$core$Int64 $tmp144 = (panda$core$Int64) {93};
panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp133, $tmp144);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block24; else goto block25;
block24:;
// line 52
panda$core$Int64 $tmp147 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp148 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp147);
*(&local16) = $tmp148;
goto block19;
block25:;
panda$core$Int64 $tmp149 = (panda$core$Int64) {94};
panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp133, $tmp149);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block26; else goto block27;
block26:;
// line 54
panda$core$Int64 $tmp152 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp153 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp152);
*(&local16) = $tmp153;
goto block19;
block27:;
// line 56
panda$core$Bit $tmp154 = panda$core$Bit$init$builtin_bit(false);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp156 = (panda$core$Int64) {56};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s157, $tmp156, &$s158);
abort(); // unreachable
block28:;
goto block19;
block19:;
// line 58
panda$collections$Array* $tmp159 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp159);
*(&local17) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp160 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
*(&local17) = $tmp159;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
// line 59
panda$collections$ImmutableArray* $tmp161 = *(&local14);
ITable* $tmp162 = ((panda$collections$Iterable*) $tmp161)->$class->itable;
while ($tmp162->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[0];
panda$collections$Iterator* $tmp165 = $tmp163(((panda$collections$Iterable*) $tmp161));
goto block30;
block30:;
ITable* $tmp166 = $tmp165->$class->itable;
while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[0];
panda$core$Bit $tmp169 = $tmp167($tmp165);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block32; else goto block31;
block31:;
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp171 = $tmp165->$class->itable;
while ($tmp171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp171 = $tmp171->next;
}
$fn173 $tmp172 = $tmp171->methods[1];
panda$core$Object* $tmp174 = $tmp172($tmp165);
org$pandalanguage$pandac$ASTNode* $tmp175 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp174)));
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) $tmp174);
// line 60
panda$collections$Array* $tmp176 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp177 = *(&local18);
org$pandalanguage$pandac$Type* $tmp178 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp177);
panda$collections$Array$add$panda$collections$Array$T($tmp176, ((panda$core$Object*) $tmp178));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
panda$core$Panda$unref$panda$core$Object$Q($tmp174);
org$pandalanguage$pandac$ASTNode* $tmp179 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
// unreffing p
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block30;
block32:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
// line 62
*(&local19) = ((org$pandalanguage$pandac$Type*) NULL);
// line 63
org$pandalanguage$pandac$ASTNode* $tmp180 = *(&local15);
panda$core$Bit $tmp181 = panda$core$Bit$init$builtin_bit($tmp180 != NULL);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block33; else goto block35;
block33:;
// line 64
org$pandalanguage$pandac$ASTNode* $tmp183 = *(&local15);
org$pandalanguage$pandac$Type* $tmp184 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp183);
org$pandalanguage$pandac$Type* $tmp185 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
*(&local19) = $tmp184;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
goto block34;
block35:;
// line 1
// line 67
org$pandalanguage$pandac$Type* $tmp186 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp187 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
*(&local19) = $tmp186;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
goto block34;
block34:;
// line 69
$fn189 $tmp188 = ($fn189) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp190 = $tmp188(param1);
org$pandalanguage$pandac$Type$Kind $tmp191 = *(&local16);
panda$collections$Array* $tmp192 = *(&local17);
panda$collections$ImmutableArray* $tmp193 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp192);
org$pandalanguage$pandac$Type* $tmp194 = *(&local19);
panda$core$Int64 $tmp195 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp196 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp190, $tmp191, ((panda$collections$ListView*) $tmp193), $tmp194, $tmp195);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
org$pandalanguage$pandac$Type* $tmp197 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
// unreffing returnType
*(&local19) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp198 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing parameters
*(&local17) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp199 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing rawReturnType
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp200 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
// unreffing rawParameters
*(&local14) = ((panda$collections$ImmutableArray*) NULL);
return $tmp196;
block18:;
// line 72
panda$core$Bit $tmp201 = panda$core$Bit$init$builtin_bit(false);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp203 = (panda$core$Int64) {72};
panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s205, ((panda$core$Object*) param1));
panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp204, &$s207);
panda$core$Int64* $tmp208 = &param1->$rawValue;
panda$core$Int64 $tmp209 = *$tmp208;
panda$core$Int64$wrapper* $tmp210;
$tmp210 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp210->value = $tmp209;
panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp206, ((panda$core$Object*) $tmp210));
panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp211, &$s213);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s214, $tmp203, $tmp212);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
abort(); // unreachable
block36:;
goto block1;
block1:;
panda$core$Bit $tmp215 = panda$core$Bit$init$builtin_bit(false);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block38; else goto block39;
block39:;
panda$core$Int64 $tmp217 = (panda$core$Int64) {24};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s218, $tmp217, &$s219);
abort(); // unreachable
block38:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Position param1, panda$core$Int64 param2, panda$core$Int64 param3) {

// line 77
panda$core$Int64 $tmp220 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(param2, param3);
panda$core$Int64 $tmp221 = (panda$core$Int64) {0};
panda$core$Bit $tmp222 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp220, $tmp221);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block1; else goto block2;
block1:;
// line 78
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s224);
goto block2;
block2:;
// line 80
panda$core$Int64 $tmp225 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(param2, param3);
return $tmp225;

}
panda$core$Bit org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 87
panda$core$Bit $tmp226 = panda$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block1; else goto block2;
block1:;
// line 88
panda$core$Bit $tmp228 = panda$core$Bit$init$builtin_bit(true);
return $tmp228;
block2:;
// line 90
panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s230, param2);
panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp229, &$s232);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp231);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
// line 91
panda$core$Bit $tmp233 = panda$core$Bit$init$builtin_bit(false);
return $tmp233;

}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* param0, panda$collections$ImmutableArray* param1) {

panda$core$Int64 local0;
panda$collections$Array* local1 = NULL;
panda$core$Method* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$Position local4;
panda$core$String* local5 = NULL;
panda$core$String* local6 = NULL;
org$pandalanguage$pandac$ASTNode* local7 = NULL;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
panda$core$Bit local9;
panda$core$Bit local10;
panda$core$Bit local11;
panda$core$Bit local12;
panda$core$Bit local13;
// line 84
panda$core$Int64 $tmp234 = (panda$core$Int64) {0};
*(&local0) = $tmp234;
// line 85
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp235 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
*(&local1) = ((panda$collections$Array*) NULL);
// line 86
panda$core$Method* $tmp237 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp237, ((panda$core$Int8*) org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit), ((panda$core$Immutable*) NULL));
// line 86
*(&local2) = ((panda$core$Method*) NULL);
panda$core$Method* $tmp238 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
*(&local2) = $tmp237;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// line 93
ITable* $tmp239 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp239->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp239 = $tmp239->next;
}
$fn241 $tmp240 = $tmp239->methods[0];
panda$collections$Iterator* $tmp242 = $tmp240(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp243 = $tmp242->$class->itable;
while ($tmp243->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp243 = $tmp243->next;
}
$fn245 $tmp244 = $tmp243->methods[0];
panda$core$Bit $tmp246 = $tmp244($tmp242);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block3; else goto block2;
block2:;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp248 = $tmp242->$class->itable;
while ($tmp248->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp248 = $tmp248->next;
}
$fn250 $tmp249 = $tmp248->methods[1];
panda$core$Object* $tmp251 = $tmp249($tmp242);
org$pandalanguage$pandac$ASTNode* $tmp252 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp251)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) $tmp251);
// line 94
org$pandalanguage$pandac$ASTNode* $tmp253 = *(&local3);
panda$core$Int64* $tmp254 = &$tmp253->$rawValue;
panda$core$Int64 $tmp255 = *$tmp254;
panda$core$Int64 $tmp256 = (panda$core$Int64) {0};
panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp255, $tmp256);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp259 = (org$pandalanguage$pandac$Position*) ($tmp253->$data + 0);
org$pandalanguage$pandac$Position $tmp260 = *$tmp259;
*(&local4) = $tmp260;
panda$core$String** $tmp261 = (panda$core$String**) ($tmp253->$data + 16);
panda$core$String* $tmp262 = *$tmp261;
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp263 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
*(&local5) = $tmp262;
panda$core$String** $tmp264 = (panda$core$String**) ($tmp253->$data + 24);
panda$core$String* $tmp265 = *$tmp264;
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp266 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
*(&local6) = $tmp265;
org$pandalanguage$pandac$ASTNode** $tmp267 = (org$pandalanguage$pandac$ASTNode**) ($tmp253->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp268 = *$tmp267;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp269 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
*(&local7) = $tmp268;
// line 96
org$pandalanguage$pandac$ASTNode* $tmp270 = *(&local7);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp271 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
*(&local8) = $tmp270;
// line 97
panda$core$String* $tmp272 = *(&local5);
panda$core$Bit $tmp273 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s274);
bool $tmp275 = $tmp273.value;
if ($tmp275) goto block8; else goto block9;
block8:;
// line 98
org$pandalanguage$pandac$Position $tmp276 = *(&local4);
panda$core$Int64 $tmp277 = *(&local0);
panda$core$Int64 $tmp278 = (panda$core$Int64) {2};
panda$core$Int64 $tmp279 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp276, $tmp277, $tmp278);
*(&local0) = $tmp279;
goto block7;
block9:;
panda$core$Bit $tmp280 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s281);
bool $tmp282 = $tmp280.value;
if ($tmp282) goto block10; else goto block11;
block10:;
// line 99
org$pandalanguage$pandac$Position $tmp283 = *(&local4);
panda$core$Int64 $tmp284 = *(&local0);
panda$core$Int64 $tmp285 = (panda$core$Int64) {4};
panda$core$Int64 $tmp286 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp283, $tmp284, $tmp285);
*(&local0) = $tmp286;
goto block7;
block11:;
panda$core$Bit $tmp287 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s288);
bool $tmp289 = $tmp287.value;
if ($tmp289) goto block12; else goto block13;
block12:;
// line 100
org$pandalanguage$pandac$Position $tmp290 = *(&local4);
panda$core$Int64 $tmp291 = *(&local0);
panda$core$Int64 $tmp292 = (panda$core$Int64) {8};
panda$core$Int64 $tmp293 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp290, $tmp291, $tmp292);
*(&local0) = $tmp293;
goto block7;
block13:;
panda$core$Bit $tmp294 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s295);
bool $tmp296 = $tmp294.value;
if ($tmp296) goto block14; else goto block15;
block14:;
// line 101
org$pandalanguage$pandac$Position $tmp297 = *(&local4);
panda$core$Int64 $tmp298 = *(&local0);
panda$core$Int64 $tmp299 = (panda$core$Int64) {16};
panda$core$Int64 $tmp300 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp297, $tmp298, $tmp299);
*(&local0) = $tmp300;
goto block7;
block15:;
panda$core$Bit $tmp301 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s302);
bool $tmp303 = $tmp301.value;
if ($tmp303) goto block16; else goto block17;
block16:;
// line 102
org$pandalanguage$pandac$Position $tmp304 = *(&local4);
panda$core$Int64 $tmp305 = *(&local0);
panda$core$Int64 $tmp306 = (panda$core$Int64) {32};
panda$core$Int64 $tmp307 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp304, $tmp305, $tmp306);
*(&local0) = $tmp307;
goto block7;
block17:;
panda$core$Bit $tmp308 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s309);
bool $tmp310 = $tmp308.value;
if ($tmp310) goto block18; else goto block19;
block18:;
// line 103
org$pandalanguage$pandac$Position $tmp311 = *(&local4);
panda$core$Int64 $tmp312 = *(&local0);
panda$core$Int64 $tmp313 = (panda$core$Int64) {64};
panda$core$Int64 $tmp314 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp311, $tmp312, $tmp313);
*(&local0) = $tmp314;
goto block7;
block19:;
panda$core$Bit $tmp315 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s316);
bool $tmp317 = $tmp315.value;
if ($tmp317) goto block20; else goto block21;
block20:;
// line 104
org$pandalanguage$pandac$Position $tmp318 = *(&local4);
panda$core$Int64 $tmp319 = *(&local0);
panda$core$Int64 $tmp320 = (panda$core$Int64) {128};
panda$core$Int64 $tmp321 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp318, $tmp319, $tmp320);
*(&local0) = $tmp321;
goto block7;
block21:;
panda$core$Bit $tmp322 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s323);
bool $tmp324 = $tmp322.value;
if ($tmp324) goto block22; else goto block23;
block22:;
// line 105
org$pandalanguage$pandac$Position $tmp325 = *(&local4);
panda$core$Int64 $tmp326 = *(&local0);
panda$core$Int64 $tmp327 = (panda$core$Int64) {256};
panda$core$Int64 $tmp328 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp325, $tmp326, $tmp327);
*(&local0) = $tmp328;
goto block7;
block23:;
panda$core$Bit $tmp329 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s330);
bool $tmp331 = $tmp329.value;
if ($tmp331) goto block24; else goto block25;
block24:;
// line 106
org$pandalanguage$pandac$Position $tmp332 = *(&local4);
panda$core$Int64 $tmp333 = *(&local0);
panda$core$Int64 $tmp334 = (panda$core$Int64) {512};
panda$core$Int64 $tmp335 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp332, $tmp333, $tmp334);
*(&local0) = $tmp335;
goto block7;
block25:;
panda$core$Bit $tmp336 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s337);
bool $tmp338 = $tmp336.value;
if ($tmp338) goto block26; else goto block27;
block26:;
// line 107
org$pandalanguage$pandac$Position $tmp339 = *(&local4);
panda$core$Int64 $tmp340 = *(&local0);
panda$core$Int64 $tmp341 = (panda$core$Int64) {1024};
panda$core$Int64 $tmp342 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp339, $tmp340, $tmp341);
*(&local0) = $tmp342;
goto block7;
block27:;
panda$core$Bit $tmp343 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s344);
bool $tmp345 = $tmp343.value;
if ($tmp345) goto block28; else goto block29;
block28:;
// line 108
org$pandalanguage$pandac$Position $tmp346 = *(&local4);
panda$core$Int64 $tmp347 = *(&local0);
panda$core$Int64 $tmp348 = (panda$core$Int64) {2048};
panda$core$Int64 $tmp349 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp346, $tmp347, $tmp348);
*(&local0) = $tmp349;
goto block7;
block29:;
panda$core$Bit $tmp350 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s351);
bool $tmp352 = $tmp350.value;
if ($tmp352) goto block30; else goto block31;
block30:;
// line 109
org$pandalanguage$pandac$Position $tmp353 = *(&local4);
panda$core$Int64 $tmp354 = *(&local0);
panda$core$Int64 $tmp355 = (panda$core$Int64) {4096};
panda$core$Int64 $tmp356 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp353, $tmp354, $tmp355);
*(&local0) = $tmp356;
goto block7;
block31:;
panda$core$Bit $tmp357 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s358);
bool $tmp359 = $tmp357.value;
if ($tmp359) goto block32; else goto block33;
block32:;
// line 110
org$pandalanguage$pandac$Position $tmp360 = *(&local4);
panda$core$Int64 $tmp361 = *(&local0);
panda$core$Int64 $tmp362 = (panda$core$Int64) {16384};
panda$core$Int64 $tmp363 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp360, $tmp361, $tmp362);
*(&local0) = $tmp363;
goto block7;
block33:;
panda$core$Bit $tmp364 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s365);
bool $tmp366 = $tmp364.value;
if ($tmp366) goto block34; else goto block35;
block34:;
// line 111
org$pandalanguage$pandac$Position $tmp367 = *(&local4);
panda$core$Int64 $tmp368 = *(&local0);
panda$core$Int64 $tmp369 = (panda$core$Int64) {32768};
panda$core$Int64 $tmp370 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp367, $tmp368, $tmp369);
*(&local0) = $tmp370;
goto block7;
block35:;
panda$core$Bit $tmp371 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s372);
bool $tmp373 = $tmp371.value;
if ($tmp373) goto block36; else goto block37;
block36:;
// line 113
panda$collections$Array* $tmp374 = *(&local1);
panda$core$Bit $tmp375 = panda$core$Bit$init$builtin_bit($tmp374 == NULL);
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block38; else goto block39;
block38:;
// line 114
panda$collections$Array* $tmp377 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp377);
panda$collections$Array* $tmp378 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
*(&local1) = $tmp377;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
goto block39;
block39:;
// line 116
panda$core$Method* $tmp379 = *(&local2);
org$pandalanguage$pandac$Position $tmp380 = *(&local4);
panda$core$String* $tmp381 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp382 = *(&local8);
panda$core$Int8** $tmp383 = &$tmp379->pointer;
panda$core$Int8* $tmp384 = *$tmp383;
panda$core$Immutable** $tmp385 = &$tmp379->target;
panda$core$Immutable* $tmp386 = *$tmp385;
bool $tmp387 = $tmp386 != ((panda$core$Immutable*) NULL);
if ($tmp387) goto block40; else goto block41;
block41:;
panda$core$Bit $tmp389 = (($fn388) $tmp384)(param0, $tmp380, $tmp381, $tmp382);
*(&local9) = $tmp389;
goto block42;
block40:;
panda$core$Bit $tmp391 = (($fn390) $tmp384)($tmp386, param0, $tmp380, $tmp381, $tmp382);
*(&local9) = $tmp391;
goto block42;
block42:;
panda$core$Bit $tmp392 = *(&local9);
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block43; else goto block44;
block43:;
// line 117
panda$collections$Array* $tmp394 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp395 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp396 = (panda$core$Int64) {0};
panda$core$String* $tmp397 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp398 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp395, $tmp396, $tmp397, $tmp398);
panda$collections$Array$add$panda$collections$Array$T($tmp394, ((panda$core$Object*) $tmp395));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
// line 118
org$pandalanguage$pandac$ASTNode* $tmp399 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block44;
block44:;
goto block7;
block37:;
panda$core$Bit $tmp400 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s401);
bool $tmp402 = $tmp400.value;
if ($tmp402) goto block45; else goto block46;
block45:;
// line 121
panda$collections$Array* $tmp403 = *(&local1);
panda$core$Bit $tmp404 = panda$core$Bit$init$builtin_bit($tmp403 == NULL);
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block47; else goto block48;
block47:;
// line 122
panda$collections$Array* $tmp406 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp406);
panda$collections$Array* $tmp407 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
*(&local1) = $tmp406;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
goto block48;
block48:;
// line 124
panda$core$Method* $tmp408 = *(&local2);
org$pandalanguage$pandac$Position $tmp409 = *(&local4);
panda$core$String* $tmp410 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp411 = *(&local8);
panda$core$Int8** $tmp412 = &$tmp408->pointer;
panda$core$Int8* $tmp413 = *$tmp412;
panda$core$Immutable** $tmp414 = &$tmp408->target;
panda$core$Immutable* $tmp415 = *$tmp414;
bool $tmp416 = $tmp415 != ((panda$core$Immutable*) NULL);
if ($tmp416) goto block49; else goto block50;
block50:;
panda$core$Bit $tmp418 = (($fn417) $tmp413)(param0, $tmp409, $tmp410, $tmp411);
*(&local10) = $tmp418;
goto block51;
block49:;
panda$core$Bit $tmp420 = (($fn419) $tmp413)($tmp415, param0, $tmp409, $tmp410, $tmp411);
*(&local10) = $tmp420;
goto block51;
block51:;
panda$core$Bit $tmp421 = *(&local10);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block52; else goto block53;
block52:;
// line 125
panda$collections$Array* $tmp423 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp424 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp425 = (panda$core$Int64) {1};
panda$core$String* $tmp426 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp427 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp424, $tmp425, $tmp426, $tmp427);
panda$collections$Array$add$panda$collections$Array$T($tmp423, ((panda$core$Object*) $tmp424));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
// line 126
org$pandalanguage$pandac$ASTNode* $tmp428 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block53;
block53:;
goto block7;
block46:;
panda$core$Bit $tmp429 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s430);
bool $tmp431 = $tmp429.value;
if ($tmp431) goto block54; else goto block55;
block54:;
// line 129
panda$collections$Array* $tmp432 = *(&local1);
panda$core$Bit $tmp433 = panda$core$Bit$init$builtin_bit($tmp432 == NULL);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block56; else goto block57;
block56:;
// line 130
panda$collections$Array* $tmp435 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp435);
panda$collections$Array* $tmp436 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp436));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
*(&local1) = $tmp435;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
goto block57;
block57:;
// line 132
panda$core$Method* $tmp437 = *(&local2);
org$pandalanguage$pandac$Position $tmp438 = *(&local4);
panda$core$String* $tmp439 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp440 = *(&local8);
panda$core$Int8** $tmp441 = &$tmp437->pointer;
panda$core$Int8* $tmp442 = *$tmp441;
panda$core$Immutable** $tmp443 = &$tmp437->target;
panda$core$Immutable* $tmp444 = *$tmp443;
bool $tmp445 = $tmp444 != ((panda$core$Immutable*) NULL);
if ($tmp445) goto block58; else goto block59;
block59:;
panda$core$Bit $tmp447 = (($fn446) $tmp442)(param0, $tmp438, $tmp439, $tmp440);
*(&local11) = $tmp447;
goto block60;
block58:;
panda$core$Bit $tmp449 = (($fn448) $tmp442)($tmp444, param0, $tmp438, $tmp439, $tmp440);
*(&local11) = $tmp449;
goto block60;
block60:;
panda$core$Bit $tmp450 = *(&local11);
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block61; else goto block62;
block61:;
// line 133
panda$collections$Array* $tmp452 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp453 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp454 = (panda$core$Int64) {2};
panda$core$String* $tmp455 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp456 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp453, $tmp454, $tmp455, $tmp456);
panda$collections$Array$add$panda$collections$Array$T($tmp452, ((panda$core$Object*) $tmp453));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp453));
// line 134
org$pandalanguage$pandac$ASTNode* $tmp457 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block62;
block62:;
goto block7;
block55:;
panda$core$Bit $tmp458 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s459);
bool $tmp460 = $tmp458.value;
if ($tmp460) goto block63; else goto block64;
block63:;
// line 137
panda$collections$Array* $tmp461 = *(&local1);
panda$core$Bit $tmp462 = panda$core$Bit$init$builtin_bit($tmp461 == NULL);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block65; else goto block66;
block65:;
// line 138
panda$collections$Array* $tmp464 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp464);
panda$collections$Array* $tmp465 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp465));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
*(&local1) = $tmp464;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
goto block66;
block66:;
// line 140
panda$core$Method* $tmp466 = *(&local2);
org$pandalanguage$pandac$Position $tmp467 = *(&local4);
panda$core$String* $tmp468 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp469 = *(&local8);
panda$core$Int8** $tmp470 = &$tmp466->pointer;
panda$core$Int8* $tmp471 = *$tmp470;
panda$core$Immutable** $tmp472 = &$tmp466->target;
panda$core$Immutable* $tmp473 = *$tmp472;
bool $tmp474 = $tmp473 != ((panda$core$Immutable*) NULL);
if ($tmp474) goto block67; else goto block68;
block68:;
panda$core$Bit $tmp476 = (($fn475) $tmp471)(param0, $tmp467, $tmp468, $tmp469);
*(&local12) = $tmp476;
goto block69;
block67:;
panda$core$Bit $tmp478 = (($fn477) $tmp471)($tmp473, param0, $tmp467, $tmp468, $tmp469);
*(&local12) = $tmp478;
goto block69;
block69:;
panda$core$Bit $tmp479 = *(&local12);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block70; else goto block71;
block70:;
// line 141
panda$collections$Array* $tmp481 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp482 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp483 = (panda$core$Int64) {3};
panda$core$String* $tmp484 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp485 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp482, $tmp483, $tmp484, $tmp485);
panda$collections$Array$add$panda$collections$Array$T($tmp481, ((panda$core$Object*) $tmp482));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
// line 142
org$pandalanguage$pandac$ASTNode* $tmp486 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block71;
block71:;
goto block7;
block64:;
panda$core$Bit $tmp487 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp272, &$s488);
bool $tmp489 = $tmp487.value;
if ($tmp489) goto block72; else goto block73;
block72:;
// line 145
panda$collections$Array* $tmp490 = *(&local1);
panda$core$Bit $tmp491 = panda$core$Bit$init$builtin_bit($tmp490 == NULL);
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block74; else goto block75;
block74:;
// line 146
panda$collections$Array* $tmp493 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp493);
panda$collections$Array* $tmp494 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
*(&local1) = $tmp493;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
goto block75;
block75:;
// line 148
panda$core$Method* $tmp495 = *(&local2);
org$pandalanguage$pandac$Position $tmp496 = *(&local4);
panda$core$String* $tmp497 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp498 = *(&local8);
panda$core$Int8** $tmp499 = &$tmp495->pointer;
panda$core$Int8* $tmp500 = *$tmp499;
panda$core$Immutable** $tmp501 = &$tmp495->target;
panda$core$Immutable* $tmp502 = *$tmp501;
bool $tmp503 = $tmp502 != ((panda$core$Immutable*) NULL);
if ($tmp503) goto block76; else goto block77;
block77:;
panda$core$Bit $tmp505 = (($fn504) $tmp500)(param0, $tmp496, $tmp497, $tmp498);
*(&local13) = $tmp505;
goto block78;
block76:;
panda$core$Bit $tmp507 = (($fn506) $tmp500)($tmp502, param0, $tmp496, $tmp497, $tmp498);
*(&local13) = $tmp507;
goto block78;
block78:;
panda$core$Bit $tmp508 = *(&local13);
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block79; else goto block80;
block79:;
// line 149
panda$collections$Array* $tmp510 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp511 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp512 = (panda$core$Int64) {4};
panda$core$String* $tmp513 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp514 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp511, $tmp512, $tmp513, $tmp514);
panda$collections$Array$add$panda$collections$Array$T($tmp510, ((panda$core$Object*) $tmp511));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
// line 150
org$pandalanguage$pandac$ASTNode* $tmp515 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block80;
block80:;
goto block7;
block73:;
// line 153
org$pandalanguage$pandac$Position $tmp516 = *(&local4);
panda$core$String* $tmp517 = *(&local5);
panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s519, $tmp517);
panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp518, &$s521);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp516, $tmp520);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
goto block7;
block7:;
// line 155
org$pandalanguage$pandac$ASTNode* $tmp522 = *(&local8);
panda$core$Bit $tmp523 = panda$core$Bit$init$builtin_bit($tmp522 != NULL);
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block81; else goto block82;
block81:;
// line 156
org$pandalanguage$pandac$Position $tmp525 = *(&local4);
panda$core$String* $tmp526 = *(&local5);
panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s528, $tmp526);
panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp527, &$s530);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp525, $tmp529);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp527));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
goto block82;
block82:;
org$pandalanguage$pandac$ASTNode* $tmp531 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
// unreffing expr
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp532 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
// unreffing rawExpr
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp533 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
// unreffing exprText
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp534 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
// unreffing text
*(&local5) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 159
panda$core$Bit $tmp535 = panda$core$Bit$init$builtin_bit(false);
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block83; else goto block84;
block84:;
panda$core$Int64 $tmp537 = (panda$core$Int64) {159};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s538, $tmp537);
abort(); // unreachable
block83:;
goto block4;
block4:;
panda$core$Panda$unref$panda$core$Object$Q($tmp251);
org$pandalanguage$pandac$ASTNode* $tmp539 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
// unreffing c
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
// line 162
org$pandalanguage$pandac$Annotations* $tmp540 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp541 = *(&local0);
panda$collections$Array* $tmp542 = *(&local1);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp540, $tmp541, ((panda$collections$ListView*) $tmp542));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
panda$core$Method* $tmp543 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
// unreffing checkExpression
*(&local2) = ((panda$core$Method*) NULL);
panda$collections$Array* $tmp544 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp540;

}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ClassDecl* param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$collections$ImmutableArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$Position local1;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$Annotations* local3 = NULL;
org$pandalanguage$pandac$FieldDecl$Kind local4;
org$pandalanguage$pandac$Variable$Kind local5;
panda$collections$ImmutableArray* local6 = NULL;
org$pandalanguage$pandac$ASTNode* local7 = NULL;
org$pandalanguage$pandac$Position local8;
org$pandalanguage$pandac$ASTNode* local9 = NULL;
org$pandalanguage$pandac$ASTNode* local10 = NULL;
panda$core$String* local11 = NULL;
org$pandalanguage$pandac$Type* local12 = NULL;
panda$core$String* local13 = NULL;
panda$core$String* local14 = NULL;
org$pandalanguage$pandac$ASTNode* local15 = NULL;
org$pandalanguage$pandac$ASTNode* local16 = NULL;
panda$core$Bit local17;
panda$core$Bit local18;
org$pandalanguage$pandac$FieldDecl* local19 = NULL;
// line 167
*(&local0) = ((panda$core$String*) NULL);
// line 169
panda$core$Bit $tmp545 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block1; else goto block3;
block1:;
// line 170
panda$core$String* $tmp547 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 173
panda$core$Int64* $tmp548 = &param3->$rawValue;
panda$core$Int64 $tmp549 = *$tmp548;
panda$core$Int64 $tmp550 = (panda$core$Int64) {38};
panda$core$Bit $tmp551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp549, $tmp550);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp553 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp554 = *$tmp553;
*(&local1) = $tmp554;
panda$core$String** $tmp555 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp556 = *$tmp555;
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp557 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
*(&local2) = $tmp556;
// line 175
panda$core$String* $tmp558 = *(&local2);
panda$core$String* $tmp559 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp558));
*(&local0) = $tmp558;
panda$core$String* $tmp560 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 177
panda$core$Bit $tmp561 = panda$core$Bit$init$builtin_bit(false);
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp563 = (panda$core$Int64) {177};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s564, $tmp563);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 180
org$pandalanguage$pandac$Annotations* $tmp565 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param4);
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
org$pandalanguage$pandac$Annotations* $tmp566 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
*(&local3) = $tmp565;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
// line 181
// line 182
panda$core$Int64* $tmp567 = &param5->$rawValue;
panda$core$Int64 $tmp568 = *$tmp567;
panda$core$Int64 $tmp569 = (panda$core$Int64) {47};
panda$core$Bit $tmp570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp568, $tmp569);
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp572 = (org$pandalanguage$pandac$Position*) (param5->$data + 0);
org$pandalanguage$pandac$Position $tmp573 = *$tmp572;
org$pandalanguage$pandac$Variable$Kind* $tmp574 = (org$pandalanguage$pandac$Variable$Kind*) (param5->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp575 = *$tmp574;
*(&local5) = $tmp575;
panda$collections$ImmutableArray** $tmp576 = (panda$collections$ImmutableArray**) (param5->$data + 24);
panda$collections$ImmutableArray* $tmp577 = *$tmp576;
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp578 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
*(&local6) = $tmp577;
// line 184
org$pandalanguage$pandac$Variable$Kind $tmp579 = *(&local5);
panda$core$Int64 $tmp580 = $tmp579.$rawValue;
panda$core$Int64 $tmp581 = (panda$core$Int64) {0};
panda$core$Bit $tmp582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp580, $tmp581);
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block13; else goto block14;
block13:;
// line 186
panda$core$Int64 $tmp584 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FieldDecl$Kind $tmp585 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp584);
*(&local4) = $tmp585;
goto block12;
block14:;
panda$core$Int64 $tmp586 = (panda$core$Int64) {1};
panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp580, $tmp586);
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block15; else goto block16;
block15:;
// line 188
panda$core$Int64 $tmp589 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp590 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp589);
*(&local4) = $tmp590;
goto block12;
block16:;
panda$core$Int64 $tmp591 = (panda$core$Int64) {2};
panda$core$Bit $tmp592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp580, $tmp591);
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block17; else goto block18;
block17:;
// line 190
panda$core$Int64 $tmp594 = (panda$core$Int64) {2};
org$pandalanguage$pandac$FieldDecl$Kind $tmp595 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp594);
*(&local4) = $tmp595;
// line 191
org$pandalanguage$pandac$Annotations* $tmp596 = *(&local3);
panda$core$Int64* $tmp597 = &$tmp596->flags;
panda$core$Int64 $tmp598 = *$tmp597;
panda$core$Int64 $tmp599 = (panda$core$Int64) {16};
panda$core$Int64 $tmp600 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp598, $tmp599);
panda$core$Int64* $tmp601 = &$tmp596->flags;
*$tmp601 = $tmp600;
goto block12;
block18:;
panda$core$Int64 $tmp602 = (panda$core$Int64) {3};
panda$core$Bit $tmp603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp580, $tmp602);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block19; else goto block12;
block19:;
// line 193
panda$core$Int64 $tmp605 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp606 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp605);
*(&local4) = $tmp606;
goto block12;
block12:;
// line 195
panda$collections$ImmutableArray* $tmp607 = *(&local6);
ITable* $tmp608 = ((panda$collections$Iterable*) $tmp607)->$class->itable;
while ($tmp608->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp608 = $tmp608->next;
}
$fn610 $tmp609 = $tmp608->methods[0];
panda$collections$Iterator* $tmp611 = $tmp609(((panda$collections$Iterable*) $tmp607));
goto block20;
block20:;
ITable* $tmp612 = $tmp611->$class->itable;
while ($tmp612->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp612 = $tmp612->next;
}
$fn614 $tmp613 = $tmp612->methods[0];
panda$core$Bit $tmp615 = $tmp613($tmp611);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block22; else goto block21;
block21:;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp617 = $tmp611->$class->itable;
while ($tmp617->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp617 = $tmp617->next;
}
$fn619 $tmp618 = $tmp617->methods[1];
panda$core$Object* $tmp620 = $tmp618($tmp611);
org$pandalanguage$pandac$ASTNode* $tmp621 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp620)));
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) $tmp620);
// line 196
org$pandalanguage$pandac$ASTNode* $tmp622 = *(&local7);
panda$core$Int64* $tmp623 = &$tmp622->$rawValue;
panda$core$Int64 $tmp624 = *$tmp623;
panda$core$Int64 $tmp625 = (panda$core$Int64) {13};
panda$core$Bit $tmp626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp624, $tmp625);
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp628 = (org$pandalanguage$pandac$Position*) ($tmp622->$data + 0);
org$pandalanguage$pandac$Position $tmp629 = *$tmp628;
*(&local8) = $tmp629;
org$pandalanguage$pandac$ASTNode** $tmp630 = (org$pandalanguage$pandac$ASTNode**) ($tmp622->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp631 = *$tmp630;
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp632 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp631));
*(&local9) = $tmp631;
org$pandalanguage$pandac$ASTNode** $tmp633 = (org$pandalanguage$pandac$ASTNode**) ($tmp622->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp634 = *$tmp633;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp635 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
*(&local10) = $tmp634;
// line 198
*(&local11) = ((panda$core$String*) NULL);
// line 199
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
// line 200
org$pandalanguage$pandac$ASTNode* $tmp636 = *(&local9);
panda$core$Int64* $tmp637 = &$tmp636->$rawValue;
panda$core$Int64 $tmp638 = *$tmp637;
panda$core$Int64 $tmp639 = (panda$core$Int64) {20};
panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp638, $tmp639);
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block27; else goto block28;
block27:;
org$pandalanguage$pandac$Position* $tmp642 = (org$pandalanguage$pandac$Position*) ($tmp636->$data + 0);
org$pandalanguage$pandac$Position $tmp643 = *$tmp642;
panda$core$String** $tmp644 = (panda$core$String**) ($tmp636->$data + 16);
panda$core$String* $tmp645 = *$tmp644;
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp646 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp646));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp645));
*(&local13) = $tmp645;
// line 202
panda$core$String* $tmp647 = *(&local13);
panda$core$String* $tmp648 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
*(&local11) = $tmp647;
// line 203
org$pandalanguage$pandac$Type* $tmp649 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp650 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp650));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
*(&local12) = $tmp649;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
panda$core$String* $tmp651 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp651));
// unreffing id
*(&local13) = ((panda$core$String*) NULL);
goto block26;
block28:;
panda$core$Int64 $tmp652 = (panda$core$Int64) {44};
panda$core$Bit $tmp653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp638, $tmp652);
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block29; else goto block30;
block29:;
org$pandalanguage$pandac$Position* $tmp655 = (org$pandalanguage$pandac$Position*) ($tmp636->$data + 0);
org$pandalanguage$pandac$Position $tmp656 = *$tmp655;
panda$core$String** $tmp657 = (panda$core$String**) ($tmp636->$data + 16);
panda$core$String* $tmp658 = *$tmp657;
*(&local14) = ((panda$core$String*) NULL);
panda$core$String* $tmp659 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
*(&local14) = $tmp658;
org$pandalanguage$pandac$ASTNode** $tmp660 = (org$pandalanguage$pandac$ASTNode**) ($tmp636->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp661 = *$tmp660;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp662 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp661));
*(&local15) = $tmp661;
// line 205
panda$core$String* $tmp663 = *(&local14);
panda$core$String* $tmp664 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp663));
*(&local11) = $tmp663;
// line 206
org$pandalanguage$pandac$ASTNode* $tmp665 = *(&local15);
org$pandalanguage$pandac$Type* $tmp666 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp665);
org$pandalanguage$pandac$Type* $tmp667 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
*(&local12) = $tmp666;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
org$pandalanguage$pandac$ASTNode* $tmp668 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
// unreffing idType
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp669 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
// unreffing id
*(&local14) = ((panda$core$String*) NULL);
goto block26;
block30:;
// line 208
panda$core$Bit $tmp670 = panda$core$Bit$init$builtin_bit(false);
bool $tmp671 = $tmp670.value;
if ($tmp671) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp672 = (panda$core$Int64) {208};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s673, $tmp672);
abort(); // unreachable
block31:;
goto block26;
block26:;
// line 210
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 211
org$pandalanguage$pandac$ASTNode* $tmp674 = *(&local10);
panda$core$Bit $tmp675 = panda$core$Bit$init$builtin_bit($tmp674 == NULL);
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block33; else goto block34;
block33:;
org$pandalanguage$pandac$Annotations* $tmp677 = *(&local3);
panda$core$Bit $tmp678 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp677);
*(&local18) = $tmp678;
goto block35;
block34:;
*(&local18) = $tmp675;
goto block35;
block35:;
panda$core$Bit $tmp679 = *(&local18);
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Type* $tmp681 = *(&local12);
org$pandalanguage$pandac$Type$Kind* $tmp682 = &$tmp681->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp683 = *$tmp682;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp684;
$tmp684 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp684->value = $tmp683;
panda$core$Int64 $tmp685 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp686 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp685);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp687;
$tmp687 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp687->value = $tmp686;
ITable* $tmp688 = ((panda$core$Equatable*) $tmp684)->$class->itable;
while ($tmp688->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp688 = $tmp688->next;
}
$fn690 $tmp689 = $tmp688->methods[0];
panda$core$Bit $tmp691 = $tmp689(((panda$core$Equatable*) $tmp684), ((panda$core$Equatable*) $tmp687));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp684)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp687)));
*(&local17) = $tmp691;
goto block38;
block37:;
*(&local17) = $tmp679;
goto block38;
block38:;
panda$core$Bit $tmp692 = *(&local17);
bool $tmp693 = $tmp692.value;
if ($tmp693) goto block39; else goto block41;
block39:;
// line 213
org$pandalanguage$pandac$ASTNode* $tmp694 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp695 = (panda$core$Int64) {28};
org$pandalanguage$pandac$Position $tmp696 = *(&local8);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp694, $tmp695, $tmp696);
org$pandalanguage$pandac$ASTNode* $tmp697 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
*(&local16) = $tmp694;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
goto block40;
block41:;
// line 1
// line 216
org$pandalanguage$pandac$ASTNode* $tmp698 = *(&local10);
org$pandalanguage$pandac$ASTNode* $tmp699 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
*(&local16) = $tmp698;
goto block40;
block40:;
// line 218
org$pandalanguage$pandac$FieldDecl* $tmp700 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$Position $tmp701 = *(&local8);
panda$core$String* $tmp702 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp703 = *(&local3);
org$pandalanguage$pandac$FieldDecl$Kind $tmp704 = *(&local4);
panda$core$String* $tmp705 = *(&local11);
org$pandalanguage$pandac$Type* $tmp706 = *(&local12);
org$pandalanguage$pandac$ASTNode* $tmp707 = *(&local16);
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp700, param1, $tmp701, $tmp702, $tmp703, $tmp704, $tmp705, $tmp706, $tmp707);
*(&local19) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp708 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
*(&local19) = $tmp700;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
// line 220
org$pandalanguage$pandac$SymbolTable** $tmp709 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp710 = *$tmp709;
org$pandalanguage$pandac$FieldDecl* $tmp711 = *(&local19);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp710, ((org$pandalanguage$pandac$Symbol*) $tmp711));
// line 221
panda$collections$Array** $tmp712 = &param1->fields;
panda$collections$Array* $tmp713 = *$tmp712;
org$pandalanguage$pandac$FieldDecl* $tmp714 = *(&local19);
panda$collections$Array$add$panda$collections$Array$T($tmp713, ((panda$core$Object*) $tmp714));
org$pandalanguage$pandac$FieldDecl* $tmp715 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
// unreffing field
*(&local19) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp716 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp716));
// unreffing value
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Type* $tmp717 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
// unreffing type
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp718 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp718));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp719 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
// unreffing rawValue
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp720 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
// unreffing target
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block23;
block25:;
// line 223
panda$core$Bit $tmp721 = panda$core$Bit$init$builtin_bit(false);
bool $tmp722 = $tmp721.value;
if ($tmp722) goto block42; else goto block43;
block43:;
panda$core$Int64 $tmp723 = (panda$core$Int64) {223};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s724, $tmp723);
abort(); // unreachable
block42:;
goto block23;
block23:;
panda$core$Panda$unref$panda$core$Object$Q($tmp620);
org$pandalanguage$pandac$ASTNode* $tmp725 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
// unreffing decl
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block20;
block22:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
panda$collections$ImmutableArray* $tmp726 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp726));
// unreffing decls
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
goto block9;
block11:;
// line 227
panda$core$Bit $tmp727 = panda$core$Bit$init$builtin_bit(false);
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block44; else goto block45;
block45:;
panda$core$Int64 $tmp729 = (panda$core$Int64) {227};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s730, $tmp729);
abort(); // unreachable
block44:;
goto block9;
block9:;
org$pandalanguage$pandac$Annotations* $tmp731 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
// unreffing annotations
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp732 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp732));
// unreffing doccomment
*(&local0) = ((panda$core$String*) NULL);
return;

}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ASTNode* param1) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
panda$collections$ImmutableArray* local3 = NULL;
panda$core$Int64 local4;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
panda$collections$ImmutableArray* local7 = NULL;
panda$core$Int64 local8;
org$pandalanguage$pandac$ASTNode* local9 = NULL;
org$pandalanguage$pandac$ASTNode* local10 = NULL;
org$pandalanguage$pandac$ASTNode* local11 = NULL;
panda$collections$ImmutableArray* local12 = NULL;
org$pandalanguage$pandac$ASTNode* local13 = NULL;
panda$core$Int64 local14;
org$pandalanguage$pandac$ASTNode* local15 = NULL;
org$pandalanguage$pandac$ASTNode* local16 = NULL;
org$pandalanguage$pandac$ASTNode* local17 = NULL;
panda$collections$ImmutableArray* local18 = NULL;
panda$core$Int64 local19;
org$pandalanguage$pandac$ASTNode* local20 = NULL;
org$pandalanguage$pandac$ASTNode* local21 = NULL;
panda$collections$ImmutableArray* local22 = NULL;
org$pandalanguage$pandac$ASTNode* local23 = NULL;
panda$core$Int64 local24;
org$pandalanguage$pandac$ASTNode* local25 = NULL;
panda$collections$ImmutableArray* local26 = NULL;
panda$core$Int64 local27;
org$pandalanguage$pandac$ASTNode* local28 = NULL;
org$pandalanguage$pandac$ASTNode* local29 = NULL;
panda$collections$ImmutableArray* local30 = NULL;
panda$collections$ImmutableArray* local31 = NULL;
panda$core$Int64 local32;
org$pandalanguage$pandac$ASTNode* local33 = NULL;
org$pandalanguage$pandac$ASTNode* local34 = NULL;
org$pandalanguage$pandac$ASTNode* local35 = NULL;
org$pandalanguage$pandac$ASTNode* local36 = NULL;
panda$collections$ImmutableArray* local37 = NULL;
panda$core$Int64 local38;
org$pandalanguage$pandac$ASTNode* local39 = NULL;
panda$collections$ImmutableArray* local40 = NULL;
panda$collections$ImmutableArray* local41 = NULL;
panda$core$Int64 local42;
org$pandalanguage$pandac$ASTNode* local43 = NULL;
org$pandalanguage$pandac$ASTNode* local44 = NULL;
org$pandalanguage$pandac$ASTNode* local45 = NULL;
panda$collections$ImmutableArray* local46 = NULL;
panda$core$Int64 local47;
org$pandalanguage$pandac$ASTNode* local48 = NULL;
// line 233
panda$core$Int64* $tmp733 = &param1->$rawValue;
panda$core$Int64 $tmp734 = *$tmp733;
panda$core$Int64 $tmp735 = (panda$core$Int64) {1};
panda$core$Bit $tmp736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp735);
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp738 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp739 = *$tmp738;
org$pandalanguage$pandac$ASTNode** $tmp740 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp741 = *$tmp740;
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp742 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp742));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp741));
*(&local0) = $tmp741;
org$pandalanguage$pandac$ASTNode** $tmp743 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp744 = *$tmp743;
// line 235
org$pandalanguage$pandac$ASTNode* $tmp745 = *(&local0);
panda$core$Int64 $tmp746 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp745);
org$pandalanguage$pandac$ASTNode* $tmp747 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp747));
// unreffing test
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp746;
block3:;
panda$core$Int64 $tmp748 = (panda$core$Int64) {2};
panda$core$Bit $tmp749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp748);
bool $tmp750 = $tmp749.value;
if ($tmp750) goto block4; else goto block5;
block4:;
// line 237
panda$core$Int64 $tmp751 = (panda$core$Int64) {0};
return $tmp751;
block5:;
panda$core$Int64 $tmp752 = (panda$core$Int64) {3};
panda$core$Bit $tmp753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp752);
bool $tmp754 = $tmp753.value;
if ($tmp754) goto block6; else goto block7;
block6:;
// line 239
panda$core$Int64 $tmp755 = (panda$core$Int64) {0};
return $tmp755;
block7:;
panda$core$Int64 $tmp756 = (panda$core$Int64) {4};
panda$core$Bit $tmp757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp756);
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp759 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp760 = *$tmp759;
org$pandalanguage$pandac$ASTNode** $tmp761 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp762 = *$tmp761;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp763 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp763));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp762));
*(&local1) = $tmp762;
org$pandalanguage$pandac$parser$Token$Kind* $tmp764 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp765 = *$tmp764;
org$pandalanguage$pandac$ASTNode** $tmp766 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp767 = *$tmp766;
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp768 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp768));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
*(&local2) = $tmp767;
// line 241
panda$core$Int64 $tmp769 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode* $tmp770 = *(&local1);
panda$core$Int64 $tmp771 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp770);
int64_t $tmp772 = $tmp769.value;
int64_t $tmp773 = $tmp771.value;
int64_t $tmp774 = $tmp772 + $tmp773;
panda$core$Int64 $tmp775 = (panda$core$Int64) {$tmp774};
org$pandalanguage$pandac$ASTNode* $tmp776 = *(&local2);
panda$core$Int64 $tmp777 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp776);
int64_t $tmp778 = $tmp775.value;
int64_t $tmp779 = $tmp777.value;
int64_t $tmp780 = $tmp778 + $tmp779;
panda$core$Int64 $tmp781 = (panda$core$Int64) {$tmp780};
org$pandalanguage$pandac$ASTNode* $tmp782 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp782));
// unreffing right
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp783 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp783));
// unreffing left
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp781;
block9:;
panda$core$Int64 $tmp784 = (panda$core$Int64) {5};
panda$core$Bit $tmp785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp784);
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block10; else goto block11;
block10:;
// line 243
panda$core$Int64 $tmp787 = (panda$core$Int64) {1};
return $tmp787;
block11:;
panda$core$Int64 $tmp788 = (panda$core$Int64) {6};
panda$core$Bit $tmp789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp788);
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp791 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp792 = *$tmp791;
panda$collections$ImmutableArray** $tmp793 = (panda$collections$ImmutableArray**) (param1->$data + 16);
panda$collections$ImmutableArray* $tmp794 = *$tmp793;
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp795 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp795));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
*(&local3) = $tmp794;
// line 245
panda$core$Int64 $tmp796 = (panda$core$Int64) {0};
*(&local4) = $tmp796;
// line 246
panda$collections$ImmutableArray* $tmp797 = *(&local3);
ITable* $tmp798 = ((panda$collections$Iterable*) $tmp797)->$class->itable;
while ($tmp798->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp798 = $tmp798->next;
}
$fn800 $tmp799 = $tmp798->methods[0];
panda$collections$Iterator* $tmp801 = $tmp799(((panda$collections$Iterable*) $tmp797));
goto block14;
block14:;
ITable* $tmp802 = $tmp801->$class->itable;
while ($tmp802->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp802 = $tmp802->next;
}
$fn804 $tmp803 = $tmp802->methods[0];
panda$core$Bit $tmp805 = $tmp803($tmp801);
bool $tmp806 = $tmp805.value;
if ($tmp806) goto block16; else goto block15;
block15:;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp807 = $tmp801->$class->itable;
while ($tmp807->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp807 = $tmp807->next;
}
$fn809 $tmp808 = $tmp807->methods[1];
panda$core$Object* $tmp810 = $tmp808($tmp801);
org$pandalanguage$pandac$ASTNode* $tmp811 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp810)));
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) $tmp810);
// line 247
panda$core$Int64 $tmp812 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp813 = *(&local5);
panda$core$Int64 $tmp814 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp813);
int64_t $tmp815 = $tmp812.value;
int64_t $tmp816 = $tmp814.value;
int64_t $tmp817 = $tmp815 + $tmp816;
panda$core$Int64 $tmp818 = (panda$core$Int64) {$tmp817};
*(&local4) = $tmp818;
panda$core$Panda$unref$panda$core$Object$Q($tmp810);
org$pandalanguage$pandac$ASTNode* $tmp819 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp819));
// unreffing s
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block16:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp801));
// line 249
panda$core$Int64 $tmp820 = *(&local4);
panda$collections$ImmutableArray* $tmp821 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
// unreffing statements
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
return $tmp820;
block13:;
panda$core$Int64 $tmp822 = (panda$core$Int64) {7};
panda$core$Bit $tmp823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp822);
bool $tmp824 = $tmp823.value;
if ($tmp824) goto block17; else goto block18;
block17:;
// line 251
panda$core$Int64 $tmp825 = (panda$core$Int64) {1};
return $tmp825;
block18:;
panda$core$Int64 $tmp826 = (panda$core$Int64) {8};
panda$core$Bit $tmp827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp826);
bool $tmp828 = $tmp827.value;
if ($tmp828) goto block19; else goto block20;
block19:;
org$pandalanguage$pandac$Position* $tmp829 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp830 = *$tmp829;
org$pandalanguage$pandac$ASTNode** $tmp831 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp832 = *$tmp831;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp833 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
*(&local6) = $tmp832;
panda$collections$ImmutableArray** $tmp834 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp835 = *$tmp834;
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp836 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp835));
*(&local7) = $tmp835;
// line 253
org$pandalanguage$pandac$ASTNode* $tmp837 = *(&local6);
panda$core$Int64 $tmp838 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp837);
*(&local8) = $tmp838;
// line 254
panda$collections$ImmutableArray* $tmp839 = *(&local7);
ITable* $tmp840 = ((panda$collections$Iterable*) $tmp839)->$class->itable;
while ($tmp840->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp840 = $tmp840->next;
}
$fn842 $tmp841 = $tmp840->methods[0];
panda$collections$Iterator* $tmp843 = $tmp841(((panda$collections$Iterable*) $tmp839));
goto block21;
block21:;
ITable* $tmp844 = $tmp843->$class->itable;
while ($tmp844->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp844 = $tmp844->next;
}
$fn846 $tmp845 = $tmp844->methods[0];
panda$core$Bit $tmp847 = $tmp845($tmp843);
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block23; else goto block22;
block22:;
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp849 = $tmp843->$class->itable;
while ($tmp849->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp849 = $tmp849->next;
}
$fn851 $tmp850 = $tmp849->methods[1];
panda$core$Object* $tmp852 = $tmp850($tmp843);
org$pandalanguage$pandac$ASTNode* $tmp853 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp853));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp852)));
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) $tmp852);
// line 255
panda$core$Int64 $tmp854 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp855 = *(&local9);
panda$core$Int64 $tmp856 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp855);
int64_t $tmp857 = $tmp854.value;
int64_t $tmp858 = $tmp856.value;
int64_t $tmp859 = $tmp857 + $tmp858;
panda$core$Int64 $tmp860 = (panda$core$Int64) {$tmp859};
*(&local8) = $tmp860;
panda$core$Panda$unref$panda$core$Object$Q($tmp852);
org$pandalanguage$pandac$ASTNode* $tmp861 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
// unreffing a
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block21;
block23:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp843));
// line 257
panda$core$Int64 $tmp862 = *(&local8);
panda$collections$ImmutableArray* $tmp863 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp863));
// unreffing args
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp864 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
// unreffing target
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp862;
block20:;
panda$core$Int64 $tmp865 = (panda$core$Int64) {10};
panda$core$Bit $tmp866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp865);
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp868 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp869 = *$tmp868;
org$pandalanguage$pandac$ASTNode** $tmp870 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp871 = *$tmp870;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp872 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
*(&local10) = $tmp871;
org$pandalanguage$pandac$ChoiceCase** $tmp873 = (org$pandalanguage$pandac$ChoiceCase**) (param1->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp874 = *$tmp873;
panda$core$Int64* $tmp875 = (panda$core$Int64*) (param1->$data + 32);
panda$core$Int64 $tmp876 = *$tmp875;
// line 259
org$pandalanguage$pandac$ASTNode* $tmp877 = *(&local10);
panda$core$Int64 $tmp878 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp877);
org$pandalanguage$pandac$ASTNode* $tmp879 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp879));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp878;
block25:;
panda$core$Int64 $tmp880 = (panda$core$Int64) {12};
panda$core$Bit $tmp881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp880);
bool $tmp882 = $tmp881.value;
if ($tmp882) goto block26; else goto block27;
block26:;
// line 261
panda$core$Int64 $tmp883 = (panda$core$Int64) {1};
return $tmp883;
block27:;
panda$core$Int64 $tmp884 = (panda$core$Int64) {13};
panda$core$Bit $tmp885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp884);
bool $tmp886 = $tmp885.value;
if ($tmp886) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp887 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp888 = *$tmp887;
org$pandalanguage$pandac$ASTNode** $tmp889 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp890 = *$tmp889;
org$pandalanguage$pandac$ASTNode** $tmp891 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp892 = *$tmp891;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp893 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
*(&local11) = $tmp892;
// line 263
org$pandalanguage$pandac$ASTNode* $tmp894 = *(&local11);
panda$core$Bit $tmp895 = panda$core$Bit$init$builtin_bit($tmp894 == NULL);
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block30; else goto block31;
block30:;
// line 264
panda$core$Int64 $tmp897 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ASTNode* $tmp898 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp898));
// unreffing value
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp897;
block31:;
// line 266
org$pandalanguage$pandac$ASTNode* $tmp899 = *(&local11);
panda$core$Int64 $tmp900 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp899);
org$pandalanguage$pandac$ASTNode* $tmp901 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp901));
// unreffing value
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp900;
block29:;
panda$core$Int64 $tmp902 = (panda$core$Int64) {14};
panda$core$Bit $tmp903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp902);
bool $tmp904 = $tmp903.value;
if ($tmp904) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp905 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp906 = *$tmp905;
panda$core$String** $tmp907 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp908 = *$tmp907;
panda$collections$ImmutableArray** $tmp909 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp910 = *$tmp909;
*(&local12) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp911 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp911));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp910));
*(&local12) = $tmp910;
org$pandalanguage$pandac$ASTNode** $tmp912 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp913 = *$tmp912;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp914 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp914));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp913));
*(&local13) = $tmp913;
// line 268
org$pandalanguage$pandac$ASTNode* $tmp915 = *(&local13);
panda$core$Int64 $tmp916 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp915);
*(&local14) = $tmp916;
// line 269
panda$collections$ImmutableArray* $tmp917 = *(&local12);
ITable* $tmp918 = ((panda$collections$Iterable*) $tmp917)->$class->itable;
while ($tmp918->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp918 = $tmp918->next;
}
$fn920 $tmp919 = $tmp918->methods[0];
panda$collections$Iterator* $tmp921 = $tmp919(((panda$collections$Iterable*) $tmp917));
goto block34;
block34:;
ITable* $tmp922 = $tmp921->$class->itable;
while ($tmp922->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp922 = $tmp922->next;
}
$fn924 $tmp923 = $tmp922->methods[0];
panda$core$Bit $tmp925 = $tmp923($tmp921);
bool $tmp926 = $tmp925.value;
if ($tmp926) goto block36; else goto block35;
block35:;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp927 = $tmp921->$class->itable;
while ($tmp927->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp927 = $tmp927->next;
}
$fn929 $tmp928 = $tmp927->methods[1];
panda$core$Object* $tmp930 = $tmp928($tmp921);
org$pandalanguage$pandac$ASTNode* $tmp931 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp930)));
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) $tmp930);
// line 270
panda$core$Int64 $tmp932 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp933 = *(&local15);
panda$core$Int64 $tmp934 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp933);
int64_t $tmp935 = $tmp932.value;
int64_t $tmp936 = $tmp934.value;
int64_t $tmp937 = $tmp935 + $tmp936;
panda$core$Int64 $tmp938 = (panda$core$Int64) {$tmp937};
*(&local14) = $tmp938;
panda$core$Panda$unref$panda$core$Object$Q($tmp930);
org$pandalanguage$pandac$ASTNode* $tmp939 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp939));
// unreffing s
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block34;
block36:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp921));
// line 272
panda$core$Int64 $tmp940 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp941 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
// unreffing test
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp942 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp942));
// unreffing statements
*(&local12) = ((panda$collections$ImmutableArray*) NULL);
return $tmp940;
block33:;
panda$core$Int64 $tmp943 = (panda$core$Int64) {15};
panda$core$Bit $tmp944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp943);
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block37; else goto block38;
block37:;
org$pandalanguage$pandac$Position* $tmp946 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp947 = *$tmp946;
org$pandalanguage$pandac$ASTNode** $tmp948 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp949 = *$tmp948;
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp950 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp949));
*(&local16) = $tmp949;
panda$core$String** $tmp951 = (panda$core$String**) (param1->$data + 24);
panda$core$String* $tmp952 = *$tmp951;
// line 274
org$pandalanguage$pandac$ASTNode* $tmp953 = *(&local16);
panda$core$Int64 $tmp954 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp953);
org$pandalanguage$pandac$ASTNode* $tmp955 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp955));
// unreffing base
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp954;
block38:;
panda$core$Int64 $tmp956 = (panda$core$Int64) {18};
panda$core$Bit $tmp957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp956);
bool $tmp958 = $tmp957.value;
if ($tmp958) goto block39; else goto block40;
block39:;
org$pandalanguage$pandac$Position* $tmp959 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp960 = *$tmp959;
panda$core$String** $tmp961 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp962 = *$tmp961;
org$pandalanguage$pandac$ASTNode** $tmp963 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp964 = *$tmp963;
org$pandalanguage$pandac$ASTNode** $tmp965 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp966 = *$tmp965;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp967 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp967));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp966));
*(&local17) = $tmp966;
panda$collections$ImmutableArray** $tmp968 = (panda$collections$ImmutableArray**) (param1->$data + 40);
panda$collections$ImmutableArray* $tmp969 = *$tmp968;
*(&local18) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp970 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp970));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
*(&local18) = $tmp969;
// line 276
org$pandalanguage$pandac$ASTNode* $tmp971 = *(&local17);
panda$core$Int64 $tmp972 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp971);
*(&local19) = $tmp972;
// line 277
panda$collections$ImmutableArray* $tmp973 = *(&local18);
ITable* $tmp974 = ((panda$collections$Iterable*) $tmp973)->$class->itable;
while ($tmp974->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp974 = $tmp974->next;
}
$fn976 $tmp975 = $tmp974->methods[0];
panda$collections$Iterator* $tmp977 = $tmp975(((panda$collections$Iterable*) $tmp973));
goto block41;
block41:;
ITable* $tmp978 = $tmp977->$class->itable;
while ($tmp978->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp978 = $tmp978->next;
}
$fn980 $tmp979 = $tmp978->methods[0];
panda$core$Bit $tmp981 = $tmp979($tmp977);
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block43; else goto block42;
block42:;
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp983 = $tmp977->$class->itable;
while ($tmp983->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp983 = $tmp983->next;
}
$fn985 $tmp984 = $tmp983->methods[1];
panda$core$Object* $tmp986 = $tmp984($tmp977);
org$pandalanguage$pandac$ASTNode* $tmp987 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp986)));
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) $tmp986);
// line 278
panda$core$Int64 $tmp988 = *(&local19);
org$pandalanguage$pandac$ASTNode* $tmp989 = *(&local20);
panda$core$Int64 $tmp990 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp989);
int64_t $tmp991 = $tmp988.value;
int64_t $tmp992 = $tmp990.value;
int64_t $tmp993 = $tmp991 + $tmp992;
panda$core$Int64 $tmp994 = (panda$core$Int64) {$tmp993};
*(&local19) = $tmp994;
panda$core$Panda$unref$panda$core$Object$Q($tmp986);
org$pandalanguage$pandac$ASTNode* $tmp995 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
// unreffing s
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block41;
block43:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp977));
// line 280
panda$core$Int64 $tmp996 = *(&local19);
panda$collections$ImmutableArray* $tmp997 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
// unreffing statements
*(&local18) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp998 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp998));
// unreffing list
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp996;
block40:;
panda$core$Int64 $tmp999 = (panda$core$Int64) {19};
panda$core$Bit $tmp1000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp999);
bool $tmp1001 = $tmp1000.value;
if ($tmp1001) goto block44; else goto block45;
block44:;
// line 282
panda$core$Int64 $tmp1002 = (panda$core$Int64) {0};
return $tmp1002;
block45:;
panda$core$Int64 $tmp1003 = (panda$core$Int64) {20};
panda$core$Bit $tmp1004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1003);
bool $tmp1005 = $tmp1004.value;
if ($tmp1005) goto block46; else goto block47;
block46:;
// line 284
panda$core$Int64 $tmp1006 = (panda$core$Int64) {1};
return $tmp1006;
block47:;
panda$core$Int64 $tmp1007 = (panda$core$Int64) {21};
panda$core$Bit $tmp1008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1007);
bool $tmp1009 = $tmp1008.value;
if ($tmp1009) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp1010 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1011 = *$tmp1010;
org$pandalanguage$pandac$ASTNode** $tmp1012 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1013 = *$tmp1012;
*(&local21) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1014 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
*(&local21) = $tmp1013;
panda$collections$ImmutableArray** $tmp1015 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1016 = *$tmp1015;
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1017 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1016));
*(&local22) = $tmp1016;
org$pandalanguage$pandac$ASTNode** $tmp1018 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1019 = *$tmp1018;
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1020 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
*(&local23) = $tmp1019;
// line 286
org$pandalanguage$pandac$ASTNode* $tmp1021 = *(&local21);
panda$core$Int64 $tmp1022 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1021);
*(&local24) = $tmp1022;
// line 287
panda$collections$ImmutableArray* $tmp1023 = *(&local22);
ITable* $tmp1024 = ((panda$collections$Iterable*) $tmp1023)->$class->itable;
while ($tmp1024->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1024 = $tmp1024->next;
}
$fn1026 $tmp1025 = $tmp1024->methods[0];
panda$collections$Iterator* $tmp1027 = $tmp1025(((panda$collections$Iterable*) $tmp1023));
goto block50;
block50:;
ITable* $tmp1028 = $tmp1027->$class->itable;
while ($tmp1028->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1028 = $tmp1028->next;
}
$fn1030 $tmp1029 = $tmp1028->methods[0];
panda$core$Bit $tmp1031 = $tmp1029($tmp1027);
bool $tmp1032 = $tmp1031.value;
if ($tmp1032) goto block52; else goto block51;
block51:;
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1033 = $tmp1027->$class->itable;
while ($tmp1033->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1033 = $tmp1033->next;
}
$fn1035 $tmp1034 = $tmp1033->methods[1];
panda$core$Object* $tmp1036 = $tmp1034($tmp1027);
org$pandalanguage$pandac$ASTNode* $tmp1037 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1037));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1036)));
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) $tmp1036);
// line 288
panda$core$Int64 $tmp1038 = *(&local24);
org$pandalanguage$pandac$ASTNode* $tmp1039 = *(&local25);
panda$core$Int64 $tmp1040 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1039);
int64_t $tmp1041 = $tmp1038.value;
int64_t $tmp1042 = $tmp1040.value;
int64_t $tmp1043 = $tmp1041 + $tmp1042;
panda$core$Int64 $tmp1044 = (panda$core$Int64) {$tmp1043};
*(&local24) = $tmp1044;
panda$core$Panda$unref$panda$core$Object$Q($tmp1036);
org$pandalanguage$pandac$ASTNode* $tmp1045 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1045));
// unreffing s
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block50;
block52:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
// line 290
org$pandalanguage$pandac$ASTNode* $tmp1046 = *(&local23);
panda$core$Bit $tmp1047 = panda$core$Bit$init$builtin_bit($tmp1046 != NULL);
bool $tmp1048 = $tmp1047.value;
if ($tmp1048) goto block53; else goto block54;
block53:;
// line 291
panda$core$Int64 $tmp1049 = *(&local24);
org$pandalanguage$pandac$ASTNode* $tmp1050 = *(&local23);
panda$core$Int64 $tmp1051 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1050);
int64_t $tmp1052 = $tmp1049.value;
int64_t $tmp1053 = $tmp1051.value;
int64_t $tmp1054 = $tmp1052 + $tmp1053;
panda$core$Int64 $tmp1055 = (panda$core$Int64) {$tmp1054};
*(&local24) = $tmp1055;
goto block54;
block54:;
// line 293
panda$core$Int64 $tmp1056 = *(&local24);
org$pandalanguage$pandac$ASTNode* $tmp1057 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1057));
// unreffing ifFalse
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1058 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1058));
// unreffing ifTrue
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1059 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1059));
// unreffing test
*(&local21) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1056;
block49:;
panda$core$Int64 $tmp1060 = (panda$core$Int64) {22};
panda$core$Bit $tmp1061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1060);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block55; else goto block56;
block55:;
// line 295
panda$core$Int64 $tmp1063 = (panda$core$Int64) {1};
return $tmp1063;
block56:;
panda$core$Int64 $tmp1064 = (panda$core$Int64) {24};
panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1064);
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block57; else goto block58;
block57:;
org$pandalanguage$pandac$Position* $tmp1067 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1068 = *$tmp1067;
panda$core$String** $tmp1069 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp1070 = *$tmp1069;
panda$collections$ImmutableArray** $tmp1071 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1072 = *$tmp1071;
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1073 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1073));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1072));
*(&local26) = $tmp1072;
// line 297
panda$core$Int64 $tmp1074 = (panda$core$Int64) {0};
*(&local27) = $tmp1074;
// line 298
panda$collections$ImmutableArray* $tmp1075 = *(&local26);
ITable* $tmp1076 = ((panda$collections$Iterable*) $tmp1075)->$class->itable;
while ($tmp1076->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1076 = $tmp1076->next;
}
$fn1078 $tmp1077 = $tmp1076->methods[0];
panda$collections$Iterator* $tmp1079 = $tmp1077(((panda$collections$Iterable*) $tmp1075));
goto block59;
block59:;
ITable* $tmp1080 = $tmp1079->$class->itable;
while ($tmp1080->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1080 = $tmp1080->next;
}
$fn1082 $tmp1081 = $tmp1080->methods[0];
panda$core$Bit $tmp1083 = $tmp1081($tmp1079);
bool $tmp1084 = $tmp1083.value;
if ($tmp1084) goto block61; else goto block60;
block60:;
*(&local28) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1085 = $tmp1079->$class->itable;
while ($tmp1085->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1085 = $tmp1085->next;
}
$fn1087 $tmp1086 = $tmp1085->methods[1];
panda$core$Object* $tmp1088 = $tmp1086($tmp1079);
org$pandalanguage$pandac$ASTNode* $tmp1089 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1089));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1088)));
*(&local28) = ((org$pandalanguage$pandac$ASTNode*) $tmp1088);
// line 299
panda$core$Int64 $tmp1090 = *(&local27);
org$pandalanguage$pandac$ASTNode* $tmp1091 = *(&local28);
panda$core$Int64 $tmp1092 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1091);
int64_t $tmp1093 = $tmp1090.value;
int64_t $tmp1094 = $tmp1092.value;
int64_t $tmp1095 = $tmp1093 + $tmp1094;
panda$core$Int64 $tmp1096 = (panda$core$Int64) {$tmp1095};
*(&local27) = $tmp1096;
panda$core$Panda$unref$panda$core$Object$Q($tmp1088);
org$pandalanguage$pandac$ASTNode* $tmp1097 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1097));
// unreffing s
*(&local28) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block59;
block61:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1079));
// line 301
panda$core$Int64 $tmp1098 = *(&local27);
panda$collections$ImmutableArray* $tmp1099 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1099));
// unreffing statements
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1098;
block58:;
panda$core$Int64 $tmp1100 = (panda$core$Int64) {25};
panda$core$Bit $tmp1101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1100);
bool $tmp1102 = $tmp1101.value;
if ($tmp1102) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$Position* $tmp1103 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1104 = *$tmp1103;
org$pandalanguage$pandac$ASTNode** $tmp1105 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1106 = *$tmp1105;
*(&local29) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1107 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1107));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1106));
*(&local29) = $tmp1106;
panda$collections$ImmutableArray** $tmp1108 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1109 = *$tmp1108;
*(&local30) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1110 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1110));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
*(&local30) = $tmp1109;
panda$collections$ImmutableArray** $tmp1111 = (panda$collections$ImmutableArray**) (param1->$data + 32);
panda$collections$ImmutableArray* $tmp1112 = *$tmp1111;
*(&local31) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1113 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1112));
*(&local31) = $tmp1112;
// line 303
org$pandalanguage$pandac$ASTNode* $tmp1114 = *(&local29);
panda$core$Int64 $tmp1115 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1114);
*(&local32) = $tmp1115;
// line 304
panda$collections$ImmutableArray* $tmp1116 = *(&local30);
ITable* $tmp1117 = ((panda$collections$Iterable*) $tmp1116)->$class->itable;
while ($tmp1117->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1117 = $tmp1117->next;
}
$fn1119 $tmp1118 = $tmp1117->methods[0];
panda$collections$Iterator* $tmp1120 = $tmp1118(((panda$collections$Iterable*) $tmp1116));
goto block64;
block64:;
ITable* $tmp1121 = $tmp1120->$class->itable;
while ($tmp1121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1121 = $tmp1121->next;
}
$fn1123 $tmp1122 = $tmp1121->methods[0];
panda$core$Bit $tmp1124 = $tmp1122($tmp1120);
bool $tmp1125 = $tmp1124.value;
if ($tmp1125) goto block66; else goto block65;
block65:;
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1126 = $tmp1120->$class->itable;
while ($tmp1126->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1126 = $tmp1126->next;
}
$fn1128 $tmp1127 = $tmp1126->methods[1];
panda$core$Object* $tmp1129 = $tmp1127($tmp1120);
org$pandalanguage$pandac$ASTNode* $tmp1130 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1129)));
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) $tmp1129);
// line 305
panda$core$Int64 $tmp1131 = *(&local32);
org$pandalanguage$pandac$ASTNode* $tmp1132 = *(&local33);
panda$core$Int64 $tmp1133 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1132);
int64_t $tmp1134 = $tmp1131.value;
int64_t $tmp1135 = $tmp1133.value;
int64_t $tmp1136 = $tmp1134 + $tmp1135;
panda$core$Int64 $tmp1137 = (panda$core$Int64) {$tmp1136};
*(&local32) = $tmp1137;
panda$core$Panda$unref$panda$core$Object$Q($tmp1129);
org$pandalanguage$pandac$ASTNode* $tmp1138 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1138));
// unreffing w
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block64;
block66:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1120));
// line 307
panda$collections$ImmutableArray* $tmp1139 = *(&local31);
panda$core$Bit $tmp1140 = panda$core$Bit$init$builtin_bit($tmp1139 != NULL);
bool $tmp1141 = $tmp1140.value;
if ($tmp1141) goto block67; else goto block68;
block67:;
// line 308
panda$collections$ImmutableArray* $tmp1142 = *(&local31);
ITable* $tmp1143 = ((panda$collections$Iterable*) $tmp1142)->$class->itable;
while ($tmp1143->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1143 = $tmp1143->next;
}
$fn1145 $tmp1144 = $tmp1143->methods[0];
panda$collections$Iterator* $tmp1146 = $tmp1144(((panda$collections$Iterable*) $tmp1142));
goto block69;
block69:;
ITable* $tmp1147 = $tmp1146->$class->itable;
while ($tmp1147->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1147 = $tmp1147->next;
}
$fn1149 $tmp1148 = $tmp1147->methods[0];
panda$core$Bit $tmp1150 = $tmp1148($tmp1146);
bool $tmp1151 = $tmp1150.value;
if ($tmp1151) goto block71; else goto block70;
block70:;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1152 = $tmp1146->$class->itable;
while ($tmp1152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1152 = $tmp1152->next;
}
$fn1154 $tmp1153 = $tmp1152->methods[1];
panda$core$Object* $tmp1155 = $tmp1153($tmp1146);
org$pandalanguage$pandac$ASTNode* $tmp1156 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1156));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1155)));
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) $tmp1155);
// line 309
panda$core$Int64 $tmp1157 = *(&local32);
org$pandalanguage$pandac$ASTNode* $tmp1158 = *(&local34);
panda$core$Int64 $tmp1159 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1158);
int64_t $tmp1160 = $tmp1157.value;
int64_t $tmp1161 = $tmp1159.value;
int64_t $tmp1162 = $tmp1160 + $tmp1161;
panda$core$Int64 $tmp1163 = (panda$core$Int64) {$tmp1162};
*(&local32) = $tmp1163;
panda$core$Panda$unref$panda$core$Object$Q($tmp1155);
org$pandalanguage$pandac$ASTNode* $tmp1164 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1164));
// unreffing s
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block69;
block71:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
goto block68;
block68:;
// line 312
panda$core$Int64 $tmp1165 = *(&local32);
panda$collections$ImmutableArray* $tmp1166 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
// unreffing other
*(&local31) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1167 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
// unreffing whens
*(&local30) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1168 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1168));
// unreffing value
*(&local29) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1165;
block63:;
panda$core$Int64 $tmp1169 = (panda$core$Int64) {26};
panda$core$Bit $tmp1170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1169);
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block72; else goto block73;
block72:;
// line 314
panda$core$Int64 $tmp1172 = (panda$core$Int64) {10};
return $tmp1172;
block73:;
panda$core$Int64 $tmp1173 = (panda$core$Int64) {28};
panda$core$Bit $tmp1174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1173);
bool $tmp1175 = $tmp1174.value;
if ($tmp1175) goto block74; else goto block75;
block74:;
// line 316
panda$core$Int64 $tmp1176 = (panda$core$Int64) {1};
return $tmp1176;
block75:;
panda$core$Int64 $tmp1177 = (panda$core$Int64) {29};
panda$core$Bit $tmp1178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1177);
bool $tmp1179 = $tmp1178.value;
if ($tmp1179) goto block76; else goto block77;
block76:;
// line 318
panda$core$Int64 $tmp1180 = (panda$core$Int64) {0};
return $tmp1180;
block77:;
panda$core$Int64 $tmp1181 = (panda$core$Int64) {32};
panda$core$Bit $tmp1182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1181);
bool $tmp1183 = $tmp1182.value;
if ($tmp1183) goto block78; else goto block79;
block78:;
org$pandalanguage$pandac$Position* $tmp1184 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1185 = *$tmp1184;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1186 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1187 = *$tmp1186;
org$pandalanguage$pandac$ASTNode** $tmp1188 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1189 = *$tmp1188;
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1190 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1190));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1189));
*(&local35) = $tmp1189;
// line 320
panda$core$Int64 $tmp1191 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode* $tmp1192 = *(&local35);
panda$core$Int64 $tmp1193 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1192);
int64_t $tmp1194 = $tmp1191.value;
int64_t $tmp1195 = $tmp1193.value;
int64_t $tmp1196 = $tmp1194 + $tmp1195;
panda$core$Int64 $tmp1197 = (panda$core$Int64) {$tmp1196};
org$pandalanguage$pandac$ASTNode* $tmp1198 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1198));
// unreffing base
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1197;
block79:;
panda$core$Int64 $tmp1199 = (panda$core$Int64) {33};
panda$core$Bit $tmp1200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1199);
bool $tmp1201 = $tmp1200.value;
if ($tmp1201) goto block80; else goto block81;
block80:;
// line 322
panda$core$Int64 $tmp1202 = (panda$core$Int64) {1};
return $tmp1202;
block81:;
panda$core$Int64 $tmp1203 = (panda$core$Int64) {34};
panda$core$Bit $tmp1204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1203);
bool $tmp1205 = $tmp1204.value;
if ($tmp1205) goto block82; else goto block83;
block82:;
// line 324
panda$core$Int64 $tmp1206 = (panda$core$Int64) {1};
return $tmp1206;
block83:;
panda$core$Int64 $tmp1207 = (panda$core$Int64) {35};
panda$core$Bit $tmp1208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1207);
bool $tmp1209 = $tmp1208.value;
if ($tmp1209) goto block84; else goto block85;
block84:;
// line 326
panda$core$Int64 $tmp1210 = (panda$core$Int64) {1};
return $tmp1210;
block85:;
panda$core$Int64 $tmp1211 = (panda$core$Int64) {36};
panda$core$Bit $tmp1212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1211);
bool $tmp1213 = $tmp1212.value;
if ($tmp1213) goto block86; else goto block87;
block86:;
org$pandalanguage$pandac$Position* $tmp1214 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1215 = *$tmp1214;
org$pandalanguage$pandac$ASTNode** $tmp1216 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1217 = *$tmp1216;
*(&local36) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1218 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1218));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1217));
*(&local36) = $tmp1217;
// line 328
org$pandalanguage$pandac$ASTNode* $tmp1219 = *(&local36);
panda$core$Bit $tmp1220 = panda$core$Bit$init$builtin_bit($tmp1219 == NULL);
bool $tmp1221 = $tmp1220.value;
if ($tmp1221) goto block88; else goto block89;
block88:;
// line 329
panda$core$Int64 $tmp1222 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ASTNode* $tmp1223 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1223));
// unreffing value
*(&local36) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1222;
block89:;
// line 331
org$pandalanguage$pandac$ASTNode* $tmp1224 = *(&local36);
panda$core$Int64 $tmp1225 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1224);
org$pandalanguage$pandac$ASTNode* $tmp1226 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1226));
// unreffing value
*(&local36) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1225;
block87:;
panda$core$Int64 $tmp1227 = (panda$core$Int64) {37};
panda$core$Bit $tmp1228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1227);
bool $tmp1229 = $tmp1228.value;
if ($tmp1229) goto block90; else goto block91;
block90:;
// line 333
panda$core$Int64 $tmp1230 = (panda$core$Int64) {1};
return $tmp1230;
block91:;
panda$core$Int64 $tmp1231 = (panda$core$Int64) {38};
panda$core$Bit $tmp1232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1231);
bool $tmp1233 = $tmp1232.value;
if ($tmp1233) goto block92; else goto block93;
block92:;
// line 335
panda$core$Int64 $tmp1234 = (panda$core$Int64) {1};
return $tmp1234;
block93:;
panda$core$Int64 $tmp1235 = (panda$core$Int64) {39};
panda$core$Bit $tmp1236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1235);
bool $tmp1237 = $tmp1236.value;
if ($tmp1237) goto block94; else goto block95;
block94:;
// line 337
panda$core$Int64 $tmp1238 = (panda$core$Int64) {1};
return $tmp1238;
block95:;
panda$core$Int64 $tmp1239 = (panda$core$Int64) {42};
panda$core$Bit $tmp1240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1239);
bool $tmp1241 = $tmp1240.value;
if ($tmp1241) goto block96; else goto block97;
block96:;
// line 339
panda$core$Int64 $tmp1242 = (panda$core$Int64) {0};
return $tmp1242;
block97:;
panda$core$Int64 $tmp1243 = (panda$core$Int64) {43};
panda$core$Bit $tmp1244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1243);
bool $tmp1245 = $tmp1244.value;
if ($tmp1245) goto block98; else goto block99;
block98:;
// line 341
panda$core$Int64 $tmp1246 = (panda$core$Int64) {10};
return $tmp1246;
block99:;
panda$core$Int64 $tmp1247 = (panda$core$Int64) {45};
panda$core$Bit $tmp1248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1247);
bool $tmp1249 = $tmp1248.value;
if ($tmp1249) goto block100; else goto block101;
block100:;
// line 343
panda$core$Int64 $tmp1250 = (panda$core$Int64) {10};
return $tmp1250;
block101:;
panda$core$Int64 $tmp1251 = (panda$core$Int64) {47};
panda$core$Bit $tmp1252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1251);
bool $tmp1253 = $tmp1252.value;
if ($tmp1253) goto block102; else goto block103;
block102:;
org$pandalanguage$pandac$Position* $tmp1254 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1255 = *$tmp1254;
org$pandalanguage$pandac$Variable$Kind* $tmp1256 = (org$pandalanguage$pandac$Variable$Kind*) (param1->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp1257 = *$tmp1256;
panda$collections$ImmutableArray** $tmp1258 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1259 = *$tmp1258;
*(&local37) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1260 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1260));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1259));
*(&local37) = $tmp1259;
// line 345
panda$core$Int64 $tmp1261 = (panda$core$Int64) {0};
*(&local38) = $tmp1261;
// line 346
panda$collections$ImmutableArray* $tmp1262 = *(&local37);
ITable* $tmp1263 = ((panda$collections$Iterable*) $tmp1262)->$class->itable;
while ($tmp1263->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1263 = $tmp1263->next;
}
$fn1265 $tmp1264 = $tmp1263->methods[0];
panda$collections$Iterator* $tmp1266 = $tmp1264(((panda$collections$Iterable*) $tmp1262));
goto block104;
block104:;
ITable* $tmp1267 = $tmp1266->$class->itable;
while ($tmp1267->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1267 = $tmp1267->next;
}
$fn1269 $tmp1268 = $tmp1267->methods[0];
panda$core$Bit $tmp1270 = $tmp1268($tmp1266);
bool $tmp1271 = $tmp1270.value;
if ($tmp1271) goto block106; else goto block105;
block105:;
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1272 = $tmp1266->$class->itable;
while ($tmp1272->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1272 = $tmp1272->next;
}
$fn1274 $tmp1273 = $tmp1272->methods[1];
panda$core$Object* $tmp1275 = $tmp1273($tmp1266);
org$pandalanguage$pandac$ASTNode* $tmp1276 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1276));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1275)));
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) $tmp1275);
// line 347
panda$core$Int64 $tmp1277 = *(&local38);
org$pandalanguage$pandac$ASTNode* $tmp1278 = *(&local39);
panda$core$Int64 $tmp1279 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1278);
int64_t $tmp1280 = $tmp1277.value;
int64_t $tmp1281 = $tmp1279.value;
int64_t $tmp1282 = $tmp1280 + $tmp1281;
panda$core$Int64 $tmp1283 = (panda$core$Int64) {$tmp1282};
*(&local38) = $tmp1283;
panda$core$Panda$unref$panda$core$Object$Q($tmp1275);
org$pandalanguage$pandac$ASTNode* $tmp1284 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1284));
// unreffing decl
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block104;
block106:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
// line 349
panda$core$Int64 $tmp1285 = *(&local38);
panda$collections$ImmutableArray* $tmp1286 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1286));
// unreffing decls
*(&local37) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1285;
block103:;
panda$core$Int64 $tmp1287 = (panda$core$Int64) {48};
panda$core$Bit $tmp1288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1287);
bool $tmp1289 = $tmp1288.value;
if ($tmp1289) goto block107; else goto block108;
block107:;
org$pandalanguage$pandac$Position* $tmp1290 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1291 = *$tmp1290;
panda$collections$ImmutableArray** $tmp1292 = (panda$collections$ImmutableArray**) (param1->$data + 16);
panda$collections$ImmutableArray* $tmp1293 = *$tmp1292;
*(&local40) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1294 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1294));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1293));
*(&local40) = $tmp1293;
panda$collections$ImmutableArray** $tmp1295 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1296 = *$tmp1295;
*(&local41) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1297 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1297));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1296));
*(&local41) = $tmp1296;
// line 351
panda$core$Int64 $tmp1298 = (panda$core$Int64) {0};
*(&local42) = $tmp1298;
// line 352
panda$collections$ImmutableArray* $tmp1299 = *(&local40);
ITable* $tmp1300 = ((panda$collections$Iterable*) $tmp1299)->$class->itable;
while ($tmp1300->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1300 = $tmp1300->next;
}
$fn1302 $tmp1301 = $tmp1300->methods[0];
panda$collections$Iterator* $tmp1303 = $tmp1301(((panda$collections$Iterable*) $tmp1299));
goto block109;
block109:;
ITable* $tmp1304 = $tmp1303->$class->itable;
while ($tmp1304->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1304 = $tmp1304->next;
}
$fn1306 $tmp1305 = $tmp1304->methods[0];
panda$core$Bit $tmp1307 = $tmp1305($tmp1303);
bool $tmp1308 = $tmp1307.value;
if ($tmp1308) goto block111; else goto block110;
block110:;
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1309 = $tmp1303->$class->itable;
while ($tmp1309->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1309 = $tmp1309->next;
}
$fn1311 $tmp1310 = $tmp1309->methods[1];
panda$core$Object* $tmp1312 = $tmp1310($tmp1303);
org$pandalanguage$pandac$ASTNode* $tmp1313 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1313));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1312)));
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) $tmp1312);
// line 353
panda$core$Int64 $tmp1314 = *(&local42);
org$pandalanguage$pandac$ASTNode* $tmp1315 = *(&local43);
panda$core$Int64 $tmp1316 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1315);
int64_t $tmp1317 = $tmp1314.value;
int64_t $tmp1318 = $tmp1316.value;
int64_t $tmp1319 = $tmp1317 + $tmp1318;
panda$core$Int64 $tmp1320 = (panda$core$Int64) {$tmp1319};
*(&local42) = $tmp1320;
panda$core$Panda$unref$panda$core$Object$Q($tmp1312);
org$pandalanguage$pandac$ASTNode* $tmp1321 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1321));
// unreffing test
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block109;
block111:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1303));
// line 355
panda$collections$ImmutableArray* $tmp1322 = *(&local41);
ITable* $tmp1323 = ((panda$collections$Iterable*) $tmp1322)->$class->itable;
while ($tmp1323->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1323 = $tmp1323->next;
}
$fn1325 $tmp1324 = $tmp1323->methods[0];
panda$collections$Iterator* $tmp1326 = $tmp1324(((panda$collections$Iterable*) $tmp1322));
goto block112;
block112:;
ITable* $tmp1327 = $tmp1326->$class->itable;
while ($tmp1327->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1327 = $tmp1327->next;
}
$fn1329 $tmp1328 = $tmp1327->methods[0];
panda$core$Bit $tmp1330 = $tmp1328($tmp1326);
bool $tmp1331 = $tmp1330.value;
if ($tmp1331) goto block114; else goto block113;
block113:;
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1332 = $tmp1326->$class->itable;
while ($tmp1332->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1332 = $tmp1332->next;
}
$fn1334 $tmp1333 = $tmp1332->methods[1];
panda$core$Object* $tmp1335 = $tmp1333($tmp1326);
org$pandalanguage$pandac$ASTNode* $tmp1336 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1336));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1335)));
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) $tmp1335);
// line 356
panda$core$Int64 $tmp1337 = *(&local42);
org$pandalanguage$pandac$ASTNode* $tmp1338 = *(&local44);
panda$core$Int64 $tmp1339 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1338);
int64_t $tmp1340 = $tmp1337.value;
int64_t $tmp1341 = $tmp1339.value;
int64_t $tmp1342 = $tmp1340 + $tmp1341;
panda$core$Int64 $tmp1343 = (panda$core$Int64) {$tmp1342};
*(&local42) = $tmp1343;
panda$core$Panda$unref$panda$core$Object$Q($tmp1335);
org$pandalanguage$pandac$ASTNode* $tmp1344 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1344));
// unreffing s
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block112;
block114:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1326));
// line 358
panda$core$Int64 $tmp1345 = *(&local42);
panda$collections$ImmutableArray* $tmp1346 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1346));
// unreffing statements
*(&local41) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1347 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1347));
// unreffing tests
*(&local40) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1345;
block108:;
panda$core$Int64 $tmp1348 = (panda$core$Int64) {49};
panda$core$Bit $tmp1349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp1348);
bool $tmp1350 = $tmp1349.value;
if ($tmp1350) goto block115; else goto block116;
block115:;
org$pandalanguage$pandac$Position* $tmp1351 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1352 = *$tmp1351;
panda$core$String** $tmp1353 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp1354 = *$tmp1353;
org$pandalanguage$pandac$ASTNode** $tmp1355 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1356 = *$tmp1355;
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1357 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1357));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1356));
*(&local45) = $tmp1356;
panda$collections$ImmutableArray** $tmp1358 = (panda$collections$ImmutableArray**) (param1->$data + 32);
panda$collections$ImmutableArray* $tmp1359 = *$tmp1358;
*(&local46) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1360 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1360));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1359));
*(&local46) = $tmp1359;
// line 360
org$pandalanguage$pandac$ASTNode* $tmp1361 = *(&local45);
panda$core$Int64 $tmp1362 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1361);
*(&local47) = $tmp1362;
// line 361
panda$collections$ImmutableArray* $tmp1363 = *(&local46);
ITable* $tmp1364 = ((panda$collections$Iterable*) $tmp1363)->$class->itable;
while ($tmp1364->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1364 = $tmp1364->next;
}
$fn1366 $tmp1365 = $tmp1364->methods[0];
panda$collections$Iterator* $tmp1367 = $tmp1365(((panda$collections$Iterable*) $tmp1363));
goto block117;
block117:;
ITable* $tmp1368 = $tmp1367->$class->itable;
while ($tmp1368->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1368 = $tmp1368->next;
}
$fn1370 $tmp1369 = $tmp1368->methods[0];
panda$core$Bit $tmp1371 = $tmp1369($tmp1367);
bool $tmp1372 = $tmp1371.value;
if ($tmp1372) goto block119; else goto block118;
block118:;
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1373 = $tmp1367->$class->itable;
while ($tmp1373->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1373 = $tmp1373->next;
}
$fn1375 $tmp1374 = $tmp1373->methods[1];
panda$core$Object* $tmp1376 = $tmp1374($tmp1367);
org$pandalanguage$pandac$ASTNode* $tmp1377 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1377));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1376)));
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) $tmp1376);
// line 362
panda$core$Int64 $tmp1378 = *(&local47);
org$pandalanguage$pandac$ASTNode* $tmp1379 = *(&local48);
panda$core$Int64 $tmp1380 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1379);
int64_t $tmp1381 = $tmp1378.value;
int64_t $tmp1382 = $tmp1380.value;
int64_t $tmp1383 = $tmp1381 + $tmp1382;
panda$core$Int64 $tmp1384 = (panda$core$Int64) {$tmp1383};
*(&local47) = $tmp1384;
panda$core$Panda$unref$panda$core$Object$Q($tmp1376);
org$pandalanguage$pandac$ASTNode* $tmp1385 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1385));
// unreffing s
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block117;
block119:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1367));
// line 364
panda$core$Int64 $tmp1386 = *(&local47);
panda$collections$ImmutableArray* $tmp1387 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1387));
// unreffing statements
*(&local46) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1388 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1388));
// unreffing test
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1386;
block116:;
// line 366
panda$core$Bit $tmp1389 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1390 = $tmp1389.value;
if ($tmp1390) goto block120; else goto block121;
block121:;
panda$core$Int64 $tmp1391 = (panda$core$Int64) {366};
panda$core$String* $tmp1392 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1393, ((panda$core$Object*) param1));
panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1392, &$s1395);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1396, $tmp1391, $tmp1394);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1392));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1394));
abort(); // unreachable
block120:;
goto block1;
block1:;
panda$core$Bit $tmp1397 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1398 = $tmp1397.value;
if ($tmp1398) goto block122; else goto block123;
block123:;
panda$core$Int64 $tmp1399 = (panda$core$Int64) {231};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1400, $tmp1399, &$s1401);
abort(); // unreachable
block122:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Annotations* param1, panda$collections$ImmutableArray* param2) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 371
panda$core$Weak** $tmp1402 = &param0->compiler;
panda$core$Weak* $tmp1403 = *$tmp1402;
panda$core$Object* $tmp1404 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1403);
panda$core$Panda$unref$panda$core$Object$Q($tmp1404);
org$pandalanguage$pandac$Compiler$Settings** $tmp1405 = &((org$pandalanguage$pandac$Compiler*) $tmp1404)->settings;
org$pandalanguage$pandac$Compiler$Settings* $tmp1406 = *$tmp1405;
panda$core$Int64* $tmp1407 = &$tmp1406->optimizationLevel;
panda$core$Int64 $tmp1408 = *$tmp1407;
panda$core$Int64 $tmp1409 = (panda$core$Int64) {0};
int64_t $tmp1410 = $tmp1408.value;
int64_t $tmp1411 = $tmp1409.value;
bool $tmp1412 = $tmp1410 > $tmp1411;
panda$core$Bit $tmp1413 = (panda$core$Bit) {$tmp1412};
bool $tmp1414 = $tmp1413.value;
if ($tmp1414) goto block1; else goto block2;
block1:;
panda$core$Bit $tmp1415 = org$pandalanguage$pandac$Annotations$get_isInline$R$panda$core$Bit(param1);
panda$core$Bit $tmp1416 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1415);
*(&local1) = $tmp1416;
goto block3;
block2:;
*(&local1) = $tmp1413;
goto block3;
block3:;
panda$core$Bit $tmp1417 = *(&local1);
bool $tmp1418 = $tmp1417.value;
if ($tmp1418) goto block4; else goto block5;
block4:;
panda$core$Bit $tmp1419 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit(param1);
*(&local0) = $tmp1419;
goto block6;
block5:;
*(&local0) = $tmp1417;
goto block6;
block6:;
panda$core$Bit $tmp1420 = *(&local0);
bool $tmp1421 = $tmp1420.value;
if ($tmp1421) goto block7; else goto block8;
block7:;
// line 373
panda$core$Int64 $tmp1422 = (panda$core$Int64) {0};
*(&local2) = $tmp1422;
// line 374
ITable* $tmp1423 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp1423->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1423 = $tmp1423->next;
}
$fn1425 $tmp1424 = $tmp1423->methods[0];
panda$collections$Iterator* $tmp1426 = $tmp1424(((panda$collections$Iterable*) param2));
goto block9;
block9:;
ITable* $tmp1427 = $tmp1426->$class->itable;
while ($tmp1427->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1427 = $tmp1427->next;
}
$fn1429 $tmp1428 = $tmp1427->methods[0];
panda$core$Bit $tmp1430 = $tmp1428($tmp1426);
bool $tmp1431 = $tmp1430.value;
if ($tmp1431) goto block11; else goto block10;
block10:;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1432 = $tmp1426->$class->itable;
while ($tmp1432->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1432 = $tmp1432->next;
}
$fn1434 $tmp1433 = $tmp1432->methods[1];
panda$core$Object* $tmp1435 = $tmp1433($tmp1426);
org$pandalanguage$pandac$ASTNode* $tmp1436 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1436));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1435)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) $tmp1435);
// line 375
panda$core$Int64 $tmp1437 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1438 = *(&local3);
panda$core$Int64 $tmp1439 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1438);
int64_t $tmp1440 = $tmp1437.value;
int64_t $tmp1441 = $tmp1439.value;
int64_t $tmp1442 = $tmp1440 + $tmp1441;
panda$core$Int64 $tmp1443 = (panda$core$Int64) {$tmp1442};
*(&local2) = $tmp1443;
// line 376
panda$core$Int64 $tmp1444 = *(&local2);
panda$core$Int64 $tmp1445 = (panda$core$Int64) {10};
int64_t $tmp1446 = $tmp1444.value;
int64_t $tmp1447 = $tmp1445.value;
bool $tmp1448 = $tmp1446 > $tmp1447;
panda$core$Bit $tmp1449 = (panda$core$Bit) {$tmp1448};
bool $tmp1450 = $tmp1449.value;
if ($tmp1450) goto block12; else goto block13;
block12:;
// line 377
panda$core$Bit $tmp1451 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp1452 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1452));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1451;
block13:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1435);
org$pandalanguage$pandac$ASTNode* $tmp1453 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1453));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1426));
// line 380
panda$core$Bit $tmp1454 = panda$core$Bit$init$builtin_bit(true);
return $tmp1454;
block8:;
// line 382
panda$core$Bit $tmp1455 = panda$core$Bit$init$builtin_bit(false);
return $tmp1455;

}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ClassDecl* param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$collections$ImmutableArray* param4, org$pandalanguage$pandac$MethodDecl$Kind param5, panda$core$String* param6, panda$collections$ImmutableArray* param7, panda$collections$ImmutableArray* param8, org$pandalanguage$pandac$ASTNode* param9, panda$collections$ImmutableArray* param10) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$Position local1;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$Annotations* local3 = NULL;
panda$core$Bit local4;
panda$core$Bit local5;
panda$collections$Array* local6 = NULL;
panda$core$String* local7 = NULL;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
panda$core$String* local9 = NULL;
org$pandalanguage$pandac$Type* local10 = NULL;
panda$core$String* local11 = NULL;
panda$core$String* local12 = NULL;
org$pandalanguage$pandac$ASTNode* local13 = NULL;
panda$collections$Array* local14 = NULL;
org$pandalanguage$pandac$ASTNode* local15 = NULL;
panda$core$String* local16 = NULL;
org$pandalanguage$pandac$ASTNode* local17 = NULL;
org$pandalanguage$pandac$Type* local18 = NULL;
panda$core$Bit local19;
panda$core$Bit local20;
panda$core$Bit local21;
// line 389
*(&local0) = ((panda$core$String*) NULL);
// line 391
panda$core$Bit $tmp1456 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1457 = $tmp1456.value;
if ($tmp1457) goto block1; else goto block3;
block1:;
// line 392
panda$core$String* $tmp1458 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1458));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 395
panda$core$Int64* $tmp1459 = &param3->$rawValue;
panda$core$Int64 $tmp1460 = *$tmp1459;
panda$core$Int64 $tmp1461 = (panda$core$Int64) {38};
panda$core$Bit $tmp1462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1460, $tmp1461);
bool $tmp1463 = $tmp1462.value;
if ($tmp1463) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp1464 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp1465 = *$tmp1464;
*(&local1) = $tmp1465;
panda$core$String** $tmp1466 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp1467 = *$tmp1466;
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp1468 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1468));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1467));
*(&local2) = $tmp1467;
// line 397
panda$core$String* $tmp1469 = *(&local2);
panda$core$String* $tmp1470 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1470));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1469));
*(&local0) = $tmp1469;
panda$core$String* $tmp1471 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1471));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 399
panda$core$Bit $tmp1472 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1473 = $tmp1472.value;
if ($tmp1473) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1474 = (panda$core$Int64) {399};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1475, $tmp1474);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 402
org$pandalanguage$pandac$Annotations* $tmp1476 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param4);
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
org$pandalanguage$pandac$Annotations* $tmp1477 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1477));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1476));
*(&local3) = $tmp1476;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1476));
// line 403
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1478;
$tmp1478 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1478->value = param5;
panda$core$Int64 $tmp1479 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1480 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1479);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1481;
$tmp1481 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1481->value = $tmp1480;
ITable* $tmp1482 = ((panda$core$Equatable*) $tmp1478)->$class->itable;
while ($tmp1482->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1482 = $tmp1482->next;
}
$fn1484 $tmp1483 = $tmp1482->methods[1];
panda$core$Bit $tmp1485 = $tmp1483(((panda$core$Equatable*) $tmp1478), ((panda$core$Equatable*) $tmp1481));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1478)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1481)));
bool $tmp1486 = $tmp1485.value;
if ($tmp1486) goto block9; else goto block10;
block9:;
org$pandalanguage$pandac$Annotations** $tmp1487 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp1488 = *$tmp1487;
panda$core$Bit $tmp1489 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit($tmp1488);
*(&local5) = $tmp1489;
goto block11;
block10:;
*(&local5) = $tmp1485;
goto block11;
block11:;
panda$core$Bit $tmp1490 = *(&local5);
bool $tmp1491 = $tmp1490.value;
if ($tmp1491) goto block12; else goto block13;
block12:;
*(&local4) = $tmp1490;
goto block14;
block13:;
org$pandalanguage$pandac$Annotations* $tmp1492 = *(&local3);
panda$core$Bit $tmp1493 = org$pandalanguage$pandac$Annotations$get_isPrivate$R$panda$core$Bit($tmp1492);
*(&local4) = $tmp1493;
goto block14;
block14:;
panda$core$Bit $tmp1494 = *(&local4);
bool $tmp1495 = $tmp1494.value;
if ($tmp1495) goto block15; else goto block16;
block15:;
// line 404
org$pandalanguage$pandac$Annotations* $tmp1496 = *(&local3);
panda$core$Int64* $tmp1497 = &$tmp1496->flags;
panda$core$Int64 $tmp1498 = *$tmp1497;
panda$core$Int64 $tmp1499 = (panda$core$Int64) {256};
panda$core$Int64 $tmp1500 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1498, $tmp1499);
panda$core$Int64* $tmp1501 = &$tmp1496->flags;
*$tmp1501 = $tmp1500;
goto block16;
block16:;
// line 406
*(&local6) = ((panda$collections$Array*) NULL);
// line 407
panda$core$Bit $tmp1502 = panda$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1503 = $tmp1502.value;
if ($tmp1503) goto block17; else goto block19;
block17:;
// line 408
panda$collections$Array* $tmp1504 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1504);
panda$collections$Array* $tmp1505 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1505));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1504));
*(&local6) = $tmp1504;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1504));
// line 409
panda$core$String** $tmp1506 = &param1->name;
panda$core$String* $tmp1507 = *$tmp1506;
panda$core$String* $tmp1508 = panda$core$String$convert$R$panda$core$String($tmp1507);
panda$core$String* $tmp1509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1508, &$s1510);
panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1509, param6);
panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1511, &$s1513);
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp1514 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1512));
*(&local7) = $tmp1512;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1508));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1509));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1511));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1512));
// line 410
ITable* $tmp1515 = ((panda$collections$Iterable*) param7)->$class->itable;
while ($tmp1515->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1515 = $tmp1515->next;
}
$fn1517 $tmp1516 = $tmp1515->methods[0];
panda$collections$Iterator* $tmp1518 = $tmp1516(((panda$collections$Iterable*) param7));
goto block20;
block20:;
ITable* $tmp1519 = $tmp1518->$class->itable;
while ($tmp1519->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1519 = $tmp1519->next;
}
$fn1521 $tmp1520 = $tmp1519->methods[0];
panda$core$Bit $tmp1522 = $tmp1520($tmp1518);
bool $tmp1523 = $tmp1522.value;
if ($tmp1523) goto block22; else goto block21;
block21:;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1524 = $tmp1518->$class->itable;
while ($tmp1524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1524 = $tmp1524->next;
}
$fn1526 $tmp1525 = $tmp1524->methods[1];
panda$core$Object* $tmp1527 = $tmp1525($tmp1518);
org$pandalanguage$pandac$ASTNode* $tmp1528 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1528));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1527)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) $tmp1527);
// line 411
*(&local9) = ((panda$core$String*) NULL);
// line 412
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
// line 413
org$pandalanguage$pandac$ASTNode* $tmp1529 = *(&local8);
panda$core$Int64* $tmp1530 = &$tmp1529->$rawValue;
panda$core$Int64 $tmp1531 = *$tmp1530;
panda$core$Int64 $tmp1532 = (panda$core$Int64) {20};
panda$core$Bit $tmp1533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1531, $tmp1532);
bool $tmp1534 = $tmp1533.value;
if ($tmp1534) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp1535 = (org$pandalanguage$pandac$Position*) ($tmp1529->$data + 0);
org$pandalanguage$pandac$Position $tmp1536 = *$tmp1535;
panda$core$String** $tmp1537 = (panda$core$String**) ($tmp1529->$data + 16);
panda$core$String* $tmp1538 = *$tmp1537;
*(&local11) = ((panda$core$String*) NULL);
panda$core$String* $tmp1539 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1539));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1538));
*(&local11) = $tmp1538;
// line 415
panda$core$String* $tmp1540 = *(&local11);
panda$core$String* $tmp1541 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1541));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1540));
*(&local9) = $tmp1540;
// line 416
org$pandalanguage$pandac$Type* $tmp1542 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp1543 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1543));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1542));
*(&local10) = $tmp1542;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1542));
panda$core$String* $tmp1544 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1544));
// unreffing id
*(&local11) = ((panda$core$String*) NULL);
goto block23;
block25:;
panda$core$Int64 $tmp1545 = (panda$core$Int64) {44};
panda$core$Bit $tmp1546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1531, $tmp1545);
bool $tmp1547 = $tmp1546.value;
if ($tmp1547) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp1548 = (org$pandalanguage$pandac$Position*) ($tmp1529->$data + 0);
org$pandalanguage$pandac$Position $tmp1549 = *$tmp1548;
panda$core$String** $tmp1550 = (panda$core$String**) ($tmp1529->$data + 16);
panda$core$String* $tmp1551 = *$tmp1550;
*(&local12) = ((panda$core$String*) NULL);
panda$core$String* $tmp1552 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1552));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1551));
*(&local12) = $tmp1551;
org$pandalanguage$pandac$ASTNode** $tmp1553 = (org$pandalanguage$pandac$ASTNode**) ($tmp1529->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1554 = *$tmp1553;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1555 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1554));
*(&local13) = $tmp1554;
// line 418
panda$core$String* $tmp1556 = *(&local12);
panda$core$String* $tmp1557 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1557));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1556));
*(&local9) = $tmp1556;
// line 419
org$pandalanguage$pandac$ASTNode* $tmp1558 = *(&local13);
org$pandalanguage$pandac$Type* $tmp1559 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1558);
org$pandalanguage$pandac$Type* $tmp1560 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1560));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1559));
*(&local10) = $tmp1559;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1559));
org$pandalanguage$pandac$ASTNode* $tmp1561 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1561));
// unreffing type
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1562 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1562));
// unreffing id
*(&local12) = ((panda$core$String*) NULL);
goto block23;
block27:;
// line 421
panda$core$Bit $tmp1563 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1564 = $tmp1563.value;
if ($tmp1564) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp1565 = (panda$core$Int64) {421};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1566, $tmp1565);
abort(); // unreachable
block28:;
goto block23;
block23:;
// line 423
panda$collections$Array* $tmp1567 = *(&local6);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1568 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
org$pandalanguage$pandac$ASTNode* $tmp1569 = *(&local8);
$fn1571 $tmp1570 = ($fn1571) $tmp1569->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1572 = $tmp1570($tmp1569);
panda$core$String* $tmp1573 = *(&local7);
panda$core$String* $tmp1574 = *(&local9);
org$pandalanguage$pandac$Type* $tmp1575 = *(&local10);
org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1568, $tmp1572, $tmp1573, $tmp1574, $tmp1575);
panda$collections$Array$add$panda$collections$Array$T($tmp1567, ((panda$core$Object*) $tmp1568));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1568));
panda$core$Panda$unref$panda$core$Object$Q($tmp1527);
org$pandalanguage$pandac$Type* $tmp1576 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1576));
// unreffing bound
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp1577 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1577));
// unreffing parameterName
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1578 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1578));
// unreffing p
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block20;
block22:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1518));
panda$core$String* $tmp1579 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1579));
// unreffing fullName
*(&local7) = ((panda$core$String*) NULL);
goto block18;
block19:;
// line 1
// line 428
panda$collections$Array* $tmp1580 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1580));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
*(&local6) = ((panda$collections$Array*) NULL);
goto block18;
block18:;
// line 430
panda$collections$Array* $tmp1581 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1581);
*(&local14) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1582 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1582));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1581));
*(&local14) = $tmp1581;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1581));
// line 431
ITable* $tmp1583 = ((panda$collections$Iterable*) param8)->$class->itable;
while ($tmp1583->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1583 = $tmp1583->next;
}
$fn1585 $tmp1584 = $tmp1583->methods[0];
panda$collections$Iterator* $tmp1586 = $tmp1584(((panda$collections$Iterable*) param8));
goto block30;
block30:;
ITable* $tmp1587 = $tmp1586->$class->itable;
while ($tmp1587->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1587 = $tmp1587->next;
}
$fn1589 $tmp1588 = $tmp1587->methods[0];
panda$core$Bit $tmp1590 = $tmp1588($tmp1586);
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block32; else goto block31;
block31:;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1592 = $tmp1586->$class->itable;
while ($tmp1592->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1592 = $tmp1592->next;
}
$fn1594 $tmp1593 = $tmp1592->methods[1];
panda$core$Object* $tmp1595 = $tmp1593($tmp1586);
org$pandalanguage$pandac$ASTNode* $tmp1596 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1596));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1595)));
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) $tmp1595);
// line 432
org$pandalanguage$pandac$ASTNode* $tmp1597 = *(&local15);
panda$core$Int64* $tmp1598 = &$tmp1597->$rawValue;
panda$core$Int64 $tmp1599 = *$tmp1598;
panda$core$Int64 $tmp1600 = (panda$core$Int64) {31};
panda$core$Bit $tmp1601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1599, $tmp1600);
bool $tmp1602 = $tmp1601.value;
if ($tmp1602) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp1603 = (org$pandalanguage$pandac$Position*) ($tmp1597->$data + 0);
org$pandalanguage$pandac$Position $tmp1604 = *$tmp1603;
panda$core$String** $tmp1605 = (panda$core$String**) ($tmp1597->$data + 16);
panda$core$String* $tmp1606 = *$tmp1605;
*(&local16) = ((panda$core$String*) NULL);
panda$core$String* $tmp1607 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1607));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1606));
*(&local16) = $tmp1606;
org$pandalanguage$pandac$ASTNode** $tmp1608 = (org$pandalanguage$pandac$ASTNode**) ($tmp1597->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1609 = *$tmp1608;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1610 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1610));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1609));
*(&local17) = $tmp1609;
// line 434
panda$collections$Array* $tmp1611 = *(&local14);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1612 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
panda$core$String* $tmp1613 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1614 = *(&local17);
org$pandalanguage$pandac$Type* $tmp1615 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1614);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1612, $tmp1613, $tmp1615);
panda$collections$Array$add$panda$collections$Array$T($tmp1611, ((panda$core$Object*) $tmp1612));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1612));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1615));
org$pandalanguage$pandac$ASTNode* $tmp1616 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1616));
// unreffing type
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1617 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1617));
// unreffing name
*(&local16) = ((panda$core$String*) NULL);
goto block33;
block35:;
// line 436
panda$core$Bit $tmp1618 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1619 = $tmp1618.value;
if ($tmp1619) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp1620 = (panda$core$Int64) {436};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1621, $tmp1620);
abort(); // unreachable
block36:;
goto block33;
block33:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1595);
org$pandalanguage$pandac$ASTNode* $tmp1622 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1622));
// unreffing p
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block30;
block32:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1586));
// line 439
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
// line 440
panda$core$Bit $tmp1623 = panda$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1624 = $tmp1623.value;
if ($tmp1624) goto block38; else goto block40;
block38:;
// line 441
org$pandalanguage$pandac$Type* $tmp1625 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, param9);
org$pandalanguage$pandac$Type* $tmp1626 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1626));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1625));
*(&local18) = $tmp1625;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1625));
goto block39;
block40:;
// line 1
// line 444
org$pandalanguage$pandac$Type* $tmp1627 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp1628 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1627));
*(&local18) = $tmp1627;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1627));
goto block39;
block39:;
// line 446
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1629;
$tmp1629 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1629->value = param5;
panda$core$Int64 $tmp1630 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1631 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1630);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1632;
$tmp1632 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1632->value = $tmp1631;
ITable* $tmp1633 = ((panda$core$Equatable*) $tmp1629)->$class->itable;
while ($tmp1633->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1633 = $tmp1633->next;
}
$fn1635 $tmp1634 = $tmp1633->methods[0];
panda$core$Bit $tmp1636 = $tmp1634(((panda$core$Equatable*) $tmp1629), ((panda$core$Equatable*) $tmp1632));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1629)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1632)));
bool $tmp1637 = $tmp1636.value;
if ($tmp1637) goto block41; else goto block42;
block41:;
org$pandalanguage$pandac$Type* $tmp1638 = *(&local18);
org$pandalanguage$pandac$Type* $tmp1639 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1640 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1638, $tmp1639);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1639));
*(&local19) = $tmp1640;
goto block43;
block42:;
*(&local19) = $tmp1636;
goto block43;
block43:;
panda$core$Bit $tmp1641 = *(&local19);
bool $tmp1642 = $tmp1641.value;
if ($tmp1642) goto block44; else goto block45;
block44:;
// line 447
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param2, &$s1643);
goto block45;
block45:;
// line 449
panda$core$Bit $tmp1644 = panda$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1645 = $tmp1644.value;
if ($tmp1645) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Annotations* $tmp1646 = *(&local3);
panda$core$Bit $tmp1647 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(param0, $tmp1646, param10);
*(&local20) = $tmp1647;
goto block48;
block47:;
*(&local20) = $tmp1644;
goto block48;
block48:;
panda$core$Bit $tmp1648 = *(&local20);
bool $tmp1649 = $tmp1648.value;
if ($tmp1649) goto block49; else goto block50;
block49:;
// line 450
org$pandalanguage$pandac$Annotations* $tmp1650 = *(&local3);
panda$core$Int64* $tmp1651 = &$tmp1650->flags;
panda$core$Int64 $tmp1652 = *$tmp1651;
panda$core$Int64 $tmp1653 = (panda$core$Int64) {1024};
panda$core$Int64 $tmp1654 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1652, $tmp1653);
panda$core$Int64* $tmp1655 = &$tmp1650->flags;
*$tmp1655 = $tmp1654;
goto block50;
block50:;
// line 452
panda$core$Bit $tmp1656 = panda$core$Bit$init$builtin_bit(param10 == NULL);
bool $tmp1657 = $tmp1656.value;
if ($tmp1657) goto block51; else goto block52;
block51:;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp1658 = &param1->classKind;
org$pandalanguage$pandac$ClassDecl$Kind $tmp1659 = *$tmp1658;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp1660;
$tmp1660 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp1660->value = $tmp1659;
panda$core$Int64 $tmp1661 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp1662 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp1661);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp1663;
$tmp1663 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp1663->value = $tmp1662;
ITable* $tmp1664 = ((panda$core$Equatable*) $tmp1660)->$class->itable;
while ($tmp1664->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1664 = $tmp1664->next;
}
$fn1666 $tmp1665 = $tmp1664->methods[0];
panda$core$Bit $tmp1667 = $tmp1665(((panda$core$Equatable*) $tmp1660), ((panda$core$Equatable*) $tmp1663));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1660)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1663)));
*(&local21) = $tmp1667;
goto block53;
block52:;
*(&local21) = $tmp1656;
goto block53;
block53:;
panda$core$Bit $tmp1668 = *(&local21);
bool $tmp1669 = $tmp1668.value;
if ($tmp1669) goto block54; else goto block55;
block54:;
// line 453
org$pandalanguage$pandac$Annotations* $tmp1670 = *(&local3);
panda$core$Int64* $tmp1671 = &$tmp1670->flags;
panda$core$Int64 $tmp1672 = *$tmp1671;
panda$core$Int64 $tmp1673 = (panda$core$Int64) {512};
panda$core$Int64 $tmp1674 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp1672, $tmp1673);
panda$core$Int64 $tmp1675 = (panda$core$Int64) {0};
panda$core$Bit $tmp1676 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1674, $tmp1675);
bool $tmp1677 = $tmp1676.value;
if ($tmp1677) goto block56; else goto block57;
block56:;
// line 454
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param2, &$s1678);
goto block57;
block57:;
// line 457
org$pandalanguage$pandac$Annotations* $tmp1679 = *(&local3);
panda$core$Int64* $tmp1680 = &$tmp1679->flags;
panda$core$Int64 $tmp1681 = *$tmp1680;
panda$core$Int64 $tmp1682 = (panda$core$Int64) {512};
panda$core$Int64 $tmp1683 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1681, $tmp1682);
panda$core$Int64* $tmp1684 = &$tmp1679->flags;
*$tmp1684 = $tmp1683;
goto block55;
block55:;
// line 459
org$pandalanguage$pandac$MethodDecl* $tmp1685 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
panda$core$String* $tmp1686 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp1687 = *(&local3);
panda$collections$Array* $tmp1688 = *(&local6);
panda$collections$Array* $tmp1689 = *(&local14);
org$pandalanguage$pandac$Type* $tmp1690 = *(&local18);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1685, param1, param2, $tmp1686, $tmp1687, param5, param6, $tmp1688, $tmp1689, $tmp1690, param10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1685));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1685));
org$pandalanguage$pandac$Type* $tmp1691 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1691));
// unreffing returnType
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1692 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1692));
// unreffing parameters
*(&local14) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1693 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1693));
// unreffing generics
*(&local6) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp1694 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1694));
// unreffing annotations
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp1695 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1695));
// unreffing doccomment
*(&local0) = ((panda$core$String*) NULL);
return $tmp1685;

}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ClassDecl* param1, org$pandalanguage$pandac$ASTNode* param2) {

org$pandalanguage$pandac$Position local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$Position local4;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
panda$collections$ImmutableArray* local6 = NULL;
org$pandalanguage$pandac$MethodDecl$Kind local7;
panda$core$String* local8 = NULL;
panda$collections$ImmutableArray* local9 = NULL;
panda$collections$ImmutableArray* local10 = NULL;
org$pandalanguage$pandac$ASTNode* local11 = NULL;
panda$collections$ImmutableArray* local12 = NULL;
org$pandalanguage$pandac$MethodDecl* local13 = NULL;
org$pandalanguage$pandac$Position local14;
org$pandalanguage$pandac$ASTNode* local15 = NULL;
panda$collections$ImmutableArray* local16 = NULL;
org$pandalanguage$pandac$ClassDecl$Kind local17;
panda$core$String* local18 = NULL;
panda$collections$ImmutableArray* local19 = NULL;
panda$collections$ImmutableArray* local20 = NULL;
panda$collections$ImmutableArray* local21 = NULL;
org$pandalanguage$pandac$ClassDecl* local22 = NULL;
org$pandalanguage$pandac$Position local23;
org$pandalanguage$pandac$ASTNode* local24 = NULL;
panda$core$String* local25 = NULL;
panda$collections$ImmutableArray* local26 = NULL;
// line 464
panda$core$Int64* $tmp1696 = &param2->$rawValue;
panda$core$Int64 $tmp1697 = *$tmp1696;
panda$core$Int64 $tmp1698 = (panda$core$Int64) {16};
panda$core$Bit $tmp1699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1697, $tmp1698);
bool $tmp1700 = $tmp1699.value;
if ($tmp1700) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp1701 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1702 = *$tmp1701;
*(&local0) = $tmp1702;
org$pandalanguage$pandac$ASTNode** $tmp1703 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1704 = *$tmp1703;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1705 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1705));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1704));
*(&local1) = $tmp1704;
panda$collections$ImmutableArray** $tmp1706 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp1707 = *$tmp1706;
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1708 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1708));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1707));
*(&local2) = $tmp1707;
org$pandalanguage$pandac$ASTNode** $tmp1709 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1710 = *$tmp1709;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1711 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1711));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1710));
*(&local3) = $tmp1710;
// line 466
org$pandalanguage$pandac$Position $tmp1712 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp1713 = *(&local1);
panda$collections$ImmutableArray* $tmp1714 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1715 = *(&local3);
org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(param0, param1, $tmp1712, $tmp1713, $tmp1714, $tmp1715);
org$pandalanguage$pandac$ASTNode* $tmp1716 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1716));
// unreffing varDecl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1717 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1717));
// unreffing annotations
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1718 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1718));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp1719 = (panda$core$Int64) {26};
panda$core$Bit $tmp1720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1697, $tmp1719);
bool $tmp1721 = $tmp1720.value;
if ($tmp1721) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp1722 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1723 = *$tmp1722;
*(&local4) = $tmp1723;
org$pandalanguage$pandac$ASTNode** $tmp1724 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1725 = *$tmp1724;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1726 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1726));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1725));
*(&local5) = $tmp1725;
panda$collections$ImmutableArray** $tmp1727 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp1728 = *$tmp1727;
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1729 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1729));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1728));
*(&local6) = $tmp1728;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp1730 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param2->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1731 = *$tmp1730;
*(&local7) = $tmp1731;
panda$core$String** $tmp1732 = (panda$core$String**) (param2->$data + 40);
panda$core$String* $tmp1733 = *$tmp1732;
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp1734 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1734));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1733));
*(&local8) = $tmp1733;
panda$collections$ImmutableArray** $tmp1735 = (panda$collections$ImmutableArray**) (param2->$data + 48);
panda$collections$ImmutableArray* $tmp1736 = *$tmp1735;
*(&local9) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1737 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1737));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1736));
*(&local9) = $tmp1736;
panda$collections$ImmutableArray** $tmp1738 = (panda$collections$ImmutableArray**) (param2->$data + 56);
panda$collections$ImmutableArray* $tmp1739 = *$tmp1738;
*(&local10) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1740 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1740));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1739));
*(&local10) = $tmp1739;
org$pandalanguage$pandac$ASTNode** $tmp1741 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp1742 = *$tmp1741;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1743 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1743));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1742));
*(&local11) = $tmp1742;
panda$collections$ImmutableArray** $tmp1744 = (panda$collections$ImmutableArray**) (param2->$data + 72);
panda$collections$ImmutableArray* $tmp1745 = *$tmp1744;
*(&local12) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1746 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1746));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
*(&local12) = $tmp1745;
// line 469
org$pandalanguage$pandac$Position $tmp1747 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1748 = *(&local5);
panda$collections$ImmutableArray* $tmp1749 = *(&local6);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1750 = *(&local7);
panda$core$String* $tmp1751 = *(&local8);
panda$collections$ImmutableArray* $tmp1752 = *(&local9);
panda$collections$ImmutableArray* $tmp1753 = *(&local10);
org$pandalanguage$pandac$ASTNode* $tmp1754 = *(&local11);
panda$collections$ImmutableArray* $tmp1755 = *(&local12);
org$pandalanguage$pandac$MethodDecl* $tmp1756 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(param0, param1, $tmp1747, $tmp1748, $tmp1749, $tmp1750, $tmp1751, $tmp1752, $tmp1753, $tmp1754, $tmp1755);
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp1757 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1757));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1756));
*(&local13) = $tmp1756;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1756));
// line 471
org$pandalanguage$pandac$MethodDecl* $tmp1758 = *(&local13);
panda$core$Bit $tmp1759 = panda$core$Bit$init$builtin_bit($tmp1758 != NULL);
bool $tmp1760 = $tmp1759.value;
if ($tmp1760) goto block6; else goto block7;
block6:;
// line 472
org$pandalanguage$pandac$SymbolTable** $tmp1761 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1762 = *$tmp1761;
org$pandalanguage$pandac$MethodDecl* $tmp1763 = *(&local13);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1762, ((org$pandalanguage$pandac$Symbol*) $tmp1763));
// line 473
panda$collections$Array** $tmp1764 = &param1->methods;
panda$collections$Array* $tmp1765 = *$tmp1764;
org$pandalanguage$pandac$MethodDecl* $tmp1766 = *(&local13);
panda$collections$Array$add$panda$collections$Array$T($tmp1765, ((panda$core$Object*) $tmp1766));
goto block7;
block7:;
org$pandalanguage$pandac$MethodDecl* $tmp1767 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1767));
// unreffing m
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$collections$ImmutableArray* $tmp1768 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1768));
// unreffing statements
*(&local12) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1769 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1769));
// unreffing returnType
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1770 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1770));
// unreffing parameters
*(&local10) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1771 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1771));
// unreffing generics
*(&local9) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1772 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1772));
// unreffing name
*(&local8) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp1773 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1773));
// unreffing annotations
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1774 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1774));
// unreffing dc
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp1775 = (panda$core$Int64) {11};
panda$core$Bit $tmp1776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1697, $tmp1775);
bool $tmp1777 = $tmp1776.value;
if ($tmp1777) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp1778 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1779 = *$tmp1778;
*(&local14) = $tmp1779;
org$pandalanguage$pandac$ASTNode** $tmp1780 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1781 = *$tmp1780;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1782 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1782));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1781));
*(&local15) = $tmp1781;
panda$collections$ImmutableArray** $tmp1783 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp1784 = *$tmp1783;
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1785 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1785));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1784));
*(&local16) = $tmp1784;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp1786 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param2->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp1787 = *$tmp1786;
*(&local17) = $tmp1787;
panda$core$String** $tmp1788 = (panda$core$String**) (param2->$data + 40);
panda$core$String* $tmp1789 = *$tmp1788;
*(&local18) = ((panda$core$String*) NULL);
panda$core$String* $tmp1790 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1790));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1789));
*(&local18) = $tmp1789;
panda$collections$ImmutableArray** $tmp1791 = (panda$collections$ImmutableArray**) (param2->$data + 48);
panda$collections$ImmutableArray* $tmp1792 = *$tmp1791;
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1793 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1793));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1792));
*(&local19) = $tmp1792;
panda$collections$ImmutableArray** $tmp1794 = (panda$collections$ImmutableArray**) (param2->$data + 56);
panda$collections$ImmutableArray* $tmp1795 = *$tmp1794;
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1796 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1796));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1795));
*(&local20) = $tmp1795;
panda$collections$ImmutableArray** $tmp1797 = (panda$collections$ImmutableArray**) (param2->$data + 64);
panda$collections$ImmutableArray* $tmp1798 = *$tmp1797;
*(&local21) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1799 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1799));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1798));
*(&local21) = $tmp1798;
// line 477
panda$io$File** $tmp1800 = &param1->source;
panda$io$File* $tmp1801 = *$tmp1800;
panda$collections$MapView** $tmp1802 = &param1->aliases;
panda$collections$MapView* $tmp1803 = *$tmp1802;
panda$core$String** $tmp1804 = &param1->name;
panda$core$String* $tmp1805 = *$tmp1804;
org$pandalanguage$pandac$Position $tmp1806 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp1807 = *(&local15);
panda$collections$ImmutableArray* $tmp1808 = *(&local16);
org$pandalanguage$pandac$ClassDecl$Kind $tmp1809 = *(&local17);
panda$core$String* $tmp1810 = *(&local18);
panda$collections$ImmutableArray* $tmp1811 = *(&local19);
panda$collections$ImmutableArray* $tmp1812 = *(&local20);
panda$collections$ImmutableArray* $tmp1813 = *(&local21);
org$pandalanguage$pandac$ClassDecl* $tmp1814 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp1801, $tmp1803, $tmp1805, $tmp1806, $tmp1807, $tmp1808, $tmp1809, $tmp1810, $tmp1811, $tmp1812, $tmp1813);
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1815 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1815));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1814));
*(&local22) = $tmp1814;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1814));
// line 479
org$pandalanguage$pandac$ClassDecl* $tmp1816 = *(&local22);
panda$core$Bit $tmp1817 = panda$core$Bit$init$builtin_bit($tmp1816 != NULL);
bool $tmp1818 = $tmp1817.value;
if ($tmp1818) goto block10; else goto block11;
block10:;
// line 480
org$pandalanguage$pandac$ClassDecl* $tmp1819 = *(&local22);
panda$core$Weak* $tmp1820 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp1820, ((panda$core$Object*) param1));
panda$core$Weak** $tmp1821 = &$tmp1819->owner;
panda$core$Weak* $tmp1822 = *$tmp1821;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1822));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1820));
panda$core$Weak** $tmp1823 = &$tmp1819->owner;
*$tmp1823 = $tmp1820;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1820));
// line 481
panda$collections$Array** $tmp1824 = &param1->classes;
panda$collections$Array* $tmp1825 = *$tmp1824;
org$pandalanguage$pandac$ClassDecl* $tmp1826 = *(&local22);
panda$collections$Array$add$panda$collections$Array$T($tmp1825, ((panda$core$Object*) $tmp1826));
// line 482
org$pandalanguage$pandac$ClassDecl* $tmp1827 = *(&local22);
panda$core$String** $tmp1828 = &$tmp1827->name;
panda$core$String* $tmp1829 = *$tmp1828;
panda$core$String** $tmp1830 = &param1->name;
panda$core$String* $tmp1831 = *$tmp1830;
panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1831, &$s1833);
panda$core$Bit $tmp1834 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1829, $tmp1832);
bool $tmp1835 = $tmp1834.value;
if ($tmp1835) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp1836 = (panda$core$Int64) {482};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1837, $tmp1836);
abort(); // unreachable
block12:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1832));
// line 483
org$pandalanguage$pandac$SymbolTable** $tmp1838 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1839 = *$tmp1838;
org$pandalanguage$pandac$Alias* $tmp1840 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
org$pandalanguage$pandac$ClassDecl* $tmp1841 = *(&local22);
panda$core$String** $tmp1842 = &$tmp1841->name;
panda$core$String* $tmp1843 = *$tmp1842;
panda$core$String** $tmp1844 = &param1->name;
panda$core$String* $tmp1845 = *$tmp1844;
panda$core$Int64 $tmp1846 = panda$core$String$get_length$R$panda$core$Int64($tmp1845);
panda$core$Int64 $tmp1847 = (panda$core$Int64) {1};
int64_t $tmp1848 = $tmp1846.value;
int64_t $tmp1849 = $tmp1847.value;
int64_t $tmp1850 = $tmp1848 + $tmp1849;
panda$core$Int64 $tmp1851 = (panda$core$Int64) {$tmp1850};
panda$core$Bit $tmp1852 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1853 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp1851, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1852);
panda$core$String* $tmp1854 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1843, $tmp1853);
org$pandalanguage$pandac$ClassDecl* $tmp1855 = *(&local22);
panda$core$String** $tmp1856 = &$tmp1855->name;
panda$core$String* $tmp1857 = *$tmp1856;
org$pandalanguage$pandac$Position $tmp1858 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1840, $tmp1854, $tmp1857, $tmp1858);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1839, ((org$pandalanguage$pandac$Symbol*) $tmp1840));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1840));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1854));
// line 485
org$pandalanguage$pandac$ClassDecl* $tmp1859 = *(&local22);
org$pandalanguage$pandac$SymbolTable** $tmp1860 = &$tmp1859->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1861 = *$tmp1860;
org$pandalanguage$pandac$Alias* $tmp1862 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
panda$core$String* $tmp1863 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(param1);
panda$core$String** $tmp1864 = &param1->name;
panda$core$String* $tmp1865 = *$tmp1864;
org$pandalanguage$pandac$Position $tmp1866 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1862, $tmp1863, $tmp1865, $tmp1866);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1861, ((org$pandalanguage$pandac$Symbol*) $tmp1862));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1862));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1863));
goto block11;
block11:;
org$pandalanguage$pandac$ClassDecl* $tmp1867 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1867));
// unreffing inner
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$ImmutableArray* $tmp1868 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1868));
// unreffing members
*(&local21) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1869 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1869));
// unreffing supertypes
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1870 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1870));
// unreffing generics
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1871 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1871));
// unreffing name
*(&local18) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp1872 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1872));
// unreffing annotations
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1873 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1873));
// unreffing dc
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp1874 = (panda$core$Int64) {9};
panda$core$Bit $tmp1875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1697, $tmp1874);
bool $tmp1876 = $tmp1875.value;
if ($tmp1876) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp1877 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1878 = *$tmp1877;
*(&local23) = $tmp1878;
org$pandalanguage$pandac$ASTNode** $tmp1879 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1880 = *$tmp1879;
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1881 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1881));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1880));
*(&local24) = $tmp1880;
panda$core$String** $tmp1882 = (panda$core$String**) (param2->$data + 24);
panda$core$String* $tmp1883 = *$tmp1882;
*(&local25) = ((panda$core$String*) NULL);
panda$core$String* $tmp1884 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1884));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1883));
*(&local25) = $tmp1883;
panda$collections$ImmutableArray** $tmp1885 = (panda$collections$ImmutableArray**) (param2->$data + 32);
panda$collections$ImmutableArray* $tmp1886 = *$tmp1885;
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1887 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1887));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1886));
*(&local26) = $tmp1886;
// line 488
org$pandalanguage$pandac$Position $tmp1888 = *(&local23);
org$pandalanguage$pandac$ASTNode* $tmp1889 = *(&local24);
panda$core$String* $tmp1890 = *(&local25);
panda$collections$ImmutableArray* $tmp1891 = *(&local26);
org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0, param1, $tmp1888, $tmp1889, $tmp1890, $tmp1891);
panda$collections$ImmutableArray* $tmp1892 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1892));
// unreffing fields
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1893 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1893));
// unreffing name
*(&local25) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1894 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1894));
// unreffing dc
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block15:;
// line 490
panda$core$Bit $tmp1895 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1896 = $tmp1895.value;
if ($tmp1896) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp1897 = (panda$core$Int64) {490};
panda$core$String* $tmp1898 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1899, ((panda$core$Object*) param2));
panda$core$String* $tmp1900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1898, &$s1901);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1902, $tmp1897, $tmp1900);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1898));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1900));
abort(); // unreachable
block16:;
goto block1;
block1:;
return;

}
void org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ClassDecl* param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$String* param4, panda$collections$ImmutableArray* param5) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$Position local1;
panda$core$String* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
org$pandalanguage$pandac$ChoiceCase* local5 = NULL;
// line 496
*(&local0) = ((panda$core$String*) NULL);
// line 498
panda$core$Bit $tmp1903 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1904 = $tmp1903.value;
if ($tmp1904) goto block1; else goto block3;
block1:;
// line 499
panda$core$String* $tmp1905 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1905));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 502
panda$core$Int64* $tmp1906 = &param3->$rawValue;
panda$core$Int64 $tmp1907 = *$tmp1906;
panda$core$Int64 $tmp1908 = (panda$core$Int64) {38};
panda$core$Bit $tmp1909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1907, $tmp1908);
bool $tmp1910 = $tmp1909.value;
if ($tmp1910) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp1911 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp1912 = *$tmp1911;
*(&local1) = $tmp1912;
panda$core$String** $tmp1913 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp1914 = *$tmp1913;
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp1915 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1915));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1914));
*(&local2) = $tmp1914;
// line 504
panda$core$String* $tmp1916 = *(&local2);
panda$core$String* $tmp1917 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1917));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1916));
*(&local0) = $tmp1916;
panda$core$String* $tmp1918 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1918));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 506
panda$core$Bit $tmp1919 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1920 = $tmp1919.value;
if ($tmp1920) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1921 = (panda$core$Int64) {506};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1922, $tmp1921);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 509
panda$collections$Array* $tmp1923 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1923);
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1924 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1924));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1923));
*(&local3) = $tmp1923;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1923));
// line 510
ITable* $tmp1925 = ((panda$collections$Iterable*) param5)->$class->itable;
while ($tmp1925->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1925 = $tmp1925->next;
}
$fn1927 $tmp1926 = $tmp1925->methods[0];
panda$collections$Iterator* $tmp1928 = $tmp1926(((panda$collections$Iterable*) param5));
goto block9;
block9:;
ITable* $tmp1929 = $tmp1928->$class->itable;
while ($tmp1929->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1929 = $tmp1929->next;
}
$fn1931 $tmp1930 = $tmp1929->methods[0];
panda$core$Bit $tmp1932 = $tmp1930($tmp1928);
bool $tmp1933 = $tmp1932.value;
if ($tmp1933) goto block11; else goto block10;
block10:;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1934 = $tmp1928->$class->itable;
while ($tmp1934->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1934 = $tmp1934->next;
}
$fn1936 $tmp1935 = $tmp1934->methods[1];
panda$core$Object* $tmp1937 = $tmp1935($tmp1928);
org$pandalanguage$pandac$ASTNode* $tmp1938 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1938));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1937)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) $tmp1937);
// line 511
panda$collections$Array* $tmp1939 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1940 = *(&local4);
org$pandalanguage$pandac$Type* $tmp1941 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1940);
panda$collections$Array$add$panda$collections$Array$T($tmp1939, ((panda$core$Object*) $tmp1941));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1941));
panda$core$Panda$unref$panda$core$Object$Q($tmp1937);
org$pandalanguage$pandac$ASTNode* $tmp1942 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1942));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1928));
// line 513
org$pandalanguage$pandac$ChoiceCase* $tmp1943 = (org$pandalanguage$pandac$ChoiceCase*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceCase$class);
panda$core$String* $tmp1944 = *(&local0);
panda$collections$Array** $tmp1945 = &param1->choiceCases;
panda$collections$Array* $tmp1946 = *$tmp1945;
ITable* $tmp1947 = ((panda$collections$CollectionView*) $tmp1946)->$class->itable;
while ($tmp1947->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1947 = $tmp1947->next;
}
$fn1949 $tmp1948 = $tmp1947->methods[0];
panda$core$Int64 $tmp1950 = $tmp1948(((panda$collections$CollectionView*) $tmp1946));
panda$collections$Array* $tmp1951 = *(&local3);
org$pandalanguage$pandac$ChoiceCase$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1943, param1, param2, param4, $tmp1944, $tmp1950, ((panda$collections$ListView*) $tmp1951));
*(&local5) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ChoiceCase* $tmp1952 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1952));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1943));
*(&local5) = $tmp1943;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1943));
// line 515
panda$collections$Array** $tmp1953 = &param1->choiceCases;
panda$collections$Array* $tmp1954 = *$tmp1953;
org$pandalanguage$pandac$ChoiceCase* $tmp1955 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp1954, ((panda$core$Object*) $tmp1955));
// line 516
org$pandalanguage$pandac$SymbolTable** $tmp1956 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1957 = *$tmp1956;
org$pandalanguage$pandac$ChoiceCase* $tmp1958 = *(&local5);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1957, ((org$pandalanguage$pandac$Symbol*) $tmp1958));
org$pandalanguage$pandac$ChoiceCase* $tmp1959 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1959));
// unreffing entry
*(&local5) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$collections$Array* $tmp1960 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1960));
// unreffing fields
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1961 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1961));
// unreffing doccomment
*(&local0) = ((panda$core$String*) NULL);
return;

}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* param0, panda$io$File* param1, panda$collections$MapView* param2, panda$core$String* param3, org$pandalanguage$pandac$Position param4, org$pandalanguage$pandac$ASTNode* param5, panda$collections$ImmutableArray* param6, org$pandalanguage$pandac$ClassDecl$Kind param7, panda$core$String* param8, panda$collections$ImmutableArray* param9, panda$collections$ImmutableArray* param10, panda$collections$ImmutableArray* param11) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$Position local2;
panda$core$String* local3 = NULL;
org$pandalanguage$pandac$Annotations* local4 = NULL;
panda$collections$Array* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
panda$core$String* local7 = NULL;
org$pandalanguage$pandac$Type* local8 = NULL;
panda$core$String* local9 = NULL;
panda$core$String* local10 = NULL;
org$pandalanguage$pandac$ASTNode* local11 = NULL;
panda$collections$Array* local12 = NULL;
org$pandalanguage$pandac$ASTNode* local13 = NULL;
org$pandalanguage$pandac$ClassDecl* local14 = NULL;
org$pandalanguage$pandac$FieldDecl* local15 = NULL;
org$pandalanguage$pandac$FieldDecl* local16 = NULL;
org$pandalanguage$pandac$ASTNode* local17 = NULL;
org$pandalanguage$pandac$Position local18;
org$pandalanguage$pandac$MethodDecl$Kind local19;
panda$core$Bit local20;
panda$core$Bit local21;
org$pandalanguage$pandac$MethodDecl* local22 = NULL;
panda$core$Bit local23;
panda$core$Bit local24;
panda$core$Bit local25;
org$pandalanguage$pandac$MethodDecl* local26 = NULL;
panda$core$Bit local27;
panda$core$Bit local28;
panda$core$Bit local29;
org$pandalanguage$pandac$MethodDecl* local30 = NULL;
panda$core$Bit local31;
org$pandalanguage$pandac$ChoiceCase* local32 = NULL;
// line 523
*(&local0) = ((panda$core$String*) NULL);
// line 524
ITable* $tmp1963 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp1963->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1963 = $tmp1963->next;
}
$fn1965 $tmp1964 = $tmp1963->methods[1];
panda$core$Bit $tmp1966 = $tmp1964(((panda$core$Equatable*) param3), ((panda$core$Equatable*) &$s1962));
bool $tmp1967 = $tmp1966.value;
if ($tmp1967) goto block1; else goto block3;
block1:;
// line 525
panda$core$String* $tmp1968 = panda$core$String$convert$R$panda$core$String(param3);
panda$core$String* $tmp1969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1968, &$s1970);
panda$core$String* $tmp1971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1969, param8);
panda$core$String* $tmp1972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1971, &$s1973);
panda$core$String* $tmp1974 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1974));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1972));
*(&local0) = $tmp1972;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1969));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1971));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1972));
goto block2;
block3:;
// line 1
// line 528
panda$core$String* $tmp1975 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1975));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
*(&local0) = param8;
goto block2;
block2:;
// line 530
*(&local1) = ((panda$core$String*) NULL);
// line 532
panda$core$Bit $tmp1976 = panda$core$Bit$init$builtin_bit(param5 == NULL);
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block4; else goto block6;
block4:;
// line 533
panda$core$String* $tmp1978 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1978));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local1) = ((panda$core$String*) NULL);
goto block5;
block6:;
// line 1
// line 536
panda$core$Int64* $tmp1979 = &param5->$rawValue;
panda$core$Int64 $tmp1980 = *$tmp1979;
panda$core$Int64 $tmp1981 = (panda$core$Int64) {38};
panda$core$Bit $tmp1982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1980, $tmp1981);
bool $tmp1983 = $tmp1982.value;
if ($tmp1983) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp1984 = (org$pandalanguage$pandac$Position*) (param5->$data + 0);
org$pandalanguage$pandac$Position $tmp1985 = *$tmp1984;
*(&local2) = $tmp1985;
panda$core$String** $tmp1986 = (panda$core$String**) (param5->$data + 16);
panda$core$String* $tmp1987 = *$tmp1986;
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1988 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1988));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1987));
*(&local3) = $tmp1987;
// line 538
panda$core$String* $tmp1989 = *(&local3);
panda$core$String* $tmp1990 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1990));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1989));
*(&local1) = $tmp1989;
panda$core$String* $tmp1991 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1991));
// unreffing text
*(&local3) = ((panda$core$String*) NULL);
goto block7;
block9:;
// line 540
panda$core$Bit $tmp1992 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1993 = $tmp1992.value;
if ($tmp1993) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp1994 = (panda$core$Int64) {540};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1995, $tmp1994);
abort(); // unreachable
block10:;
goto block7;
block7:;
goto block5;
block5:;
// line 543
org$pandalanguage$pandac$Annotations* $tmp1996 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param6);
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
org$pandalanguage$pandac$Annotations* $tmp1997 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1997));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1996));
*(&local4) = $tmp1996;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1996));
// line 544
panda$collections$Array* $tmp1998 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1998);
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1999 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1999));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1998));
*(&local5) = $tmp1998;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1998));
// line 545
panda$core$Bit $tmp2000 = panda$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2001 = $tmp2000.value;
if ($tmp2001) goto block12; else goto block13;
block12:;
// line 546
ITable* $tmp2002 = ((panda$collections$Iterable*) param9)->$class->itable;
while ($tmp2002->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2002 = $tmp2002->next;
}
$fn2004 $tmp2003 = $tmp2002->methods[0];
panda$collections$Iterator* $tmp2005 = $tmp2003(((panda$collections$Iterable*) param9));
goto block14;
block14:;
ITable* $tmp2006 = $tmp2005->$class->itable;
while ($tmp2006->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2006 = $tmp2006->next;
}
$fn2008 $tmp2007 = $tmp2006->methods[0];
panda$core$Bit $tmp2009 = $tmp2007($tmp2005);
bool $tmp2010 = $tmp2009.value;
if ($tmp2010) goto block16; else goto block15;
block15:;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2011 = $tmp2005->$class->itable;
while ($tmp2011->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2011 = $tmp2011->next;
}
$fn2013 $tmp2012 = $tmp2011->methods[1];
panda$core$Object* $tmp2014 = $tmp2012($tmp2005);
org$pandalanguage$pandac$ASTNode* $tmp2015 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2015));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2014)));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) $tmp2014);
// line 547
*(&local7) = ((panda$core$String*) NULL);
// line 548
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
// line 549
org$pandalanguage$pandac$ASTNode* $tmp2016 = *(&local6);
panda$core$Int64* $tmp2017 = &$tmp2016->$rawValue;
panda$core$Int64 $tmp2018 = *$tmp2017;
panda$core$Int64 $tmp2019 = (panda$core$Int64) {20};
panda$core$Bit $tmp2020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2018, $tmp2019);
bool $tmp2021 = $tmp2020.value;
if ($tmp2021) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp2022 = (org$pandalanguage$pandac$Position*) ($tmp2016->$data + 0);
org$pandalanguage$pandac$Position $tmp2023 = *$tmp2022;
panda$core$String** $tmp2024 = (panda$core$String**) ($tmp2016->$data + 16);
panda$core$String* $tmp2025 = *$tmp2024;
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp2026 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2026));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2025));
*(&local9) = $tmp2025;
// line 551
panda$core$String* $tmp2027 = *(&local9);
panda$core$String* $tmp2028 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2028));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2027));
*(&local7) = $tmp2027;
// line 552
org$pandalanguage$pandac$Type* $tmp2029 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp2030 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2030));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2029));
*(&local8) = $tmp2029;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2029));
panda$core$String* $tmp2031 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2031));
// unreffing id
*(&local9) = ((panda$core$String*) NULL);
goto block17;
block19:;
panda$core$Int64 $tmp2032 = (panda$core$Int64) {44};
panda$core$Bit $tmp2033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2018, $tmp2032);
bool $tmp2034 = $tmp2033.value;
if ($tmp2034) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp2035 = (org$pandalanguage$pandac$Position*) ($tmp2016->$data + 0);
org$pandalanguage$pandac$Position $tmp2036 = *$tmp2035;
panda$core$String** $tmp2037 = (panda$core$String**) ($tmp2016->$data + 16);
panda$core$String* $tmp2038 = *$tmp2037;
*(&local10) = ((panda$core$String*) NULL);
panda$core$String* $tmp2039 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2039));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2038));
*(&local10) = $tmp2038;
org$pandalanguage$pandac$ASTNode** $tmp2040 = (org$pandalanguage$pandac$ASTNode**) ($tmp2016->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2041 = *$tmp2040;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2042 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2042));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2041));
*(&local11) = $tmp2041;
// line 554
panda$core$String* $tmp2043 = *(&local10);
panda$core$String* $tmp2044 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2044));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2043));
*(&local7) = $tmp2043;
// line 555
org$pandalanguage$pandac$ASTNode* $tmp2045 = *(&local11);
org$pandalanguage$pandac$Type* $tmp2046 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2045);
org$pandalanguage$pandac$Type* $tmp2047 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2047));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2046));
*(&local8) = $tmp2046;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2046));
org$pandalanguage$pandac$ASTNode* $tmp2048 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2048));
// unreffing type
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2049 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2049));
// unreffing id
*(&local10) = ((panda$core$String*) NULL);
goto block17;
block21:;
// line 557
panda$core$Bit $tmp2050 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2051 = $tmp2050.value;
if ($tmp2051) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp2052 = (panda$core$Int64) {557};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2053, $tmp2052);
abort(); // unreachable
block22:;
goto block17;
block17:;
// line 559
panda$collections$Array* $tmp2054 = *(&local5);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp2055 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
org$pandalanguage$pandac$ASTNode* $tmp2056 = *(&local6);
$fn2058 $tmp2057 = ($fn2058) $tmp2056->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2059 = $tmp2057($tmp2056);
panda$core$String* $tmp2060 = *(&local0);
panda$core$String* $tmp2061 = *(&local7);
org$pandalanguage$pandac$Type* $tmp2062 = *(&local8);
org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp2055, $tmp2059, $tmp2060, $tmp2061, $tmp2062);
panda$collections$Array$add$panda$collections$Array$T($tmp2054, ((panda$core$Object*) $tmp2055));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2055));
panda$core$Panda$unref$panda$core$Object$Q($tmp2014);
org$pandalanguage$pandac$Type* $tmp2063 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2063));
// unreffing bound
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp2064 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2064));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2065 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2065));
// unreffing p
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block16:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2005));
goto block13;
block13:;
// line 562
panda$collections$Array* $tmp2066 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2066);
*(&local12) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2067 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2067));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2066));
*(&local12) = $tmp2066;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2066));
// line 563
panda$core$Bit $tmp2068 = panda$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2069 = $tmp2068.value;
if ($tmp2069) goto block24; else goto block25;
block24:;
// line 564
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2070;
$tmp2070 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2070->value = param7;
panda$core$Int64 $tmp2071 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2072 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2071);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2073;
$tmp2073 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2073->value = $tmp2072;
ITable* $tmp2074 = ((panda$core$Equatable*) $tmp2070)->$class->itable;
while ($tmp2074->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2074 = $tmp2074->next;
}
$fn2076 $tmp2075 = $tmp2074->methods[0];
panda$core$Bit $tmp2077 = $tmp2075(((panda$core$Equatable*) $tmp2070), ((panda$core$Equatable*) $tmp2073));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2070)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2073)));
bool $tmp2078 = $tmp2077.value;
if ($tmp2078) goto block26; else goto block27;
block26:;
// line 565
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param4, &$s2079);
goto block27;
block27:;
// line 567
ITable* $tmp2080 = ((panda$collections$Iterable*) param10)->$class->itable;
while ($tmp2080->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2080 = $tmp2080->next;
}
$fn2082 $tmp2081 = $tmp2080->methods[0];
panda$collections$Iterator* $tmp2083 = $tmp2081(((panda$collections$Iterable*) param10));
goto block28;
block28:;
ITable* $tmp2084 = $tmp2083->$class->itable;
while ($tmp2084->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2084 = $tmp2084->next;
}
$fn2086 $tmp2085 = $tmp2084->methods[0];
panda$core$Bit $tmp2087 = $tmp2085($tmp2083);
bool $tmp2088 = $tmp2087.value;
if ($tmp2088) goto block30; else goto block29;
block29:;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2089 = $tmp2083->$class->itable;
while ($tmp2089->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2089 = $tmp2089->next;
}
$fn2091 $tmp2090 = $tmp2089->methods[1];
panda$core$Object* $tmp2092 = $tmp2090($tmp2083);
org$pandalanguage$pandac$ASTNode* $tmp2093 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2093));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2092)));
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) $tmp2092);
// line 568
panda$collections$Array* $tmp2094 = *(&local12);
org$pandalanguage$pandac$ASTNode* $tmp2095 = *(&local13);
org$pandalanguage$pandac$Type* $tmp2096 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2095);
panda$collections$Array$add$panda$collections$Array$T($tmp2094, ((panda$core$Object*) $tmp2096));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2096));
panda$core$Panda$unref$panda$core$Object$Q($tmp2092);
org$pandalanguage$pandac$ASTNode* $tmp2097 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
// unreffing s
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block28;
block30:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2083));
goto block25;
block25:;
// line 571
org$pandalanguage$pandac$ClassDecl* $tmp2098 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
panda$core$String* $tmp2099 = *(&local1);
org$pandalanguage$pandac$Annotations* $tmp2100 = *(&local4);
panda$core$String* $tmp2101 = *(&local0);
panda$collections$Array* $tmp2102 = *(&local12);
panda$collections$Array* $tmp2103 = *(&local5);
panda$core$Weak** $tmp2104 = &param0->compiler;
panda$core$Weak* $tmp2105 = *$tmp2104;
panda$core$Object* $tmp2106 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2105);
panda$core$Panda$unref$panda$core$Object$Q($tmp2106);
org$pandalanguage$pandac$SymbolTable** $tmp2107 = &((org$pandalanguage$pandac$Compiler*) $tmp2106)->root;
org$pandalanguage$pandac$SymbolTable* $tmp2108 = *$tmp2107;
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2098, param1, param4, param2, $tmp2099, $tmp2100, param7, $tmp2101, ((panda$collections$ListView*) $tmp2102), $tmp2103, $tmp2108);
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2109 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2109));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2098));
*(&local14) = $tmp2098;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2098));
// line 573
org$pandalanguage$pandac$ClassDecl* $tmp2110 = *(&local14);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2110));
// line 574
panda$core$Weak** $tmp2111 = &param0->compiler;
panda$core$Weak* $tmp2112 = *$tmp2111;
panda$core$Object* $tmp2113 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2112);
panda$core$Panda$unref$panda$core$Object$Q($tmp2113);
panda$collections$Stack** $tmp2114 = &((org$pandalanguage$pandac$Compiler*) $tmp2113)->currentClass;
panda$collections$Stack* $tmp2115 = *$tmp2114;
org$pandalanguage$pandac$ClassDecl* $tmp2116 = *(&local14);
panda$collections$Stack$push$panda$collections$Stack$T($tmp2115, ((panda$core$Object*) $tmp2116));
// line 575
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2117;
$tmp2117 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2117->value = param7;
panda$core$Int64 $tmp2118 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2119 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2118);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2120;
$tmp2120 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2120->value = $tmp2119;
ITable* $tmp2121 = ((panda$core$Equatable*) $tmp2117)->$class->itable;
while ($tmp2121->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2121 = $tmp2121->next;
}
$fn2123 $tmp2122 = $tmp2121->methods[0];
panda$core$Bit $tmp2124 = $tmp2122(((panda$core$Equatable*) $tmp2117), ((panda$core$Equatable*) $tmp2120));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2117)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2120)));
bool $tmp2125 = $tmp2124.value;
if ($tmp2125) goto block31; else goto block32;
block31:;
// line 576
org$pandalanguage$pandac$FieldDecl* $tmp2126 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2127 = *(&local14);
org$pandalanguage$pandac$ClassDecl* $tmp2128 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2129 = &$tmp2128->position;
org$pandalanguage$pandac$Position $tmp2130 = *$tmp2129;
org$pandalanguage$pandac$Annotations* $tmp2131 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2132 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2131, $tmp2132);
panda$core$Int64 $tmp2133 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp2134 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp2133);
org$pandalanguage$pandac$Type* $tmp2135 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp2126, $tmp2127, $tmp2130, ((panda$core$String*) NULL), $tmp2131, $tmp2134, &$s2136, $tmp2135, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2137 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2137));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2126));
*(&local15) = $tmp2126;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2126));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2131));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2135));
// line 579
org$pandalanguage$pandac$ClassDecl* $tmp2138 = *(&local14);
panda$collections$Array** $tmp2139 = &$tmp2138->fields;
panda$collections$Array* $tmp2140 = *$tmp2139;
org$pandalanguage$pandac$FieldDecl* $tmp2141 = *(&local15);
panda$collections$Array$add$panda$collections$Array$T($tmp2140, ((panda$core$Object*) $tmp2141));
// line 580
org$pandalanguage$pandac$ClassDecl* $tmp2142 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2143 = &$tmp2142->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2144 = *$tmp2143;
org$pandalanguage$pandac$FieldDecl* $tmp2145 = *(&local15);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2144, ((org$pandalanguage$pandac$Symbol*) $tmp2145));
// line 581
org$pandalanguage$pandac$FieldDecl* $tmp2146 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2147 = *(&local14);
org$pandalanguage$pandac$ClassDecl* $tmp2148 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2149 = &$tmp2148->position;
org$pandalanguage$pandac$Position $tmp2150 = *$tmp2149;
org$pandalanguage$pandac$Annotations* $tmp2151 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2152 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2151, $tmp2152);
panda$core$Int64 $tmp2153 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp2154 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp2153);
org$pandalanguage$pandac$Type* $tmp2155 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp2146, $tmp2147, $tmp2150, ((panda$core$String*) NULL), $tmp2151, $tmp2154, &$s2156, $tmp2155, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2157 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2157));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2146));
*(&local16) = $tmp2146;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2146));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2151));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2155));
// line 584
org$pandalanguage$pandac$ClassDecl* $tmp2158 = *(&local14);
panda$collections$Array** $tmp2159 = &$tmp2158->fields;
panda$collections$Array* $tmp2160 = *$tmp2159;
org$pandalanguage$pandac$FieldDecl* $tmp2161 = *(&local16);
panda$collections$Array$add$panda$collections$Array$T($tmp2160, ((panda$core$Object*) $tmp2161));
// line 585
org$pandalanguage$pandac$ClassDecl* $tmp2162 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2163 = &$tmp2162->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2164 = *$tmp2163;
org$pandalanguage$pandac$FieldDecl* $tmp2165 = *(&local16);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2164, ((org$pandalanguage$pandac$Symbol*) $tmp2165));
org$pandalanguage$pandac$FieldDecl* $tmp2166 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2166));
// unreffing data
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2167 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2167));
// unreffing rawValue
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block32;
block32:;
// line 587
ITable* $tmp2168 = ((panda$collections$Iterable*) param11)->$class->itable;
while ($tmp2168->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2168 = $tmp2168->next;
}
$fn2170 $tmp2169 = $tmp2168->methods[0];
panda$collections$Iterator* $tmp2171 = $tmp2169(((panda$collections$Iterable*) param11));
goto block33;
block33:;
ITable* $tmp2172 = $tmp2171->$class->itable;
while ($tmp2172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2172 = $tmp2172->next;
}
$fn2174 $tmp2173 = $tmp2172->methods[0];
panda$core$Bit $tmp2175 = $tmp2173($tmp2171);
bool $tmp2176 = $tmp2175.value;
if ($tmp2176) goto block35; else goto block34;
block34:;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2177 = $tmp2171->$class->itable;
while ($tmp2177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2177 = $tmp2177->next;
}
$fn2179 $tmp2178 = $tmp2177->methods[1];
panda$core$Object* $tmp2180 = $tmp2178($tmp2171);
org$pandalanguage$pandac$ASTNode* $tmp2181 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2181));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2180)));
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) $tmp2180);
// line 588
org$pandalanguage$pandac$ASTNode* $tmp2182 = *(&local17);
panda$core$Int64* $tmp2183 = &$tmp2182->$rawValue;
panda$core$Int64 $tmp2184 = *$tmp2183;
panda$core$Int64 $tmp2185 = (panda$core$Int64) {26};
panda$core$Bit $tmp2186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2184, $tmp2185);
bool $tmp2187 = $tmp2186.value;
if ($tmp2187) goto block37; else goto block38;
block37:;
org$pandalanguage$pandac$Position* $tmp2188 = (org$pandalanguage$pandac$Position*) ($tmp2182->$data + 0);
org$pandalanguage$pandac$Position $tmp2189 = *$tmp2188;
*(&local18) = $tmp2189;
org$pandalanguage$pandac$ASTNode** $tmp2190 = (org$pandalanguage$pandac$ASTNode**) ($tmp2182->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2191 = *$tmp2190;
panda$collections$ImmutableArray** $tmp2192 = (panda$collections$ImmutableArray**) ($tmp2182->$data + 24);
panda$collections$ImmutableArray* $tmp2193 = *$tmp2192;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2194 = (org$pandalanguage$pandac$MethodDecl$Kind*) ($tmp2182->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2195 = *$tmp2194;
*(&local19) = $tmp2195;
panda$core$String** $tmp2196 = (panda$core$String**) ($tmp2182->$data + 40);
panda$core$String* $tmp2197 = *$tmp2196;
panda$collections$ImmutableArray** $tmp2198 = (panda$collections$ImmutableArray**) ($tmp2182->$data + 48);
panda$collections$ImmutableArray* $tmp2199 = *$tmp2198;
panda$collections$ImmutableArray** $tmp2200 = (panda$collections$ImmutableArray**) ($tmp2182->$data + 56);
panda$collections$ImmutableArray* $tmp2201 = *$tmp2200;
org$pandalanguage$pandac$ASTNode** $tmp2202 = (org$pandalanguage$pandac$ASTNode**) ($tmp2182->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2203 = *$tmp2202;
panda$collections$ImmutableArray** $tmp2204 = (panda$collections$ImmutableArray**) ($tmp2182->$data + 72);
panda$collections$ImmutableArray* $tmp2205 = *$tmp2204;
// line 590
org$pandalanguage$pandac$MethodDecl$Kind $tmp2206 = *(&local19);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2207;
$tmp2207 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2207->value = $tmp2206;
panda$core$Int64 $tmp2208 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2209 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2208);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2210;
$tmp2210 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2210->value = $tmp2209;
ITable* $tmp2211 = ((panda$core$Equatable*) $tmp2207)->$class->itable;
while ($tmp2211->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2211 = $tmp2211->next;
}
$fn2213 $tmp2212 = $tmp2211->methods[0];
panda$core$Bit $tmp2214 = $tmp2212(((panda$core$Equatable*) $tmp2207), ((panda$core$Equatable*) $tmp2210));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2207)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2210)));
bool $tmp2215 = $tmp2214.value;
if ($tmp2215) goto block39; else goto block40;
block39:;
// line 591
panda$core$Int64 $tmp2216 = param7.$rawValue;
panda$core$Int64 $tmp2217 = (panda$core$Int64) {0};
panda$core$Bit $tmp2218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2216, $tmp2217);
bool $tmp2219 = $tmp2218.value;
if ($tmp2219) goto block42; else goto block43;
block42:;
goto block41;
block43:;
panda$core$Int64 $tmp2220 = (panda$core$Int64) {1};
panda$core$Bit $tmp2221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2216, $tmp2220);
bool $tmp2222 = $tmp2221.value;
if ($tmp2222) goto block44; else goto block45;
block44:;
// line 594
org$pandalanguage$pandac$Position $tmp2223 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2223, &$s2224);
goto block41;
block45:;
panda$core$Int64 $tmp2225 = (panda$core$Int64) {2};
panda$core$Bit $tmp2226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2216, $tmp2225);
bool $tmp2227 = $tmp2226.value;
if ($tmp2227) goto block46; else goto block41;
block46:;
// line 596
org$pandalanguage$pandac$Position $tmp2228 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2228, &$s2229);
goto block41;
block41:;
goto block40;
block40:;
goto block36;
block38:;
goto block36;
block36:;
// line 602
org$pandalanguage$pandac$ClassDecl* $tmp2230 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp2231 = *(&local17);
org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(param0, $tmp2230, $tmp2231);
panda$core$Panda$unref$panda$core$Object$Q($tmp2180);
org$pandalanguage$pandac$ASTNode* $tmp2232 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2232));
// unreffing m
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block33;
block35:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2171));
// line 604
panda$core$Bit $tmp2233 = panda$core$Bit$init$builtin_bit(false);
*(&local20) = $tmp2233;
// line 605
panda$core$Bit $tmp2234 = panda$core$Bit$init$builtin_bit(false);
*(&local21) = $tmp2234;
// line 606
org$pandalanguage$pandac$ClassDecl* $tmp2235 = *(&local14);
panda$collections$Array** $tmp2236 = &$tmp2235->methods;
panda$collections$Array* $tmp2237 = *$tmp2236;
ITable* $tmp2238 = ((panda$collections$Iterable*) $tmp2237)->$class->itable;
while ($tmp2238->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2238 = $tmp2238->next;
}
$fn2240 $tmp2239 = $tmp2238->methods[0];
panda$collections$Iterator* $tmp2241 = $tmp2239(((panda$collections$Iterable*) $tmp2237));
goto block47;
block47:;
ITable* $tmp2242 = $tmp2241->$class->itable;
while ($tmp2242->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2242 = $tmp2242->next;
}
$fn2244 $tmp2243 = $tmp2242->methods[0];
panda$core$Bit $tmp2245 = $tmp2243($tmp2241);
bool $tmp2246 = $tmp2245.value;
if ($tmp2246) goto block49; else goto block48;
block48:;
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp2247 = $tmp2241->$class->itable;
while ($tmp2247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2247 = $tmp2247->next;
}
$fn2249 $tmp2248 = $tmp2247->methods[1];
panda$core$Object* $tmp2250 = $tmp2248($tmp2241);
org$pandalanguage$pandac$MethodDecl* $tmp2251 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2251));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2250)));
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) $tmp2250);
// line 607
org$pandalanguage$pandac$MethodDecl* $tmp2252 = *(&local22);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2253 = &$tmp2252->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp2254 = *$tmp2253;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2255;
$tmp2255 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2255->value = $tmp2254;
panda$core$Int64 $tmp2256 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2257 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2256);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2258;
$tmp2258 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2258->value = $tmp2257;
ITable* $tmp2259 = ((panda$core$Equatable*) $tmp2255)->$class->itable;
while ($tmp2259->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2259 = $tmp2259->next;
}
$fn2261 $tmp2260 = $tmp2259->methods[0];
panda$core$Bit $tmp2262 = $tmp2260(((panda$core$Equatable*) $tmp2255), ((panda$core$Equatable*) $tmp2258));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2255)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2258)));
bool $tmp2263 = $tmp2262.value;
if ($tmp2263) goto block50; else goto block51;
block50:;
// line 608
panda$core$Bit $tmp2264 = panda$core$Bit$init$builtin_bit(true);
*(&local20) = $tmp2264;
goto block51;
block51:;
// line 610
org$pandalanguage$pandac$MethodDecl* $tmp2265 = *(&local22);
panda$core$String** $tmp2266 = &((org$pandalanguage$pandac$Symbol*) $tmp2265)->name;
panda$core$String* $tmp2267 = *$tmp2266;
panda$core$Bit $tmp2268 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2267, &$s2269);
bool $tmp2270 = $tmp2268.value;
if ($tmp2270) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$MethodDecl* $tmp2271 = *(&local22);
panda$collections$Array** $tmp2272 = &$tmp2271->parameters;
panda$collections$Array* $tmp2273 = *$tmp2272;
ITable* $tmp2274 = ((panda$collections$CollectionView*) $tmp2273)->$class->itable;
while ($tmp2274->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2274 = $tmp2274->next;
}
$fn2276 $tmp2275 = $tmp2274->methods[0];
panda$core$Int64 $tmp2277 = $tmp2275(((panda$collections$CollectionView*) $tmp2273));
panda$core$Int64 $tmp2278 = (panda$core$Int64) {0};
panda$core$Bit $tmp2279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2277, $tmp2278);
*(&local23) = $tmp2279;
goto block54;
block53:;
*(&local23) = $tmp2268;
goto block54;
block54:;
panda$core$Bit $tmp2280 = *(&local23);
bool $tmp2281 = $tmp2280.value;
if ($tmp2281) goto block55; else goto block56;
block55:;
// line 611
panda$core$Bit $tmp2282 = panda$core$Bit$init$builtin_bit(true);
*(&local21) = $tmp2282;
// line 612
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2283;
$tmp2283 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2283->value = param7;
panda$core$Int64 $tmp2284 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2285 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2284);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2286;
$tmp2286 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2286->value = $tmp2285;
ITable* $tmp2287 = ((panda$core$Equatable*) $tmp2283)->$class->itable;
while ($tmp2287->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2287 = $tmp2287->next;
}
$fn2289 $tmp2288 = $tmp2287->methods[0];
panda$core$Bit $tmp2290 = $tmp2288(((panda$core$Equatable*) $tmp2283), ((panda$core$Equatable*) $tmp2286));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2283)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2286)));
bool $tmp2291 = $tmp2290.value;
if ($tmp2291) goto block57; else goto block58;
block57:;
// line 613
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param4, &$s2292);
goto block58;
block58:;
goto block56;
block56:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2250);
org$pandalanguage$pandac$MethodDecl* $tmp2293 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2293));
// unreffing m
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block47;
block49:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2241));
// line 617
panda$core$Bit $tmp2294 = *(&local20);
panda$core$Bit $tmp2295 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2294);
bool $tmp2296 = $tmp2295.value;
if ($tmp2296) goto block59; else goto block60;
block59:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2297;
$tmp2297 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2297->value = param7;
panda$core$Int64 $tmp2298 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2299 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2298);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2300;
$tmp2300 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2300->value = $tmp2299;
ITable* $tmp2301 = ((panda$core$Equatable*) $tmp2297)->$class->itable;
while ($tmp2301->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2301 = $tmp2301->next;
}
$fn2303 $tmp2302 = $tmp2301->methods[0];
panda$core$Bit $tmp2304 = $tmp2302(((panda$core$Equatable*) $tmp2297), ((panda$core$Equatable*) $tmp2300));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2297)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2300)));
*(&local25) = $tmp2304;
goto block61;
block60:;
*(&local25) = $tmp2295;
goto block61;
block61:;
panda$core$Bit $tmp2305 = *(&local25);
bool $tmp2306 = $tmp2305.value;
if ($tmp2306) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$ClassDecl* $tmp2307 = *(&local14);
panda$core$String** $tmp2308 = &$tmp2307->name;
panda$core$String* $tmp2309 = *$tmp2308;
ITable* $tmp2311 = ((panda$core$Equatable*) $tmp2309)->$class->itable;
while ($tmp2311->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2311 = $tmp2311->next;
}
$fn2313 $tmp2312 = $tmp2311->methods[1];
panda$core$Bit $tmp2314 = $tmp2312(((panda$core$Equatable*) $tmp2309), ((panda$core$Equatable*) &$s2310));
*(&local24) = $tmp2314;
goto block64;
block63:;
*(&local24) = $tmp2305;
goto block64;
block64:;
panda$core$Bit $tmp2315 = *(&local24);
bool $tmp2316 = $tmp2315.value;
if ($tmp2316) goto block65; else goto block66;
block65:;
// line 618
org$pandalanguage$pandac$MethodDecl* $tmp2317 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2318 = *(&local14);
org$pandalanguage$pandac$Annotations* $tmp2319 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2320 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2319, $tmp2320);
panda$core$Int64 $tmp2321 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2322 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2321);
panda$collections$Array* $tmp2323 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2323);
panda$collections$Array* $tmp2324 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2324);
org$pandalanguage$pandac$Type* $tmp2325 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2326 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2326);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2317, $tmp2318, param4, ((panda$core$String*) NULL), $tmp2319, $tmp2322, &$s2327, $tmp2323, $tmp2324, $tmp2325, $tmp2326);
*(&local26) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2328 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2328));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2317));
*(&local26) = $tmp2317;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2317));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2319));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2323));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2324));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2325));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2326));
// line 622
org$pandalanguage$pandac$ClassDecl* $tmp2329 = *(&local14);
panda$collections$Array** $tmp2330 = &$tmp2329->methods;
panda$collections$Array* $tmp2331 = *$tmp2330;
org$pandalanguage$pandac$MethodDecl* $tmp2332 = *(&local26);
panda$collections$Array$add$panda$collections$Array$T($tmp2331, ((panda$core$Object*) $tmp2332));
// line 623
org$pandalanguage$pandac$ClassDecl* $tmp2333 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2334 = &$tmp2333->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2335 = *$tmp2334;
org$pandalanguage$pandac$MethodDecl* $tmp2336 = *(&local26);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2335, ((org$pandalanguage$pandac$Symbol*) $tmp2336));
org$pandalanguage$pandac$MethodDecl* $tmp2337 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2337));
// unreffing defaultInit
*(&local26) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block66;
block66:;
// line 625
panda$core$Bit $tmp2338 = *(&local21);
panda$core$Bit $tmp2339 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2338);
bool $tmp2340 = $tmp2339.value;
if ($tmp2340) goto block67; else goto block68;
block67:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2341;
$tmp2341 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2341->value = param7;
panda$core$Int64 $tmp2342 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2343 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2342);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2344;
$tmp2344 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2344->value = $tmp2343;
ITable* $tmp2345 = ((panda$core$Equatable*) $tmp2341)->$class->itable;
while ($tmp2345->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2345 = $tmp2345->next;
}
$fn2347 $tmp2346 = $tmp2345->methods[0];
panda$core$Bit $tmp2348 = $tmp2346(((panda$core$Equatable*) $tmp2341), ((panda$core$Equatable*) $tmp2344));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2341)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2344)));
bool $tmp2349 = $tmp2348.value;
if ($tmp2349) goto block70; else goto block71;
block70:;
*(&local29) = $tmp2348;
goto block72;
block71:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2350;
$tmp2350 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2350->value = param7;
panda$core$Int64 $tmp2351 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2352 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2351);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2353;
$tmp2353 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2353->value = $tmp2352;
ITable* $tmp2354 = ((panda$core$Equatable*) $tmp2350)->$class->itable;
while ($tmp2354->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2354 = $tmp2354->next;
}
$fn2356 $tmp2355 = $tmp2354->methods[0];
panda$core$Bit $tmp2357 = $tmp2355(((panda$core$Equatable*) $tmp2350), ((panda$core$Equatable*) $tmp2353));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2350)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2353)));
*(&local29) = $tmp2357;
goto block72;
block72:;
panda$core$Bit $tmp2358 = *(&local29);
*(&local28) = $tmp2358;
goto block69;
block68:;
*(&local28) = $tmp2339;
goto block69;
block69:;
panda$core$Bit $tmp2359 = *(&local28);
bool $tmp2360 = $tmp2359.value;
if ($tmp2360) goto block73; else goto block74;
block73:;
org$pandalanguage$pandac$ClassDecl* $tmp2361 = *(&local14);
panda$core$String** $tmp2362 = &$tmp2361->name;
panda$core$String* $tmp2363 = *$tmp2362;
ITable* $tmp2365 = ((panda$core$Equatable*) $tmp2363)->$class->itable;
while ($tmp2365->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2365 = $tmp2365->next;
}
$fn2367 $tmp2366 = $tmp2365->methods[1];
panda$core$Bit $tmp2368 = $tmp2366(((panda$core$Equatable*) $tmp2363), ((panda$core$Equatable*) &$s2364));
*(&local27) = $tmp2368;
goto block75;
block74:;
*(&local27) = $tmp2359;
goto block75;
block75:;
panda$core$Bit $tmp2369 = *(&local27);
bool $tmp2370 = $tmp2369.value;
if ($tmp2370) goto block76; else goto block77;
block76:;
// line 627
org$pandalanguage$pandac$MethodDecl* $tmp2371 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2372 = *(&local14);
org$pandalanguage$pandac$Annotations* $tmp2373 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2374 = (panda$core$Int64) {32};
panda$core$Int64 $tmp2375 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp2376 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2374, $tmp2375);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2373, $tmp2376);
panda$core$Int64 $tmp2377 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2378 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2377);
panda$collections$Array* $tmp2379 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2379);
panda$collections$Array* $tmp2380 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2380);
org$pandalanguage$pandac$Type* $tmp2381 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2382 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2382);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2371, $tmp2372, param4, ((panda$core$String*) NULL), $tmp2373, $tmp2378, &$s2383, $tmp2379, $tmp2380, $tmp2381, $tmp2382);
*(&local30) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2384 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2384));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2371));
*(&local30) = $tmp2371;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2371));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2373));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2379));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2380));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2381));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2382));
// line 631
org$pandalanguage$pandac$ClassDecl* $tmp2385 = *(&local14);
panda$collections$Array** $tmp2386 = &$tmp2385->methods;
panda$collections$Array* $tmp2387 = *$tmp2386;
org$pandalanguage$pandac$MethodDecl* $tmp2388 = *(&local30);
panda$collections$Array$add$panda$collections$Array$T($tmp2387, ((panda$core$Object*) $tmp2388));
// line 632
org$pandalanguage$pandac$ClassDecl* $tmp2389 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2390 = &$tmp2389->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2391 = *$tmp2390;
org$pandalanguage$pandac$MethodDecl* $tmp2392 = *(&local30);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2391, ((org$pandalanguage$pandac$Symbol*) $tmp2392));
org$pandalanguage$pandac$MethodDecl* $tmp2393 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2393));
// unreffing defaultCleanup
*(&local30) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block77;
block77:;
// line 634
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2394;
$tmp2394 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2394->value = param7;
panda$core$Int64 $tmp2395 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2396 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2395);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2397;
$tmp2397 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2397->value = $tmp2396;
ITable* $tmp2398 = ((panda$core$Equatable*) $tmp2394)->$class->itable;
while ($tmp2398->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2398 = $tmp2398->next;
}
$fn2400 $tmp2399 = $tmp2398->methods[0];
panda$core$Bit $tmp2401 = $tmp2399(((panda$core$Equatable*) $tmp2394), ((panda$core$Equatable*) $tmp2397));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2394)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2397)));
bool $tmp2402 = $tmp2401.value;
if ($tmp2402) goto block78; else goto block79;
block78:;
// line 635
panda$core$Bit $tmp2403 = panda$core$Bit$init$builtin_bit(false);
*(&local31) = $tmp2403;
// line 636
org$pandalanguage$pandac$ClassDecl* $tmp2404 = *(&local14);
panda$collections$Array** $tmp2405 = &$tmp2404->choiceCases;
panda$collections$Array* $tmp2406 = *$tmp2405;
ITable* $tmp2407 = ((panda$collections$CollectionView*) $tmp2406)->$class->itable;
while ($tmp2407->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2407 = $tmp2407->next;
}
$fn2409 $tmp2408 = $tmp2407->methods[0];
panda$core$Int64 $tmp2410 = $tmp2408(((panda$collections$CollectionView*) $tmp2406));
panda$core$Int64 $tmp2411 = (panda$core$Int64) {0};
int64_t $tmp2412 = $tmp2410.value;
int64_t $tmp2413 = $tmp2411.value;
bool $tmp2414 = $tmp2412 > $tmp2413;
panda$core$Bit $tmp2415 = (panda$core$Bit) {$tmp2414};
bool $tmp2416 = $tmp2415.value;
if ($tmp2416) goto block80; else goto block82;
block80:;
// line 637
org$pandalanguage$pandac$ClassDecl* $tmp2417 = *(&local14);
panda$collections$Array** $tmp2418 = &$tmp2417->choiceCases;
panda$collections$Array* $tmp2419 = *$tmp2418;
ITable* $tmp2420 = ((panda$collections$Iterable*) $tmp2419)->$class->itable;
while ($tmp2420->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2420 = $tmp2420->next;
}
$fn2422 $tmp2421 = $tmp2420->methods[0];
panda$collections$Iterator* $tmp2423 = $tmp2421(((panda$collections$Iterable*) $tmp2419));
goto block83;
block83:;
ITable* $tmp2424 = $tmp2423->$class->itable;
while ($tmp2424->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2424 = $tmp2424->next;
}
$fn2426 $tmp2425 = $tmp2424->methods[0];
panda$core$Bit $tmp2427 = $tmp2425($tmp2423);
bool $tmp2428 = $tmp2427.value;
if ($tmp2428) goto block85; else goto block84;
block84:;
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
ITable* $tmp2429 = $tmp2423->$class->itable;
while ($tmp2429->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2429 = $tmp2429->next;
}
$fn2431 $tmp2430 = $tmp2429->methods[1];
panda$core$Object* $tmp2432 = $tmp2430($tmp2423);
org$pandalanguage$pandac$ChoiceCase* $tmp2433 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2433));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ChoiceCase*) $tmp2432)));
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) $tmp2432);
// line 638
org$pandalanguage$pandac$ChoiceCase* $tmp2434 = *(&local32);
panda$collections$Array** $tmp2435 = &$tmp2434->fields;
panda$collections$Array* $tmp2436 = *$tmp2435;
ITable* $tmp2437 = ((panda$collections$CollectionView*) $tmp2436)->$class->itable;
while ($tmp2437->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2437 = $tmp2437->next;
}
$fn2439 $tmp2438 = $tmp2437->methods[0];
panda$core$Int64 $tmp2440 = $tmp2438(((panda$collections$CollectionView*) $tmp2436));
panda$core$Int64 $tmp2441 = (panda$core$Int64) {0};
int64_t $tmp2442 = $tmp2440.value;
int64_t $tmp2443 = $tmp2441.value;
bool $tmp2444 = $tmp2442 > $tmp2443;
panda$core$Bit $tmp2445 = (panda$core$Bit) {$tmp2444};
bool $tmp2446 = $tmp2445.value;
if ($tmp2446) goto block86; else goto block87;
block86:;
// line 639
panda$core$Bit $tmp2447 = panda$core$Bit$init$builtin_bit(true);
*(&local31) = $tmp2447;
// line 640
org$pandalanguage$pandac$ChoiceCase* $tmp2448 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2448));
// unreffing e
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
goto block85;
block87:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2432);
org$pandalanguage$pandac$ChoiceCase* $tmp2449 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2449));
// unreffing e
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
goto block83;
block85:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2423));
goto block81;
block82:;
// line 1
// line 645
org$pandalanguage$pandac$ClassDecl* $tmp2450 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2451 = &$tmp2450->position;
org$pandalanguage$pandac$Position $tmp2452 = *$tmp2451;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2452, &$s2453);
// line 646
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp2454 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2454));
// unreffing result
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp2455 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2455));
// unreffing supertypes
*(&local12) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2456 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2456));
// unreffing parameters
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp2457 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2457));
// unreffing annotations
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp2458 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2458));
// unreffing doccomment
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2459 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2459));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ClassDecl*) NULL);
block81:;
// line 648
panda$core$Bit $tmp2460 = *(&local31);
panda$core$Bit $tmp2461 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2460);
bool $tmp2462 = $tmp2461.value;
if ($tmp2462) goto block88; else goto block89;
block88:;
// line 649
org$pandalanguage$pandac$ClassDecl* $tmp2463 = *(&local14);
org$pandalanguage$pandac$Type* $tmp2464 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type** $tmp2465 = &$tmp2463->rawSuper;
org$pandalanguage$pandac$Type* $tmp2466 = *$tmp2465;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2466));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2464));
org$pandalanguage$pandac$Type** $tmp2467 = &$tmp2463->rawSuper;
*$tmp2467 = $tmp2464;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2464));
goto block89;
block89:;
goto block79;
block79:;
// line 652
panda$core$Weak** $tmp2468 = &param0->compiler;
panda$core$Weak* $tmp2469 = *$tmp2468;
panda$core$Object* $tmp2470 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2469);
panda$core$Panda$unref$panda$core$Object$Q($tmp2470);
panda$collections$Stack** $tmp2471 = &((org$pandalanguage$pandac$Compiler*) $tmp2470)->currentClass;
panda$collections$Stack* $tmp2472 = *$tmp2471;
panda$core$Object* $tmp2473 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2472);
panda$core$Panda$unref$panda$core$Object$Q($tmp2473);
// line 653
org$pandalanguage$pandac$ClassDecl* $tmp2474 = *(&local14);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2474));
org$pandalanguage$pandac$ClassDecl* $tmp2475 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2475));
// unreffing result
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp2476 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2476));
// unreffing supertypes
*(&local12) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2477 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2477));
// unreffing parameters
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp2478 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2478));
// unreffing annotations
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp2479 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2479));
// unreffing doccomment
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2480 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2480));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
return $tmp2474;

}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ClassDecl* param1, panda$collections$Array* param2) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
// line 657
panda$collections$Array$add$panda$collections$Array$T(param2, ((panda$core$Object*) param1));
// line 658
panda$collections$Array** $tmp2481 = &param1->classes;
panda$collections$Array* $tmp2482 = *$tmp2481;
ITable* $tmp2483 = ((panda$collections$Iterable*) $tmp2482)->$class->itable;
while ($tmp2483->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2483 = $tmp2483->next;
}
$fn2485 $tmp2484 = $tmp2483->methods[0];
panda$collections$Iterator* $tmp2486 = $tmp2484(((panda$collections$Iterable*) $tmp2482));
goto block1;
block1:;
ITable* $tmp2487 = $tmp2486->$class->itable;
while ($tmp2487->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2487 = $tmp2487->next;
}
$fn2489 $tmp2488 = $tmp2487->methods[0];
panda$core$Bit $tmp2490 = $tmp2488($tmp2486);
bool $tmp2491 = $tmp2490.value;
if ($tmp2491) goto block3; else goto block2;
block2:;
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
ITable* $tmp2492 = $tmp2486->$class->itable;
while ($tmp2492->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2492 = $tmp2492->next;
}
$fn2494 $tmp2493 = $tmp2492->methods[1];
panda$core$Object* $tmp2495 = $tmp2493($tmp2486);
org$pandalanguage$pandac$ClassDecl* $tmp2496 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2496));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp2495)));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) $tmp2495);
// line 659
org$pandalanguage$pandac$ClassDecl* $tmp2497 = *(&local0);
org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, $tmp2497, param2);
panda$core$Panda$unref$panda$core$Object$Q($tmp2495);
org$pandalanguage$pandac$ClassDecl* $tmp2498 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
// unreffing inner
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2486));
return;

}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* param0, panda$io$File* param1, panda$collections$MapView* param2, panda$core$String* param3, panda$collections$List* param4) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$MethodDecl* local1 = NULL;
org$pandalanguage$pandac$MethodDecl* local2 = NULL;
// line 665
org$pandalanguage$pandac$ClassDecl** $tmp2499 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2500 = *$tmp2499;
panda$core$Bit $tmp2501 = panda$core$Bit$init$builtin_bit($tmp2500 == NULL);
bool $tmp2502 = $tmp2501.value;
if ($tmp2502) goto block1; else goto block2;
block1:;
// line 666
*(&local0) = ((panda$core$String*) NULL);
// line 667
ITable* $tmp2504 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp2504->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2504 = $tmp2504->next;
}
$fn2506 $tmp2505 = $tmp2504->methods[1];
panda$core$Bit $tmp2507 = $tmp2505(((panda$core$Equatable*) param3), ((panda$core$Equatable*) &$s2503));
bool $tmp2508 = $tmp2507.value;
if ($tmp2508) goto block3; else goto block5;
block3:;
// line 668
panda$core$String* $tmp2509 = panda$core$String$convert$R$panda$core$String(param3);
panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2509, &$s2511);
panda$core$String* $tmp2512 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2512));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2510));
*(&local0) = $tmp2510;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2509));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2510));
goto block4;
block5:;
// line 1
// line 671
panda$core$String* $tmp2513 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2513));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2514));
*(&local0) = &$s2515;
goto block4;
block4:;
// line 673
org$pandalanguage$pandac$ClassDecl* $tmp2516 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
org$pandalanguage$pandac$Position $tmp2517 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2518 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
org$pandalanguage$pandac$Annotations$init($tmp2518);
panda$core$Int64 $tmp2519 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2520 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2519);
panda$core$String* $tmp2521 = *(&local0);
panda$collections$Array* $tmp2522 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2522);
panda$collections$Array* $tmp2523 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2523);
panda$core$Weak** $tmp2524 = &param0->compiler;
panda$core$Weak* $tmp2525 = *$tmp2524;
panda$core$Object* $tmp2526 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2525);
panda$core$Panda$unref$panda$core$Object$Q($tmp2526);
org$pandalanguage$pandac$SymbolTable** $tmp2527 = &((org$pandalanguage$pandac$Compiler*) $tmp2526)->root;
org$pandalanguage$pandac$SymbolTable* $tmp2528 = *$tmp2527;
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2516, param1, $tmp2517, param2, ((panda$core$String*) NULL), $tmp2518, $tmp2520, $tmp2521, ((panda$collections$ListView*) $tmp2522), $tmp2523, $tmp2528);
org$pandalanguage$pandac$ClassDecl** $tmp2529 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2530 = *$tmp2529;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2530));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2516));
org$pandalanguage$pandac$ClassDecl** $tmp2531 = &param0->bareCodeClass;
*$tmp2531 = $tmp2516;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2516));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2518));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2522));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2523));
// line 676
org$pandalanguage$pandac$ClassDecl** $tmp2532 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2533 = *$tmp2532;
ITable* $tmp2534 = ((panda$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp2534->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
    $tmp2534 = $tmp2534->next;
}
$fn2536 $tmp2535 = $tmp2534->methods[0];
$tmp2535(((panda$collections$CollectionWriter*) param4), ((panda$core$Object*) $tmp2533));
// line 677
org$pandalanguage$pandac$MethodDecl* $tmp2537 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2538 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2539 = *$tmp2538;
org$pandalanguage$pandac$Position $tmp2540 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2541 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2542 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2541, $tmp2542);
panda$core$Int64 $tmp2543 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2544 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2543);
panda$collections$Array* $tmp2545 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2545);
panda$collections$Array* $tmp2546 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2546);
org$pandalanguage$pandac$Type* $tmp2547 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2548 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2548);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2537, $tmp2539, $tmp2540, ((panda$core$String*) NULL), $tmp2541, $tmp2544, &$s2549, $tmp2545, $tmp2546, $tmp2547, $tmp2548);
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2550 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2550));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2537));
*(&local1) = $tmp2537;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2537));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2541));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2545));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2547));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2548));
// line 681
org$pandalanguage$pandac$ClassDecl** $tmp2551 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2552 = *$tmp2551;
panda$collections$Array** $tmp2553 = &$tmp2552->methods;
panda$collections$Array* $tmp2554 = *$tmp2553;
org$pandalanguage$pandac$MethodDecl* $tmp2555 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp2554, ((panda$core$Object*) $tmp2555));
// line 682
org$pandalanguage$pandac$ClassDecl** $tmp2556 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2557 = *$tmp2556;
org$pandalanguage$pandac$SymbolTable** $tmp2558 = &$tmp2557->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2559 = *$tmp2558;
org$pandalanguage$pandac$MethodDecl* $tmp2560 = *(&local1);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2559, ((org$pandalanguage$pandac$Symbol*) $tmp2560));
// line 683
org$pandalanguage$pandac$MethodDecl* $tmp2561 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2562 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2563 = *$tmp2562;
org$pandalanguage$pandac$Position $tmp2564 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2565 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2566 = (panda$core$Int64) {32};
panda$core$Int64 $tmp2567 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp2568 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2566, $tmp2567);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2565, $tmp2568);
panda$core$Int64 $tmp2569 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2570 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2569);
panda$collections$Array* $tmp2571 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2571);
panda$collections$Array* $tmp2572 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2572);
org$pandalanguage$pandac$Type* $tmp2573 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2574 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2574);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2561, $tmp2563, $tmp2564, ((panda$core$String*) NULL), $tmp2565, $tmp2570, &$s2575, $tmp2571, $tmp2572, $tmp2573, $tmp2574);
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2576 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2576));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2561));
*(&local2) = $tmp2561;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2561));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2565));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2571));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2572));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2573));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2574));
// line 687
org$pandalanguage$pandac$ClassDecl** $tmp2577 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2578 = *$tmp2577;
panda$collections$Array** $tmp2579 = &$tmp2578->methods;
panda$collections$Array* $tmp2580 = *$tmp2579;
org$pandalanguage$pandac$MethodDecl* $tmp2581 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2580, ((panda$core$Object*) $tmp2581));
// line 688
org$pandalanguage$pandac$ClassDecl** $tmp2582 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2583 = *$tmp2582;
org$pandalanguage$pandac$SymbolTable** $tmp2584 = &$tmp2583->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2585 = *$tmp2584;
org$pandalanguage$pandac$MethodDecl* $tmp2586 = *(&local2);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2585, ((org$pandalanguage$pandac$Symbol*) $tmp2586));
org$pandalanguage$pandac$MethodDecl* $tmp2587 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2587));
// unreffing defaultCleanup
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2588 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2588));
// unreffing defaultInit
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$String* $tmp2589 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2589));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2) {

panda$io$File** $tmp2590 = &param0->source;
panda$io$File* $tmp2591 = *$tmp2590;
panda$core$Bit $tmp2592 = panda$core$Bit$init$builtin_bit($tmp2591 != NULL);
bool $tmp2593 = $tmp2592.value;
if ($tmp2593) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2594 = (panda$core$Int64) {693};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2595, $tmp2594, &$s2596);
abort(); // unreachable
block1:;
// line 694
panda$core$Weak** $tmp2597 = &param0->compiler;
panda$core$Weak* $tmp2598 = *$tmp2597;
panda$core$Object* $tmp2599 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2598);
panda$core$Panda$unref$panda$core$Object$Q($tmp2599);
panda$io$File** $tmp2600 = &param0->source;
panda$io$File* $tmp2601 = *$tmp2600;
org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2599), $tmp2601, param1, param2);
return;

}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* param0, panda$io$File* param1, org$pandalanguage$pandac$ASTNode* param2) {

panda$collections$ImmutableArray* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$core$String* local2 = NULL;
panda$collections$HashMap* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$core$String* local5 = NULL;
panda$core$String* local6 = NULL;
panda$core$String$Index$nullable local7;
panda$core$String* local8 = NULL;
org$pandalanguage$pandac$Position local9;
org$pandalanguage$pandac$ASTNode* local10 = NULL;
panda$collections$ImmutableArray* local11 = NULL;
org$pandalanguage$pandac$ClassDecl$Kind local12;
panda$core$String* local13 = NULL;
panda$collections$ImmutableArray* local14 = NULL;
panda$collections$ImmutableArray* local15 = NULL;
panda$collections$ImmutableArray* local16 = NULL;
org$pandalanguage$pandac$ClassDecl* local17 = NULL;
org$pandalanguage$pandac$Position local18;
org$pandalanguage$pandac$ASTNode* local19 = NULL;
panda$collections$ImmutableArray* local20 = NULL;
org$pandalanguage$pandac$MethodDecl$Kind local21;
panda$core$String* local22 = NULL;
panda$collections$ImmutableArray* local23 = NULL;
panda$collections$ImmutableArray* local24 = NULL;
org$pandalanguage$pandac$ASTNode* local25 = NULL;
panda$collections$ImmutableArray* local26 = NULL;
panda$core$String* local27 = NULL;
panda$collections$Array* local28 = NULL;
panda$collections$Array* local29 = NULL;
panda$collections$Array* local30 = NULL;
org$pandalanguage$pandac$ASTNode* local31 = NULL;
org$pandalanguage$pandac$Position local32;
panda$core$String* local33 = NULL;
org$pandalanguage$pandac$ASTNode* local34 = NULL;
org$pandalanguage$pandac$ASTNode* local35 = NULL;
org$pandalanguage$pandac$Type* local36 = NULL;
org$pandalanguage$pandac$MethodDecl* local37 = NULL;
org$pandalanguage$pandac$MethodDecl* local38 = NULL;
org$pandalanguage$pandac$Position local39;
org$pandalanguage$pandac$ASTNode* local40 = NULL;
panda$collections$ImmutableArray* local41 = NULL;
org$pandalanguage$pandac$ASTNode* local42 = NULL;
panda$core$Int64 local43;
panda$core$Int64 local44;
org$pandalanguage$pandac$FieldDecl* local45 = NULL;
panda$core$Bit local46;
// line 698
panda$io$File** $tmp2602 = &param0->source;
panda$io$File* $tmp2603 = *$tmp2602;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2603));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp2604 = &param0->source;
*$tmp2604 = param1;
// line 699
panda$core$Int64* $tmp2605 = &param2->$rawValue;
panda$core$Int64 $tmp2606 = *$tmp2605;
panda$core$Int64 $tmp2607 = (panda$core$Int64) {17};
panda$core$Bit $tmp2608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2606, $tmp2607);
bool $tmp2609 = $tmp2608.value;
if ($tmp2609) goto block2; else goto block3;
block2:;
panda$collections$ImmutableArray** $tmp2610 = (panda$collections$ImmutableArray**) (param2->$data + 0);
panda$collections$ImmutableArray* $tmp2611 = *$tmp2610;
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2612 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2612));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2611));
*(&local0) = $tmp2611;
// line 701
panda$collections$Array* $tmp2613 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2613);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2614 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2614));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2613));
*(&local1) = $tmp2613;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2613));
// line 702
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2615 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2615));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2616));
*(&local2) = &$s2617;
// line 703
panda$collections$HashMap* $tmp2618 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp2618);
*(&local3) = ((panda$collections$HashMap*) NULL);
panda$collections$HashMap* $tmp2619 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2619));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2618));
*(&local3) = $tmp2618;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2618));
// line 704
panda$collections$ImmutableArray* $tmp2620 = *(&local0);
ITable* $tmp2621 = ((panda$collections$Iterable*) $tmp2620)->$class->itable;
while ($tmp2621->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2621 = $tmp2621->next;
}
$fn2623 $tmp2622 = $tmp2621->methods[0];
panda$collections$Iterator* $tmp2624 = $tmp2622(((panda$collections$Iterable*) $tmp2620));
goto block4;
block4:;
ITable* $tmp2625 = $tmp2624->$class->itable;
while ($tmp2625->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2625 = $tmp2625->next;
}
$fn2627 $tmp2626 = $tmp2625->methods[0];
panda$core$Bit $tmp2628 = $tmp2626($tmp2624);
bool $tmp2629 = $tmp2628.value;
if ($tmp2629) goto block6; else goto block5;
block5:;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2630 = $tmp2624->$class->itable;
while ($tmp2630->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2630 = $tmp2630->next;
}
$fn2632 $tmp2631 = $tmp2630->methods[1];
panda$core$Object* $tmp2633 = $tmp2631($tmp2624);
org$pandalanguage$pandac$ASTNode* $tmp2634 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2634));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2633)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) $tmp2633);
// line 705
org$pandalanguage$pandac$ASTNode* $tmp2635 = *(&local4);
panda$core$Int64* $tmp2636 = &$tmp2635->$rawValue;
panda$core$Int64 $tmp2637 = *$tmp2636;
panda$core$Int64 $tmp2638 = (panda$core$Int64) {30};
panda$core$Bit $tmp2639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2637, $tmp2638);
bool $tmp2640 = $tmp2639.value;
if ($tmp2640) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp2641 = (org$pandalanguage$pandac$Position*) ($tmp2635->$data + 0);
org$pandalanguage$pandac$Position $tmp2642 = *$tmp2641;
panda$core$String** $tmp2643 = (panda$core$String**) ($tmp2635->$data + 16);
panda$core$String* $tmp2644 = *$tmp2643;
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp2645 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2645));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2644));
*(&local5) = $tmp2644;
// line 707
panda$core$String* $tmp2646 = *(&local5);
panda$core$String* $tmp2647 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2647));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2646));
*(&local2) = $tmp2646;
panda$core$String* $tmp2648 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2648));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
goto block7;
block9:;
panda$core$Int64 $tmp2649 = (panda$core$Int64) {46};
panda$core$Bit $tmp2650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2637, $tmp2649);
bool $tmp2651 = $tmp2650.value;
if ($tmp2651) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp2652 = (org$pandalanguage$pandac$Position*) ($tmp2635->$data + 0);
org$pandalanguage$pandac$Position $tmp2653 = *$tmp2652;
panda$core$String** $tmp2654 = (panda$core$String**) ($tmp2635->$data + 16);
panda$core$String* $tmp2655 = *$tmp2654;
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp2656 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2656));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2655));
*(&local6) = $tmp2655;
// line 709
panda$core$String* $tmp2657 = *(&local6);
panda$core$String$Index$nullable $tmp2658 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q($tmp2657, &$s2659);
*(&local7) = $tmp2658;
// line 710
*(&local8) = ((panda$core$String*) NULL);
// line 711
panda$core$String$Index$nullable $tmp2660 = *(&local7);
panda$core$Bit $tmp2661 = panda$core$Bit$init$builtin_bit($tmp2660.nonnull);
bool $tmp2662 = $tmp2661.value;
if ($tmp2662) goto block12; else goto block14;
block12:;
// line 712
panda$core$String* $tmp2663 = *(&local6);
panda$core$String* $tmp2664 = *(&local6);
panda$core$String$Index$nullable $tmp2665 = *(&local7);
panda$core$String$Index $tmp2666 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp2664, ((panda$core$String$Index) $tmp2665.value));
panda$core$Bit $tmp2667 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2668 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2666, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2667);
panda$core$String* $tmp2669 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp2663, $tmp2668);
panda$core$String* $tmp2670 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2670));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2669));
*(&local8) = $tmp2669;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2669));
goto block13;
block14:;
// line 1
// line 715
panda$core$String* $tmp2671 = *(&local6);
panda$core$String* $tmp2672 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2672));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2671));
*(&local8) = $tmp2671;
goto block13;
block13:;
// line 717
panda$collections$HashMap* $tmp2673 = *(&local3);
panda$core$String* $tmp2674 = *(&local6);
panda$core$String* $tmp2675 = *(&local8);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp2673, ((panda$collections$Key*) $tmp2675), ((panda$core$Object*) $tmp2674));
panda$core$String* $tmp2676 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2676));
// unreffing alias
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp2677 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2677));
// unreffing fullName
*(&local6) = ((panda$core$String*) NULL);
goto block7;
block11:;
panda$core$Int64 $tmp2678 = (panda$core$Int64) {11};
panda$core$Bit $tmp2679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2637, $tmp2678);
bool $tmp2680 = $tmp2679.value;
if ($tmp2680) goto block15; else goto block16;
block15:;
org$pandalanguage$pandac$Position* $tmp2681 = (org$pandalanguage$pandac$Position*) ($tmp2635->$data + 0);
org$pandalanguage$pandac$Position $tmp2682 = *$tmp2681;
*(&local9) = $tmp2682;
org$pandalanguage$pandac$ASTNode** $tmp2683 = (org$pandalanguage$pandac$ASTNode**) ($tmp2635->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2684 = *$tmp2683;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2685 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2685));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2684));
*(&local10) = $tmp2684;
panda$collections$ImmutableArray** $tmp2686 = (panda$collections$ImmutableArray**) ($tmp2635->$data + 24);
panda$collections$ImmutableArray* $tmp2687 = *$tmp2686;
*(&local11) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2688 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2688));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2687));
*(&local11) = $tmp2687;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2689 = (org$pandalanguage$pandac$ClassDecl$Kind*) ($tmp2635->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2690 = *$tmp2689;
*(&local12) = $tmp2690;
panda$core$String** $tmp2691 = (panda$core$String**) ($tmp2635->$data + 40);
panda$core$String* $tmp2692 = *$tmp2691;
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp2693 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2693));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2692));
*(&local13) = $tmp2692;
panda$collections$ImmutableArray** $tmp2694 = (panda$collections$ImmutableArray**) ($tmp2635->$data + 48);
panda$collections$ImmutableArray* $tmp2695 = *$tmp2694;
*(&local14) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2696 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2696));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2695));
*(&local14) = $tmp2695;
panda$collections$ImmutableArray** $tmp2697 = (panda$collections$ImmutableArray**) ($tmp2635->$data + 56);
panda$collections$ImmutableArray* $tmp2698 = *$tmp2697;
*(&local15) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2699 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2699));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2698));
*(&local15) = $tmp2698;
panda$collections$ImmutableArray** $tmp2700 = (panda$collections$ImmutableArray**) ($tmp2635->$data + 64);
panda$collections$ImmutableArray* $tmp2701 = *$tmp2700;
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2702 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2702));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2701));
*(&local16) = $tmp2701;
// line 720
panda$collections$HashMap* $tmp2703 = *(&local3);
panda$core$String* $tmp2704 = *(&local2);
org$pandalanguage$pandac$Position $tmp2705 = *(&local9);
org$pandalanguage$pandac$ASTNode* $tmp2706 = *(&local10);
panda$collections$ImmutableArray* $tmp2707 = *(&local11);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2708 = *(&local12);
panda$core$String* $tmp2709 = *(&local13);
panda$collections$ImmutableArray* $tmp2710 = *(&local14);
panda$collections$ImmutableArray* $tmp2711 = *(&local15);
panda$collections$ImmutableArray* $tmp2712 = *(&local16);
org$pandalanguage$pandac$ClassDecl* $tmp2713 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(param0, param1, ((panda$collections$MapView*) $tmp2703), $tmp2704, $tmp2705, $tmp2706, $tmp2707, $tmp2708, $tmp2709, $tmp2710, $tmp2711, $tmp2712);
*(&local17) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2714 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2714));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2713));
*(&local17) = $tmp2713;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2713));
// line 722
org$pandalanguage$pandac$ClassDecl* $tmp2715 = *(&local17);
panda$core$Bit $tmp2716 = panda$core$Bit$init$builtin_bit($tmp2715 != NULL);
bool $tmp2717 = $tmp2716.value;
if ($tmp2717) goto block17; else goto block18;
block17:;
// line 723
org$pandalanguage$pandac$ClassDecl* $tmp2718 = *(&local17);
panda$collections$Array* $tmp2719 = *(&local1);
org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, $tmp2718, $tmp2719);
goto block18;
block18:;
org$pandalanguage$pandac$ClassDecl* $tmp2720 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2720));
// unreffing cl
*(&local17) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$ImmutableArray* $tmp2721 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2721));
// unreffing members
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2722 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2722));
// unreffing supertypes
*(&local15) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2723 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2723));
// unreffing generics
*(&local14) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2724 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2724));
// unreffing name
*(&local13) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2725 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2725));
// unreffing annotations
*(&local11) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2726 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2726));
// unreffing dc
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block16:;
panda$core$Int64 $tmp2727 = (panda$core$Int64) {26};
panda$core$Bit $tmp2728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2637, $tmp2727);
bool $tmp2729 = $tmp2728.value;
if ($tmp2729) goto block19; else goto block20;
block19:;
org$pandalanguage$pandac$Position* $tmp2730 = (org$pandalanguage$pandac$Position*) ($tmp2635->$data + 0);
org$pandalanguage$pandac$Position $tmp2731 = *$tmp2730;
*(&local18) = $tmp2731;
org$pandalanguage$pandac$ASTNode** $tmp2732 = (org$pandalanguage$pandac$ASTNode**) ($tmp2635->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2733 = *$tmp2732;
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2734 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2734));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2733));
*(&local19) = $tmp2733;
panda$collections$ImmutableArray** $tmp2735 = (panda$collections$ImmutableArray**) ($tmp2635->$data + 24);
panda$collections$ImmutableArray* $tmp2736 = *$tmp2735;
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2737 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2737));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2736));
*(&local20) = $tmp2736;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2738 = (org$pandalanguage$pandac$MethodDecl$Kind*) ($tmp2635->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2739 = *$tmp2738;
*(&local21) = $tmp2739;
panda$core$String** $tmp2740 = (panda$core$String**) ($tmp2635->$data + 40);
panda$core$String* $tmp2741 = *$tmp2740;
*(&local22) = ((panda$core$String*) NULL);
panda$core$String* $tmp2742 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2742));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2741));
*(&local22) = $tmp2741;
panda$collections$ImmutableArray** $tmp2743 = (panda$collections$ImmutableArray**) ($tmp2635->$data + 48);
panda$collections$ImmutableArray* $tmp2744 = *$tmp2743;
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2745 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2745));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2744));
*(&local23) = $tmp2744;
panda$collections$ImmutableArray** $tmp2746 = (panda$collections$ImmutableArray**) ($tmp2635->$data + 56);
panda$collections$ImmutableArray* $tmp2747 = *$tmp2746;
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2748 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2748));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2747));
*(&local24) = $tmp2747;
org$pandalanguage$pandac$ASTNode** $tmp2749 = (org$pandalanguage$pandac$ASTNode**) ($tmp2635->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2750 = *$tmp2749;
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2751 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2751));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2750));
*(&local25) = $tmp2750;
panda$collections$ImmutableArray** $tmp2752 = (panda$collections$ImmutableArray**) ($tmp2635->$data + 72);
panda$collections$ImmutableArray* $tmp2753 = *$tmp2752;
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2754 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2754));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2753));
*(&local26) = $tmp2753;
// line 727
org$pandalanguage$pandac$MethodDecl$Kind $tmp2755 = *(&local21);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2756;
$tmp2756 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2756->value = $tmp2755;
panda$core$Int64 $tmp2757 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2758 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2757);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2759;
$tmp2759 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2759->value = $tmp2758;
ITable* $tmp2760 = ((panda$core$Equatable*) $tmp2756)->$class->itable;
while ($tmp2760->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2760 = $tmp2760->next;
}
$fn2762 $tmp2761 = $tmp2760->methods[0];
panda$core$Bit $tmp2763 = $tmp2761(((panda$core$Equatable*) $tmp2756), ((panda$core$Equatable*) $tmp2759));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2756)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2759)));
bool $tmp2764 = $tmp2763.value;
if ($tmp2764) goto block21; else goto block22;
block21:;
// line 728
org$pandalanguage$pandac$Position $tmp2765 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2765, &$s2766);
// line 729
panda$collections$ImmutableArray* $tmp2767 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2767));
// unreffing statements
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2768 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2768));
// unreffing rawReturnType
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2769 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2769));
// unreffing parameters
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2770 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2770));
// unreffing generics
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2771 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2771));
// unreffing rawName
*(&local22) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2772 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2772));
// unreffing annotations
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2773 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2773));
// unreffing dc
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2774 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2774));
// unreffing e
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block22:;
// line 731
panda$collections$HashMap* $tmp2775 = *(&local3);
panda$core$String* $tmp2776 = *(&local2);
panda$collections$Array* $tmp2777 = *(&local1);
org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, param1, ((panda$collections$MapView*) $tmp2775), $tmp2776, ((panda$collections$List*) $tmp2777));
// line 732
*(&local27) = ((panda$core$String*) NULL);
// line 733
panda$core$String* $tmp2778 = *(&local22);
panda$core$Bit $tmp2779 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2778, &$s2780);
bool $tmp2781 = $tmp2779.value;
if ($tmp2781) goto block23; else goto block25;
block23:;
// line 734
panda$core$String* $tmp2782 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2782));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2783));
*(&local27) = &$s2784;
// line 735
panda$collections$Array* $tmp2785 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2785);
*(&local28) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2786 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2786));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2785));
*(&local28) = $tmp2785;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2785));
// line 736
panda$collections$Array* $tmp2787 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2787);
*(&local29) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2788 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2788));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2787));
*(&local29) = $tmp2787;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2787));
// line 737
panda$collections$Array* $tmp2789 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2789);
*(&local30) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2790 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2790));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2789));
*(&local30) = $tmp2789;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2789));
// line 738
panda$collections$ImmutableArray* $tmp2791 = *(&local24);
ITable* $tmp2792 = ((panda$collections$Iterable*) $tmp2791)->$class->itable;
while ($tmp2792->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2792 = $tmp2792->next;
}
$fn2794 $tmp2793 = $tmp2792->methods[0];
panda$collections$Iterator* $tmp2795 = $tmp2793(((panda$collections$Iterable*) $tmp2791));
goto block26;
block26:;
ITable* $tmp2796 = $tmp2795->$class->itable;
while ($tmp2796->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2796 = $tmp2796->next;
}
$fn2798 $tmp2797 = $tmp2796->methods[0];
panda$core$Bit $tmp2799 = $tmp2797($tmp2795);
bool $tmp2800 = $tmp2799.value;
if ($tmp2800) goto block28; else goto block27;
block27:;
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2801 = $tmp2795->$class->itable;
while ($tmp2801->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2801 = $tmp2801->next;
}
$fn2803 $tmp2802 = $tmp2801->methods[1];
panda$core$Object* $tmp2804 = $tmp2802($tmp2795);
org$pandalanguage$pandac$ASTNode* $tmp2805 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2805));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2804)));
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) $tmp2804);
// line 739
org$pandalanguage$pandac$ASTNode* $tmp2806 = *(&local31);
panda$core$Int64* $tmp2807 = &$tmp2806->$rawValue;
panda$core$Int64 $tmp2808 = *$tmp2807;
panda$core$Int64 $tmp2809 = (panda$core$Int64) {31};
panda$core$Bit $tmp2810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2808, $tmp2809);
bool $tmp2811 = $tmp2810.value;
if ($tmp2811) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp2812 = (org$pandalanguage$pandac$Position*) ($tmp2806->$data + 0);
org$pandalanguage$pandac$Position $tmp2813 = *$tmp2812;
*(&local32) = $tmp2813;
panda$core$String** $tmp2814 = (panda$core$String**) ($tmp2806->$data + 16);
panda$core$String* $tmp2815 = *$tmp2814;
*(&local33) = ((panda$core$String*) NULL);
panda$core$String* $tmp2816 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2816));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2815));
*(&local33) = $tmp2815;
org$pandalanguage$pandac$ASTNode** $tmp2817 = (org$pandalanguage$pandac$ASTNode**) ($tmp2806->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2818 = *$tmp2817;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2819 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2819));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2818));
*(&local34) = $tmp2818;
// line 741
panda$collections$Array* $tmp2820 = *(&local28);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2821 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
panda$core$String* $tmp2822 = *(&local33);
org$pandalanguage$pandac$ASTNode* $tmp2823 = *(&local34);
org$pandalanguage$pandac$Type* $tmp2824 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2823);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2821, $tmp2822, $tmp2824);
panda$collections$Array$add$panda$collections$Array$T($tmp2820, ((panda$core$Object*) $tmp2821));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2821));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2824));
// line 743
panda$collections$Array* $tmp2825 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp2826 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2827 = (panda$core$Int64) {20};
org$pandalanguage$pandac$Position $tmp2828 = *(&local32);
panda$core$String* $tmp2829 = *(&local33);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2826, $tmp2827, $tmp2828, $tmp2829);
panda$collections$Array$add$panda$collections$Array$T($tmp2825, ((panda$core$Object*) $tmp2826));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2826));
org$pandalanguage$pandac$ASTNode* $tmp2830 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2830));
// unreffing type
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2831 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2831));
// unreffing name
*(&local33) = ((panda$core$String*) NULL);
goto block29;
block31:;
// line 745
panda$core$Bit $tmp2832 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2833 = $tmp2832.value;
if ($tmp2833) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp2834 = (panda$core$Int64) {745};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2835, $tmp2834);
abort(); // unreachable
block32:;
goto block29;
block29:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2804);
org$pandalanguage$pandac$ASTNode* $tmp2836 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2836));
// unreffing p
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block26;
block28:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2795));
// line 748
org$pandalanguage$pandac$ASTNode* $tmp2837 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2838 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Position $tmp2839 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2840 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2841 = (panda$core$Int64) {20};
org$pandalanguage$pandac$Position $tmp2842 = *(&local18);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2840, $tmp2841, $tmp2842, &$s2843);
panda$collections$ImmutableArray* $tmp2844 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2844);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2837, $tmp2838, $tmp2839, $tmp2840, $tmp2844);
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2845 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2845));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2837));
*(&local35) = $tmp2837;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2837));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2840));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
// line 751
panda$collections$Array* $tmp2846 = *(&local29);
org$pandalanguage$pandac$ASTNode* $tmp2847 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2848 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Position $tmp2849 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2850 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2851 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Position $tmp2852 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2853 = *(&local35);
panda$core$String* $tmp2854 = *(&local27);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2850, $tmp2851, $tmp2852, $tmp2853, $tmp2854);
panda$collections$Array* $tmp2855 = *(&local30);
panda$collections$ImmutableArray* $tmp2856 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2855);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2847, $tmp2848, $tmp2849, $tmp2850, $tmp2856);
panda$collections$Array$add$panda$collections$Array$T($tmp2846, ((panda$core$Object*) $tmp2847));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2847));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2850));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2856));
// line 754
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
// line 755
org$pandalanguage$pandac$ASTNode* $tmp2857 = *(&local25);
panda$core$Bit $tmp2858 = panda$core$Bit$init$builtin_bit($tmp2857 != NULL);
bool $tmp2859 = $tmp2858.value;
if ($tmp2859) goto block34; else goto block36;
block34:;
// line 756
org$pandalanguage$pandac$ASTNode* $tmp2860 = *(&local25);
org$pandalanguage$pandac$Type* $tmp2861 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2860);
org$pandalanguage$pandac$Type* $tmp2862 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2862));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2861));
*(&local36) = $tmp2861;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2861));
goto block35;
block36:;
// line 1
// line 759
org$pandalanguage$pandac$Type* $tmp2863 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp2864 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2864));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2863));
*(&local36) = $tmp2863;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2863));
goto block35;
block35:;
// line 761
org$pandalanguage$pandac$MethodDecl* $tmp2865 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2866 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2867 = *$tmp2866;
org$pandalanguage$pandac$Position $tmp2868 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2869 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2870 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2869, $tmp2870);
panda$core$Int64 $tmp2871 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2872 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2871);
panda$collections$Array* $tmp2873 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2873);
panda$collections$Array* $tmp2874 = *(&local28);
org$pandalanguage$pandac$Type* $tmp2875 = *(&local36);
panda$collections$Array* $tmp2876 = *(&local29);
panda$collections$ImmutableArray* $tmp2877 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2876);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2865, $tmp2867, $tmp2868, ((panda$core$String*) NULL), $tmp2869, $tmp2872, &$s2878, $tmp2873, $tmp2874, $tmp2875, $tmp2877);
*(&local37) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2879 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2879));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2865));
*(&local37) = $tmp2865;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2865));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2869));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2873));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2877));
// line 765
org$pandalanguage$pandac$ClassDecl** $tmp2880 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2881 = *$tmp2880;
panda$collections$Array** $tmp2882 = &$tmp2881->methods;
panda$collections$Array* $tmp2883 = *$tmp2882;
org$pandalanguage$pandac$MethodDecl* $tmp2884 = *(&local37);
panda$collections$Array$add$panda$collections$Array$T($tmp2883, ((panda$core$Object*) $tmp2884));
org$pandalanguage$pandac$MethodDecl* $tmp2885 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2885));
// unreffing bareMain
*(&local37) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp2886 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2886));
// unreffing returnType
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2887 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2887));
// unreffing bareConstruct
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2888 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2888));
// unreffing mainArguments
*(&local30) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2889 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2889));
// unreffing mainStatements
*(&local29) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2890 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2890));
// unreffing mainParameters
*(&local28) = ((panda$collections$Array*) NULL);
goto block24;
block25:;
// line 1
// line 768
panda$core$String* $tmp2891 = *(&local22);
panda$core$String* $tmp2892 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2892));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2891));
*(&local27) = $tmp2891;
goto block24;
block24:;
// line 770
panda$core$Weak** $tmp2893 = &param0->compiler;
panda$core$Weak* $tmp2894 = *$tmp2893;
panda$core$Object* $tmp2895 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2894);
panda$core$Panda$unref$panda$core$Object$Q($tmp2895);
panda$collections$Stack** $tmp2896 = &((org$pandalanguage$pandac$Compiler*) $tmp2895)->currentClass;
panda$collections$Stack* $tmp2897 = *$tmp2896;
org$pandalanguage$pandac$ClassDecl** $tmp2898 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2899 = *$tmp2898;
panda$collections$Stack$push$panda$collections$Stack$T($tmp2897, ((panda$core$Object*) $tmp2899));
// line 771
org$pandalanguage$pandac$ClassDecl** $tmp2900 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2901 = *$tmp2900;
org$pandalanguage$pandac$Position $tmp2902 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2903 = *(&local19);
panda$collections$ImmutableArray* $tmp2904 = *(&local20);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2905 = *(&local21);
panda$core$String* $tmp2906 = *(&local27);
panda$collections$ImmutableArray* $tmp2907 = *(&local23);
panda$collections$ImmutableArray* $tmp2908 = *(&local24);
org$pandalanguage$pandac$ASTNode* $tmp2909 = *(&local25);
panda$collections$ImmutableArray* $tmp2910 = *(&local26);
org$pandalanguage$pandac$MethodDecl* $tmp2911 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(param0, $tmp2901, $tmp2902, $tmp2903, $tmp2904, $tmp2905, $tmp2906, $tmp2907, $tmp2908, $tmp2909, $tmp2910);
*(&local38) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2912 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2912));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2911));
*(&local38) = $tmp2911;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2911));
// line 773
org$pandalanguage$pandac$MethodDecl* $tmp2913 = *(&local38);
org$pandalanguage$pandac$Annotations** $tmp2914 = &$tmp2913->annotations;
org$pandalanguage$pandac$Annotations* $tmp2915 = *$tmp2914;
panda$core$Bit $tmp2916 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp2915);
bool $tmp2917 = $tmp2916.value;
if ($tmp2917) goto block37; else goto block38;
block37:;
// line 774
org$pandalanguage$pandac$MethodDecl* $tmp2918 = *(&local38);
org$pandalanguage$pandac$Position* $tmp2919 = &((org$pandalanguage$pandac$Symbol*) $tmp2918)->position;
org$pandalanguage$pandac$Position $tmp2920 = *$tmp2919;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2920, &$s2921);
// line 776
org$pandalanguage$pandac$MethodDecl* $tmp2922 = *(&local38);
org$pandalanguage$pandac$Annotations** $tmp2923 = &$tmp2922->annotations;
org$pandalanguage$pandac$Annotations* $tmp2924 = *$tmp2923;
panda$core$Int64* $tmp2925 = &$tmp2924->flags;
panda$core$Int64 $tmp2926 = *$tmp2925;
panda$core$Int64 $tmp2927 = (panda$core$Int64) {16};
panda$core$Int64 $tmp2928 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp2927);
panda$core$Int64 $tmp2929 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp2926, $tmp2928);
panda$core$Int64* $tmp2930 = &$tmp2924->flags;
*$tmp2930 = $tmp2929;
goto block38;
block38:;
// line 778
panda$core$Weak** $tmp2931 = &param0->compiler;
panda$core$Weak* $tmp2932 = *$tmp2931;
panda$core$Object* $tmp2933 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2932);
panda$core$Panda$unref$panda$core$Object$Q($tmp2933);
panda$collections$Stack** $tmp2934 = &((org$pandalanguage$pandac$Compiler*) $tmp2933)->currentClass;
panda$collections$Stack* $tmp2935 = *$tmp2934;
org$pandalanguage$pandac$ClassDecl** $tmp2936 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2937 = *$tmp2936;
panda$collections$Stack$pop$panda$collections$Stack$T($tmp2935, ((panda$core$Object*) $tmp2937));
// line 779
org$pandalanguage$pandac$ClassDecl** $tmp2938 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2939 = *$tmp2938;
panda$collections$Array** $tmp2940 = &$tmp2939->methods;
panda$collections$Array* $tmp2941 = *$tmp2940;
org$pandalanguage$pandac$MethodDecl* $tmp2942 = *(&local38);
panda$collections$Array$add$panda$collections$Array$T($tmp2941, ((panda$core$Object*) $tmp2942));
// line 780
org$pandalanguage$pandac$ClassDecl** $tmp2943 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2944 = *$tmp2943;
org$pandalanguage$pandac$SymbolTable** $tmp2945 = &$tmp2944->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2946 = *$tmp2945;
org$pandalanguage$pandac$MethodDecl* $tmp2947 = *(&local38);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2946, ((org$pandalanguage$pandac$Symbol*) $tmp2947));
org$pandalanguage$pandac$MethodDecl* $tmp2948 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2948));
// unreffing m
*(&local38) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$String* $tmp2949 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2949));
// unreffing name
*(&local27) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2950 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2950));
// unreffing statements
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2951 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2951));
// unreffing rawReturnType
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2952 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2952));
// unreffing parameters
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2953 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2953));
// unreffing generics
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2954 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2954));
// unreffing rawName
*(&local22) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2955 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2955));
// unreffing annotations
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2956 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2956));
// unreffing dc
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block20:;
panda$core$Int64 $tmp2957 = (panda$core$Int64) {16};
panda$core$Bit $tmp2958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2637, $tmp2957);
bool $tmp2959 = $tmp2958.value;
if ($tmp2959) goto block39; else goto block40;
block39:;
org$pandalanguage$pandac$Position* $tmp2960 = (org$pandalanguage$pandac$Position*) ($tmp2635->$data + 0);
org$pandalanguage$pandac$Position $tmp2961 = *$tmp2960;
*(&local39) = $tmp2961;
org$pandalanguage$pandac$ASTNode** $tmp2962 = (org$pandalanguage$pandac$ASTNode**) ($tmp2635->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2963 = *$tmp2962;
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2964 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2964));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2963));
*(&local40) = $tmp2963;
panda$collections$ImmutableArray** $tmp2965 = (panda$collections$ImmutableArray**) ($tmp2635->$data + 24);
panda$collections$ImmutableArray* $tmp2966 = *$tmp2965;
*(&local41) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2967 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2967));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2966));
*(&local41) = $tmp2966;
org$pandalanguage$pandac$ASTNode** $tmp2968 = (org$pandalanguage$pandac$ASTNode**) ($tmp2635->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2969 = *$tmp2968;
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2970 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2970));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2969));
*(&local42) = $tmp2969;
// line 782
panda$collections$HashMap* $tmp2971 = *(&local3);
panda$core$String* $tmp2972 = *(&local2);
panda$collections$Array* $tmp2973 = *(&local1);
org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, param1, ((panda$collections$MapView*) $tmp2971), $tmp2972, ((panda$collections$List*) $tmp2973));
// line 783
org$pandalanguage$pandac$ClassDecl** $tmp2974 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2975 = *$tmp2974;
panda$collections$Array** $tmp2976 = &$tmp2975->fields;
panda$collections$Array* $tmp2977 = *$tmp2976;
ITable* $tmp2978 = ((panda$collections$CollectionView*) $tmp2977)->$class->itable;
while ($tmp2978->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2978 = $tmp2978->next;
}
$fn2980 $tmp2979 = $tmp2978->methods[0];
panda$core$Int64 $tmp2981 = $tmp2979(((panda$collections$CollectionView*) $tmp2977));
*(&local43) = $tmp2981;
// line 784
org$pandalanguage$pandac$ClassDecl** $tmp2982 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2983 = *$tmp2982;
org$pandalanguage$pandac$Position $tmp2984 = *(&local39);
org$pandalanguage$pandac$ASTNode* $tmp2985 = *(&local40);
panda$collections$ImmutableArray* $tmp2986 = *(&local41);
org$pandalanguage$pandac$ASTNode* $tmp2987 = *(&local42);
org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(param0, $tmp2983, $tmp2984, $tmp2985, $tmp2986, $tmp2987);
// line 785
panda$core$Int64 $tmp2988 = *(&local43);
org$pandalanguage$pandac$ClassDecl** $tmp2989 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2990 = *$tmp2989;
panda$collections$Array** $tmp2991 = &$tmp2990->fields;
panda$collections$Array* $tmp2992 = *$tmp2991;
ITable* $tmp2993 = ((panda$collections$CollectionView*) $tmp2992)->$class->itable;
while ($tmp2993->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2993 = $tmp2993->next;
}
$fn2995 $tmp2994 = $tmp2993->methods[0];
panda$core$Int64 $tmp2996 = $tmp2994(((panda$collections$CollectionView*) $tmp2992));
panda$core$Bit $tmp2997 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp2998 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2988, $tmp2996, $tmp2997);
panda$core$Int64 $tmp2999 = $tmp2998.min;
*(&local44) = $tmp2999;
panda$core$Int64 $tmp3000 = $tmp2998.max;
panda$core$Bit $tmp3001 = $tmp2998.inclusive;
bool $tmp3002 = $tmp3001.value;
panda$core$Int64 $tmp3003 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp3004 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3003);
if ($tmp3002) goto block44; else goto block45;
block44:;
int64_t $tmp3005 = $tmp2999.value;
int64_t $tmp3006 = $tmp3000.value;
bool $tmp3007 = $tmp3005 <= $tmp3006;
panda$core$Bit $tmp3008 = (panda$core$Bit) {$tmp3007};
bool $tmp3009 = $tmp3008.value;
if ($tmp3009) goto block41; else goto block42;
block45:;
int64_t $tmp3010 = $tmp2999.value;
int64_t $tmp3011 = $tmp3000.value;
bool $tmp3012 = $tmp3010 < $tmp3011;
panda$core$Bit $tmp3013 = (panda$core$Bit) {$tmp3012};
bool $tmp3014 = $tmp3013.value;
if ($tmp3014) goto block41; else goto block42;
block41:;
// line 786
org$pandalanguage$pandac$ClassDecl** $tmp3015 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3016 = *$tmp3015;
panda$collections$Array** $tmp3017 = &$tmp3016->fields;
panda$collections$Array* $tmp3018 = *$tmp3017;
panda$core$Int64 $tmp3019 = *(&local44);
panda$core$Object* $tmp3020 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3018, $tmp3019);
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp3021 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3021));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3020)));
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) $tmp3020);
panda$core$Panda$unref$panda$core$Object$Q($tmp3020);
// line 787
org$pandalanguage$pandac$FieldDecl* $tmp3022 = *(&local45);
org$pandalanguage$pandac$FieldDecl$Kind* $tmp3023 = &$tmp3022->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp3024 = *$tmp3023;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp3025;
$tmp3025 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp3025->value = $tmp3024;
panda$core$Int64 $tmp3026 = (panda$core$Int64) {2};
org$pandalanguage$pandac$FieldDecl$Kind $tmp3027 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp3026);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp3028;
$tmp3028 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp3028->value = $tmp3027;
ITable* $tmp3029 = ((panda$core$Equatable*) $tmp3025)->$class->itable;
while ($tmp3029->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3029 = $tmp3029->next;
}
$fn3031 $tmp3030 = $tmp3029->methods[1];
panda$core$Bit $tmp3032 = $tmp3030(((panda$core$Equatable*) $tmp3025), ((panda$core$Equatable*) $tmp3028));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3025)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3028)));
bool $tmp3033 = $tmp3032.value;
if ($tmp3033) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$FieldDecl* $tmp3034 = *(&local45);
org$pandalanguage$pandac$Annotations** $tmp3035 = &$tmp3034->annotations;
org$pandalanguage$pandac$Annotations* $tmp3036 = *$tmp3035;
panda$core$Bit $tmp3037 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp3036);
*(&local46) = $tmp3037;
goto block48;
block47:;
*(&local46) = $tmp3032;
goto block48;
block48:;
panda$core$Bit $tmp3038 = *(&local46);
bool $tmp3039 = $tmp3038.value;
if ($tmp3039) goto block49; else goto block50;
block49:;
// line 789
org$pandalanguage$pandac$FieldDecl* $tmp3040 = *(&local45);
org$pandalanguage$pandac$Position* $tmp3041 = &((org$pandalanguage$pandac$Symbol*) $tmp3040)->position;
org$pandalanguage$pandac$Position $tmp3042 = *$tmp3041;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp3042, &$s3043);
goto block50;
block50:;
org$pandalanguage$pandac$FieldDecl* $tmp3044 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3044));
// unreffing f
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block43;
block43:;
panda$core$Int64 $tmp3045 = *(&local44);
int64_t $tmp3046 = $tmp3000.value;
int64_t $tmp3047 = $tmp3045.value;
int64_t $tmp3048 = $tmp3046 - $tmp3047;
panda$core$Int64 $tmp3049 = (panda$core$Int64) {$tmp3048};
panda$core$UInt64 $tmp3050 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3049);
if ($tmp3002) goto block52; else goto block53;
block52:;
uint64_t $tmp3051 = $tmp3050.value;
uint64_t $tmp3052 = $tmp3004.value;
bool $tmp3053 = $tmp3051 >= $tmp3052;
panda$core$Bit $tmp3054 = (panda$core$Bit) {$tmp3053};
bool $tmp3055 = $tmp3054.value;
if ($tmp3055) goto block51; else goto block42;
block53:;
uint64_t $tmp3056 = $tmp3050.value;
uint64_t $tmp3057 = $tmp3004.value;
bool $tmp3058 = $tmp3056 > $tmp3057;
panda$core$Bit $tmp3059 = (panda$core$Bit) {$tmp3058};
bool $tmp3060 = $tmp3059.value;
if ($tmp3060) goto block51; else goto block42;
block51:;
int64_t $tmp3061 = $tmp3045.value;
int64_t $tmp3062 = $tmp3003.value;
int64_t $tmp3063 = $tmp3061 + $tmp3062;
panda$core$Int64 $tmp3064 = (panda$core$Int64) {$tmp3063};
*(&local44) = $tmp3064;
goto block41;
block42:;
org$pandalanguage$pandac$ASTNode* $tmp3065 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3065));
// unreffing varDecl
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3066 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3066));
// unreffing annotations
*(&local41) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3067 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3067));
// unreffing dc
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block40:;
// line 794
panda$core$Bit $tmp3068 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3069 = $tmp3068.value;
if ($tmp3069) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp3070 = (panda$core$Int64) {794};
org$pandalanguage$pandac$ASTNode* $tmp3071 = *(&local4);
panda$core$String* $tmp3072 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3073, ((panda$core$Object*) $tmp3071));
panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3072, &$s3075);
org$pandalanguage$pandac$ASTNode* $tmp3076 = *(&local4);
panda$core$Int64* $tmp3077 = &$tmp3076->$rawValue;
panda$core$Int64 $tmp3078 = *$tmp3077;
panda$core$Int64$wrapper* $tmp3079;
$tmp3079 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3079->value = $tmp3078;
panda$core$String* $tmp3080 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3074, ((panda$core$Object*) $tmp3079));
panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3080, &$s3082);
org$pandalanguage$pandac$ASTNode* $tmp3083 = *(&local4);
$fn3085 $tmp3084 = ($fn3085) $tmp3083->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3086 = $tmp3084($tmp3083);
org$pandalanguage$pandac$Position$wrapper* $tmp3087;
$tmp3087 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp3087->value = $tmp3086;
panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3081, ((panda$core$Object*) $tmp3087));
panda$core$String* $tmp3089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3088, &$s3090);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3091, $tmp3070, $tmp3089);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3072));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3074));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3079));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3080));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3081));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3087));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3088));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3089));
abort(); // unreachable
block54:;
goto block7;
block7:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2633);
org$pandalanguage$pandac$ASTNode* $tmp3092 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3092));
// unreffing e
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2624));
// line 797
panda$io$File** $tmp3093 = &param0->source;
panda$io$File* $tmp3094 = *$tmp3093;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3094));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) NULL)));
panda$io$File** $tmp3095 = &param0->source;
*$tmp3095 = ((panda$io$File*) NULL);
// line 798
panda$collections$Array* $tmp3096 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp3096)));
panda$collections$HashMap* $tmp3097 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3097));
// unreffing aliases
*(&local3) = ((panda$collections$HashMap*) NULL);
panda$core$String* $tmp3098 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3098));
// unreffing currentPackage
*(&local2) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp3099 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3099));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp3100 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3100));
// unreffing entries
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
return ((panda$collections$ListView*) $tmp3096);
block3:;
// line 800
panda$core$Bit $tmp3101 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3102 = $tmp3101.value;
if ($tmp3102) goto block56; else goto block57;
block57:;
panda$core$Int64 $tmp3103 = (panda$core$Int64) {800};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3104, $tmp3103);
abort(); // unreachable
block56:;
goto block1;
block1:;
panda$core$Bit $tmp3105 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3106 = $tmp3105.value;
if ($tmp3106) goto block58; else goto block59;
block59:;
panda$core$Int64 $tmp3107 = (panda$core$Int64) {697};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3108, $tmp3107, &$s3109);
abort(); // unreachable
block58:;
abort(); // unreachable

}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* param0) {

panda$core$Weak** $tmp3110 = &param0->compiler;
panda$core$Weak* $tmp3111 = *$tmp3110;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3111));
org$pandalanguage$pandac$ClassDecl** $tmp3112 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3113 = *$tmp3112;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3113));
panda$io$File** $tmp3114 = &param0->source;
panda$io$File* $tmp3115 = *$tmp3114;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3115));
return;

}

