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
typedef panda$core$Bit (*$fn239)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn244)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn248)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn253)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn391)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn393)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn420)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn422)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn449)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn451)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn478)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn480)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn507)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn509)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn613)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn617)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn622)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn693)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn750)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn754)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn759)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn837)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn841)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn846)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn879)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn883)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn888)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn957)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn961)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn966)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1013)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1017)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1022)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1063)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1067)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1072)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1115)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1119)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1124)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1156)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1160)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1165)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1182)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1186)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1191)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1302)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1306)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1311)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1339)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1343)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1348)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1362)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1366)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1371)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1403)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1407)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1412)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1462)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1466)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1471)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1521)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1554)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1558)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1563)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1608)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1622)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1626)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1631)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1672)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1703)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1967)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1971)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1976)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1989)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2005)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2044)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2048)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2053)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn2098)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn2116)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2122)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2126)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2131)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2162)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2209)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2213)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2218)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2252)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2279)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2283)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2288)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2300)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2315)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2328)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2342)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2352)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2386)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2395)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2406)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2439)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2448)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2461)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2465)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2470)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2478)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2524)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2528)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2533)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2545)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2575)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2662)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2666)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2671)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2801)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2833)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2837)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2842)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn3032)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn3047)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn3083)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3137)(org$pandalanguage$pandac$ASTNode*);

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
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, -5891455126768809117, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, -1200106393953033593, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, 17797457560281006, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 1798843608756893563, NULL };
static panda$core$String $s522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6d\x70\x6c\x65\x78\x69\x74\x79\x28\x6e\x6f\x64\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 133, -6414000039548560057, NULL };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s2308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x73\x63\x61\x6e\x28\x73\x6f\x75\x72\x63\x65\x3a\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x66\x69\x6c\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 193, 7895019779626162639, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 21
panda$core$Weak* $tmp2 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp2, ((panda$core$Object*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$core$Weak** $tmp3 = &param0->compiler;
panda$core$Weak* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Weak** $tmp5 = &param0->compiler;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.core.Weak<org.pandalanguage.pandac.Compiler>)
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
panda$core$Int64 $tmp8 = (panda$core$Int64) {43};
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$String* $tmp15 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
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
// unreffing REF($20:org.pandalanguage.pandac.Type)
panda$core$String* $tmp21 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
// unreffing name
*(&local1) = ((panda$core$String*) NULL);
return $tmp16;
block3:;
panda$core$Int64 $tmp22 = (panda$core$Int64) {30};
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
org$pandalanguage$pandac$ASTNode* $tmp29 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
*(&local3) = $tmp28;
// line 30
panda$collections$Array* $tmp30 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp30);
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$collections$Array* $tmp31 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
*(&local4) = $tmp30;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($54:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 31
panda$collections$Array* $tmp32 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp33 = *(&local3);
org$pandalanguage$pandac$Type* $tmp34 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp33);
panda$collections$Array$add$panda$collections$Array$T($tmp32, ((panda$core$Object*) $tmp34));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing REF($71:org.pandalanguage.pandac.Type)
// line 32
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($87:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp38);
// unreffing REF($82:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($78:org.pandalanguage.pandac.Type)
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
panda$core$Int64 $tmp50 = (panda$core$Int64) {20};
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
panda$core$String* $tmp57 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
*(&local6) = $tmp56;
panda$collections$ImmutableArray** $tmp58 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp59 = *$tmp58;
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
panda$collections$ImmutableArray* $tmp60 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
*(&local7) = $tmp59;
// line 35
panda$collections$Array* $tmp61 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp61);
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
panda$collections$Array* $tmp62 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
*(&local8) = $tmp61;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// unreffing REF($143:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 36
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp76)));
org$pandalanguage$pandac$ASTNode* $tmp77 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) $tmp76);
// line 37
panda$collections$Array* $tmp78 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp79 = *(&local9);
org$pandalanguage$pandac$Type* $tmp80 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp79);
panda$collections$Array$add$panda$collections$Array$T($tmp78, ((panda$core$Object*) $tmp80));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
// unreffing REF($184:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp76);
// unreffing REF($172:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp81 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// unreffing arg
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block10:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($161:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 39
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($212:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing REF($203:org.pandalanguage.pandac.Type)
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
panda$core$Int64 $tmp94 = (panda$core$Int64) {24};
panda$core$Bit $tmp95 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp7, $tmp94);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block11; else goto block12;
block11:;
org$pandalanguage$pandac$Position* $tmp97 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp98 = *$tmp97;
org$pandalanguage$pandac$IR$Value** $tmp99 = (org$pandalanguage$pandac$IR$Value**) (param1->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp100 = *$tmp99;
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
org$pandalanguage$pandac$IR$Value* $tmp101 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
*(&local10) = $tmp100;
// line 42
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
org$pandalanguage$pandac$Type* $tmp110 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
*(&local11) = $tmp109;
// line 44
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
// line 47
panda$core$Bit $tmp114 = panda$core$Bit$init$builtin_bit(false);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp116 = (panda$core$Int64) {47};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s117, $tmp116);
abort(); // unreachable
block15:;
org$pandalanguage$pandac$IR$Value* $tmp118 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing type
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block12:;
panda$core$Int64 $tmp119 = (panda$core$Int64) {28};
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
panda$collections$ImmutableArray* $tmp128 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
*(&local14) = $tmp127;
org$pandalanguage$pandac$ASTNode** $tmp129 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp130 = *$tmp129;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
org$pandalanguage$pandac$ASTNode* $tmp131 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
*(&local15) = $tmp130;
// line 50
// line 51
org$pandalanguage$pandac$parser$Token$Kind $tmp132 = *(&local13);
panda$core$Int64 $tmp133 = $tmp132.$rawValue;
panda$core$Int64 $tmp134 = (panda$core$Int64) {91};
panda$core$Bit $tmp135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp133, $tmp134);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block20; else goto block21;
block20:;
// line 53
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
// line 56
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
// line 59
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
// line 62
panda$core$Int64 $tmp152 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp153 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp152);
*(&local16) = $tmp153;
goto block19;
block27:;
// line 65
panda$core$Bit $tmp154 = panda$core$Bit$init$builtin_bit(false);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp156 = (panda$core$Int64) {65};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s157, $tmp156, &$s158);
abort(); // unreachable
block28:;
goto block19;
block19:;
// line 68
panda$collections$Array* $tmp159 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp159);
*(&local17) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
panda$collections$Array* $tmp160 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
*(&local17) = $tmp159;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
// unreffing REF($374:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 69
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp174)));
org$pandalanguage$pandac$ASTNode* $tmp175 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) $tmp174);
// line 70
panda$collections$Array* $tmp176 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp177 = *(&local18);
org$pandalanguage$pandac$Type* $tmp178 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp177);
panda$collections$Array$add$panda$collections$Array$T($tmp176, ((panda$core$Object*) $tmp178));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
// unreffing REF($415:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp174);
// unreffing REF($403:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp179 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
// unreffing p
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block30;
block32:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
// unreffing REF($392:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 72
*(&local19) = ((org$pandalanguage$pandac$Type*) NULL);
// line 73
org$pandalanguage$pandac$ASTNode* $tmp180 = *(&local15);
panda$core$Bit $tmp181 = panda$core$Bit$init$builtin_bit($tmp180 != NULL);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block33; else goto block35;
block33:;
// line 74
org$pandalanguage$pandac$ASTNode* $tmp183 = *(&local15);
org$pandalanguage$pandac$Type* $tmp184 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp183);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
org$pandalanguage$pandac$Type* $tmp185 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
*(&local19) = $tmp184;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
// unreffing REF($444:org.pandalanguage.pandac.Type)
goto block34;
block35:;
// line 1
// line 77
org$pandalanguage$pandac$Type* $tmp186 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
org$pandalanguage$pandac$Type* $tmp187 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
*(&local19) = $tmp186;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
// unreffing REF($457:org.pandalanguage.pandac.Type)
goto block34;
block34:;
// line 79
$fn189 $tmp188 = ($fn189) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp190 = $tmp188(param1);
org$pandalanguage$pandac$Type$Kind $tmp191 = *(&local16);
panda$collections$Array* $tmp192 = *(&local17);
panda$collections$ImmutableArray* $tmp193 = panda$collections$ImmutableArray$from$panda$collections$Array$LTpanda$collections$ImmutableArray$T$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT($tmp192);
org$pandalanguage$pandac$Type* $tmp194 = *(&local19);
panda$core$Int64 $tmp195 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp196 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp190, $tmp191, ((panda$collections$ListView*) $tmp193), $tmp194, $tmp195);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing REF($479:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
// unreffing REF($474:panda.collections.ImmutableArray<panda.collections.ImmutableArray.T>)
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
// line 83
panda$core$Bit $tmp201 = panda$core$Bit$init$builtin_bit(false);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp203 = (panda$core$Int64) {83};
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
// unreffing REF($521:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
// unreffing REF($520:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
// unreffing REF($519:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing REF($516:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing REF($515:panda.core.String)
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

// line 89
panda$core$Int64 $tmp220 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(param2, param3);
panda$core$Int64 $tmp221 = (panda$core$Int64) {0};
int64_t $tmp222 = $tmp220.value;
int64_t $tmp223 = $tmp221.value;
bool $tmp224 = $tmp222 != $tmp223;
panda$core$Bit $tmp225 = (panda$core$Bit) {$tmp224};
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block1; else goto block2;
block1:;
// line 90
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s227);
goto block2;
block2:;
// line 92
panda$core$Int64 $tmp228 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(param2, param3);
return $tmp228;

}
panda$core$Bit org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 99
panda$core$Bit $tmp229 = panda$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block1; else goto block2;
block1:;
// line 100
panda$core$Bit $tmp231 = panda$core$Bit$init$builtin_bit(true);
return $tmp231;
block2:;
// line 102
panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s233, param2);
panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s235);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp234);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
// unreffing REF($10:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing REF($9:panda.core.String)
// line 103
panda$core$Bit $tmp236 = panda$core$Bit$init$builtin_bit(false);
return $tmp236;

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
// line 96
panda$core$Int64 $tmp237 = (panda$core$Int64) {0};
*(&local0) = $tmp237;
// line 97
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
panda$collections$Array* $tmp238 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
*(&local1) = ((panda$collections$Array*) NULL);
// line 98
panda$core$Method* $tmp240 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp240, ((panda$core$Int8*) org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit), ((panda$core$Immutable*) NULL));
// line 98
*(&local2) = ((panda$core$Method*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
panda$core$Method* $tmp241 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
*(&local2) = $tmp240;
// line 105
ITable* $tmp242 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp242->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp242 = $tmp242->next;
}
$fn244 $tmp243 = $tmp242->methods[0];
panda$collections$Iterator* $tmp245 = $tmp243(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp246 = $tmp245->$class->itable;
while ($tmp246->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[0];
panda$core$Bit $tmp249 = $tmp247($tmp245);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block3; else goto block2;
block2:;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp251 = $tmp245->$class->itable;
while ($tmp251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[1];
panda$core$Object* $tmp254 = $tmp252($tmp245);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp254)));
org$pandalanguage$pandac$ASTNode* $tmp255 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) $tmp254);
// line 106
org$pandalanguage$pandac$ASTNode* $tmp256 = *(&local3);
panda$core$Int64* $tmp257 = &$tmp256->$rawValue;
panda$core$Int64 $tmp258 = *$tmp257;
panda$core$Int64 $tmp259 = (panda$core$Int64) {0};
panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp258, $tmp259);
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp262 = (org$pandalanguage$pandac$Position*) ($tmp256->$data + 0);
org$pandalanguage$pandac$Position $tmp263 = *$tmp262;
*(&local4) = $tmp263;
panda$core$String** $tmp264 = (panda$core$String**) ($tmp256->$data + 16);
panda$core$String* $tmp265 = *$tmp264;
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
panda$core$String* $tmp266 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
*(&local5) = $tmp265;
panda$core$String** $tmp267 = (panda$core$String**) ($tmp256->$data + 24);
panda$core$String* $tmp268 = *$tmp267;
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
panda$core$String* $tmp269 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
*(&local6) = $tmp268;
org$pandalanguage$pandac$ASTNode** $tmp270 = (org$pandalanguage$pandac$ASTNode**) ($tmp256->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp271 = *$tmp270;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
org$pandalanguage$pandac$ASTNode* $tmp272 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
*(&local7) = $tmp271;
// line 108
org$pandalanguage$pandac$ASTNode* $tmp273 = *(&local7);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
org$pandalanguage$pandac$ASTNode* $tmp274 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
*(&local8) = $tmp273;
// line 109
panda$core$String* $tmp275 = *(&local5);
panda$core$Bit $tmp276 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s277);
bool $tmp278 = $tmp276.value;
if ($tmp278) goto block8; else goto block9;
block8:;
// line 111
org$pandalanguage$pandac$Position $tmp279 = *(&local4);
panda$core$Int64 $tmp280 = *(&local0);
panda$core$Int64 $tmp281 = (panda$core$Int64) {2};
panda$core$Int64 $tmp282 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp279, $tmp280, $tmp281);
*(&local0) = $tmp282;
goto block7;
block9:;
panda$core$Bit $tmp283 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s284);
bool $tmp285 = $tmp283.value;
if ($tmp285) goto block10; else goto block11;
block10:;
// line 114
org$pandalanguage$pandac$Position $tmp286 = *(&local4);
panda$core$Int64 $tmp287 = *(&local0);
panda$core$Int64 $tmp288 = (panda$core$Int64) {4};
panda$core$Int64 $tmp289 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp286, $tmp287, $tmp288);
*(&local0) = $tmp289;
goto block7;
block11:;
panda$core$Bit $tmp290 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s291);
bool $tmp292 = $tmp290.value;
if ($tmp292) goto block12; else goto block13;
block12:;
// line 117
org$pandalanguage$pandac$Position $tmp293 = *(&local4);
panda$core$Int64 $tmp294 = *(&local0);
panda$core$Int64 $tmp295 = (panda$core$Int64) {8};
panda$core$Int64 $tmp296 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp293, $tmp294, $tmp295);
*(&local0) = $tmp296;
goto block7;
block13:;
panda$core$Bit $tmp297 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s298);
bool $tmp299 = $tmp297.value;
if ($tmp299) goto block14; else goto block15;
block14:;
// line 120
org$pandalanguage$pandac$Position $tmp300 = *(&local4);
panda$core$Int64 $tmp301 = *(&local0);
panda$core$Int64 $tmp302 = (panda$core$Int64) {16};
panda$core$Int64 $tmp303 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp300, $tmp301, $tmp302);
*(&local0) = $tmp303;
goto block7;
block15:;
panda$core$Bit $tmp304 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s305);
bool $tmp306 = $tmp304.value;
if ($tmp306) goto block16; else goto block17;
block16:;
// line 123
org$pandalanguage$pandac$Position $tmp307 = *(&local4);
panda$core$Int64 $tmp308 = *(&local0);
panda$core$Int64 $tmp309 = (panda$core$Int64) {32};
panda$core$Int64 $tmp310 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp307, $tmp308, $tmp309);
*(&local0) = $tmp310;
goto block7;
block17:;
panda$core$Bit $tmp311 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s312);
bool $tmp313 = $tmp311.value;
if ($tmp313) goto block18; else goto block19;
block18:;
// line 126
org$pandalanguage$pandac$Position $tmp314 = *(&local4);
panda$core$Int64 $tmp315 = *(&local0);
panda$core$Int64 $tmp316 = (panda$core$Int64) {64};
panda$core$Int64 $tmp317 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp314, $tmp315, $tmp316);
*(&local0) = $tmp317;
goto block7;
block19:;
panda$core$Bit $tmp318 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s319);
bool $tmp320 = $tmp318.value;
if ($tmp320) goto block20; else goto block21;
block20:;
// line 129
org$pandalanguage$pandac$Position $tmp321 = *(&local4);
panda$core$Int64 $tmp322 = *(&local0);
panda$core$Int64 $tmp323 = (panda$core$Int64) {128};
panda$core$Int64 $tmp324 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp321, $tmp322, $tmp323);
*(&local0) = $tmp324;
goto block7;
block21:;
panda$core$Bit $tmp325 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s326);
bool $tmp327 = $tmp325.value;
if ($tmp327) goto block22; else goto block23;
block22:;
// line 132
org$pandalanguage$pandac$Position $tmp328 = *(&local4);
panda$core$Int64 $tmp329 = *(&local0);
panda$core$Int64 $tmp330 = (panda$core$Int64) {256};
panda$core$Int64 $tmp331 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp328, $tmp329, $tmp330);
*(&local0) = $tmp331;
goto block7;
block23:;
panda$core$Bit $tmp332 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s333);
bool $tmp334 = $tmp332.value;
if ($tmp334) goto block24; else goto block25;
block24:;
// line 135
org$pandalanguage$pandac$Position $tmp335 = *(&local4);
panda$core$Int64 $tmp336 = *(&local0);
panda$core$Int64 $tmp337 = (panda$core$Int64) {512};
panda$core$Int64 $tmp338 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp335, $tmp336, $tmp337);
*(&local0) = $tmp338;
goto block7;
block25:;
panda$core$Bit $tmp339 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s340);
bool $tmp341 = $tmp339.value;
if ($tmp341) goto block26; else goto block27;
block26:;
// line 138
org$pandalanguage$pandac$Position $tmp342 = *(&local4);
panda$core$Int64 $tmp343 = *(&local0);
panda$core$Int64 $tmp344 = (panda$core$Int64) {1024};
panda$core$Int64 $tmp345 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp342, $tmp343, $tmp344);
*(&local0) = $tmp345;
goto block7;
block27:;
panda$core$Bit $tmp346 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s347);
bool $tmp348 = $tmp346.value;
if ($tmp348) goto block28; else goto block29;
block28:;
// line 141
org$pandalanguage$pandac$Position $tmp349 = *(&local4);
panda$core$Int64 $tmp350 = *(&local0);
panda$core$Int64 $tmp351 = (panda$core$Int64) {2048};
panda$core$Int64 $tmp352 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp349, $tmp350, $tmp351);
*(&local0) = $tmp352;
goto block7;
block29:;
panda$core$Bit $tmp353 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s354);
bool $tmp355 = $tmp353.value;
if ($tmp355) goto block30; else goto block31;
block30:;
// line 144
org$pandalanguage$pandac$Position $tmp356 = *(&local4);
panda$core$Int64 $tmp357 = *(&local0);
panda$core$Int64 $tmp358 = (panda$core$Int64) {4096};
panda$core$Int64 $tmp359 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp356, $tmp357, $tmp358);
*(&local0) = $tmp359;
goto block7;
block31:;
panda$core$Bit $tmp360 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s361);
bool $tmp362 = $tmp360.value;
if ($tmp362) goto block32; else goto block33;
block32:;
// line 147
org$pandalanguage$pandac$Position $tmp363 = *(&local4);
panda$core$Int64 $tmp364 = *(&local0);
panda$core$Int64 $tmp365 = (panda$core$Int64) {16384};
panda$core$Int64 $tmp366 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp363, $tmp364, $tmp365);
*(&local0) = $tmp366;
goto block7;
block33:;
panda$core$Bit $tmp367 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s368);
bool $tmp369 = $tmp367.value;
if ($tmp369) goto block34; else goto block35;
block34:;
// line 150
org$pandalanguage$pandac$Position $tmp370 = *(&local4);
panda$core$Int64 $tmp371 = *(&local0);
panda$core$Int64 $tmp372 = (panda$core$Int64) {32768};
panda$core$Int64 $tmp373 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp370, $tmp371, $tmp372);
*(&local0) = $tmp373;
goto block7;
block35:;
panda$core$Bit $tmp374 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s375);
bool $tmp376 = $tmp374.value;
if ($tmp376) goto block36; else goto block37;
block36:;
// line 153
panda$collections$Array* $tmp377 = *(&local1);
panda$core$Bit $tmp378 = panda$core$Bit$init$builtin_bit($tmp377 == NULL);
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block38; else goto block39;
block38:;
// line 154
panda$collections$Array* $tmp380 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp380);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
panda$collections$Array* $tmp381 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
*(&local1) = $tmp380;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
// unreffing REF($246:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block39;
block39:;
// line 156
panda$core$Method* $tmp382 = *(&local2);
org$pandalanguage$pandac$Position $tmp383 = *(&local4);
panda$core$String* $tmp384 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp385 = *(&local8);
panda$core$Int8** $tmp386 = &$tmp382->pointer;
panda$core$Int8* $tmp387 = *$tmp386;
panda$core$Immutable** $tmp388 = &$tmp382->target;
panda$core$Immutable* $tmp389 = *$tmp388;
bool $tmp390 = $tmp389 != ((panda$core$Immutable*) NULL);
if ($tmp390) goto block42; else goto block43;
block43:;
panda$core$Bit $tmp392 = (($fn391) $tmp387)(param0, $tmp383, $tmp384, $tmp385);
*(&local9) = $tmp392;
goto block44;
block42:;
panda$core$Bit $tmp394 = (($fn393) $tmp387)($tmp389, param0, $tmp383, $tmp384, $tmp385);
*(&local9) = $tmp394;
goto block44;
block44:;
panda$core$Bit $tmp395 = *(&local9);
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block40; else goto block41;
block40:;
// line 157
panda$collections$Array* $tmp397 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp398 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp399 = (panda$core$Int64) {0};
panda$core$String* $tmp400 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp401 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp398, $tmp399, $tmp400, $tmp401);
panda$collections$Array$add$panda$collections$Array$T($tmp397, ((panda$core$Object*) $tmp398));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
// unreffing REF($286:org.pandalanguage.pandac.Annotations.Expression)
// line 158
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp402 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block41;
block41:;
goto block7;
block37:;
panda$core$Bit $tmp403 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s404);
bool $tmp405 = $tmp403.value;
if ($tmp405) goto block45; else goto block46;
block45:;
// line 162
panda$collections$Array* $tmp406 = *(&local1);
panda$core$Bit $tmp407 = panda$core$Bit$init$builtin_bit($tmp406 == NULL);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block47; else goto block48;
block47:;
// line 163
panda$collections$Array* $tmp409 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp409);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
panda$collections$Array* $tmp410 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
*(&local1) = $tmp409;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
// unreffing REF($317:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block48;
block48:;
// line 165
panda$core$Method* $tmp411 = *(&local2);
org$pandalanguage$pandac$Position $tmp412 = *(&local4);
panda$core$String* $tmp413 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp414 = *(&local8);
panda$core$Int8** $tmp415 = &$tmp411->pointer;
panda$core$Int8* $tmp416 = *$tmp415;
panda$core$Immutable** $tmp417 = &$tmp411->target;
panda$core$Immutable* $tmp418 = *$tmp417;
bool $tmp419 = $tmp418 != ((panda$core$Immutable*) NULL);
if ($tmp419) goto block51; else goto block52;
block52:;
panda$core$Bit $tmp421 = (($fn420) $tmp416)(param0, $tmp412, $tmp413, $tmp414);
*(&local10) = $tmp421;
goto block53;
block51:;
panda$core$Bit $tmp423 = (($fn422) $tmp416)($tmp418, param0, $tmp412, $tmp413, $tmp414);
*(&local10) = $tmp423;
goto block53;
block53:;
panda$core$Bit $tmp424 = *(&local10);
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block49; else goto block50;
block49:;
// line 166
panda$collections$Array* $tmp426 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp427 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp428 = (panda$core$Int64) {1};
panda$core$String* $tmp429 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp430 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp427, $tmp428, $tmp429, $tmp430);
panda$collections$Array$add$panda$collections$Array$T($tmp426, ((panda$core$Object*) $tmp427));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
// unreffing REF($357:org.pandalanguage.pandac.Annotations.Expression)
// line 167
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp431 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block50;
block50:;
goto block7;
block46:;
panda$core$Bit $tmp432 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s433);
bool $tmp434 = $tmp432.value;
if ($tmp434) goto block54; else goto block55;
block54:;
// line 171
panda$collections$Array* $tmp435 = *(&local1);
panda$core$Bit $tmp436 = panda$core$Bit$init$builtin_bit($tmp435 == NULL);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block56; else goto block57;
block56:;
// line 172
panda$collections$Array* $tmp438 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp438);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
panda$collections$Array* $tmp439 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp439));
*(&local1) = $tmp438;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
// unreffing REF($388:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block57;
block57:;
// line 174
panda$core$Method* $tmp440 = *(&local2);
org$pandalanguage$pandac$Position $tmp441 = *(&local4);
panda$core$String* $tmp442 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp443 = *(&local8);
panda$core$Int8** $tmp444 = &$tmp440->pointer;
panda$core$Int8* $tmp445 = *$tmp444;
panda$core$Immutable** $tmp446 = &$tmp440->target;
panda$core$Immutable* $tmp447 = *$tmp446;
bool $tmp448 = $tmp447 != ((panda$core$Immutable*) NULL);
if ($tmp448) goto block60; else goto block61;
block61:;
panda$core$Bit $tmp450 = (($fn449) $tmp445)(param0, $tmp441, $tmp442, $tmp443);
*(&local11) = $tmp450;
goto block62;
block60:;
panda$core$Bit $tmp452 = (($fn451) $tmp445)($tmp447, param0, $tmp441, $tmp442, $tmp443);
*(&local11) = $tmp452;
goto block62;
block62:;
panda$core$Bit $tmp453 = *(&local11);
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block58; else goto block59;
block58:;
// line 175
panda$collections$Array* $tmp455 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp456 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp457 = (panda$core$Int64) {2};
panda$core$String* $tmp458 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp459 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp456, $tmp457, $tmp458, $tmp459);
panda$collections$Array$add$panda$collections$Array$T($tmp455, ((panda$core$Object*) $tmp456));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
// unreffing REF($428:org.pandalanguage.pandac.Annotations.Expression)
// line 176
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp460 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block59;
block59:;
goto block7;
block55:;
panda$core$Bit $tmp461 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s462);
bool $tmp463 = $tmp461.value;
if ($tmp463) goto block63; else goto block64;
block63:;
// line 180
panda$collections$Array* $tmp464 = *(&local1);
panda$core$Bit $tmp465 = panda$core$Bit$init$builtin_bit($tmp464 == NULL);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block65; else goto block66;
block65:;
// line 181
panda$collections$Array* $tmp467 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp467);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
panda$collections$Array* $tmp468 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
*(&local1) = $tmp467;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
// unreffing REF($459:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block66;
block66:;
// line 183
panda$core$Method* $tmp469 = *(&local2);
org$pandalanguage$pandac$Position $tmp470 = *(&local4);
panda$core$String* $tmp471 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp472 = *(&local8);
panda$core$Int8** $tmp473 = &$tmp469->pointer;
panda$core$Int8* $tmp474 = *$tmp473;
panda$core$Immutable** $tmp475 = &$tmp469->target;
panda$core$Immutable* $tmp476 = *$tmp475;
bool $tmp477 = $tmp476 != ((panda$core$Immutable*) NULL);
if ($tmp477) goto block69; else goto block70;
block70:;
panda$core$Bit $tmp479 = (($fn478) $tmp474)(param0, $tmp470, $tmp471, $tmp472);
*(&local12) = $tmp479;
goto block71;
block69:;
panda$core$Bit $tmp481 = (($fn480) $tmp474)($tmp476, param0, $tmp470, $tmp471, $tmp472);
*(&local12) = $tmp481;
goto block71;
block71:;
panda$core$Bit $tmp482 = *(&local12);
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block67; else goto block68;
block67:;
// line 184
panda$collections$Array* $tmp484 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp485 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp486 = (panda$core$Int64) {3};
panda$core$String* $tmp487 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp488 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp485, $tmp486, $tmp487, $tmp488);
panda$collections$Array$add$panda$collections$Array$T($tmp484, ((panda$core$Object*) $tmp485));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp485));
// unreffing REF($499:org.pandalanguage.pandac.Annotations.Expression)
// line 185
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp489 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block68;
block68:;
goto block7;
block64:;
panda$core$Bit $tmp490 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp275, &$s491);
bool $tmp492 = $tmp490.value;
if ($tmp492) goto block72; else goto block73;
block72:;
// line 189
panda$collections$Array* $tmp493 = *(&local1);
panda$core$Bit $tmp494 = panda$core$Bit$init$builtin_bit($tmp493 == NULL);
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block74; else goto block75;
block74:;
// line 190
panda$collections$Array* $tmp496 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp496);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
panda$collections$Array* $tmp497 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
*(&local1) = $tmp496;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
// unreffing REF($530:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block75;
block75:;
// line 192
panda$core$Method* $tmp498 = *(&local2);
org$pandalanguage$pandac$Position $tmp499 = *(&local4);
panda$core$String* $tmp500 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp501 = *(&local8);
panda$core$Int8** $tmp502 = &$tmp498->pointer;
panda$core$Int8* $tmp503 = *$tmp502;
panda$core$Immutable** $tmp504 = &$tmp498->target;
panda$core$Immutable* $tmp505 = *$tmp504;
bool $tmp506 = $tmp505 != ((panda$core$Immutable*) NULL);
if ($tmp506) goto block78; else goto block79;
block79:;
panda$core$Bit $tmp508 = (($fn507) $tmp503)(param0, $tmp499, $tmp500, $tmp501);
*(&local13) = $tmp508;
goto block80;
block78:;
panda$core$Bit $tmp510 = (($fn509) $tmp503)($tmp505, param0, $tmp499, $tmp500, $tmp501);
*(&local13) = $tmp510;
goto block80;
block80:;
panda$core$Bit $tmp511 = *(&local13);
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block76; else goto block77;
block76:;
// line 193
panda$collections$Array* $tmp513 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp514 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp515 = (panda$core$Int64) {4};
panda$core$String* $tmp516 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp517 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp514, $tmp515, $tmp516, $tmp517);
panda$collections$Array$add$panda$collections$Array$T($tmp513, ((panda$core$Object*) $tmp514));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
// unreffing REF($570:org.pandalanguage.pandac.Annotations.Expression)
// line 194
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp518 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block77;
block77:;
goto block7;
block73:;
// line 198
org$pandalanguage$pandac$Position $tmp519 = *(&local4);
panda$core$String* $tmp520 = *(&local5);
panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s522, $tmp520);
panda$core$String* $tmp523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp521, &$s524);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp519, $tmp523);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
// unreffing REF($595:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
// unreffing REF($594:panda.core.String)
goto block7;
block7:;
// line 201
org$pandalanguage$pandac$ASTNode* $tmp525 = *(&local8);
panda$core$Bit $tmp526 = panda$core$Bit$init$builtin_bit($tmp525 != NULL);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block81; else goto block82;
block81:;
// line 202
org$pandalanguage$pandac$Position $tmp528 = *(&local4);
panda$core$String* $tmp529 = *(&local5);
panda$core$String* $tmp530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s531, $tmp529);
panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp530, &$s533);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp528, $tmp532);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
// unreffing REF($614:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
// unreffing REF($613:panda.core.String)
goto block82;
block82:;
org$pandalanguage$pandac$ASTNode* $tmp534 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
// unreffing expr
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp535 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
// unreffing rawExpr
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp536 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
// unreffing exprText
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp537 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
// unreffing text
*(&local5) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 206
panda$core$Bit $tmp538 = panda$core$Bit$init$builtin_bit(false);
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block83; else goto block84;
block84:;
panda$core$Int64 $tmp540 = (panda$core$Int64) {206};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s541, $tmp540);
abort(); // unreachable
block83:;
goto block4;
block4:;
panda$core$Panda$unref$panda$core$Object$Q($tmp254);
// unreffing REF($39:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp542 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
// unreffing c
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
// unreffing REF($28:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 210
org$pandalanguage$pandac$Annotations* $tmp543 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp544 = *(&local0);
panda$collections$Array* $tmp545 = *(&local1);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp543, $tmp544, ((panda$collections$ListView*) $tmp545));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
// unreffing REF($665:org.pandalanguage.pandac.Annotations)
panda$core$Method* $tmp546 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
// unreffing checkExpression
*(&local2) = ((panda$core$Method*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing REF($13:panda.core.Method)
panda$collections$Array* $tmp547 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp543;

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
// line 215
*(&local0) = ((panda$core$String*) NULL);
// line 217
panda$core$Bit $tmp548 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block1; else goto block3;
block1:;
// line 218
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp550 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 221
panda$core$Int64* $tmp551 = &param3->$rawValue;
panda$core$Int64 $tmp552 = *$tmp551;
panda$core$Int64 $tmp553 = (panda$core$Int64) {39};
panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp552, $tmp553);
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp556 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp557 = *$tmp556;
*(&local1) = $tmp557;
panda$core$String** $tmp558 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp559 = *$tmp558;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
panda$core$String* $tmp560 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
*(&local2) = $tmp559;
// line 223
panda$core$String* $tmp561 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
panda$core$String* $tmp562 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
*(&local0) = $tmp561;
panda$core$String* $tmp563 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 226
panda$core$Bit $tmp564 = panda$core$Bit$init$builtin_bit(false);
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp566 = (panda$core$Int64) {226};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s567, $tmp566);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 230
org$pandalanguage$pandac$Annotations* $tmp568 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param4);
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
org$pandalanguage$pandac$Annotations* $tmp569 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp569));
*(&local3) = $tmp568;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
// unreffing REF($61:org.pandalanguage.pandac.Annotations)
// line 231
// line 232
panda$core$Int64* $tmp570 = &param5->$rawValue;
panda$core$Int64 $tmp571 = *$tmp570;
panda$core$Int64 $tmp572 = (panda$core$Int64) {48};
panda$core$Bit $tmp573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp571, $tmp572);
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp575 = (org$pandalanguage$pandac$Position*) (param5->$data + 0);
org$pandalanguage$pandac$Position $tmp576 = *$tmp575;
org$pandalanguage$pandac$Variable$Kind* $tmp577 = (org$pandalanguage$pandac$Variable$Kind*) (param5->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp578 = *$tmp577;
*(&local5) = $tmp578;
panda$collections$ImmutableArray** $tmp579 = (panda$collections$ImmutableArray**) (param5->$data + 24);
panda$collections$ImmutableArray* $tmp580 = *$tmp579;
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
panda$collections$ImmutableArray* $tmp581 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
*(&local6) = $tmp580;
// line 234
org$pandalanguage$pandac$Variable$Kind $tmp582 = *(&local5);
panda$core$Int64 $tmp583 = $tmp582.$rawValue;
panda$core$Int64 $tmp584 = (panda$core$Int64) {0};
panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp583, $tmp584);
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block13; else goto block14;
block13:;
// line 236
panda$core$Int64 $tmp587 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FieldDecl$Kind $tmp588 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp587);
*(&local4) = $tmp588;
goto block12;
block14:;
panda$core$Int64 $tmp589 = (panda$core$Int64) {1};
panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp583, $tmp589);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block15; else goto block16;
block15:;
// line 239
panda$core$Int64 $tmp592 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp593 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp592);
*(&local4) = $tmp593;
goto block12;
block16:;
panda$core$Int64 $tmp594 = (panda$core$Int64) {2};
panda$core$Bit $tmp595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp583, $tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block17; else goto block18;
block17:;
// line 242
panda$core$Int64 $tmp597 = (panda$core$Int64) {2};
org$pandalanguage$pandac$FieldDecl$Kind $tmp598 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp597);
*(&local4) = $tmp598;
// line 243
org$pandalanguage$pandac$Annotations* $tmp599 = *(&local3);
panda$core$Int64* $tmp600 = &$tmp599->flags;
panda$core$Int64 $tmp601 = *$tmp600;
panda$core$Int64 $tmp602 = (panda$core$Int64) {16};
panda$core$Int64 $tmp603 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp601, $tmp602);
panda$core$Int64* $tmp604 = &$tmp599->flags;
*$tmp604 = $tmp603;
goto block12;
block18:;
panda$core$Int64 $tmp605 = (panda$core$Int64) {3};
panda$core$Bit $tmp606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp583, $tmp605);
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block19; else goto block12;
block19:;
// line 246
panda$core$Int64 $tmp608 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp609 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp608);
*(&local4) = $tmp609;
goto block12;
block12:;
// line 249
panda$collections$ImmutableArray* $tmp610 = *(&local6);
ITable* $tmp611 = ((panda$collections$Iterable*) $tmp610)->$class->itable;
while ($tmp611->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp611 = $tmp611->next;
}
$fn613 $tmp612 = $tmp611->methods[0];
panda$collections$Iterator* $tmp614 = $tmp612(((panda$collections$Iterable*) $tmp610));
goto block20;
block20:;
ITable* $tmp615 = $tmp614->$class->itable;
while ($tmp615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp615 = $tmp615->next;
}
$fn617 $tmp616 = $tmp615->methods[0];
panda$core$Bit $tmp618 = $tmp616($tmp614);
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block22; else goto block21;
block21:;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp620 = $tmp614->$class->itable;
while ($tmp620->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp620 = $tmp620->next;
}
$fn622 $tmp621 = $tmp620->methods[1];
panda$core$Object* $tmp623 = $tmp621($tmp614);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp623)));
org$pandalanguage$pandac$ASTNode* $tmp624 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) $tmp623);
// line 250
org$pandalanguage$pandac$ASTNode* $tmp625 = *(&local7);
panda$core$Int64* $tmp626 = &$tmp625->$rawValue;
panda$core$Int64 $tmp627 = *$tmp626;
panda$core$Int64 $tmp628 = (panda$core$Int64) {14};
panda$core$Bit $tmp629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp627, $tmp628);
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp631 = (org$pandalanguage$pandac$Position*) ($tmp625->$data + 0);
org$pandalanguage$pandac$Position $tmp632 = *$tmp631;
*(&local8) = $tmp632;
org$pandalanguage$pandac$ASTNode** $tmp633 = (org$pandalanguage$pandac$ASTNode**) ($tmp625->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp634 = *$tmp633;
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
org$pandalanguage$pandac$ASTNode* $tmp635 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
*(&local9) = $tmp634;
org$pandalanguage$pandac$ASTNode** $tmp636 = (org$pandalanguage$pandac$ASTNode**) ($tmp625->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp637 = *$tmp636;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
org$pandalanguage$pandac$ASTNode* $tmp638 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
*(&local10) = $tmp637;
// line 252
*(&local11) = ((panda$core$String*) NULL);
// line 253
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
// line 254
org$pandalanguage$pandac$ASTNode* $tmp639 = *(&local9);
panda$core$Int64* $tmp640 = &$tmp639->$rawValue;
panda$core$Int64 $tmp641 = *$tmp640;
panda$core$Int64 $tmp642 = (panda$core$Int64) {21};
panda$core$Bit $tmp643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp641, $tmp642);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block27; else goto block28;
block27:;
org$pandalanguage$pandac$Position* $tmp645 = (org$pandalanguage$pandac$Position*) ($tmp639->$data + 0);
org$pandalanguage$pandac$Position $tmp646 = *$tmp645;
panda$core$String** $tmp647 = (panda$core$String**) ($tmp639->$data + 16);
panda$core$String* $tmp648 = *$tmp647;
*(&local13) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
panda$core$String* $tmp649 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
*(&local13) = $tmp648;
// line 256
panda$core$String* $tmp650 = *(&local13);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp650));
panda$core$String* $tmp651 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp651));
*(&local11) = $tmp650;
// line 257
org$pandalanguage$pandac$Type* $tmp652 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
org$pandalanguage$pandac$Type* $tmp653 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
*(&local12) = $tmp652;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
// unreffing REF($226:org.pandalanguage.pandac.Type)
panda$core$String* $tmp654 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
// unreffing id
*(&local13) = ((panda$core$String*) NULL);
goto block26;
block28:;
panda$core$Int64 $tmp655 = (panda$core$Int64) {45};
panda$core$Bit $tmp656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp641, $tmp655);
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block29; else goto block30;
block29:;
org$pandalanguage$pandac$Position* $tmp658 = (org$pandalanguage$pandac$Position*) ($tmp639->$data + 0);
org$pandalanguage$pandac$Position $tmp659 = *$tmp658;
panda$core$String** $tmp660 = (panda$core$String**) ($tmp639->$data + 16);
panda$core$String* $tmp661 = *$tmp660;
*(&local14) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp661));
panda$core$String* $tmp662 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
*(&local14) = $tmp661;
org$pandalanguage$pandac$ASTNode** $tmp663 = (org$pandalanguage$pandac$ASTNode**) ($tmp639->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp664 = *$tmp663;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
org$pandalanguage$pandac$ASTNode* $tmp665 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
*(&local15) = $tmp664;
// line 260
panda$core$String* $tmp666 = *(&local14);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
panda$core$String* $tmp667 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
*(&local11) = $tmp666;
// line 261
org$pandalanguage$pandac$ASTNode* $tmp668 = *(&local15);
org$pandalanguage$pandac$Type* $tmp669 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp668);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
org$pandalanguage$pandac$Type* $tmp670 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
*(&local12) = $tmp669;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
// unreffing REF($277:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$ASTNode* $tmp671 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
// unreffing idType
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp672 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
// unreffing id
*(&local14) = ((panda$core$String*) NULL);
goto block26;
block30:;
// line 264
panda$core$Bit $tmp673 = panda$core$Bit$init$builtin_bit(false);
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp675 = (panda$core$Int64) {264};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s676, $tmp675);
abort(); // unreachable
block31:;
goto block26;
block26:;
// line 267
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 268
org$pandalanguage$pandac$ASTNode* $tmp677 = *(&local10);
panda$core$Bit $tmp678 = panda$core$Bit$init$builtin_bit($tmp677 == NULL);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block35; else goto block36;
block35:;
org$pandalanguage$pandac$Annotations* $tmp680 = *(&local3);
panda$core$Bit $tmp681 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp680);
*(&local18) = $tmp681;
goto block37;
block36:;
*(&local18) = $tmp678;
goto block37;
block37:;
panda$core$Bit $tmp682 = *(&local18);
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Type* $tmp684 = *(&local12);
org$pandalanguage$pandac$Type$Kind* $tmp685 = &$tmp684->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp686 = *$tmp685;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp687;
$tmp687 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp687->value = $tmp686;
panda$core$Int64 $tmp688 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp689 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp688);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp690;
$tmp690 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp690->value = $tmp689;
ITable* $tmp691 = ((panda$core$Equatable*) $tmp687)->$class->itable;
while ($tmp691->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp691 = $tmp691->next;
}
$fn693 $tmp692 = $tmp691->methods[0];
panda$core$Bit $tmp694 = $tmp692(((panda$core$Equatable*) $tmp687), ((panda$core$Equatable*) $tmp690));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp690)));
// unreffing REF($330:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp687)));
// unreffing REF($326:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local17) = $tmp694;
goto block40;
block39:;
*(&local17) = $tmp682;
goto block40;
block40:;
panda$core$Bit $tmp695 = *(&local17);
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block33; else goto block41;
block33:;
// line 270
org$pandalanguage$pandac$ASTNode* $tmp697 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp698 = (panda$core$Int64) {29};
org$pandalanguage$pandac$Position $tmp699 = *(&local8);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp697, $tmp698, $tmp699);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
org$pandalanguage$pandac$ASTNode* $tmp700 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
*(&local16) = $tmp697;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
// unreffing REF($347:org.pandalanguage.pandac.ASTNode)
goto block34;
block41:;
// line 1
// line 273
org$pandalanguage$pandac$ASTNode* $tmp701 = *(&local10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
org$pandalanguage$pandac$ASTNode* $tmp702 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
*(&local16) = $tmp701;
goto block34;
block34:;
// line 275
org$pandalanguage$pandac$FieldDecl* $tmp703 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$Position $tmp704 = *(&local8);
panda$core$String* $tmp705 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp706 = *(&local3);
org$pandalanguage$pandac$FieldDecl$Kind $tmp707 = *(&local4);
panda$core$String* $tmp708 = *(&local11);
org$pandalanguage$pandac$Type* $tmp709 = *(&local12);
org$pandalanguage$pandac$ASTNode* $tmp710 = *(&local16);
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp703, param1, $tmp704, $tmp705, $tmp706, $tmp707, $tmp708, $tmp709, $tmp710);
*(&local19) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
org$pandalanguage$pandac$FieldDecl* $tmp711 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
*(&local19) = $tmp703;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
// unreffing REF($373:org.pandalanguage.pandac.FieldDecl)
// line 277
org$pandalanguage$pandac$SymbolTable** $tmp712 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp713 = *$tmp712;
org$pandalanguage$pandac$FieldDecl* $tmp714 = *(&local19);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp713, ((org$pandalanguage$pandac$Symbol*) $tmp714));
// line 278
panda$collections$Array** $tmp715 = &param1->fields;
panda$collections$Array* $tmp716 = *$tmp715;
org$pandalanguage$pandac$FieldDecl* $tmp717 = *(&local19);
panda$collections$Array$add$panda$collections$Array$T($tmp716, ((panda$core$Object*) $tmp717));
org$pandalanguage$pandac$FieldDecl* $tmp718 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp718));
// unreffing field
*(&local19) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp719 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
// unreffing value
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Type* $tmp720 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
// unreffing type
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp721 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp721));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp722 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp722));
// unreffing rawValue
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp723 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
// unreffing target
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block23;
block25:;
// line 281
panda$core$Bit $tmp724 = panda$core$Bit$init$builtin_bit(false);
bool $tmp725 = $tmp724.value;
if ($tmp725) goto block42; else goto block43;
block43:;
panda$core$Int64 $tmp726 = (panda$core$Int64) {281};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s727, $tmp726);
abort(); // unreachable
block42:;
goto block23;
block23:;
panda$core$Panda$unref$panda$core$Object$Q($tmp623);
// unreffing REF($157:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp728 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
// unreffing decl
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block20;
block22:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
// unreffing REF($146:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$ImmutableArray* $tmp729 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp729));
// unreffing decls
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
goto block9;
block11:;
// line 287
panda$core$Bit $tmp730 = panda$core$Bit$init$builtin_bit(false);
bool $tmp731 = $tmp730.value;
if ($tmp731) goto block44; else goto block45;
block45:;
panda$core$Int64 $tmp732 = (panda$core$Int64) {287};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s733, $tmp732);
abort(); // unreachable
block44:;
goto block9;
block9:;
org$pandalanguage$pandac$Annotations* $tmp734 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
// unreffing annotations
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp735 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp735));
// unreffing doccomment
*(&local0) = ((panda$core$String*) NULL);
return;

}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ASTNode* param1) {

panda$collections$ImmutableArray* local0 = NULL;
panda$core$Int64 local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
panda$collections$ImmutableArray* local6 = NULL;
panda$core$Int64 local7;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
org$pandalanguage$pandac$ASTNode* local9 = NULL;
panda$collections$ImmutableArray* local10 = NULL;
panda$core$Int64 local11;
org$pandalanguage$pandac$ASTNode* local12 = NULL;
org$pandalanguage$pandac$ASTNode* local13 = NULL;
org$pandalanguage$pandac$ASTNode* local14 = NULL;
panda$collections$ImmutableArray* local15 = NULL;
org$pandalanguage$pandac$ASTNode* local16 = NULL;
panda$core$Int64 local17;
org$pandalanguage$pandac$ASTNode* local18 = NULL;
org$pandalanguage$pandac$ASTNode* local19 = NULL;
org$pandalanguage$pandac$ASTNode* local20 = NULL;
panda$collections$ImmutableArray* local21 = NULL;
panda$core$Int64 local22;
org$pandalanguage$pandac$ASTNode* local23 = NULL;
org$pandalanguage$pandac$ASTNode* local24 = NULL;
panda$collections$ImmutableArray* local25 = NULL;
org$pandalanguage$pandac$ASTNode* local26 = NULL;
panda$core$Int64 local27;
org$pandalanguage$pandac$ASTNode* local28 = NULL;
panda$collections$ImmutableArray* local29 = NULL;
panda$core$Int64 local30;
org$pandalanguage$pandac$ASTNode* local31 = NULL;
org$pandalanguage$pandac$ASTNode* local32 = NULL;
panda$collections$ImmutableArray* local33 = NULL;
panda$collections$ImmutableArray* local34 = NULL;
panda$core$Int64 local35;
org$pandalanguage$pandac$ASTNode* local36 = NULL;
org$pandalanguage$pandac$ASTNode* local37 = NULL;
org$pandalanguage$pandac$ASTNode* local38 = NULL;
org$pandalanguage$pandac$ASTNode* local39 = NULL;
panda$collections$ImmutableArray* local40 = NULL;
panda$core$Int64 local41;
org$pandalanguage$pandac$ASTNode* local42 = NULL;
panda$collections$ImmutableArray* local43 = NULL;
panda$collections$ImmutableArray* local44 = NULL;
panda$core$Int64 local45;
org$pandalanguage$pandac$ASTNode* local46 = NULL;
org$pandalanguage$pandac$ASTNode* local47 = NULL;
org$pandalanguage$pandac$ASTNode* local48 = NULL;
panda$collections$ImmutableArray* local49 = NULL;
panda$core$Int64 local50;
org$pandalanguage$pandac$ASTNode* local51 = NULL;
// line 294
panda$core$Int64* $tmp736 = &param1->$rawValue;
panda$core$Int64 $tmp737 = *$tmp736;
panda$core$Int64 $tmp738 = (panda$core$Int64) {1};
panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp738);
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp741 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp742 = *$tmp741;
panda$collections$ImmutableArray** $tmp743 = (panda$collections$ImmutableArray**) (param1->$data + 16);
panda$collections$ImmutableArray* $tmp744 = *$tmp743;
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp744));
panda$collections$ImmutableArray* $tmp745 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
*(&local0) = $tmp744;
// line 296
panda$core$Int64 $tmp746 = (panda$core$Int64) {0};
*(&local1) = $tmp746;
// line 297
panda$collections$ImmutableArray* $tmp747 = *(&local0);
ITable* $tmp748 = ((panda$collections$Iterable*) $tmp747)->$class->itable;
while ($tmp748->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp748 = $tmp748->next;
}
$fn750 $tmp749 = $tmp748->methods[0];
panda$collections$Iterator* $tmp751 = $tmp749(((panda$collections$Iterable*) $tmp747));
goto block4;
block4:;
ITable* $tmp752 = $tmp751->$class->itable;
while ($tmp752->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp752 = $tmp752->next;
}
$fn754 $tmp753 = $tmp752->methods[0];
panda$core$Bit $tmp755 = $tmp753($tmp751);
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block6; else goto block5;
block5:;
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp757 = $tmp751->$class->itable;
while ($tmp757->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp757 = $tmp757->next;
}
$fn759 $tmp758 = $tmp757->methods[1];
panda$core$Object* $tmp760 = $tmp758($tmp751);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp760)));
org$pandalanguage$pandac$ASTNode* $tmp761 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp761));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) $tmp760);
// line 298
panda$core$Int64 $tmp762 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp763 = *(&local2);
panda$core$Int64 $tmp764 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp763);
int64_t $tmp765 = $tmp762.value;
int64_t $tmp766 = $tmp764.value;
int64_t $tmp767 = $tmp765 + $tmp766;
panda$core$Int64 $tmp768 = (panda$core$Int64) {$tmp767};
*(&local1) = $tmp768;
panda$core$Panda$unref$panda$core$Object$Q($tmp760);
// unreffing REF($37:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp769 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp769));
// unreffing e
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp751));
// unreffing REF($26:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 300
panda$core$Int64 $tmp770 = *(&local1);
panda$collections$ImmutableArray* $tmp771 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp771));
// unreffing elements
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
return $tmp770;
block3:;
panda$core$Int64 $tmp772 = (panda$core$Int64) {2};
panda$core$Bit $tmp773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp772);
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block7; else goto block8;
block7:;
org$pandalanguage$pandac$Position* $tmp775 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp776 = *$tmp775;
org$pandalanguage$pandac$ASTNode** $tmp777 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp778 = *$tmp777;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp778));
org$pandalanguage$pandac$ASTNode* $tmp779 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp779));
*(&local3) = $tmp778;
org$pandalanguage$pandac$ASTNode** $tmp780 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp781 = *$tmp780;
// line 303
org$pandalanguage$pandac$ASTNode* $tmp782 = *(&local3);
panda$core$Int64 $tmp783 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp782);
org$pandalanguage$pandac$ASTNode* $tmp784 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
// unreffing test
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp783;
block8:;
panda$core$Int64 $tmp785 = (panda$core$Int64) {3};
panda$core$Bit $tmp786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp785);
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block9; else goto block10;
block9:;
// line 306
panda$core$Int64 $tmp788 = (panda$core$Int64) {0};
return $tmp788;
block10:;
panda$core$Int64 $tmp789 = (panda$core$Int64) {4};
panda$core$Bit $tmp790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp789);
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block11; else goto block12;
block11:;
// line 309
panda$core$Int64 $tmp792 = (panda$core$Int64) {0};
return $tmp792;
block12:;
panda$core$Int64 $tmp793 = (panda$core$Int64) {5};
panda$core$Bit $tmp794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp793);
bool $tmp795 = $tmp794.value;
if ($tmp795) goto block13; else goto block14;
block13:;
org$pandalanguage$pandac$Position* $tmp796 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp797 = *$tmp796;
org$pandalanguage$pandac$ASTNode** $tmp798 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp799 = *$tmp798;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp799));
org$pandalanguage$pandac$ASTNode* $tmp800 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
*(&local4) = $tmp799;
org$pandalanguage$pandac$parser$Token$Kind* $tmp801 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp802 = *$tmp801;
org$pandalanguage$pandac$ASTNode** $tmp803 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp804 = *$tmp803;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
org$pandalanguage$pandac$ASTNode* $tmp805 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp805));
*(&local5) = $tmp804;
// line 312
panda$core$Int64 $tmp806 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode* $tmp807 = *(&local4);
panda$core$Int64 $tmp808 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp807);
int64_t $tmp809 = $tmp806.value;
int64_t $tmp810 = $tmp808.value;
int64_t $tmp811 = $tmp809 + $tmp810;
panda$core$Int64 $tmp812 = (panda$core$Int64) {$tmp811};
org$pandalanguage$pandac$ASTNode* $tmp813 = *(&local5);
panda$core$Int64 $tmp814 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp813);
int64_t $tmp815 = $tmp812.value;
int64_t $tmp816 = $tmp814.value;
int64_t $tmp817 = $tmp815 + $tmp816;
panda$core$Int64 $tmp818 = (panda$core$Int64) {$tmp817};
org$pandalanguage$pandac$ASTNode* $tmp819 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp819));
// unreffing right
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp820 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp820));
// unreffing left
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp818;
block14:;
panda$core$Int64 $tmp821 = (panda$core$Int64) {6};
panda$core$Bit $tmp822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp821);
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block15; else goto block16;
block15:;
// line 315
panda$core$Int64 $tmp824 = (panda$core$Int64) {1};
return $tmp824;
block16:;
panda$core$Int64 $tmp825 = (panda$core$Int64) {7};
panda$core$Bit $tmp826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp825);
bool $tmp827 = $tmp826.value;
if ($tmp827) goto block17; else goto block18;
block17:;
org$pandalanguage$pandac$Position* $tmp828 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp829 = *$tmp828;
panda$collections$ImmutableArray** $tmp830 = (panda$collections$ImmutableArray**) (param1->$data + 16);
panda$collections$ImmutableArray* $tmp831 = *$tmp830;
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp831));
panda$collections$ImmutableArray* $tmp832 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
*(&local6) = $tmp831;
// line 318
panda$core$Int64 $tmp833 = (panda$core$Int64) {0};
*(&local7) = $tmp833;
// line 319
panda$collections$ImmutableArray* $tmp834 = *(&local6);
ITable* $tmp835 = ((panda$collections$Iterable*) $tmp834)->$class->itable;
while ($tmp835->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp835 = $tmp835->next;
}
$fn837 $tmp836 = $tmp835->methods[0];
panda$collections$Iterator* $tmp838 = $tmp836(((panda$collections$Iterable*) $tmp834));
goto block19;
block19:;
ITable* $tmp839 = $tmp838->$class->itable;
while ($tmp839->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp839 = $tmp839->next;
}
$fn841 $tmp840 = $tmp839->methods[0];
panda$core$Bit $tmp842 = $tmp840($tmp838);
bool $tmp843 = $tmp842.value;
if ($tmp843) goto block21; else goto block20;
block20:;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp844 = $tmp838->$class->itable;
while ($tmp844->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp844 = $tmp844->next;
}
$fn846 $tmp845 = $tmp844->methods[1];
panda$core$Object* $tmp847 = $tmp845($tmp838);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp847)));
org$pandalanguage$pandac$ASTNode* $tmp848 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) $tmp847);
// line 320
panda$core$Int64 $tmp849 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp850 = *(&local8);
panda$core$Int64 $tmp851 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp850);
int64_t $tmp852 = $tmp849.value;
int64_t $tmp853 = $tmp851.value;
int64_t $tmp854 = $tmp852 + $tmp853;
panda$core$Int64 $tmp855 = (panda$core$Int64) {$tmp854};
*(&local7) = $tmp855;
panda$core$Panda$unref$panda$core$Object$Q($tmp847);
// unreffing REF($206:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp856 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
// unreffing s
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block19;
block21:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
// unreffing REF($195:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 322
panda$core$Int64 $tmp857 = *(&local7);
panda$collections$ImmutableArray* $tmp858 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
// unreffing statements
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
return $tmp857;
block18:;
panda$core$Int64 $tmp859 = (panda$core$Int64) {8};
panda$core$Bit $tmp860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp859);
bool $tmp861 = $tmp860.value;
if ($tmp861) goto block22; else goto block23;
block22:;
// line 325
panda$core$Int64 $tmp862 = (panda$core$Int64) {1};
return $tmp862;
block23:;
panda$core$Int64 $tmp863 = (panda$core$Int64) {9};
panda$core$Bit $tmp864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp863);
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp866 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp867 = *$tmp866;
org$pandalanguage$pandac$ASTNode** $tmp868 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp869 = *$tmp868;
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp869));
org$pandalanguage$pandac$ASTNode* $tmp870 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
*(&local9) = $tmp869;
panda$collections$ImmutableArray** $tmp871 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp872 = *$tmp871;
*(&local10) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
panda$collections$ImmutableArray* $tmp873 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp873));
*(&local10) = $tmp872;
// line 328
org$pandalanguage$pandac$ASTNode* $tmp874 = *(&local9);
panda$core$Int64 $tmp875 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp874);
*(&local11) = $tmp875;
// line 329
panda$collections$ImmutableArray* $tmp876 = *(&local10);
ITable* $tmp877 = ((panda$collections$Iterable*) $tmp876)->$class->itable;
while ($tmp877->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp877 = $tmp877->next;
}
$fn879 $tmp878 = $tmp877->methods[0];
panda$collections$Iterator* $tmp880 = $tmp878(((panda$collections$Iterable*) $tmp876));
goto block26;
block26:;
ITable* $tmp881 = $tmp880->$class->itable;
while ($tmp881->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp881 = $tmp881->next;
}
$fn883 $tmp882 = $tmp881->methods[0];
panda$core$Bit $tmp884 = $tmp882($tmp880);
bool $tmp885 = $tmp884.value;
if ($tmp885) goto block28; else goto block27;
block27:;
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp886 = $tmp880->$class->itable;
while ($tmp886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp886 = $tmp886->next;
}
$fn888 $tmp887 = $tmp886->methods[1];
panda$core$Object* $tmp889 = $tmp887($tmp880);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp889)));
org$pandalanguage$pandac$ASTNode* $tmp890 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp890));
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) $tmp889);
// line 330
panda$core$Int64 $tmp891 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp892 = *(&local12);
panda$core$Int64 $tmp893 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp892);
int64_t $tmp894 = $tmp891.value;
int64_t $tmp895 = $tmp893.value;
int64_t $tmp896 = $tmp894 + $tmp895;
panda$core$Int64 $tmp897 = (panda$core$Int64) {$tmp896};
*(&local11) = $tmp897;
panda$core$Panda$unref$panda$core$Object$Q($tmp889);
// unreffing REF($294:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp898 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp898));
// unreffing a
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block26;
block28:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp880));
// unreffing REF($283:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 332
panda$core$Int64 $tmp899 = *(&local11);
panda$collections$ImmutableArray* $tmp900 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp900));
// unreffing args
*(&local10) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp901 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp901));
// unreffing target
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp899;
block25:;
panda$core$Int64 $tmp902 = (panda$core$Int64) {11};
panda$core$Bit $tmp903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp902);
bool $tmp904 = $tmp903.value;
if ($tmp904) goto block29; else goto block30;
block29:;
org$pandalanguage$pandac$Position* $tmp905 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp906 = *$tmp905;
org$pandalanguage$pandac$ASTNode** $tmp907 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp908 = *$tmp907;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp908));
org$pandalanguage$pandac$ASTNode* $tmp909 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp909));
*(&local13) = $tmp908;
org$pandalanguage$pandac$ChoiceCase** $tmp910 = (org$pandalanguage$pandac$ChoiceCase**) (param1->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp911 = *$tmp910;
panda$core$Int64* $tmp912 = (panda$core$Int64*) (param1->$data + 32);
panda$core$Int64 $tmp913 = *$tmp912;
// line 335
org$pandalanguage$pandac$ASTNode* $tmp914 = *(&local13);
panda$core$Int64 $tmp915 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp914);
org$pandalanguage$pandac$ASTNode* $tmp916 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
// unreffing base
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp915;
block30:;
panda$core$Int64 $tmp917 = (panda$core$Int64) {13};
panda$core$Bit $tmp918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp917);
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block31; else goto block32;
block31:;
// line 338
panda$core$Int64 $tmp920 = (panda$core$Int64) {1};
return $tmp920;
block32:;
panda$core$Int64 $tmp921 = (panda$core$Int64) {14};
panda$core$Bit $tmp922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp921);
bool $tmp923 = $tmp922.value;
if ($tmp923) goto block33; else goto block34;
block33:;
org$pandalanguage$pandac$Position* $tmp924 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp925 = *$tmp924;
org$pandalanguage$pandac$ASTNode** $tmp926 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp927 = *$tmp926;
org$pandalanguage$pandac$ASTNode** $tmp928 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp929 = *$tmp928;
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
org$pandalanguage$pandac$ASTNode* $tmp930 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp930));
*(&local14) = $tmp929;
// line 341
org$pandalanguage$pandac$ASTNode* $tmp931 = *(&local14);
panda$core$Bit $tmp932 = panda$core$Bit$init$builtin_bit($tmp931 == NULL);
bool $tmp933 = $tmp932.value;
if ($tmp933) goto block35; else goto block36;
block35:;
// line 342
panda$core$Int64 $tmp934 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ASTNode* $tmp935 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
// unreffing value
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp934;
block36:;
// line 344
org$pandalanguage$pandac$ASTNode* $tmp936 = *(&local14);
panda$core$Int64 $tmp937 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp936);
org$pandalanguage$pandac$ASTNode* $tmp938 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp938));
// unreffing value
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp937;
block34:;
panda$core$Int64 $tmp939 = (panda$core$Int64) {15};
panda$core$Bit $tmp940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp939);
bool $tmp941 = $tmp940.value;
if ($tmp941) goto block37; else goto block38;
block37:;
org$pandalanguage$pandac$Position* $tmp942 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp943 = *$tmp942;
panda$core$String** $tmp944 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp945 = *$tmp944;
panda$collections$ImmutableArray** $tmp946 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp947 = *$tmp946;
*(&local15) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
panda$collections$ImmutableArray* $tmp948 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp948));
*(&local15) = $tmp947;
org$pandalanguage$pandac$ASTNode** $tmp949 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp950 = *$tmp949;
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
org$pandalanguage$pandac$ASTNode* $tmp951 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp951));
*(&local16) = $tmp950;
// line 347
org$pandalanguage$pandac$ASTNode* $tmp952 = *(&local16);
panda$core$Int64 $tmp953 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp952);
*(&local17) = $tmp953;
// line 348
panda$collections$ImmutableArray* $tmp954 = *(&local15);
ITable* $tmp955 = ((panda$collections$Iterable*) $tmp954)->$class->itable;
while ($tmp955->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp955 = $tmp955->next;
}
$fn957 $tmp956 = $tmp955->methods[0];
panda$collections$Iterator* $tmp958 = $tmp956(((panda$collections$Iterable*) $tmp954));
goto block39;
block39:;
ITable* $tmp959 = $tmp958->$class->itable;
while ($tmp959->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp959 = $tmp959->next;
}
$fn961 $tmp960 = $tmp959->methods[0];
panda$core$Bit $tmp962 = $tmp960($tmp958);
bool $tmp963 = $tmp962.value;
if ($tmp963) goto block41; else goto block40;
block40:;
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp964 = $tmp958->$class->itable;
while ($tmp964->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp964 = $tmp964->next;
}
$fn966 $tmp965 = $tmp964->methods[1];
panda$core$Object* $tmp967 = $tmp965($tmp958);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp967)));
org$pandalanguage$pandac$ASTNode* $tmp968 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp968));
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) $tmp967);
// line 349
panda$core$Int64 $tmp969 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp970 = *(&local18);
panda$core$Int64 $tmp971 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp970);
int64_t $tmp972 = $tmp969.value;
int64_t $tmp973 = $tmp971.value;
int64_t $tmp974 = $tmp972 + $tmp973;
panda$core$Int64 $tmp975 = (panda$core$Int64) {$tmp974};
*(&local17) = $tmp975;
panda$core$Panda$unref$panda$core$Object$Q($tmp967);
// unreffing REF($458:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp976 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp976));
// unreffing s
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block39;
block41:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp958));
// unreffing REF($447:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 351
panda$core$Int64 $tmp977 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp978 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp978));
// unreffing test
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp979 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp979));
// unreffing statements
*(&local15) = ((panda$collections$ImmutableArray*) NULL);
return $tmp977;
block38:;
panda$core$Int64 $tmp980 = (panda$core$Int64) {16};
panda$core$Bit $tmp981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp980);
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp983 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp984 = *$tmp983;
org$pandalanguage$pandac$ASTNode** $tmp985 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp986 = *$tmp985;
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
org$pandalanguage$pandac$ASTNode* $tmp987 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
*(&local19) = $tmp986;
panda$core$String** $tmp988 = (panda$core$String**) (param1->$data + 24);
panda$core$String* $tmp989 = *$tmp988;
// line 354
org$pandalanguage$pandac$ASTNode* $tmp990 = *(&local19);
panda$core$Int64 $tmp991 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp990);
org$pandalanguage$pandac$ASTNode* $tmp992 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
// unreffing base
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp991;
block43:;
panda$core$Int64 $tmp993 = (panda$core$Int64) {19};
panda$core$Bit $tmp994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp993);
bool $tmp995 = $tmp994.value;
if ($tmp995) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp996 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp997 = *$tmp996;
panda$core$String** $tmp998 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp999 = *$tmp998;
org$pandalanguage$pandac$ASTNode** $tmp1000 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1001 = *$tmp1000;
org$pandalanguage$pandac$ASTNode** $tmp1002 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1003 = *$tmp1002;
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1003));
org$pandalanguage$pandac$ASTNode* $tmp1004 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1004));
*(&local20) = $tmp1003;
panda$collections$ImmutableArray** $tmp1005 = (panda$collections$ImmutableArray**) (param1->$data + 40);
panda$collections$ImmutableArray* $tmp1006 = *$tmp1005;
*(&local21) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1006));
panda$collections$ImmutableArray* $tmp1007 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1007));
*(&local21) = $tmp1006;
// line 357
org$pandalanguage$pandac$ASTNode* $tmp1008 = *(&local20);
panda$core$Int64 $tmp1009 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1008);
*(&local22) = $tmp1009;
// line 358
panda$collections$ImmutableArray* $tmp1010 = *(&local21);
ITable* $tmp1011 = ((panda$collections$Iterable*) $tmp1010)->$class->itable;
while ($tmp1011->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1011 = $tmp1011->next;
}
$fn1013 $tmp1012 = $tmp1011->methods[0];
panda$collections$Iterator* $tmp1014 = $tmp1012(((panda$collections$Iterable*) $tmp1010));
goto block46;
block46:;
ITable* $tmp1015 = $tmp1014->$class->itable;
while ($tmp1015->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1015 = $tmp1015->next;
}
$fn1017 $tmp1016 = $tmp1015->methods[0];
panda$core$Bit $tmp1018 = $tmp1016($tmp1014);
bool $tmp1019 = $tmp1018.value;
if ($tmp1019) goto block48; else goto block47;
block47:;
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1020 = $tmp1014->$class->itable;
while ($tmp1020->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1020 = $tmp1020->next;
}
$fn1022 $tmp1021 = $tmp1020->methods[1];
panda$core$Object* $tmp1023 = $tmp1021($tmp1014);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1023)));
org$pandalanguage$pandac$ASTNode* $tmp1024 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1024));
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) $tmp1023);
// line 359
panda$core$Int64 $tmp1025 = *(&local22);
org$pandalanguage$pandac$ASTNode* $tmp1026 = *(&local23);
panda$core$Int64 $tmp1027 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1026);
int64_t $tmp1028 = $tmp1025.value;
int64_t $tmp1029 = $tmp1027.value;
int64_t $tmp1030 = $tmp1028 + $tmp1029;
panda$core$Int64 $tmp1031 = (panda$core$Int64) {$tmp1030};
*(&local22) = $tmp1031;
panda$core$Panda$unref$panda$core$Object$Q($tmp1023);
// unreffing REF($574:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1032 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1032));
// unreffing s
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block46;
block48:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
// unreffing REF($563:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 361
panda$core$Int64 $tmp1033 = *(&local22);
panda$collections$ImmutableArray* $tmp1034 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1034));
// unreffing statements
*(&local21) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1035 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1035));
// unreffing list
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1033;
block45:;
panda$core$Int64 $tmp1036 = (panda$core$Int64) {20};
panda$core$Bit $tmp1037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1036);
bool $tmp1038 = $tmp1037.value;
if ($tmp1038) goto block49; else goto block50;
block49:;
// line 364
panda$core$Int64 $tmp1039 = (panda$core$Int64) {0};
return $tmp1039;
block50:;
panda$core$Int64 $tmp1040 = (panda$core$Int64) {21};
panda$core$Bit $tmp1041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1040);
bool $tmp1042 = $tmp1041.value;
if ($tmp1042) goto block51; else goto block52;
block51:;
// line 367
panda$core$Int64 $tmp1043 = (panda$core$Int64) {1};
return $tmp1043;
block52:;
panda$core$Int64 $tmp1044 = (panda$core$Int64) {22};
panda$core$Bit $tmp1045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1044);
bool $tmp1046 = $tmp1045.value;
if ($tmp1046) goto block53; else goto block54;
block53:;
org$pandalanguage$pandac$Position* $tmp1047 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1048 = *$tmp1047;
org$pandalanguage$pandac$ASTNode** $tmp1049 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1050 = *$tmp1049;
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
org$pandalanguage$pandac$ASTNode* $tmp1051 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
*(&local24) = $tmp1050;
panda$collections$ImmutableArray** $tmp1052 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1053 = *$tmp1052;
*(&local25) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
panda$collections$ImmutableArray* $tmp1054 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1054));
*(&local25) = $tmp1053;
org$pandalanguage$pandac$ASTNode** $tmp1055 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1056 = *$tmp1055;
*(&local26) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1056));
org$pandalanguage$pandac$ASTNode* $tmp1057 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1057));
*(&local26) = $tmp1056;
// line 370
org$pandalanguage$pandac$ASTNode* $tmp1058 = *(&local24);
panda$core$Int64 $tmp1059 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1058);
*(&local27) = $tmp1059;
// line 371
panda$collections$ImmutableArray* $tmp1060 = *(&local25);
ITable* $tmp1061 = ((panda$collections$Iterable*) $tmp1060)->$class->itable;
while ($tmp1061->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1061 = $tmp1061->next;
}
$fn1063 $tmp1062 = $tmp1061->methods[0];
panda$collections$Iterator* $tmp1064 = $tmp1062(((panda$collections$Iterable*) $tmp1060));
goto block55;
block55:;
ITable* $tmp1065 = $tmp1064->$class->itable;
while ($tmp1065->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1065 = $tmp1065->next;
}
$fn1067 $tmp1066 = $tmp1065->methods[0];
panda$core$Bit $tmp1068 = $tmp1066($tmp1064);
bool $tmp1069 = $tmp1068.value;
if ($tmp1069) goto block57; else goto block56;
block56:;
*(&local28) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1070 = $tmp1064->$class->itable;
while ($tmp1070->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1070 = $tmp1070->next;
}
$fn1072 $tmp1071 = $tmp1070->methods[1];
panda$core$Object* $tmp1073 = $tmp1071($tmp1064);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1073)));
org$pandalanguage$pandac$ASTNode* $tmp1074 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1074));
*(&local28) = ((org$pandalanguage$pandac$ASTNode*) $tmp1073);
// line 372
panda$core$Int64 $tmp1075 = *(&local27);
org$pandalanguage$pandac$ASTNode* $tmp1076 = *(&local28);
panda$core$Int64 $tmp1077 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1076);
int64_t $tmp1078 = $tmp1075.value;
int64_t $tmp1079 = $tmp1077.value;
int64_t $tmp1080 = $tmp1078 + $tmp1079;
panda$core$Int64 $tmp1081 = (panda$core$Int64) {$tmp1080};
*(&local27) = $tmp1081;
panda$core$Panda$unref$panda$core$Object$Q($tmp1073);
// unreffing REF($683:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1082 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
// unreffing s
*(&local28) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block55;
block57:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1064));
// unreffing REF($672:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 374
org$pandalanguage$pandac$ASTNode* $tmp1083 = *(&local26);
panda$core$Bit $tmp1084 = panda$core$Bit$init$builtin_bit($tmp1083 != NULL);
bool $tmp1085 = $tmp1084.value;
if ($tmp1085) goto block58; else goto block59;
block58:;
// line 375
panda$core$Int64 $tmp1086 = *(&local27);
org$pandalanguage$pandac$ASTNode* $tmp1087 = *(&local26);
panda$core$Int64 $tmp1088 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1087);
int64_t $tmp1089 = $tmp1086.value;
int64_t $tmp1090 = $tmp1088.value;
int64_t $tmp1091 = $tmp1089 + $tmp1090;
panda$core$Int64 $tmp1092 = (panda$core$Int64) {$tmp1091};
*(&local27) = $tmp1092;
goto block59;
block59:;
// line 377
panda$core$Int64 $tmp1093 = *(&local27);
org$pandalanguage$pandac$ASTNode* $tmp1094 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1094));
// unreffing ifFalse
*(&local26) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1095 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1095));
// unreffing ifTrue
*(&local25) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1096 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1096));
// unreffing test
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1093;
block54:;
panda$core$Int64 $tmp1097 = (panda$core$Int64) {23};
panda$core$Bit $tmp1098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1097);
bool $tmp1099 = $tmp1098.value;
if ($tmp1099) goto block60; else goto block61;
block60:;
// line 380
panda$core$Int64 $tmp1100 = (panda$core$Int64) {1};
return $tmp1100;
block61:;
panda$core$Int64 $tmp1101 = (panda$core$Int64) {25};
panda$core$Bit $tmp1102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1101);
bool $tmp1103 = $tmp1102.value;
if ($tmp1103) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$Position* $tmp1104 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1105 = *$tmp1104;
panda$core$String** $tmp1106 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp1107 = *$tmp1106;
panda$collections$ImmutableArray** $tmp1108 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1109 = *$tmp1108;
*(&local29) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
panda$collections$ImmutableArray* $tmp1110 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1110));
*(&local29) = $tmp1109;
// line 383
panda$core$Int64 $tmp1111 = (panda$core$Int64) {0};
*(&local30) = $tmp1111;
// line 384
panda$collections$ImmutableArray* $tmp1112 = *(&local29);
ITable* $tmp1113 = ((panda$collections$Iterable*) $tmp1112)->$class->itable;
while ($tmp1113->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1113 = $tmp1113->next;
}
$fn1115 $tmp1114 = $tmp1113->methods[0];
panda$collections$Iterator* $tmp1116 = $tmp1114(((panda$collections$Iterable*) $tmp1112));
goto block64;
block64:;
ITable* $tmp1117 = $tmp1116->$class->itable;
while ($tmp1117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1117 = $tmp1117->next;
}
$fn1119 $tmp1118 = $tmp1117->methods[0];
panda$core$Bit $tmp1120 = $tmp1118($tmp1116);
bool $tmp1121 = $tmp1120.value;
if ($tmp1121) goto block66; else goto block65;
block65:;
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1122 = $tmp1116->$class->itable;
while ($tmp1122->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1122 = $tmp1122->next;
}
$fn1124 $tmp1123 = $tmp1122->methods[1];
panda$core$Object* $tmp1125 = $tmp1123($tmp1116);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1125)));
org$pandalanguage$pandac$ASTNode* $tmp1126 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1126));
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) $tmp1125);
// line 385
panda$core$Int64 $tmp1127 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp1128 = *(&local31);
panda$core$Int64 $tmp1129 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1128);
int64_t $tmp1130 = $tmp1127.value;
int64_t $tmp1131 = $tmp1129.value;
int64_t $tmp1132 = $tmp1130 + $tmp1131;
panda$core$Int64 $tmp1133 = (panda$core$Int64) {$tmp1132};
*(&local30) = $tmp1133;
panda$core$Panda$unref$panda$core$Object$Q($tmp1125);
// unreffing REF($790:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1134 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1134));
// unreffing s
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block64;
block66:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1116));
// unreffing REF($779:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 387
panda$core$Int64 $tmp1135 = *(&local30);
panda$collections$ImmutableArray* $tmp1136 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1136));
// unreffing statements
*(&local29) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1135;
block63:;
panda$core$Int64 $tmp1137 = (panda$core$Int64) {26};
panda$core$Bit $tmp1138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1137);
bool $tmp1139 = $tmp1138.value;
if ($tmp1139) goto block67; else goto block68;
block67:;
org$pandalanguage$pandac$Position* $tmp1140 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1141 = *$tmp1140;
org$pandalanguage$pandac$ASTNode** $tmp1142 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1143 = *$tmp1142;
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1143));
org$pandalanguage$pandac$ASTNode* $tmp1144 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1144));
*(&local32) = $tmp1143;
panda$collections$ImmutableArray** $tmp1145 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1146 = *$tmp1145;
*(&local33) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
panda$collections$ImmutableArray* $tmp1147 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1147));
*(&local33) = $tmp1146;
panda$collections$ImmutableArray** $tmp1148 = (panda$collections$ImmutableArray**) (param1->$data + 32);
panda$collections$ImmutableArray* $tmp1149 = *$tmp1148;
*(&local34) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
panda$collections$ImmutableArray* $tmp1150 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1150));
*(&local34) = $tmp1149;
// line 390
org$pandalanguage$pandac$ASTNode* $tmp1151 = *(&local32);
panda$core$Int64 $tmp1152 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1151);
*(&local35) = $tmp1152;
// line 391
panda$collections$ImmutableArray* $tmp1153 = *(&local33);
ITable* $tmp1154 = ((panda$collections$Iterable*) $tmp1153)->$class->itable;
while ($tmp1154->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1154 = $tmp1154->next;
}
$fn1156 $tmp1155 = $tmp1154->methods[0];
panda$collections$Iterator* $tmp1157 = $tmp1155(((panda$collections$Iterable*) $tmp1153));
goto block69;
block69:;
ITable* $tmp1158 = $tmp1157->$class->itable;
while ($tmp1158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1158 = $tmp1158->next;
}
$fn1160 $tmp1159 = $tmp1158->methods[0];
panda$core$Bit $tmp1161 = $tmp1159($tmp1157);
bool $tmp1162 = $tmp1161.value;
if ($tmp1162) goto block71; else goto block70;
block70:;
*(&local36) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1163 = $tmp1157->$class->itable;
while ($tmp1163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1163 = $tmp1163->next;
}
$fn1165 $tmp1164 = $tmp1163->methods[1];
panda$core$Object* $tmp1166 = $tmp1164($tmp1157);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1166)));
org$pandalanguage$pandac$ASTNode* $tmp1167 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
*(&local36) = ((org$pandalanguage$pandac$ASTNode*) $tmp1166);
// line 392
panda$core$Int64 $tmp1168 = *(&local35);
org$pandalanguage$pandac$ASTNode* $tmp1169 = *(&local36);
panda$core$Int64 $tmp1170 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1169);
int64_t $tmp1171 = $tmp1168.value;
int64_t $tmp1172 = $tmp1170.value;
int64_t $tmp1173 = $tmp1171 + $tmp1172;
panda$core$Int64 $tmp1174 = (panda$core$Int64) {$tmp1173};
*(&local35) = $tmp1174;
panda$core$Panda$unref$panda$core$Object$Q($tmp1166);
// unreffing REF($880:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1175 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1175));
// unreffing w
*(&local36) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block69;
block71:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
// unreffing REF($869:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 394
panda$collections$ImmutableArray* $tmp1176 = *(&local34);
panda$core$Bit $tmp1177 = panda$core$Bit$init$builtin_bit($tmp1176 != NULL);
bool $tmp1178 = $tmp1177.value;
if ($tmp1178) goto block72; else goto block73;
block72:;
// line 395
panda$collections$ImmutableArray* $tmp1179 = *(&local34);
ITable* $tmp1180 = ((panda$collections$Iterable*) $tmp1179)->$class->itable;
while ($tmp1180->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1180 = $tmp1180->next;
}
$fn1182 $tmp1181 = $tmp1180->methods[0];
panda$collections$Iterator* $tmp1183 = $tmp1181(((panda$collections$Iterable*) $tmp1179));
goto block74;
block74:;
ITable* $tmp1184 = $tmp1183->$class->itable;
while ($tmp1184->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1184 = $tmp1184->next;
}
$fn1186 $tmp1185 = $tmp1184->methods[0];
panda$core$Bit $tmp1187 = $tmp1185($tmp1183);
bool $tmp1188 = $tmp1187.value;
if ($tmp1188) goto block76; else goto block75;
block75:;
*(&local37) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1189 = $tmp1183->$class->itable;
while ($tmp1189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1189 = $tmp1189->next;
}
$fn1191 $tmp1190 = $tmp1189->methods[1];
panda$core$Object* $tmp1192 = $tmp1190($tmp1183);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1192)));
org$pandalanguage$pandac$ASTNode* $tmp1193 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
*(&local37) = ((org$pandalanguage$pandac$ASTNode*) $tmp1192);
// line 396
panda$core$Int64 $tmp1194 = *(&local35);
org$pandalanguage$pandac$ASTNode* $tmp1195 = *(&local37);
panda$core$Int64 $tmp1196 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1195);
int64_t $tmp1197 = $tmp1194.value;
int64_t $tmp1198 = $tmp1196.value;
int64_t $tmp1199 = $tmp1197 + $tmp1198;
panda$core$Int64 $tmp1200 = (panda$core$Int64) {$tmp1199};
*(&local35) = $tmp1200;
panda$core$Panda$unref$panda$core$Object$Q($tmp1192);
// unreffing REF($931:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1201 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1201));
// unreffing s
*(&local37) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block74;
block76:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1183));
// unreffing REF($920:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block73;
block73:;
// line 399
panda$core$Int64 $tmp1202 = *(&local35);
panda$collections$ImmutableArray* $tmp1203 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1203));
// unreffing other
*(&local34) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1204 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1204));
// unreffing whens
*(&local33) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1205 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1205));
// unreffing value
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1202;
block68:;
panda$core$Int64 $tmp1206 = (panda$core$Int64) {27};
panda$core$Bit $tmp1207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1206);
bool $tmp1208 = $tmp1207.value;
if ($tmp1208) goto block77; else goto block78;
block77:;
// line 402
panda$core$Int64 $tmp1209 = (panda$core$Int64) {10};
return $tmp1209;
block78:;
panda$core$Int64 $tmp1210 = (panda$core$Int64) {29};
panda$core$Bit $tmp1211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1210);
bool $tmp1212 = $tmp1211.value;
if ($tmp1212) goto block79; else goto block80;
block79:;
// line 405
panda$core$Int64 $tmp1213 = (panda$core$Int64) {1};
return $tmp1213;
block80:;
panda$core$Int64 $tmp1214 = (panda$core$Int64) {30};
panda$core$Bit $tmp1215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1214);
bool $tmp1216 = $tmp1215.value;
if ($tmp1216) goto block81; else goto block82;
block81:;
// line 408
panda$core$Int64 $tmp1217 = (panda$core$Int64) {0};
return $tmp1217;
block82:;
panda$core$Int64 $tmp1218 = (panda$core$Int64) {33};
panda$core$Bit $tmp1219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1218);
bool $tmp1220 = $tmp1219.value;
if ($tmp1220) goto block83; else goto block84;
block83:;
org$pandalanguage$pandac$Position* $tmp1221 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1222 = *$tmp1221;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1223 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1224 = *$tmp1223;
org$pandalanguage$pandac$ASTNode** $tmp1225 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1226 = *$tmp1225;
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1226));
org$pandalanguage$pandac$ASTNode* $tmp1227 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1227));
*(&local38) = $tmp1226;
// line 411
panda$core$Int64 $tmp1228 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode* $tmp1229 = *(&local38);
panda$core$Int64 $tmp1230 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1229);
int64_t $tmp1231 = $tmp1228.value;
int64_t $tmp1232 = $tmp1230.value;
int64_t $tmp1233 = $tmp1231 + $tmp1232;
panda$core$Int64 $tmp1234 = (panda$core$Int64) {$tmp1233};
org$pandalanguage$pandac$ASTNode* $tmp1235 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1235));
// unreffing base
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1234;
block84:;
panda$core$Int64 $tmp1236 = (panda$core$Int64) {34};
panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1236);
bool $tmp1238 = $tmp1237.value;
if ($tmp1238) goto block85; else goto block86;
block85:;
// line 414
panda$core$Int64 $tmp1239 = (panda$core$Int64) {1};
return $tmp1239;
block86:;
panda$core$Int64 $tmp1240 = (panda$core$Int64) {35};
panda$core$Bit $tmp1241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1240);
bool $tmp1242 = $tmp1241.value;
if ($tmp1242) goto block87; else goto block88;
block87:;
// line 417
panda$core$Int64 $tmp1243 = (panda$core$Int64) {1};
return $tmp1243;
block88:;
panda$core$Int64 $tmp1244 = (panda$core$Int64) {36};
panda$core$Bit $tmp1245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1244);
bool $tmp1246 = $tmp1245.value;
if ($tmp1246) goto block89; else goto block90;
block89:;
// line 420
panda$core$Int64 $tmp1247 = (panda$core$Int64) {1};
return $tmp1247;
block90:;
panda$core$Int64 $tmp1248 = (panda$core$Int64) {37};
panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1248);
bool $tmp1250 = $tmp1249.value;
if ($tmp1250) goto block91; else goto block92;
block91:;
org$pandalanguage$pandac$Position* $tmp1251 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1252 = *$tmp1251;
org$pandalanguage$pandac$ASTNode** $tmp1253 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1254 = *$tmp1253;
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1254));
org$pandalanguage$pandac$ASTNode* $tmp1255 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1255));
*(&local39) = $tmp1254;
// line 423
org$pandalanguage$pandac$ASTNode* $tmp1256 = *(&local39);
panda$core$Bit $tmp1257 = panda$core$Bit$init$builtin_bit($tmp1256 == NULL);
bool $tmp1258 = $tmp1257.value;
if ($tmp1258) goto block93; else goto block94;
block93:;
// line 424
panda$core$Int64 $tmp1259 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ASTNode* $tmp1260 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1260));
// unreffing value
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1259;
block94:;
// line 426
org$pandalanguage$pandac$ASTNode* $tmp1261 = *(&local39);
panda$core$Int64 $tmp1262 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1261);
org$pandalanguage$pandac$ASTNode* $tmp1263 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
// unreffing value
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1262;
block92:;
panda$core$Int64 $tmp1264 = (panda$core$Int64) {38};
panda$core$Bit $tmp1265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1264);
bool $tmp1266 = $tmp1265.value;
if ($tmp1266) goto block95; else goto block96;
block95:;
// line 429
panda$core$Int64 $tmp1267 = (panda$core$Int64) {1};
return $tmp1267;
block96:;
panda$core$Int64 $tmp1268 = (panda$core$Int64) {39};
panda$core$Bit $tmp1269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1268);
bool $tmp1270 = $tmp1269.value;
if ($tmp1270) goto block97; else goto block98;
block97:;
// line 432
panda$core$Int64 $tmp1271 = (panda$core$Int64) {1};
return $tmp1271;
block98:;
panda$core$Int64 $tmp1272 = (panda$core$Int64) {40};
panda$core$Bit $tmp1273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1272);
bool $tmp1274 = $tmp1273.value;
if ($tmp1274) goto block99; else goto block100;
block99:;
// line 435
panda$core$Int64 $tmp1275 = (panda$core$Int64) {1};
return $tmp1275;
block100:;
panda$core$Int64 $tmp1276 = (panda$core$Int64) {43};
panda$core$Bit $tmp1277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1276);
bool $tmp1278 = $tmp1277.value;
if ($tmp1278) goto block101; else goto block102;
block101:;
// line 438
panda$core$Int64 $tmp1279 = (panda$core$Int64) {0};
return $tmp1279;
block102:;
panda$core$Int64 $tmp1280 = (panda$core$Int64) {44};
panda$core$Bit $tmp1281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1280);
bool $tmp1282 = $tmp1281.value;
if ($tmp1282) goto block103; else goto block104;
block103:;
// line 441
panda$core$Int64 $tmp1283 = (panda$core$Int64) {10};
return $tmp1283;
block104:;
panda$core$Int64 $tmp1284 = (panda$core$Int64) {46};
panda$core$Bit $tmp1285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1284);
bool $tmp1286 = $tmp1285.value;
if ($tmp1286) goto block105; else goto block106;
block105:;
// line 444
panda$core$Int64 $tmp1287 = (panda$core$Int64) {10};
return $tmp1287;
block106:;
panda$core$Int64 $tmp1288 = (panda$core$Int64) {48};
panda$core$Bit $tmp1289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1288);
bool $tmp1290 = $tmp1289.value;
if ($tmp1290) goto block107; else goto block108;
block107:;
org$pandalanguage$pandac$Position* $tmp1291 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1292 = *$tmp1291;
org$pandalanguage$pandac$Variable$Kind* $tmp1293 = (org$pandalanguage$pandac$Variable$Kind*) (param1->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp1294 = *$tmp1293;
panda$collections$ImmutableArray** $tmp1295 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1296 = *$tmp1295;
*(&local40) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1296));
panda$collections$ImmutableArray* $tmp1297 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1297));
*(&local40) = $tmp1296;
// line 447
panda$core$Int64 $tmp1298 = (panda$core$Int64) {0};
*(&local41) = $tmp1298;
// line 448
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
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1309 = $tmp1303->$class->itable;
while ($tmp1309->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1309 = $tmp1309->next;
}
$fn1311 $tmp1310 = $tmp1309->methods[1];
panda$core$Object* $tmp1312 = $tmp1310($tmp1303);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1312)));
org$pandalanguage$pandac$ASTNode* $tmp1313 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1313));
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) $tmp1312);
// line 449
panda$core$Int64 $tmp1314 = *(&local41);
org$pandalanguage$pandac$ASTNode* $tmp1315 = *(&local42);
panda$core$Int64 $tmp1316 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1315);
int64_t $tmp1317 = $tmp1314.value;
int64_t $tmp1318 = $tmp1316.value;
int64_t $tmp1319 = $tmp1317 + $tmp1318;
panda$core$Int64 $tmp1320 = (panda$core$Int64) {$tmp1319};
*(&local41) = $tmp1320;
panda$core$Panda$unref$panda$core$Object$Q($tmp1312);
// unreffing REF($1169:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1321 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1321));
// unreffing decl
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block109;
block111:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1303));
// unreffing REF($1158:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 451
panda$core$Int64 $tmp1322 = *(&local41);
panda$collections$ImmutableArray* $tmp1323 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1323));
// unreffing decls
*(&local40) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1322;
block108:;
panda$core$Int64 $tmp1324 = (panda$core$Int64) {49};
panda$core$Bit $tmp1325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1324);
bool $tmp1326 = $tmp1325.value;
if ($tmp1326) goto block112; else goto block113;
block112:;
org$pandalanguage$pandac$Position* $tmp1327 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1328 = *$tmp1327;
panda$collections$ImmutableArray** $tmp1329 = (panda$collections$ImmutableArray**) (param1->$data + 16);
panda$collections$ImmutableArray* $tmp1330 = *$tmp1329;
*(&local43) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1330));
panda$collections$ImmutableArray* $tmp1331 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1331));
*(&local43) = $tmp1330;
panda$collections$ImmutableArray** $tmp1332 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1333 = *$tmp1332;
*(&local44) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1333));
panda$collections$ImmutableArray* $tmp1334 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1334));
*(&local44) = $tmp1333;
// line 454
panda$core$Int64 $tmp1335 = (panda$core$Int64) {0};
*(&local45) = $tmp1335;
// line 455
panda$collections$ImmutableArray* $tmp1336 = *(&local43);
ITable* $tmp1337 = ((panda$collections$Iterable*) $tmp1336)->$class->itable;
while ($tmp1337->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1337 = $tmp1337->next;
}
$fn1339 $tmp1338 = $tmp1337->methods[0];
panda$collections$Iterator* $tmp1340 = $tmp1338(((panda$collections$Iterable*) $tmp1336));
goto block114;
block114:;
ITable* $tmp1341 = $tmp1340->$class->itable;
while ($tmp1341->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1341 = $tmp1341->next;
}
$fn1343 $tmp1342 = $tmp1341->methods[0];
panda$core$Bit $tmp1344 = $tmp1342($tmp1340);
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block116; else goto block115;
block115:;
*(&local46) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1346 = $tmp1340->$class->itable;
while ($tmp1346->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1346 = $tmp1346->next;
}
$fn1348 $tmp1347 = $tmp1346->methods[1];
panda$core$Object* $tmp1349 = $tmp1347($tmp1340);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1349)));
org$pandalanguage$pandac$ASTNode* $tmp1350 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1350));
*(&local46) = ((org$pandalanguage$pandac$ASTNode*) $tmp1349);
// line 456
panda$core$Int64 $tmp1351 = *(&local45);
org$pandalanguage$pandac$ASTNode* $tmp1352 = *(&local46);
panda$core$Int64 $tmp1353 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1352);
int64_t $tmp1354 = $tmp1351.value;
int64_t $tmp1355 = $tmp1353.value;
int64_t $tmp1356 = $tmp1354 + $tmp1355;
panda$core$Int64 $tmp1357 = (panda$core$Int64) {$tmp1356};
*(&local45) = $tmp1357;
panda$core$Panda$unref$panda$core$Object$Q($tmp1349);
// unreffing REF($1249:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1358 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1358));
// unreffing test
*(&local46) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block114;
block116:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1340));
// unreffing REF($1238:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 458
panda$collections$ImmutableArray* $tmp1359 = *(&local44);
ITable* $tmp1360 = ((panda$collections$Iterable*) $tmp1359)->$class->itable;
while ($tmp1360->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1360 = $tmp1360->next;
}
$fn1362 $tmp1361 = $tmp1360->methods[0];
panda$collections$Iterator* $tmp1363 = $tmp1361(((panda$collections$Iterable*) $tmp1359));
goto block117;
block117:;
ITable* $tmp1364 = $tmp1363->$class->itable;
while ($tmp1364->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1364 = $tmp1364->next;
}
$fn1366 $tmp1365 = $tmp1364->methods[0];
panda$core$Bit $tmp1367 = $tmp1365($tmp1363);
bool $tmp1368 = $tmp1367.value;
if ($tmp1368) goto block119; else goto block118;
block118:;
*(&local47) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1369 = $tmp1363->$class->itable;
while ($tmp1369->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1369 = $tmp1369->next;
}
$fn1371 $tmp1370 = $tmp1369->methods[1];
panda$core$Object* $tmp1372 = $tmp1370($tmp1363);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1372)));
org$pandalanguage$pandac$ASTNode* $tmp1373 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1373));
*(&local47) = ((org$pandalanguage$pandac$ASTNode*) $tmp1372);
// line 459
panda$core$Int64 $tmp1374 = *(&local45);
org$pandalanguage$pandac$ASTNode* $tmp1375 = *(&local47);
panda$core$Int64 $tmp1376 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1375);
int64_t $tmp1377 = $tmp1374.value;
int64_t $tmp1378 = $tmp1376.value;
int64_t $tmp1379 = $tmp1377 + $tmp1378;
panda$core$Int64 $tmp1380 = (panda$core$Int64) {$tmp1379};
*(&local45) = $tmp1380;
panda$core$Panda$unref$panda$core$Object$Q($tmp1372);
// unreffing REF($1294:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1381 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1381));
// unreffing s
*(&local47) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block117;
block119:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1363));
// unreffing REF($1283:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 461
panda$core$Int64 $tmp1382 = *(&local45);
panda$collections$ImmutableArray* $tmp1383 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1383));
// unreffing statements
*(&local44) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1384 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1384));
// unreffing tests
*(&local43) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1382;
block113:;
panda$core$Int64 $tmp1385 = (panda$core$Int64) {50};
panda$core$Bit $tmp1386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1385);
bool $tmp1387 = $tmp1386.value;
if ($tmp1387) goto block120; else goto block121;
block120:;
org$pandalanguage$pandac$Position* $tmp1388 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1389 = *$tmp1388;
panda$core$String** $tmp1390 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp1391 = *$tmp1390;
org$pandalanguage$pandac$ASTNode** $tmp1392 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1393 = *$tmp1392;
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
org$pandalanguage$pandac$ASTNode* $tmp1394 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1394));
*(&local48) = $tmp1393;
panda$collections$ImmutableArray** $tmp1395 = (panda$collections$ImmutableArray**) (param1->$data + 32);
panda$collections$ImmutableArray* $tmp1396 = *$tmp1395;
*(&local49) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
panda$collections$ImmutableArray* $tmp1397 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1397));
*(&local49) = $tmp1396;
// line 464
org$pandalanguage$pandac$ASTNode* $tmp1398 = *(&local48);
panda$core$Int64 $tmp1399 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1398);
*(&local50) = $tmp1399;
// line 465
panda$collections$ImmutableArray* $tmp1400 = *(&local49);
ITable* $tmp1401 = ((panda$collections$Iterable*) $tmp1400)->$class->itable;
while ($tmp1401->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1401 = $tmp1401->next;
}
$fn1403 $tmp1402 = $tmp1401->methods[0];
panda$collections$Iterator* $tmp1404 = $tmp1402(((panda$collections$Iterable*) $tmp1400));
goto block122;
block122:;
ITable* $tmp1405 = $tmp1404->$class->itable;
while ($tmp1405->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1405 = $tmp1405->next;
}
$fn1407 $tmp1406 = $tmp1405->methods[0];
panda$core$Bit $tmp1408 = $tmp1406($tmp1404);
bool $tmp1409 = $tmp1408.value;
if ($tmp1409) goto block124; else goto block123;
block123:;
*(&local51) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1410 = $tmp1404->$class->itable;
while ($tmp1410->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1410 = $tmp1410->next;
}
$fn1412 $tmp1411 = $tmp1410->methods[1];
panda$core$Object* $tmp1413 = $tmp1411($tmp1404);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1413)));
org$pandalanguage$pandac$ASTNode* $tmp1414 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1414));
*(&local51) = ((org$pandalanguage$pandac$ASTNode*) $tmp1413);
// line 466
panda$core$Int64 $tmp1415 = *(&local50);
org$pandalanguage$pandac$ASTNode* $tmp1416 = *(&local51);
panda$core$Int64 $tmp1417 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1416);
int64_t $tmp1418 = $tmp1415.value;
int64_t $tmp1419 = $tmp1417.value;
int64_t $tmp1420 = $tmp1418 + $tmp1419;
panda$core$Int64 $tmp1421 = (panda$core$Int64) {$tmp1420};
*(&local50) = $tmp1421;
panda$core$Panda$unref$panda$core$Object$Q($tmp1413);
// unreffing REF($1382:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1422 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1422));
// unreffing s
*(&local51) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block122;
block124:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1404));
// unreffing REF($1371:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 468
panda$core$Int64 $tmp1423 = *(&local50);
panda$collections$ImmutableArray* $tmp1424 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1424));
// unreffing statements
*(&local49) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1425 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
// unreffing test
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1423;
block121:;
// line 471
panda$core$Bit $tmp1426 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1427 = $tmp1426.value;
if ($tmp1427) goto block125; else goto block126;
block126:;
panda$core$Int64 $tmp1428 = (panda$core$Int64) {471};
panda$core$String* $tmp1429 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1430, ((panda$core$Object*) param1));
panda$core$String* $tmp1431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1429, &$s1432);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1433, $tmp1428, $tmp1431);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1431));
// unreffing REF($1431:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1429));
// unreffing REF($1430:panda.core.String)
abort(); // unreachable
block125:;
goto block1;
block1:;
panda$core$Bit $tmp1434 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1435 = $tmp1434.value;
if ($tmp1435) goto block127; else goto block128;
block128:;
panda$core$Int64 $tmp1436 = (panda$core$Int64) {292};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1437, $tmp1436, &$s1438);
abort(); // unreachable
block127:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Annotations* param1, panda$collections$ImmutableArray* param2) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 477
panda$core$Weak** $tmp1439 = &param0->compiler;
panda$core$Weak* $tmp1440 = *$tmp1439;
panda$core$Object* $tmp1441 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1440);
org$pandalanguage$pandac$Compiler$Settings** $tmp1442 = &((org$pandalanguage$pandac$Compiler*) $tmp1441)->settings;
org$pandalanguage$pandac$Compiler$Settings* $tmp1443 = *$tmp1442;
panda$core$Int64* $tmp1444 = &$tmp1443->optimizationLevel;
panda$core$Int64 $tmp1445 = *$tmp1444;
panda$core$Int64 $tmp1446 = (panda$core$Int64) {0};
int64_t $tmp1447 = $tmp1445.value;
int64_t $tmp1448 = $tmp1446.value;
bool $tmp1449 = $tmp1447 > $tmp1448;
panda$core$Bit $tmp1450 = (panda$core$Bit) {$tmp1449};
bool $tmp1451 = $tmp1450.value;
if ($tmp1451) goto block3; else goto block4;
block3:;
panda$core$Bit $tmp1452 = org$pandalanguage$pandac$Annotations$get_isInline$R$panda$core$Bit(param1);
panda$core$Bit $tmp1453 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1452);
*(&local1) = $tmp1453;
goto block5;
block4:;
*(&local1) = $tmp1450;
goto block5;
block5:;
panda$core$Bit $tmp1454 = *(&local1);
bool $tmp1455 = $tmp1454.value;
if ($tmp1455) goto block6; else goto block7;
block6:;
panda$core$Bit $tmp1456 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit(param1);
*(&local0) = $tmp1456;
goto block8;
block7:;
*(&local0) = $tmp1454;
goto block8;
block8:;
panda$core$Bit $tmp1457 = *(&local0);
bool $tmp1458 = $tmp1457.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp1441);
// unreffing REF($4:panda.core.Weak.T)
if ($tmp1458) goto block1; else goto block2;
block1:;
// line 479
panda$core$Int64 $tmp1459 = (panda$core$Int64) {0};
*(&local2) = $tmp1459;
// line 480
ITable* $tmp1460 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp1460->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1460 = $tmp1460->next;
}
$fn1462 $tmp1461 = $tmp1460->methods[0];
panda$collections$Iterator* $tmp1463 = $tmp1461(((panda$collections$Iterable*) param2));
goto block9;
block9:;
ITable* $tmp1464 = $tmp1463->$class->itable;
while ($tmp1464->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1464 = $tmp1464->next;
}
$fn1466 $tmp1465 = $tmp1464->methods[0];
panda$core$Bit $tmp1467 = $tmp1465($tmp1463);
bool $tmp1468 = $tmp1467.value;
if ($tmp1468) goto block11; else goto block10;
block10:;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1469 = $tmp1463->$class->itable;
while ($tmp1469->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1469 = $tmp1469->next;
}
$fn1471 $tmp1470 = $tmp1469->methods[1];
panda$core$Object* $tmp1472 = $tmp1470($tmp1463);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1472)));
org$pandalanguage$pandac$ASTNode* $tmp1473 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) $tmp1472);
// line 481
panda$core$Int64 $tmp1474 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1475 = *(&local3);
panda$core$Int64 $tmp1476 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1475);
int64_t $tmp1477 = $tmp1474.value;
int64_t $tmp1478 = $tmp1476.value;
int64_t $tmp1479 = $tmp1477 + $tmp1478;
panda$core$Int64 $tmp1480 = (panda$core$Int64) {$tmp1479};
*(&local2) = $tmp1480;
// line 482
panda$core$Int64 $tmp1481 = *(&local2);
panda$core$Int64 $tmp1482 = (panda$core$Int64) {10};
int64_t $tmp1483 = $tmp1481.value;
int64_t $tmp1484 = $tmp1482.value;
bool $tmp1485 = $tmp1483 > $tmp1484;
panda$core$Bit $tmp1486 = (panda$core$Bit) {$tmp1485};
bool $tmp1487 = $tmp1486.value;
if ($tmp1487) goto block12; else goto block13;
block12:;
// line 483
panda$core$Bit $tmp1488 = panda$core$Bit$init$builtin_bit(false);
panda$core$Panda$unref$panda$core$Object$Q($tmp1472);
// unreffing REF($55:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1489 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1489));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1463));
// unreffing REF($44:panda.collections.Iterator<panda.collections.Iterable.T>)
return $tmp1488;
block13:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1472);
// unreffing REF($55:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1490 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1490));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1463));
// unreffing REF($44:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 486
panda$core$Bit $tmp1491 = panda$core$Bit$init$builtin_bit(true);
return $tmp1491;
block2:;
// line 488
panda$core$Bit $tmp1492 = panda$core$Bit$init$builtin_bit(false);
return $tmp1492;

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
// line 495
*(&local0) = ((panda$core$String*) NULL);
// line 497
panda$core$Bit $tmp1493 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1494 = $tmp1493.value;
if ($tmp1494) goto block1; else goto block3;
block1:;
// line 498
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp1495 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1495));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 501
panda$core$Int64* $tmp1496 = &param3->$rawValue;
panda$core$Int64 $tmp1497 = *$tmp1496;
panda$core$Int64 $tmp1498 = (panda$core$Int64) {39};
panda$core$Bit $tmp1499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1497, $tmp1498);
bool $tmp1500 = $tmp1499.value;
if ($tmp1500) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp1501 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp1502 = *$tmp1501;
*(&local1) = $tmp1502;
panda$core$String** $tmp1503 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp1504 = *$tmp1503;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1504));
panda$core$String* $tmp1505 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1505));
*(&local2) = $tmp1504;
// line 503
panda$core$String* $tmp1506 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1506));
panda$core$String* $tmp1507 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1507));
*(&local0) = $tmp1506;
panda$core$String* $tmp1508 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1508));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 506
panda$core$Bit $tmp1509 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1510 = $tmp1509.value;
if ($tmp1510) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1511 = (panda$core$Int64) {506};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1512, $tmp1511);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 510
org$pandalanguage$pandac$Annotations* $tmp1513 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param4);
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1513));
org$pandalanguage$pandac$Annotations* $tmp1514 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
*(&local3) = $tmp1513;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1513));
// unreffing REF($61:org.pandalanguage.pandac.Annotations)
// line 511
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1515;
$tmp1515 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1515->value = param5;
panda$core$Int64 $tmp1516 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1517 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1516);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1518;
$tmp1518 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1518->value = $tmp1517;
ITable* $tmp1519 = ((panda$core$Equatable*) $tmp1515)->$class->itable;
while ($tmp1519->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1519 = $tmp1519->next;
}
$fn1521 $tmp1520 = $tmp1519->methods[1];
panda$core$Bit $tmp1522 = $tmp1520(((panda$core$Equatable*) $tmp1515), ((panda$core$Equatable*) $tmp1518));
bool $tmp1523 = $tmp1522.value;
if ($tmp1523) goto block11; else goto block12;
block11:;
org$pandalanguage$pandac$Annotations** $tmp1524 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp1525 = *$tmp1524;
panda$core$Bit $tmp1526 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit($tmp1525);
*(&local5) = $tmp1526;
goto block13;
block12:;
*(&local5) = $tmp1522;
goto block13;
block13:;
panda$core$Bit $tmp1527 = *(&local5);
bool $tmp1528 = $tmp1527.value;
if ($tmp1528) goto block14; else goto block15;
block14:;
*(&local4) = $tmp1527;
goto block16;
block15:;
org$pandalanguage$pandac$Annotations* $tmp1529 = *(&local3);
panda$core$Bit $tmp1530 = org$pandalanguage$pandac$Annotations$get_isPrivate$R$panda$core$Bit($tmp1529);
*(&local4) = $tmp1530;
goto block16;
block16:;
panda$core$Bit $tmp1531 = *(&local4);
bool $tmp1532 = $tmp1531.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1518)));
// unreffing REF($77:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1515)));
// unreffing REF($73:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp1532) goto block9; else goto block10;
block9:;
// line 512
org$pandalanguage$pandac$Annotations* $tmp1533 = *(&local3);
panda$core$Int64* $tmp1534 = &$tmp1533->flags;
panda$core$Int64 $tmp1535 = *$tmp1534;
panda$core$Int64 $tmp1536 = (panda$core$Int64) {256};
panda$core$Int64 $tmp1537 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1535, $tmp1536);
panda$core$Int64* $tmp1538 = &$tmp1533->flags;
*$tmp1538 = $tmp1537;
goto block10;
block10:;
// line 514
*(&local6) = ((panda$collections$Array*) NULL);
// line 515
panda$core$Bit $tmp1539 = panda$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1540 = $tmp1539.value;
if ($tmp1540) goto block17; else goto block19;
block17:;
// line 516
panda$collections$Array* $tmp1541 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1541);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1541));
panda$collections$Array* $tmp1542 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1542));
*(&local6) = $tmp1541;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1541));
// unreffing REF($124:panda.collections.Array<org.pandalanguage.pandac.ClassDecl.GenericParameter>)
// line 517
panda$core$String** $tmp1543 = &param1->name;
panda$core$String* $tmp1544 = *$tmp1543;
panda$core$String* $tmp1545 = panda$core$String$convert$R$panda$core$String($tmp1544);
panda$core$String* $tmp1546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1545, &$s1547);
panda$core$String* $tmp1548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1546, param6);
panda$core$String* $tmp1549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1548, &$s1550);
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1549));
panda$core$String* $tmp1551 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1551));
*(&local7) = $tmp1549;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1549));
// unreffing REF($143:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1548));
// unreffing REF($142:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1546));
// unreffing REF($141:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1545));
// unreffing REF($140:panda.core.String)
// line 518
ITable* $tmp1552 = ((panda$collections$Iterable*) param7)->$class->itable;
while ($tmp1552->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1552 = $tmp1552->next;
}
$fn1554 $tmp1553 = $tmp1552->methods[0];
panda$collections$Iterator* $tmp1555 = $tmp1553(((panda$collections$Iterable*) param7));
goto block20;
block20:;
ITable* $tmp1556 = $tmp1555->$class->itable;
while ($tmp1556->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1556 = $tmp1556->next;
}
$fn1558 $tmp1557 = $tmp1556->methods[0];
panda$core$Bit $tmp1559 = $tmp1557($tmp1555);
bool $tmp1560 = $tmp1559.value;
if ($tmp1560) goto block22; else goto block21;
block21:;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1561 = $tmp1555->$class->itable;
while ($tmp1561->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1561 = $tmp1561->next;
}
$fn1563 $tmp1562 = $tmp1561->methods[1];
panda$core$Object* $tmp1564 = $tmp1562($tmp1555);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1564)));
org$pandalanguage$pandac$ASTNode* $tmp1565 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1565));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) $tmp1564);
// line 519
*(&local9) = ((panda$core$String*) NULL);
// line 520
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
// line 521
org$pandalanguage$pandac$ASTNode* $tmp1566 = *(&local8);
panda$core$Int64* $tmp1567 = &$tmp1566->$rawValue;
panda$core$Int64 $tmp1568 = *$tmp1567;
panda$core$Int64 $tmp1569 = (panda$core$Int64) {21};
panda$core$Bit $tmp1570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1568, $tmp1569);
bool $tmp1571 = $tmp1570.value;
if ($tmp1571) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp1572 = (org$pandalanguage$pandac$Position*) ($tmp1566->$data + 0);
org$pandalanguage$pandac$Position $tmp1573 = *$tmp1572;
panda$core$String** $tmp1574 = (panda$core$String**) ($tmp1566->$data + 16);
panda$core$String* $tmp1575 = *$tmp1574;
*(&local11) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1575));
panda$core$String* $tmp1576 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1576));
*(&local11) = $tmp1575;
// line 523
panda$core$String* $tmp1577 = *(&local11);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1577));
panda$core$String* $tmp1578 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1578));
*(&local9) = $tmp1577;
// line 524
org$pandalanguage$pandac$Type* $tmp1579 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1579));
org$pandalanguage$pandac$Type* $tmp1580 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1580));
*(&local10) = $tmp1579;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1579));
// unreffing REF($218:org.pandalanguage.pandac.Type)
panda$core$String* $tmp1581 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1581));
// unreffing id
*(&local11) = ((panda$core$String*) NULL);
goto block23;
block25:;
panda$core$Int64 $tmp1582 = (panda$core$Int64) {45};
panda$core$Bit $tmp1583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1568, $tmp1582);
bool $tmp1584 = $tmp1583.value;
if ($tmp1584) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp1585 = (org$pandalanguage$pandac$Position*) ($tmp1566->$data + 0);
org$pandalanguage$pandac$Position $tmp1586 = *$tmp1585;
panda$core$String** $tmp1587 = (panda$core$String**) ($tmp1566->$data + 16);
panda$core$String* $tmp1588 = *$tmp1587;
*(&local12) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1588));
panda$core$String* $tmp1589 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1589));
*(&local12) = $tmp1588;
org$pandalanguage$pandac$ASTNode** $tmp1590 = (org$pandalanguage$pandac$ASTNode**) ($tmp1566->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1591 = *$tmp1590;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1591));
org$pandalanguage$pandac$ASTNode* $tmp1592 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1592));
*(&local13) = $tmp1591;
// line 527
panda$core$String* $tmp1593 = *(&local12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1593));
panda$core$String* $tmp1594 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1594));
*(&local9) = $tmp1593;
// line 528
org$pandalanguage$pandac$ASTNode* $tmp1595 = *(&local13);
org$pandalanguage$pandac$Type* $tmp1596 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1595);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1596));
org$pandalanguage$pandac$Type* $tmp1597 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1597));
*(&local10) = $tmp1596;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1596));
// unreffing REF($269:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$ASTNode* $tmp1598 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1598));
// unreffing type
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1599 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1599));
// unreffing id
*(&local12) = ((panda$core$String*) NULL);
goto block23;
block27:;
// line 531
panda$core$Bit $tmp1600 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1601 = $tmp1600.value;
if ($tmp1601) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp1602 = (panda$core$Int64) {531};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1603, $tmp1602);
abort(); // unreachable
block28:;
goto block23;
block23:;
// line 534
panda$collections$Array* $tmp1604 = *(&local6);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1605 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
org$pandalanguage$pandac$ASTNode* $tmp1606 = *(&local8);
$fn1608 $tmp1607 = ($fn1608) $tmp1606->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1609 = $tmp1607($tmp1606);
panda$core$String* $tmp1610 = *(&local7);
panda$core$String* $tmp1611 = *(&local9);
org$pandalanguage$pandac$Type* $tmp1612 = *(&local10);
org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1605, $tmp1609, $tmp1610, $tmp1611, $tmp1612);
panda$collections$Array$add$panda$collections$Array$T($tmp1604, ((panda$core$Object*) $tmp1605));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1605));
// unreffing REF($301:org.pandalanguage.pandac.ClassDecl.GenericParameter)
org$pandalanguage$pandac$Type* $tmp1613 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1613));
// unreffing bound
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp1614 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1614));
// unreffing parameterName
*(&local9) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1564);
// unreffing REF($178:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1615 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1615));
// unreffing p
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block20;
block22:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
// unreffing REF($167:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$String* $tmp1616 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1616));
// unreffing fullName
*(&local7) = ((panda$core$String*) NULL);
goto block18;
block19:;
// line 1
// line 539
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
panda$collections$Array* $tmp1617 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1617));
*(&local6) = ((panda$collections$Array*) NULL);
goto block18;
block18:;
// line 541
panda$collections$Array* $tmp1618 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1618);
*(&local14) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1618));
panda$collections$Array* $tmp1619 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1619));
*(&local14) = $tmp1618;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1618));
// unreffing REF($352:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
// line 542
ITable* $tmp1620 = ((panda$collections$Iterable*) param8)->$class->itable;
while ($tmp1620->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1620 = $tmp1620->next;
}
$fn1622 $tmp1621 = $tmp1620->methods[0];
panda$collections$Iterator* $tmp1623 = $tmp1621(((panda$collections$Iterable*) param8));
goto block30;
block30:;
ITable* $tmp1624 = $tmp1623->$class->itable;
while ($tmp1624->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1624 = $tmp1624->next;
}
$fn1626 $tmp1625 = $tmp1624->methods[0];
panda$core$Bit $tmp1627 = $tmp1625($tmp1623);
bool $tmp1628 = $tmp1627.value;
if ($tmp1628) goto block32; else goto block31;
block31:;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1629 = $tmp1623->$class->itable;
while ($tmp1629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1629 = $tmp1629->next;
}
$fn1631 $tmp1630 = $tmp1629->methods[1];
panda$core$Object* $tmp1632 = $tmp1630($tmp1623);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1632)));
org$pandalanguage$pandac$ASTNode* $tmp1633 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1633));
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) $tmp1632);
// line 543
org$pandalanguage$pandac$ASTNode* $tmp1634 = *(&local15);
panda$core$Int64* $tmp1635 = &$tmp1634->$rawValue;
panda$core$Int64 $tmp1636 = *$tmp1635;
panda$core$Int64 $tmp1637 = (panda$core$Int64) {32};
panda$core$Bit $tmp1638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1636, $tmp1637);
bool $tmp1639 = $tmp1638.value;
if ($tmp1639) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp1640 = (org$pandalanguage$pandac$Position*) ($tmp1634->$data + 0);
org$pandalanguage$pandac$Position $tmp1641 = *$tmp1640;
panda$core$String** $tmp1642 = (panda$core$String**) ($tmp1634->$data + 16);
panda$core$String* $tmp1643 = *$tmp1642;
*(&local16) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1643));
panda$core$String* $tmp1644 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1644));
*(&local16) = $tmp1643;
org$pandalanguage$pandac$ASTNode** $tmp1645 = (org$pandalanguage$pandac$ASTNode**) ($tmp1634->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1646 = *$tmp1645;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1646));
org$pandalanguage$pandac$ASTNode* $tmp1647 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1647));
*(&local17) = $tmp1646;
// line 545
panda$collections$Array* $tmp1648 = *(&local14);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1649 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
panda$core$String* $tmp1650 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1651 = *(&local17);
org$pandalanguage$pandac$Type* $tmp1652 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1651);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1649, $tmp1650, $tmp1652);
panda$collections$Array$add$panda$collections$Array$T($tmp1648, ((panda$core$Object*) $tmp1649));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1652));
// unreffing REF($422:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1649));
// unreffing REF($419:org.pandalanguage.pandac.MethodDecl.Parameter)
org$pandalanguage$pandac$ASTNode* $tmp1653 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1653));
// unreffing type
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1654 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1654));
// unreffing name
*(&local16) = ((panda$core$String*) NULL);
goto block33;
block35:;
// line 548
panda$core$Bit $tmp1655 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1656 = $tmp1655.value;
if ($tmp1656) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp1657 = (panda$core$Int64) {548};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1658, $tmp1657);
abort(); // unreachable
block36:;
goto block33;
block33:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1632);
// unreffing REF($380:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1659 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1659));
// unreffing p
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block30;
block32:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1623));
// unreffing REF($369:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 552
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
// line 553
panda$core$Bit $tmp1660 = panda$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1661 = $tmp1660.value;
if ($tmp1661) goto block38; else goto block40;
block38:;
// line 554
org$pandalanguage$pandac$Type* $tmp1662 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, param9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1662));
org$pandalanguage$pandac$Type* $tmp1663 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1663));
*(&local18) = $tmp1662;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1662));
// unreffing REF($472:org.pandalanguage.pandac.Type)
goto block39;
block40:;
// line 1
// line 557
org$pandalanguage$pandac$Type* $tmp1664 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1664));
org$pandalanguage$pandac$Type* $tmp1665 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1665));
*(&local18) = $tmp1664;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1664));
// unreffing REF($485:org.pandalanguage.pandac.Type)
goto block39;
block39:;
// line 559
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1666;
$tmp1666 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1666->value = param5;
panda$core$Int64 $tmp1667 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1668 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1667);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1669;
$tmp1669 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1669->value = $tmp1668;
ITable* $tmp1670 = ((panda$core$Equatable*) $tmp1666)->$class->itable;
while ($tmp1670->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1670 = $tmp1670->next;
}
$fn1672 $tmp1671 = $tmp1670->methods[0];
panda$core$Bit $tmp1673 = $tmp1671(((panda$core$Equatable*) $tmp1666), ((panda$core$Equatable*) $tmp1669));
bool $tmp1674 = $tmp1673.value;
if ($tmp1674) goto block43; else goto block44;
block43:;
org$pandalanguage$pandac$Type* $tmp1675 = *(&local18);
org$pandalanguage$pandac$Type* $tmp1676 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1677 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1675, $tmp1676);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1676));
// unreffing REF($507:org.pandalanguage.pandac.Type)
*(&local19) = $tmp1677;
goto block45;
block44:;
*(&local19) = $tmp1673;
goto block45;
block45:;
panda$core$Bit $tmp1678 = *(&local19);
bool $tmp1679 = $tmp1678.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1669)));
// unreffing REF($501:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1666)));
// unreffing REF($497:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp1679) goto block41; else goto block42;
block41:;
// line 560
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param2, &$s1680);
goto block42;
block42:;
// line 562
panda$core$Bit $tmp1681 = panda$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1682 = $tmp1681.value;
if ($tmp1682) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Annotations* $tmp1683 = *(&local3);
panda$core$Bit $tmp1684 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(param0, $tmp1683, param10);
*(&local20) = $tmp1684;
goto block50;
block49:;
*(&local20) = $tmp1681;
goto block50;
block50:;
panda$core$Bit $tmp1685 = *(&local20);
bool $tmp1686 = $tmp1685.value;
if ($tmp1686) goto block46; else goto block47;
block46:;
// line 563
org$pandalanguage$pandac$Annotations* $tmp1687 = *(&local3);
panda$core$Int64* $tmp1688 = &$tmp1687->flags;
panda$core$Int64 $tmp1689 = *$tmp1688;
panda$core$Int64 $tmp1690 = (panda$core$Int64) {1024};
panda$core$Int64 $tmp1691 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1689, $tmp1690);
panda$core$Int64* $tmp1692 = &$tmp1687->flags;
*$tmp1692 = $tmp1691;
goto block47;
block47:;
// line 565
panda$core$Bit $tmp1693 = panda$core$Bit$init$builtin_bit(param10 == NULL);
bool $tmp1694 = $tmp1693.value;
if ($tmp1694) goto block53; else goto block54;
block53:;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp1695 = &param1->classKind;
org$pandalanguage$pandac$ClassDecl$Kind $tmp1696 = *$tmp1695;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp1697;
$tmp1697 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp1697->value = $tmp1696;
panda$core$Int64 $tmp1698 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp1699 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp1698);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp1700;
$tmp1700 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp1700->value = $tmp1699;
ITable* $tmp1701 = ((panda$core$Equatable*) $tmp1697)->$class->itable;
while ($tmp1701->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1701 = $tmp1701->next;
}
$fn1703 $tmp1702 = $tmp1701->methods[0];
panda$core$Bit $tmp1704 = $tmp1702(((panda$core$Equatable*) $tmp1697), ((panda$core$Equatable*) $tmp1700));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1700)));
// unreffing REF($563:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1697)));
// unreffing REF($559:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
*(&local21) = $tmp1704;
goto block55;
block54:;
*(&local21) = $tmp1693;
goto block55;
block55:;
panda$core$Bit $tmp1705 = *(&local21);
bool $tmp1706 = $tmp1705.value;
if ($tmp1706) goto block51; else goto block52;
block51:;
// line 566
org$pandalanguage$pandac$Annotations* $tmp1707 = *(&local3);
panda$core$Int64* $tmp1708 = &$tmp1707->flags;
panda$core$Int64 $tmp1709 = *$tmp1708;
panda$core$Int64 $tmp1710 = (panda$core$Int64) {512};
panda$core$Int64 $tmp1711 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp1709, $tmp1710);
panda$core$Int64 $tmp1712 = (panda$core$Int64) {0};
int64_t $tmp1713 = $tmp1711.value;
int64_t $tmp1714 = $tmp1712.value;
bool $tmp1715 = $tmp1713 != $tmp1714;
panda$core$Bit $tmp1716 = (panda$core$Bit) {$tmp1715};
bool $tmp1717 = $tmp1716.value;
if ($tmp1717) goto block56; else goto block57;
block56:;
// line 567
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param2, &$s1718);
goto block57;
block57:;
// line 570
org$pandalanguage$pandac$Annotations* $tmp1719 = *(&local3);
panda$core$Int64* $tmp1720 = &$tmp1719->flags;
panda$core$Int64 $tmp1721 = *$tmp1720;
panda$core$Int64 $tmp1722 = (panda$core$Int64) {512};
panda$core$Int64 $tmp1723 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1721, $tmp1722);
panda$core$Int64* $tmp1724 = &$tmp1719->flags;
*$tmp1724 = $tmp1723;
goto block52;
block52:;
// line 572
org$pandalanguage$pandac$MethodDecl* $tmp1725 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
panda$core$String* $tmp1726 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp1727 = *(&local3);
panda$collections$Array* $tmp1728 = *(&local6);
panda$collections$Array* $tmp1729 = *(&local14);
org$pandalanguage$pandac$Type* $tmp1730 = *(&local18);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1725, param1, param2, $tmp1726, $tmp1727, param5, param6, $tmp1728, $tmp1729, $tmp1730, param10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1725));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1725));
// unreffing REF($605:org.pandalanguage.pandac.MethodDecl)
org$pandalanguage$pandac$Type* $tmp1731 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1731));
// unreffing returnType
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1732 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1732));
// unreffing parameters
*(&local14) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1733 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1733));
// unreffing generics
*(&local6) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp1734 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1734));
// unreffing annotations
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp1735 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1735));
// unreffing doccomment
*(&local0) = ((panda$core$String*) NULL);
return $tmp1725;

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
// line 577
panda$core$Int64* $tmp1736 = &param2->$rawValue;
panda$core$Int64 $tmp1737 = *$tmp1736;
panda$core$Int64 $tmp1738 = (panda$core$Int64) {17};
panda$core$Bit $tmp1739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1737, $tmp1738);
bool $tmp1740 = $tmp1739.value;
if ($tmp1740) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp1741 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1742 = *$tmp1741;
*(&local0) = $tmp1742;
org$pandalanguage$pandac$ASTNode** $tmp1743 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1744 = *$tmp1743;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1744));
org$pandalanguage$pandac$ASTNode* $tmp1745 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
*(&local1) = $tmp1744;
panda$collections$ImmutableArray** $tmp1746 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp1747 = *$tmp1746;
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1747));
panda$collections$ImmutableArray* $tmp1748 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1748));
*(&local2) = $tmp1747;
org$pandalanguage$pandac$ASTNode** $tmp1749 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1750 = *$tmp1749;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1750));
org$pandalanguage$pandac$ASTNode* $tmp1751 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1751));
*(&local3) = $tmp1750;
// line 579
org$pandalanguage$pandac$Position $tmp1752 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp1753 = *(&local1);
panda$collections$ImmutableArray* $tmp1754 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1755 = *(&local3);
org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(param0, param1, $tmp1752, $tmp1753, $tmp1754, $tmp1755);
org$pandalanguage$pandac$ASTNode* $tmp1756 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1756));
// unreffing varDecl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1757 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1757));
// unreffing annotations
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1758 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1758));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp1759 = (panda$core$Int64) {27};
panda$core$Bit $tmp1760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1737, $tmp1759);
bool $tmp1761 = $tmp1760.value;
if ($tmp1761) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp1762 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1763 = *$tmp1762;
*(&local4) = $tmp1763;
org$pandalanguage$pandac$ASTNode** $tmp1764 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1765 = *$tmp1764;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1765));
org$pandalanguage$pandac$ASTNode* $tmp1766 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1766));
*(&local5) = $tmp1765;
panda$collections$ImmutableArray** $tmp1767 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp1768 = *$tmp1767;
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1768));
panda$collections$ImmutableArray* $tmp1769 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1769));
*(&local6) = $tmp1768;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp1770 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param2->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1771 = *$tmp1770;
*(&local7) = $tmp1771;
panda$core$String** $tmp1772 = (panda$core$String**) (param2->$data + 40);
panda$core$String* $tmp1773 = *$tmp1772;
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1773));
panda$core$String* $tmp1774 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1774));
*(&local8) = $tmp1773;
panda$collections$ImmutableArray** $tmp1775 = (panda$collections$ImmutableArray**) (param2->$data + 48);
panda$collections$ImmutableArray* $tmp1776 = *$tmp1775;
*(&local9) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1776));
panda$collections$ImmutableArray* $tmp1777 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1777));
*(&local9) = $tmp1776;
panda$collections$ImmutableArray** $tmp1778 = (panda$collections$ImmutableArray**) (param2->$data + 56);
panda$collections$ImmutableArray* $tmp1779 = *$tmp1778;
*(&local10) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1779));
panda$collections$ImmutableArray* $tmp1780 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1780));
*(&local10) = $tmp1779;
org$pandalanguage$pandac$ASTNode** $tmp1781 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp1782 = *$tmp1781;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1782));
org$pandalanguage$pandac$ASTNode* $tmp1783 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1783));
*(&local11) = $tmp1782;
panda$collections$ImmutableArray** $tmp1784 = (panda$collections$ImmutableArray**) (param2->$data + 72);
panda$collections$ImmutableArray* $tmp1785 = *$tmp1784;
*(&local12) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1785));
panda$collections$ImmutableArray* $tmp1786 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1786));
*(&local12) = $tmp1785;
// line 583
org$pandalanguage$pandac$Position $tmp1787 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1788 = *(&local5);
panda$collections$ImmutableArray* $tmp1789 = *(&local6);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1790 = *(&local7);
panda$core$String* $tmp1791 = *(&local8);
panda$collections$ImmutableArray* $tmp1792 = *(&local9);
panda$collections$ImmutableArray* $tmp1793 = *(&local10);
org$pandalanguage$pandac$ASTNode* $tmp1794 = *(&local11);
panda$collections$ImmutableArray* $tmp1795 = *(&local12);
org$pandalanguage$pandac$MethodDecl* $tmp1796 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(param0, param1, $tmp1787, $tmp1788, $tmp1789, $tmp1790, $tmp1791, $tmp1792, $tmp1793, $tmp1794, $tmp1795);
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1796));
org$pandalanguage$pandac$MethodDecl* $tmp1797 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1797));
*(&local13) = $tmp1796;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1796));
// unreffing REF($142:org.pandalanguage.pandac.MethodDecl?)
// line 585
org$pandalanguage$pandac$MethodDecl* $tmp1798 = *(&local13);
panda$core$Bit $tmp1799 = panda$core$Bit$init$builtin_bit($tmp1798 != NULL);
bool $tmp1800 = $tmp1799.value;
if ($tmp1800) goto block6; else goto block7;
block6:;
// line 586
org$pandalanguage$pandac$SymbolTable** $tmp1801 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1802 = *$tmp1801;
org$pandalanguage$pandac$MethodDecl* $tmp1803 = *(&local13);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1802, ((org$pandalanguage$pandac$Symbol*) $tmp1803));
// line 587
panda$collections$Array** $tmp1804 = &param1->methods;
panda$collections$Array* $tmp1805 = *$tmp1804;
org$pandalanguage$pandac$MethodDecl* $tmp1806 = *(&local13);
panda$collections$Array$add$panda$collections$Array$T($tmp1805, ((panda$core$Object*) $tmp1806));
goto block7;
block7:;
org$pandalanguage$pandac$MethodDecl* $tmp1807 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1807));
// unreffing m
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$collections$ImmutableArray* $tmp1808 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1808));
// unreffing statements
*(&local12) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1809 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1809));
// unreffing returnType
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1810 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1810));
// unreffing parameters
*(&local10) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1811 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1811));
// unreffing generics
*(&local9) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1812 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1812));
// unreffing name
*(&local8) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp1813 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1813));
// unreffing annotations
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1814 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1814));
// unreffing dc
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp1815 = (panda$core$Int64) {12};
panda$core$Bit $tmp1816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1737, $tmp1815);
bool $tmp1817 = $tmp1816.value;
if ($tmp1817) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp1818 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1819 = *$tmp1818;
*(&local14) = $tmp1819;
org$pandalanguage$pandac$ASTNode** $tmp1820 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1821 = *$tmp1820;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1821));
org$pandalanguage$pandac$ASTNode* $tmp1822 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1822));
*(&local15) = $tmp1821;
panda$collections$ImmutableArray** $tmp1823 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp1824 = *$tmp1823;
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1824));
panda$collections$ImmutableArray* $tmp1825 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1825));
*(&local16) = $tmp1824;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp1826 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param2->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp1827 = *$tmp1826;
*(&local17) = $tmp1827;
panda$core$String** $tmp1828 = (panda$core$String**) (param2->$data + 40);
panda$core$String* $tmp1829 = *$tmp1828;
*(&local18) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1829));
panda$core$String* $tmp1830 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1830));
*(&local18) = $tmp1829;
panda$collections$ImmutableArray** $tmp1831 = (panda$collections$ImmutableArray**) (param2->$data + 48);
panda$collections$ImmutableArray* $tmp1832 = *$tmp1831;
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1832));
panda$collections$ImmutableArray* $tmp1833 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1833));
*(&local19) = $tmp1832;
panda$collections$ImmutableArray** $tmp1834 = (panda$collections$ImmutableArray**) (param2->$data + 56);
panda$collections$ImmutableArray* $tmp1835 = *$tmp1834;
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1835));
panda$collections$ImmutableArray* $tmp1836 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1836));
*(&local20) = $tmp1835;
panda$collections$ImmutableArray** $tmp1837 = (panda$collections$ImmutableArray**) (param2->$data + 64);
panda$collections$ImmutableArray* $tmp1838 = *$tmp1837;
*(&local21) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1838));
panda$collections$ImmutableArray* $tmp1839 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1839));
*(&local21) = $tmp1838;
// line 592
panda$io$File** $tmp1840 = &param1->source;
panda$io$File* $tmp1841 = *$tmp1840;
panda$collections$MapView** $tmp1842 = &param1->aliases;
panda$collections$MapView* $tmp1843 = *$tmp1842;
panda$core$String** $tmp1844 = &param1->name;
panda$core$String* $tmp1845 = *$tmp1844;
org$pandalanguage$pandac$Position $tmp1846 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp1847 = *(&local15);
panda$collections$ImmutableArray* $tmp1848 = *(&local16);
org$pandalanguage$pandac$ClassDecl$Kind $tmp1849 = *(&local17);
panda$core$String* $tmp1850 = *(&local18);
panda$collections$ImmutableArray* $tmp1851 = *(&local19);
panda$collections$ImmutableArray* $tmp1852 = *(&local20);
panda$collections$ImmutableArray* $tmp1853 = *(&local21);
org$pandalanguage$pandac$ClassDecl* $tmp1854 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp1841, $tmp1843, $tmp1845, $tmp1846, $tmp1847, $tmp1848, $tmp1849, $tmp1850, $tmp1851, $tmp1852, $tmp1853);
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1854));
org$pandalanguage$pandac$ClassDecl* $tmp1855 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1855));
*(&local22) = $tmp1854;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1854));
// unreffing REF($294:org.pandalanguage.pandac.ClassDecl?)
// line 594
org$pandalanguage$pandac$ClassDecl* $tmp1856 = *(&local22);
panda$core$Bit $tmp1857 = panda$core$Bit$init$builtin_bit($tmp1856 != NULL);
bool $tmp1858 = $tmp1857.value;
if ($tmp1858) goto block10; else goto block11;
block10:;
// line 595
org$pandalanguage$pandac$ClassDecl* $tmp1859 = *(&local22);
panda$core$Weak* $tmp1860 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp1860, ((panda$core$Object*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
panda$core$Weak** $tmp1861 = &$tmp1859->owner;
panda$core$Weak* $tmp1862 = *$tmp1861;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1862));
panda$core$Weak** $tmp1863 = &$tmp1859->owner;
*$tmp1863 = $tmp1860;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
// unreffing REF($315:panda.core.Weak<org.pandalanguage.pandac.ClassDecl?>)
// line 596
panda$collections$Array** $tmp1864 = &param1->classes;
panda$collections$Array* $tmp1865 = *$tmp1864;
org$pandalanguage$pandac$ClassDecl* $tmp1866 = *(&local22);
panda$collections$Array$add$panda$collections$Array$T($tmp1865, ((panda$core$Object*) $tmp1866));
// line 597
org$pandalanguage$pandac$ClassDecl* $tmp1867 = *(&local22);
panda$core$String** $tmp1868 = &$tmp1867->name;
panda$core$String* $tmp1869 = *$tmp1868;
panda$core$String** $tmp1870 = &param1->name;
panda$core$String* $tmp1871 = *$tmp1870;
panda$core$String* $tmp1872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1871, &$s1873);
panda$core$Bit $tmp1874 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1869, $tmp1872);
bool $tmp1875 = $tmp1874.value;
if ($tmp1875) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp1876 = (panda$core$Int64) {597};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1877, $tmp1876);
abort(); // unreachable
block12:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1872));
// unreffing REF($345:panda.core.String)
// line 598
org$pandalanguage$pandac$SymbolTable** $tmp1878 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1879 = *$tmp1878;
org$pandalanguage$pandac$Alias* $tmp1880 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
org$pandalanguage$pandac$ClassDecl* $tmp1881 = *(&local22);
panda$core$String** $tmp1882 = &$tmp1881->name;
panda$core$String* $tmp1883 = *$tmp1882;
panda$core$String** $tmp1884 = &param1->name;
panda$core$String* $tmp1885 = *$tmp1884;
panda$core$Int64 $tmp1886 = panda$core$String$get_length$R$panda$core$Int64($tmp1885);
panda$core$Int64 $tmp1887 = (panda$core$Int64) {1};
int64_t $tmp1888 = $tmp1886.value;
int64_t $tmp1889 = $tmp1887.value;
int64_t $tmp1890 = $tmp1888 + $tmp1889;
panda$core$Int64 $tmp1891 = (panda$core$Int64) {$tmp1890};
panda$core$Bit $tmp1892 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1893 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp1891, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1892);
panda$core$String* $tmp1894 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1883, $tmp1893);
org$pandalanguage$pandac$ClassDecl* $tmp1895 = *(&local22);
panda$core$String** $tmp1896 = &$tmp1895->name;
panda$core$String* $tmp1897 = *$tmp1896;
org$pandalanguage$pandac$Position $tmp1898 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1880, $tmp1894, $tmp1897, $tmp1898);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1879, ((org$pandalanguage$pandac$Symbol*) $tmp1880));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1894));
// unreffing REF($374:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1880));
// unreffing REF($358:org.pandalanguage.pandac.Alias)
// line 600
org$pandalanguage$pandac$ClassDecl* $tmp1899 = *(&local22);
org$pandalanguage$pandac$SymbolTable** $tmp1900 = &$tmp1899->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1901 = *$tmp1900;
org$pandalanguage$pandac$Alias* $tmp1902 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
panda$core$String* $tmp1903 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(param1);
panda$core$String** $tmp1904 = &param1->name;
panda$core$String* $tmp1905 = *$tmp1904;
org$pandalanguage$pandac$Position $tmp1906 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1902, $tmp1903, $tmp1905, $tmp1906);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1901, ((org$pandalanguage$pandac$Symbol*) $tmp1902));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1903));
// unreffing REF($395:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1902));
// unreffing REF($394:org.pandalanguage.pandac.Alias)
goto block11;
block11:;
org$pandalanguage$pandac$ClassDecl* $tmp1907 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1907));
// unreffing inner
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$ImmutableArray* $tmp1908 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1908));
// unreffing members
*(&local21) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1909 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1909));
// unreffing supertypes
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1910 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1910));
// unreffing generics
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1911 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1911));
// unreffing name
*(&local18) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp1912 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1912));
// unreffing annotations
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1913 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1913));
// unreffing dc
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp1914 = (panda$core$Int64) {10};
panda$core$Bit $tmp1915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1737, $tmp1914);
bool $tmp1916 = $tmp1915.value;
if ($tmp1916) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp1917 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1918 = *$tmp1917;
*(&local23) = $tmp1918;
org$pandalanguage$pandac$ASTNode** $tmp1919 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1920 = *$tmp1919;
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1920));
org$pandalanguage$pandac$ASTNode* $tmp1921 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1921));
*(&local24) = $tmp1920;
panda$core$String** $tmp1922 = (panda$core$String**) (param2->$data + 24);
panda$core$String* $tmp1923 = *$tmp1922;
*(&local25) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1923));
panda$core$String* $tmp1924 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1924));
*(&local25) = $tmp1923;
panda$collections$ImmutableArray** $tmp1925 = (panda$collections$ImmutableArray**) (param2->$data + 32);
panda$collections$ImmutableArray* $tmp1926 = *$tmp1925;
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1926));
panda$collections$ImmutableArray* $tmp1927 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1927));
*(&local26) = $tmp1926;
// line 604
org$pandalanguage$pandac$Position $tmp1928 = *(&local23);
org$pandalanguage$pandac$ASTNode* $tmp1929 = *(&local24);
panda$core$String* $tmp1930 = *(&local25);
panda$collections$ImmutableArray* $tmp1931 = *(&local26);
org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0, param1, $tmp1928, $tmp1929, $tmp1930, $tmp1931);
panda$collections$ImmutableArray* $tmp1932 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1932));
// unreffing fields
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1933 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1933));
// unreffing name
*(&local25) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1934 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1934));
// unreffing dc
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block15:;
// line 607
panda$core$Bit $tmp1935 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1936 = $tmp1935.value;
if ($tmp1936) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp1937 = (panda$core$Int64) {607};
panda$core$String* $tmp1938 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1939, ((panda$core$Object*) param2));
panda$core$String* $tmp1940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1938, &$s1941);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1942, $tmp1937, $tmp1940);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1940));
// unreffing REF($508:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1938));
// unreffing REF($507:panda.core.String)
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
// line 614
*(&local0) = ((panda$core$String*) NULL);
// line 616
panda$core$Bit $tmp1943 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1944 = $tmp1943.value;
if ($tmp1944) goto block1; else goto block3;
block1:;
// line 617
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp1945 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1945));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 620
panda$core$Int64* $tmp1946 = &param3->$rawValue;
panda$core$Int64 $tmp1947 = *$tmp1946;
panda$core$Int64 $tmp1948 = (panda$core$Int64) {39};
panda$core$Bit $tmp1949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1947, $tmp1948);
bool $tmp1950 = $tmp1949.value;
if ($tmp1950) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp1951 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp1952 = *$tmp1951;
*(&local1) = $tmp1952;
panda$core$String** $tmp1953 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp1954 = *$tmp1953;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1954));
panda$core$String* $tmp1955 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1955));
*(&local2) = $tmp1954;
// line 622
panda$core$String* $tmp1956 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1956));
panda$core$String* $tmp1957 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1957));
*(&local0) = $tmp1956;
panda$core$String* $tmp1958 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1958));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 625
panda$core$Bit $tmp1959 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1960 = $tmp1959.value;
if ($tmp1960) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1961 = (panda$core$Int64) {625};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1962, $tmp1961);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 629
panda$collections$Array* $tmp1963 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1963);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1963));
panda$collections$Array* $tmp1964 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1964));
*(&local3) = $tmp1963;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1963));
// unreffing REF($61:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 630
ITable* $tmp1965 = ((panda$collections$Iterable*) param5)->$class->itable;
while ($tmp1965->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1965 = $tmp1965->next;
}
$fn1967 $tmp1966 = $tmp1965->methods[0];
panda$collections$Iterator* $tmp1968 = $tmp1966(((panda$collections$Iterable*) param5));
goto block9;
block9:;
ITable* $tmp1969 = $tmp1968->$class->itable;
while ($tmp1969->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1969 = $tmp1969->next;
}
$fn1971 $tmp1970 = $tmp1969->methods[0];
panda$core$Bit $tmp1972 = $tmp1970($tmp1968);
bool $tmp1973 = $tmp1972.value;
if ($tmp1973) goto block11; else goto block10;
block10:;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1974 = $tmp1968->$class->itable;
while ($tmp1974->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1974 = $tmp1974->next;
}
$fn1976 $tmp1975 = $tmp1974->methods[1];
panda$core$Object* $tmp1977 = $tmp1975($tmp1968);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1977)));
org$pandalanguage$pandac$ASTNode* $tmp1978 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1978));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) $tmp1977);
// line 631
panda$collections$Array* $tmp1979 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1980 = *(&local4);
org$pandalanguage$pandac$Type* $tmp1981 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1980);
panda$collections$Array$add$panda$collections$Array$T($tmp1979, ((panda$core$Object*) $tmp1981));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1981));
// unreffing REF($101:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1977);
// unreffing REF($89:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1982 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1982));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
// unreffing REF($78:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 633
org$pandalanguage$pandac$ChoiceCase* $tmp1983 = (org$pandalanguage$pandac$ChoiceCase*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceCase$class);
panda$core$String* $tmp1984 = *(&local0);
panda$collections$Array** $tmp1985 = &param1->choiceCases;
panda$collections$Array* $tmp1986 = *$tmp1985;
ITable* $tmp1987 = ((panda$collections$CollectionView*) $tmp1986)->$class->itable;
while ($tmp1987->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1987 = $tmp1987->next;
}
$fn1989 $tmp1988 = $tmp1987->methods[0];
panda$core$Int64 $tmp1990 = $tmp1988(((panda$collections$CollectionView*) $tmp1986));
panda$collections$Array* $tmp1991 = *(&local3);
org$pandalanguage$pandac$ChoiceCase$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1983, param1, param2, param4, $tmp1984, $tmp1990, ((panda$collections$ListView*) $tmp1991));
*(&local5) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
org$pandalanguage$pandac$ChoiceCase* $tmp1992 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1992));
*(&local5) = $tmp1983;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
// unreffing REF($120:org.pandalanguage.pandac.ChoiceCase)
// line 635
panda$collections$Array** $tmp1993 = &param1->choiceCases;
panda$collections$Array* $tmp1994 = *$tmp1993;
org$pandalanguage$pandac$ChoiceCase* $tmp1995 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp1994, ((panda$core$Object*) $tmp1995));
// line 636
org$pandalanguage$pandac$SymbolTable** $tmp1996 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1997 = *$tmp1996;
org$pandalanguage$pandac$ChoiceCase* $tmp1998 = *(&local5);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1997, ((org$pandalanguage$pandac$Symbol*) $tmp1998));
org$pandalanguage$pandac$ChoiceCase* $tmp1999 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1999));
// unreffing entry
*(&local5) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$collections$Array* $tmp2000 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2000));
// unreffing fields
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2001 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2001));
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
// line 643
*(&local0) = ((panda$core$String*) NULL);
// line 644
ITable* $tmp2003 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp2003->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2003 = $tmp2003->next;
}
$fn2005 $tmp2004 = $tmp2003->methods[1];
panda$core$Bit $tmp2006 = $tmp2004(((panda$core$Equatable*) param3), ((panda$core$Equatable*) &$s2002));
bool $tmp2007 = $tmp2006.value;
if ($tmp2007) goto block1; else goto block3;
block1:;
// line 645
panda$core$String* $tmp2008 = panda$core$String$convert$R$panda$core$String(param3);
panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2008, &$s2010);
panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2009, param8);
panda$core$String* $tmp2012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2011, &$s2013);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2012));
panda$core$String* $tmp2014 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2014));
*(&local0) = $tmp2012;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2012));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2011));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2009));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2008));
// unreffing REF($11:panda.core.String)
goto block2;
block3:;
// line 1
// line 648
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
panda$core$String* $tmp2015 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2015));
*(&local0) = param8;
goto block2;
block2:;
// line 650
*(&local1) = ((panda$core$String*) NULL);
// line 652
panda$core$Bit $tmp2016 = panda$core$Bit$init$builtin_bit(param5 == NULL);
bool $tmp2017 = $tmp2016.value;
if ($tmp2017) goto block4; else goto block6;
block4:;
// line 653
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp2018 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2018));
*(&local1) = ((panda$core$String*) NULL);
goto block5;
block6:;
// line 1
// line 656
panda$core$Int64* $tmp2019 = &param5->$rawValue;
panda$core$Int64 $tmp2020 = *$tmp2019;
panda$core$Int64 $tmp2021 = (panda$core$Int64) {39};
panda$core$Bit $tmp2022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2020, $tmp2021);
bool $tmp2023 = $tmp2022.value;
if ($tmp2023) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp2024 = (org$pandalanguage$pandac$Position*) (param5->$data + 0);
org$pandalanguage$pandac$Position $tmp2025 = *$tmp2024;
*(&local2) = $tmp2025;
panda$core$String** $tmp2026 = (panda$core$String**) (param5->$data + 16);
panda$core$String* $tmp2027 = *$tmp2026;
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2027));
panda$core$String* $tmp2028 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2028));
*(&local3) = $tmp2027;
// line 658
panda$core$String* $tmp2029 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2029));
panda$core$String* $tmp2030 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2030));
*(&local1) = $tmp2029;
panda$core$String* $tmp2031 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2031));
// unreffing text
*(&local3) = ((panda$core$String*) NULL);
goto block7;
block9:;
// line 661
panda$core$Bit $tmp2032 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2033 = $tmp2032.value;
if ($tmp2033) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp2034 = (panda$core$Int64) {661};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2035, $tmp2034);
abort(); // unreachable
block10:;
goto block7;
block7:;
goto block5;
block5:;
// line 665
org$pandalanguage$pandac$Annotations* $tmp2036 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param6);
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2036));
org$pandalanguage$pandac$Annotations* $tmp2037 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2037));
*(&local4) = $tmp2036;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2036));
// unreffing REF($104:org.pandalanguage.pandac.Annotations)
// line 666
panda$collections$Array* $tmp2038 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2038);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2038));
panda$collections$Array* $tmp2039 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2039));
*(&local5) = $tmp2038;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2038));
// unreffing REF($116:panda.collections.Array<org.pandalanguage.pandac.ClassDecl.GenericParameter>)
// line 667
panda$core$Bit $tmp2040 = panda$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2041 = $tmp2040.value;
if ($tmp2041) goto block12; else goto block13;
block12:;
// line 668
ITable* $tmp2042 = ((panda$collections$Iterable*) param9)->$class->itable;
while ($tmp2042->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2042 = $tmp2042->next;
}
$fn2044 $tmp2043 = $tmp2042->methods[0];
panda$collections$Iterator* $tmp2045 = $tmp2043(((panda$collections$Iterable*) param9));
goto block14;
block14:;
ITable* $tmp2046 = $tmp2045->$class->itable;
while ($tmp2046->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2046 = $tmp2046->next;
}
$fn2048 $tmp2047 = $tmp2046->methods[0];
panda$core$Bit $tmp2049 = $tmp2047($tmp2045);
bool $tmp2050 = $tmp2049.value;
if ($tmp2050) goto block16; else goto block15;
block15:;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2051 = $tmp2045->$class->itable;
while ($tmp2051->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2051 = $tmp2051->next;
}
$fn2053 $tmp2052 = $tmp2051->methods[1];
panda$core$Object* $tmp2054 = $tmp2052($tmp2045);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2054)));
org$pandalanguage$pandac$ASTNode* $tmp2055 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2055));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) $tmp2054);
// line 669
*(&local7) = ((panda$core$String*) NULL);
// line 670
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
// line 671
org$pandalanguage$pandac$ASTNode* $tmp2056 = *(&local6);
panda$core$Int64* $tmp2057 = &$tmp2056->$rawValue;
panda$core$Int64 $tmp2058 = *$tmp2057;
panda$core$Int64 $tmp2059 = (panda$core$Int64) {21};
panda$core$Bit $tmp2060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2058, $tmp2059);
bool $tmp2061 = $tmp2060.value;
if ($tmp2061) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp2062 = (org$pandalanguage$pandac$Position*) ($tmp2056->$data + 0);
org$pandalanguage$pandac$Position $tmp2063 = *$tmp2062;
panda$core$String** $tmp2064 = (panda$core$String**) ($tmp2056->$data + 16);
panda$core$String* $tmp2065 = *$tmp2064;
*(&local9) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2065));
panda$core$String* $tmp2066 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2066));
*(&local9) = $tmp2065;
// line 673
panda$core$String* $tmp2067 = *(&local9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2067));
panda$core$String* $tmp2068 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2068));
*(&local7) = $tmp2067;
// line 674
org$pandalanguage$pandac$Type* $tmp2069 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2069));
org$pandalanguage$pandac$Type* $tmp2070 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2070));
*(&local8) = $tmp2069;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2069));
// unreffing REF($189:org.pandalanguage.pandac.Type)
panda$core$String* $tmp2071 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2071));
// unreffing id
*(&local9) = ((panda$core$String*) NULL);
goto block17;
block19:;
panda$core$Int64 $tmp2072 = (panda$core$Int64) {45};
panda$core$Bit $tmp2073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2058, $tmp2072);
bool $tmp2074 = $tmp2073.value;
if ($tmp2074) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp2075 = (org$pandalanguage$pandac$Position*) ($tmp2056->$data + 0);
org$pandalanguage$pandac$Position $tmp2076 = *$tmp2075;
panda$core$String** $tmp2077 = (panda$core$String**) ($tmp2056->$data + 16);
panda$core$String* $tmp2078 = *$tmp2077;
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2078));
panda$core$String* $tmp2079 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2079));
*(&local10) = $tmp2078;
org$pandalanguage$pandac$ASTNode** $tmp2080 = (org$pandalanguage$pandac$ASTNode**) ($tmp2056->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2081 = *$tmp2080;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2081));
org$pandalanguage$pandac$ASTNode* $tmp2082 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2082));
*(&local11) = $tmp2081;
// line 677
panda$core$String* $tmp2083 = *(&local10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2083));
panda$core$String* $tmp2084 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2084));
*(&local7) = $tmp2083;
// line 678
org$pandalanguage$pandac$ASTNode* $tmp2085 = *(&local11);
org$pandalanguage$pandac$Type* $tmp2086 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2085);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2086));
org$pandalanguage$pandac$Type* $tmp2087 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2087));
*(&local8) = $tmp2086;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2086));
// unreffing REF($240:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$ASTNode* $tmp2088 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2088));
// unreffing type
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2089 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2089));
// unreffing id
*(&local10) = ((panda$core$String*) NULL);
goto block17;
block21:;
// line 681
panda$core$Bit $tmp2090 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2091 = $tmp2090.value;
if ($tmp2091) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp2092 = (panda$core$Int64) {681};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2093, $tmp2092);
abort(); // unreachable
block22:;
goto block17;
block17:;
// line 684
panda$collections$Array* $tmp2094 = *(&local5);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp2095 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
org$pandalanguage$pandac$ASTNode* $tmp2096 = *(&local6);
$fn2098 $tmp2097 = ($fn2098) $tmp2096->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2099 = $tmp2097($tmp2096);
panda$core$String* $tmp2100 = *(&local0);
panda$core$String* $tmp2101 = *(&local7);
org$pandalanguage$pandac$Type* $tmp2102 = *(&local8);
org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp2095, $tmp2099, $tmp2100, $tmp2101, $tmp2102);
panda$collections$Array$add$panda$collections$Array$T($tmp2094, ((panda$core$Object*) $tmp2095));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2095));
// unreffing REF($272:org.pandalanguage.pandac.ClassDecl.GenericParameter)
org$pandalanguage$pandac$Type* $tmp2103 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2103));
// unreffing bound
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp2104 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2104));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2054);
// unreffing REF($149:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2105 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2105));
// unreffing p
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block16:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2045));
// unreffing REF($138:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block13;
block13:;
// line 687
panda$collections$Array* $tmp2106 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2106);
*(&local12) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2106));
panda$collections$Array* $tmp2107 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
*(&local12) = $tmp2106;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2106));
// unreffing REF($309:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 688
panda$core$Bit $tmp2108 = panda$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2109 = $tmp2108.value;
if ($tmp2109) goto block24; else goto block25;
block24:;
// line 689
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2110;
$tmp2110 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2110->value = param7;
panda$core$Int64 $tmp2111 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2112 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2111);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2113;
$tmp2113 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2113->value = $tmp2112;
ITable* $tmp2114 = ((panda$core$Equatable*) $tmp2110)->$class->itable;
while ($tmp2114->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2114 = $tmp2114->next;
}
$fn2116 $tmp2115 = $tmp2114->methods[0];
panda$core$Bit $tmp2117 = $tmp2115(((panda$core$Equatable*) $tmp2110), ((panda$core$Equatable*) $tmp2113));
bool $tmp2118 = $tmp2117.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2113)));
// unreffing REF($332:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2110)));
// unreffing REF($328:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
if ($tmp2118) goto block26; else goto block27;
block26:;
// line 690
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param4, &$s2119);
goto block27;
block27:;
// line 692
ITable* $tmp2120 = ((panda$collections$Iterable*) param10)->$class->itable;
while ($tmp2120->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2120 = $tmp2120->next;
}
$fn2122 $tmp2121 = $tmp2120->methods[0];
panda$collections$Iterator* $tmp2123 = $tmp2121(((panda$collections$Iterable*) param10));
goto block28;
block28:;
ITable* $tmp2124 = $tmp2123->$class->itable;
while ($tmp2124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2124 = $tmp2124->next;
}
$fn2126 $tmp2125 = $tmp2124->methods[0];
panda$core$Bit $tmp2127 = $tmp2125($tmp2123);
bool $tmp2128 = $tmp2127.value;
if ($tmp2128) goto block30; else goto block29;
block29:;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2129 = $tmp2123->$class->itable;
while ($tmp2129->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2129 = $tmp2129->next;
}
$fn2131 $tmp2130 = $tmp2129->methods[1];
panda$core$Object* $tmp2132 = $tmp2130($tmp2123);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2132)));
org$pandalanguage$pandac$ASTNode* $tmp2133 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2133));
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) $tmp2132);
// line 693
panda$collections$Array* $tmp2134 = *(&local12);
org$pandalanguage$pandac$ASTNode* $tmp2135 = *(&local13);
org$pandalanguage$pandac$Type* $tmp2136 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2135);
panda$collections$Array$add$panda$collections$Array$T($tmp2134, ((panda$core$Object*) $tmp2136));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2136));
// unreffing REF($373:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp2132);
// unreffing REF($361:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2137 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2137));
// unreffing s
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block28;
block30:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2123));
// unreffing REF($350:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block25;
block25:;
// line 696
org$pandalanguage$pandac$ClassDecl* $tmp2138 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
panda$core$String* $tmp2139 = *(&local1);
org$pandalanguage$pandac$Annotations* $tmp2140 = *(&local4);
panda$core$String* $tmp2141 = *(&local0);
panda$collections$Array* $tmp2142 = *(&local12);
panda$collections$Array* $tmp2143 = *(&local5);
panda$core$Weak** $tmp2144 = &param0->compiler;
panda$core$Weak* $tmp2145 = *$tmp2144;
panda$core$Object* $tmp2146 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2145);
org$pandalanguage$pandac$SymbolTable** $tmp2147 = &((org$pandalanguage$pandac$Compiler*) $tmp2146)->root;
org$pandalanguage$pandac$SymbolTable* $tmp2148 = *$tmp2147;
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2138, param1, param4, param2, $tmp2139, $tmp2140, param7, $tmp2141, ((panda$collections$ListView*) $tmp2142), $tmp2143, $tmp2148);
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2138));
org$pandalanguage$pandac$ClassDecl* $tmp2149 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2149));
*(&local14) = $tmp2138;
panda$core$Panda$unref$panda$core$Object$Q($tmp2146);
// unreffing REF($403:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2138));
// unreffing REF($393:org.pandalanguage.pandac.ClassDecl)
// line 698
panda$core$Weak** $tmp2150 = &param0->compiler;
panda$core$Weak* $tmp2151 = *$tmp2150;
panda$core$Object* $tmp2152 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2151);
panda$collections$Stack** $tmp2153 = &((org$pandalanguage$pandac$Compiler*) $tmp2152)->currentClass;
panda$collections$Stack* $tmp2154 = *$tmp2153;
org$pandalanguage$pandac$ClassDecl* $tmp2155 = *(&local14);
panda$collections$Stack$push$panda$collections$Stack$T($tmp2154, ((panda$core$Object*) $tmp2155));
panda$core$Panda$unref$panda$core$Object$Q($tmp2152);
// unreffing REF($425:panda.core.Weak.T)
// line 699
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2156;
$tmp2156 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2156->value = param7;
panda$core$Int64 $tmp2157 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2158 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2157);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2159;
$tmp2159 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2159->value = $tmp2158;
ITable* $tmp2160 = ((panda$core$Equatable*) $tmp2156)->$class->itable;
while ($tmp2160->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2160 = $tmp2160->next;
}
$fn2162 $tmp2161 = $tmp2160->methods[0];
panda$core$Bit $tmp2163 = $tmp2161(((panda$core$Equatable*) $tmp2156), ((panda$core$Equatable*) $tmp2159));
bool $tmp2164 = $tmp2163.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2159)));
// unreffing REF($441:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2156)));
// unreffing REF($437:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
if ($tmp2164) goto block31; else goto block32;
block31:;
// line 700
org$pandalanguage$pandac$FieldDecl* $tmp2165 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2166 = *(&local14);
org$pandalanguage$pandac$ClassDecl* $tmp2167 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2168 = &$tmp2167->position;
org$pandalanguage$pandac$Position $tmp2169 = *$tmp2168;
org$pandalanguage$pandac$Annotations* $tmp2170 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2171 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2170, $tmp2171);
panda$core$Int64 $tmp2172 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp2173 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp2172);
org$pandalanguage$pandac$Type* $tmp2174 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp2165, $tmp2166, $tmp2169, ((panda$core$String*) NULL), $tmp2170, $tmp2173, &$s2175, $tmp2174, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2165));
org$pandalanguage$pandac$FieldDecl* $tmp2176 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2176));
*(&local15) = $tmp2165;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2174));
// unreffing REF($463:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2170));
// unreffing REF($458:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2165));
// unreffing REF($453:org.pandalanguage.pandac.FieldDecl)
// line 703
org$pandalanguage$pandac$ClassDecl* $tmp2177 = *(&local14);
panda$collections$Array** $tmp2178 = &$tmp2177->fields;
panda$collections$Array* $tmp2179 = *$tmp2178;
org$pandalanguage$pandac$FieldDecl* $tmp2180 = *(&local15);
panda$collections$Array$add$panda$collections$Array$T($tmp2179, ((panda$core$Object*) $tmp2180));
// line 704
org$pandalanguage$pandac$ClassDecl* $tmp2181 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2182 = &$tmp2181->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2183 = *$tmp2182;
org$pandalanguage$pandac$FieldDecl* $tmp2184 = *(&local15);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2183, ((org$pandalanguage$pandac$Symbol*) $tmp2184));
// line 705
org$pandalanguage$pandac$FieldDecl* $tmp2185 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2186 = *(&local14);
org$pandalanguage$pandac$ClassDecl* $tmp2187 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2188 = &$tmp2187->position;
org$pandalanguage$pandac$Position $tmp2189 = *$tmp2188;
org$pandalanguage$pandac$Annotations* $tmp2190 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2191 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2190, $tmp2191);
panda$core$Int64 $tmp2192 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp2193 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp2192);
org$pandalanguage$pandac$Type* $tmp2194 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp2185, $tmp2186, $tmp2189, ((panda$core$String*) NULL), $tmp2190, $tmp2193, &$s2195, $tmp2194, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
org$pandalanguage$pandac$FieldDecl* $tmp2196 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2196));
*(&local16) = $tmp2185;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2194));
// unreffing REF($507:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2190));
// unreffing REF($502:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
// unreffing REF($497:org.pandalanguage.pandac.FieldDecl)
// line 708
org$pandalanguage$pandac$ClassDecl* $tmp2197 = *(&local14);
panda$collections$Array** $tmp2198 = &$tmp2197->fields;
panda$collections$Array* $tmp2199 = *$tmp2198;
org$pandalanguage$pandac$FieldDecl* $tmp2200 = *(&local16);
panda$collections$Array$add$panda$collections$Array$T($tmp2199, ((panda$core$Object*) $tmp2200));
// line 709
org$pandalanguage$pandac$ClassDecl* $tmp2201 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2202 = &$tmp2201->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2203 = *$tmp2202;
org$pandalanguage$pandac$FieldDecl* $tmp2204 = *(&local16);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2203, ((org$pandalanguage$pandac$Symbol*) $tmp2204));
org$pandalanguage$pandac$FieldDecl* $tmp2205 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2205));
// unreffing data
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2206 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2206));
// unreffing rawValue
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block32;
block32:;
// line 711
ITable* $tmp2207 = ((panda$collections$Iterable*) param11)->$class->itable;
while ($tmp2207->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2207 = $tmp2207->next;
}
$fn2209 $tmp2208 = $tmp2207->methods[0];
panda$collections$Iterator* $tmp2210 = $tmp2208(((panda$collections$Iterable*) param11));
goto block33;
block33:;
ITable* $tmp2211 = $tmp2210->$class->itable;
while ($tmp2211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2211 = $tmp2211->next;
}
$fn2213 $tmp2212 = $tmp2211->methods[0];
panda$core$Bit $tmp2214 = $tmp2212($tmp2210);
bool $tmp2215 = $tmp2214.value;
if ($tmp2215) goto block35; else goto block34;
block34:;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2216 = $tmp2210->$class->itable;
while ($tmp2216->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2216 = $tmp2216->next;
}
$fn2218 $tmp2217 = $tmp2216->methods[1];
panda$core$Object* $tmp2219 = $tmp2217($tmp2210);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2219)));
org$pandalanguage$pandac$ASTNode* $tmp2220 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2220));
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) $tmp2219);
// line 712
org$pandalanguage$pandac$ASTNode* $tmp2221 = *(&local17);
panda$core$Int64* $tmp2222 = &$tmp2221->$rawValue;
panda$core$Int64 $tmp2223 = *$tmp2222;
panda$core$Int64 $tmp2224 = (panda$core$Int64) {27};
panda$core$Bit $tmp2225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2223, $tmp2224);
bool $tmp2226 = $tmp2225.value;
if ($tmp2226) goto block37; else goto block38;
block37:;
org$pandalanguage$pandac$Position* $tmp2227 = (org$pandalanguage$pandac$Position*) ($tmp2221->$data + 0);
org$pandalanguage$pandac$Position $tmp2228 = *$tmp2227;
*(&local18) = $tmp2228;
org$pandalanguage$pandac$ASTNode** $tmp2229 = (org$pandalanguage$pandac$ASTNode**) ($tmp2221->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2230 = *$tmp2229;
panda$collections$ImmutableArray** $tmp2231 = (panda$collections$ImmutableArray**) ($tmp2221->$data + 24);
panda$collections$ImmutableArray* $tmp2232 = *$tmp2231;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2233 = (org$pandalanguage$pandac$MethodDecl$Kind*) ($tmp2221->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2234 = *$tmp2233;
*(&local19) = $tmp2234;
panda$core$String** $tmp2235 = (panda$core$String**) ($tmp2221->$data + 40);
panda$core$String* $tmp2236 = *$tmp2235;
panda$collections$ImmutableArray** $tmp2237 = (panda$collections$ImmutableArray**) ($tmp2221->$data + 48);
panda$collections$ImmutableArray* $tmp2238 = *$tmp2237;
panda$collections$ImmutableArray** $tmp2239 = (panda$collections$ImmutableArray**) ($tmp2221->$data + 56);
panda$collections$ImmutableArray* $tmp2240 = *$tmp2239;
org$pandalanguage$pandac$ASTNode** $tmp2241 = (org$pandalanguage$pandac$ASTNode**) ($tmp2221->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2242 = *$tmp2241;
panda$collections$ImmutableArray** $tmp2243 = (panda$collections$ImmutableArray**) ($tmp2221->$data + 72);
panda$collections$ImmutableArray* $tmp2244 = *$tmp2243;
// line 714
org$pandalanguage$pandac$MethodDecl$Kind $tmp2245 = *(&local19);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2246;
$tmp2246 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2246->value = $tmp2245;
panda$core$Int64 $tmp2247 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2248 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2247);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2249;
$tmp2249 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2249->value = $tmp2248;
ITable* $tmp2250 = ((panda$core$Equatable*) $tmp2246)->$class->itable;
while ($tmp2250->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2250 = $tmp2250->next;
}
$fn2252 $tmp2251 = $tmp2250->methods[0];
panda$core$Bit $tmp2253 = $tmp2251(((panda$core$Equatable*) $tmp2246), ((panda$core$Equatable*) $tmp2249));
bool $tmp2254 = $tmp2253.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2249)));
// unreffing REF($608:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2246)));
// unreffing REF($604:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp2254) goto block39; else goto block40;
block39:;
// line 715
panda$core$Int64 $tmp2255 = param7.$rawValue;
panda$core$Int64 $tmp2256 = (panda$core$Int64) {0};
panda$core$Bit $tmp2257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2255, $tmp2256);
bool $tmp2258 = $tmp2257.value;
if ($tmp2258) goto block42; else goto block43;
block42:;
goto block41;
block43:;
panda$core$Int64 $tmp2259 = (panda$core$Int64) {1};
panda$core$Bit $tmp2260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2255, $tmp2259);
bool $tmp2261 = $tmp2260.value;
if ($tmp2261) goto block44; else goto block45;
block44:;
// line 720
org$pandalanguage$pandac$Position $tmp2262 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2262, &$s2263);
goto block41;
block45:;
panda$core$Int64 $tmp2264 = (panda$core$Int64) {2};
panda$core$Bit $tmp2265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2255, $tmp2264);
bool $tmp2266 = $tmp2265.value;
if ($tmp2266) goto block46; else goto block41;
block46:;
// line 723
org$pandalanguage$pandac$Position $tmp2267 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2267, &$s2268);
goto block41;
block41:;
goto block40;
block40:;
goto block36;
block38:;
goto block36;
block36:;
// line 732
org$pandalanguage$pandac$ClassDecl* $tmp2269 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp2270 = *(&local17);
org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(param0, $tmp2269, $tmp2270);
panda$core$Panda$unref$panda$core$Object$Q($tmp2219);
// unreffing REF($566:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2271 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2271));
// unreffing m
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block33;
block35:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2210));
// unreffing REF($555:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 734
panda$core$Bit $tmp2272 = panda$core$Bit$init$builtin_bit(false);
*(&local20) = $tmp2272;
// line 735
panda$core$Bit $tmp2273 = panda$core$Bit$init$builtin_bit(false);
*(&local21) = $tmp2273;
// line 736
org$pandalanguage$pandac$ClassDecl* $tmp2274 = *(&local14);
panda$collections$Array** $tmp2275 = &$tmp2274->methods;
panda$collections$Array* $tmp2276 = *$tmp2275;
ITable* $tmp2277 = ((panda$collections$Iterable*) $tmp2276)->$class->itable;
while ($tmp2277->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2277 = $tmp2277->next;
}
$fn2279 $tmp2278 = $tmp2277->methods[0];
panda$collections$Iterator* $tmp2280 = $tmp2278(((panda$collections$Iterable*) $tmp2276));
goto block47;
block47:;
ITable* $tmp2281 = $tmp2280->$class->itable;
while ($tmp2281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2281 = $tmp2281->next;
}
$fn2283 $tmp2282 = $tmp2281->methods[0];
panda$core$Bit $tmp2284 = $tmp2282($tmp2280);
bool $tmp2285 = $tmp2284.value;
if ($tmp2285) goto block49; else goto block48;
block48:;
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp2286 = $tmp2280->$class->itable;
while ($tmp2286->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2286 = $tmp2286->next;
}
$fn2288 $tmp2287 = $tmp2286->methods[1];
panda$core$Object* $tmp2289 = $tmp2287($tmp2280);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2289)));
org$pandalanguage$pandac$MethodDecl* $tmp2290 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2290));
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) $tmp2289);
// line 737
org$pandalanguage$pandac$MethodDecl* $tmp2291 = *(&local22);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2292 = &$tmp2291->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp2293 = *$tmp2292;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2294;
$tmp2294 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2294->value = $tmp2293;
panda$core$Int64 $tmp2295 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2296 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2295);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2297;
$tmp2297 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2297->value = $tmp2296;
ITable* $tmp2298 = ((panda$core$Equatable*) $tmp2294)->$class->itable;
while ($tmp2298->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2298 = $tmp2298->next;
}
$fn2300 $tmp2299 = $tmp2298->methods[0];
panda$core$Bit $tmp2301 = $tmp2299(((panda$core$Equatable*) $tmp2294), ((panda$core$Equatable*) $tmp2297));
bool $tmp2302 = $tmp2301.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2297)));
// unreffing REF($701:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2294)));
// unreffing REF($697:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp2302) goto block50; else goto block51;
block50:;
// line 738
panda$core$Bit $tmp2303 = panda$core$Bit$init$builtin_bit(true);
*(&local20) = $tmp2303;
goto block51;
block51:;
// line 740
org$pandalanguage$pandac$MethodDecl* $tmp2304 = *(&local22);
panda$core$String** $tmp2305 = &((org$pandalanguage$pandac$Symbol*) $tmp2304)->name;
panda$core$String* $tmp2306 = *$tmp2305;
panda$core$Bit $tmp2307 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2306, &$s2308);
bool $tmp2309 = $tmp2307.value;
if ($tmp2309) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$MethodDecl* $tmp2310 = *(&local22);
panda$collections$Array** $tmp2311 = &$tmp2310->parameters;
panda$collections$Array* $tmp2312 = *$tmp2311;
ITable* $tmp2313 = ((panda$collections$CollectionView*) $tmp2312)->$class->itable;
while ($tmp2313->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2313 = $tmp2313->next;
}
$fn2315 $tmp2314 = $tmp2313->methods[0];
panda$core$Int64 $tmp2316 = $tmp2314(((panda$collections$CollectionView*) $tmp2312));
panda$core$Int64 $tmp2317 = (panda$core$Int64) {0};
panda$core$Bit $tmp2318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2316, $tmp2317);
*(&local23) = $tmp2318;
goto block56;
block55:;
*(&local23) = $tmp2307;
goto block56;
block56:;
panda$core$Bit $tmp2319 = *(&local23);
bool $tmp2320 = $tmp2319.value;
if ($tmp2320) goto block52; else goto block53;
block52:;
// line 741
panda$core$Bit $tmp2321 = panda$core$Bit$init$builtin_bit(true);
*(&local21) = $tmp2321;
// line 742
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2322;
$tmp2322 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2322->value = param7;
panda$core$Int64 $tmp2323 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2324 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2323);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2325;
$tmp2325 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2325->value = $tmp2324;
ITable* $tmp2326 = ((panda$core$Equatable*) $tmp2322)->$class->itable;
while ($tmp2326->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2326 = $tmp2326->next;
}
$fn2328 $tmp2327 = $tmp2326->methods[0];
panda$core$Bit $tmp2329 = $tmp2327(((panda$core$Equatable*) $tmp2322), ((panda$core$Equatable*) $tmp2325));
bool $tmp2330 = $tmp2329.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2325)));
// unreffing REF($747:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2322)));
// unreffing REF($743:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
if ($tmp2330) goto block57; else goto block58;
block57:;
// line 743
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param4, &$s2331);
goto block58;
block58:;
goto block53;
block53:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2289);
// unreffing REF($685:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp2332 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2332));
// unreffing m
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block47;
block49:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2280));
// unreffing REF($674:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 747
panda$core$Bit $tmp2333 = *(&local20);
panda$core$Bit $tmp2334 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2333);
bool $tmp2335 = $tmp2334.value;
if ($tmp2335) goto block61; else goto block62;
block61:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2336;
$tmp2336 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2336->value = param7;
panda$core$Int64 $tmp2337 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2338 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2337);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2339;
$tmp2339 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2339->value = $tmp2338;
ITable* $tmp2340 = ((panda$core$Equatable*) $tmp2336)->$class->itable;
while ($tmp2340->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2340 = $tmp2340->next;
}
$fn2342 $tmp2341 = $tmp2340->methods[0];
panda$core$Bit $tmp2343 = $tmp2341(((panda$core$Equatable*) $tmp2336), ((panda$core$Equatable*) $tmp2339));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2339)));
// unreffing REF($783:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2336)));
// unreffing REF($779:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
*(&local25) = $tmp2343;
goto block63;
block62:;
*(&local25) = $tmp2334;
goto block63;
block63:;
panda$core$Bit $tmp2344 = *(&local25);
bool $tmp2345 = $tmp2344.value;
if ($tmp2345) goto block64; else goto block65;
block64:;
org$pandalanguage$pandac$ClassDecl* $tmp2346 = *(&local14);
panda$core$String** $tmp2347 = &$tmp2346->name;
panda$core$String* $tmp2348 = *$tmp2347;
ITable* $tmp2350 = ((panda$core$Equatable*) $tmp2348)->$class->itable;
while ($tmp2350->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2350 = $tmp2350->next;
}
$fn2352 $tmp2351 = $tmp2350->methods[1];
panda$core$Bit $tmp2353 = $tmp2351(((panda$core$Equatable*) $tmp2348), ((panda$core$Equatable*) &$s2349));
*(&local24) = $tmp2353;
goto block66;
block65:;
*(&local24) = $tmp2344;
goto block66;
block66:;
panda$core$Bit $tmp2354 = *(&local24);
bool $tmp2355 = $tmp2354.value;
if ($tmp2355) goto block59; else goto block60;
block59:;
// line 748
org$pandalanguage$pandac$MethodDecl* $tmp2356 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2357 = *(&local14);
org$pandalanguage$pandac$Annotations* $tmp2358 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2359 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2358, $tmp2359);
panda$core$Int64 $tmp2360 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2361 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2360);
panda$collections$Array* $tmp2362 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2362);
panda$collections$Array* $tmp2363 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2363);
org$pandalanguage$pandac$Type* $tmp2364 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2365 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2365);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2356, $tmp2357, param4, ((panda$core$String*) NULL), $tmp2358, $tmp2361, &$s2366, $tmp2362, $tmp2363, $tmp2364, $tmp2365);
*(&local26) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2356));
org$pandalanguage$pandac$MethodDecl* $tmp2367 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2367));
*(&local26) = $tmp2356;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2365));
// unreffing REF($830:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2364));
// unreffing REF($829:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2363));
// unreffing REF($826:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2362));
// unreffing REF($822:panda.collections.Array<org.pandalanguage.pandac.ClassDecl.GenericParameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2358));
// unreffing REF($817:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2356));
// unreffing REF($815:org.pandalanguage.pandac.MethodDecl)
// line 752
org$pandalanguage$pandac$ClassDecl* $tmp2368 = *(&local14);
panda$collections$Array** $tmp2369 = &$tmp2368->methods;
panda$collections$Array* $tmp2370 = *$tmp2369;
org$pandalanguage$pandac$MethodDecl* $tmp2371 = *(&local26);
panda$collections$Array$add$panda$collections$Array$T($tmp2370, ((panda$core$Object*) $tmp2371));
// line 753
org$pandalanguage$pandac$ClassDecl* $tmp2372 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2373 = &$tmp2372->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2374 = *$tmp2373;
org$pandalanguage$pandac$MethodDecl* $tmp2375 = *(&local26);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2374, ((org$pandalanguage$pandac$Symbol*) $tmp2375));
org$pandalanguage$pandac$MethodDecl* $tmp2376 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2376));
// unreffing defaultInit
*(&local26) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block60;
block60:;
// line 755
panda$core$Bit $tmp2377 = *(&local21);
panda$core$Bit $tmp2378 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2377);
bool $tmp2379 = $tmp2378.value;
if ($tmp2379) goto block69; else goto block70;
block69:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2380;
$tmp2380 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2380->value = param7;
panda$core$Int64 $tmp2381 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2382 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2381);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2383;
$tmp2383 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2383->value = $tmp2382;
ITable* $tmp2384 = ((panda$core$Equatable*) $tmp2380)->$class->itable;
while ($tmp2384->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2384 = $tmp2384->next;
}
$fn2386 $tmp2385 = $tmp2384->methods[0];
panda$core$Bit $tmp2387 = $tmp2385(((panda$core$Equatable*) $tmp2380), ((panda$core$Equatable*) $tmp2383));
bool $tmp2388 = $tmp2387.value;
if ($tmp2388) goto block72; else goto block73;
block72:;
*(&local29) = $tmp2387;
goto block74;
block73:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2389;
$tmp2389 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2389->value = param7;
panda$core$Int64 $tmp2390 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2391 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2390);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2392;
$tmp2392 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2392->value = $tmp2391;
ITable* $tmp2393 = ((panda$core$Equatable*) $tmp2389)->$class->itable;
while ($tmp2393->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2393 = $tmp2393->next;
}
$fn2395 $tmp2394 = $tmp2393->methods[0];
panda$core$Bit $tmp2396 = $tmp2394(((panda$core$Equatable*) $tmp2389), ((panda$core$Equatable*) $tmp2392));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2392)));
// unreffing REF($901:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2389)));
// unreffing REF($897:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
*(&local29) = $tmp2396;
goto block74;
block74:;
panda$core$Bit $tmp2397 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2383)));
// unreffing REF($890:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2380)));
// unreffing REF($886:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
*(&local28) = $tmp2397;
goto block71;
block70:;
*(&local28) = $tmp2378;
goto block71;
block71:;
panda$core$Bit $tmp2398 = *(&local28);
bool $tmp2399 = $tmp2398.value;
if ($tmp2399) goto block75; else goto block76;
block75:;
org$pandalanguage$pandac$ClassDecl* $tmp2400 = *(&local14);
panda$core$String** $tmp2401 = &$tmp2400->name;
panda$core$String* $tmp2402 = *$tmp2401;
ITable* $tmp2404 = ((panda$core$Equatable*) $tmp2402)->$class->itable;
while ($tmp2404->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2404 = $tmp2404->next;
}
$fn2406 $tmp2405 = $tmp2404->methods[1];
panda$core$Bit $tmp2407 = $tmp2405(((panda$core$Equatable*) $tmp2402), ((panda$core$Equatable*) &$s2403));
*(&local27) = $tmp2407;
goto block77;
block76:;
*(&local27) = $tmp2398;
goto block77;
block77:;
panda$core$Bit $tmp2408 = *(&local27);
bool $tmp2409 = $tmp2408.value;
if ($tmp2409) goto block67; else goto block68;
block67:;
// line 757
org$pandalanguage$pandac$MethodDecl* $tmp2410 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2411 = *(&local14);
org$pandalanguage$pandac$Annotations* $tmp2412 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2413 = (panda$core$Int64) {32};
panda$core$Int64 $tmp2414 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp2415 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2413, $tmp2414);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2412, $tmp2415);
panda$core$Int64 $tmp2416 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2417 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2416);
panda$collections$Array* $tmp2418 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2418);
panda$collections$Array* $tmp2419 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2419);
org$pandalanguage$pandac$Type* $tmp2420 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2421 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2421);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2410, $tmp2411, param4, ((panda$core$String*) NULL), $tmp2412, $tmp2417, &$s2422, $tmp2418, $tmp2419, $tmp2420, $tmp2421);
*(&local30) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
org$pandalanguage$pandac$MethodDecl* $tmp2423 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2423));
*(&local30) = $tmp2410;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2421));
// unreffing REF($959:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2420));
// unreffing REF($958:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2419));
// unreffing REF($955:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2418));
// unreffing REF($951:panda.collections.Array<org.pandalanguage.pandac.ClassDecl.GenericParameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2412));
// unreffing REF($944:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
// unreffing REF($942:org.pandalanguage.pandac.MethodDecl)
// line 761
org$pandalanguage$pandac$ClassDecl* $tmp2424 = *(&local14);
panda$collections$Array** $tmp2425 = &$tmp2424->methods;
panda$collections$Array* $tmp2426 = *$tmp2425;
org$pandalanguage$pandac$MethodDecl* $tmp2427 = *(&local30);
panda$collections$Array$add$panda$collections$Array$T($tmp2426, ((panda$core$Object*) $tmp2427));
// line 762
org$pandalanguage$pandac$ClassDecl* $tmp2428 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2429 = &$tmp2428->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2430 = *$tmp2429;
org$pandalanguage$pandac$MethodDecl* $tmp2431 = *(&local30);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2430, ((org$pandalanguage$pandac$Symbol*) $tmp2431));
org$pandalanguage$pandac$MethodDecl* $tmp2432 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2432));
// unreffing defaultCleanup
*(&local30) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block68;
block68:;
// line 764
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2433;
$tmp2433 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2433->value = param7;
panda$core$Int64 $tmp2434 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2435 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2434);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2436;
$tmp2436 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2436->value = $tmp2435;
ITable* $tmp2437 = ((panda$core$Equatable*) $tmp2433)->$class->itable;
while ($tmp2437->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2437 = $tmp2437->next;
}
$fn2439 $tmp2438 = $tmp2437->methods[0];
panda$core$Bit $tmp2440 = $tmp2438(((panda$core$Equatable*) $tmp2433), ((panda$core$Equatable*) $tmp2436));
bool $tmp2441 = $tmp2440.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2436)));
// unreffing REF($1015:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2433)));
// unreffing REF($1011:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
if ($tmp2441) goto block78; else goto block79;
block78:;
// line 765
panda$core$Bit $tmp2442 = panda$core$Bit$init$builtin_bit(false);
*(&local31) = $tmp2442;
// line 766
org$pandalanguage$pandac$ClassDecl* $tmp2443 = *(&local14);
panda$collections$Array** $tmp2444 = &$tmp2443->choiceCases;
panda$collections$Array* $tmp2445 = *$tmp2444;
ITable* $tmp2446 = ((panda$collections$CollectionView*) $tmp2445)->$class->itable;
while ($tmp2446->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2446 = $tmp2446->next;
}
$fn2448 $tmp2447 = $tmp2446->methods[0];
panda$core$Int64 $tmp2449 = $tmp2447(((panda$collections$CollectionView*) $tmp2445));
panda$core$Int64 $tmp2450 = (panda$core$Int64) {0};
int64_t $tmp2451 = $tmp2449.value;
int64_t $tmp2452 = $tmp2450.value;
bool $tmp2453 = $tmp2451 > $tmp2452;
panda$core$Bit $tmp2454 = (panda$core$Bit) {$tmp2453};
bool $tmp2455 = $tmp2454.value;
if ($tmp2455) goto block80; else goto block82;
block80:;
// line 767
org$pandalanguage$pandac$ClassDecl* $tmp2456 = *(&local14);
panda$collections$Array** $tmp2457 = &$tmp2456->choiceCases;
panda$collections$Array* $tmp2458 = *$tmp2457;
ITable* $tmp2459 = ((panda$collections$Iterable*) $tmp2458)->$class->itable;
while ($tmp2459->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2459 = $tmp2459->next;
}
$fn2461 $tmp2460 = $tmp2459->methods[0];
panda$collections$Iterator* $tmp2462 = $tmp2460(((panda$collections$Iterable*) $tmp2458));
goto block83;
block83:;
ITable* $tmp2463 = $tmp2462->$class->itable;
while ($tmp2463->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2463 = $tmp2463->next;
}
$fn2465 $tmp2464 = $tmp2463->methods[0];
panda$core$Bit $tmp2466 = $tmp2464($tmp2462);
bool $tmp2467 = $tmp2466.value;
if ($tmp2467) goto block85; else goto block84;
block84:;
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
ITable* $tmp2468 = $tmp2462->$class->itable;
while ($tmp2468->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2468 = $tmp2468->next;
}
$fn2470 $tmp2469 = $tmp2468->methods[1];
panda$core$Object* $tmp2471 = $tmp2469($tmp2462);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ChoiceCase*) $tmp2471)));
org$pandalanguage$pandac$ChoiceCase* $tmp2472 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2472));
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) $tmp2471);
// line 768
org$pandalanguage$pandac$ChoiceCase* $tmp2473 = *(&local32);
panda$collections$Array** $tmp2474 = &$tmp2473->fields;
panda$collections$Array* $tmp2475 = *$tmp2474;
ITable* $tmp2476 = ((panda$collections$CollectionView*) $tmp2475)->$class->itable;
while ($tmp2476->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2476 = $tmp2476->next;
}
$fn2478 $tmp2477 = $tmp2476->methods[0];
panda$core$Int64 $tmp2479 = $tmp2477(((panda$collections$CollectionView*) $tmp2475));
panda$core$Int64 $tmp2480 = (panda$core$Int64) {0};
int64_t $tmp2481 = $tmp2479.value;
int64_t $tmp2482 = $tmp2480.value;
bool $tmp2483 = $tmp2481 > $tmp2482;
panda$core$Bit $tmp2484 = (panda$core$Bit) {$tmp2483};
bool $tmp2485 = $tmp2484.value;
if ($tmp2485) goto block86; else goto block87;
block86:;
// line 769
panda$core$Bit $tmp2486 = panda$core$Bit$init$builtin_bit(true);
*(&local31) = $tmp2486;
// line 770
panda$core$Panda$unref$panda$core$Object$Q($tmp2471);
// unreffing REF($1061:panda.collections.Iterator.T)
org$pandalanguage$pandac$ChoiceCase* $tmp2487 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2487));
// unreffing e
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
goto block85;
block87:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2471);
// unreffing REF($1061:panda.collections.Iterator.T)
org$pandalanguage$pandac$ChoiceCase* $tmp2488 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2488));
// unreffing e
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
goto block83;
block85:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2462));
// unreffing REF($1050:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block81;
block82:;
// line 1
// line 775
org$pandalanguage$pandac$ClassDecl* $tmp2489 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2490 = &$tmp2489->position;
org$pandalanguage$pandac$Position $tmp2491 = *$tmp2490;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2491, &$s2492);
// line 776
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp2493 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2493));
// unreffing result
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp2494 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2494));
// unreffing supertypes
*(&local12) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2495 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2495));
// unreffing parameters
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp2496 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2496));
// unreffing annotations
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp2497 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
// unreffing doccomment
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2498 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ClassDecl*) NULL);
block81:;
// line 778
panda$core$Bit $tmp2499 = *(&local31);
panda$core$Bit $tmp2500 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2499);
bool $tmp2501 = $tmp2500.value;
if ($tmp2501) goto block88; else goto block89;
block88:;
// line 779
org$pandalanguage$pandac$ClassDecl* $tmp2502 = *(&local14);
org$pandalanguage$pandac$Type* $tmp2503 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2503));
org$pandalanguage$pandac$Type** $tmp2504 = &$tmp2502->rawSuper;
org$pandalanguage$pandac$Type* $tmp2505 = *$tmp2504;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2505));
org$pandalanguage$pandac$Type** $tmp2506 = &$tmp2502->rawSuper;
*$tmp2506 = $tmp2503;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2503));
// unreffing REF($1156:org.pandalanguage.pandac.Type)
goto block89;
block89:;
goto block79;
block79:;
// line 782
panda$core$Weak** $tmp2507 = &param0->compiler;
panda$core$Weak* $tmp2508 = *$tmp2507;
panda$core$Object* $tmp2509 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2508);
panda$collections$Stack** $tmp2510 = &((org$pandalanguage$pandac$Compiler*) $tmp2509)->currentClass;
panda$collections$Stack* $tmp2511 = *$tmp2510;
panda$core$Object* $tmp2512 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2511);
panda$core$Panda$unref$panda$core$Object$Q($tmp2512);
// unreffing REF($1180:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp2509);
// unreffing REF($1175:panda.core.Weak.T)
// line 783
org$pandalanguage$pandac$ClassDecl* $tmp2513 = *(&local14);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2513));
org$pandalanguage$pandac$ClassDecl* $tmp2514 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2514));
// unreffing result
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp2515 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2515));
// unreffing supertypes
*(&local12) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2516 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2516));
// unreffing parameters
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp2517 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2517));
// unreffing annotations
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp2518 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2518));
// unreffing doccomment
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2519 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2519));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
return $tmp2513;

}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ClassDecl* param1, panda$collections$Array* param2) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
// line 787
panda$collections$Array$add$panda$collections$Array$T(param2, ((panda$core$Object*) param1));
// line 788
panda$collections$Array** $tmp2520 = &param1->classes;
panda$collections$Array* $tmp2521 = *$tmp2520;
ITable* $tmp2522 = ((panda$collections$Iterable*) $tmp2521)->$class->itable;
while ($tmp2522->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2522 = $tmp2522->next;
}
$fn2524 $tmp2523 = $tmp2522->methods[0];
panda$collections$Iterator* $tmp2525 = $tmp2523(((panda$collections$Iterable*) $tmp2521));
goto block1;
block1:;
ITable* $tmp2526 = $tmp2525->$class->itable;
while ($tmp2526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2526 = $tmp2526->next;
}
$fn2528 $tmp2527 = $tmp2526->methods[0];
panda$core$Bit $tmp2529 = $tmp2527($tmp2525);
bool $tmp2530 = $tmp2529.value;
if ($tmp2530) goto block3; else goto block2;
block2:;
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
ITable* $tmp2531 = $tmp2525->$class->itable;
while ($tmp2531->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2531 = $tmp2531->next;
}
$fn2533 $tmp2532 = $tmp2531->methods[1];
panda$core$Object* $tmp2534 = $tmp2532($tmp2525);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp2534)));
org$pandalanguage$pandac$ClassDecl* $tmp2535 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2535));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) $tmp2534);
// line 789
org$pandalanguage$pandac$ClassDecl* $tmp2536 = *(&local0);
org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, $tmp2536, param2);
panda$core$Panda$unref$panda$core$Object$Q($tmp2534);
// unreffing REF($21:panda.collections.Iterator.T)
org$pandalanguage$pandac$ClassDecl* $tmp2537 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2537));
// unreffing inner
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2525));
// unreffing REF($10:panda.collections.Iterator<panda.collections.Iterable.T>)
return;

}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* param0, panda$io$File* param1, panda$collections$MapView* param2, panda$core$String* param3, panda$collections$List* param4) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$MethodDecl* local1 = NULL;
org$pandalanguage$pandac$MethodDecl* local2 = NULL;
// line 795
org$pandalanguage$pandac$ClassDecl** $tmp2538 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2539 = *$tmp2538;
panda$core$Bit $tmp2540 = panda$core$Bit$init$builtin_bit($tmp2539 == NULL);
bool $tmp2541 = $tmp2540.value;
if ($tmp2541) goto block1; else goto block2;
block1:;
// line 796
*(&local0) = ((panda$core$String*) NULL);
// line 797
ITable* $tmp2543 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp2543->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2543 = $tmp2543->next;
}
$fn2545 $tmp2544 = $tmp2543->methods[1];
panda$core$Bit $tmp2546 = $tmp2544(((panda$core$Equatable*) param3), ((panda$core$Equatable*) &$s2542));
bool $tmp2547 = $tmp2546.value;
if ($tmp2547) goto block3; else goto block5;
block3:;
// line 798
panda$core$String* $tmp2548 = panda$core$String$convert$R$panda$core$String(param3);
panda$core$String* $tmp2549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2548, &$s2550);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2549));
panda$core$String* $tmp2551 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2551));
*(&local0) = $tmp2549;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2549));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2548));
// unreffing REF($18:panda.core.String)
goto block4;
block5:;
// line 1
// line 801
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2552));
panda$core$String* $tmp2553 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2553));
*(&local0) = &$s2554;
goto block4;
block4:;
// line 803
org$pandalanguage$pandac$ClassDecl* $tmp2555 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
org$pandalanguage$pandac$Position $tmp2556 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2557 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
org$pandalanguage$pandac$Annotations$init($tmp2557);
panda$core$Int64 $tmp2558 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2559 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2558);
panda$core$String* $tmp2560 = *(&local0);
panda$collections$Array* $tmp2561 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2561);
panda$collections$Array* $tmp2562 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2562);
panda$core$Weak** $tmp2563 = &param0->compiler;
panda$core$Weak* $tmp2564 = *$tmp2563;
panda$core$Object* $tmp2565 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2564);
org$pandalanguage$pandac$SymbolTable** $tmp2566 = &((org$pandalanguage$pandac$Compiler*) $tmp2565)->root;
org$pandalanguage$pandac$SymbolTable* $tmp2567 = *$tmp2566;
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2555, param1, $tmp2556, param2, ((panda$core$String*) NULL), $tmp2557, $tmp2559, $tmp2560, ((panda$collections$ListView*) $tmp2561), $tmp2562, $tmp2567);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2555));
org$pandalanguage$pandac$ClassDecl** $tmp2568 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2569 = *$tmp2568;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
org$pandalanguage$pandac$ClassDecl** $tmp2570 = &param0->bareCodeClass;
*$tmp2570 = $tmp2555;
panda$core$Panda$unref$panda$core$Object$Q($tmp2565);
// unreffing REF($60:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2562));
// unreffing REF($54:panda.collections.Array<org.pandalanguage.pandac.ClassDecl.GenericParameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2561));
// unreffing REF($50:panda.collections.Array<org.pandalanguage.pandac.Type>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2557));
// unreffing REF($45:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2555));
// unreffing REF($43:org.pandalanguage.pandac.ClassDecl)
// line 806
org$pandalanguage$pandac$ClassDecl** $tmp2571 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2572 = *$tmp2571;
ITable* $tmp2573 = ((panda$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp2573->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
    $tmp2573 = $tmp2573->next;
}
$fn2575 $tmp2574 = $tmp2573->methods[0];
$tmp2574(((panda$collections$CollectionWriter*) param4), ((panda$core$Object*) $tmp2572));
// line 807
org$pandalanguage$pandac$MethodDecl* $tmp2576 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2577 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2578 = *$tmp2577;
org$pandalanguage$pandac$Position $tmp2579 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2580 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2581 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2580, $tmp2581);
panda$core$Int64 $tmp2582 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2583 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2582);
panda$collections$Array* $tmp2584 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2584);
panda$collections$Array* $tmp2585 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2585);
org$pandalanguage$pandac$Type* $tmp2586 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2587 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2587);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2576, $tmp2578, $tmp2579, ((panda$core$String*) NULL), $tmp2580, $tmp2583, &$s2588, $tmp2584, $tmp2585, $tmp2586, $tmp2587);
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2576));
org$pandalanguage$pandac$MethodDecl* $tmp2589 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2589));
*(&local1) = $tmp2576;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2587));
// unreffing REF($116:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2586));
// unreffing REF($115:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2585));
// unreffing REF($112:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2584));
// unreffing REF($108:panda.collections.Array<org.pandalanguage.pandac.ClassDecl.GenericParameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2580));
// unreffing REF($103:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2576));
// unreffing REF($98:org.pandalanguage.pandac.MethodDecl)
// line 811
org$pandalanguage$pandac$ClassDecl** $tmp2590 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2591 = *$tmp2590;
panda$collections$Array** $tmp2592 = &$tmp2591->methods;
panda$collections$Array* $tmp2593 = *$tmp2592;
org$pandalanguage$pandac$MethodDecl* $tmp2594 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp2593, ((panda$core$Object*) $tmp2594));
// line 812
org$pandalanguage$pandac$ClassDecl** $tmp2595 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2596 = *$tmp2595;
org$pandalanguage$pandac$SymbolTable** $tmp2597 = &$tmp2596->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2598 = *$tmp2597;
org$pandalanguage$pandac$MethodDecl* $tmp2599 = *(&local1);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2598, ((org$pandalanguage$pandac$Symbol*) $tmp2599));
// line 813
org$pandalanguage$pandac$MethodDecl* $tmp2600 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2601 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2602 = *$tmp2601;
org$pandalanguage$pandac$Position $tmp2603 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2604 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2605 = (panda$core$Int64) {32};
panda$core$Int64 $tmp2606 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp2607 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2605, $tmp2606);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2604, $tmp2607);
panda$core$Int64 $tmp2608 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2609 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2608);
panda$collections$Array* $tmp2610 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2610);
panda$collections$Array* $tmp2611 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2611);
org$pandalanguage$pandac$Type* $tmp2612 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2613 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2613);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2600, $tmp2602, $tmp2603, ((panda$core$String*) NULL), $tmp2604, $tmp2609, &$s2614, $tmp2610, $tmp2611, $tmp2612, $tmp2613);
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2600));
org$pandalanguage$pandac$MethodDecl* $tmp2615 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2615));
*(&local2) = $tmp2600;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2613));
// unreffing REF($186:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2612));
// unreffing REF($185:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2611));
// unreffing REF($182:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2610));
// unreffing REF($178:panda.collections.Array<org.pandalanguage.pandac.ClassDecl.GenericParameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2604));
// unreffing REF($171:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2600));
// unreffing REF($166:org.pandalanguage.pandac.MethodDecl)
// line 817
org$pandalanguage$pandac$ClassDecl** $tmp2616 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2617 = *$tmp2616;
panda$collections$Array** $tmp2618 = &$tmp2617->methods;
panda$collections$Array* $tmp2619 = *$tmp2618;
org$pandalanguage$pandac$MethodDecl* $tmp2620 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2619, ((panda$core$Object*) $tmp2620));
// line 818
org$pandalanguage$pandac$ClassDecl** $tmp2621 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2622 = *$tmp2621;
org$pandalanguage$pandac$SymbolTable** $tmp2623 = &$tmp2622->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2624 = *$tmp2623;
org$pandalanguage$pandac$MethodDecl* $tmp2625 = *(&local2);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2624, ((org$pandalanguage$pandac$Symbol*) $tmp2625));
org$pandalanguage$pandac$MethodDecl* $tmp2626 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2626));
// unreffing defaultCleanup
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2627 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2627));
// unreffing defaultInit
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$String* $tmp2628 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2628));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2) {

panda$io$File** $tmp2629 = &param0->source;
panda$io$File* $tmp2630 = *$tmp2629;
panda$core$Bit $tmp2631 = panda$core$Bit$init$builtin_bit($tmp2630 != NULL);
bool $tmp2632 = $tmp2631.value;
if ($tmp2632) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2633 = (panda$core$Int64) {823};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2634, $tmp2633, &$s2635);
abort(); // unreachable
block1:;
// line 824
panda$core$Weak** $tmp2636 = &param0->compiler;
panda$core$Weak* $tmp2637 = *$tmp2636;
panda$core$Object* $tmp2638 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2637);
panda$io$File** $tmp2639 = &param0->source;
panda$io$File* $tmp2640 = *$tmp2639;
org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2638), $tmp2640, param1, param2);
panda$core$Panda$unref$panda$core$Object$Q($tmp2638);
// unreffing REF($13:panda.core.Weak.T)
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
// line 828
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp2641 = &param0->source;
panda$io$File* $tmp2642 = *$tmp2641;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2642));
panda$io$File** $tmp2643 = &param0->source;
*$tmp2643 = param1;
// line 829
panda$core$Int64* $tmp2644 = &param2->$rawValue;
panda$core$Int64 $tmp2645 = *$tmp2644;
panda$core$Int64 $tmp2646 = (panda$core$Int64) {18};
panda$core$Bit $tmp2647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2645, $tmp2646);
bool $tmp2648 = $tmp2647.value;
if ($tmp2648) goto block2; else goto block3;
block2:;
panda$collections$ImmutableArray** $tmp2649 = (panda$collections$ImmutableArray**) (param2->$data + 0);
panda$collections$ImmutableArray* $tmp2650 = *$tmp2649;
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2650));
panda$collections$ImmutableArray* $tmp2651 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2651));
*(&local0) = $tmp2650;
// line 831
panda$collections$Array* $tmp2652 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2652);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2652));
panda$collections$Array* $tmp2653 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2653));
*(&local1) = $tmp2652;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2652));
// unreffing REF($27:panda.collections.Array<org.pandalanguage.pandac.ClassDecl>)
// line 832
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2654));
panda$core$String* $tmp2655 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2655));
*(&local2) = &$s2656;
// line 833
panda$collections$HashMap* $tmp2657 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp2657);
*(&local3) = ((panda$collections$HashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2657));
panda$collections$HashMap* $tmp2658 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2658));
*(&local3) = $tmp2657;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2657));
// unreffing REF($49:panda.collections.HashMap<panda.core.String, panda.core.String>)
// line 834
panda$collections$ImmutableArray* $tmp2659 = *(&local0);
ITable* $tmp2660 = ((panda$collections$Iterable*) $tmp2659)->$class->itable;
while ($tmp2660->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2660 = $tmp2660->next;
}
$fn2662 $tmp2661 = $tmp2660->methods[0];
panda$collections$Iterator* $tmp2663 = $tmp2661(((panda$collections$Iterable*) $tmp2659));
goto block4;
block4:;
ITable* $tmp2664 = $tmp2663->$class->itable;
while ($tmp2664->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2664 = $tmp2664->next;
}
$fn2666 $tmp2665 = $tmp2664->methods[0];
panda$core$Bit $tmp2667 = $tmp2665($tmp2663);
bool $tmp2668 = $tmp2667.value;
if ($tmp2668) goto block6; else goto block5;
block5:;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2669 = $tmp2663->$class->itable;
while ($tmp2669->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2669 = $tmp2669->next;
}
$fn2671 $tmp2670 = $tmp2669->methods[1];
panda$core$Object* $tmp2672 = $tmp2670($tmp2663);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2672)));
org$pandalanguage$pandac$ASTNode* $tmp2673 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2673));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) $tmp2672);
// line 835
org$pandalanguage$pandac$ASTNode* $tmp2674 = *(&local4);
panda$core$Int64* $tmp2675 = &$tmp2674->$rawValue;
panda$core$Int64 $tmp2676 = *$tmp2675;
panda$core$Int64 $tmp2677 = (panda$core$Int64) {31};
panda$core$Bit $tmp2678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2676, $tmp2677);
bool $tmp2679 = $tmp2678.value;
if ($tmp2679) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp2680 = (org$pandalanguage$pandac$Position*) ($tmp2674->$data + 0);
org$pandalanguage$pandac$Position $tmp2681 = *$tmp2680;
panda$core$String** $tmp2682 = (panda$core$String**) ($tmp2674->$data + 16);
panda$core$String* $tmp2683 = *$tmp2682;
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2683));
panda$core$String* $tmp2684 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2684));
*(&local5) = $tmp2683;
// line 837
panda$core$String* $tmp2685 = *(&local5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2685));
panda$core$String* $tmp2686 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2686));
*(&local2) = $tmp2685;
panda$core$String* $tmp2687 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2687));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
goto block7;
block9:;
panda$core$Int64 $tmp2688 = (panda$core$Int64) {47};
panda$core$Bit $tmp2689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2676, $tmp2688);
bool $tmp2690 = $tmp2689.value;
if ($tmp2690) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp2691 = (org$pandalanguage$pandac$Position*) ($tmp2674->$data + 0);
org$pandalanguage$pandac$Position $tmp2692 = *$tmp2691;
panda$core$String** $tmp2693 = (panda$core$String**) ($tmp2674->$data + 16);
panda$core$String* $tmp2694 = *$tmp2693;
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2694));
panda$core$String* $tmp2695 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2695));
*(&local6) = $tmp2694;
// line 840
panda$core$String* $tmp2696 = *(&local6);
panda$core$String$Index$nullable $tmp2697 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q($tmp2696, &$s2698);
*(&local7) = $tmp2697;
// line 841
*(&local8) = ((panda$core$String*) NULL);
// line 842
panda$core$String$Index$nullable $tmp2699 = *(&local7);
panda$core$Bit $tmp2700 = panda$core$Bit$init$builtin_bit($tmp2699.nonnull);
bool $tmp2701 = $tmp2700.value;
if ($tmp2701) goto block12; else goto block14;
block12:;
// line 843
panda$core$String* $tmp2702 = *(&local6);
panda$core$String* $tmp2703 = *(&local6);
panda$core$String$Index$nullable $tmp2704 = *(&local7);
panda$core$String$Index $tmp2705 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp2703, ((panda$core$String$Index) $tmp2704.value));
panda$core$Bit $tmp2706 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2707 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2705, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2706);
panda$core$String* $tmp2708 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp2702, $tmp2707);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2708));
panda$core$String* $tmp2709 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2709));
*(&local8) = $tmp2708;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2708));
// unreffing REF($155:panda.core.String)
goto block13;
block14:;
// line 1
// line 846
panda$core$String* $tmp2710 = *(&local6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2710));
panda$core$String* $tmp2711 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2711));
*(&local8) = $tmp2710;
goto block13;
block13:;
// line 848
panda$collections$HashMap* $tmp2712 = *(&local3);
panda$core$String* $tmp2713 = *(&local8);
panda$core$String* $tmp2714 = *(&local6);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp2712, ((panda$collections$Key*) $tmp2713), ((panda$core$Object*) $tmp2714));
panda$core$String* $tmp2715 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2715));
// unreffing alias
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp2716 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2716));
// unreffing fullName
*(&local6) = ((panda$core$String*) NULL);
goto block7;
block11:;
panda$core$Int64 $tmp2717 = (panda$core$Int64) {12};
panda$core$Bit $tmp2718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2676, $tmp2717);
bool $tmp2719 = $tmp2718.value;
if ($tmp2719) goto block15; else goto block16;
block15:;
org$pandalanguage$pandac$Position* $tmp2720 = (org$pandalanguage$pandac$Position*) ($tmp2674->$data + 0);
org$pandalanguage$pandac$Position $tmp2721 = *$tmp2720;
*(&local9) = $tmp2721;
org$pandalanguage$pandac$ASTNode** $tmp2722 = (org$pandalanguage$pandac$ASTNode**) ($tmp2674->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2723 = *$tmp2722;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2723));
org$pandalanguage$pandac$ASTNode* $tmp2724 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2724));
*(&local10) = $tmp2723;
panda$collections$ImmutableArray** $tmp2725 = (panda$collections$ImmutableArray**) ($tmp2674->$data + 24);
panda$collections$ImmutableArray* $tmp2726 = *$tmp2725;
*(&local11) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2726));
panda$collections$ImmutableArray* $tmp2727 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2727));
*(&local11) = $tmp2726;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2728 = (org$pandalanguage$pandac$ClassDecl$Kind*) ($tmp2674->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2729 = *$tmp2728;
*(&local12) = $tmp2729;
panda$core$String** $tmp2730 = (panda$core$String**) ($tmp2674->$data + 40);
panda$core$String* $tmp2731 = *$tmp2730;
*(&local13) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2731));
panda$core$String* $tmp2732 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2732));
*(&local13) = $tmp2731;
panda$collections$ImmutableArray** $tmp2733 = (panda$collections$ImmutableArray**) ($tmp2674->$data + 48);
panda$collections$ImmutableArray* $tmp2734 = *$tmp2733;
*(&local14) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2734));
panda$collections$ImmutableArray* $tmp2735 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2735));
*(&local14) = $tmp2734;
panda$collections$ImmutableArray** $tmp2736 = (panda$collections$ImmutableArray**) ($tmp2674->$data + 56);
panda$collections$ImmutableArray* $tmp2737 = *$tmp2736;
*(&local15) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2737));
panda$collections$ImmutableArray* $tmp2738 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2738));
*(&local15) = $tmp2737;
panda$collections$ImmutableArray** $tmp2739 = (panda$collections$ImmutableArray**) ($tmp2674->$data + 64);
panda$collections$ImmutableArray* $tmp2740 = *$tmp2739;
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2740));
panda$collections$ImmutableArray* $tmp2741 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2741));
*(&local16) = $tmp2740;
// line 852
panda$collections$HashMap* $tmp2742 = *(&local3);
panda$core$String* $tmp2743 = *(&local2);
org$pandalanguage$pandac$Position $tmp2744 = *(&local9);
org$pandalanguage$pandac$ASTNode* $tmp2745 = *(&local10);
panda$collections$ImmutableArray* $tmp2746 = *(&local11);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2747 = *(&local12);
panda$core$String* $tmp2748 = *(&local13);
panda$collections$ImmutableArray* $tmp2749 = *(&local14);
panda$collections$ImmutableArray* $tmp2750 = *(&local15);
panda$collections$ImmutableArray* $tmp2751 = *(&local16);
org$pandalanguage$pandac$ClassDecl* $tmp2752 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(param0, param1, ((panda$collections$MapView*) $tmp2742), $tmp2743, $tmp2744, $tmp2745, $tmp2746, $tmp2747, $tmp2748, $tmp2749, $tmp2750, $tmp2751);
*(&local17) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2752));
org$pandalanguage$pandac$ClassDecl* $tmp2753 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2753));
*(&local17) = $tmp2752;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2752));
// unreffing REF($271:org.pandalanguage.pandac.ClassDecl?)
// line 854
org$pandalanguage$pandac$ClassDecl* $tmp2754 = *(&local17);
panda$core$Bit $tmp2755 = panda$core$Bit$init$builtin_bit($tmp2754 != NULL);
bool $tmp2756 = $tmp2755.value;
if ($tmp2756) goto block17; else goto block18;
block17:;
// line 855
org$pandalanguage$pandac$ClassDecl* $tmp2757 = *(&local17);
panda$collections$Array* $tmp2758 = *(&local1);
org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, $tmp2757, $tmp2758);
goto block18;
block18:;
org$pandalanguage$pandac$ClassDecl* $tmp2759 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2759));
// unreffing cl
*(&local17) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$ImmutableArray* $tmp2760 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2760));
// unreffing members
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2761 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2761));
// unreffing supertypes
*(&local15) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2762 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2762));
// unreffing generics
*(&local14) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2763 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2763));
// unreffing name
*(&local13) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2764 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2764));
// unreffing annotations
*(&local11) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2765 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2765));
// unreffing dc
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block16:;
panda$core$Int64 $tmp2766 = (panda$core$Int64) {27};
panda$core$Bit $tmp2767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2676, $tmp2766);
bool $tmp2768 = $tmp2767.value;
if ($tmp2768) goto block19; else goto block20;
block19:;
org$pandalanguage$pandac$Position* $tmp2769 = (org$pandalanguage$pandac$Position*) ($tmp2674->$data + 0);
org$pandalanguage$pandac$Position $tmp2770 = *$tmp2769;
*(&local18) = $tmp2770;
org$pandalanguage$pandac$ASTNode** $tmp2771 = (org$pandalanguage$pandac$ASTNode**) ($tmp2674->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2772 = *$tmp2771;
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2772));
org$pandalanguage$pandac$ASTNode* $tmp2773 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2773));
*(&local19) = $tmp2772;
panda$collections$ImmutableArray** $tmp2774 = (panda$collections$ImmutableArray**) ($tmp2674->$data + 24);
panda$collections$ImmutableArray* $tmp2775 = *$tmp2774;
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2775));
panda$collections$ImmutableArray* $tmp2776 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2776));
*(&local20) = $tmp2775;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2777 = (org$pandalanguage$pandac$MethodDecl$Kind*) ($tmp2674->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2778 = *$tmp2777;
*(&local21) = $tmp2778;
panda$core$String** $tmp2779 = (panda$core$String**) ($tmp2674->$data + 40);
panda$core$String* $tmp2780 = *$tmp2779;
*(&local22) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2780));
panda$core$String* $tmp2781 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2781));
*(&local22) = $tmp2780;
panda$collections$ImmutableArray** $tmp2782 = (panda$collections$ImmutableArray**) ($tmp2674->$data + 48);
panda$collections$ImmutableArray* $tmp2783 = *$tmp2782;
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2783));
panda$collections$ImmutableArray* $tmp2784 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2784));
*(&local23) = $tmp2783;
panda$collections$ImmutableArray** $tmp2785 = (panda$collections$ImmutableArray**) ($tmp2674->$data + 56);
panda$collections$ImmutableArray* $tmp2786 = *$tmp2785;
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2786));
panda$collections$ImmutableArray* $tmp2787 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2787));
*(&local24) = $tmp2786;
org$pandalanguage$pandac$ASTNode** $tmp2788 = (org$pandalanguage$pandac$ASTNode**) ($tmp2674->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2789 = *$tmp2788;
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2789));
org$pandalanguage$pandac$ASTNode* $tmp2790 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2790));
*(&local25) = $tmp2789;
panda$collections$ImmutableArray** $tmp2791 = (panda$collections$ImmutableArray**) ($tmp2674->$data + 72);
panda$collections$ImmutableArray* $tmp2792 = *$tmp2791;
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2792));
panda$collections$ImmutableArray* $tmp2793 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2793));
*(&local26) = $tmp2792;
// line 860
org$pandalanguage$pandac$MethodDecl$Kind $tmp2794 = *(&local21);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2795;
$tmp2795 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2795->value = $tmp2794;
panda$core$Int64 $tmp2796 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2797 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2796);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2798;
$tmp2798 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2798->value = $tmp2797;
ITable* $tmp2799 = ((panda$core$Equatable*) $tmp2795)->$class->itable;
while ($tmp2799->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2799 = $tmp2799->next;
}
$fn2801 $tmp2800 = $tmp2799->methods[0];
panda$core$Bit $tmp2802 = $tmp2800(((panda$core$Equatable*) $tmp2795), ((panda$core$Equatable*) $tmp2798));
bool $tmp2803 = $tmp2802.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2798)));
// unreffing REF($409:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2795)));
// unreffing REF($405:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp2803) goto block21; else goto block22;
block21:;
// line 861
org$pandalanguage$pandac$Position $tmp2804 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2804, &$s2805);
// line 862
panda$collections$ImmutableArray* $tmp2806 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2806));
// unreffing statements
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2807 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2807));
// unreffing rawReturnType
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2808 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2808));
// unreffing parameters
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2809 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2809));
// unreffing generics
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2810 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2810));
// unreffing rawName
*(&local22) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2811 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2811));
// unreffing annotations
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2812 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2812));
// unreffing dc
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2672);
// unreffing REF($78:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2813 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2813));
// unreffing e
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block22:;
// line 864
panda$collections$HashMap* $tmp2814 = *(&local3);
panda$core$String* $tmp2815 = *(&local2);
panda$collections$Array* $tmp2816 = *(&local1);
org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, param1, ((panda$collections$MapView*) $tmp2814), $tmp2815, ((panda$collections$List*) $tmp2816));
// line 865
*(&local27) = ((panda$core$String*) NULL);
// line 866
panda$core$String* $tmp2817 = *(&local22);
panda$core$Bit $tmp2818 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2817, &$s2819);
bool $tmp2820 = $tmp2818.value;
if ($tmp2820) goto block23; else goto block25;
block23:;
// line 867
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2821));
panda$core$String* $tmp2822 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2822));
*(&local27) = &$s2823;
// line 868
panda$collections$Array* $tmp2824 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2824);
*(&local28) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2824));
panda$collections$Array* $tmp2825 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2825));
*(&local28) = $tmp2824;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2824));
// unreffing REF($490:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
// line 869
panda$collections$Array* $tmp2826 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2826);
*(&local29) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2826));
panda$collections$Array* $tmp2827 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2827));
*(&local29) = $tmp2826;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2826));
// unreffing REF($504:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 870
panda$collections$Array* $tmp2828 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2828);
*(&local30) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2828));
panda$collections$Array* $tmp2829 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2829));
*(&local30) = $tmp2828;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2828));
// unreffing REF($518:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 871
panda$collections$ImmutableArray* $tmp2830 = *(&local24);
ITable* $tmp2831 = ((panda$collections$Iterable*) $tmp2830)->$class->itable;
while ($tmp2831->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2831 = $tmp2831->next;
}
$fn2833 $tmp2832 = $tmp2831->methods[0];
panda$collections$Iterator* $tmp2834 = $tmp2832(((panda$collections$Iterable*) $tmp2830));
goto block26;
block26:;
ITable* $tmp2835 = $tmp2834->$class->itable;
while ($tmp2835->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2835 = $tmp2835->next;
}
$fn2837 $tmp2836 = $tmp2835->methods[0];
panda$core$Bit $tmp2838 = $tmp2836($tmp2834);
bool $tmp2839 = $tmp2838.value;
if ($tmp2839) goto block28; else goto block27;
block27:;
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2840 = $tmp2834->$class->itable;
while ($tmp2840->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2840 = $tmp2840->next;
}
$fn2842 $tmp2841 = $tmp2840->methods[1];
panda$core$Object* $tmp2843 = $tmp2841($tmp2834);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2843)));
org$pandalanguage$pandac$ASTNode* $tmp2844 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) $tmp2843);
// line 872
org$pandalanguage$pandac$ASTNode* $tmp2845 = *(&local31);
panda$core$Int64* $tmp2846 = &$tmp2845->$rawValue;
panda$core$Int64 $tmp2847 = *$tmp2846;
panda$core$Int64 $tmp2848 = (panda$core$Int64) {32};
panda$core$Bit $tmp2849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2847, $tmp2848);
bool $tmp2850 = $tmp2849.value;
if ($tmp2850) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp2851 = (org$pandalanguage$pandac$Position*) ($tmp2845->$data + 0);
org$pandalanguage$pandac$Position $tmp2852 = *$tmp2851;
*(&local32) = $tmp2852;
panda$core$String** $tmp2853 = (panda$core$String**) ($tmp2845->$data + 16);
panda$core$String* $tmp2854 = *$tmp2853;
*(&local33) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2854));
panda$core$String* $tmp2855 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2855));
*(&local33) = $tmp2854;
org$pandalanguage$pandac$ASTNode** $tmp2856 = (org$pandalanguage$pandac$ASTNode**) ($tmp2845->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2857 = *$tmp2856;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2857));
org$pandalanguage$pandac$ASTNode* $tmp2858 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2858));
*(&local34) = $tmp2857;
// line 874
panda$collections$Array* $tmp2859 = *(&local28);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2860 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
panda$core$String* $tmp2861 = *(&local33);
org$pandalanguage$pandac$ASTNode* $tmp2862 = *(&local34);
org$pandalanguage$pandac$Type* $tmp2863 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2862);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2860, $tmp2861, $tmp2863);
panda$collections$Array$add$panda$collections$Array$T($tmp2859, ((panda$core$Object*) $tmp2860));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2863));
// unreffing REF($590:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2860));
// unreffing REF($587:org.pandalanguage.pandac.MethodDecl.Parameter)
// line 876
panda$collections$Array* $tmp2864 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp2865 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2866 = (panda$core$Int64) {21};
org$pandalanguage$pandac$Position $tmp2867 = *(&local32);
panda$core$String* $tmp2868 = *(&local33);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2865, $tmp2866, $tmp2867, $tmp2868);
panda$collections$Array$add$panda$collections$Array$T($tmp2864, ((panda$core$Object*) $tmp2865));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2865));
// unreffing REF($603:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2869 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2869));
// unreffing type
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2870 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2870));
// unreffing name
*(&local33) = ((panda$core$String*) NULL);
goto block29;
block31:;
// line 879
panda$core$Bit $tmp2871 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2872 = $tmp2871.value;
if ($tmp2872) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp2873 = (panda$core$Int64) {879};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2874, $tmp2873);
abort(); // unreachable
block32:;
goto block29;
block29:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2843);
// unreffing REF($547:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2875 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2875));
// unreffing p
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block26;
block28:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2834));
// unreffing REF($536:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 883
org$pandalanguage$pandac$ASTNode* $tmp2876 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2877 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position $tmp2878 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2879 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2880 = (panda$core$Int64) {21};
org$pandalanguage$pandac$Position $tmp2881 = *(&local18);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2879, $tmp2880, $tmp2881, &$s2882);
panda$collections$ImmutableArray* $tmp2883 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2883);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2876, $tmp2877, $tmp2878, $tmp2879, $tmp2883);
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2876));
org$pandalanguage$pandac$ASTNode* $tmp2884 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2884));
*(&local35) = $tmp2876;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2883));
// unreffing REF($652:panda.collections.ImmutableArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2879));
// unreffing REF($648:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2876));
// unreffing REF($645:org.pandalanguage.pandac.ASTNode)
// line 886
panda$collections$Array* $tmp2885 = *(&local29);
org$pandalanguage$pandac$ASTNode* $tmp2886 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2887 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position $tmp2888 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2889 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2890 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Position $tmp2891 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2892 = *(&local35);
panda$core$String* $tmp2893 = *(&local27);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2889, $tmp2890, $tmp2891, $tmp2892, $tmp2893);
panda$collections$Array* $tmp2894 = *(&local30);
panda$collections$ImmutableArray* $tmp2895 = panda$collections$ImmutableArray$from$panda$collections$Array$LTpanda$collections$ImmutableArray$T$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT($tmp2894);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2886, $tmp2887, $tmp2888, $tmp2889, $tmp2895);
panda$collections$Array$add$panda$collections$Array$T($tmp2885, ((panda$core$Object*) $tmp2886));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2895));
// unreffing REF($686:panda.collections.ImmutableArray<panda.collections.ImmutableArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2889));
// unreffing REF($678:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2886));
// unreffing REF($675:org.pandalanguage.pandac.ASTNode)
// line 889
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
// line 890
org$pandalanguage$pandac$ASTNode* $tmp2896 = *(&local25);
panda$core$Bit $tmp2897 = panda$core$Bit$init$builtin_bit($tmp2896 != NULL);
bool $tmp2898 = $tmp2897.value;
if ($tmp2898) goto block34; else goto block36;
block34:;
// line 891
org$pandalanguage$pandac$ASTNode* $tmp2899 = *(&local25);
org$pandalanguage$pandac$Type* $tmp2900 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2899);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2900));
org$pandalanguage$pandac$Type* $tmp2901 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2901));
*(&local36) = $tmp2900;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2900));
// unreffing REF($711:org.pandalanguage.pandac.Type)
goto block35;
block36:;
// line 1
// line 894
org$pandalanguage$pandac$Type* $tmp2902 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2902));
org$pandalanguage$pandac$Type* $tmp2903 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2903));
*(&local36) = $tmp2902;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2902));
// unreffing REF($724:org.pandalanguage.pandac.Type)
goto block35;
block35:;
// line 896
org$pandalanguage$pandac$MethodDecl* $tmp2904 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2905 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2906 = *$tmp2905;
org$pandalanguage$pandac$Position $tmp2907 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2908 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2909 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2908, $tmp2909);
panda$core$Int64 $tmp2910 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2911 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2910);
panda$collections$Array* $tmp2912 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2912);
panda$collections$Array* $tmp2913 = *(&local28);
org$pandalanguage$pandac$Type* $tmp2914 = *(&local36);
panda$collections$Array* $tmp2915 = *(&local29);
panda$collections$ImmutableArray* $tmp2916 = panda$collections$ImmutableArray$from$panda$collections$Array$LTpanda$collections$ImmutableArray$T$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT($tmp2915);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2904, $tmp2906, $tmp2907, ((panda$core$String*) NULL), $tmp2908, $tmp2911, &$s2917, $tmp2912, $tmp2913, $tmp2914, $tmp2916);
*(&local37) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2904));
org$pandalanguage$pandac$MethodDecl* $tmp2918 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2918));
*(&local37) = $tmp2904;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2916));
// unreffing REF($754:panda.collections.ImmutableArray<panda.collections.ImmutableArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2912));
// unreffing REF($746:panda.collections.Array<org.pandalanguage.pandac.ClassDecl.GenericParameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2908));
// unreffing REF($741:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2904));
// unreffing REF($736:org.pandalanguage.pandac.MethodDecl)
// line 900
org$pandalanguage$pandac$ClassDecl** $tmp2919 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2920 = *$tmp2919;
panda$collections$Array** $tmp2921 = &$tmp2920->methods;
panda$collections$Array* $tmp2922 = *$tmp2921;
org$pandalanguage$pandac$MethodDecl* $tmp2923 = *(&local37);
panda$collections$Array$add$panda$collections$Array$T($tmp2922, ((panda$core$Object*) $tmp2923));
org$pandalanguage$pandac$MethodDecl* $tmp2924 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2924));
// unreffing bareMain
*(&local37) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp2925 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2925));
// unreffing returnType
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2926 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2926));
// unreffing bareConstruct
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2927 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2927));
// unreffing mainArguments
*(&local30) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2928 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2928));
// unreffing mainStatements
*(&local29) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2929 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2929));
// unreffing mainParameters
*(&local28) = ((panda$collections$Array*) NULL);
goto block24;
block25:;
// line 1
// line 903
panda$core$String* $tmp2930 = *(&local22);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2930));
panda$core$String* $tmp2931 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2931));
*(&local27) = $tmp2930;
goto block24;
block24:;
// line 905
panda$core$Weak** $tmp2932 = &param0->compiler;
panda$core$Weak* $tmp2933 = *$tmp2932;
panda$core$Object* $tmp2934 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2933);
panda$collections$Stack** $tmp2935 = &((org$pandalanguage$pandac$Compiler*) $tmp2934)->currentClass;
panda$collections$Stack* $tmp2936 = *$tmp2935;
org$pandalanguage$pandac$ClassDecl** $tmp2937 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2938 = *$tmp2937;
panda$collections$Stack$push$panda$collections$Stack$T($tmp2936, ((panda$core$Object*) $tmp2938));
panda$core$Panda$unref$panda$core$Object$Q($tmp2934);
// unreffing REF($832:panda.core.Weak.T)
// line 906
org$pandalanguage$pandac$ClassDecl** $tmp2939 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2940 = *$tmp2939;
org$pandalanguage$pandac$Position $tmp2941 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2942 = *(&local19);
panda$collections$ImmutableArray* $tmp2943 = *(&local20);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2944 = *(&local21);
panda$core$String* $tmp2945 = *(&local27);
panda$collections$ImmutableArray* $tmp2946 = *(&local23);
panda$collections$ImmutableArray* $tmp2947 = *(&local24);
org$pandalanguage$pandac$ASTNode* $tmp2948 = *(&local25);
panda$collections$ImmutableArray* $tmp2949 = *(&local26);
org$pandalanguage$pandac$MethodDecl* $tmp2950 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(param0, $tmp2940, $tmp2941, $tmp2942, $tmp2943, $tmp2944, $tmp2945, $tmp2946, $tmp2947, $tmp2948, $tmp2949);
*(&local38) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2950));
org$pandalanguage$pandac$MethodDecl* $tmp2951 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2951));
*(&local38) = $tmp2950;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2950));
// unreffing REF($858:org.pandalanguage.pandac.MethodDecl?)
// line 908
org$pandalanguage$pandac$MethodDecl* $tmp2952 = *(&local38);
org$pandalanguage$pandac$Annotations** $tmp2953 = &$tmp2952->annotations;
org$pandalanguage$pandac$Annotations* $tmp2954 = *$tmp2953;
panda$core$Bit $tmp2955 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp2954);
bool $tmp2956 = $tmp2955.value;
if ($tmp2956) goto block37; else goto block38;
block37:;
// line 909
org$pandalanguage$pandac$MethodDecl* $tmp2957 = *(&local38);
org$pandalanguage$pandac$Position* $tmp2958 = &((org$pandalanguage$pandac$Symbol*) $tmp2957)->position;
org$pandalanguage$pandac$Position $tmp2959 = *$tmp2958;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2959, &$s2960);
// line 911
org$pandalanguage$pandac$MethodDecl* $tmp2961 = *(&local38);
org$pandalanguage$pandac$Annotations** $tmp2962 = &$tmp2961->annotations;
org$pandalanguage$pandac$Annotations* $tmp2963 = *$tmp2962;
panda$core$Int64* $tmp2964 = &$tmp2963->flags;
panda$core$Int64 $tmp2965 = *$tmp2964;
panda$core$Int64 $tmp2966 = (panda$core$Int64) {16};
panda$core$Int64 $tmp2967 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp2966);
panda$core$Int64 $tmp2968 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp2965, $tmp2967);
panda$core$Int64* $tmp2969 = &$tmp2963->flags;
*$tmp2969 = $tmp2968;
goto block38;
block38:;
// line 913
panda$core$Weak** $tmp2970 = &param0->compiler;
panda$core$Weak* $tmp2971 = *$tmp2970;
panda$core$Object* $tmp2972 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2971);
panda$collections$Stack** $tmp2973 = &((org$pandalanguage$pandac$Compiler*) $tmp2972)->currentClass;
panda$collections$Stack* $tmp2974 = *$tmp2973;
panda$core$Int64 $tmp2975 = (panda$core$Int64) {0};
panda$core$Object* $tmp2976 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp2974, $tmp2975);
org$pandalanguage$pandac$ClassDecl** $tmp2977 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2978 = *$tmp2977;
bool $tmp2979 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2976) == $tmp2978;
panda$core$Bit $tmp2980 = panda$core$Bit$init$builtin_bit($tmp2979);
bool $tmp2981 = $tmp2980.value;
if ($tmp2981) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp2982 = (panda$core$Int64) {913};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2983, $tmp2982);
abort(); // unreachable
block39:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2976);
// unreffing REF($906:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp2972);
// unreffing REF($900:panda.core.Weak.T)
// line 914
panda$core$Weak** $tmp2984 = &param0->compiler;
panda$core$Weak* $tmp2985 = *$tmp2984;
panda$core$Object* $tmp2986 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2985);
panda$collections$Stack** $tmp2987 = &((org$pandalanguage$pandac$Compiler*) $tmp2986)->currentClass;
panda$collections$Stack* $tmp2988 = *$tmp2987;
panda$core$Object* $tmp2989 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2988);
panda$core$Panda$unref$panda$core$Object$Q($tmp2989);
// unreffing REF($932:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp2986);
// unreffing REF($927:panda.core.Weak.T)
// line 915
org$pandalanguage$pandac$ClassDecl** $tmp2990 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2991 = *$tmp2990;
panda$collections$Array** $tmp2992 = &$tmp2991->methods;
panda$collections$Array* $tmp2993 = *$tmp2992;
org$pandalanguage$pandac$MethodDecl* $tmp2994 = *(&local38);
panda$collections$Array$add$panda$collections$Array$T($tmp2993, ((panda$core$Object*) $tmp2994));
// line 916
org$pandalanguage$pandac$ClassDecl** $tmp2995 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2996 = *$tmp2995;
org$pandalanguage$pandac$SymbolTable** $tmp2997 = &$tmp2996->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2998 = *$tmp2997;
org$pandalanguage$pandac$MethodDecl* $tmp2999 = *(&local38);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2998, ((org$pandalanguage$pandac$Symbol*) $tmp2999));
org$pandalanguage$pandac$MethodDecl* $tmp3000 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3000));
// unreffing m
*(&local38) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$String* $tmp3001 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3001));
// unreffing name
*(&local27) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp3002 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3002));
// unreffing statements
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3003 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3003));
// unreffing rawReturnType
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3004 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3004));
// unreffing parameters
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp3005 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3005));
// unreffing generics
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp3006 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3006));
// unreffing rawName
*(&local22) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp3007 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3007));
// unreffing annotations
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3008 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3008));
// unreffing dc
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block20:;
panda$core$Int64 $tmp3009 = (panda$core$Int64) {17};
panda$core$Bit $tmp3010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2676, $tmp3009);
bool $tmp3011 = $tmp3010.value;
if ($tmp3011) goto block41; else goto block42;
block41:;
org$pandalanguage$pandac$Position* $tmp3012 = (org$pandalanguage$pandac$Position*) ($tmp2674->$data + 0);
org$pandalanguage$pandac$Position $tmp3013 = *$tmp3012;
*(&local39) = $tmp3013;
org$pandalanguage$pandac$ASTNode** $tmp3014 = (org$pandalanguage$pandac$ASTNode**) ($tmp2674->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp3015 = *$tmp3014;
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3015));
org$pandalanguage$pandac$ASTNode* $tmp3016 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3016));
*(&local40) = $tmp3015;
panda$collections$ImmutableArray** $tmp3017 = (panda$collections$ImmutableArray**) ($tmp2674->$data + 24);
panda$collections$ImmutableArray* $tmp3018 = *$tmp3017;
*(&local41) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3018));
panda$collections$ImmutableArray* $tmp3019 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3019));
*(&local41) = $tmp3018;
org$pandalanguage$pandac$ASTNode** $tmp3020 = (org$pandalanguage$pandac$ASTNode**) ($tmp2674->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp3021 = *$tmp3020;
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3021));
org$pandalanguage$pandac$ASTNode* $tmp3022 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3022));
*(&local42) = $tmp3021;
// line 919
panda$collections$HashMap* $tmp3023 = *(&local3);
panda$core$String* $tmp3024 = *(&local2);
panda$collections$Array* $tmp3025 = *(&local1);
org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, param1, ((panda$collections$MapView*) $tmp3023), $tmp3024, ((panda$collections$List*) $tmp3025));
// line 920
org$pandalanguage$pandac$ClassDecl** $tmp3026 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3027 = *$tmp3026;
panda$collections$Array** $tmp3028 = &$tmp3027->fields;
panda$collections$Array* $tmp3029 = *$tmp3028;
ITable* $tmp3030 = ((panda$collections$CollectionView*) $tmp3029)->$class->itable;
while ($tmp3030->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3030 = $tmp3030->next;
}
$fn3032 $tmp3031 = $tmp3030->methods[0];
panda$core$Int64 $tmp3033 = $tmp3031(((panda$collections$CollectionView*) $tmp3029));
*(&local43) = $tmp3033;
// line 921
org$pandalanguage$pandac$ClassDecl** $tmp3034 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3035 = *$tmp3034;
org$pandalanguage$pandac$Position $tmp3036 = *(&local39);
org$pandalanguage$pandac$ASTNode* $tmp3037 = *(&local40);
panda$collections$ImmutableArray* $tmp3038 = *(&local41);
org$pandalanguage$pandac$ASTNode* $tmp3039 = *(&local42);
org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(param0, $tmp3035, $tmp3036, $tmp3037, $tmp3038, $tmp3039);
// line 922
panda$core$Int64 $tmp3040 = *(&local43);
org$pandalanguage$pandac$ClassDecl** $tmp3041 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3042 = *$tmp3041;
panda$collections$Array** $tmp3043 = &$tmp3042->fields;
panda$collections$Array* $tmp3044 = *$tmp3043;
ITable* $tmp3045 = ((panda$collections$CollectionView*) $tmp3044)->$class->itable;
while ($tmp3045->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3045 = $tmp3045->next;
}
$fn3047 $tmp3046 = $tmp3045->methods[0];
panda$core$Int64 $tmp3048 = $tmp3046(((panda$collections$CollectionView*) $tmp3044));
panda$core$Bit $tmp3049 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp3050 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3040, $tmp3048, $tmp3049);
panda$core$Int64 $tmp3051 = $tmp3050.min;
*(&local44) = $tmp3051;
panda$core$Int64 $tmp3052 = $tmp3050.max;
panda$core$Bit $tmp3053 = $tmp3050.inclusive;
bool $tmp3054 = $tmp3053.value;
panda$core$Int64 $tmp3055 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp3056 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3055);
if ($tmp3054) goto block46; else goto block47;
block46:;
int64_t $tmp3057 = $tmp3051.value;
int64_t $tmp3058 = $tmp3052.value;
bool $tmp3059 = $tmp3057 <= $tmp3058;
panda$core$Bit $tmp3060 = (panda$core$Bit) {$tmp3059};
bool $tmp3061 = $tmp3060.value;
if ($tmp3061) goto block43; else goto block44;
block47:;
int64_t $tmp3062 = $tmp3051.value;
int64_t $tmp3063 = $tmp3052.value;
bool $tmp3064 = $tmp3062 < $tmp3063;
panda$core$Bit $tmp3065 = (panda$core$Bit) {$tmp3064};
bool $tmp3066 = $tmp3065.value;
if ($tmp3066) goto block43; else goto block44;
block43:;
// line 923
org$pandalanguage$pandac$ClassDecl** $tmp3067 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3068 = *$tmp3067;
panda$collections$Array** $tmp3069 = &$tmp3068->fields;
panda$collections$Array* $tmp3070 = *$tmp3069;
panda$core$Int64 $tmp3071 = *(&local44);
panda$core$Object* $tmp3072 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3070, $tmp3071);
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3072)));
org$pandalanguage$pandac$FieldDecl* $tmp3073 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3073));
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) $tmp3072);
panda$core$Panda$unref$panda$core$Object$Q($tmp3072);
// unreffing REF($1106:panda.collections.Array.T)
// line 924
org$pandalanguage$pandac$FieldDecl* $tmp3074 = *(&local45);
org$pandalanguage$pandac$FieldDecl$Kind* $tmp3075 = &$tmp3074->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp3076 = *$tmp3075;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp3077;
$tmp3077 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp3077->value = $tmp3076;
panda$core$Int64 $tmp3078 = (panda$core$Int64) {2};
org$pandalanguage$pandac$FieldDecl$Kind $tmp3079 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp3078);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp3080;
$tmp3080 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp3080->value = $tmp3079;
ITable* $tmp3081 = ((panda$core$Equatable*) $tmp3077)->$class->itable;
while ($tmp3081->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3081 = $tmp3081->next;
}
$fn3083 $tmp3082 = $tmp3081->methods[1];
panda$core$Bit $tmp3084 = $tmp3082(((panda$core$Equatable*) $tmp3077), ((panda$core$Equatable*) $tmp3080));
bool $tmp3085 = $tmp3084.value;
if ($tmp3085) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$FieldDecl* $tmp3086 = *(&local45);
org$pandalanguage$pandac$Annotations** $tmp3087 = &$tmp3086->annotations;
org$pandalanguage$pandac$Annotations* $tmp3088 = *$tmp3087;
panda$core$Bit $tmp3089 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp3088);
*(&local46) = $tmp3089;
goto block52;
block51:;
*(&local46) = $tmp3084;
goto block52;
block52:;
panda$core$Bit $tmp3090 = *(&local46);
bool $tmp3091 = $tmp3090.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3080)));
// unreffing REF($1126:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3077)));
// unreffing REF($1122:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
if ($tmp3091) goto block48; else goto block49;
block48:;
// line 926
org$pandalanguage$pandac$FieldDecl* $tmp3092 = *(&local45);
org$pandalanguage$pandac$Position* $tmp3093 = &((org$pandalanguage$pandac$Symbol*) $tmp3092)->position;
org$pandalanguage$pandac$Position $tmp3094 = *$tmp3093;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp3094, &$s3095);
goto block49;
block49:;
org$pandalanguage$pandac$FieldDecl* $tmp3096 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3096));
// unreffing f
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block45;
block45:;
panda$core$Int64 $tmp3097 = *(&local44);
int64_t $tmp3098 = $tmp3052.value;
int64_t $tmp3099 = $tmp3097.value;
int64_t $tmp3100 = $tmp3098 - $tmp3099;
panda$core$Int64 $tmp3101 = (panda$core$Int64) {$tmp3100};
panda$core$UInt64 $tmp3102 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3101);
if ($tmp3054) goto block54; else goto block55;
block54:;
uint64_t $tmp3103 = $tmp3102.value;
uint64_t $tmp3104 = $tmp3056.value;
bool $tmp3105 = $tmp3103 >= $tmp3104;
panda$core$Bit $tmp3106 = (panda$core$Bit) {$tmp3105};
bool $tmp3107 = $tmp3106.value;
if ($tmp3107) goto block53; else goto block44;
block55:;
uint64_t $tmp3108 = $tmp3102.value;
uint64_t $tmp3109 = $tmp3056.value;
bool $tmp3110 = $tmp3108 > $tmp3109;
panda$core$Bit $tmp3111 = (panda$core$Bit) {$tmp3110};
bool $tmp3112 = $tmp3111.value;
if ($tmp3112) goto block53; else goto block44;
block53:;
int64_t $tmp3113 = $tmp3097.value;
int64_t $tmp3114 = $tmp3055.value;
int64_t $tmp3115 = $tmp3113 + $tmp3114;
panda$core$Int64 $tmp3116 = (panda$core$Int64) {$tmp3115};
*(&local44) = $tmp3116;
goto block43;
block44:;
org$pandalanguage$pandac$ASTNode* $tmp3117 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3117));
// unreffing varDecl
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3118 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3118));
// unreffing annotations
*(&local41) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3119 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3119));
// unreffing dc
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block42:;
// line 932
panda$core$Bit $tmp3120 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3121 = $tmp3120.value;
if ($tmp3121) goto block56; else goto block57;
block57:;
panda$core$Int64 $tmp3122 = (panda$core$Int64) {932};
org$pandalanguage$pandac$ASTNode* $tmp3123 = *(&local4);
panda$core$String* $tmp3124 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3125, ((panda$core$Object*) $tmp3123));
panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3124, &$s3127);
org$pandalanguage$pandac$ASTNode* $tmp3128 = *(&local4);
panda$core$Int64* $tmp3129 = &$tmp3128->$rawValue;
panda$core$Int64 $tmp3130 = *$tmp3129;
panda$core$Int64$wrapper* $tmp3131;
$tmp3131 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3131->value = $tmp3130;
panda$core$String* $tmp3132 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3126, ((panda$core$Object*) $tmp3131));
panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3132, &$s3134);
org$pandalanguage$pandac$ASTNode* $tmp3135 = *(&local4);
$fn3137 $tmp3136 = ($fn3137) $tmp3135->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3138 = $tmp3136($tmp3135);
org$pandalanguage$pandac$Position$wrapper* $tmp3139;
$tmp3139 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp3139->value = $tmp3138;
panda$core$String* $tmp3140 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3133, ((panda$core$Object*) $tmp3139));
panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3140, &$s3142);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3143, $tmp3122, $tmp3141);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3141));
// unreffing REF($1222:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3140));
// unreffing REF($1221:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3139));
// unreffing REF($1220:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3133));
// unreffing REF($1216:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3132));
// unreffing REF($1215:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3131));
// unreffing REF($1214:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3126));
// unreffing REF($1210:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3124));
// unreffing REF($1209:panda.core.String)
abort(); // unreachable
block56:;
goto block7;
block7:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2672);
// unreffing REF($78:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp3144 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3144));
// unreffing e
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2663));
// unreffing REF($67:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 936
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) NULL)));
panda$io$File** $tmp3145 = &param0->source;
panda$io$File* $tmp3146 = *$tmp3145;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3146));
panda$io$File** $tmp3147 = &param0->source;
*$tmp3147 = ((panda$io$File*) NULL);
// line 937
panda$collections$Array* $tmp3148 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp3148)));
panda$collections$HashMap* $tmp3149 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3149));
// unreffing aliases
*(&local3) = ((panda$collections$HashMap*) NULL);
panda$core$String* $tmp3150 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3150));
// unreffing currentPackage
*(&local2) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp3151 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3151));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp3152 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3152));
// unreffing entries
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
return ((panda$collections$ListView*) $tmp3148);
block3:;
// line 940
panda$core$Bit $tmp3153 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3154 = $tmp3153.value;
if ($tmp3154) goto block58; else goto block59;
block59:;
panda$core$Int64 $tmp3155 = (panda$core$Int64) {940};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3156, $tmp3155);
abort(); // unreachable
block58:;
goto block1;
block1:;
panda$core$Bit $tmp3157 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3158 = $tmp3157.value;
if ($tmp3158) goto block60; else goto block61;
block61:;
panda$core$Int64 $tmp3159 = (panda$core$Int64) {827};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3160, $tmp3159, &$s3161);
abort(); // unreachable
block60:;
abort(); // unreachable

}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* param0) {

// line 6
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$Weak** $tmp3162 = &param0->compiler;
panda$core$Weak* $tmp3163 = *$tmp3162;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3163));
org$pandalanguage$pandac$ClassDecl** $tmp3164 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3165 = *$tmp3164;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3165));
panda$io$File** $tmp3166 = &param0->source;
panda$io$File* $tmp3167 = *$tmp3166;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3167));
return;

}

