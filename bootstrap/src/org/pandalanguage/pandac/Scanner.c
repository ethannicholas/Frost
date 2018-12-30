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

typedef panda$collections$Iterator* (*$fn68)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn72)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn77)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn89)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn166)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn170)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn175)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn191)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn238)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn243)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn247)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn252)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn390)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn392)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn419)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn421)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn448)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn450)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn477)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn479)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn506)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn508)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn612)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn616)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn621)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn692)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn802)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn806)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn811)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn844)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn848)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn853)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn922)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn926)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn931)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn978)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn982)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn987)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1028)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1032)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1037)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1080)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1084)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1089)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1121)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1125)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1130)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1147)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1151)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1156)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1267)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1271)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1276)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1304)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1308)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1313)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1327)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1331)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1336)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1368)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1372)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1377)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1427)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1431)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1436)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1486)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1519)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1523)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1528)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1573)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1587)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1591)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1596)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1637)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1668)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1931)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1935)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1940)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1953)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1969)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2008)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2012)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2017)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn2062)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn2080)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2086)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2090)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2095)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2127)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2174)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2178)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2183)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2217)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2244)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2248)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2253)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2265)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2280)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2293)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2307)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2317)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2351)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2360)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2371)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2404)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2413)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2426)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2430)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2435)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2443)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2489)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2493)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2498)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2510)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2540)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2627)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2631)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2636)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2766)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2798)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2802)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2807)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2984)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2999)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn3035)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3089)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 197438526755717134, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6e\x76\x65\x72\x74\x54\x79\x70\x65\x28\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 145, 2505294641206069548, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, -5891455126768809117, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, -1200106393953033593, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, 17797457560281006, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 1798843608756893563, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6d\x70\x6c\x65\x78\x69\x74\x79\x28\x6e\x6f\x64\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 133, -6414000039548560057, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s2140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static panda$core$String $s2507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static panda$core$String $s2518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s3047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s3079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s3094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x73\x63\x61\x6e\x28\x73\x6f\x75\x72\x63\x65\x3a\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x66\x69\x6c\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 193, 7895019779626162639, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 21
panda$core$Weak* $tmp2 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp2, ((panda$core$Object*) param1));
panda$core$Weak** $tmp3 = &param0->compiler;
panda$core$Weak* $tmp4 = *$tmp3;
bool $tmp5 = $tmp4 != ((panda$core$Weak*) NULL);
if ($tmp5) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp6 = panda$core$Weak$get$R$panda$core$Weak$T($tmp4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler*) $tmp6)));
panda$core$Panda$unref$panda$core$Object$Q($tmp6);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$core$Weak** $tmp7 = &param0->compiler;
*$tmp7 = $tmp2;
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
panda$core$Int64* $tmp8 = &param1->$rawValue;
panda$core$Int64 $tmp9 = *$tmp8;
panda$core$Int64 $tmp10 = (panda$core$Int64) {42};
panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp9, $tmp10);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp13 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp14 = *$tmp13;
*(&local0) = $tmp14;
panda$core$String** $tmp15 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp16 = *$tmp15;
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp17 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
*(&local1) = $tmp16;
// line 27
org$pandalanguage$pandac$Type* $tmp18 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp19 = *(&local1);
panda$core$Int64 $tmp20 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp21 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp20);
org$pandalanguage$pandac$Position $tmp22 = *(&local0);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp18, $tmp19, $tmp21, $tmp22);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$String* $tmp23 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing name
*(&local1) = ((panda$core$String*) NULL);
return $tmp18;
block3:;
panda$core$Int64 $tmp24 = (panda$core$Int64) {29};
panda$core$Bit $tmp25 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp9, $tmp24);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp27 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp28 = *$tmp27;
*(&local2) = $tmp28;
org$pandalanguage$pandac$ASTNode** $tmp29 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp30 = *$tmp29;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp31 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
*(&local3) = $tmp30;
// line 29
panda$collections$Array* $tmp32 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp32);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp33 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
*(&local4) = $tmp32;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// line 30
panda$collections$Array* $tmp34 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp35 = *(&local3);
org$pandalanguage$pandac$Type* $tmp36 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp35);
panda$collections$Array$add$panda$collections$Array$T($tmp34, ((panda$core$Object*) $tmp36));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// line 31
org$pandalanguage$pandac$Type* $tmp37 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$collections$Array* $tmp38 = *(&local4);
panda$core$Int64 $tmp39 = (panda$core$Int64) {0};
panda$core$Object* $tmp40 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp38, $tmp39);
panda$core$String** $tmp41 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp40))->name;
panda$core$String* $tmp42 = *$tmp41;
panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp42, &$s44);
panda$core$Int64 $tmp45 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp46 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp45);
org$pandalanguage$pandac$Position $tmp47 = *(&local2);
panda$collections$Array* $tmp48 = *(&local4);
panda$core$Bit $tmp49 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp37, $tmp43, $tmp46, $tmp47, ((panda$collections$ListView*) $tmp48), $tmp49);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
panda$core$Panda$unref$panda$core$Object$Q($tmp40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$collections$Array* $tmp50 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing subtypes
*(&local4) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp51 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing base
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp37;
block5:;
panda$core$Int64 $tmp52 = (panda$core$Int64) {19};
panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp9, $tmp52);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp55 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp56 = *$tmp55;
*(&local5) = $tmp56;
panda$core$String** $tmp57 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp58 = *$tmp57;
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp59 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
*(&local6) = $tmp58;
panda$collections$ImmutableArray** $tmp60 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp61 = *$tmp60;
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp62 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
*(&local7) = $tmp61;
// line 33
panda$collections$Array* $tmp63 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp63);
*(&local8) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp64 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
*(&local8) = $tmp63;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
// line 34
panda$collections$ImmutableArray* $tmp65 = *(&local7);
ITable* $tmp66 = ((panda$collections$Iterable*) $tmp65)->$class->itable;
while ($tmp66->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp66 = $tmp66->next;
}
$fn68 $tmp67 = $tmp66->methods[0];
panda$collections$Iterator* $tmp69 = $tmp67(((panda$collections$Iterable*) $tmp65));
goto block8;
block8:;
ITable* $tmp70 = $tmp69->$class->itable;
while ($tmp70->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp70 = $tmp70->next;
}
$fn72 $tmp71 = $tmp70->methods[0];
panda$core$Bit $tmp73 = $tmp71($tmp69);
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block10; else goto block9;
block9:;
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp75 = $tmp69->$class->itable;
while ($tmp75->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[1];
panda$core$Object* $tmp78 = $tmp76($tmp69);
org$pandalanguage$pandac$ASTNode* $tmp79 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp78)));
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) $tmp78);
// line 35
panda$collections$Array* $tmp80 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp81 = *(&local9);
org$pandalanguage$pandac$Type* $tmp82 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp81);
panda$collections$Array$add$panda$collections$Array$T($tmp80, ((panda$core$Object*) $tmp82));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
panda$core$Panda$unref$panda$core$Object$Q($tmp78);
org$pandalanguage$pandac$ASTNode* $tmp83 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing arg
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block10:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// line 37
org$pandalanguage$pandac$Type* $tmp84 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
panda$core$String* $tmp85 = *(&local6);
panda$core$Int64 $tmp86 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type$Kind $tmp87 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp86);
$fn89 $tmp88 = ($fn89) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp90 = $tmp88(param1);
org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp84, $tmp85, $tmp87, $tmp90);
panda$collections$Array* $tmp91 = *(&local8);
org$pandalanguage$pandac$Type* $tmp92 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp84, ((panda$collections$ListView*) $tmp91));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
panda$collections$Array* $tmp93 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
// unreffing finalArgs
*(&local8) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp94 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing args
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp95 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
// unreffing base
*(&local6) = ((panda$core$String*) NULL);
return $tmp92;
block7:;
panda$core$Int64 $tmp96 = (panda$core$Int64) {23};
panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp9, $tmp96);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block11; else goto block12;
block11:;
org$pandalanguage$pandac$Position* $tmp99 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp100 = *$tmp99;
org$pandalanguage$pandac$IR$Value** $tmp101 = (org$pandalanguage$pandac$IR$Value**) (param1->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp102 = *$tmp101;
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp103 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
*(&local10) = $tmp102;
// line 39
org$pandalanguage$pandac$IR$Value* $tmp104 = *(&local10);
panda$core$Int64* $tmp105 = &$tmp104->$rawValue;
panda$core$Int64 $tmp106 = *$tmp105;
panda$core$Int64 $tmp107 = (panda$core$Int64) {12};
panda$core$Bit $tmp108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp106, $tmp107);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block14; else goto block13;
block14:;
org$pandalanguage$pandac$Type** $tmp110 = (org$pandalanguage$pandac$Type**) ($tmp104->$data + 0);
org$pandalanguage$pandac$Type* $tmp111 = *$tmp110;
*(&local11) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp112 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
*(&local11) = $tmp111;
// line 41
org$pandalanguage$pandac$Type* $tmp113 = *(&local11);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
org$pandalanguage$pandac$Type* $tmp114 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// unreffing t
*(&local11) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp115 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
// unreffing type
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp113;
block13:;
// line 43
panda$core$Bit $tmp116 = panda$core$Bit$init$builtin_bit(false);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp118 = (panda$core$Int64) {43};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s119, $tmp118);
abort(); // unreachable
block15:;
org$pandalanguage$pandac$IR$Value* $tmp120 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
// unreffing type
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block12:;
panda$core$Int64 $tmp121 = (panda$core$Int64) {27};
panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp9, $tmp121);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block17; else goto block18;
block17:;
org$pandalanguage$pandac$Position* $tmp124 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp125 = *$tmp124;
*(&local12) = $tmp125;
org$pandalanguage$pandac$parser$Token$Kind* $tmp126 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp127 = *$tmp126;
*(&local13) = $tmp127;
panda$collections$ImmutableArray** $tmp128 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp129 = *$tmp128;
*(&local14) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp130 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
*(&local14) = $tmp129;
org$pandalanguage$pandac$ASTNode** $tmp131 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp132 = *$tmp131;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp133 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
*(&local15) = $tmp132;
// line 45
// line 46
org$pandalanguage$pandac$parser$Token$Kind $tmp134 = *(&local13);
panda$core$Int64 $tmp135 = $tmp134.$rawValue;
panda$core$Int64 $tmp136 = (panda$core$Int64) {91};
panda$core$Bit $tmp137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp135, $tmp136);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block20; else goto block21;
block20:;
// line 48
panda$core$Int64 $tmp139 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp140 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp139);
*(&local16) = $tmp140;
goto block19;
block21:;
panda$core$Int64 $tmp141 = (panda$core$Int64) {92};
panda$core$Bit $tmp142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp135, $tmp141);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block22; else goto block23;
block22:;
// line 50
panda$core$Int64 $tmp144 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp145 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp144);
*(&local16) = $tmp145;
goto block19;
block23:;
panda$core$Int64 $tmp146 = (panda$core$Int64) {93};
panda$core$Bit $tmp147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp135, $tmp146);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block24; else goto block25;
block24:;
// line 52
panda$core$Int64 $tmp149 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp150 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp149);
*(&local16) = $tmp150;
goto block19;
block25:;
panda$core$Int64 $tmp151 = (panda$core$Int64) {94};
panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp135, $tmp151);
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block26; else goto block27;
block26:;
// line 54
panda$core$Int64 $tmp154 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp155 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp154);
*(&local16) = $tmp155;
goto block19;
block27:;
// line 56
panda$core$Bit $tmp156 = panda$core$Bit$init$builtin_bit(false);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp158 = (panda$core$Int64) {56};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s159, $tmp158, &$s160);
abort(); // unreachable
block28:;
goto block19;
block19:;
// line 58
panda$collections$Array* $tmp161 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp161);
*(&local17) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp162 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
*(&local17) = $tmp161;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
// line 59
panda$collections$ImmutableArray* $tmp163 = *(&local14);
ITable* $tmp164 = ((panda$collections$Iterable*) $tmp163)->$class->itable;
while ($tmp164->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp164 = $tmp164->next;
}
$fn166 $tmp165 = $tmp164->methods[0];
panda$collections$Iterator* $tmp167 = $tmp165(((panda$collections$Iterable*) $tmp163));
goto block30;
block30:;
ITable* $tmp168 = $tmp167->$class->itable;
while ($tmp168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[0];
panda$core$Bit $tmp171 = $tmp169($tmp167);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block32; else goto block31;
block31:;
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp173 = $tmp167->$class->itable;
while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[1];
panda$core$Object* $tmp176 = $tmp174($tmp167);
org$pandalanguage$pandac$ASTNode* $tmp177 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp176)));
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) $tmp176);
// line 60
panda$collections$Array* $tmp178 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp179 = *(&local18);
org$pandalanguage$pandac$Type* $tmp180 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp179);
panda$collections$Array$add$panda$collections$Array$T($tmp178, ((panda$core$Object*) $tmp180));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
panda$core$Panda$unref$panda$core$Object$Q($tmp176);
org$pandalanguage$pandac$ASTNode* $tmp181 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
// unreffing p
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block30;
block32:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// line 62
*(&local19) = ((org$pandalanguage$pandac$Type*) NULL);
// line 63
org$pandalanguage$pandac$ASTNode* $tmp182 = *(&local15);
panda$core$Bit $tmp183 = panda$core$Bit$init$builtin_bit($tmp182 != NULL);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block33; else goto block35;
block33:;
// line 64
org$pandalanguage$pandac$ASTNode* $tmp185 = *(&local15);
org$pandalanguage$pandac$Type* $tmp186 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp185);
org$pandalanguage$pandac$Type* $tmp187 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
*(&local19) = $tmp186;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
goto block34;
block35:;
// line 1
// line 67
org$pandalanguage$pandac$Type* $tmp188 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp189 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
*(&local19) = $tmp188;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
goto block34;
block34:;
// line 69
$fn191 $tmp190 = ($fn191) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp192 = $tmp190(param1);
org$pandalanguage$pandac$Type$Kind $tmp193 = *(&local16);
panda$collections$Array* $tmp194 = *(&local17);
panda$collections$ImmutableArray* $tmp195 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp194);
org$pandalanguage$pandac$Type* $tmp196 = *(&local19);
panda$core$Int64 $tmp197 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp198 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp192, $tmp193, ((panda$collections$ListView*) $tmp195), $tmp196, $tmp197);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
org$pandalanguage$pandac$Type* $tmp199 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing returnType
*(&local19) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp200 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
// unreffing parameters
*(&local17) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp201 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// unreffing rawReturnType
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp202 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
// unreffing rawParameters
*(&local14) = ((panda$collections$ImmutableArray*) NULL);
return $tmp198;
block18:;
// line 72
panda$core$Bit $tmp203 = panda$core$Bit$init$builtin_bit(false);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp205 = (panda$core$Int64) {72};
panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s207, ((panda$core$Object*) param1));
panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp206, &$s209);
panda$core$Int64* $tmp210 = &param1->$rawValue;
panda$core$Int64 $tmp211 = *$tmp210;
panda$core$Int64$wrapper* $tmp212;
$tmp212 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp212->value = $tmp211;
panda$core$String* $tmp213 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp208, ((panda$core$Object*) $tmp212));
panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp213, &$s215);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s216, $tmp205, $tmp214);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
abort(); // unreachable
block36:;
goto block1;
block1:;
panda$core$Bit $tmp217 = panda$core$Bit$init$builtin_bit(false);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block38; else goto block39;
block39:;
panda$core$Int64 $tmp219 = (panda$core$Int64) {24};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s220, $tmp219, &$s221);
abort(); // unreachable
block38:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Position param1, panda$core$Int64 param2, panda$core$Int64 param3) {

// line 77
panda$core$Int64 $tmp222 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(param2, param3);
panda$core$Int64 $tmp223 = (panda$core$Int64) {0};
panda$core$Bit $tmp224 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp222, $tmp223);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block1; else goto block2;
block1:;
// line 78
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s226);
goto block2;
block2:;
// line 80
panda$core$Int64 $tmp227 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(param2, param3);
return $tmp227;

}
panda$core$Bit org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 87
panda$core$Bit $tmp228 = panda$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block1; else goto block2;
block1:;
// line 88
panda$core$Bit $tmp230 = panda$core$Bit$init$builtin_bit(true);
return $tmp230;
block2:;
// line 90
panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s232, param2);
panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp231, &$s234);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp233);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
// line 91
panda$core$Bit $tmp235 = panda$core$Bit$init$builtin_bit(false);
return $tmp235;

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
panda$core$Int64 $tmp236 = (panda$core$Int64) {0};
*(&local0) = $tmp236;
// line 85
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp237 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
*(&local1) = ((panda$collections$Array*) NULL);
// line 86
panda$core$Method* $tmp239 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp239, ((panda$core$Int8*) org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit), ((panda$core$Immutable*) NULL));
// line 86
*(&local2) = ((panda$core$Method*) NULL);
panda$core$Method* $tmp240 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
*(&local2) = $tmp239;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// line 93
ITable* $tmp241 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp241->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp241 = $tmp241->next;
}
$fn243 $tmp242 = $tmp241->methods[0];
panda$collections$Iterator* $tmp244 = $tmp242(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp245 = $tmp244->$class->itable;
while ($tmp245->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp245 = $tmp245->next;
}
$fn247 $tmp246 = $tmp245->methods[0];
panda$core$Bit $tmp248 = $tmp246($tmp244);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block3; else goto block2;
block2:;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp250 = $tmp244->$class->itable;
while ($tmp250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[1];
panda$core$Object* $tmp253 = $tmp251($tmp244);
org$pandalanguage$pandac$ASTNode* $tmp254 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp253)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) $tmp253);
// line 94
org$pandalanguage$pandac$ASTNode* $tmp255 = *(&local3);
panda$core$Int64* $tmp256 = &$tmp255->$rawValue;
panda$core$Int64 $tmp257 = *$tmp256;
panda$core$Int64 $tmp258 = (panda$core$Int64) {0};
panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp257, $tmp258);
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp261 = (org$pandalanguage$pandac$Position*) ($tmp255->$data + 0);
org$pandalanguage$pandac$Position $tmp262 = *$tmp261;
*(&local4) = $tmp262;
panda$core$String** $tmp263 = (panda$core$String**) ($tmp255->$data + 16);
panda$core$String* $tmp264 = *$tmp263;
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp265 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
*(&local5) = $tmp264;
panda$core$String** $tmp266 = (panda$core$String**) ($tmp255->$data + 24);
panda$core$String* $tmp267 = *$tmp266;
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp268 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
*(&local6) = $tmp267;
org$pandalanguage$pandac$ASTNode** $tmp269 = (org$pandalanguage$pandac$ASTNode**) ($tmp255->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp270 = *$tmp269;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp271 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
*(&local7) = $tmp270;
// line 96
org$pandalanguage$pandac$ASTNode* $tmp272 = *(&local7);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp273 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
*(&local8) = $tmp272;
// line 97
panda$core$String* $tmp274 = *(&local5);
panda$core$Bit $tmp275 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s276);
bool $tmp277 = $tmp275.value;
if ($tmp277) goto block8; else goto block9;
block8:;
// line 98
org$pandalanguage$pandac$Position $tmp278 = *(&local4);
panda$core$Int64 $tmp279 = *(&local0);
panda$core$Int64 $tmp280 = (panda$core$Int64) {2};
panda$core$Int64 $tmp281 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp278, $tmp279, $tmp280);
*(&local0) = $tmp281;
goto block7;
block9:;
panda$core$Bit $tmp282 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s283);
bool $tmp284 = $tmp282.value;
if ($tmp284) goto block10; else goto block11;
block10:;
// line 99
org$pandalanguage$pandac$Position $tmp285 = *(&local4);
panda$core$Int64 $tmp286 = *(&local0);
panda$core$Int64 $tmp287 = (panda$core$Int64) {4};
panda$core$Int64 $tmp288 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp285, $tmp286, $tmp287);
*(&local0) = $tmp288;
goto block7;
block11:;
panda$core$Bit $tmp289 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s290);
bool $tmp291 = $tmp289.value;
if ($tmp291) goto block12; else goto block13;
block12:;
// line 100
org$pandalanguage$pandac$Position $tmp292 = *(&local4);
panda$core$Int64 $tmp293 = *(&local0);
panda$core$Int64 $tmp294 = (panda$core$Int64) {8};
panda$core$Int64 $tmp295 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp292, $tmp293, $tmp294);
*(&local0) = $tmp295;
goto block7;
block13:;
panda$core$Bit $tmp296 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s297);
bool $tmp298 = $tmp296.value;
if ($tmp298) goto block14; else goto block15;
block14:;
// line 101
org$pandalanguage$pandac$Position $tmp299 = *(&local4);
panda$core$Int64 $tmp300 = *(&local0);
panda$core$Int64 $tmp301 = (panda$core$Int64) {16};
panda$core$Int64 $tmp302 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp299, $tmp300, $tmp301);
*(&local0) = $tmp302;
goto block7;
block15:;
panda$core$Bit $tmp303 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s304);
bool $tmp305 = $tmp303.value;
if ($tmp305) goto block16; else goto block17;
block16:;
// line 102
org$pandalanguage$pandac$Position $tmp306 = *(&local4);
panda$core$Int64 $tmp307 = *(&local0);
panda$core$Int64 $tmp308 = (panda$core$Int64) {32};
panda$core$Int64 $tmp309 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp306, $tmp307, $tmp308);
*(&local0) = $tmp309;
goto block7;
block17:;
panda$core$Bit $tmp310 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s311);
bool $tmp312 = $tmp310.value;
if ($tmp312) goto block18; else goto block19;
block18:;
// line 103
org$pandalanguage$pandac$Position $tmp313 = *(&local4);
panda$core$Int64 $tmp314 = *(&local0);
panda$core$Int64 $tmp315 = (panda$core$Int64) {64};
panda$core$Int64 $tmp316 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp313, $tmp314, $tmp315);
*(&local0) = $tmp316;
goto block7;
block19:;
panda$core$Bit $tmp317 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s318);
bool $tmp319 = $tmp317.value;
if ($tmp319) goto block20; else goto block21;
block20:;
// line 104
org$pandalanguage$pandac$Position $tmp320 = *(&local4);
panda$core$Int64 $tmp321 = *(&local0);
panda$core$Int64 $tmp322 = (panda$core$Int64) {128};
panda$core$Int64 $tmp323 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp320, $tmp321, $tmp322);
*(&local0) = $tmp323;
goto block7;
block21:;
panda$core$Bit $tmp324 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s325);
bool $tmp326 = $tmp324.value;
if ($tmp326) goto block22; else goto block23;
block22:;
// line 105
org$pandalanguage$pandac$Position $tmp327 = *(&local4);
panda$core$Int64 $tmp328 = *(&local0);
panda$core$Int64 $tmp329 = (panda$core$Int64) {256};
panda$core$Int64 $tmp330 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp327, $tmp328, $tmp329);
*(&local0) = $tmp330;
goto block7;
block23:;
panda$core$Bit $tmp331 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s332);
bool $tmp333 = $tmp331.value;
if ($tmp333) goto block24; else goto block25;
block24:;
// line 106
org$pandalanguage$pandac$Position $tmp334 = *(&local4);
panda$core$Int64 $tmp335 = *(&local0);
panda$core$Int64 $tmp336 = (panda$core$Int64) {512};
panda$core$Int64 $tmp337 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp334, $tmp335, $tmp336);
*(&local0) = $tmp337;
goto block7;
block25:;
panda$core$Bit $tmp338 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s339);
bool $tmp340 = $tmp338.value;
if ($tmp340) goto block26; else goto block27;
block26:;
// line 107
org$pandalanguage$pandac$Position $tmp341 = *(&local4);
panda$core$Int64 $tmp342 = *(&local0);
panda$core$Int64 $tmp343 = (panda$core$Int64) {1024};
panda$core$Int64 $tmp344 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp341, $tmp342, $tmp343);
*(&local0) = $tmp344;
goto block7;
block27:;
panda$core$Bit $tmp345 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s346);
bool $tmp347 = $tmp345.value;
if ($tmp347) goto block28; else goto block29;
block28:;
// line 108
org$pandalanguage$pandac$Position $tmp348 = *(&local4);
panda$core$Int64 $tmp349 = *(&local0);
panda$core$Int64 $tmp350 = (panda$core$Int64) {2048};
panda$core$Int64 $tmp351 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp348, $tmp349, $tmp350);
*(&local0) = $tmp351;
goto block7;
block29:;
panda$core$Bit $tmp352 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s353);
bool $tmp354 = $tmp352.value;
if ($tmp354) goto block30; else goto block31;
block30:;
// line 109
org$pandalanguage$pandac$Position $tmp355 = *(&local4);
panda$core$Int64 $tmp356 = *(&local0);
panda$core$Int64 $tmp357 = (panda$core$Int64) {4096};
panda$core$Int64 $tmp358 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp355, $tmp356, $tmp357);
*(&local0) = $tmp358;
goto block7;
block31:;
panda$core$Bit $tmp359 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s360);
bool $tmp361 = $tmp359.value;
if ($tmp361) goto block32; else goto block33;
block32:;
// line 110
org$pandalanguage$pandac$Position $tmp362 = *(&local4);
panda$core$Int64 $tmp363 = *(&local0);
panda$core$Int64 $tmp364 = (panda$core$Int64) {16384};
panda$core$Int64 $tmp365 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp362, $tmp363, $tmp364);
*(&local0) = $tmp365;
goto block7;
block33:;
panda$core$Bit $tmp366 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s367);
bool $tmp368 = $tmp366.value;
if ($tmp368) goto block34; else goto block35;
block34:;
// line 111
org$pandalanguage$pandac$Position $tmp369 = *(&local4);
panda$core$Int64 $tmp370 = *(&local0);
panda$core$Int64 $tmp371 = (panda$core$Int64) {32768};
panda$core$Int64 $tmp372 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp369, $tmp370, $tmp371);
*(&local0) = $tmp372;
goto block7;
block35:;
panda$core$Bit $tmp373 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s374);
bool $tmp375 = $tmp373.value;
if ($tmp375) goto block36; else goto block37;
block36:;
// line 113
panda$collections$Array* $tmp376 = *(&local1);
panda$core$Bit $tmp377 = panda$core$Bit$init$builtin_bit($tmp376 == NULL);
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block38; else goto block39;
block38:;
// line 114
panda$collections$Array* $tmp379 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp379);
panda$collections$Array* $tmp380 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
*(&local1) = $tmp379;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
goto block39;
block39:;
// line 116
panda$core$Method* $tmp381 = *(&local2);
org$pandalanguage$pandac$Position $tmp382 = *(&local4);
panda$core$String* $tmp383 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp384 = *(&local8);
panda$core$Int8** $tmp385 = &$tmp381->pointer;
panda$core$Int8* $tmp386 = *$tmp385;
panda$core$Immutable** $tmp387 = &$tmp381->target;
panda$core$Immutable* $tmp388 = *$tmp387;
bool $tmp389 = $tmp388 != ((panda$core$Immutable*) NULL);
if ($tmp389) goto block40; else goto block41;
block41:;
panda$core$Bit $tmp391 = (($fn390) $tmp386)(param0, $tmp382, $tmp383, $tmp384);
*(&local9) = $tmp391;
goto block42;
block40:;
panda$core$Bit $tmp393 = (($fn392) $tmp386)($tmp388, param0, $tmp382, $tmp383, $tmp384);
*(&local9) = $tmp393;
goto block42;
block42:;
panda$core$Bit $tmp394 = *(&local9);
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block43; else goto block44;
block43:;
// line 117
panda$collections$Array* $tmp396 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp397 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp398 = (panda$core$Int64) {0};
panda$core$String* $tmp399 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp400 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp397, $tmp398, $tmp399, $tmp400);
panda$collections$Array$add$panda$collections$Array$T($tmp396, ((panda$core$Object*) $tmp397));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
// line 118
org$pandalanguage$pandac$ASTNode* $tmp401 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block44;
block44:;
goto block7;
block37:;
panda$core$Bit $tmp402 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s403);
bool $tmp404 = $tmp402.value;
if ($tmp404) goto block45; else goto block46;
block45:;
// line 121
panda$collections$Array* $tmp405 = *(&local1);
panda$core$Bit $tmp406 = panda$core$Bit$init$builtin_bit($tmp405 == NULL);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block47; else goto block48;
block47:;
// line 122
panda$collections$Array* $tmp408 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp408);
panda$collections$Array* $tmp409 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
*(&local1) = $tmp408;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
goto block48;
block48:;
// line 124
panda$core$Method* $tmp410 = *(&local2);
org$pandalanguage$pandac$Position $tmp411 = *(&local4);
panda$core$String* $tmp412 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp413 = *(&local8);
panda$core$Int8** $tmp414 = &$tmp410->pointer;
panda$core$Int8* $tmp415 = *$tmp414;
panda$core$Immutable** $tmp416 = &$tmp410->target;
panda$core$Immutable* $tmp417 = *$tmp416;
bool $tmp418 = $tmp417 != ((panda$core$Immutable*) NULL);
if ($tmp418) goto block49; else goto block50;
block50:;
panda$core$Bit $tmp420 = (($fn419) $tmp415)(param0, $tmp411, $tmp412, $tmp413);
*(&local10) = $tmp420;
goto block51;
block49:;
panda$core$Bit $tmp422 = (($fn421) $tmp415)($tmp417, param0, $tmp411, $tmp412, $tmp413);
*(&local10) = $tmp422;
goto block51;
block51:;
panda$core$Bit $tmp423 = *(&local10);
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block52; else goto block53;
block52:;
// line 125
panda$collections$Array* $tmp425 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp426 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp427 = (panda$core$Int64) {1};
panda$core$String* $tmp428 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp429 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp426, $tmp427, $tmp428, $tmp429);
panda$collections$Array$add$panda$collections$Array$T($tmp425, ((panda$core$Object*) $tmp426));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
// line 126
org$pandalanguage$pandac$ASTNode* $tmp430 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block53;
block53:;
goto block7;
block46:;
panda$core$Bit $tmp431 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s432);
bool $tmp433 = $tmp431.value;
if ($tmp433) goto block54; else goto block55;
block54:;
// line 129
panda$collections$Array* $tmp434 = *(&local1);
panda$core$Bit $tmp435 = panda$core$Bit$init$builtin_bit($tmp434 == NULL);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block56; else goto block57;
block56:;
// line 130
panda$collections$Array* $tmp437 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp437);
panda$collections$Array* $tmp438 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
*(&local1) = $tmp437;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
goto block57;
block57:;
// line 132
panda$core$Method* $tmp439 = *(&local2);
org$pandalanguage$pandac$Position $tmp440 = *(&local4);
panda$core$String* $tmp441 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp442 = *(&local8);
panda$core$Int8** $tmp443 = &$tmp439->pointer;
panda$core$Int8* $tmp444 = *$tmp443;
panda$core$Immutable** $tmp445 = &$tmp439->target;
panda$core$Immutable* $tmp446 = *$tmp445;
bool $tmp447 = $tmp446 != ((panda$core$Immutable*) NULL);
if ($tmp447) goto block58; else goto block59;
block59:;
panda$core$Bit $tmp449 = (($fn448) $tmp444)(param0, $tmp440, $tmp441, $tmp442);
*(&local11) = $tmp449;
goto block60;
block58:;
panda$core$Bit $tmp451 = (($fn450) $tmp444)($tmp446, param0, $tmp440, $tmp441, $tmp442);
*(&local11) = $tmp451;
goto block60;
block60:;
panda$core$Bit $tmp452 = *(&local11);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block61; else goto block62;
block61:;
// line 133
panda$collections$Array* $tmp454 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp455 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp456 = (panda$core$Int64) {2};
panda$core$String* $tmp457 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp458 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp455, $tmp456, $tmp457, $tmp458);
panda$collections$Array$add$panda$collections$Array$T($tmp454, ((panda$core$Object*) $tmp455));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
// line 134
org$pandalanguage$pandac$ASTNode* $tmp459 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block62;
block62:;
goto block7;
block55:;
panda$core$Bit $tmp460 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s461);
bool $tmp462 = $tmp460.value;
if ($tmp462) goto block63; else goto block64;
block63:;
// line 137
panda$collections$Array* $tmp463 = *(&local1);
panda$core$Bit $tmp464 = panda$core$Bit$init$builtin_bit($tmp463 == NULL);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block65; else goto block66;
block65:;
// line 138
panda$collections$Array* $tmp466 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp466);
panda$collections$Array* $tmp467 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp466));
*(&local1) = $tmp466;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp466));
goto block66;
block66:;
// line 140
panda$core$Method* $tmp468 = *(&local2);
org$pandalanguage$pandac$Position $tmp469 = *(&local4);
panda$core$String* $tmp470 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp471 = *(&local8);
panda$core$Int8** $tmp472 = &$tmp468->pointer;
panda$core$Int8* $tmp473 = *$tmp472;
panda$core$Immutable** $tmp474 = &$tmp468->target;
panda$core$Immutable* $tmp475 = *$tmp474;
bool $tmp476 = $tmp475 != ((panda$core$Immutable*) NULL);
if ($tmp476) goto block67; else goto block68;
block68:;
panda$core$Bit $tmp478 = (($fn477) $tmp473)(param0, $tmp469, $tmp470, $tmp471);
*(&local12) = $tmp478;
goto block69;
block67:;
panda$core$Bit $tmp480 = (($fn479) $tmp473)($tmp475, param0, $tmp469, $tmp470, $tmp471);
*(&local12) = $tmp480;
goto block69;
block69:;
panda$core$Bit $tmp481 = *(&local12);
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block70; else goto block71;
block70:;
// line 141
panda$collections$Array* $tmp483 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp484 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp485 = (panda$core$Int64) {3};
panda$core$String* $tmp486 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp487 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp484, $tmp485, $tmp486, $tmp487);
panda$collections$Array$add$panda$collections$Array$T($tmp483, ((panda$core$Object*) $tmp484));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
// line 142
org$pandalanguage$pandac$ASTNode* $tmp488 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp488));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block71;
block71:;
goto block7;
block64:;
panda$core$Bit $tmp489 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp274, &$s490);
bool $tmp491 = $tmp489.value;
if ($tmp491) goto block72; else goto block73;
block72:;
// line 145
panda$collections$Array* $tmp492 = *(&local1);
panda$core$Bit $tmp493 = panda$core$Bit$init$builtin_bit($tmp492 == NULL);
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block74; else goto block75;
block74:;
// line 146
panda$collections$Array* $tmp495 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp495);
panda$collections$Array* $tmp496 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
*(&local1) = $tmp495;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
goto block75;
block75:;
// line 148
panda$core$Method* $tmp497 = *(&local2);
org$pandalanguage$pandac$Position $tmp498 = *(&local4);
panda$core$String* $tmp499 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp500 = *(&local8);
panda$core$Int8** $tmp501 = &$tmp497->pointer;
panda$core$Int8* $tmp502 = *$tmp501;
panda$core$Immutable** $tmp503 = &$tmp497->target;
panda$core$Immutable* $tmp504 = *$tmp503;
bool $tmp505 = $tmp504 != ((panda$core$Immutable*) NULL);
if ($tmp505) goto block76; else goto block77;
block77:;
panda$core$Bit $tmp507 = (($fn506) $tmp502)(param0, $tmp498, $tmp499, $tmp500);
*(&local13) = $tmp507;
goto block78;
block76:;
panda$core$Bit $tmp509 = (($fn508) $tmp502)($tmp504, param0, $tmp498, $tmp499, $tmp500);
*(&local13) = $tmp509;
goto block78;
block78:;
panda$core$Bit $tmp510 = *(&local13);
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block79; else goto block80;
block79:;
// line 149
panda$collections$Array* $tmp512 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp513 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp514 = (panda$core$Int64) {4};
panda$core$String* $tmp515 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp516 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp513, $tmp514, $tmp515, $tmp516);
panda$collections$Array$add$panda$collections$Array$T($tmp512, ((panda$core$Object*) $tmp513));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
// line 150
org$pandalanguage$pandac$ASTNode* $tmp517 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block80;
block80:;
goto block7;
block73:;
// line 153
org$pandalanguage$pandac$Position $tmp518 = *(&local4);
panda$core$String* $tmp519 = *(&local5);
panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s521, $tmp519);
panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp520, &$s523);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp518, $tmp522);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
goto block7;
block7:;
// line 155
org$pandalanguage$pandac$ASTNode* $tmp524 = *(&local8);
panda$core$Bit $tmp525 = panda$core$Bit$init$builtin_bit($tmp524 != NULL);
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block81; else goto block82;
block81:;
// line 156
org$pandalanguage$pandac$Position $tmp527 = *(&local4);
panda$core$String* $tmp528 = *(&local5);
panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s530, $tmp528);
panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp529, &$s532);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp527, $tmp531);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
goto block82;
block82:;
org$pandalanguage$pandac$ASTNode* $tmp533 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
// unreffing expr
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp534 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
// unreffing rawExpr
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp535 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
// unreffing exprText
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp536 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
// unreffing text
*(&local5) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 159
panda$core$Bit $tmp537 = panda$core$Bit$init$builtin_bit(false);
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block83; else goto block84;
block84:;
panda$core$Int64 $tmp539 = (panda$core$Int64) {159};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s540, $tmp539);
abort(); // unreachable
block83:;
goto block4;
block4:;
panda$core$Panda$unref$panda$core$Object$Q($tmp253);
org$pandalanguage$pandac$ASTNode* $tmp541 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
// unreffing c
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp244));
// line 162
org$pandalanguage$pandac$Annotations* $tmp542 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp543 = *(&local0);
panda$collections$Array* $tmp544 = *(&local1);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp542, $tmp543, ((panda$collections$ListView*) $tmp544));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
panda$core$Method* $tmp545 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
// unreffing checkExpression
*(&local2) = ((panda$core$Method*) NULL);
panda$collections$Array* $tmp546 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp542;

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
panda$core$Bit $tmp547 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block1; else goto block3;
block1:;
// line 170
panda$core$String* $tmp549 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 173
panda$core$Int64* $tmp550 = &param3->$rawValue;
panda$core$Int64 $tmp551 = *$tmp550;
panda$core$Int64 $tmp552 = (panda$core$Int64) {38};
panda$core$Bit $tmp553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp551, $tmp552);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp555 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp556 = *$tmp555;
*(&local1) = $tmp556;
panda$core$String** $tmp557 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp558 = *$tmp557;
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp559 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp558));
*(&local2) = $tmp558;
// line 175
panda$core$String* $tmp560 = *(&local2);
panda$core$String* $tmp561 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
*(&local0) = $tmp560;
panda$core$String* $tmp562 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 177
panda$core$Bit $tmp563 = panda$core$Bit$init$builtin_bit(false);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp565 = (panda$core$Int64) {177};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s566, $tmp565);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 180
org$pandalanguage$pandac$Annotations* $tmp567 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param4);
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
org$pandalanguage$pandac$Annotations* $tmp568 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
*(&local3) = $tmp567;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
// line 181
// line 182
panda$core$Int64* $tmp569 = &param5->$rawValue;
panda$core$Int64 $tmp570 = *$tmp569;
panda$core$Int64 $tmp571 = (panda$core$Int64) {47};
panda$core$Bit $tmp572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp570, $tmp571);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp574 = (org$pandalanguage$pandac$Position*) (param5->$data + 0);
org$pandalanguage$pandac$Position $tmp575 = *$tmp574;
org$pandalanguage$pandac$Variable$Kind* $tmp576 = (org$pandalanguage$pandac$Variable$Kind*) (param5->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp577 = *$tmp576;
*(&local5) = $tmp577;
panda$collections$ImmutableArray** $tmp578 = (panda$collections$ImmutableArray**) (param5->$data + 24);
panda$collections$ImmutableArray* $tmp579 = *$tmp578;
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp580 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
*(&local6) = $tmp579;
// line 184
org$pandalanguage$pandac$Variable$Kind $tmp581 = *(&local5);
panda$core$Int64 $tmp582 = $tmp581.$rawValue;
panda$core$Int64 $tmp583 = (panda$core$Int64) {0};
panda$core$Bit $tmp584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp582, $tmp583);
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block13; else goto block14;
block13:;
// line 186
panda$core$Int64 $tmp586 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FieldDecl$Kind $tmp587 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp586);
*(&local4) = $tmp587;
goto block12;
block14:;
panda$core$Int64 $tmp588 = (panda$core$Int64) {1};
panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp582, $tmp588);
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block15; else goto block16;
block15:;
// line 188
panda$core$Int64 $tmp591 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp592 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp591);
*(&local4) = $tmp592;
goto block12;
block16:;
panda$core$Int64 $tmp593 = (panda$core$Int64) {2};
panda$core$Bit $tmp594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp582, $tmp593);
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block17; else goto block18;
block17:;
// line 190
panda$core$Int64 $tmp596 = (panda$core$Int64) {2};
org$pandalanguage$pandac$FieldDecl$Kind $tmp597 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp596);
*(&local4) = $tmp597;
// line 191
org$pandalanguage$pandac$Annotations* $tmp598 = *(&local3);
panda$core$Int64* $tmp599 = &$tmp598->flags;
panda$core$Int64 $tmp600 = *$tmp599;
panda$core$Int64 $tmp601 = (panda$core$Int64) {16};
panda$core$Int64 $tmp602 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp600, $tmp601);
panda$core$Int64* $tmp603 = &$tmp598->flags;
*$tmp603 = $tmp602;
goto block12;
block18:;
panda$core$Int64 $tmp604 = (panda$core$Int64) {3};
panda$core$Bit $tmp605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp582, $tmp604);
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block19; else goto block12;
block19:;
// line 193
panda$core$Int64 $tmp607 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp608 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp607);
*(&local4) = $tmp608;
goto block12;
block12:;
// line 195
panda$collections$ImmutableArray* $tmp609 = *(&local6);
ITable* $tmp610 = ((panda$collections$Iterable*) $tmp609)->$class->itable;
while ($tmp610->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp610 = $tmp610->next;
}
$fn612 $tmp611 = $tmp610->methods[0];
panda$collections$Iterator* $tmp613 = $tmp611(((panda$collections$Iterable*) $tmp609));
goto block20;
block20:;
ITable* $tmp614 = $tmp613->$class->itable;
while ($tmp614->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp614 = $tmp614->next;
}
$fn616 $tmp615 = $tmp614->methods[0];
panda$core$Bit $tmp617 = $tmp615($tmp613);
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block22; else goto block21;
block21:;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp619 = $tmp613->$class->itable;
while ($tmp619->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp619 = $tmp619->next;
}
$fn621 $tmp620 = $tmp619->methods[1];
panda$core$Object* $tmp622 = $tmp620($tmp613);
org$pandalanguage$pandac$ASTNode* $tmp623 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp623));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp622)));
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) $tmp622);
// line 196
org$pandalanguage$pandac$ASTNode* $tmp624 = *(&local7);
panda$core$Int64* $tmp625 = &$tmp624->$rawValue;
panda$core$Int64 $tmp626 = *$tmp625;
panda$core$Int64 $tmp627 = (panda$core$Int64) {13};
panda$core$Bit $tmp628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp626, $tmp627);
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp630 = (org$pandalanguage$pandac$Position*) ($tmp624->$data + 0);
org$pandalanguage$pandac$Position $tmp631 = *$tmp630;
*(&local8) = $tmp631;
org$pandalanguage$pandac$ASTNode** $tmp632 = (org$pandalanguage$pandac$ASTNode**) ($tmp624->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp633 = *$tmp632;
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp634 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp633));
*(&local9) = $tmp633;
org$pandalanguage$pandac$ASTNode** $tmp635 = (org$pandalanguage$pandac$ASTNode**) ($tmp624->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp636 = *$tmp635;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp637 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp636));
*(&local10) = $tmp636;
// line 198
*(&local11) = ((panda$core$String*) NULL);
// line 199
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
// line 200
org$pandalanguage$pandac$ASTNode* $tmp638 = *(&local9);
panda$core$Int64* $tmp639 = &$tmp638->$rawValue;
panda$core$Int64 $tmp640 = *$tmp639;
panda$core$Int64 $tmp641 = (panda$core$Int64) {20};
panda$core$Bit $tmp642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp640, $tmp641);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block27; else goto block28;
block27:;
org$pandalanguage$pandac$Position* $tmp644 = (org$pandalanguage$pandac$Position*) ($tmp638->$data + 0);
org$pandalanguage$pandac$Position $tmp645 = *$tmp644;
panda$core$String** $tmp646 = (panda$core$String**) ($tmp638->$data + 16);
panda$core$String* $tmp647 = *$tmp646;
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp648 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
*(&local13) = $tmp647;
// line 202
panda$core$String* $tmp649 = *(&local13);
panda$core$String* $tmp650 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp650));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
*(&local11) = $tmp649;
// line 203
org$pandalanguage$pandac$Type* $tmp651 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp652 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp651));
*(&local12) = $tmp651;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp651));
panda$core$String* $tmp653 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
// unreffing id
*(&local13) = ((panda$core$String*) NULL);
goto block26;
block28:;
panda$core$Int64 $tmp654 = (panda$core$Int64) {44};
panda$core$Bit $tmp655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp640, $tmp654);
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block29; else goto block30;
block29:;
org$pandalanguage$pandac$Position* $tmp657 = (org$pandalanguage$pandac$Position*) ($tmp638->$data + 0);
org$pandalanguage$pandac$Position $tmp658 = *$tmp657;
panda$core$String** $tmp659 = (panda$core$String**) ($tmp638->$data + 16);
panda$core$String* $tmp660 = *$tmp659;
*(&local14) = ((panda$core$String*) NULL);
panda$core$String* $tmp661 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp661));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
*(&local14) = $tmp660;
org$pandalanguage$pandac$ASTNode** $tmp662 = (org$pandalanguage$pandac$ASTNode**) ($tmp638->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp663 = *$tmp662;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp664 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp663));
*(&local15) = $tmp663;
// line 205
panda$core$String* $tmp665 = *(&local14);
panda$core$String* $tmp666 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
*(&local11) = $tmp665;
// line 206
org$pandalanguage$pandac$ASTNode* $tmp667 = *(&local15);
org$pandalanguage$pandac$Type* $tmp668 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp667);
org$pandalanguage$pandac$Type* $tmp669 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
*(&local12) = $tmp668;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
org$pandalanguage$pandac$ASTNode* $tmp670 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
// unreffing idType
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp671 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
// unreffing id
*(&local14) = ((panda$core$String*) NULL);
goto block26;
block30:;
// line 208
panda$core$Bit $tmp672 = panda$core$Bit$init$builtin_bit(false);
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp674 = (panda$core$Int64) {208};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s675, $tmp674);
abort(); // unreachable
block31:;
goto block26;
block26:;
// line 210
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 211
org$pandalanguage$pandac$ASTNode* $tmp676 = *(&local10);
panda$core$Bit $tmp677 = panda$core$Bit$init$builtin_bit($tmp676 == NULL);
bool $tmp678 = $tmp677.value;
if ($tmp678) goto block33; else goto block34;
block33:;
org$pandalanguage$pandac$Annotations* $tmp679 = *(&local3);
panda$core$Bit $tmp680 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp679);
*(&local18) = $tmp680;
goto block35;
block34:;
*(&local18) = $tmp677;
goto block35;
block35:;
panda$core$Bit $tmp681 = *(&local18);
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Type* $tmp683 = *(&local12);
org$pandalanguage$pandac$Type$Kind* $tmp684 = &$tmp683->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp685 = *$tmp684;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp686;
$tmp686 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp686->value = $tmp685;
panda$core$Int64 $tmp687 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp688 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp687);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp689;
$tmp689 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp689->value = $tmp688;
ITable* $tmp690 = ((panda$core$Equatable*) $tmp686)->$class->itable;
while ($tmp690->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp690 = $tmp690->next;
}
$fn692 $tmp691 = $tmp690->methods[0];
panda$core$Bit $tmp693 = $tmp691(((panda$core$Equatable*) $tmp686), ((panda$core$Equatable*) $tmp689));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp686)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp689)));
*(&local17) = $tmp693;
goto block38;
block37:;
*(&local17) = $tmp681;
goto block38;
block38:;
panda$core$Bit $tmp694 = *(&local17);
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block39; else goto block41;
block39:;
// line 213
org$pandalanguage$pandac$ASTNode* $tmp696 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp697 = (panda$core$Int64) {28};
org$pandalanguage$pandac$Position $tmp698 = *(&local8);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp696, $tmp697, $tmp698);
org$pandalanguage$pandac$ASTNode* $tmp699 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
*(&local16) = $tmp696;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
goto block40;
block41:;
// line 1
// line 216
org$pandalanguage$pandac$ASTNode* $tmp700 = *(&local10);
org$pandalanguage$pandac$ASTNode* $tmp701 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
*(&local16) = $tmp700;
goto block40;
block40:;
// line 218
org$pandalanguage$pandac$FieldDecl* $tmp702 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$Position $tmp703 = *(&local8);
panda$core$String* $tmp704 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp705 = *(&local3);
org$pandalanguage$pandac$FieldDecl$Kind $tmp706 = *(&local4);
panda$core$String* $tmp707 = *(&local11);
org$pandalanguage$pandac$Type* $tmp708 = *(&local12);
org$pandalanguage$pandac$ASTNode* $tmp709 = *(&local16);
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp702, param1, $tmp703, $tmp704, $tmp705, $tmp706, $tmp707, $tmp708, $tmp709);
*(&local19) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp710 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
*(&local19) = $tmp702;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
// line 220
org$pandalanguage$pandac$SymbolTable** $tmp711 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp712 = *$tmp711;
org$pandalanguage$pandac$FieldDecl* $tmp713 = *(&local19);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp712, ((org$pandalanguage$pandac$Symbol*) $tmp713));
// line 221
panda$collections$Array** $tmp714 = &param1->fields;
panda$collections$Array* $tmp715 = *$tmp714;
org$pandalanguage$pandac$FieldDecl* $tmp716 = *(&local19);
panda$collections$Array$add$panda$collections$Array$T($tmp715, ((panda$core$Object*) $tmp716));
org$pandalanguage$pandac$FieldDecl* $tmp717 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
// unreffing field
*(&local19) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp718 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp718));
// unreffing value
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Type* $tmp719 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
// unreffing type
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp720 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp721 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp721));
// unreffing rawValue
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp722 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp722));
// unreffing target
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block23;
block25:;
// line 223
panda$core$Bit $tmp723 = panda$core$Bit$init$builtin_bit(false);
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block42; else goto block43;
block43:;
panda$core$Int64 $tmp725 = (panda$core$Int64) {223};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s726, $tmp725);
abort(); // unreachable
block42:;
goto block23;
block23:;
panda$core$Panda$unref$panda$core$Object$Q($tmp622);
org$pandalanguage$pandac$ASTNode* $tmp727 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp727));
// unreffing decl
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block20;
block22:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp613));
panda$collections$ImmutableArray* $tmp728 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
// unreffing decls
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
goto block9;
block11:;
// line 227
panda$core$Bit $tmp729 = panda$core$Bit$init$builtin_bit(false);
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block44; else goto block45;
block45:;
panda$core$Int64 $tmp731 = (panda$core$Int64) {227};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s732, $tmp731);
abort(); // unreachable
block44:;
goto block9;
block9:;
org$pandalanguage$pandac$Annotations* $tmp733 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp733));
// unreffing annotations
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp734 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
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
panda$core$Int64* $tmp735 = &param1->$rawValue;
panda$core$Int64 $tmp736 = *$tmp735;
panda$core$Int64 $tmp737 = (panda$core$Int64) {1};
panda$core$Bit $tmp738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp737);
bool $tmp739 = $tmp738.value;
if ($tmp739) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp740 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp741 = *$tmp740;
org$pandalanguage$pandac$ASTNode** $tmp742 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp743 = *$tmp742;
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp744 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp744));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp743));
*(&local0) = $tmp743;
org$pandalanguage$pandac$ASTNode** $tmp745 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp746 = *$tmp745;
// line 235
org$pandalanguage$pandac$ASTNode* $tmp747 = *(&local0);
panda$core$Int64 $tmp748 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp747);
org$pandalanguage$pandac$ASTNode* $tmp749 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp749));
// unreffing test
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp748;
block3:;
panda$core$Int64 $tmp750 = (panda$core$Int64) {2};
panda$core$Bit $tmp751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp750);
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block4; else goto block5;
block4:;
// line 237
panda$core$Int64 $tmp753 = (panda$core$Int64) {0};
return $tmp753;
block5:;
panda$core$Int64 $tmp754 = (panda$core$Int64) {3};
panda$core$Bit $tmp755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp754);
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block6; else goto block7;
block6:;
// line 239
panda$core$Int64 $tmp757 = (panda$core$Int64) {0};
return $tmp757;
block7:;
panda$core$Int64 $tmp758 = (panda$core$Int64) {4};
panda$core$Bit $tmp759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp758);
bool $tmp760 = $tmp759.value;
if ($tmp760) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp761 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp762 = *$tmp761;
org$pandalanguage$pandac$ASTNode** $tmp763 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp764 = *$tmp763;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp765 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
*(&local1) = $tmp764;
org$pandalanguage$pandac$parser$Token$Kind* $tmp766 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp767 = *$tmp766;
org$pandalanguage$pandac$ASTNode** $tmp768 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp769 = *$tmp768;
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp770 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp769));
*(&local2) = $tmp769;
// line 241
panda$core$Int64 $tmp771 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode* $tmp772 = *(&local1);
panda$core$Int64 $tmp773 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp772);
int64_t $tmp774 = $tmp771.value;
int64_t $tmp775 = $tmp773.value;
int64_t $tmp776 = $tmp774 + $tmp775;
panda$core$Int64 $tmp777 = (panda$core$Int64) {$tmp776};
org$pandalanguage$pandac$ASTNode* $tmp778 = *(&local2);
panda$core$Int64 $tmp779 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp778);
int64_t $tmp780 = $tmp777.value;
int64_t $tmp781 = $tmp779.value;
int64_t $tmp782 = $tmp780 + $tmp781;
panda$core$Int64 $tmp783 = (panda$core$Int64) {$tmp782};
org$pandalanguage$pandac$ASTNode* $tmp784 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
// unreffing right
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp785 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
// unreffing left
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp783;
block9:;
panda$core$Int64 $tmp786 = (panda$core$Int64) {5};
panda$core$Bit $tmp787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp786);
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block10; else goto block11;
block10:;
// line 243
panda$core$Int64 $tmp789 = (panda$core$Int64) {1};
return $tmp789;
block11:;
panda$core$Int64 $tmp790 = (panda$core$Int64) {6};
panda$core$Bit $tmp791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp790);
bool $tmp792 = $tmp791.value;
if ($tmp792) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp793 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp794 = *$tmp793;
panda$collections$ImmutableArray** $tmp795 = (panda$collections$ImmutableArray**) (param1->$data + 16);
panda$collections$ImmutableArray* $tmp796 = *$tmp795;
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp797 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp797));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
*(&local3) = $tmp796;
// line 245
panda$core$Int64 $tmp798 = (panda$core$Int64) {0};
*(&local4) = $tmp798;
// line 246
panda$collections$ImmutableArray* $tmp799 = *(&local3);
ITable* $tmp800 = ((panda$collections$Iterable*) $tmp799)->$class->itable;
while ($tmp800->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp800 = $tmp800->next;
}
$fn802 $tmp801 = $tmp800->methods[0];
panda$collections$Iterator* $tmp803 = $tmp801(((panda$collections$Iterable*) $tmp799));
goto block14;
block14:;
ITable* $tmp804 = $tmp803->$class->itable;
while ($tmp804->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp804 = $tmp804->next;
}
$fn806 $tmp805 = $tmp804->methods[0];
panda$core$Bit $tmp807 = $tmp805($tmp803);
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block16; else goto block15;
block15:;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp809 = $tmp803->$class->itable;
while ($tmp809->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp809 = $tmp809->next;
}
$fn811 $tmp810 = $tmp809->methods[1];
panda$core$Object* $tmp812 = $tmp810($tmp803);
org$pandalanguage$pandac$ASTNode* $tmp813 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp813));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp812)));
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) $tmp812);
// line 247
panda$core$Int64 $tmp814 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp815 = *(&local5);
panda$core$Int64 $tmp816 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp815);
int64_t $tmp817 = $tmp814.value;
int64_t $tmp818 = $tmp816.value;
int64_t $tmp819 = $tmp817 + $tmp818;
panda$core$Int64 $tmp820 = (panda$core$Int64) {$tmp819};
*(&local4) = $tmp820;
panda$core$Panda$unref$panda$core$Object$Q($tmp812);
org$pandalanguage$pandac$ASTNode* $tmp821 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
// unreffing s
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block16:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
// line 249
panda$core$Int64 $tmp822 = *(&local4);
panda$collections$ImmutableArray* $tmp823 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
// unreffing statements
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
return $tmp822;
block13:;
panda$core$Int64 $tmp824 = (panda$core$Int64) {7};
panda$core$Bit $tmp825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp824);
bool $tmp826 = $tmp825.value;
if ($tmp826) goto block17; else goto block18;
block17:;
// line 251
panda$core$Int64 $tmp827 = (panda$core$Int64) {1};
return $tmp827;
block18:;
panda$core$Int64 $tmp828 = (panda$core$Int64) {8};
panda$core$Bit $tmp829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp828);
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block19; else goto block20;
block19:;
org$pandalanguage$pandac$Position* $tmp831 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp832 = *$tmp831;
org$pandalanguage$pandac$ASTNode** $tmp833 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp834 = *$tmp833;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp835 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp835));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp834));
*(&local6) = $tmp834;
panda$collections$ImmutableArray** $tmp836 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp837 = *$tmp836;
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp838 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp837));
*(&local7) = $tmp837;
// line 253
org$pandalanguage$pandac$ASTNode* $tmp839 = *(&local6);
panda$core$Int64 $tmp840 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp839);
*(&local8) = $tmp840;
// line 254
panda$collections$ImmutableArray* $tmp841 = *(&local7);
ITable* $tmp842 = ((panda$collections$Iterable*) $tmp841)->$class->itable;
while ($tmp842->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp842 = $tmp842->next;
}
$fn844 $tmp843 = $tmp842->methods[0];
panda$collections$Iterator* $tmp845 = $tmp843(((panda$collections$Iterable*) $tmp841));
goto block21;
block21:;
ITable* $tmp846 = $tmp845->$class->itable;
while ($tmp846->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp846 = $tmp846->next;
}
$fn848 $tmp847 = $tmp846->methods[0];
panda$core$Bit $tmp849 = $tmp847($tmp845);
bool $tmp850 = $tmp849.value;
if ($tmp850) goto block23; else goto block22;
block22:;
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp851 = $tmp845->$class->itable;
while ($tmp851->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp851 = $tmp851->next;
}
$fn853 $tmp852 = $tmp851->methods[1];
panda$core$Object* $tmp854 = $tmp852($tmp845);
org$pandalanguage$pandac$ASTNode* $tmp855 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp854)));
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) $tmp854);
// line 255
panda$core$Int64 $tmp856 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp857 = *(&local9);
panda$core$Int64 $tmp858 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp857);
int64_t $tmp859 = $tmp856.value;
int64_t $tmp860 = $tmp858.value;
int64_t $tmp861 = $tmp859 + $tmp860;
panda$core$Int64 $tmp862 = (panda$core$Int64) {$tmp861};
*(&local8) = $tmp862;
panda$core$Panda$unref$panda$core$Object$Q($tmp854);
org$pandalanguage$pandac$ASTNode* $tmp863 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp863));
// unreffing a
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block21;
block23:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp845));
// line 257
panda$core$Int64 $tmp864 = *(&local8);
panda$collections$ImmutableArray* $tmp865 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
// unreffing args
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp866 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp866));
// unreffing target
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp864;
block20:;
panda$core$Int64 $tmp867 = (panda$core$Int64) {10};
panda$core$Bit $tmp868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp867);
bool $tmp869 = $tmp868.value;
if ($tmp869) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp870 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp871 = *$tmp870;
org$pandalanguage$pandac$ASTNode** $tmp872 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp873 = *$tmp872;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp874 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp874));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp873));
*(&local10) = $tmp873;
org$pandalanguage$pandac$ChoiceCase** $tmp875 = (org$pandalanguage$pandac$ChoiceCase**) (param1->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp876 = *$tmp875;
panda$core$Int64* $tmp877 = (panda$core$Int64*) (param1->$data + 32);
panda$core$Int64 $tmp878 = *$tmp877;
// line 259
org$pandalanguage$pandac$ASTNode* $tmp879 = *(&local10);
panda$core$Int64 $tmp880 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp879);
org$pandalanguage$pandac$ASTNode* $tmp881 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp881));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp880;
block25:;
panda$core$Int64 $tmp882 = (panda$core$Int64) {12};
panda$core$Bit $tmp883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp882);
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block26; else goto block27;
block26:;
// line 261
panda$core$Int64 $tmp885 = (panda$core$Int64) {1};
return $tmp885;
block27:;
panda$core$Int64 $tmp886 = (panda$core$Int64) {13};
panda$core$Bit $tmp887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp886);
bool $tmp888 = $tmp887.value;
if ($tmp888) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp889 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp890 = *$tmp889;
org$pandalanguage$pandac$ASTNode** $tmp891 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp892 = *$tmp891;
org$pandalanguage$pandac$ASTNode** $tmp893 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp894 = *$tmp893;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp895 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp895));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp894));
*(&local11) = $tmp894;
// line 263
org$pandalanguage$pandac$ASTNode* $tmp896 = *(&local11);
panda$core$Bit $tmp897 = panda$core$Bit$init$builtin_bit($tmp896 == NULL);
bool $tmp898 = $tmp897.value;
if ($tmp898) goto block30; else goto block31;
block30:;
// line 264
panda$core$Int64 $tmp899 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ASTNode* $tmp900 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp900));
// unreffing value
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp899;
block31:;
// line 266
org$pandalanguage$pandac$ASTNode* $tmp901 = *(&local11);
panda$core$Int64 $tmp902 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp901);
org$pandalanguage$pandac$ASTNode* $tmp903 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
// unreffing value
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp902;
block29:;
panda$core$Int64 $tmp904 = (panda$core$Int64) {14};
panda$core$Bit $tmp905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp904);
bool $tmp906 = $tmp905.value;
if ($tmp906) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp907 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp908 = *$tmp907;
panda$core$String** $tmp909 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp910 = *$tmp909;
panda$collections$ImmutableArray** $tmp911 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp912 = *$tmp911;
*(&local12) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp913 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp913));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp912));
*(&local12) = $tmp912;
org$pandalanguage$pandac$ASTNode** $tmp914 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp915 = *$tmp914;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp916 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp915));
*(&local13) = $tmp915;
// line 268
org$pandalanguage$pandac$ASTNode* $tmp917 = *(&local13);
panda$core$Int64 $tmp918 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp917);
*(&local14) = $tmp918;
// line 269
panda$collections$ImmutableArray* $tmp919 = *(&local12);
ITable* $tmp920 = ((panda$collections$Iterable*) $tmp919)->$class->itable;
while ($tmp920->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp920 = $tmp920->next;
}
$fn922 $tmp921 = $tmp920->methods[0];
panda$collections$Iterator* $tmp923 = $tmp921(((panda$collections$Iterable*) $tmp919));
goto block34;
block34:;
ITable* $tmp924 = $tmp923->$class->itable;
while ($tmp924->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp924 = $tmp924->next;
}
$fn926 $tmp925 = $tmp924->methods[0];
panda$core$Bit $tmp927 = $tmp925($tmp923);
bool $tmp928 = $tmp927.value;
if ($tmp928) goto block36; else goto block35;
block35:;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp929 = $tmp923->$class->itable;
while ($tmp929->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp929 = $tmp929->next;
}
$fn931 $tmp930 = $tmp929->methods[1];
panda$core$Object* $tmp932 = $tmp930($tmp923);
org$pandalanguage$pandac$ASTNode* $tmp933 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp932)));
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) $tmp932);
// line 270
panda$core$Int64 $tmp934 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp935 = *(&local15);
panda$core$Int64 $tmp936 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp935);
int64_t $tmp937 = $tmp934.value;
int64_t $tmp938 = $tmp936.value;
int64_t $tmp939 = $tmp937 + $tmp938;
panda$core$Int64 $tmp940 = (panda$core$Int64) {$tmp939};
*(&local14) = $tmp940;
panda$core$Panda$unref$panda$core$Object$Q($tmp932);
org$pandalanguage$pandac$ASTNode* $tmp941 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
// unreffing s
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block34;
block36:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp923));
// line 272
panda$core$Int64 $tmp942 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp943 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
// unreffing test
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp944 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp944));
// unreffing statements
*(&local12) = ((panda$collections$ImmutableArray*) NULL);
return $tmp942;
block33:;
panda$core$Int64 $tmp945 = (panda$core$Int64) {15};
panda$core$Bit $tmp946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp945);
bool $tmp947 = $tmp946.value;
if ($tmp947) goto block37; else goto block38;
block37:;
org$pandalanguage$pandac$Position* $tmp948 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp949 = *$tmp948;
org$pandalanguage$pandac$ASTNode** $tmp950 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp951 = *$tmp950;
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp952 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp952));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp951));
*(&local16) = $tmp951;
panda$core$String** $tmp953 = (panda$core$String**) (param1->$data + 24);
panda$core$String* $tmp954 = *$tmp953;
// line 274
org$pandalanguage$pandac$ASTNode* $tmp955 = *(&local16);
panda$core$Int64 $tmp956 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp955);
org$pandalanguage$pandac$ASTNode* $tmp957 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp957));
// unreffing base
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp956;
block38:;
panda$core$Int64 $tmp958 = (panda$core$Int64) {18};
panda$core$Bit $tmp959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp958);
bool $tmp960 = $tmp959.value;
if ($tmp960) goto block39; else goto block40;
block39:;
org$pandalanguage$pandac$Position* $tmp961 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp962 = *$tmp961;
panda$core$String** $tmp963 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp964 = *$tmp963;
org$pandalanguage$pandac$ASTNode** $tmp965 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp966 = *$tmp965;
org$pandalanguage$pandac$ASTNode** $tmp967 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp968 = *$tmp967;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp969 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp968));
*(&local17) = $tmp968;
panda$collections$ImmutableArray** $tmp970 = (panda$collections$ImmutableArray**) (param1->$data + 40);
panda$collections$ImmutableArray* $tmp971 = *$tmp970;
*(&local18) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp972 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp972));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp971));
*(&local18) = $tmp971;
// line 276
org$pandalanguage$pandac$ASTNode* $tmp973 = *(&local17);
panda$core$Int64 $tmp974 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp973);
*(&local19) = $tmp974;
// line 277
panda$collections$ImmutableArray* $tmp975 = *(&local18);
ITable* $tmp976 = ((panda$collections$Iterable*) $tmp975)->$class->itable;
while ($tmp976->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp976 = $tmp976->next;
}
$fn978 $tmp977 = $tmp976->methods[0];
panda$collections$Iterator* $tmp979 = $tmp977(((panda$collections$Iterable*) $tmp975));
goto block41;
block41:;
ITable* $tmp980 = $tmp979->$class->itable;
while ($tmp980->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp980 = $tmp980->next;
}
$fn982 $tmp981 = $tmp980->methods[0];
panda$core$Bit $tmp983 = $tmp981($tmp979);
bool $tmp984 = $tmp983.value;
if ($tmp984) goto block43; else goto block42;
block42:;
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp985 = $tmp979->$class->itable;
while ($tmp985->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp985 = $tmp985->next;
}
$fn987 $tmp986 = $tmp985->methods[1];
panda$core$Object* $tmp988 = $tmp986($tmp979);
org$pandalanguage$pandac$ASTNode* $tmp989 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp989));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp988)));
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) $tmp988);
// line 278
panda$core$Int64 $tmp990 = *(&local19);
org$pandalanguage$pandac$ASTNode* $tmp991 = *(&local20);
panda$core$Int64 $tmp992 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp991);
int64_t $tmp993 = $tmp990.value;
int64_t $tmp994 = $tmp992.value;
int64_t $tmp995 = $tmp993 + $tmp994;
panda$core$Int64 $tmp996 = (panda$core$Int64) {$tmp995};
*(&local19) = $tmp996;
panda$core$Panda$unref$panda$core$Object$Q($tmp988);
org$pandalanguage$pandac$ASTNode* $tmp997 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
// unreffing s
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block41;
block43:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp979));
// line 280
panda$core$Int64 $tmp998 = *(&local19);
panda$collections$ImmutableArray* $tmp999 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp999));
// unreffing statements
*(&local18) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1000 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
// unreffing list
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp998;
block40:;
panda$core$Int64 $tmp1001 = (panda$core$Int64) {19};
panda$core$Bit $tmp1002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1001);
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block44; else goto block45;
block44:;
// line 282
panda$core$Int64 $tmp1004 = (panda$core$Int64) {0};
return $tmp1004;
block45:;
panda$core$Int64 $tmp1005 = (panda$core$Int64) {20};
panda$core$Bit $tmp1006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1005);
bool $tmp1007 = $tmp1006.value;
if ($tmp1007) goto block46; else goto block47;
block46:;
// line 284
panda$core$Int64 $tmp1008 = (panda$core$Int64) {1};
return $tmp1008;
block47:;
panda$core$Int64 $tmp1009 = (panda$core$Int64) {21};
panda$core$Bit $tmp1010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1009);
bool $tmp1011 = $tmp1010.value;
if ($tmp1011) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp1012 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1013 = *$tmp1012;
org$pandalanguage$pandac$ASTNode** $tmp1014 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1015 = *$tmp1014;
*(&local21) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1016 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1016));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1015));
*(&local21) = $tmp1015;
panda$collections$ImmutableArray** $tmp1017 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1018 = *$tmp1017;
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1019 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
*(&local22) = $tmp1018;
org$pandalanguage$pandac$ASTNode** $tmp1020 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1021 = *$tmp1020;
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1022 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1021));
*(&local23) = $tmp1021;
// line 286
org$pandalanguage$pandac$ASTNode* $tmp1023 = *(&local21);
panda$core$Int64 $tmp1024 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1023);
*(&local24) = $tmp1024;
// line 287
panda$collections$ImmutableArray* $tmp1025 = *(&local22);
ITable* $tmp1026 = ((panda$collections$Iterable*) $tmp1025)->$class->itable;
while ($tmp1026->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1026 = $tmp1026->next;
}
$fn1028 $tmp1027 = $tmp1026->methods[0];
panda$collections$Iterator* $tmp1029 = $tmp1027(((panda$collections$Iterable*) $tmp1025));
goto block50;
block50:;
ITable* $tmp1030 = $tmp1029->$class->itable;
while ($tmp1030->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1030 = $tmp1030->next;
}
$fn1032 $tmp1031 = $tmp1030->methods[0];
panda$core$Bit $tmp1033 = $tmp1031($tmp1029);
bool $tmp1034 = $tmp1033.value;
if ($tmp1034) goto block52; else goto block51;
block51:;
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1035 = $tmp1029->$class->itable;
while ($tmp1035->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1035 = $tmp1035->next;
}
$fn1037 $tmp1036 = $tmp1035->methods[1];
panda$core$Object* $tmp1038 = $tmp1036($tmp1029);
org$pandalanguage$pandac$ASTNode* $tmp1039 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1039));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1038)));
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) $tmp1038);
// line 288
panda$core$Int64 $tmp1040 = *(&local24);
org$pandalanguage$pandac$ASTNode* $tmp1041 = *(&local25);
panda$core$Int64 $tmp1042 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1041);
int64_t $tmp1043 = $tmp1040.value;
int64_t $tmp1044 = $tmp1042.value;
int64_t $tmp1045 = $tmp1043 + $tmp1044;
panda$core$Int64 $tmp1046 = (panda$core$Int64) {$tmp1045};
*(&local24) = $tmp1046;
panda$core$Panda$unref$panda$core$Object$Q($tmp1038);
org$pandalanguage$pandac$ASTNode* $tmp1047 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1047));
// unreffing s
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block50;
block52:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1029));
// line 290
org$pandalanguage$pandac$ASTNode* $tmp1048 = *(&local23);
panda$core$Bit $tmp1049 = panda$core$Bit$init$builtin_bit($tmp1048 != NULL);
bool $tmp1050 = $tmp1049.value;
if ($tmp1050) goto block53; else goto block54;
block53:;
// line 291
panda$core$Int64 $tmp1051 = *(&local24);
org$pandalanguage$pandac$ASTNode* $tmp1052 = *(&local23);
panda$core$Int64 $tmp1053 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1052);
int64_t $tmp1054 = $tmp1051.value;
int64_t $tmp1055 = $tmp1053.value;
int64_t $tmp1056 = $tmp1054 + $tmp1055;
panda$core$Int64 $tmp1057 = (panda$core$Int64) {$tmp1056};
*(&local24) = $tmp1057;
goto block54;
block54:;
// line 293
panda$core$Int64 $tmp1058 = *(&local24);
org$pandalanguage$pandac$ASTNode* $tmp1059 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1059));
// unreffing ifFalse
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1060 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1060));
// unreffing ifTrue
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1061 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1061));
// unreffing test
*(&local21) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1058;
block49:;
panda$core$Int64 $tmp1062 = (panda$core$Int64) {22};
panda$core$Bit $tmp1063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1062);
bool $tmp1064 = $tmp1063.value;
if ($tmp1064) goto block55; else goto block56;
block55:;
// line 295
panda$core$Int64 $tmp1065 = (panda$core$Int64) {1};
return $tmp1065;
block56:;
panda$core$Int64 $tmp1066 = (panda$core$Int64) {24};
panda$core$Bit $tmp1067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1066);
bool $tmp1068 = $tmp1067.value;
if ($tmp1068) goto block57; else goto block58;
block57:;
org$pandalanguage$pandac$Position* $tmp1069 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1070 = *$tmp1069;
panda$core$String** $tmp1071 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp1072 = *$tmp1071;
panda$collections$ImmutableArray** $tmp1073 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1074 = *$tmp1073;
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1075 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1075));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1074));
*(&local26) = $tmp1074;
// line 297
panda$core$Int64 $tmp1076 = (panda$core$Int64) {0};
*(&local27) = $tmp1076;
// line 298
panda$collections$ImmutableArray* $tmp1077 = *(&local26);
ITable* $tmp1078 = ((panda$collections$Iterable*) $tmp1077)->$class->itable;
while ($tmp1078->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1078 = $tmp1078->next;
}
$fn1080 $tmp1079 = $tmp1078->methods[0];
panda$collections$Iterator* $tmp1081 = $tmp1079(((panda$collections$Iterable*) $tmp1077));
goto block59;
block59:;
ITable* $tmp1082 = $tmp1081->$class->itable;
while ($tmp1082->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1082 = $tmp1082->next;
}
$fn1084 $tmp1083 = $tmp1082->methods[0];
panda$core$Bit $tmp1085 = $tmp1083($tmp1081);
bool $tmp1086 = $tmp1085.value;
if ($tmp1086) goto block61; else goto block60;
block60:;
*(&local28) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1087 = $tmp1081->$class->itable;
while ($tmp1087->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1087 = $tmp1087->next;
}
$fn1089 $tmp1088 = $tmp1087->methods[1];
panda$core$Object* $tmp1090 = $tmp1088($tmp1081);
org$pandalanguage$pandac$ASTNode* $tmp1091 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1091));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1090)));
*(&local28) = ((org$pandalanguage$pandac$ASTNode*) $tmp1090);
// line 299
panda$core$Int64 $tmp1092 = *(&local27);
org$pandalanguage$pandac$ASTNode* $tmp1093 = *(&local28);
panda$core$Int64 $tmp1094 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1093);
int64_t $tmp1095 = $tmp1092.value;
int64_t $tmp1096 = $tmp1094.value;
int64_t $tmp1097 = $tmp1095 + $tmp1096;
panda$core$Int64 $tmp1098 = (panda$core$Int64) {$tmp1097};
*(&local27) = $tmp1098;
panda$core$Panda$unref$panda$core$Object$Q($tmp1090);
org$pandalanguage$pandac$ASTNode* $tmp1099 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1099));
// unreffing s
*(&local28) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block59;
block61:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1081));
// line 301
panda$core$Int64 $tmp1100 = *(&local27);
panda$collections$ImmutableArray* $tmp1101 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1101));
// unreffing statements
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1100;
block58:;
panda$core$Int64 $tmp1102 = (panda$core$Int64) {25};
panda$core$Bit $tmp1103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1102);
bool $tmp1104 = $tmp1103.value;
if ($tmp1104) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$Position* $tmp1105 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1106 = *$tmp1105;
org$pandalanguage$pandac$ASTNode** $tmp1107 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1108 = *$tmp1107;
*(&local29) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1109 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1108));
*(&local29) = $tmp1108;
panda$collections$ImmutableArray** $tmp1110 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1111 = *$tmp1110;
*(&local30) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1112 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1112));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1111));
*(&local30) = $tmp1111;
panda$collections$ImmutableArray** $tmp1113 = (panda$collections$ImmutableArray**) (param1->$data + 32);
panda$collections$ImmutableArray* $tmp1114 = *$tmp1113;
*(&local31) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1115 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1115));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1114));
*(&local31) = $tmp1114;
// line 303
org$pandalanguage$pandac$ASTNode* $tmp1116 = *(&local29);
panda$core$Int64 $tmp1117 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1116);
*(&local32) = $tmp1117;
// line 304
panda$collections$ImmutableArray* $tmp1118 = *(&local30);
ITable* $tmp1119 = ((panda$collections$Iterable*) $tmp1118)->$class->itable;
while ($tmp1119->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1119 = $tmp1119->next;
}
$fn1121 $tmp1120 = $tmp1119->methods[0];
panda$collections$Iterator* $tmp1122 = $tmp1120(((panda$collections$Iterable*) $tmp1118));
goto block64;
block64:;
ITable* $tmp1123 = $tmp1122->$class->itable;
while ($tmp1123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1123 = $tmp1123->next;
}
$fn1125 $tmp1124 = $tmp1123->methods[0];
panda$core$Bit $tmp1126 = $tmp1124($tmp1122);
bool $tmp1127 = $tmp1126.value;
if ($tmp1127) goto block66; else goto block65;
block65:;
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1128 = $tmp1122->$class->itable;
while ($tmp1128->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1128 = $tmp1128->next;
}
$fn1130 $tmp1129 = $tmp1128->methods[1];
panda$core$Object* $tmp1131 = $tmp1129($tmp1122);
org$pandalanguage$pandac$ASTNode* $tmp1132 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1131)));
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) $tmp1131);
// line 305
panda$core$Int64 $tmp1133 = *(&local32);
org$pandalanguage$pandac$ASTNode* $tmp1134 = *(&local33);
panda$core$Int64 $tmp1135 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1134);
int64_t $tmp1136 = $tmp1133.value;
int64_t $tmp1137 = $tmp1135.value;
int64_t $tmp1138 = $tmp1136 + $tmp1137;
panda$core$Int64 $tmp1139 = (panda$core$Int64) {$tmp1138};
*(&local32) = $tmp1139;
panda$core$Panda$unref$panda$core$Object$Q($tmp1131);
org$pandalanguage$pandac$ASTNode* $tmp1140 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1140));
// unreffing w
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block64;
block66:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1122));
// line 307
panda$collections$ImmutableArray* $tmp1141 = *(&local31);
panda$core$Bit $tmp1142 = panda$core$Bit$init$builtin_bit($tmp1141 != NULL);
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block67; else goto block68;
block67:;
// line 308
panda$collections$ImmutableArray* $tmp1144 = *(&local31);
ITable* $tmp1145 = ((panda$collections$Iterable*) $tmp1144)->$class->itable;
while ($tmp1145->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1145 = $tmp1145->next;
}
$fn1147 $tmp1146 = $tmp1145->methods[0];
panda$collections$Iterator* $tmp1148 = $tmp1146(((panda$collections$Iterable*) $tmp1144));
goto block69;
block69:;
ITable* $tmp1149 = $tmp1148->$class->itable;
while ($tmp1149->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1149 = $tmp1149->next;
}
$fn1151 $tmp1150 = $tmp1149->methods[0];
panda$core$Bit $tmp1152 = $tmp1150($tmp1148);
bool $tmp1153 = $tmp1152.value;
if ($tmp1153) goto block71; else goto block70;
block70:;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1154 = $tmp1148->$class->itable;
while ($tmp1154->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1154 = $tmp1154->next;
}
$fn1156 $tmp1155 = $tmp1154->methods[1];
panda$core$Object* $tmp1157 = $tmp1155($tmp1148);
org$pandalanguage$pandac$ASTNode* $tmp1158 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1158));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1157)));
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) $tmp1157);
// line 309
panda$core$Int64 $tmp1159 = *(&local32);
org$pandalanguage$pandac$ASTNode* $tmp1160 = *(&local34);
panda$core$Int64 $tmp1161 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1160);
int64_t $tmp1162 = $tmp1159.value;
int64_t $tmp1163 = $tmp1161.value;
int64_t $tmp1164 = $tmp1162 + $tmp1163;
panda$core$Int64 $tmp1165 = (panda$core$Int64) {$tmp1164};
*(&local32) = $tmp1165;
panda$core$Panda$unref$panda$core$Object$Q($tmp1157);
org$pandalanguage$pandac$ASTNode* $tmp1166 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
// unreffing s
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block69;
block71:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1148));
goto block68;
block68:;
// line 312
panda$core$Int64 $tmp1167 = *(&local32);
panda$collections$ImmutableArray* $tmp1168 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1168));
// unreffing other
*(&local31) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1169 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
// unreffing whens
*(&local30) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1170 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
// unreffing value
*(&local29) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1167;
block63:;
panda$core$Int64 $tmp1171 = (panda$core$Int64) {26};
panda$core$Bit $tmp1172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1171);
bool $tmp1173 = $tmp1172.value;
if ($tmp1173) goto block72; else goto block73;
block72:;
// line 314
panda$core$Int64 $tmp1174 = (panda$core$Int64) {10};
return $tmp1174;
block73:;
panda$core$Int64 $tmp1175 = (panda$core$Int64) {28};
panda$core$Bit $tmp1176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1175);
bool $tmp1177 = $tmp1176.value;
if ($tmp1177) goto block74; else goto block75;
block74:;
// line 316
panda$core$Int64 $tmp1178 = (panda$core$Int64) {1};
return $tmp1178;
block75:;
panda$core$Int64 $tmp1179 = (panda$core$Int64) {29};
panda$core$Bit $tmp1180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1179);
bool $tmp1181 = $tmp1180.value;
if ($tmp1181) goto block76; else goto block77;
block76:;
// line 318
panda$core$Int64 $tmp1182 = (panda$core$Int64) {0};
return $tmp1182;
block77:;
panda$core$Int64 $tmp1183 = (panda$core$Int64) {32};
panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1183);
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block78; else goto block79;
block78:;
org$pandalanguage$pandac$Position* $tmp1186 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1187 = *$tmp1186;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1188 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1189 = *$tmp1188;
org$pandalanguage$pandac$ASTNode** $tmp1190 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1191 = *$tmp1190;
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1192 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1191));
*(&local35) = $tmp1191;
// line 320
panda$core$Int64 $tmp1193 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode* $tmp1194 = *(&local35);
panda$core$Int64 $tmp1195 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1194);
int64_t $tmp1196 = $tmp1193.value;
int64_t $tmp1197 = $tmp1195.value;
int64_t $tmp1198 = $tmp1196 + $tmp1197;
panda$core$Int64 $tmp1199 = (panda$core$Int64) {$tmp1198};
org$pandalanguage$pandac$ASTNode* $tmp1200 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1200));
// unreffing base
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1199;
block79:;
panda$core$Int64 $tmp1201 = (panda$core$Int64) {33};
panda$core$Bit $tmp1202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1201);
bool $tmp1203 = $tmp1202.value;
if ($tmp1203) goto block80; else goto block81;
block80:;
// line 322
panda$core$Int64 $tmp1204 = (panda$core$Int64) {1};
return $tmp1204;
block81:;
panda$core$Int64 $tmp1205 = (panda$core$Int64) {34};
panda$core$Bit $tmp1206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1205);
bool $tmp1207 = $tmp1206.value;
if ($tmp1207) goto block82; else goto block83;
block82:;
// line 324
panda$core$Int64 $tmp1208 = (panda$core$Int64) {1};
return $tmp1208;
block83:;
panda$core$Int64 $tmp1209 = (panda$core$Int64) {35};
panda$core$Bit $tmp1210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1209);
bool $tmp1211 = $tmp1210.value;
if ($tmp1211) goto block84; else goto block85;
block84:;
// line 326
panda$core$Int64 $tmp1212 = (panda$core$Int64) {1};
return $tmp1212;
block85:;
panda$core$Int64 $tmp1213 = (panda$core$Int64) {36};
panda$core$Bit $tmp1214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1213);
bool $tmp1215 = $tmp1214.value;
if ($tmp1215) goto block86; else goto block87;
block86:;
org$pandalanguage$pandac$Position* $tmp1216 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1217 = *$tmp1216;
org$pandalanguage$pandac$ASTNode** $tmp1218 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1219 = *$tmp1218;
*(&local36) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1220 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1220));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1219));
*(&local36) = $tmp1219;
// line 328
org$pandalanguage$pandac$ASTNode* $tmp1221 = *(&local36);
panda$core$Bit $tmp1222 = panda$core$Bit$init$builtin_bit($tmp1221 == NULL);
bool $tmp1223 = $tmp1222.value;
if ($tmp1223) goto block88; else goto block89;
block88:;
// line 329
panda$core$Int64 $tmp1224 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ASTNode* $tmp1225 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1225));
// unreffing value
*(&local36) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1224;
block89:;
// line 331
org$pandalanguage$pandac$ASTNode* $tmp1226 = *(&local36);
panda$core$Int64 $tmp1227 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1226);
org$pandalanguage$pandac$ASTNode* $tmp1228 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1228));
// unreffing value
*(&local36) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1227;
block87:;
panda$core$Int64 $tmp1229 = (panda$core$Int64) {37};
panda$core$Bit $tmp1230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1229);
bool $tmp1231 = $tmp1230.value;
if ($tmp1231) goto block90; else goto block91;
block90:;
// line 333
panda$core$Int64 $tmp1232 = (panda$core$Int64) {1};
return $tmp1232;
block91:;
panda$core$Int64 $tmp1233 = (panda$core$Int64) {38};
panda$core$Bit $tmp1234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1233);
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block92; else goto block93;
block92:;
// line 335
panda$core$Int64 $tmp1236 = (panda$core$Int64) {1};
return $tmp1236;
block93:;
panda$core$Int64 $tmp1237 = (panda$core$Int64) {39};
panda$core$Bit $tmp1238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1237);
bool $tmp1239 = $tmp1238.value;
if ($tmp1239) goto block94; else goto block95;
block94:;
// line 337
panda$core$Int64 $tmp1240 = (panda$core$Int64) {1};
return $tmp1240;
block95:;
panda$core$Int64 $tmp1241 = (panda$core$Int64) {42};
panda$core$Bit $tmp1242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1241);
bool $tmp1243 = $tmp1242.value;
if ($tmp1243) goto block96; else goto block97;
block96:;
// line 339
panda$core$Int64 $tmp1244 = (panda$core$Int64) {0};
return $tmp1244;
block97:;
panda$core$Int64 $tmp1245 = (panda$core$Int64) {43};
panda$core$Bit $tmp1246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1245);
bool $tmp1247 = $tmp1246.value;
if ($tmp1247) goto block98; else goto block99;
block98:;
// line 341
panda$core$Int64 $tmp1248 = (panda$core$Int64) {10};
return $tmp1248;
block99:;
panda$core$Int64 $tmp1249 = (panda$core$Int64) {45};
panda$core$Bit $tmp1250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1249);
bool $tmp1251 = $tmp1250.value;
if ($tmp1251) goto block100; else goto block101;
block100:;
// line 343
panda$core$Int64 $tmp1252 = (panda$core$Int64) {10};
return $tmp1252;
block101:;
panda$core$Int64 $tmp1253 = (panda$core$Int64) {47};
panda$core$Bit $tmp1254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1253);
bool $tmp1255 = $tmp1254.value;
if ($tmp1255) goto block102; else goto block103;
block102:;
org$pandalanguage$pandac$Position* $tmp1256 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1257 = *$tmp1256;
org$pandalanguage$pandac$Variable$Kind* $tmp1258 = (org$pandalanguage$pandac$Variable$Kind*) (param1->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp1259 = *$tmp1258;
panda$collections$ImmutableArray** $tmp1260 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1261 = *$tmp1260;
*(&local37) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1262 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1261));
*(&local37) = $tmp1261;
// line 345
panda$core$Int64 $tmp1263 = (panda$core$Int64) {0};
*(&local38) = $tmp1263;
// line 346
panda$collections$ImmutableArray* $tmp1264 = *(&local37);
ITable* $tmp1265 = ((panda$collections$Iterable*) $tmp1264)->$class->itable;
while ($tmp1265->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1265 = $tmp1265->next;
}
$fn1267 $tmp1266 = $tmp1265->methods[0];
panda$collections$Iterator* $tmp1268 = $tmp1266(((panda$collections$Iterable*) $tmp1264));
goto block104;
block104:;
ITable* $tmp1269 = $tmp1268->$class->itable;
while ($tmp1269->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1269 = $tmp1269->next;
}
$fn1271 $tmp1270 = $tmp1269->methods[0];
panda$core$Bit $tmp1272 = $tmp1270($tmp1268);
bool $tmp1273 = $tmp1272.value;
if ($tmp1273) goto block106; else goto block105;
block105:;
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1274 = $tmp1268->$class->itable;
while ($tmp1274->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1274 = $tmp1274->next;
}
$fn1276 $tmp1275 = $tmp1274->methods[1];
panda$core$Object* $tmp1277 = $tmp1275($tmp1268);
org$pandalanguage$pandac$ASTNode* $tmp1278 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1278));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1277)));
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) $tmp1277);
// line 347
panda$core$Int64 $tmp1279 = *(&local38);
org$pandalanguage$pandac$ASTNode* $tmp1280 = *(&local39);
panda$core$Int64 $tmp1281 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1280);
int64_t $tmp1282 = $tmp1279.value;
int64_t $tmp1283 = $tmp1281.value;
int64_t $tmp1284 = $tmp1282 + $tmp1283;
panda$core$Int64 $tmp1285 = (panda$core$Int64) {$tmp1284};
*(&local38) = $tmp1285;
panda$core$Panda$unref$panda$core$Object$Q($tmp1277);
org$pandalanguage$pandac$ASTNode* $tmp1286 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1286));
// unreffing decl
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block104;
block106:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1268));
// line 349
panda$core$Int64 $tmp1287 = *(&local38);
panda$collections$ImmutableArray* $tmp1288 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1288));
// unreffing decls
*(&local37) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1287;
block103:;
panda$core$Int64 $tmp1289 = (panda$core$Int64) {48};
panda$core$Bit $tmp1290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1289);
bool $tmp1291 = $tmp1290.value;
if ($tmp1291) goto block107; else goto block108;
block107:;
org$pandalanguage$pandac$Position* $tmp1292 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1293 = *$tmp1292;
panda$collections$ImmutableArray** $tmp1294 = (panda$collections$ImmutableArray**) (param1->$data + 16);
panda$collections$ImmutableArray* $tmp1295 = *$tmp1294;
*(&local40) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1296 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1296));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1295));
*(&local40) = $tmp1295;
panda$collections$ImmutableArray** $tmp1297 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1298 = *$tmp1297;
*(&local41) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1299 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1298));
*(&local41) = $tmp1298;
// line 351
panda$core$Int64 $tmp1300 = (panda$core$Int64) {0};
*(&local42) = $tmp1300;
// line 352
panda$collections$ImmutableArray* $tmp1301 = *(&local40);
ITable* $tmp1302 = ((panda$collections$Iterable*) $tmp1301)->$class->itable;
while ($tmp1302->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1302 = $tmp1302->next;
}
$fn1304 $tmp1303 = $tmp1302->methods[0];
panda$collections$Iterator* $tmp1305 = $tmp1303(((panda$collections$Iterable*) $tmp1301));
goto block109;
block109:;
ITable* $tmp1306 = $tmp1305->$class->itable;
while ($tmp1306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1306 = $tmp1306->next;
}
$fn1308 $tmp1307 = $tmp1306->methods[0];
panda$core$Bit $tmp1309 = $tmp1307($tmp1305);
bool $tmp1310 = $tmp1309.value;
if ($tmp1310) goto block111; else goto block110;
block110:;
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1311 = $tmp1305->$class->itable;
while ($tmp1311->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1311 = $tmp1311->next;
}
$fn1313 $tmp1312 = $tmp1311->methods[1];
panda$core$Object* $tmp1314 = $tmp1312($tmp1305);
org$pandalanguage$pandac$ASTNode* $tmp1315 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1315));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1314)));
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) $tmp1314);
// line 353
panda$core$Int64 $tmp1316 = *(&local42);
org$pandalanguage$pandac$ASTNode* $tmp1317 = *(&local43);
panda$core$Int64 $tmp1318 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1317);
int64_t $tmp1319 = $tmp1316.value;
int64_t $tmp1320 = $tmp1318.value;
int64_t $tmp1321 = $tmp1319 + $tmp1320;
panda$core$Int64 $tmp1322 = (panda$core$Int64) {$tmp1321};
*(&local42) = $tmp1322;
panda$core$Panda$unref$panda$core$Object$Q($tmp1314);
org$pandalanguage$pandac$ASTNode* $tmp1323 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1323));
// unreffing test
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block109;
block111:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1305));
// line 355
panda$collections$ImmutableArray* $tmp1324 = *(&local41);
ITable* $tmp1325 = ((panda$collections$Iterable*) $tmp1324)->$class->itable;
while ($tmp1325->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1325 = $tmp1325->next;
}
$fn1327 $tmp1326 = $tmp1325->methods[0];
panda$collections$Iterator* $tmp1328 = $tmp1326(((panda$collections$Iterable*) $tmp1324));
goto block112;
block112:;
ITable* $tmp1329 = $tmp1328->$class->itable;
while ($tmp1329->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1329 = $tmp1329->next;
}
$fn1331 $tmp1330 = $tmp1329->methods[0];
panda$core$Bit $tmp1332 = $tmp1330($tmp1328);
bool $tmp1333 = $tmp1332.value;
if ($tmp1333) goto block114; else goto block113;
block113:;
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1334 = $tmp1328->$class->itable;
while ($tmp1334->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1334 = $tmp1334->next;
}
$fn1336 $tmp1335 = $tmp1334->methods[1];
panda$core$Object* $tmp1337 = $tmp1335($tmp1328);
org$pandalanguage$pandac$ASTNode* $tmp1338 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1338));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1337)));
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) $tmp1337);
// line 356
panda$core$Int64 $tmp1339 = *(&local42);
org$pandalanguage$pandac$ASTNode* $tmp1340 = *(&local44);
panda$core$Int64 $tmp1341 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1340);
int64_t $tmp1342 = $tmp1339.value;
int64_t $tmp1343 = $tmp1341.value;
int64_t $tmp1344 = $tmp1342 + $tmp1343;
panda$core$Int64 $tmp1345 = (panda$core$Int64) {$tmp1344};
*(&local42) = $tmp1345;
panda$core$Panda$unref$panda$core$Object$Q($tmp1337);
org$pandalanguage$pandac$ASTNode* $tmp1346 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1346));
// unreffing s
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block112;
block114:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
// line 358
panda$core$Int64 $tmp1347 = *(&local42);
panda$collections$ImmutableArray* $tmp1348 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1348));
// unreffing statements
*(&local41) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1349 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1349));
// unreffing tests
*(&local40) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1347;
block108:;
panda$core$Int64 $tmp1350 = (panda$core$Int64) {49};
panda$core$Bit $tmp1351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736, $tmp1350);
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block115; else goto block116;
block115:;
org$pandalanguage$pandac$Position* $tmp1353 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1354 = *$tmp1353;
panda$core$String** $tmp1355 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp1356 = *$tmp1355;
org$pandalanguage$pandac$ASTNode** $tmp1357 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1358 = *$tmp1357;
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1359 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1359));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1358));
*(&local45) = $tmp1358;
panda$collections$ImmutableArray** $tmp1360 = (panda$collections$ImmutableArray**) (param1->$data + 32);
panda$collections$ImmutableArray* $tmp1361 = *$tmp1360;
*(&local46) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1362 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1362));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1361));
*(&local46) = $tmp1361;
// line 360
org$pandalanguage$pandac$ASTNode* $tmp1363 = *(&local45);
panda$core$Int64 $tmp1364 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1363);
*(&local47) = $tmp1364;
// line 361
panda$collections$ImmutableArray* $tmp1365 = *(&local46);
ITable* $tmp1366 = ((panda$collections$Iterable*) $tmp1365)->$class->itable;
while ($tmp1366->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1366 = $tmp1366->next;
}
$fn1368 $tmp1367 = $tmp1366->methods[0];
panda$collections$Iterator* $tmp1369 = $tmp1367(((panda$collections$Iterable*) $tmp1365));
goto block117;
block117:;
ITable* $tmp1370 = $tmp1369->$class->itable;
while ($tmp1370->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1370 = $tmp1370->next;
}
$fn1372 $tmp1371 = $tmp1370->methods[0];
panda$core$Bit $tmp1373 = $tmp1371($tmp1369);
bool $tmp1374 = $tmp1373.value;
if ($tmp1374) goto block119; else goto block118;
block118:;
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1375 = $tmp1369->$class->itable;
while ($tmp1375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1375 = $tmp1375->next;
}
$fn1377 $tmp1376 = $tmp1375->methods[1];
panda$core$Object* $tmp1378 = $tmp1376($tmp1369);
org$pandalanguage$pandac$ASTNode* $tmp1379 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1379));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1378)));
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) $tmp1378);
// line 362
panda$core$Int64 $tmp1380 = *(&local47);
org$pandalanguage$pandac$ASTNode* $tmp1381 = *(&local48);
panda$core$Int64 $tmp1382 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1381);
int64_t $tmp1383 = $tmp1380.value;
int64_t $tmp1384 = $tmp1382.value;
int64_t $tmp1385 = $tmp1383 + $tmp1384;
panda$core$Int64 $tmp1386 = (panda$core$Int64) {$tmp1385};
*(&local47) = $tmp1386;
panda$core$Panda$unref$panda$core$Object$Q($tmp1378);
org$pandalanguage$pandac$ASTNode* $tmp1387 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1387));
// unreffing s
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block117;
block119:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1369));
// line 364
panda$core$Int64 $tmp1388 = *(&local47);
panda$collections$ImmutableArray* $tmp1389 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1389));
// unreffing statements
*(&local46) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1390 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1390));
// unreffing test
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1388;
block116:;
// line 366
panda$core$Bit $tmp1391 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1392 = $tmp1391.value;
if ($tmp1392) goto block120; else goto block121;
block121:;
panda$core$Int64 $tmp1393 = (panda$core$Int64) {366};
panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1395, ((panda$core$Object*) param1));
panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1394, &$s1397);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1398, $tmp1393, $tmp1396);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1394));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
abort(); // unreachable
block120:;
goto block1;
block1:;
panda$core$Bit $tmp1399 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1400 = $tmp1399.value;
if ($tmp1400) goto block122; else goto block123;
block123:;
panda$core$Int64 $tmp1401 = (panda$core$Int64) {231};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1402, $tmp1401, &$s1403);
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
panda$core$Weak** $tmp1404 = &param0->compiler;
panda$core$Weak* $tmp1405 = *$tmp1404;
panda$core$Object* $tmp1406 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1405);
panda$core$Panda$unref$panda$core$Object$Q($tmp1406);
org$pandalanguage$pandac$Compiler$Settings** $tmp1407 = &((org$pandalanguage$pandac$Compiler*) $tmp1406)->settings;
org$pandalanguage$pandac$Compiler$Settings* $tmp1408 = *$tmp1407;
panda$core$Int64* $tmp1409 = &$tmp1408->optimizationLevel;
panda$core$Int64 $tmp1410 = *$tmp1409;
panda$core$Int64 $tmp1411 = (panda$core$Int64) {0};
int64_t $tmp1412 = $tmp1410.value;
int64_t $tmp1413 = $tmp1411.value;
bool $tmp1414 = $tmp1412 > $tmp1413;
panda$core$Bit $tmp1415 = (panda$core$Bit) {$tmp1414};
bool $tmp1416 = $tmp1415.value;
if ($tmp1416) goto block1; else goto block2;
block1:;
panda$core$Bit $tmp1417 = org$pandalanguage$pandac$Annotations$get_isInline$R$panda$core$Bit(param1);
panda$core$Bit $tmp1418 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1417);
*(&local1) = $tmp1418;
goto block3;
block2:;
*(&local1) = $tmp1415;
goto block3;
block3:;
panda$core$Bit $tmp1419 = *(&local1);
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block4; else goto block5;
block4:;
panda$core$Bit $tmp1421 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit(param1);
*(&local0) = $tmp1421;
goto block6;
block5:;
*(&local0) = $tmp1419;
goto block6;
block6:;
panda$core$Bit $tmp1422 = *(&local0);
bool $tmp1423 = $tmp1422.value;
if ($tmp1423) goto block7; else goto block8;
block7:;
// line 373
panda$core$Int64 $tmp1424 = (panda$core$Int64) {0};
*(&local2) = $tmp1424;
// line 374
ITable* $tmp1425 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp1425->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1425 = $tmp1425->next;
}
$fn1427 $tmp1426 = $tmp1425->methods[0];
panda$collections$Iterator* $tmp1428 = $tmp1426(((panda$collections$Iterable*) param2));
goto block9;
block9:;
ITable* $tmp1429 = $tmp1428->$class->itable;
while ($tmp1429->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1429 = $tmp1429->next;
}
$fn1431 $tmp1430 = $tmp1429->methods[0];
panda$core$Bit $tmp1432 = $tmp1430($tmp1428);
bool $tmp1433 = $tmp1432.value;
if ($tmp1433) goto block11; else goto block10;
block10:;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1434 = $tmp1428->$class->itable;
while ($tmp1434->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1434 = $tmp1434->next;
}
$fn1436 $tmp1435 = $tmp1434->methods[1];
panda$core$Object* $tmp1437 = $tmp1435($tmp1428);
org$pandalanguage$pandac$ASTNode* $tmp1438 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1438));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1437)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) $tmp1437);
// line 375
panda$core$Int64 $tmp1439 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1440 = *(&local3);
panda$core$Int64 $tmp1441 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1440);
int64_t $tmp1442 = $tmp1439.value;
int64_t $tmp1443 = $tmp1441.value;
int64_t $tmp1444 = $tmp1442 + $tmp1443;
panda$core$Int64 $tmp1445 = (panda$core$Int64) {$tmp1444};
*(&local2) = $tmp1445;
// line 376
panda$core$Int64 $tmp1446 = *(&local2);
panda$core$Int64 $tmp1447 = (panda$core$Int64) {10};
int64_t $tmp1448 = $tmp1446.value;
int64_t $tmp1449 = $tmp1447.value;
bool $tmp1450 = $tmp1448 > $tmp1449;
panda$core$Bit $tmp1451 = (panda$core$Bit) {$tmp1450};
bool $tmp1452 = $tmp1451.value;
if ($tmp1452) goto block12; else goto block13;
block12:;
// line 377
panda$core$Bit $tmp1453 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp1454 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1453;
block13:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1437);
org$pandalanguage$pandac$ASTNode* $tmp1455 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1455));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1428));
// line 380
panda$core$Bit $tmp1456 = panda$core$Bit$init$builtin_bit(true);
return $tmp1456;
block8:;
// line 382
panda$core$Bit $tmp1457 = panda$core$Bit$init$builtin_bit(false);
return $tmp1457;

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
panda$core$Bit $tmp1458 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1459 = $tmp1458.value;
if ($tmp1459) goto block1; else goto block3;
block1:;
// line 392
panda$core$String* $tmp1460 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 395
panda$core$Int64* $tmp1461 = &param3->$rawValue;
panda$core$Int64 $tmp1462 = *$tmp1461;
panda$core$Int64 $tmp1463 = (panda$core$Int64) {38};
panda$core$Bit $tmp1464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1462, $tmp1463);
bool $tmp1465 = $tmp1464.value;
if ($tmp1465) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp1466 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp1467 = *$tmp1466;
*(&local1) = $tmp1467;
panda$core$String** $tmp1468 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp1469 = *$tmp1468;
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp1470 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1470));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1469));
*(&local2) = $tmp1469;
// line 397
panda$core$String* $tmp1471 = *(&local2);
panda$core$String* $tmp1472 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1472));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1471));
*(&local0) = $tmp1471;
panda$core$String* $tmp1473 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 399
panda$core$Bit $tmp1474 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1475 = $tmp1474.value;
if ($tmp1475) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1476 = (panda$core$Int64) {399};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1477, $tmp1476);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 402
org$pandalanguage$pandac$Annotations* $tmp1478 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param4);
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
org$pandalanguage$pandac$Annotations* $tmp1479 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1479));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1478));
*(&local3) = $tmp1478;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1478));
// line 403
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1480;
$tmp1480 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1480->value = param5;
panda$core$Int64 $tmp1481 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1482 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1481);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1483;
$tmp1483 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1483->value = $tmp1482;
ITable* $tmp1484 = ((panda$core$Equatable*) $tmp1480)->$class->itable;
while ($tmp1484->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1484 = $tmp1484->next;
}
$fn1486 $tmp1485 = $tmp1484->methods[1];
panda$core$Bit $tmp1487 = $tmp1485(((panda$core$Equatable*) $tmp1480), ((panda$core$Equatable*) $tmp1483));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1480)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1483)));
bool $tmp1488 = $tmp1487.value;
if ($tmp1488) goto block9; else goto block10;
block9:;
org$pandalanguage$pandac$Annotations** $tmp1489 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp1490 = *$tmp1489;
panda$core$Bit $tmp1491 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit($tmp1490);
*(&local5) = $tmp1491;
goto block11;
block10:;
*(&local5) = $tmp1487;
goto block11;
block11:;
panda$core$Bit $tmp1492 = *(&local5);
bool $tmp1493 = $tmp1492.value;
if ($tmp1493) goto block12; else goto block13;
block12:;
*(&local4) = $tmp1492;
goto block14;
block13:;
org$pandalanguage$pandac$Annotations* $tmp1494 = *(&local3);
panda$core$Bit $tmp1495 = org$pandalanguage$pandac$Annotations$get_isPrivate$R$panda$core$Bit($tmp1494);
*(&local4) = $tmp1495;
goto block14;
block14:;
panda$core$Bit $tmp1496 = *(&local4);
bool $tmp1497 = $tmp1496.value;
if ($tmp1497) goto block15; else goto block16;
block15:;
// line 404
org$pandalanguage$pandac$Annotations* $tmp1498 = *(&local3);
panda$core$Int64* $tmp1499 = &$tmp1498->flags;
panda$core$Int64 $tmp1500 = *$tmp1499;
panda$core$Int64 $tmp1501 = (panda$core$Int64) {256};
panda$core$Int64 $tmp1502 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1500, $tmp1501);
panda$core$Int64* $tmp1503 = &$tmp1498->flags;
*$tmp1503 = $tmp1502;
goto block16;
block16:;
// line 406
*(&local6) = ((panda$collections$Array*) NULL);
// line 407
panda$core$Bit $tmp1504 = panda$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1505 = $tmp1504.value;
if ($tmp1505) goto block17; else goto block19;
block17:;
// line 408
panda$collections$Array* $tmp1506 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1506);
panda$collections$Array* $tmp1507 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1507));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1506));
*(&local6) = $tmp1506;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1506));
// line 409
panda$core$String** $tmp1508 = &param1->name;
panda$core$String* $tmp1509 = *$tmp1508;
panda$core$String* $tmp1510 = panda$core$String$convert$R$panda$core$String($tmp1509);
panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1510, &$s1512);
panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1511, param6);
panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1513, &$s1515);
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp1516 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1516));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
*(&local7) = $tmp1514;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1510));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1511));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1513));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
// line 410
ITable* $tmp1517 = ((panda$collections$Iterable*) param7)->$class->itable;
while ($tmp1517->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1517 = $tmp1517->next;
}
$fn1519 $tmp1518 = $tmp1517->methods[0];
panda$collections$Iterator* $tmp1520 = $tmp1518(((panda$collections$Iterable*) param7));
goto block20;
block20:;
ITable* $tmp1521 = $tmp1520->$class->itable;
while ($tmp1521->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1521 = $tmp1521->next;
}
$fn1523 $tmp1522 = $tmp1521->methods[0];
panda$core$Bit $tmp1524 = $tmp1522($tmp1520);
bool $tmp1525 = $tmp1524.value;
if ($tmp1525) goto block22; else goto block21;
block21:;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1526 = $tmp1520->$class->itable;
while ($tmp1526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1526 = $tmp1526->next;
}
$fn1528 $tmp1527 = $tmp1526->methods[1];
panda$core$Object* $tmp1529 = $tmp1527($tmp1520);
org$pandalanguage$pandac$ASTNode* $tmp1530 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1530));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1529)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) $tmp1529);
// line 411
*(&local9) = ((panda$core$String*) NULL);
// line 412
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
// line 413
org$pandalanguage$pandac$ASTNode* $tmp1531 = *(&local8);
panda$core$Int64* $tmp1532 = &$tmp1531->$rawValue;
panda$core$Int64 $tmp1533 = *$tmp1532;
panda$core$Int64 $tmp1534 = (panda$core$Int64) {20};
panda$core$Bit $tmp1535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1533, $tmp1534);
bool $tmp1536 = $tmp1535.value;
if ($tmp1536) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp1537 = (org$pandalanguage$pandac$Position*) ($tmp1531->$data + 0);
org$pandalanguage$pandac$Position $tmp1538 = *$tmp1537;
panda$core$String** $tmp1539 = (panda$core$String**) ($tmp1531->$data + 16);
panda$core$String* $tmp1540 = *$tmp1539;
*(&local11) = ((panda$core$String*) NULL);
panda$core$String* $tmp1541 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1541));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1540));
*(&local11) = $tmp1540;
// line 415
panda$core$String* $tmp1542 = *(&local11);
panda$core$String* $tmp1543 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1543));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1542));
*(&local9) = $tmp1542;
// line 416
org$pandalanguage$pandac$Type* $tmp1544 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp1545 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1545));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1544));
*(&local10) = $tmp1544;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1544));
panda$core$String* $tmp1546 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1546));
// unreffing id
*(&local11) = ((panda$core$String*) NULL);
goto block23;
block25:;
panda$core$Int64 $tmp1547 = (panda$core$Int64) {44};
panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1533, $tmp1547);
bool $tmp1549 = $tmp1548.value;
if ($tmp1549) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp1550 = (org$pandalanguage$pandac$Position*) ($tmp1531->$data + 0);
org$pandalanguage$pandac$Position $tmp1551 = *$tmp1550;
panda$core$String** $tmp1552 = (panda$core$String**) ($tmp1531->$data + 16);
panda$core$String* $tmp1553 = *$tmp1552;
*(&local12) = ((panda$core$String*) NULL);
panda$core$String* $tmp1554 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1554));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1553));
*(&local12) = $tmp1553;
org$pandalanguage$pandac$ASTNode** $tmp1555 = (org$pandalanguage$pandac$ASTNode**) ($tmp1531->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1556 = *$tmp1555;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1557 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1557));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1556));
*(&local13) = $tmp1556;
// line 418
panda$core$String* $tmp1558 = *(&local12);
panda$core$String* $tmp1559 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1559));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1558));
*(&local9) = $tmp1558;
// line 419
org$pandalanguage$pandac$ASTNode* $tmp1560 = *(&local13);
org$pandalanguage$pandac$Type* $tmp1561 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1560);
org$pandalanguage$pandac$Type* $tmp1562 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1562));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1561));
*(&local10) = $tmp1561;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1561));
org$pandalanguage$pandac$ASTNode* $tmp1563 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1563));
// unreffing type
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1564 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1564));
// unreffing id
*(&local12) = ((panda$core$String*) NULL);
goto block23;
block27:;
// line 421
panda$core$Bit $tmp1565 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1566 = $tmp1565.value;
if ($tmp1566) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp1567 = (panda$core$Int64) {421};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1568, $tmp1567);
abort(); // unreachable
block28:;
goto block23;
block23:;
// line 423
panda$collections$Array* $tmp1569 = *(&local6);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1570 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
org$pandalanguage$pandac$ASTNode* $tmp1571 = *(&local8);
$fn1573 $tmp1572 = ($fn1573) $tmp1571->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1574 = $tmp1572($tmp1571);
panda$core$String* $tmp1575 = *(&local7);
panda$core$String* $tmp1576 = *(&local9);
org$pandalanguage$pandac$Type* $tmp1577 = *(&local10);
org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1570, $tmp1574, $tmp1575, $tmp1576, $tmp1577);
panda$collections$Array$add$panda$collections$Array$T($tmp1569, ((panda$core$Object*) $tmp1570));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1570));
panda$core$Panda$unref$panda$core$Object$Q($tmp1529);
org$pandalanguage$pandac$Type* $tmp1578 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1578));
// unreffing bound
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp1579 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1579));
// unreffing parameterName
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1580 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1580));
// unreffing p
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block20;
block22:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1520));
panda$core$String* $tmp1581 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1581));
// unreffing fullName
*(&local7) = ((panda$core$String*) NULL);
goto block18;
block19:;
// line 1
// line 428
panda$collections$Array* $tmp1582 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1582));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
*(&local6) = ((panda$collections$Array*) NULL);
goto block18;
block18:;
// line 430
panda$collections$Array* $tmp1583 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1583);
*(&local14) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1584 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1584));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1583));
*(&local14) = $tmp1583;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1583));
// line 431
ITable* $tmp1585 = ((panda$collections$Iterable*) param8)->$class->itable;
while ($tmp1585->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1585 = $tmp1585->next;
}
$fn1587 $tmp1586 = $tmp1585->methods[0];
panda$collections$Iterator* $tmp1588 = $tmp1586(((panda$collections$Iterable*) param8));
goto block30;
block30:;
ITable* $tmp1589 = $tmp1588->$class->itable;
while ($tmp1589->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1589 = $tmp1589->next;
}
$fn1591 $tmp1590 = $tmp1589->methods[0];
panda$core$Bit $tmp1592 = $tmp1590($tmp1588);
bool $tmp1593 = $tmp1592.value;
if ($tmp1593) goto block32; else goto block31;
block31:;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1594 = $tmp1588->$class->itable;
while ($tmp1594->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1594 = $tmp1594->next;
}
$fn1596 $tmp1595 = $tmp1594->methods[1];
panda$core$Object* $tmp1597 = $tmp1595($tmp1588);
org$pandalanguage$pandac$ASTNode* $tmp1598 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1598));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1597)));
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) $tmp1597);
// line 432
org$pandalanguage$pandac$ASTNode* $tmp1599 = *(&local15);
panda$core$Int64* $tmp1600 = &$tmp1599->$rawValue;
panda$core$Int64 $tmp1601 = *$tmp1600;
panda$core$Int64 $tmp1602 = (panda$core$Int64) {31};
panda$core$Bit $tmp1603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1601, $tmp1602);
bool $tmp1604 = $tmp1603.value;
if ($tmp1604) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp1605 = (org$pandalanguage$pandac$Position*) ($tmp1599->$data + 0);
org$pandalanguage$pandac$Position $tmp1606 = *$tmp1605;
panda$core$String** $tmp1607 = (panda$core$String**) ($tmp1599->$data + 16);
panda$core$String* $tmp1608 = *$tmp1607;
*(&local16) = ((panda$core$String*) NULL);
panda$core$String* $tmp1609 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1609));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1608));
*(&local16) = $tmp1608;
org$pandalanguage$pandac$ASTNode** $tmp1610 = (org$pandalanguage$pandac$ASTNode**) ($tmp1599->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1611 = *$tmp1610;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1612 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1612));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1611));
*(&local17) = $tmp1611;
// line 434
panda$collections$Array* $tmp1613 = *(&local14);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1614 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
panda$core$String* $tmp1615 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1616 = *(&local17);
org$pandalanguage$pandac$Type* $tmp1617 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1616);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1614, $tmp1615, $tmp1617);
panda$collections$Array$add$panda$collections$Array$T($tmp1613, ((panda$core$Object*) $tmp1614));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1614));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1617));
org$pandalanguage$pandac$ASTNode* $tmp1618 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1618));
// unreffing type
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1619 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1619));
// unreffing name
*(&local16) = ((panda$core$String*) NULL);
goto block33;
block35:;
// line 436
panda$core$Bit $tmp1620 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1621 = $tmp1620.value;
if ($tmp1621) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp1622 = (panda$core$Int64) {436};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1623, $tmp1622);
abort(); // unreachable
block36:;
goto block33;
block33:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1597);
org$pandalanguage$pandac$ASTNode* $tmp1624 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1624));
// unreffing p
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block30;
block32:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1588));
// line 439
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
// line 440
panda$core$Bit $tmp1625 = panda$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1626 = $tmp1625.value;
if ($tmp1626) goto block38; else goto block40;
block38:;
// line 441
org$pandalanguage$pandac$Type* $tmp1627 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, param9);
org$pandalanguage$pandac$Type* $tmp1628 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1627));
*(&local18) = $tmp1627;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1627));
goto block39;
block40:;
// line 1
// line 444
org$pandalanguage$pandac$Type* $tmp1629 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp1630 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1630));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1629));
*(&local18) = $tmp1629;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1629));
goto block39;
block39:;
// line 446
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1631;
$tmp1631 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1631->value = param5;
panda$core$Int64 $tmp1632 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1633 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1632);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1634;
$tmp1634 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1634->value = $tmp1633;
ITable* $tmp1635 = ((panda$core$Equatable*) $tmp1631)->$class->itable;
while ($tmp1635->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1635 = $tmp1635->next;
}
$fn1637 $tmp1636 = $tmp1635->methods[0];
panda$core$Bit $tmp1638 = $tmp1636(((panda$core$Equatable*) $tmp1631), ((panda$core$Equatable*) $tmp1634));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1631)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1634)));
bool $tmp1639 = $tmp1638.value;
if ($tmp1639) goto block41; else goto block42;
block41:;
org$pandalanguage$pandac$Type* $tmp1640 = *(&local18);
org$pandalanguage$pandac$Type* $tmp1641 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1642 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1640, $tmp1641);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1641));
*(&local19) = $tmp1642;
goto block43;
block42:;
*(&local19) = $tmp1638;
goto block43;
block43:;
panda$core$Bit $tmp1643 = *(&local19);
bool $tmp1644 = $tmp1643.value;
if ($tmp1644) goto block44; else goto block45;
block44:;
// line 447
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param2, &$s1645);
goto block45;
block45:;
// line 449
panda$core$Bit $tmp1646 = panda$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1647 = $tmp1646.value;
if ($tmp1647) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Annotations* $tmp1648 = *(&local3);
panda$core$Bit $tmp1649 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(param0, $tmp1648, param10);
*(&local20) = $tmp1649;
goto block48;
block47:;
*(&local20) = $tmp1646;
goto block48;
block48:;
panda$core$Bit $tmp1650 = *(&local20);
bool $tmp1651 = $tmp1650.value;
if ($tmp1651) goto block49; else goto block50;
block49:;
// line 450
org$pandalanguage$pandac$Annotations* $tmp1652 = *(&local3);
panda$core$Int64* $tmp1653 = &$tmp1652->flags;
panda$core$Int64 $tmp1654 = *$tmp1653;
panda$core$Int64 $tmp1655 = (panda$core$Int64) {1024};
panda$core$Int64 $tmp1656 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1654, $tmp1655);
panda$core$Int64* $tmp1657 = &$tmp1652->flags;
*$tmp1657 = $tmp1656;
goto block50;
block50:;
// line 452
panda$core$Bit $tmp1658 = panda$core$Bit$init$builtin_bit(param10 == NULL);
bool $tmp1659 = $tmp1658.value;
if ($tmp1659) goto block51; else goto block52;
block51:;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp1660 = &param1->classKind;
org$pandalanguage$pandac$ClassDecl$Kind $tmp1661 = *$tmp1660;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp1662;
$tmp1662 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp1662->value = $tmp1661;
panda$core$Int64 $tmp1663 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp1664 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp1663);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp1665;
$tmp1665 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp1665->value = $tmp1664;
ITable* $tmp1666 = ((panda$core$Equatable*) $tmp1662)->$class->itable;
while ($tmp1666->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1666 = $tmp1666->next;
}
$fn1668 $tmp1667 = $tmp1666->methods[0];
panda$core$Bit $tmp1669 = $tmp1667(((panda$core$Equatable*) $tmp1662), ((panda$core$Equatable*) $tmp1665));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1662)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1665)));
*(&local21) = $tmp1669;
goto block53;
block52:;
*(&local21) = $tmp1658;
goto block53;
block53:;
panda$core$Bit $tmp1670 = *(&local21);
bool $tmp1671 = $tmp1670.value;
if ($tmp1671) goto block54; else goto block55;
block54:;
// line 453
org$pandalanguage$pandac$Annotations* $tmp1672 = *(&local3);
panda$core$Int64* $tmp1673 = &$tmp1672->flags;
panda$core$Int64 $tmp1674 = *$tmp1673;
panda$core$Int64 $tmp1675 = (panda$core$Int64) {512};
panda$core$Int64 $tmp1676 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp1674, $tmp1675);
panda$core$Int64 $tmp1677 = (panda$core$Int64) {0};
panda$core$Bit $tmp1678 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1676, $tmp1677);
bool $tmp1679 = $tmp1678.value;
if ($tmp1679) goto block56; else goto block57;
block56:;
// line 454
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param2, &$s1680);
goto block57;
block57:;
// line 457
org$pandalanguage$pandac$Annotations* $tmp1681 = *(&local3);
panda$core$Int64* $tmp1682 = &$tmp1681->flags;
panda$core$Int64 $tmp1683 = *$tmp1682;
panda$core$Int64 $tmp1684 = (panda$core$Int64) {512};
panda$core$Int64 $tmp1685 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1683, $tmp1684);
panda$core$Int64* $tmp1686 = &$tmp1681->flags;
*$tmp1686 = $tmp1685;
goto block55;
block55:;
// line 459
org$pandalanguage$pandac$MethodDecl* $tmp1687 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
panda$core$String* $tmp1688 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp1689 = *(&local3);
panda$collections$Array* $tmp1690 = *(&local6);
panda$collections$Array* $tmp1691 = *(&local14);
org$pandalanguage$pandac$Type* $tmp1692 = *(&local18);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1687, param1, param2, $tmp1688, $tmp1689, param5, param6, $tmp1690, $tmp1691, $tmp1692, param10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1687));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1687));
org$pandalanguage$pandac$Type* $tmp1693 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1693));
// unreffing returnType
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1694 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1694));
// unreffing parameters
*(&local14) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1695 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1695));
// unreffing generics
*(&local6) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp1696 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1696));
// unreffing annotations
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp1697 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1697));
// unreffing doccomment
*(&local0) = ((panda$core$String*) NULL);
return $tmp1687;

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
panda$core$Int64* $tmp1698 = &param2->$rawValue;
panda$core$Int64 $tmp1699 = *$tmp1698;
panda$core$Int64 $tmp1700 = (panda$core$Int64) {16};
panda$core$Bit $tmp1701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1699, $tmp1700);
bool $tmp1702 = $tmp1701.value;
if ($tmp1702) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp1703 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1704 = *$tmp1703;
*(&local0) = $tmp1704;
org$pandalanguage$pandac$ASTNode** $tmp1705 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1706 = *$tmp1705;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1707 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1707));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1706));
*(&local1) = $tmp1706;
panda$collections$ImmutableArray** $tmp1708 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp1709 = *$tmp1708;
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1710 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1710));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1709));
*(&local2) = $tmp1709;
org$pandalanguage$pandac$ASTNode** $tmp1711 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1712 = *$tmp1711;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1713 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1713));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1712));
*(&local3) = $tmp1712;
// line 466
org$pandalanguage$pandac$Position $tmp1714 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp1715 = *(&local1);
panda$collections$ImmutableArray* $tmp1716 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1717 = *(&local3);
org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(param0, param1, $tmp1714, $tmp1715, $tmp1716, $tmp1717);
org$pandalanguage$pandac$ASTNode* $tmp1718 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1718));
// unreffing varDecl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1719 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1719));
// unreffing annotations
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1720 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1720));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp1721 = (panda$core$Int64) {26};
panda$core$Bit $tmp1722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1699, $tmp1721);
bool $tmp1723 = $tmp1722.value;
if ($tmp1723) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp1724 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1725 = *$tmp1724;
*(&local4) = $tmp1725;
org$pandalanguage$pandac$ASTNode** $tmp1726 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1727 = *$tmp1726;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1728 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1728));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1727));
*(&local5) = $tmp1727;
panda$collections$ImmutableArray** $tmp1729 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp1730 = *$tmp1729;
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1731 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1731));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1730));
*(&local6) = $tmp1730;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp1732 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param2->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1733 = *$tmp1732;
*(&local7) = $tmp1733;
panda$core$String** $tmp1734 = (panda$core$String**) (param2->$data + 40);
panda$core$String* $tmp1735 = *$tmp1734;
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp1736 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1736));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1735));
*(&local8) = $tmp1735;
panda$collections$ImmutableArray** $tmp1737 = (panda$collections$ImmutableArray**) (param2->$data + 48);
panda$collections$ImmutableArray* $tmp1738 = *$tmp1737;
*(&local9) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1739 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1739));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1738));
*(&local9) = $tmp1738;
panda$collections$ImmutableArray** $tmp1740 = (panda$collections$ImmutableArray**) (param2->$data + 56);
panda$collections$ImmutableArray* $tmp1741 = *$tmp1740;
*(&local10) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1742 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1742));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1741));
*(&local10) = $tmp1741;
org$pandalanguage$pandac$ASTNode** $tmp1743 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp1744 = *$tmp1743;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1745 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1744));
*(&local11) = $tmp1744;
panda$collections$ImmutableArray** $tmp1746 = (panda$collections$ImmutableArray**) (param2->$data + 72);
panda$collections$ImmutableArray* $tmp1747 = *$tmp1746;
*(&local12) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1748 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1748));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1747));
*(&local12) = $tmp1747;
// line 469
org$pandalanguage$pandac$Position $tmp1749 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1750 = *(&local5);
panda$collections$ImmutableArray* $tmp1751 = *(&local6);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1752 = *(&local7);
panda$core$String* $tmp1753 = *(&local8);
panda$collections$ImmutableArray* $tmp1754 = *(&local9);
panda$collections$ImmutableArray* $tmp1755 = *(&local10);
org$pandalanguage$pandac$ASTNode* $tmp1756 = *(&local11);
panda$collections$ImmutableArray* $tmp1757 = *(&local12);
org$pandalanguage$pandac$MethodDecl* $tmp1758 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(param0, param1, $tmp1749, $tmp1750, $tmp1751, $tmp1752, $tmp1753, $tmp1754, $tmp1755, $tmp1756, $tmp1757);
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp1759 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1759));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1758));
*(&local13) = $tmp1758;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1758));
// line 471
org$pandalanguage$pandac$MethodDecl* $tmp1760 = *(&local13);
panda$core$Bit $tmp1761 = panda$core$Bit$init$builtin_bit($tmp1760 != NULL);
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block6; else goto block7;
block6:;
// line 472
org$pandalanguage$pandac$SymbolTable** $tmp1763 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1764 = *$tmp1763;
org$pandalanguage$pandac$MethodDecl* $tmp1765 = *(&local13);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1764, ((org$pandalanguage$pandac$Symbol*) $tmp1765));
// line 473
panda$collections$Array** $tmp1766 = &param1->methods;
panda$collections$Array* $tmp1767 = *$tmp1766;
org$pandalanguage$pandac$MethodDecl* $tmp1768 = *(&local13);
panda$collections$Array$add$panda$collections$Array$T($tmp1767, ((panda$core$Object*) $tmp1768));
goto block7;
block7:;
org$pandalanguage$pandac$MethodDecl* $tmp1769 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1769));
// unreffing m
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$collections$ImmutableArray* $tmp1770 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1770));
// unreffing statements
*(&local12) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1771 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1771));
// unreffing returnType
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1772 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1772));
// unreffing parameters
*(&local10) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1773 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1773));
// unreffing generics
*(&local9) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1774 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1774));
// unreffing name
*(&local8) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp1775 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1775));
// unreffing annotations
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1776 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1776));
// unreffing dc
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp1777 = (panda$core$Int64) {11};
panda$core$Bit $tmp1778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1699, $tmp1777);
bool $tmp1779 = $tmp1778.value;
if ($tmp1779) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp1780 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1781 = *$tmp1780;
*(&local14) = $tmp1781;
org$pandalanguage$pandac$ASTNode** $tmp1782 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1783 = *$tmp1782;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1784 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1784));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1783));
*(&local15) = $tmp1783;
panda$collections$ImmutableArray** $tmp1785 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp1786 = *$tmp1785;
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1787 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1787));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1786));
*(&local16) = $tmp1786;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp1788 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param2->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp1789 = *$tmp1788;
*(&local17) = $tmp1789;
panda$core$String** $tmp1790 = (panda$core$String**) (param2->$data + 40);
panda$core$String* $tmp1791 = *$tmp1790;
*(&local18) = ((panda$core$String*) NULL);
panda$core$String* $tmp1792 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1792));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1791));
*(&local18) = $tmp1791;
panda$collections$ImmutableArray** $tmp1793 = (panda$collections$ImmutableArray**) (param2->$data + 48);
panda$collections$ImmutableArray* $tmp1794 = *$tmp1793;
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1795 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1795));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1794));
*(&local19) = $tmp1794;
panda$collections$ImmutableArray** $tmp1796 = (panda$collections$ImmutableArray**) (param2->$data + 56);
panda$collections$ImmutableArray* $tmp1797 = *$tmp1796;
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1798 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1798));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1797));
*(&local20) = $tmp1797;
panda$collections$ImmutableArray** $tmp1799 = (panda$collections$ImmutableArray**) (param2->$data + 64);
panda$collections$ImmutableArray* $tmp1800 = *$tmp1799;
*(&local21) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1801 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1801));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1800));
*(&local21) = $tmp1800;
// line 477
panda$io$File** $tmp1802 = &param1->source;
panda$io$File* $tmp1803 = *$tmp1802;
panda$collections$MapView** $tmp1804 = &param1->aliases;
panda$collections$MapView* $tmp1805 = *$tmp1804;
panda$core$String** $tmp1806 = &param1->name;
panda$core$String* $tmp1807 = *$tmp1806;
org$pandalanguage$pandac$Position $tmp1808 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp1809 = *(&local15);
panda$collections$ImmutableArray* $tmp1810 = *(&local16);
org$pandalanguage$pandac$ClassDecl$Kind $tmp1811 = *(&local17);
panda$core$String* $tmp1812 = *(&local18);
panda$collections$ImmutableArray* $tmp1813 = *(&local19);
panda$collections$ImmutableArray* $tmp1814 = *(&local20);
panda$collections$ImmutableArray* $tmp1815 = *(&local21);
org$pandalanguage$pandac$ClassDecl* $tmp1816 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp1803, $tmp1805, $tmp1807, $tmp1808, $tmp1809, $tmp1810, $tmp1811, $tmp1812, $tmp1813, $tmp1814, $tmp1815);
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1817 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1817));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1816));
*(&local22) = $tmp1816;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1816));
// line 479
org$pandalanguage$pandac$ClassDecl* $tmp1818 = *(&local22);
panda$core$Bit $tmp1819 = panda$core$Bit$init$builtin_bit($tmp1818 != NULL);
bool $tmp1820 = $tmp1819.value;
if ($tmp1820) goto block10; else goto block11;
block10:;
// line 480
org$pandalanguage$pandac$ClassDecl* $tmp1821 = *(&local22);
panda$core$Weak* $tmp1822 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp1822, ((panda$core$Object*) param1));
panda$core$Weak** $tmp1823 = &$tmp1821->owner;
panda$core$Weak* $tmp1824 = *$tmp1823;
bool $tmp1825 = $tmp1824 != ((panda$core$Weak*) NULL);
if ($tmp1825) goto block12; else goto block13;
block12:;
panda$core$Object* $tmp1826 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1824);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp1826)));
panda$core$Panda$unref$panda$core$Object$Q($tmp1826);
goto block13;
block13:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1822));
panda$core$Weak** $tmp1827 = &$tmp1821->owner;
*$tmp1827 = $tmp1822;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1822));
// line 481
panda$collections$Array** $tmp1828 = &param1->classes;
panda$collections$Array* $tmp1829 = *$tmp1828;
org$pandalanguage$pandac$ClassDecl* $tmp1830 = *(&local22);
panda$collections$Array$add$panda$collections$Array$T($tmp1829, ((panda$core$Object*) $tmp1830));
// line 482
org$pandalanguage$pandac$ClassDecl* $tmp1831 = *(&local22);
panda$core$String** $tmp1832 = &$tmp1831->name;
panda$core$String* $tmp1833 = *$tmp1832;
panda$core$String** $tmp1834 = &param1->name;
panda$core$String* $tmp1835 = *$tmp1834;
panda$core$String* $tmp1836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1835, &$s1837);
panda$core$Bit $tmp1838 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1833, $tmp1836);
bool $tmp1839 = $tmp1838.value;
if ($tmp1839) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp1840 = (panda$core$Int64) {482};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1841, $tmp1840);
abort(); // unreachable
block14:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1836));
// line 483
org$pandalanguage$pandac$SymbolTable** $tmp1842 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1843 = *$tmp1842;
org$pandalanguage$pandac$Alias* $tmp1844 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
org$pandalanguage$pandac$ClassDecl* $tmp1845 = *(&local22);
panda$core$String** $tmp1846 = &$tmp1845->name;
panda$core$String* $tmp1847 = *$tmp1846;
panda$core$String** $tmp1848 = &param1->name;
panda$core$String* $tmp1849 = *$tmp1848;
panda$core$Int64 $tmp1850 = panda$core$String$get_length$R$panda$core$Int64($tmp1849);
panda$core$Int64 $tmp1851 = (panda$core$Int64) {1};
int64_t $tmp1852 = $tmp1850.value;
int64_t $tmp1853 = $tmp1851.value;
int64_t $tmp1854 = $tmp1852 + $tmp1853;
panda$core$Int64 $tmp1855 = (panda$core$Int64) {$tmp1854};
panda$core$Bit $tmp1856 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1857 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp1855, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1856);
panda$core$String* $tmp1858 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1847, $tmp1857);
org$pandalanguage$pandac$ClassDecl* $tmp1859 = *(&local22);
panda$core$String** $tmp1860 = &$tmp1859->name;
panda$core$String* $tmp1861 = *$tmp1860;
org$pandalanguage$pandac$Position $tmp1862 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1844, $tmp1858, $tmp1861, $tmp1862);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1843, ((org$pandalanguage$pandac$Symbol*) $tmp1844));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1844));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1858));
// line 485
org$pandalanguage$pandac$ClassDecl* $tmp1863 = *(&local22);
org$pandalanguage$pandac$SymbolTable** $tmp1864 = &$tmp1863->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1865 = *$tmp1864;
org$pandalanguage$pandac$Alias* $tmp1866 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
panda$core$String* $tmp1867 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(param1);
panda$core$String** $tmp1868 = &param1->name;
panda$core$String* $tmp1869 = *$tmp1868;
org$pandalanguage$pandac$Position $tmp1870 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1866, $tmp1867, $tmp1869, $tmp1870);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1865, ((org$pandalanguage$pandac$Symbol*) $tmp1866));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1866));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1867));
goto block11;
block11:;
org$pandalanguage$pandac$ClassDecl* $tmp1871 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1871));
// unreffing inner
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$ImmutableArray* $tmp1872 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1872));
// unreffing members
*(&local21) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1873 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1873));
// unreffing supertypes
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1874 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1874));
// unreffing generics
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1875 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1875));
// unreffing name
*(&local18) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp1876 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1876));
// unreffing annotations
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1877 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1877));
// unreffing dc
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp1878 = (panda$core$Int64) {9};
panda$core$Bit $tmp1879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1699, $tmp1878);
bool $tmp1880 = $tmp1879.value;
if ($tmp1880) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp1881 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1882 = *$tmp1881;
*(&local23) = $tmp1882;
org$pandalanguage$pandac$ASTNode** $tmp1883 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1884 = *$tmp1883;
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1885 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1885));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1884));
*(&local24) = $tmp1884;
panda$core$String** $tmp1886 = (panda$core$String**) (param2->$data + 24);
panda$core$String* $tmp1887 = *$tmp1886;
*(&local25) = ((panda$core$String*) NULL);
panda$core$String* $tmp1888 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1888));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1887));
*(&local25) = $tmp1887;
panda$collections$ImmutableArray** $tmp1889 = (panda$collections$ImmutableArray**) (param2->$data + 32);
panda$collections$ImmutableArray* $tmp1890 = *$tmp1889;
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1891 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1891));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1890));
*(&local26) = $tmp1890;
// line 488
org$pandalanguage$pandac$Position $tmp1892 = *(&local23);
org$pandalanguage$pandac$ASTNode* $tmp1893 = *(&local24);
panda$core$String* $tmp1894 = *(&local25);
panda$collections$ImmutableArray* $tmp1895 = *(&local26);
org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0, param1, $tmp1892, $tmp1893, $tmp1894, $tmp1895);
panda$collections$ImmutableArray* $tmp1896 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1896));
// unreffing fields
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1897 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1897));
// unreffing name
*(&local25) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1898 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1898));
// unreffing dc
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block17:;
// line 490
panda$core$Bit $tmp1899 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1900 = $tmp1899.value;
if ($tmp1900) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp1901 = (panda$core$Int64) {490};
panda$core$String* $tmp1902 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1903, ((panda$core$Object*) param2));
panda$core$String* $tmp1904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1902, &$s1905);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1906, $tmp1901, $tmp1904);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1902));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1904));
abort(); // unreachable
block18:;
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
panda$core$Bit $tmp1907 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1908 = $tmp1907.value;
if ($tmp1908) goto block1; else goto block3;
block1:;
// line 499
panda$core$String* $tmp1909 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1909));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 502
panda$core$Int64* $tmp1910 = &param3->$rawValue;
panda$core$Int64 $tmp1911 = *$tmp1910;
panda$core$Int64 $tmp1912 = (panda$core$Int64) {38};
panda$core$Bit $tmp1913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1911, $tmp1912);
bool $tmp1914 = $tmp1913.value;
if ($tmp1914) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp1915 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp1916 = *$tmp1915;
*(&local1) = $tmp1916;
panda$core$String** $tmp1917 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp1918 = *$tmp1917;
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp1919 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1919));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1918));
*(&local2) = $tmp1918;
// line 504
panda$core$String* $tmp1920 = *(&local2);
panda$core$String* $tmp1921 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1921));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1920));
*(&local0) = $tmp1920;
panda$core$String* $tmp1922 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1922));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 506
panda$core$Bit $tmp1923 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1924 = $tmp1923.value;
if ($tmp1924) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1925 = (panda$core$Int64) {506};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1926, $tmp1925);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 509
panda$collections$Array* $tmp1927 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1927);
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1928 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1928));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1927));
*(&local3) = $tmp1927;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1927));
// line 510
ITable* $tmp1929 = ((panda$collections$Iterable*) param5)->$class->itable;
while ($tmp1929->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1929 = $tmp1929->next;
}
$fn1931 $tmp1930 = $tmp1929->methods[0];
panda$collections$Iterator* $tmp1932 = $tmp1930(((panda$collections$Iterable*) param5));
goto block9;
block9:;
ITable* $tmp1933 = $tmp1932->$class->itable;
while ($tmp1933->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1933 = $tmp1933->next;
}
$fn1935 $tmp1934 = $tmp1933->methods[0];
panda$core$Bit $tmp1936 = $tmp1934($tmp1932);
bool $tmp1937 = $tmp1936.value;
if ($tmp1937) goto block11; else goto block10;
block10:;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1938 = $tmp1932->$class->itable;
while ($tmp1938->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1938 = $tmp1938->next;
}
$fn1940 $tmp1939 = $tmp1938->methods[1];
panda$core$Object* $tmp1941 = $tmp1939($tmp1932);
org$pandalanguage$pandac$ASTNode* $tmp1942 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1942));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1941)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) $tmp1941);
// line 511
panda$collections$Array* $tmp1943 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1944 = *(&local4);
org$pandalanguage$pandac$Type* $tmp1945 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1944);
panda$collections$Array$add$panda$collections$Array$T($tmp1943, ((panda$core$Object*) $tmp1945));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1945));
panda$core$Panda$unref$panda$core$Object$Q($tmp1941);
org$pandalanguage$pandac$ASTNode* $tmp1946 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1946));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1932));
// line 513
org$pandalanguage$pandac$ChoiceCase* $tmp1947 = (org$pandalanguage$pandac$ChoiceCase*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceCase$class);
panda$core$String* $tmp1948 = *(&local0);
panda$collections$Array** $tmp1949 = &param1->choiceCases;
panda$collections$Array* $tmp1950 = *$tmp1949;
ITable* $tmp1951 = ((panda$collections$CollectionView*) $tmp1950)->$class->itable;
while ($tmp1951->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1951 = $tmp1951->next;
}
$fn1953 $tmp1952 = $tmp1951->methods[0];
panda$core$Int64 $tmp1954 = $tmp1952(((panda$collections$CollectionView*) $tmp1950));
panda$collections$Array* $tmp1955 = *(&local3);
org$pandalanguage$pandac$ChoiceCase$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1947, param1, param2, param4, $tmp1948, $tmp1954, ((panda$collections$ListView*) $tmp1955));
*(&local5) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ChoiceCase* $tmp1956 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1956));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1947));
*(&local5) = $tmp1947;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1947));
// line 515
panda$collections$Array** $tmp1957 = &param1->choiceCases;
panda$collections$Array* $tmp1958 = *$tmp1957;
org$pandalanguage$pandac$ChoiceCase* $tmp1959 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp1958, ((panda$core$Object*) $tmp1959));
// line 516
org$pandalanguage$pandac$SymbolTable** $tmp1960 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1961 = *$tmp1960;
org$pandalanguage$pandac$ChoiceCase* $tmp1962 = *(&local5);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1961, ((org$pandalanguage$pandac$Symbol*) $tmp1962));
org$pandalanguage$pandac$ChoiceCase* $tmp1963 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1963));
// unreffing entry
*(&local5) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$collections$Array* $tmp1964 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1964));
// unreffing fields
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1965 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1965));
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
ITable* $tmp1967 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp1967->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1967 = $tmp1967->next;
}
$fn1969 $tmp1968 = $tmp1967->methods[1];
panda$core$Bit $tmp1970 = $tmp1968(((panda$core$Equatable*) param3), ((panda$core$Equatable*) &$s1966));
bool $tmp1971 = $tmp1970.value;
if ($tmp1971) goto block1; else goto block3;
block1:;
// line 525
panda$core$String* $tmp1972 = panda$core$String$convert$R$panda$core$String(param3);
panda$core$String* $tmp1973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1972, &$s1974);
panda$core$String* $tmp1975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1973, param8);
panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1975, &$s1977);
panda$core$String* $tmp1978 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1978));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1976));
*(&local0) = $tmp1976;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1972));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1973));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1975));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1976));
goto block2;
block3:;
// line 1
// line 528
panda$core$String* $tmp1979 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1979));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
*(&local0) = param8;
goto block2;
block2:;
// line 530
*(&local1) = ((panda$core$String*) NULL);
// line 532
panda$core$Bit $tmp1980 = panda$core$Bit$init$builtin_bit(param5 == NULL);
bool $tmp1981 = $tmp1980.value;
if ($tmp1981) goto block4; else goto block6;
block4:;
// line 533
panda$core$String* $tmp1982 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1982));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local1) = ((panda$core$String*) NULL);
goto block5;
block6:;
// line 1
// line 536
panda$core$Int64* $tmp1983 = &param5->$rawValue;
panda$core$Int64 $tmp1984 = *$tmp1983;
panda$core$Int64 $tmp1985 = (panda$core$Int64) {38};
panda$core$Bit $tmp1986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1984, $tmp1985);
bool $tmp1987 = $tmp1986.value;
if ($tmp1987) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp1988 = (org$pandalanguage$pandac$Position*) (param5->$data + 0);
org$pandalanguage$pandac$Position $tmp1989 = *$tmp1988;
*(&local2) = $tmp1989;
panda$core$String** $tmp1990 = (panda$core$String**) (param5->$data + 16);
panda$core$String* $tmp1991 = *$tmp1990;
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1992 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1992));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1991));
*(&local3) = $tmp1991;
// line 538
panda$core$String* $tmp1993 = *(&local3);
panda$core$String* $tmp1994 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1994));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1993));
*(&local1) = $tmp1993;
panda$core$String* $tmp1995 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1995));
// unreffing text
*(&local3) = ((panda$core$String*) NULL);
goto block7;
block9:;
// line 540
panda$core$Bit $tmp1996 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1997 = $tmp1996.value;
if ($tmp1997) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp1998 = (panda$core$Int64) {540};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1999, $tmp1998);
abort(); // unreachable
block10:;
goto block7;
block7:;
goto block5;
block5:;
// line 543
org$pandalanguage$pandac$Annotations* $tmp2000 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param6);
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
org$pandalanguage$pandac$Annotations* $tmp2001 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2001));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2000));
*(&local4) = $tmp2000;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2000));
// line 544
panda$collections$Array* $tmp2002 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2002);
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2003 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2003));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2002));
*(&local5) = $tmp2002;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2002));
// line 545
panda$core$Bit $tmp2004 = panda$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2005 = $tmp2004.value;
if ($tmp2005) goto block12; else goto block13;
block12:;
// line 546
ITable* $tmp2006 = ((panda$collections$Iterable*) param9)->$class->itable;
while ($tmp2006->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2006 = $tmp2006->next;
}
$fn2008 $tmp2007 = $tmp2006->methods[0];
panda$collections$Iterator* $tmp2009 = $tmp2007(((panda$collections$Iterable*) param9));
goto block14;
block14:;
ITable* $tmp2010 = $tmp2009->$class->itable;
while ($tmp2010->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2010 = $tmp2010->next;
}
$fn2012 $tmp2011 = $tmp2010->methods[0];
panda$core$Bit $tmp2013 = $tmp2011($tmp2009);
bool $tmp2014 = $tmp2013.value;
if ($tmp2014) goto block16; else goto block15;
block15:;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2015 = $tmp2009->$class->itable;
while ($tmp2015->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2015 = $tmp2015->next;
}
$fn2017 $tmp2016 = $tmp2015->methods[1];
panda$core$Object* $tmp2018 = $tmp2016($tmp2009);
org$pandalanguage$pandac$ASTNode* $tmp2019 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2019));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2018)));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) $tmp2018);
// line 547
*(&local7) = ((panda$core$String*) NULL);
// line 548
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
// line 549
org$pandalanguage$pandac$ASTNode* $tmp2020 = *(&local6);
panda$core$Int64* $tmp2021 = &$tmp2020->$rawValue;
panda$core$Int64 $tmp2022 = *$tmp2021;
panda$core$Int64 $tmp2023 = (panda$core$Int64) {20};
panda$core$Bit $tmp2024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2022, $tmp2023);
bool $tmp2025 = $tmp2024.value;
if ($tmp2025) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp2026 = (org$pandalanguage$pandac$Position*) ($tmp2020->$data + 0);
org$pandalanguage$pandac$Position $tmp2027 = *$tmp2026;
panda$core$String** $tmp2028 = (panda$core$String**) ($tmp2020->$data + 16);
panda$core$String* $tmp2029 = *$tmp2028;
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp2030 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2030));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2029));
*(&local9) = $tmp2029;
// line 551
panda$core$String* $tmp2031 = *(&local9);
panda$core$String* $tmp2032 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2032));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2031));
*(&local7) = $tmp2031;
// line 552
org$pandalanguage$pandac$Type* $tmp2033 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp2034 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2034));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2033));
*(&local8) = $tmp2033;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2033));
panda$core$String* $tmp2035 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2035));
// unreffing id
*(&local9) = ((panda$core$String*) NULL);
goto block17;
block19:;
panda$core$Int64 $tmp2036 = (panda$core$Int64) {44};
panda$core$Bit $tmp2037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2022, $tmp2036);
bool $tmp2038 = $tmp2037.value;
if ($tmp2038) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp2039 = (org$pandalanguage$pandac$Position*) ($tmp2020->$data + 0);
org$pandalanguage$pandac$Position $tmp2040 = *$tmp2039;
panda$core$String** $tmp2041 = (panda$core$String**) ($tmp2020->$data + 16);
panda$core$String* $tmp2042 = *$tmp2041;
*(&local10) = ((panda$core$String*) NULL);
panda$core$String* $tmp2043 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2043));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2042));
*(&local10) = $tmp2042;
org$pandalanguage$pandac$ASTNode** $tmp2044 = (org$pandalanguage$pandac$ASTNode**) ($tmp2020->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2045 = *$tmp2044;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2046 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2046));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2045));
*(&local11) = $tmp2045;
// line 554
panda$core$String* $tmp2047 = *(&local10);
panda$core$String* $tmp2048 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2048));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2047));
*(&local7) = $tmp2047;
// line 555
org$pandalanguage$pandac$ASTNode* $tmp2049 = *(&local11);
org$pandalanguage$pandac$Type* $tmp2050 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2049);
org$pandalanguage$pandac$Type* $tmp2051 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2051));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2050));
*(&local8) = $tmp2050;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2050));
org$pandalanguage$pandac$ASTNode* $tmp2052 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2052));
// unreffing type
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2053 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2053));
// unreffing id
*(&local10) = ((panda$core$String*) NULL);
goto block17;
block21:;
// line 557
panda$core$Bit $tmp2054 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2055 = $tmp2054.value;
if ($tmp2055) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp2056 = (panda$core$Int64) {557};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2057, $tmp2056);
abort(); // unreachable
block22:;
goto block17;
block17:;
// line 559
panda$collections$Array* $tmp2058 = *(&local5);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp2059 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
org$pandalanguage$pandac$ASTNode* $tmp2060 = *(&local6);
$fn2062 $tmp2061 = ($fn2062) $tmp2060->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2063 = $tmp2061($tmp2060);
panda$core$String* $tmp2064 = *(&local0);
panda$core$String* $tmp2065 = *(&local7);
org$pandalanguage$pandac$Type* $tmp2066 = *(&local8);
org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp2059, $tmp2063, $tmp2064, $tmp2065, $tmp2066);
panda$collections$Array$add$panda$collections$Array$T($tmp2058, ((panda$core$Object*) $tmp2059));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2059));
panda$core$Panda$unref$panda$core$Object$Q($tmp2018);
org$pandalanguage$pandac$Type* $tmp2067 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2067));
// unreffing bound
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp2068 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2068));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2069 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2069));
// unreffing p
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block16:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2009));
goto block13;
block13:;
// line 562
panda$collections$Array* $tmp2070 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2070);
*(&local12) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2071 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2071));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2070));
*(&local12) = $tmp2070;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2070));
// line 563
panda$core$Bit $tmp2072 = panda$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2073 = $tmp2072.value;
if ($tmp2073) goto block24; else goto block25;
block24:;
// line 564
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2074;
$tmp2074 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2074->value = param7;
panda$core$Int64 $tmp2075 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2076 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2075);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2077;
$tmp2077 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2077->value = $tmp2076;
ITable* $tmp2078 = ((panda$core$Equatable*) $tmp2074)->$class->itable;
while ($tmp2078->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2078 = $tmp2078->next;
}
$fn2080 $tmp2079 = $tmp2078->methods[0];
panda$core$Bit $tmp2081 = $tmp2079(((panda$core$Equatable*) $tmp2074), ((panda$core$Equatable*) $tmp2077));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2074)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2077)));
bool $tmp2082 = $tmp2081.value;
if ($tmp2082) goto block26; else goto block27;
block26:;
// line 565
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param4, &$s2083);
goto block27;
block27:;
// line 567
ITable* $tmp2084 = ((panda$collections$Iterable*) param10)->$class->itable;
while ($tmp2084->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2084 = $tmp2084->next;
}
$fn2086 $tmp2085 = $tmp2084->methods[0];
panda$collections$Iterator* $tmp2087 = $tmp2085(((panda$collections$Iterable*) param10));
goto block28;
block28:;
ITable* $tmp2088 = $tmp2087->$class->itable;
while ($tmp2088->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2088 = $tmp2088->next;
}
$fn2090 $tmp2089 = $tmp2088->methods[0];
panda$core$Bit $tmp2091 = $tmp2089($tmp2087);
bool $tmp2092 = $tmp2091.value;
if ($tmp2092) goto block30; else goto block29;
block29:;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2093 = $tmp2087->$class->itable;
while ($tmp2093->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2093 = $tmp2093->next;
}
$fn2095 $tmp2094 = $tmp2093->methods[1];
panda$core$Object* $tmp2096 = $tmp2094($tmp2087);
org$pandalanguage$pandac$ASTNode* $tmp2097 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2096)));
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) $tmp2096);
// line 568
panda$collections$Array* $tmp2098 = *(&local12);
org$pandalanguage$pandac$ASTNode* $tmp2099 = *(&local13);
org$pandalanguage$pandac$Type* $tmp2100 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2099);
panda$collections$Array$add$panda$collections$Array$T($tmp2098, ((panda$core$Object*) $tmp2100));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
panda$core$Panda$unref$panda$core$Object$Q($tmp2096);
org$pandalanguage$pandac$ASTNode* $tmp2101 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2101));
// unreffing s
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block28;
block30:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2087));
goto block25;
block25:;
// line 571
org$pandalanguage$pandac$ClassDecl* $tmp2102 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
panda$core$String* $tmp2103 = *(&local1);
org$pandalanguage$pandac$Annotations* $tmp2104 = *(&local4);
panda$core$String* $tmp2105 = *(&local0);
panda$collections$Array* $tmp2106 = *(&local12);
panda$collections$Array* $tmp2107 = *(&local5);
panda$core$Weak** $tmp2108 = &param0->compiler;
panda$core$Weak* $tmp2109 = *$tmp2108;
panda$core$Object* $tmp2110 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2109);
panda$core$Panda$unref$panda$core$Object$Q($tmp2110);
org$pandalanguage$pandac$SymbolTable** $tmp2111 = &((org$pandalanguage$pandac$Compiler*) $tmp2110)->root;
org$pandalanguage$pandac$SymbolTable* $tmp2112 = *$tmp2111;
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2102, param1, param4, param2, $tmp2103, $tmp2104, param7, $tmp2105, ((panda$collections$ListView*) $tmp2106), $tmp2107, $tmp2112);
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2113 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2113));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2102));
*(&local14) = $tmp2102;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2102));
// line 573
org$pandalanguage$pandac$ClassDecl* $tmp2114 = *(&local14);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2114));
// line 574
panda$core$Weak** $tmp2115 = &param0->compiler;
panda$core$Weak* $tmp2116 = *$tmp2115;
panda$core$Object* $tmp2117 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2116);
panda$core$Panda$unref$panda$core$Object$Q($tmp2117);
panda$collections$Stack** $tmp2118 = &((org$pandalanguage$pandac$Compiler*) $tmp2117)->currentClass;
panda$collections$Stack* $tmp2119 = *$tmp2118;
org$pandalanguage$pandac$ClassDecl* $tmp2120 = *(&local14);
panda$collections$Stack$push$panda$collections$Stack$T($tmp2119, ((panda$core$Object*) $tmp2120));
// line 575
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2121;
$tmp2121 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2121->value = param7;
panda$core$Int64 $tmp2122 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2123 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2122);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2124;
$tmp2124 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2124->value = $tmp2123;
ITable* $tmp2125 = ((panda$core$Equatable*) $tmp2121)->$class->itable;
while ($tmp2125->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2125 = $tmp2125->next;
}
$fn2127 $tmp2126 = $tmp2125->methods[0];
panda$core$Bit $tmp2128 = $tmp2126(((panda$core$Equatable*) $tmp2121), ((panda$core$Equatable*) $tmp2124));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2121)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2124)));
bool $tmp2129 = $tmp2128.value;
if ($tmp2129) goto block31; else goto block32;
block31:;
// line 576
org$pandalanguage$pandac$FieldDecl* $tmp2130 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2131 = *(&local14);
org$pandalanguage$pandac$ClassDecl* $tmp2132 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2133 = &$tmp2132->position;
org$pandalanguage$pandac$Position $tmp2134 = *$tmp2133;
org$pandalanguage$pandac$Annotations* $tmp2135 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2136 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2135, $tmp2136);
panda$core$Int64 $tmp2137 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp2138 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp2137);
org$pandalanguage$pandac$Type* $tmp2139 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp2130, $tmp2131, $tmp2134, ((panda$core$String*) NULL), $tmp2135, $tmp2138, &$s2140, $tmp2139, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2141 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2141));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2130));
*(&local15) = $tmp2130;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2130));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2135));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2139));
// line 579
org$pandalanguage$pandac$ClassDecl* $tmp2142 = *(&local14);
panda$collections$Array** $tmp2143 = &$tmp2142->fields;
panda$collections$Array* $tmp2144 = *$tmp2143;
org$pandalanguage$pandac$FieldDecl* $tmp2145 = *(&local15);
panda$collections$Array$add$panda$collections$Array$T($tmp2144, ((panda$core$Object*) $tmp2145));
// line 580
org$pandalanguage$pandac$ClassDecl* $tmp2146 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2147 = &$tmp2146->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2148 = *$tmp2147;
org$pandalanguage$pandac$FieldDecl* $tmp2149 = *(&local15);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2148, ((org$pandalanguage$pandac$Symbol*) $tmp2149));
// line 581
org$pandalanguage$pandac$FieldDecl* $tmp2150 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2151 = *(&local14);
org$pandalanguage$pandac$ClassDecl* $tmp2152 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2153 = &$tmp2152->position;
org$pandalanguage$pandac$Position $tmp2154 = *$tmp2153;
org$pandalanguage$pandac$Annotations* $tmp2155 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2156 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2155, $tmp2156);
panda$core$Int64 $tmp2157 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp2158 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp2157);
org$pandalanguage$pandac$Type* $tmp2159 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp2150, $tmp2151, $tmp2154, ((panda$core$String*) NULL), $tmp2155, $tmp2158, &$s2160, $tmp2159, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2161 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2161));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2150));
*(&local16) = $tmp2150;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2150));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2155));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2159));
// line 584
org$pandalanguage$pandac$ClassDecl* $tmp2162 = *(&local14);
panda$collections$Array** $tmp2163 = &$tmp2162->fields;
panda$collections$Array* $tmp2164 = *$tmp2163;
org$pandalanguage$pandac$FieldDecl* $tmp2165 = *(&local16);
panda$collections$Array$add$panda$collections$Array$T($tmp2164, ((panda$core$Object*) $tmp2165));
// line 585
org$pandalanguage$pandac$ClassDecl* $tmp2166 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2167 = &$tmp2166->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2168 = *$tmp2167;
org$pandalanguage$pandac$FieldDecl* $tmp2169 = *(&local16);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2168, ((org$pandalanguage$pandac$Symbol*) $tmp2169));
org$pandalanguage$pandac$FieldDecl* $tmp2170 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2170));
// unreffing data
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2171 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2171));
// unreffing rawValue
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block32;
block32:;
// line 587
ITable* $tmp2172 = ((panda$collections$Iterable*) param11)->$class->itable;
while ($tmp2172->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2172 = $tmp2172->next;
}
$fn2174 $tmp2173 = $tmp2172->methods[0];
panda$collections$Iterator* $tmp2175 = $tmp2173(((panda$collections$Iterable*) param11));
goto block33;
block33:;
ITable* $tmp2176 = $tmp2175->$class->itable;
while ($tmp2176->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2176 = $tmp2176->next;
}
$fn2178 $tmp2177 = $tmp2176->methods[0];
panda$core$Bit $tmp2179 = $tmp2177($tmp2175);
bool $tmp2180 = $tmp2179.value;
if ($tmp2180) goto block35; else goto block34;
block34:;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2181 = $tmp2175->$class->itable;
while ($tmp2181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2181 = $tmp2181->next;
}
$fn2183 $tmp2182 = $tmp2181->methods[1];
panda$core$Object* $tmp2184 = $tmp2182($tmp2175);
org$pandalanguage$pandac$ASTNode* $tmp2185 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2184)));
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) $tmp2184);
// line 588
org$pandalanguage$pandac$ASTNode* $tmp2186 = *(&local17);
panda$core$Int64* $tmp2187 = &$tmp2186->$rawValue;
panda$core$Int64 $tmp2188 = *$tmp2187;
panda$core$Int64 $tmp2189 = (panda$core$Int64) {26};
panda$core$Bit $tmp2190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2188, $tmp2189);
bool $tmp2191 = $tmp2190.value;
if ($tmp2191) goto block37; else goto block38;
block37:;
org$pandalanguage$pandac$Position* $tmp2192 = (org$pandalanguage$pandac$Position*) ($tmp2186->$data + 0);
org$pandalanguage$pandac$Position $tmp2193 = *$tmp2192;
*(&local18) = $tmp2193;
org$pandalanguage$pandac$ASTNode** $tmp2194 = (org$pandalanguage$pandac$ASTNode**) ($tmp2186->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2195 = *$tmp2194;
panda$collections$ImmutableArray** $tmp2196 = (panda$collections$ImmutableArray**) ($tmp2186->$data + 24);
panda$collections$ImmutableArray* $tmp2197 = *$tmp2196;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2198 = (org$pandalanguage$pandac$MethodDecl$Kind*) ($tmp2186->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2199 = *$tmp2198;
*(&local19) = $tmp2199;
panda$core$String** $tmp2200 = (panda$core$String**) ($tmp2186->$data + 40);
panda$core$String* $tmp2201 = *$tmp2200;
panda$collections$ImmutableArray** $tmp2202 = (panda$collections$ImmutableArray**) ($tmp2186->$data + 48);
panda$collections$ImmutableArray* $tmp2203 = *$tmp2202;
panda$collections$ImmutableArray** $tmp2204 = (panda$collections$ImmutableArray**) ($tmp2186->$data + 56);
panda$collections$ImmutableArray* $tmp2205 = *$tmp2204;
org$pandalanguage$pandac$ASTNode** $tmp2206 = (org$pandalanguage$pandac$ASTNode**) ($tmp2186->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2207 = *$tmp2206;
panda$collections$ImmutableArray** $tmp2208 = (panda$collections$ImmutableArray**) ($tmp2186->$data + 72);
panda$collections$ImmutableArray* $tmp2209 = *$tmp2208;
// line 590
org$pandalanguage$pandac$MethodDecl$Kind $tmp2210 = *(&local19);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2211;
$tmp2211 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2211->value = $tmp2210;
panda$core$Int64 $tmp2212 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2213 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2212);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2214;
$tmp2214 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2214->value = $tmp2213;
ITable* $tmp2215 = ((panda$core$Equatable*) $tmp2211)->$class->itable;
while ($tmp2215->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2215 = $tmp2215->next;
}
$fn2217 $tmp2216 = $tmp2215->methods[0];
panda$core$Bit $tmp2218 = $tmp2216(((panda$core$Equatable*) $tmp2211), ((panda$core$Equatable*) $tmp2214));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2211)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2214)));
bool $tmp2219 = $tmp2218.value;
if ($tmp2219) goto block39; else goto block40;
block39:;
// line 591
panda$core$Int64 $tmp2220 = param7.$rawValue;
panda$core$Int64 $tmp2221 = (panda$core$Int64) {0};
panda$core$Bit $tmp2222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2220, $tmp2221);
bool $tmp2223 = $tmp2222.value;
if ($tmp2223) goto block42; else goto block43;
block42:;
goto block41;
block43:;
panda$core$Int64 $tmp2224 = (panda$core$Int64) {1};
panda$core$Bit $tmp2225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2220, $tmp2224);
bool $tmp2226 = $tmp2225.value;
if ($tmp2226) goto block44; else goto block45;
block44:;
// line 594
org$pandalanguage$pandac$Position $tmp2227 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2227, &$s2228);
goto block41;
block45:;
panda$core$Int64 $tmp2229 = (panda$core$Int64) {2};
panda$core$Bit $tmp2230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2220, $tmp2229);
bool $tmp2231 = $tmp2230.value;
if ($tmp2231) goto block46; else goto block41;
block46:;
// line 596
org$pandalanguage$pandac$Position $tmp2232 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2232, &$s2233);
goto block41;
block41:;
goto block40;
block40:;
goto block36;
block38:;
goto block36;
block36:;
// line 602
org$pandalanguage$pandac$ClassDecl* $tmp2234 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp2235 = *(&local17);
org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(param0, $tmp2234, $tmp2235);
panda$core$Panda$unref$panda$core$Object$Q($tmp2184);
org$pandalanguage$pandac$ASTNode* $tmp2236 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2236));
// unreffing m
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block33;
block35:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2175));
// line 604
panda$core$Bit $tmp2237 = panda$core$Bit$init$builtin_bit(false);
*(&local20) = $tmp2237;
// line 605
panda$core$Bit $tmp2238 = panda$core$Bit$init$builtin_bit(false);
*(&local21) = $tmp2238;
// line 606
org$pandalanguage$pandac$ClassDecl* $tmp2239 = *(&local14);
panda$collections$Array** $tmp2240 = &$tmp2239->methods;
panda$collections$Array* $tmp2241 = *$tmp2240;
ITable* $tmp2242 = ((panda$collections$Iterable*) $tmp2241)->$class->itable;
while ($tmp2242->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2242 = $tmp2242->next;
}
$fn2244 $tmp2243 = $tmp2242->methods[0];
panda$collections$Iterator* $tmp2245 = $tmp2243(((panda$collections$Iterable*) $tmp2241));
goto block47;
block47:;
ITable* $tmp2246 = $tmp2245->$class->itable;
while ($tmp2246->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2246 = $tmp2246->next;
}
$fn2248 $tmp2247 = $tmp2246->methods[0];
panda$core$Bit $tmp2249 = $tmp2247($tmp2245);
bool $tmp2250 = $tmp2249.value;
if ($tmp2250) goto block49; else goto block48;
block48:;
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp2251 = $tmp2245->$class->itable;
while ($tmp2251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2251 = $tmp2251->next;
}
$fn2253 $tmp2252 = $tmp2251->methods[1];
panda$core$Object* $tmp2254 = $tmp2252($tmp2245);
org$pandalanguage$pandac$MethodDecl* $tmp2255 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2255));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2254)));
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) $tmp2254);
// line 607
org$pandalanguage$pandac$MethodDecl* $tmp2256 = *(&local22);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2257 = &$tmp2256->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp2258 = *$tmp2257;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2259;
$tmp2259 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2259->value = $tmp2258;
panda$core$Int64 $tmp2260 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2261 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2260);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2262;
$tmp2262 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2262->value = $tmp2261;
ITable* $tmp2263 = ((panda$core$Equatable*) $tmp2259)->$class->itable;
while ($tmp2263->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2263 = $tmp2263->next;
}
$fn2265 $tmp2264 = $tmp2263->methods[0];
panda$core$Bit $tmp2266 = $tmp2264(((panda$core$Equatable*) $tmp2259), ((panda$core$Equatable*) $tmp2262));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2259)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2262)));
bool $tmp2267 = $tmp2266.value;
if ($tmp2267) goto block50; else goto block51;
block50:;
// line 608
panda$core$Bit $tmp2268 = panda$core$Bit$init$builtin_bit(true);
*(&local20) = $tmp2268;
goto block51;
block51:;
// line 610
org$pandalanguage$pandac$MethodDecl* $tmp2269 = *(&local22);
panda$core$String** $tmp2270 = &((org$pandalanguage$pandac$Symbol*) $tmp2269)->name;
panda$core$String* $tmp2271 = *$tmp2270;
panda$core$Bit $tmp2272 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2271, &$s2273);
bool $tmp2274 = $tmp2272.value;
if ($tmp2274) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$MethodDecl* $tmp2275 = *(&local22);
panda$collections$Array** $tmp2276 = &$tmp2275->parameters;
panda$collections$Array* $tmp2277 = *$tmp2276;
ITable* $tmp2278 = ((panda$collections$CollectionView*) $tmp2277)->$class->itable;
while ($tmp2278->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2278 = $tmp2278->next;
}
$fn2280 $tmp2279 = $tmp2278->methods[0];
panda$core$Int64 $tmp2281 = $tmp2279(((panda$collections$CollectionView*) $tmp2277));
panda$core$Int64 $tmp2282 = (panda$core$Int64) {0};
panda$core$Bit $tmp2283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2281, $tmp2282);
*(&local23) = $tmp2283;
goto block54;
block53:;
*(&local23) = $tmp2272;
goto block54;
block54:;
panda$core$Bit $tmp2284 = *(&local23);
bool $tmp2285 = $tmp2284.value;
if ($tmp2285) goto block55; else goto block56;
block55:;
// line 611
panda$core$Bit $tmp2286 = panda$core$Bit$init$builtin_bit(true);
*(&local21) = $tmp2286;
// line 612
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2287;
$tmp2287 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2287->value = param7;
panda$core$Int64 $tmp2288 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2289 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2288);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2290;
$tmp2290 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2290->value = $tmp2289;
ITable* $tmp2291 = ((panda$core$Equatable*) $tmp2287)->$class->itable;
while ($tmp2291->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2291 = $tmp2291->next;
}
$fn2293 $tmp2292 = $tmp2291->methods[0];
panda$core$Bit $tmp2294 = $tmp2292(((panda$core$Equatable*) $tmp2287), ((panda$core$Equatable*) $tmp2290));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2287)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2290)));
bool $tmp2295 = $tmp2294.value;
if ($tmp2295) goto block57; else goto block58;
block57:;
// line 613
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param4, &$s2296);
goto block58;
block58:;
goto block56;
block56:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2254);
org$pandalanguage$pandac$MethodDecl* $tmp2297 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2297));
// unreffing m
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block47;
block49:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2245));
// line 617
panda$core$Bit $tmp2298 = *(&local20);
panda$core$Bit $tmp2299 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2298);
bool $tmp2300 = $tmp2299.value;
if ($tmp2300) goto block59; else goto block60;
block59:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2301;
$tmp2301 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2301->value = param7;
panda$core$Int64 $tmp2302 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2303 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2302);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2304;
$tmp2304 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2304->value = $tmp2303;
ITable* $tmp2305 = ((panda$core$Equatable*) $tmp2301)->$class->itable;
while ($tmp2305->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2305 = $tmp2305->next;
}
$fn2307 $tmp2306 = $tmp2305->methods[0];
panda$core$Bit $tmp2308 = $tmp2306(((panda$core$Equatable*) $tmp2301), ((panda$core$Equatable*) $tmp2304));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2301)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2304)));
*(&local25) = $tmp2308;
goto block61;
block60:;
*(&local25) = $tmp2299;
goto block61;
block61:;
panda$core$Bit $tmp2309 = *(&local25);
bool $tmp2310 = $tmp2309.value;
if ($tmp2310) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$ClassDecl* $tmp2311 = *(&local14);
panda$core$String** $tmp2312 = &$tmp2311->name;
panda$core$String* $tmp2313 = *$tmp2312;
ITable* $tmp2315 = ((panda$core$Equatable*) $tmp2313)->$class->itable;
while ($tmp2315->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2315 = $tmp2315->next;
}
$fn2317 $tmp2316 = $tmp2315->methods[1];
panda$core$Bit $tmp2318 = $tmp2316(((panda$core$Equatable*) $tmp2313), ((panda$core$Equatable*) &$s2314));
*(&local24) = $tmp2318;
goto block64;
block63:;
*(&local24) = $tmp2309;
goto block64;
block64:;
panda$core$Bit $tmp2319 = *(&local24);
bool $tmp2320 = $tmp2319.value;
if ($tmp2320) goto block65; else goto block66;
block65:;
// line 618
org$pandalanguage$pandac$MethodDecl* $tmp2321 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2322 = *(&local14);
org$pandalanguage$pandac$Annotations* $tmp2323 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2324 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2323, $tmp2324);
panda$core$Int64 $tmp2325 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2326 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2325);
panda$collections$Array* $tmp2327 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2327);
panda$collections$Array* $tmp2328 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2328);
org$pandalanguage$pandac$Type* $tmp2329 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2330 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2330);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2321, $tmp2322, param4, ((panda$core$String*) NULL), $tmp2323, $tmp2326, &$s2331, $tmp2327, $tmp2328, $tmp2329, $tmp2330);
*(&local26) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2332 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2332));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
*(&local26) = $tmp2321;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2323));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2327));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2328));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2329));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2330));
// line 622
org$pandalanguage$pandac$ClassDecl* $tmp2333 = *(&local14);
panda$collections$Array** $tmp2334 = &$tmp2333->methods;
panda$collections$Array* $tmp2335 = *$tmp2334;
org$pandalanguage$pandac$MethodDecl* $tmp2336 = *(&local26);
panda$collections$Array$add$panda$collections$Array$T($tmp2335, ((panda$core$Object*) $tmp2336));
// line 623
org$pandalanguage$pandac$ClassDecl* $tmp2337 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2338 = &$tmp2337->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2339 = *$tmp2338;
org$pandalanguage$pandac$MethodDecl* $tmp2340 = *(&local26);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2339, ((org$pandalanguage$pandac$Symbol*) $tmp2340));
org$pandalanguage$pandac$MethodDecl* $tmp2341 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2341));
// unreffing defaultInit
*(&local26) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block66;
block66:;
// line 625
panda$core$Bit $tmp2342 = *(&local21);
panda$core$Bit $tmp2343 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2342);
bool $tmp2344 = $tmp2343.value;
if ($tmp2344) goto block67; else goto block68;
block67:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2345;
$tmp2345 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2345->value = param7;
panda$core$Int64 $tmp2346 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2347 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2346);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2348;
$tmp2348 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2348->value = $tmp2347;
ITable* $tmp2349 = ((panda$core$Equatable*) $tmp2345)->$class->itable;
while ($tmp2349->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2349 = $tmp2349->next;
}
$fn2351 $tmp2350 = $tmp2349->methods[0];
panda$core$Bit $tmp2352 = $tmp2350(((panda$core$Equatable*) $tmp2345), ((panda$core$Equatable*) $tmp2348));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2345)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2348)));
bool $tmp2353 = $tmp2352.value;
if ($tmp2353) goto block70; else goto block71;
block70:;
*(&local29) = $tmp2352;
goto block72;
block71:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2354;
$tmp2354 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2354->value = param7;
panda$core$Int64 $tmp2355 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2356 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2355);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2357;
$tmp2357 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2357->value = $tmp2356;
ITable* $tmp2358 = ((panda$core$Equatable*) $tmp2354)->$class->itable;
while ($tmp2358->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2358 = $tmp2358->next;
}
$fn2360 $tmp2359 = $tmp2358->methods[0];
panda$core$Bit $tmp2361 = $tmp2359(((panda$core$Equatable*) $tmp2354), ((panda$core$Equatable*) $tmp2357));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2354)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2357)));
*(&local29) = $tmp2361;
goto block72;
block72:;
panda$core$Bit $tmp2362 = *(&local29);
*(&local28) = $tmp2362;
goto block69;
block68:;
*(&local28) = $tmp2343;
goto block69;
block69:;
panda$core$Bit $tmp2363 = *(&local28);
bool $tmp2364 = $tmp2363.value;
if ($tmp2364) goto block73; else goto block74;
block73:;
org$pandalanguage$pandac$ClassDecl* $tmp2365 = *(&local14);
panda$core$String** $tmp2366 = &$tmp2365->name;
panda$core$String* $tmp2367 = *$tmp2366;
ITable* $tmp2369 = ((panda$core$Equatable*) $tmp2367)->$class->itable;
while ($tmp2369->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2369 = $tmp2369->next;
}
$fn2371 $tmp2370 = $tmp2369->methods[1];
panda$core$Bit $tmp2372 = $tmp2370(((panda$core$Equatable*) $tmp2367), ((panda$core$Equatable*) &$s2368));
*(&local27) = $tmp2372;
goto block75;
block74:;
*(&local27) = $tmp2363;
goto block75;
block75:;
panda$core$Bit $tmp2373 = *(&local27);
bool $tmp2374 = $tmp2373.value;
if ($tmp2374) goto block76; else goto block77;
block76:;
// line 627
org$pandalanguage$pandac$MethodDecl* $tmp2375 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2376 = *(&local14);
org$pandalanguage$pandac$Annotations* $tmp2377 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2378 = (panda$core$Int64) {32};
panda$core$Int64 $tmp2379 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp2380 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2378, $tmp2379);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2377, $tmp2380);
panda$core$Int64 $tmp2381 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2382 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2381);
panda$collections$Array* $tmp2383 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2383);
panda$collections$Array* $tmp2384 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2384);
org$pandalanguage$pandac$Type* $tmp2385 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2386 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2386);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2375, $tmp2376, param4, ((panda$core$String*) NULL), $tmp2377, $tmp2382, &$s2387, $tmp2383, $tmp2384, $tmp2385, $tmp2386);
*(&local30) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2388 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2388));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2375));
*(&local30) = $tmp2375;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2375));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2377));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2383));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2384));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2385));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2386));
// line 631
org$pandalanguage$pandac$ClassDecl* $tmp2389 = *(&local14);
panda$collections$Array** $tmp2390 = &$tmp2389->methods;
panda$collections$Array* $tmp2391 = *$tmp2390;
org$pandalanguage$pandac$MethodDecl* $tmp2392 = *(&local30);
panda$collections$Array$add$panda$collections$Array$T($tmp2391, ((panda$core$Object*) $tmp2392));
// line 632
org$pandalanguage$pandac$ClassDecl* $tmp2393 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2394 = &$tmp2393->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2395 = *$tmp2394;
org$pandalanguage$pandac$MethodDecl* $tmp2396 = *(&local30);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2395, ((org$pandalanguage$pandac$Symbol*) $tmp2396));
org$pandalanguage$pandac$MethodDecl* $tmp2397 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2397));
// unreffing defaultCleanup
*(&local30) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block77;
block77:;
// line 634
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2398;
$tmp2398 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2398->value = param7;
panda$core$Int64 $tmp2399 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2400 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2399);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2401;
$tmp2401 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2401->value = $tmp2400;
ITable* $tmp2402 = ((panda$core$Equatable*) $tmp2398)->$class->itable;
while ($tmp2402->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2402 = $tmp2402->next;
}
$fn2404 $tmp2403 = $tmp2402->methods[0];
panda$core$Bit $tmp2405 = $tmp2403(((panda$core$Equatable*) $tmp2398), ((panda$core$Equatable*) $tmp2401));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2398)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2401)));
bool $tmp2406 = $tmp2405.value;
if ($tmp2406) goto block78; else goto block79;
block78:;
// line 635
panda$core$Bit $tmp2407 = panda$core$Bit$init$builtin_bit(false);
*(&local31) = $tmp2407;
// line 636
org$pandalanguage$pandac$ClassDecl* $tmp2408 = *(&local14);
panda$collections$Array** $tmp2409 = &$tmp2408->choiceCases;
panda$collections$Array* $tmp2410 = *$tmp2409;
ITable* $tmp2411 = ((panda$collections$CollectionView*) $tmp2410)->$class->itable;
while ($tmp2411->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2411 = $tmp2411->next;
}
$fn2413 $tmp2412 = $tmp2411->methods[0];
panda$core$Int64 $tmp2414 = $tmp2412(((panda$collections$CollectionView*) $tmp2410));
panda$core$Int64 $tmp2415 = (panda$core$Int64) {0};
int64_t $tmp2416 = $tmp2414.value;
int64_t $tmp2417 = $tmp2415.value;
bool $tmp2418 = $tmp2416 > $tmp2417;
panda$core$Bit $tmp2419 = (panda$core$Bit) {$tmp2418};
bool $tmp2420 = $tmp2419.value;
if ($tmp2420) goto block80; else goto block82;
block80:;
// line 637
org$pandalanguage$pandac$ClassDecl* $tmp2421 = *(&local14);
panda$collections$Array** $tmp2422 = &$tmp2421->choiceCases;
panda$collections$Array* $tmp2423 = *$tmp2422;
ITable* $tmp2424 = ((panda$collections$Iterable*) $tmp2423)->$class->itable;
while ($tmp2424->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2424 = $tmp2424->next;
}
$fn2426 $tmp2425 = $tmp2424->methods[0];
panda$collections$Iterator* $tmp2427 = $tmp2425(((panda$collections$Iterable*) $tmp2423));
goto block83;
block83:;
ITable* $tmp2428 = $tmp2427->$class->itable;
while ($tmp2428->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2428 = $tmp2428->next;
}
$fn2430 $tmp2429 = $tmp2428->methods[0];
panda$core$Bit $tmp2431 = $tmp2429($tmp2427);
bool $tmp2432 = $tmp2431.value;
if ($tmp2432) goto block85; else goto block84;
block84:;
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
ITable* $tmp2433 = $tmp2427->$class->itable;
while ($tmp2433->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2433 = $tmp2433->next;
}
$fn2435 $tmp2434 = $tmp2433->methods[1];
panda$core$Object* $tmp2436 = $tmp2434($tmp2427);
org$pandalanguage$pandac$ChoiceCase* $tmp2437 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2437));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ChoiceCase*) $tmp2436)));
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) $tmp2436);
// line 638
org$pandalanguage$pandac$ChoiceCase* $tmp2438 = *(&local32);
panda$collections$Array** $tmp2439 = &$tmp2438->fields;
panda$collections$Array* $tmp2440 = *$tmp2439;
ITable* $tmp2441 = ((panda$collections$CollectionView*) $tmp2440)->$class->itable;
while ($tmp2441->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2441 = $tmp2441->next;
}
$fn2443 $tmp2442 = $tmp2441->methods[0];
panda$core$Int64 $tmp2444 = $tmp2442(((panda$collections$CollectionView*) $tmp2440));
panda$core$Int64 $tmp2445 = (panda$core$Int64) {0};
int64_t $tmp2446 = $tmp2444.value;
int64_t $tmp2447 = $tmp2445.value;
bool $tmp2448 = $tmp2446 > $tmp2447;
panda$core$Bit $tmp2449 = (panda$core$Bit) {$tmp2448};
bool $tmp2450 = $tmp2449.value;
if ($tmp2450) goto block86; else goto block87;
block86:;
// line 639
panda$core$Bit $tmp2451 = panda$core$Bit$init$builtin_bit(true);
*(&local31) = $tmp2451;
// line 640
org$pandalanguage$pandac$ChoiceCase* $tmp2452 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
// unreffing e
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
goto block85;
block87:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2436);
org$pandalanguage$pandac$ChoiceCase* $tmp2453 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2453));
// unreffing e
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
goto block83;
block85:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2427));
goto block81;
block82:;
// line 1
// line 645
org$pandalanguage$pandac$ClassDecl* $tmp2454 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2455 = &$tmp2454->position;
org$pandalanguage$pandac$Position $tmp2456 = *$tmp2455;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2456, &$s2457);
// line 646
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp2458 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2458));
// unreffing result
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp2459 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2459));
// unreffing supertypes
*(&local12) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2460 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2460));
// unreffing parameters
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp2461 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2461));
// unreffing annotations
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp2462 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2462));
// unreffing doccomment
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2463 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2463));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ClassDecl*) NULL);
block81:;
// line 648
panda$core$Bit $tmp2464 = *(&local31);
panda$core$Bit $tmp2465 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2464);
bool $tmp2466 = $tmp2465.value;
if ($tmp2466) goto block88; else goto block89;
block88:;
// line 649
org$pandalanguage$pandac$ClassDecl* $tmp2467 = *(&local14);
org$pandalanguage$pandac$Type* $tmp2468 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type** $tmp2469 = &$tmp2467->rawSuper;
org$pandalanguage$pandac$Type* $tmp2470 = *$tmp2469;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2470));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2468));
org$pandalanguage$pandac$Type** $tmp2471 = &$tmp2467->rawSuper;
*$tmp2471 = $tmp2468;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2468));
goto block89;
block89:;
goto block79;
block79:;
// line 652
panda$core$Weak** $tmp2472 = &param0->compiler;
panda$core$Weak* $tmp2473 = *$tmp2472;
panda$core$Object* $tmp2474 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2473);
panda$core$Panda$unref$panda$core$Object$Q($tmp2474);
panda$collections$Stack** $tmp2475 = &((org$pandalanguage$pandac$Compiler*) $tmp2474)->currentClass;
panda$collections$Stack* $tmp2476 = *$tmp2475;
panda$core$Object* $tmp2477 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2476);
panda$core$Panda$unref$panda$core$Object$Q($tmp2477);
// line 653
org$pandalanguage$pandac$ClassDecl* $tmp2478 = *(&local14);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2478));
org$pandalanguage$pandac$ClassDecl* $tmp2479 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2479));
// unreffing result
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp2480 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2480));
// unreffing supertypes
*(&local12) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2481 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
// unreffing parameters
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp2482 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2482));
// unreffing annotations
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp2483 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2483));
// unreffing doccomment
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2484 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2484));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
return $tmp2478;

}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ClassDecl* param1, panda$collections$Array* param2) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
// line 657
panda$collections$Array$add$panda$collections$Array$T(param2, ((panda$core$Object*) param1));
// line 658
panda$collections$Array** $tmp2485 = &param1->classes;
panda$collections$Array* $tmp2486 = *$tmp2485;
ITable* $tmp2487 = ((panda$collections$Iterable*) $tmp2486)->$class->itable;
while ($tmp2487->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2487 = $tmp2487->next;
}
$fn2489 $tmp2488 = $tmp2487->methods[0];
panda$collections$Iterator* $tmp2490 = $tmp2488(((panda$collections$Iterable*) $tmp2486));
goto block1;
block1:;
ITable* $tmp2491 = $tmp2490->$class->itable;
while ($tmp2491->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2491 = $tmp2491->next;
}
$fn2493 $tmp2492 = $tmp2491->methods[0];
panda$core$Bit $tmp2494 = $tmp2492($tmp2490);
bool $tmp2495 = $tmp2494.value;
if ($tmp2495) goto block3; else goto block2;
block2:;
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
ITable* $tmp2496 = $tmp2490->$class->itable;
while ($tmp2496->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2496 = $tmp2496->next;
}
$fn2498 $tmp2497 = $tmp2496->methods[1];
panda$core$Object* $tmp2499 = $tmp2497($tmp2490);
org$pandalanguage$pandac$ClassDecl* $tmp2500 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2500));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp2499)));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) $tmp2499);
// line 659
org$pandalanguage$pandac$ClassDecl* $tmp2501 = *(&local0);
org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, $tmp2501, param2);
panda$core$Panda$unref$panda$core$Object$Q($tmp2499);
org$pandalanguage$pandac$ClassDecl* $tmp2502 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2502));
// unreffing inner
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2490));
return;

}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* param0, panda$io$File* param1, panda$collections$MapView* param2, panda$core$String* param3, panda$collections$List* param4) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$MethodDecl* local1 = NULL;
org$pandalanguage$pandac$MethodDecl* local2 = NULL;
// line 665
org$pandalanguage$pandac$ClassDecl** $tmp2503 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2504 = *$tmp2503;
panda$core$Bit $tmp2505 = panda$core$Bit$init$builtin_bit($tmp2504 == NULL);
bool $tmp2506 = $tmp2505.value;
if ($tmp2506) goto block1; else goto block2;
block1:;
// line 666
*(&local0) = ((panda$core$String*) NULL);
// line 667
ITable* $tmp2508 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp2508->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2508 = $tmp2508->next;
}
$fn2510 $tmp2509 = $tmp2508->methods[1];
panda$core$Bit $tmp2511 = $tmp2509(((panda$core$Equatable*) param3), ((panda$core$Equatable*) &$s2507));
bool $tmp2512 = $tmp2511.value;
if ($tmp2512) goto block3; else goto block5;
block3:;
// line 668
panda$core$String* $tmp2513 = panda$core$String$convert$R$panda$core$String(param3);
panda$core$String* $tmp2514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2513, &$s2515);
panda$core$String* $tmp2516 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2516));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2514));
*(&local0) = $tmp2514;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2513));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2514));
goto block4;
block5:;
// line 1
// line 671
panda$core$String* $tmp2517 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2517));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2518));
*(&local0) = &$s2519;
goto block4;
block4:;
// line 673
org$pandalanguage$pandac$ClassDecl* $tmp2520 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
org$pandalanguage$pandac$Position $tmp2521 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2522 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
org$pandalanguage$pandac$Annotations$init($tmp2522);
panda$core$Int64 $tmp2523 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2524 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2523);
panda$core$String* $tmp2525 = *(&local0);
panda$collections$Array* $tmp2526 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2526);
panda$collections$Array* $tmp2527 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2527);
panda$core$Weak** $tmp2528 = &param0->compiler;
panda$core$Weak* $tmp2529 = *$tmp2528;
panda$core$Object* $tmp2530 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2529);
panda$core$Panda$unref$panda$core$Object$Q($tmp2530);
org$pandalanguage$pandac$SymbolTable** $tmp2531 = &((org$pandalanguage$pandac$Compiler*) $tmp2530)->root;
org$pandalanguage$pandac$SymbolTable* $tmp2532 = *$tmp2531;
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2520, param1, $tmp2521, param2, ((panda$core$String*) NULL), $tmp2522, $tmp2524, $tmp2525, ((panda$collections$ListView*) $tmp2526), $tmp2527, $tmp2532);
org$pandalanguage$pandac$ClassDecl** $tmp2533 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2534 = *$tmp2533;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2534));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2520));
org$pandalanguage$pandac$ClassDecl** $tmp2535 = &param0->bareCodeClass;
*$tmp2535 = $tmp2520;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2520));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2522));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2526));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2527));
// line 676
org$pandalanguage$pandac$ClassDecl** $tmp2536 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2537 = *$tmp2536;
ITable* $tmp2538 = ((panda$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp2538->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
    $tmp2538 = $tmp2538->next;
}
$fn2540 $tmp2539 = $tmp2538->methods[0];
$tmp2539(((panda$collections$CollectionWriter*) param4), ((panda$core$Object*) $tmp2537));
// line 677
org$pandalanguage$pandac$MethodDecl* $tmp2541 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2542 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2543 = *$tmp2542;
org$pandalanguage$pandac$Position $tmp2544 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2545 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2546 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2545, $tmp2546);
panda$core$Int64 $tmp2547 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2548 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2547);
panda$collections$Array* $tmp2549 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2549);
panda$collections$Array* $tmp2550 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2550);
org$pandalanguage$pandac$Type* $tmp2551 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2552 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2552);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2541, $tmp2543, $tmp2544, ((panda$core$String*) NULL), $tmp2545, $tmp2548, &$s2553, $tmp2549, $tmp2550, $tmp2551, $tmp2552);
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2554 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2554));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2541));
*(&local1) = $tmp2541;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2541));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2545));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2549));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2550));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2551));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2552));
// line 681
org$pandalanguage$pandac$ClassDecl** $tmp2555 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2556 = *$tmp2555;
panda$collections$Array** $tmp2557 = &$tmp2556->methods;
panda$collections$Array* $tmp2558 = *$tmp2557;
org$pandalanguage$pandac$MethodDecl* $tmp2559 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp2558, ((panda$core$Object*) $tmp2559));
// line 682
org$pandalanguage$pandac$ClassDecl** $tmp2560 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2561 = *$tmp2560;
org$pandalanguage$pandac$SymbolTable** $tmp2562 = &$tmp2561->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2563 = *$tmp2562;
org$pandalanguage$pandac$MethodDecl* $tmp2564 = *(&local1);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2563, ((org$pandalanguage$pandac$Symbol*) $tmp2564));
// line 683
org$pandalanguage$pandac$MethodDecl* $tmp2565 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2566 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2567 = *$tmp2566;
org$pandalanguage$pandac$Position $tmp2568 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2569 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2570 = (panda$core$Int64) {32};
panda$core$Int64 $tmp2571 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp2572 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2570, $tmp2571);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2569, $tmp2572);
panda$core$Int64 $tmp2573 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2574 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2573);
panda$collections$Array* $tmp2575 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2575);
panda$collections$Array* $tmp2576 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2576);
org$pandalanguage$pandac$Type* $tmp2577 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2578 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2578);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2565, $tmp2567, $tmp2568, ((panda$core$String*) NULL), $tmp2569, $tmp2574, &$s2579, $tmp2575, $tmp2576, $tmp2577, $tmp2578);
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2580 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2580));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2565));
*(&local2) = $tmp2565;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2565));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2575));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2576));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2577));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
// line 687
org$pandalanguage$pandac$ClassDecl** $tmp2581 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2582 = *$tmp2581;
panda$collections$Array** $tmp2583 = &$tmp2582->methods;
panda$collections$Array* $tmp2584 = *$tmp2583;
org$pandalanguage$pandac$MethodDecl* $tmp2585 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2584, ((panda$core$Object*) $tmp2585));
// line 688
org$pandalanguage$pandac$ClassDecl** $tmp2586 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2587 = *$tmp2586;
org$pandalanguage$pandac$SymbolTable** $tmp2588 = &$tmp2587->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2589 = *$tmp2588;
org$pandalanguage$pandac$MethodDecl* $tmp2590 = *(&local2);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2589, ((org$pandalanguage$pandac$Symbol*) $tmp2590));
org$pandalanguage$pandac$MethodDecl* $tmp2591 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2591));
// unreffing defaultCleanup
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2592 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2592));
// unreffing defaultInit
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$String* $tmp2593 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2593));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2) {

panda$io$File** $tmp2594 = &param0->source;
panda$io$File* $tmp2595 = *$tmp2594;
panda$core$Bit $tmp2596 = panda$core$Bit$init$builtin_bit($tmp2595 != NULL);
bool $tmp2597 = $tmp2596.value;
if ($tmp2597) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2598 = (panda$core$Int64) {693};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2599, $tmp2598, &$s2600);
abort(); // unreachable
block1:;
// line 694
panda$core$Weak** $tmp2601 = &param0->compiler;
panda$core$Weak* $tmp2602 = *$tmp2601;
panda$core$Object* $tmp2603 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2602);
panda$core$Panda$unref$panda$core$Object$Q($tmp2603);
panda$io$File** $tmp2604 = &param0->source;
panda$io$File* $tmp2605 = *$tmp2604;
org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2603), $tmp2605, param1, param2);
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
panda$io$File** $tmp2606 = &param0->source;
panda$io$File* $tmp2607 = *$tmp2606;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2607));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp2608 = &param0->source;
*$tmp2608 = param1;
// line 699
panda$core$Int64* $tmp2609 = &param2->$rawValue;
panda$core$Int64 $tmp2610 = *$tmp2609;
panda$core$Int64 $tmp2611 = (panda$core$Int64) {17};
panda$core$Bit $tmp2612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2610, $tmp2611);
bool $tmp2613 = $tmp2612.value;
if ($tmp2613) goto block2; else goto block3;
block2:;
panda$collections$ImmutableArray** $tmp2614 = (panda$collections$ImmutableArray**) (param2->$data + 0);
panda$collections$ImmutableArray* $tmp2615 = *$tmp2614;
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2616 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2616));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2615));
*(&local0) = $tmp2615;
// line 701
panda$collections$Array* $tmp2617 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2617);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2618 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2618));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2617));
*(&local1) = $tmp2617;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2617));
// line 702
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2619 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2619));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2620));
*(&local2) = &$s2621;
// line 703
panda$collections$HashMap* $tmp2622 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp2622);
*(&local3) = ((panda$collections$HashMap*) NULL);
panda$collections$HashMap* $tmp2623 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2623));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2622));
*(&local3) = $tmp2622;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2622));
// line 704
panda$collections$ImmutableArray* $tmp2624 = *(&local0);
ITable* $tmp2625 = ((panda$collections$Iterable*) $tmp2624)->$class->itable;
while ($tmp2625->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2625 = $tmp2625->next;
}
$fn2627 $tmp2626 = $tmp2625->methods[0];
panda$collections$Iterator* $tmp2628 = $tmp2626(((panda$collections$Iterable*) $tmp2624));
goto block4;
block4:;
ITable* $tmp2629 = $tmp2628->$class->itable;
while ($tmp2629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2629 = $tmp2629->next;
}
$fn2631 $tmp2630 = $tmp2629->methods[0];
panda$core$Bit $tmp2632 = $tmp2630($tmp2628);
bool $tmp2633 = $tmp2632.value;
if ($tmp2633) goto block6; else goto block5;
block5:;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2634 = $tmp2628->$class->itable;
while ($tmp2634->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2634 = $tmp2634->next;
}
$fn2636 $tmp2635 = $tmp2634->methods[1];
panda$core$Object* $tmp2637 = $tmp2635($tmp2628);
org$pandalanguage$pandac$ASTNode* $tmp2638 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2638));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2637)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) $tmp2637);
// line 705
org$pandalanguage$pandac$ASTNode* $tmp2639 = *(&local4);
panda$core$Int64* $tmp2640 = &$tmp2639->$rawValue;
panda$core$Int64 $tmp2641 = *$tmp2640;
panda$core$Int64 $tmp2642 = (panda$core$Int64) {30};
panda$core$Bit $tmp2643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2641, $tmp2642);
bool $tmp2644 = $tmp2643.value;
if ($tmp2644) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp2645 = (org$pandalanguage$pandac$Position*) ($tmp2639->$data + 0);
org$pandalanguage$pandac$Position $tmp2646 = *$tmp2645;
panda$core$String** $tmp2647 = (panda$core$String**) ($tmp2639->$data + 16);
panda$core$String* $tmp2648 = *$tmp2647;
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp2649 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2649));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2648));
*(&local5) = $tmp2648;
// line 707
panda$core$String* $tmp2650 = *(&local5);
panda$core$String* $tmp2651 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2651));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2650));
*(&local2) = $tmp2650;
panda$core$String* $tmp2652 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2652));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
goto block7;
block9:;
panda$core$Int64 $tmp2653 = (panda$core$Int64) {46};
panda$core$Bit $tmp2654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2641, $tmp2653);
bool $tmp2655 = $tmp2654.value;
if ($tmp2655) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp2656 = (org$pandalanguage$pandac$Position*) ($tmp2639->$data + 0);
org$pandalanguage$pandac$Position $tmp2657 = *$tmp2656;
panda$core$String** $tmp2658 = (panda$core$String**) ($tmp2639->$data + 16);
panda$core$String* $tmp2659 = *$tmp2658;
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp2660 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2660));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2659));
*(&local6) = $tmp2659;
// line 709
panda$core$String* $tmp2661 = *(&local6);
panda$core$String$Index$nullable $tmp2662 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q($tmp2661, &$s2663);
*(&local7) = $tmp2662;
// line 710
*(&local8) = ((panda$core$String*) NULL);
// line 711
panda$core$String$Index$nullable $tmp2664 = *(&local7);
panda$core$Bit $tmp2665 = panda$core$Bit$init$builtin_bit($tmp2664.nonnull);
bool $tmp2666 = $tmp2665.value;
if ($tmp2666) goto block12; else goto block14;
block12:;
// line 712
panda$core$String* $tmp2667 = *(&local6);
panda$core$String* $tmp2668 = *(&local6);
panda$core$String$Index$nullable $tmp2669 = *(&local7);
panda$core$String$Index $tmp2670 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp2668, ((panda$core$String$Index) $tmp2669.value));
panda$core$Bit $tmp2671 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2672 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2670, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2671);
panda$core$String* $tmp2673 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp2667, $tmp2672);
panda$core$String* $tmp2674 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2674));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2673));
*(&local8) = $tmp2673;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2673));
goto block13;
block14:;
// line 1
// line 715
panda$core$String* $tmp2675 = *(&local6);
panda$core$String* $tmp2676 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2676));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2675));
*(&local8) = $tmp2675;
goto block13;
block13:;
// line 717
panda$collections$HashMap* $tmp2677 = *(&local3);
panda$core$String* $tmp2678 = *(&local6);
panda$core$String* $tmp2679 = *(&local8);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp2677, ((panda$collections$Key*) $tmp2679), ((panda$core$Object*) $tmp2678));
panda$core$String* $tmp2680 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2680));
// unreffing alias
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp2681 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2681));
// unreffing fullName
*(&local6) = ((panda$core$String*) NULL);
goto block7;
block11:;
panda$core$Int64 $tmp2682 = (panda$core$Int64) {11};
panda$core$Bit $tmp2683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2641, $tmp2682);
bool $tmp2684 = $tmp2683.value;
if ($tmp2684) goto block15; else goto block16;
block15:;
org$pandalanguage$pandac$Position* $tmp2685 = (org$pandalanguage$pandac$Position*) ($tmp2639->$data + 0);
org$pandalanguage$pandac$Position $tmp2686 = *$tmp2685;
*(&local9) = $tmp2686;
org$pandalanguage$pandac$ASTNode** $tmp2687 = (org$pandalanguage$pandac$ASTNode**) ($tmp2639->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2688 = *$tmp2687;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2689 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2689));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2688));
*(&local10) = $tmp2688;
panda$collections$ImmutableArray** $tmp2690 = (panda$collections$ImmutableArray**) ($tmp2639->$data + 24);
panda$collections$ImmutableArray* $tmp2691 = *$tmp2690;
*(&local11) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2692 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2692));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2691));
*(&local11) = $tmp2691;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2693 = (org$pandalanguage$pandac$ClassDecl$Kind*) ($tmp2639->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2694 = *$tmp2693;
*(&local12) = $tmp2694;
panda$core$String** $tmp2695 = (panda$core$String**) ($tmp2639->$data + 40);
panda$core$String* $tmp2696 = *$tmp2695;
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp2697 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2697));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2696));
*(&local13) = $tmp2696;
panda$collections$ImmutableArray** $tmp2698 = (panda$collections$ImmutableArray**) ($tmp2639->$data + 48);
panda$collections$ImmutableArray* $tmp2699 = *$tmp2698;
*(&local14) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2700 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2700));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2699));
*(&local14) = $tmp2699;
panda$collections$ImmutableArray** $tmp2701 = (panda$collections$ImmutableArray**) ($tmp2639->$data + 56);
panda$collections$ImmutableArray* $tmp2702 = *$tmp2701;
*(&local15) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2703 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2703));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2702));
*(&local15) = $tmp2702;
panda$collections$ImmutableArray** $tmp2704 = (panda$collections$ImmutableArray**) ($tmp2639->$data + 64);
panda$collections$ImmutableArray* $tmp2705 = *$tmp2704;
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2706 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2706));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2705));
*(&local16) = $tmp2705;
// line 720
panda$collections$HashMap* $tmp2707 = *(&local3);
panda$core$String* $tmp2708 = *(&local2);
org$pandalanguage$pandac$Position $tmp2709 = *(&local9);
org$pandalanguage$pandac$ASTNode* $tmp2710 = *(&local10);
panda$collections$ImmutableArray* $tmp2711 = *(&local11);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2712 = *(&local12);
panda$core$String* $tmp2713 = *(&local13);
panda$collections$ImmutableArray* $tmp2714 = *(&local14);
panda$collections$ImmutableArray* $tmp2715 = *(&local15);
panda$collections$ImmutableArray* $tmp2716 = *(&local16);
org$pandalanguage$pandac$ClassDecl* $tmp2717 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(param0, param1, ((panda$collections$MapView*) $tmp2707), $tmp2708, $tmp2709, $tmp2710, $tmp2711, $tmp2712, $tmp2713, $tmp2714, $tmp2715, $tmp2716);
*(&local17) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2718 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2718));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2717));
*(&local17) = $tmp2717;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2717));
// line 722
org$pandalanguage$pandac$ClassDecl* $tmp2719 = *(&local17);
panda$core$Bit $tmp2720 = panda$core$Bit$init$builtin_bit($tmp2719 != NULL);
bool $tmp2721 = $tmp2720.value;
if ($tmp2721) goto block17; else goto block18;
block17:;
// line 723
org$pandalanguage$pandac$ClassDecl* $tmp2722 = *(&local17);
panda$collections$Array* $tmp2723 = *(&local1);
org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, $tmp2722, $tmp2723);
goto block18;
block18:;
org$pandalanguage$pandac$ClassDecl* $tmp2724 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2724));
// unreffing cl
*(&local17) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$ImmutableArray* $tmp2725 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2725));
// unreffing members
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2726 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2726));
// unreffing supertypes
*(&local15) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2727 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2727));
// unreffing generics
*(&local14) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2728 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2728));
// unreffing name
*(&local13) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2729 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2729));
// unreffing annotations
*(&local11) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2730 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2730));
// unreffing dc
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block16:;
panda$core$Int64 $tmp2731 = (panda$core$Int64) {26};
panda$core$Bit $tmp2732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2641, $tmp2731);
bool $tmp2733 = $tmp2732.value;
if ($tmp2733) goto block19; else goto block20;
block19:;
org$pandalanguage$pandac$Position* $tmp2734 = (org$pandalanguage$pandac$Position*) ($tmp2639->$data + 0);
org$pandalanguage$pandac$Position $tmp2735 = *$tmp2734;
*(&local18) = $tmp2735;
org$pandalanguage$pandac$ASTNode** $tmp2736 = (org$pandalanguage$pandac$ASTNode**) ($tmp2639->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2737 = *$tmp2736;
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2738 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2738));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2737));
*(&local19) = $tmp2737;
panda$collections$ImmutableArray** $tmp2739 = (panda$collections$ImmutableArray**) ($tmp2639->$data + 24);
panda$collections$ImmutableArray* $tmp2740 = *$tmp2739;
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2741 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2741));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2740));
*(&local20) = $tmp2740;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2742 = (org$pandalanguage$pandac$MethodDecl$Kind*) ($tmp2639->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2743 = *$tmp2742;
*(&local21) = $tmp2743;
panda$core$String** $tmp2744 = (panda$core$String**) ($tmp2639->$data + 40);
panda$core$String* $tmp2745 = *$tmp2744;
*(&local22) = ((panda$core$String*) NULL);
panda$core$String* $tmp2746 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2746));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2745));
*(&local22) = $tmp2745;
panda$collections$ImmutableArray** $tmp2747 = (panda$collections$ImmutableArray**) ($tmp2639->$data + 48);
panda$collections$ImmutableArray* $tmp2748 = *$tmp2747;
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2749 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2749));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2748));
*(&local23) = $tmp2748;
panda$collections$ImmutableArray** $tmp2750 = (panda$collections$ImmutableArray**) ($tmp2639->$data + 56);
panda$collections$ImmutableArray* $tmp2751 = *$tmp2750;
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2752 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2752));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2751));
*(&local24) = $tmp2751;
org$pandalanguage$pandac$ASTNode** $tmp2753 = (org$pandalanguage$pandac$ASTNode**) ($tmp2639->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2754 = *$tmp2753;
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2755 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2755));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2754));
*(&local25) = $tmp2754;
panda$collections$ImmutableArray** $tmp2756 = (panda$collections$ImmutableArray**) ($tmp2639->$data + 72);
panda$collections$ImmutableArray* $tmp2757 = *$tmp2756;
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2758 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2758));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2757));
*(&local26) = $tmp2757;
// line 727
org$pandalanguage$pandac$MethodDecl$Kind $tmp2759 = *(&local21);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2760;
$tmp2760 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2760->value = $tmp2759;
panda$core$Int64 $tmp2761 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2762 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2761);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2763;
$tmp2763 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2763->value = $tmp2762;
ITable* $tmp2764 = ((panda$core$Equatable*) $tmp2760)->$class->itable;
while ($tmp2764->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2764 = $tmp2764->next;
}
$fn2766 $tmp2765 = $tmp2764->methods[0];
panda$core$Bit $tmp2767 = $tmp2765(((panda$core$Equatable*) $tmp2760), ((panda$core$Equatable*) $tmp2763));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2760)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2763)));
bool $tmp2768 = $tmp2767.value;
if ($tmp2768) goto block21; else goto block22;
block21:;
// line 728
org$pandalanguage$pandac$Position $tmp2769 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2769, &$s2770);
// line 729
panda$collections$ImmutableArray* $tmp2771 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2771));
// unreffing statements
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2772 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2772));
// unreffing rawReturnType
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2773 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2773));
// unreffing parameters
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2774 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2774));
// unreffing generics
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2775 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2775));
// unreffing rawName
*(&local22) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2776 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2776));
// unreffing annotations
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2777 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2777));
// unreffing dc
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2778 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2778));
// unreffing e
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block22:;
// line 731
panda$collections$HashMap* $tmp2779 = *(&local3);
panda$core$String* $tmp2780 = *(&local2);
panda$collections$Array* $tmp2781 = *(&local1);
org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, param1, ((panda$collections$MapView*) $tmp2779), $tmp2780, ((panda$collections$List*) $tmp2781));
// line 732
*(&local27) = ((panda$core$String*) NULL);
// line 733
panda$core$String* $tmp2782 = *(&local22);
panda$core$Bit $tmp2783 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2782, &$s2784);
bool $tmp2785 = $tmp2783.value;
if ($tmp2785) goto block23; else goto block25;
block23:;
// line 734
panda$core$String* $tmp2786 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2786));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2787));
*(&local27) = &$s2788;
// line 735
panda$collections$Array* $tmp2789 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2789);
*(&local28) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2790 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2790));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2789));
*(&local28) = $tmp2789;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2789));
// line 736
panda$collections$Array* $tmp2791 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2791);
*(&local29) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2792 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2792));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2791));
*(&local29) = $tmp2791;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2791));
// line 737
panda$collections$Array* $tmp2793 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2793);
*(&local30) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2794 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2794));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2793));
*(&local30) = $tmp2793;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2793));
// line 738
panda$collections$ImmutableArray* $tmp2795 = *(&local24);
ITable* $tmp2796 = ((panda$collections$Iterable*) $tmp2795)->$class->itable;
while ($tmp2796->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2796 = $tmp2796->next;
}
$fn2798 $tmp2797 = $tmp2796->methods[0];
panda$collections$Iterator* $tmp2799 = $tmp2797(((panda$collections$Iterable*) $tmp2795));
goto block26;
block26:;
ITable* $tmp2800 = $tmp2799->$class->itable;
while ($tmp2800->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2800 = $tmp2800->next;
}
$fn2802 $tmp2801 = $tmp2800->methods[0];
panda$core$Bit $tmp2803 = $tmp2801($tmp2799);
bool $tmp2804 = $tmp2803.value;
if ($tmp2804) goto block28; else goto block27;
block27:;
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2805 = $tmp2799->$class->itable;
while ($tmp2805->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2805 = $tmp2805->next;
}
$fn2807 $tmp2806 = $tmp2805->methods[1];
panda$core$Object* $tmp2808 = $tmp2806($tmp2799);
org$pandalanguage$pandac$ASTNode* $tmp2809 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2809));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2808)));
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) $tmp2808);
// line 739
org$pandalanguage$pandac$ASTNode* $tmp2810 = *(&local31);
panda$core$Int64* $tmp2811 = &$tmp2810->$rawValue;
panda$core$Int64 $tmp2812 = *$tmp2811;
panda$core$Int64 $tmp2813 = (panda$core$Int64) {31};
panda$core$Bit $tmp2814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2812, $tmp2813);
bool $tmp2815 = $tmp2814.value;
if ($tmp2815) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp2816 = (org$pandalanguage$pandac$Position*) ($tmp2810->$data + 0);
org$pandalanguage$pandac$Position $tmp2817 = *$tmp2816;
*(&local32) = $tmp2817;
panda$core$String** $tmp2818 = (panda$core$String**) ($tmp2810->$data + 16);
panda$core$String* $tmp2819 = *$tmp2818;
*(&local33) = ((panda$core$String*) NULL);
panda$core$String* $tmp2820 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2820));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2819));
*(&local33) = $tmp2819;
org$pandalanguage$pandac$ASTNode** $tmp2821 = (org$pandalanguage$pandac$ASTNode**) ($tmp2810->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2822 = *$tmp2821;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2823 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2823));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2822));
*(&local34) = $tmp2822;
// line 741
panda$collections$Array* $tmp2824 = *(&local28);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2825 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
panda$core$String* $tmp2826 = *(&local33);
org$pandalanguage$pandac$ASTNode* $tmp2827 = *(&local34);
org$pandalanguage$pandac$Type* $tmp2828 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2827);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2825, $tmp2826, $tmp2828);
panda$collections$Array$add$panda$collections$Array$T($tmp2824, ((panda$core$Object*) $tmp2825));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2825));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2828));
// line 743
panda$collections$Array* $tmp2829 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp2830 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2831 = (panda$core$Int64) {20};
org$pandalanguage$pandac$Position $tmp2832 = *(&local32);
panda$core$String* $tmp2833 = *(&local33);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2830, $tmp2831, $tmp2832, $tmp2833);
panda$collections$Array$add$panda$collections$Array$T($tmp2829, ((panda$core$Object*) $tmp2830));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2830));
org$pandalanguage$pandac$ASTNode* $tmp2834 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2834));
// unreffing type
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2835 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2835));
// unreffing name
*(&local33) = ((panda$core$String*) NULL);
goto block29;
block31:;
// line 745
panda$core$Bit $tmp2836 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2837 = $tmp2836.value;
if ($tmp2837) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp2838 = (panda$core$Int64) {745};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2839, $tmp2838);
abort(); // unreachable
block32:;
goto block29;
block29:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2808);
org$pandalanguage$pandac$ASTNode* $tmp2840 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2840));
// unreffing p
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block26;
block28:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2799));
// line 748
org$pandalanguage$pandac$ASTNode* $tmp2841 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2842 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Position $tmp2843 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2844 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2845 = (panda$core$Int64) {20};
org$pandalanguage$pandac$Position $tmp2846 = *(&local18);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2844, $tmp2845, $tmp2846, &$s2847);
panda$collections$ImmutableArray* $tmp2848 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2848);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2841, $tmp2842, $tmp2843, $tmp2844, $tmp2848);
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2849 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2849));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2841));
*(&local35) = $tmp2841;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2841));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2848));
// line 751
panda$collections$Array* $tmp2850 = *(&local29);
org$pandalanguage$pandac$ASTNode* $tmp2851 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2852 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Position $tmp2853 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2854 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2855 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Position $tmp2856 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2857 = *(&local35);
panda$core$String* $tmp2858 = *(&local27);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2854, $tmp2855, $tmp2856, $tmp2857, $tmp2858);
panda$collections$Array* $tmp2859 = *(&local30);
panda$collections$ImmutableArray* $tmp2860 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2859);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2851, $tmp2852, $tmp2853, $tmp2854, $tmp2860);
panda$collections$Array$add$panda$collections$Array$T($tmp2850, ((panda$core$Object*) $tmp2851));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2851));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2854));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2860));
// line 754
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
// line 755
org$pandalanguage$pandac$ASTNode* $tmp2861 = *(&local25);
panda$core$Bit $tmp2862 = panda$core$Bit$init$builtin_bit($tmp2861 != NULL);
bool $tmp2863 = $tmp2862.value;
if ($tmp2863) goto block34; else goto block36;
block34:;
// line 756
org$pandalanguage$pandac$ASTNode* $tmp2864 = *(&local25);
org$pandalanguage$pandac$Type* $tmp2865 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2864);
org$pandalanguage$pandac$Type* $tmp2866 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2866));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2865));
*(&local36) = $tmp2865;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2865));
goto block35;
block36:;
// line 1
// line 759
org$pandalanguage$pandac$Type* $tmp2867 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp2868 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2868));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2867));
*(&local36) = $tmp2867;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2867));
goto block35;
block35:;
// line 761
org$pandalanguage$pandac$MethodDecl* $tmp2869 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2870 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2871 = *$tmp2870;
org$pandalanguage$pandac$Position $tmp2872 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2873 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2874 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2873, $tmp2874);
panda$core$Int64 $tmp2875 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2876 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2875);
panda$collections$Array* $tmp2877 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2877);
panda$collections$Array* $tmp2878 = *(&local28);
org$pandalanguage$pandac$Type* $tmp2879 = *(&local36);
panda$collections$Array* $tmp2880 = *(&local29);
panda$collections$ImmutableArray* $tmp2881 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2880);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2869, $tmp2871, $tmp2872, ((panda$core$String*) NULL), $tmp2873, $tmp2876, &$s2882, $tmp2877, $tmp2878, $tmp2879, $tmp2881);
*(&local37) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2883 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2883));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2869));
*(&local37) = $tmp2869;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2869));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2873));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2877));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2881));
// line 765
org$pandalanguage$pandac$ClassDecl** $tmp2884 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2885 = *$tmp2884;
panda$collections$Array** $tmp2886 = &$tmp2885->methods;
panda$collections$Array* $tmp2887 = *$tmp2886;
org$pandalanguage$pandac$MethodDecl* $tmp2888 = *(&local37);
panda$collections$Array$add$panda$collections$Array$T($tmp2887, ((panda$core$Object*) $tmp2888));
org$pandalanguage$pandac$MethodDecl* $tmp2889 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2889));
// unreffing bareMain
*(&local37) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp2890 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2890));
// unreffing returnType
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2891 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2891));
// unreffing bareConstruct
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2892 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2892));
// unreffing mainArguments
*(&local30) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2893 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2893));
// unreffing mainStatements
*(&local29) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2894 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2894));
// unreffing mainParameters
*(&local28) = ((panda$collections$Array*) NULL);
goto block24;
block25:;
// line 1
// line 768
panda$core$String* $tmp2895 = *(&local22);
panda$core$String* $tmp2896 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2896));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2895));
*(&local27) = $tmp2895;
goto block24;
block24:;
// line 770
panda$core$Weak** $tmp2897 = &param0->compiler;
panda$core$Weak* $tmp2898 = *$tmp2897;
panda$core$Object* $tmp2899 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2898);
panda$core$Panda$unref$panda$core$Object$Q($tmp2899);
panda$collections$Stack** $tmp2900 = &((org$pandalanguage$pandac$Compiler*) $tmp2899)->currentClass;
panda$collections$Stack* $tmp2901 = *$tmp2900;
org$pandalanguage$pandac$ClassDecl** $tmp2902 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2903 = *$tmp2902;
panda$collections$Stack$push$panda$collections$Stack$T($tmp2901, ((panda$core$Object*) $tmp2903));
// line 771
org$pandalanguage$pandac$ClassDecl** $tmp2904 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2905 = *$tmp2904;
org$pandalanguage$pandac$Position $tmp2906 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2907 = *(&local19);
panda$collections$ImmutableArray* $tmp2908 = *(&local20);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2909 = *(&local21);
panda$core$String* $tmp2910 = *(&local27);
panda$collections$ImmutableArray* $tmp2911 = *(&local23);
panda$collections$ImmutableArray* $tmp2912 = *(&local24);
org$pandalanguage$pandac$ASTNode* $tmp2913 = *(&local25);
panda$collections$ImmutableArray* $tmp2914 = *(&local26);
org$pandalanguage$pandac$MethodDecl* $tmp2915 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(param0, $tmp2905, $tmp2906, $tmp2907, $tmp2908, $tmp2909, $tmp2910, $tmp2911, $tmp2912, $tmp2913, $tmp2914);
*(&local38) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2916 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2916));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2915));
*(&local38) = $tmp2915;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2915));
// line 773
org$pandalanguage$pandac$MethodDecl* $tmp2917 = *(&local38);
org$pandalanguage$pandac$Annotations** $tmp2918 = &$tmp2917->annotations;
org$pandalanguage$pandac$Annotations* $tmp2919 = *$tmp2918;
panda$core$Bit $tmp2920 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp2919);
bool $tmp2921 = $tmp2920.value;
if ($tmp2921) goto block37; else goto block38;
block37:;
// line 774
org$pandalanguage$pandac$MethodDecl* $tmp2922 = *(&local38);
org$pandalanguage$pandac$Position* $tmp2923 = &((org$pandalanguage$pandac$Symbol*) $tmp2922)->position;
org$pandalanguage$pandac$Position $tmp2924 = *$tmp2923;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2924, &$s2925);
// line 776
org$pandalanguage$pandac$MethodDecl* $tmp2926 = *(&local38);
org$pandalanguage$pandac$Annotations** $tmp2927 = &$tmp2926->annotations;
org$pandalanguage$pandac$Annotations* $tmp2928 = *$tmp2927;
panda$core$Int64* $tmp2929 = &$tmp2928->flags;
panda$core$Int64 $tmp2930 = *$tmp2929;
panda$core$Int64 $tmp2931 = (panda$core$Int64) {16};
panda$core$Int64 $tmp2932 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp2931);
panda$core$Int64 $tmp2933 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp2930, $tmp2932);
panda$core$Int64* $tmp2934 = &$tmp2928->flags;
*$tmp2934 = $tmp2933;
goto block38;
block38:;
// line 778
panda$core$Weak** $tmp2935 = &param0->compiler;
panda$core$Weak* $tmp2936 = *$tmp2935;
panda$core$Object* $tmp2937 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2936);
panda$core$Panda$unref$panda$core$Object$Q($tmp2937);
panda$collections$Stack** $tmp2938 = &((org$pandalanguage$pandac$Compiler*) $tmp2937)->currentClass;
panda$collections$Stack* $tmp2939 = *$tmp2938;
org$pandalanguage$pandac$ClassDecl** $tmp2940 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2941 = *$tmp2940;
panda$collections$Stack$pop$panda$collections$Stack$T($tmp2939, ((panda$core$Object*) $tmp2941));
// line 779
org$pandalanguage$pandac$ClassDecl** $tmp2942 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2943 = *$tmp2942;
panda$collections$Array** $tmp2944 = &$tmp2943->methods;
panda$collections$Array* $tmp2945 = *$tmp2944;
org$pandalanguage$pandac$MethodDecl* $tmp2946 = *(&local38);
panda$collections$Array$add$panda$collections$Array$T($tmp2945, ((panda$core$Object*) $tmp2946));
// line 780
org$pandalanguage$pandac$ClassDecl** $tmp2947 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2948 = *$tmp2947;
org$pandalanguage$pandac$SymbolTable** $tmp2949 = &$tmp2948->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2950 = *$tmp2949;
org$pandalanguage$pandac$MethodDecl* $tmp2951 = *(&local38);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2950, ((org$pandalanguage$pandac$Symbol*) $tmp2951));
org$pandalanguage$pandac$MethodDecl* $tmp2952 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2952));
// unreffing m
*(&local38) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$String* $tmp2953 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2953));
// unreffing name
*(&local27) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2954 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2954));
// unreffing statements
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2955 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2955));
// unreffing rawReturnType
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2956 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2956));
// unreffing parameters
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2957 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2957));
// unreffing generics
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2958 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2958));
// unreffing rawName
*(&local22) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2959 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2959));
// unreffing annotations
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2960 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2960));
// unreffing dc
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block20:;
panda$core$Int64 $tmp2961 = (panda$core$Int64) {16};
panda$core$Bit $tmp2962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2641, $tmp2961);
bool $tmp2963 = $tmp2962.value;
if ($tmp2963) goto block39; else goto block40;
block39:;
org$pandalanguage$pandac$Position* $tmp2964 = (org$pandalanguage$pandac$Position*) ($tmp2639->$data + 0);
org$pandalanguage$pandac$Position $tmp2965 = *$tmp2964;
*(&local39) = $tmp2965;
org$pandalanguage$pandac$ASTNode** $tmp2966 = (org$pandalanguage$pandac$ASTNode**) ($tmp2639->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2967 = *$tmp2966;
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2968 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2968));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2967));
*(&local40) = $tmp2967;
panda$collections$ImmutableArray** $tmp2969 = (panda$collections$ImmutableArray**) ($tmp2639->$data + 24);
panda$collections$ImmutableArray* $tmp2970 = *$tmp2969;
*(&local41) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2971 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2971));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2970));
*(&local41) = $tmp2970;
org$pandalanguage$pandac$ASTNode** $tmp2972 = (org$pandalanguage$pandac$ASTNode**) ($tmp2639->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2973 = *$tmp2972;
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2974 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2974));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2973));
*(&local42) = $tmp2973;
// line 782
panda$collections$HashMap* $tmp2975 = *(&local3);
panda$core$String* $tmp2976 = *(&local2);
panda$collections$Array* $tmp2977 = *(&local1);
org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, param1, ((panda$collections$MapView*) $tmp2975), $tmp2976, ((panda$collections$List*) $tmp2977));
// line 783
org$pandalanguage$pandac$ClassDecl** $tmp2978 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2979 = *$tmp2978;
panda$collections$Array** $tmp2980 = &$tmp2979->fields;
panda$collections$Array* $tmp2981 = *$tmp2980;
ITable* $tmp2982 = ((panda$collections$CollectionView*) $tmp2981)->$class->itable;
while ($tmp2982->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2982 = $tmp2982->next;
}
$fn2984 $tmp2983 = $tmp2982->methods[0];
panda$core$Int64 $tmp2985 = $tmp2983(((panda$collections$CollectionView*) $tmp2981));
*(&local43) = $tmp2985;
// line 784
org$pandalanguage$pandac$ClassDecl** $tmp2986 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2987 = *$tmp2986;
org$pandalanguage$pandac$Position $tmp2988 = *(&local39);
org$pandalanguage$pandac$ASTNode* $tmp2989 = *(&local40);
panda$collections$ImmutableArray* $tmp2990 = *(&local41);
org$pandalanguage$pandac$ASTNode* $tmp2991 = *(&local42);
org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(param0, $tmp2987, $tmp2988, $tmp2989, $tmp2990, $tmp2991);
// line 785
panda$core$Int64 $tmp2992 = *(&local43);
org$pandalanguage$pandac$ClassDecl** $tmp2993 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2994 = *$tmp2993;
panda$collections$Array** $tmp2995 = &$tmp2994->fields;
panda$collections$Array* $tmp2996 = *$tmp2995;
ITable* $tmp2997 = ((panda$collections$CollectionView*) $tmp2996)->$class->itable;
while ($tmp2997->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2997 = $tmp2997->next;
}
$fn2999 $tmp2998 = $tmp2997->methods[0];
panda$core$Int64 $tmp3000 = $tmp2998(((panda$collections$CollectionView*) $tmp2996));
panda$core$Bit $tmp3001 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp3002 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2992, $tmp3000, $tmp3001);
panda$core$Int64 $tmp3003 = $tmp3002.min;
*(&local44) = $tmp3003;
panda$core$Int64 $tmp3004 = $tmp3002.max;
panda$core$Bit $tmp3005 = $tmp3002.inclusive;
bool $tmp3006 = $tmp3005.value;
panda$core$Int64 $tmp3007 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp3008 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3007);
if ($tmp3006) goto block44; else goto block45;
block44:;
int64_t $tmp3009 = $tmp3003.value;
int64_t $tmp3010 = $tmp3004.value;
bool $tmp3011 = $tmp3009 <= $tmp3010;
panda$core$Bit $tmp3012 = (panda$core$Bit) {$tmp3011};
bool $tmp3013 = $tmp3012.value;
if ($tmp3013) goto block41; else goto block42;
block45:;
int64_t $tmp3014 = $tmp3003.value;
int64_t $tmp3015 = $tmp3004.value;
bool $tmp3016 = $tmp3014 < $tmp3015;
panda$core$Bit $tmp3017 = (panda$core$Bit) {$tmp3016};
bool $tmp3018 = $tmp3017.value;
if ($tmp3018) goto block41; else goto block42;
block41:;
// line 786
org$pandalanguage$pandac$ClassDecl** $tmp3019 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3020 = *$tmp3019;
panda$collections$Array** $tmp3021 = &$tmp3020->fields;
panda$collections$Array* $tmp3022 = *$tmp3021;
panda$core$Int64 $tmp3023 = *(&local44);
panda$core$Object* $tmp3024 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3022, $tmp3023);
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp3025 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3025));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3024)));
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) $tmp3024);
panda$core$Panda$unref$panda$core$Object$Q($tmp3024);
// line 787
org$pandalanguage$pandac$FieldDecl* $tmp3026 = *(&local45);
org$pandalanguage$pandac$FieldDecl$Kind* $tmp3027 = &$tmp3026->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp3028 = *$tmp3027;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp3029;
$tmp3029 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp3029->value = $tmp3028;
panda$core$Int64 $tmp3030 = (panda$core$Int64) {2};
org$pandalanguage$pandac$FieldDecl$Kind $tmp3031 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp3030);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp3032;
$tmp3032 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp3032->value = $tmp3031;
ITable* $tmp3033 = ((panda$core$Equatable*) $tmp3029)->$class->itable;
while ($tmp3033->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3033 = $tmp3033->next;
}
$fn3035 $tmp3034 = $tmp3033->methods[1];
panda$core$Bit $tmp3036 = $tmp3034(((panda$core$Equatable*) $tmp3029), ((panda$core$Equatable*) $tmp3032));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3029)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3032)));
bool $tmp3037 = $tmp3036.value;
if ($tmp3037) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$FieldDecl* $tmp3038 = *(&local45);
org$pandalanguage$pandac$Annotations** $tmp3039 = &$tmp3038->annotations;
org$pandalanguage$pandac$Annotations* $tmp3040 = *$tmp3039;
panda$core$Bit $tmp3041 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp3040);
*(&local46) = $tmp3041;
goto block48;
block47:;
*(&local46) = $tmp3036;
goto block48;
block48:;
panda$core$Bit $tmp3042 = *(&local46);
bool $tmp3043 = $tmp3042.value;
if ($tmp3043) goto block49; else goto block50;
block49:;
// line 789
org$pandalanguage$pandac$FieldDecl* $tmp3044 = *(&local45);
org$pandalanguage$pandac$Position* $tmp3045 = &((org$pandalanguage$pandac$Symbol*) $tmp3044)->position;
org$pandalanguage$pandac$Position $tmp3046 = *$tmp3045;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp3046, &$s3047);
goto block50;
block50:;
org$pandalanguage$pandac$FieldDecl* $tmp3048 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3048));
// unreffing f
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block43;
block43:;
panda$core$Int64 $tmp3049 = *(&local44);
int64_t $tmp3050 = $tmp3004.value;
int64_t $tmp3051 = $tmp3049.value;
int64_t $tmp3052 = $tmp3050 - $tmp3051;
panda$core$Int64 $tmp3053 = (panda$core$Int64) {$tmp3052};
panda$core$UInt64 $tmp3054 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3053);
if ($tmp3006) goto block52; else goto block53;
block52:;
uint64_t $tmp3055 = $tmp3054.value;
uint64_t $tmp3056 = $tmp3008.value;
bool $tmp3057 = $tmp3055 >= $tmp3056;
panda$core$Bit $tmp3058 = (panda$core$Bit) {$tmp3057};
bool $tmp3059 = $tmp3058.value;
if ($tmp3059) goto block51; else goto block42;
block53:;
uint64_t $tmp3060 = $tmp3054.value;
uint64_t $tmp3061 = $tmp3008.value;
bool $tmp3062 = $tmp3060 > $tmp3061;
panda$core$Bit $tmp3063 = (panda$core$Bit) {$tmp3062};
bool $tmp3064 = $tmp3063.value;
if ($tmp3064) goto block51; else goto block42;
block51:;
int64_t $tmp3065 = $tmp3049.value;
int64_t $tmp3066 = $tmp3007.value;
int64_t $tmp3067 = $tmp3065 + $tmp3066;
panda$core$Int64 $tmp3068 = (panda$core$Int64) {$tmp3067};
*(&local44) = $tmp3068;
goto block41;
block42:;
org$pandalanguage$pandac$ASTNode* $tmp3069 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3069));
// unreffing varDecl
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3070 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3070));
// unreffing annotations
*(&local41) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3071 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3071));
// unreffing dc
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block40:;
// line 794
panda$core$Bit $tmp3072 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3073 = $tmp3072.value;
if ($tmp3073) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp3074 = (panda$core$Int64) {794};
org$pandalanguage$pandac$ASTNode* $tmp3075 = *(&local4);
panda$core$String* $tmp3076 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3077, ((panda$core$Object*) $tmp3075));
panda$core$String* $tmp3078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3076, &$s3079);
org$pandalanguage$pandac$ASTNode* $tmp3080 = *(&local4);
panda$core$Int64* $tmp3081 = &$tmp3080->$rawValue;
panda$core$Int64 $tmp3082 = *$tmp3081;
panda$core$Int64$wrapper* $tmp3083;
$tmp3083 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3083->value = $tmp3082;
panda$core$String* $tmp3084 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3078, ((panda$core$Object*) $tmp3083));
panda$core$String* $tmp3085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3084, &$s3086);
org$pandalanguage$pandac$ASTNode* $tmp3087 = *(&local4);
$fn3089 $tmp3088 = ($fn3089) $tmp3087->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3090 = $tmp3088($tmp3087);
org$pandalanguage$pandac$Position$wrapper* $tmp3091;
$tmp3091 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp3091->value = $tmp3090;
panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3085, ((panda$core$Object*) $tmp3091));
panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, &$s3094);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3095, $tmp3074, $tmp3093);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3076));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3078));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3083));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3084));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3085));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3091));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3092));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3093));
abort(); // unreachable
block54:;
goto block7;
block7:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2637);
org$pandalanguage$pandac$ASTNode* $tmp3096 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3096));
// unreffing e
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2628));
// line 797
panda$io$File** $tmp3097 = &param0->source;
panda$io$File* $tmp3098 = *$tmp3097;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3098));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) NULL)));
panda$io$File** $tmp3099 = &param0->source;
*$tmp3099 = ((panda$io$File*) NULL);
// line 798
panda$collections$Array* $tmp3100 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp3100)));
panda$collections$HashMap* $tmp3101 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3101));
// unreffing aliases
*(&local3) = ((panda$collections$HashMap*) NULL);
panda$core$String* $tmp3102 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3102));
// unreffing currentPackage
*(&local2) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp3103 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3103));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp3104 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3104));
// unreffing entries
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
return ((panda$collections$ListView*) $tmp3100);
block3:;
// line 800
panda$core$Bit $tmp3105 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3106 = $tmp3105.value;
if ($tmp3106) goto block56; else goto block57;
block57:;
panda$core$Int64 $tmp3107 = (panda$core$Int64) {800};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3108, $tmp3107);
abort(); // unreachable
block56:;
goto block1;
block1:;
panda$core$Bit $tmp3109 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3110 = $tmp3109.value;
if ($tmp3110) goto block58; else goto block59;
block59:;
panda$core$Int64 $tmp3111 = (panda$core$Int64) {697};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3112, $tmp3111, &$s3113);
abort(); // unreachable
block58:;
abort(); // unreachable

}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* param0) {

panda$core$Weak** $tmp3114 = &param0->compiler;
panda$core$Weak* $tmp3115 = *$tmp3114;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3115));
org$pandalanguage$pandac$ClassDecl** $tmp3116 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3117 = *$tmp3116;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3117));
panda$io$File** $tmp3118 = &param0->source;
panda$io$File* $tmp3119 = *$tmp3118;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3119));
return;

}

