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
typedef panda$collections$Iterator* (*$fn803)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn807)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn812)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn845)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn849)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn854)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn923)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn927)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn932)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn979)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn983)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn988)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1029)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1033)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1038)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1081)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1085)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1090)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1122)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1126)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1131)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1148)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1152)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1157)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1268)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1272)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1277)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1305)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1309)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1314)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1328)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1332)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1337)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1369)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1373)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1378)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1428)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1432)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1437)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1487)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1520)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1524)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1529)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1574)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1588)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1592)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1597)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1638)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1669)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1933)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1937)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1942)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1955)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn1971)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2010)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2014)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2019)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn2064)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn2082)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2088)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2092)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2097)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2128)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2175)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2179)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2184)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2218)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2245)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2249)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2254)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2266)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2281)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2294)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2308)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2318)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2352)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2361)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2372)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2405)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2414)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2427)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2431)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2436)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2444)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2490)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2494)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2499)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2511)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2541)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2628)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2632)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2637)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2767)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2799)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2803)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2808)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2985)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn3000)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn3036)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3090)(org$pandalanguage$pandac$ASTNode*);

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
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6d\x70\x6c\x65\x78\x69\x74\x79\x28\x6e\x6f\x64\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 133, -6414000039548560057, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static panda$core$String $s1839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s2141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s2229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s2234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static panda$core$String $s2519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s3078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s3080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x73\x63\x61\x6e\x28\x73\x6f\x75\x72\x63\x65\x3a\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x66\x69\x6c\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 193, 7895019779626162639, NULL };

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
// line 30
panda$collections$Array* $tmp30 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp30);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp31 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
*(&local4) = $tmp30;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// line 31
panda$collections$Array* $tmp32 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp33 = *(&local3);
org$pandalanguage$pandac$Type* $tmp34 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp33);
panda$collections$Array$add$panda$collections$Array$T($tmp32, ((panda$core$Object*) $tmp34));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
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
// line 35
panda$collections$Array* $tmp61 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp61);
*(&local8) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp62 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
*(&local8) = $tmp61;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
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
panda$core$Panda$unref$panda$core$Object$Q($tmp76);
org$pandalanguage$pandac$ASTNode* $tmp77 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp76)));
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) $tmp76);
// line 37
panda$collections$Array* $tmp78 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp79 = *(&local9);
org$pandalanguage$pandac$Type* $tmp80 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp79);
panda$collections$Array$add$panda$collections$Array$T($tmp78, ((panda$core$Object*) $tmp80));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
org$pandalanguage$pandac$ASTNode* $tmp81 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// unreffing arg
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block10:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
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
org$pandalanguage$pandac$Type* $tmp110 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
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
panda$collections$Array* $tmp160 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp160));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
*(&local17) = $tmp159;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
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
panda$core$Panda$unref$panda$core$Object$Q($tmp174);
org$pandalanguage$pandac$ASTNode* $tmp175 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp174)));
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) $tmp174);
// line 70
panda$collections$Array* $tmp176 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp177 = *(&local18);
org$pandalanguage$pandac$Type* $tmp178 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp177);
panda$collections$Array$add$panda$collections$Array$T($tmp176, ((panda$core$Object*) $tmp178));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
org$pandalanguage$pandac$ASTNode* $tmp179 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
// unreffing p
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block30;
block32:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
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
org$pandalanguage$pandac$Type* $tmp185 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
*(&local19) = $tmp184;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
goto block34;
block35:;
// line 1
// line 77
org$pandalanguage$pandac$Type* $tmp186 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp187 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
*(&local19) = $tmp186;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
goto block34;
block34:;
// line 79
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
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
panda$collections$Array* $tmp238 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
*(&local1) = ((panda$collections$Array*) NULL);
// line 98
panda$core$Method* $tmp240 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp240, ((panda$core$Int8*) org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit), ((panda$core$Immutable*) NULL));
// line 98
*(&local2) = ((panda$core$Method*) NULL);
panda$core$Method* $tmp241 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
*(&local2) = $tmp240;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
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
panda$core$Panda$unref$panda$core$Object$Q($tmp254);
org$pandalanguage$pandac$ASTNode* $tmp255 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp254)));
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
panda$core$String* $tmp266 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
*(&local5) = $tmp265;
panda$core$String** $tmp267 = (panda$core$String**) ($tmp256->$data + 24);
panda$core$String* $tmp268 = *$tmp267;
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp269 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
*(&local6) = $tmp268;
org$pandalanguage$pandac$ASTNode** $tmp270 = (org$pandalanguage$pandac$ASTNode**) ($tmp256->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp271 = *$tmp270;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp272 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
*(&local7) = $tmp271;
// line 108
org$pandalanguage$pandac$ASTNode* $tmp273 = *(&local7);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp274 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
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
panda$collections$Array* $tmp381 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
*(&local1) = $tmp380;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
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
if ($tmp390) goto block40; else goto block41;
block41:;
panda$core$Bit $tmp392 = (($fn391) $tmp387)(param0, $tmp383, $tmp384, $tmp385);
*(&local9) = $tmp392;
goto block42;
block40:;
panda$core$Bit $tmp394 = (($fn393) $tmp387)($tmp389, param0, $tmp383, $tmp384, $tmp385);
*(&local9) = $tmp394;
goto block42;
block42:;
panda$core$Bit $tmp395 = *(&local9);
bool $tmp396 = $tmp395.value;
if ($tmp396) goto block43; else goto block44;
block43:;
// line 157
panda$collections$Array* $tmp397 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp398 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp399 = (panda$core$Int64) {0};
panda$core$String* $tmp400 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp401 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp398, $tmp399, $tmp400, $tmp401);
panda$collections$Array$add$panda$collections$Array$T($tmp397, ((panda$core$Object*) $tmp398));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
// line 158
org$pandalanguage$pandac$ASTNode* $tmp402 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block44;
block44:;
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
panda$collections$Array* $tmp410 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
*(&local1) = $tmp409;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
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
if ($tmp419) goto block49; else goto block50;
block50:;
panda$core$Bit $tmp421 = (($fn420) $tmp416)(param0, $tmp412, $tmp413, $tmp414);
*(&local10) = $tmp421;
goto block51;
block49:;
panda$core$Bit $tmp423 = (($fn422) $tmp416)($tmp418, param0, $tmp412, $tmp413, $tmp414);
*(&local10) = $tmp423;
goto block51;
block51:;
panda$core$Bit $tmp424 = *(&local10);
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block52; else goto block53;
block52:;
// line 166
panda$collections$Array* $tmp426 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp427 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp428 = (panda$core$Int64) {1};
panda$core$String* $tmp429 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp430 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp427, $tmp428, $tmp429, $tmp430);
panda$collections$Array$add$panda$collections$Array$T($tmp426, ((panda$core$Object*) $tmp427));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
// line 167
org$pandalanguage$pandac$ASTNode* $tmp431 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block53;
block53:;
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
panda$collections$Array* $tmp439 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp439));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
*(&local1) = $tmp438;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
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
if ($tmp448) goto block58; else goto block59;
block59:;
panda$core$Bit $tmp450 = (($fn449) $tmp445)(param0, $tmp441, $tmp442, $tmp443);
*(&local11) = $tmp450;
goto block60;
block58:;
panda$core$Bit $tmp452 = (($fn451) $tmp445)($tmp447, param0, $tmp441, $tmp442, $tmp443);
*(&local11) = $tmp452;
goto block60;
block60:;
panda$core$Bit $tmp453 = *(&local11);
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block61; else goto block62;
block61:;
// line 175
panda$collections$Array* $tmp455 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp456 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp457 = (panda$core$Int64) {2};
panda$core$String* $tmp458 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp459 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp456, $tmp457, $tmp458, $tmp459);
panda$collections$Array$add$panda$collections$Array$T($tmp455, ((panda$core$Object*) $tmp456));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
// line 176
org$pandalanguage$pandac$ASTNode* $tmp460 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block62;
block62:;
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
panda$collections$Array* $tmp468 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
*(&local1) = $tmp467;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
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
if ($tmp477) goto block67; else goto block68;
block68:;
panda$core$Bit $tmp479 = (($fn478) $tmp474)(param0, $tmp470, $tmp471, $tmp472);
*(&local12) = $tmp479;
goto block69;
block67:;
panda$core$Bit $tmp481 = (($fn480) $tmp474)($tmp476, param0, $tmp470, $tmp471, $tmp472);
*(&local12) = $tmp481;
goto block69;
block69:;
panda$core$Bit $tmp482 = *(&local12);
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block70; else goto block71;
block70:;
// line 184
panda$collections$Array* $tmp484 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp485 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp486 = (panda$core$Int64) {3};
panda$core$String* $tmp487 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp488 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp485, $tmp486, $tmp487, $tmp488);
panda$collections$Array$add$panda$collections$Array$T($tmp484, ((panda$core$Object*) $tmp485));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp485));
// line 185
org$pandalanguage$pandac$ASTNode* $tmp489 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block71;
block71:;
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
panda$collections$Array* $tmp497 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
*(&local1) = $tmp496;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
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
if ($tmp506) goto block76; else goto block77;
block77:;
panda$core$Bit $tmp508 = (($fn507) $tmp503)(param0, $tmp499, $tmp500, $tmp501);
*(&local13) = $tmp508;
goto block78;
block76:;
panda$core$Bit $tmp510 = (($fn509) $tmp503)($tmp505, param0, $tmp499, $tmp500, $tmp501);
*(&local13) = $tmp510;
goto block78;
block78:;
panda$core$Bit $tmp511 = *(&local13);
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block79; else goto block80;
block79:;
// line 193
panda$collections$Array* $tmp513 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp514 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp515 = (panda$core$Int64) {4};
panda$core$String* $tmp516 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp517 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp514, $tmp515, $tmp516, $tmp517);
panda$collections$Array$add$panda$collections$Array$T($tmp513, ((panda$core$Object*) $tmp514));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
// line 194
org$pandalanguage$pandac$ASTNode* $tmp518 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block80;
block80:;
goto block7;
block73:;
// line 198
org$pandalanguage$pandac$Position $tmp519 = *(&local4);
panda$core$String* $tmp520 = *(&local5);
panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s522, $tmp520);
panda$core$String* $tmp523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp521, &$s524);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp519, $tmp523);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
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
org$pandalanguage$pandac$ASTNode* $tmp542 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
// unreffing c
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
// line 210
org$pandalanguage$pandac$Annotations* $tmp543 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp544 = *(&local0);
panda$collections$Array* $tmp545 = *(&local1);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp543, $tmp544, ((panda$collections$ListView*) $tmp545));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
panda$core$Method* $tmp546 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
// unreffing checkExpression
*(&local2) = ((panda$core$Method*) NULL);
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
panda$core$String* $tmp550 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 221
panda$core$Int64* $tmp551 = &param3->$rawValue;
panda$core$Int64 $tmp552 = *$tmp551;
panda$core$Int64 $tmp553 = (panda$core$Int64) {38};
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
panda$core$String* $tmp560 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
*(&local2) = $tmp559;
// line 223
panda$core$String* $tmp561 = *(&local2);
panda$core$String* $tmp562 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
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
org$pandalanguage$pandac$Annotations* $tmp569 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp569));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
*(&local3) = $tmp568;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
// line 231
// line 232
panda$core$Int64* $tmp570 = &param5->$rawValue;
panda$core$Int64 $tmp571 = *$tmp570;
panda$core$Int64 $tmp572 = (panda$core$Int64) {47};
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
panda$collections$ImmutableArray* $tmp581 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
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
panda$core$Panda$unref$panda$core$Object$Q($tmp623);
org$pandalanguage$pandac$ASTNode* $tmp624 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp623)));
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) $tmp623);
// line 250
org$pandalanguage$pandac$ASTNode* $tmp625 = *(&local7);
panda$core$Int64* $tmp626 = &$tmp625->$rawValue;
panda$core$Int64 $tmp627 = *$tmp626;
panda$core$Int64 $tmp628 = (panda$core$Int64) {13};
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
org$pandalanguage$pandac$ASTNode* $tmp635 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
*(&local9) = $tmp634;
org$pandalanguage$pandac$ASTNode** $tmp636 = (org$pandalanguage$pandac$ASTNode**) ($tmp625->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp637 = *$tmp636;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp638 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
*(&local10) = $tmp637;
// line 252
*(&local11) = ((panda$core$String*) NULL);
// line 253
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
// line 254
org$pandalanguage$pandac$ASTNode* $tmp639 = *(&local9);
panda$core$Int64* $tmp640 = &$tmp639->$rawValue;
panda$core$Int64 $tmp641 = *$tmp640;
panda$core$Int64 $tmp642 = (panda$core$Int64) {20};
panda$core$Bit $tmp643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp641, $tmp642);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block27; else goto block28;
block27:;
org$pandalanguage$pandac$Position* $tmp645 = (org$pandalanguage$pandac$Position*) ($tmp639->$data + 0);
org$pandalanguage$pandac$Position $tmp646 = *$tmp645;
panda$core$String** $tmp647 = (panda$core$String**) ($tmp639->$data + 16);
panda$core$String* $tmp648 = *$tmp647;
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp649 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
*(&local13) = $tmp648;
// line 256
panda$core$String* $tmp650 = *(&local13);
panda$core$String* $tmp651 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp651));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp650));
*(&local11) = $tmp650;
// line 257
org$pandalanguage$pandac$Type* $tmp652 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp653 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
*(&local12) = $tmp652;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
panda$core$String* $tmp654 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
// unreffing id
*(&local13) = ((panda$core$String*) NULL);
goto block26;
block28:;
panda$core$Int64 $tmp655 = (panda$core$Int64) {44};
panda$core$Bit $tmp656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp641, $tmp655);
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block29; else goto block30;
block29:;
org$pandalanguage$pandac$Position* $tmp658 = (org$pandalanguage$pandac$Position*) ($tmp639->$data + 0);
org$pandalanguage$pandac$Position $tmp659 = *$tmp658;
panda$core$String** $tmp660 = (panda$core$String**) ($tmp639->$data + 16);
panda$core$String* $tmp661 = *$tmp660;
*(&local14) = ((panda$core$String*) NULL);
panda$core$String* $tmp662 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp661));
*(&local14) = $tmp661;
org$pandalanguage$pandac$ASTNode** $tmp663 = (org$pandalanguage$pandac$ASTNode**) ($tmp639->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp664 = *$tmp663;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp665 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
*(&local15) = $tmp664;
// line 260
panda$core$String* $tmp666 = *(&local14);
panda$core$String* $tmp667 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
*(&local11) = $tmp666;
// line 261
org$pandalanguage$pandac$ASTNode* $tmp668 = *(&local15);
org$pandalanguage$pandac$Type* $tmp669 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp668);
org$pandalanguage$pandac$Type* $tmp670 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
*(&local12) = $tmp669;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
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
if ($tmp679) goto block33; else goto block34;
block33:;
org$pandalanguage$pandac$Annotations* $tmp680 = *(&local3);
panda$core$Bit $tmp681 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp680);
*(&local18) = $tmp681;
goto block35;
block34:;
*(&local18) = $tmp678;
goto block35;
block35:;
panda$core$Bit $tmp682 = *(&local18);
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block36; else goto block37;
block36:;
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp687)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp690)));
*(&local17) = $tmp694;
goto block38;
block37:;
*(&local17) = $tmp682;
goto block38;
block38:;
panda$core$Bit $tmp695 = *(&local17);
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block39; else goto block41;
block39:;
// line 270
org$pandalanguage$pandac$ASTNode* $tmp697 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp698 = (panda$core$Int64) {28};
org$pandalanguage$pandac$Position $tmp699 = *(&local8);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp697, $tmp698, $tmp699);
org$pandalanguage$pandac$ASTNode* $tmp700 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
*(&local16) = $tmp697;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
goto block40;
block41:;
// line 1
// line 273
org$pandalanguage$pandac$ASTNode* $tmp701 = *(&local10);
org$pandalanguage$pandac$ASTNode* $tmp702 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
*(&local16) = $tmp701;
goto block40;
block40:;
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
org$pandalanguage$pandac$FieldDecl* $tmp711 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
*(&local19) = $tmp703;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
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
org$pandalanguage$pandac$ASTNode* $tmp728 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
// unreffing decl
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block20;
block22:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
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
org$pandalanguage$pandac$ASTNode** $tmp743 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp744 = *$tmp743;
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp745 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp744));
*(&local0) = $tmp744;
org$pandalanguage$pandac$ASTNode** $tmp746 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp747 = *$tmp746;
// line 296
org$pandalanguage$pandac$ASTNode* $tmp748 = *(&local0);
panda$core$Int64 $tmp749 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp748);
org$pandalanguage$pandac$ASTNode* $tmp750 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp750));
// unreffing test
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp749;
block3:;
panda$core$Int64 $tmp751 = (panda$core$Int64) {2};
panda$core$Bit $tmp752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp751);
bool $tmp753 = $tmp752.value;
if ($tmp753) goto block4; else goto block5;
block4:;
// line 299
panda$core$Int64 $tmp754 = (panda$core$Int64) {0};
return $tmp754;
block5:;
panda$core$Int64 $tmp755 = (panda$core$Int64) {3};
panda$core$Bit $tmp756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp755);
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block6; else goto block7;
block6:;
// line 302
panda$core$Int64 $tmp758 = (panda$core$Int64) {0};
return $tmp758;
block7:;
panda$core$Int64 $tmp759 = (panda$core$Int64) {4};
panda$core$Bit $tmp760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp759);
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp762 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp763 = *$tmp762;
org$pandalanguage$pandac$ASTNode** $tmp764 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp765 = *$tmp764;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp766 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
*(&local1) = $tmp765;
org$pandalanguage$pandac$parser$Token$Kind* $tmp767 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp768 = *$tmp767;
org$pandalanguage$pandac$ASTNode** $tmp769 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp770 = *$tmp769;
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp771 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp771));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
*(&local2) = $tmp770;
// line 305
panda$core$Int64 $tmp772 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode* $tmp773 = *(&local1);
panda$core$Int64 $tmp774 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp773);
int64_t $tmp775 = $tmp772.value;
int64_t $tmp776 = $tmp774.value;
int64_t $tmp777 = $tmp775 + $tmp776;
panda$core$Int64 $tmp778 = (panda$core$Int64) {$tmp777};
org$pandalanguage$pandac$ASTNode* $tmp779 = *(&local2);
panda$core$Int64 $tmp780 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp779);
int64_t $tmp781 = $tmp778.value;
int64_t $tmp782 = $tmp780.value;
int64_t $tmp783 = $tmp781 + $tmp782;
panda$core$Int64 $tmp784 = (panda$core$Int64) {$tmp783};
org$pandalanguage$pandac$ASTNode* $tmp785 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
// unreffing right
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp786 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
// unreffing left
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp784;
block9:;
panda$core$Int64 $tmp787 = (panda$core$Int64) {5};
panda$core$Bit $tmp788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp787);
bool $tmp789 = $tmp788.value;
if ($tmp789) goto block10; else goto block11;
block10:;
// line 308
panda$core$Int64 $tmp790 = (panda$core$Int64) {1};
return $tmp790;
block11:;
panda$core$Int64 $tmp791 = (panda$core$Int64) {6};
panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp791);
bool $tmp793 = $tmp792.value;
if ($tmp793) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp794 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp795 = *$tmp794;
panda$collections$ImmutableArray** $tmp796 = (panda$collections$ImmutableArray**) (param1->$data + 16);
panda$collections$ImmutableArray* $tmp797 = *$tmp796;
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp798 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp798));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp797));
*(&local3) = $tmp797;
// line 311
panda$core$Int64 $tmp799 = (panda$core$Int64) {0};
*(&local4) = $tmp799;
// line 312
panda$collections$ImmutableArray* $tmp800 = *(&local3);
ITable* $tmp801 = ((panda$collections$Iterable*) $tmp800)->$class->itable;
while ($tmp801->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp801 = $tmp801->next;
}
$fn803 $tmp802 = $tmp801->methods[0];
panda$collections$Iterator* $tmp804 = $tmp802(((panda$collections$Iterable*) $tmp800));
goto block14;
block14:;
ITable* $tmp805 = $tmp804->$class->itable;
while ($tmp805->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp805 = $tmp805->next;
}
$fn807 $tmp806 = $tmp805->methods[0];
panda$core$Bit $tmp808 = $tmp806($tmp804);
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block16; else goto block15;
block15:;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp810 = $tmp804->$class->itable;
while ($tmp810->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp810 = $tmp810->next;
}
$fn812 $tmp811 = $tmp810->methods[1];
panda$core$Object* $tmp813 = $tmp811($tmp804);
panda$core$Panda$unref$panda$core$Object$Q($tmp813);
org$pandalanguage$pandac$ASTNode* $tmp814 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp813)));
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) $tmp813);
// line 313
panda$core$Int64 $tmp815 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp816 = *(&local5);
panda$core$Int64 $tmp817 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp816);
int64_t $tmp818 = $tmp815.value;
int64_t $tmp819 = $tmp817.value;
int64_t $tmp820 = $tmp818 + $tmp819;
panda$core$Int64 $tmp821 = (panda$core$Int64) {$tmp820};
*(&local4) = $tmp821;
org$pandalanguage$pandac$ASTNode* $tmp822 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp822));
// unreffing s
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block16:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
// line 315
panda$core$Int64 $tmp823 = *(&local4);
panda$collections$ImmutableArray* $tmp824 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
// unreffing statements
*(&local3) = ((panda$collections$ImmutableArray*) NULL);
return $tmp823;
block13:;
panda$core$Int64 $tmp825 = (panda$core$Int64) {7};
panda$core$Bit $tmp826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp825);
bool $tmp827 = $tmp826.value;
if ($tmp827) goto block17; else goto block18;
block17:;
// line 318
panda$core$Int64 $tmp828 = (panda$core$Int64) {1};
return $tmp828;
block18:;
panda$core$Int64 $tmp829 = (panda$core$Int64) {8};
panda$core$Bit $tmp830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp829);
bool $tmp831 = $tmp830.value;
if ($tmp831) goto block19; else goto block20;
block19:;
org$pandalanguage$pandac$Position* $tmp832 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp833 = *$tmp832;
org$pandalanguage$pandac$ASTNode** $tmp834 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp835 = *$tmp834;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp836 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp835));
*(&local6) = $tmp835;
panda$collections$ImmutableArray** $tmp837 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp838 = *$tmp837;
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp839 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
*(&local7) = $tmp838;
// line 321
org$pandalanguage$pandac$ASTNode* $tmp840 = *(&local6);
panda$core$Int64 $tmp841 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp840);
*(&local8) = $tmp841;
// line 322
panda$collections$ImmutableArray* $tmp842 = *(&local7);
ITable* $tmp843 = ((panda$collections$Iterable*) $tmp842)->$class->itable;
while ($tmp843->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp843 = $tmp843->next;
}
$fn845 $tmp844 = $tmp843->methods[0];
panda$collections$Iterator* $tmp846 = $tmp844(((panda$collections$Iterable*) $tmp842));
goto block21;
block21:;
ITable* $tmp847 = $tmp846->$class->itable;
while ($tmp847->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp847 = $tmp847->next;
}
$fn849 $tmp848 = $tmp847->methods[0];
panda$core$Bit $tmp850 = $tmp848($tmp846);
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block23; else goto block22;
block22:;
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp852 = $tmp846->$class->itable;
while ($tmp852->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp852 = $tmp852->next;
}
$fn854 $tmp853 = $tmp852->methods[1];
panda$core$Object* $tmp855 = $tmp853($tmp846);
panda$core$Panda$unref$panda$core$Object$Q($tmp855);
org$pandalanguage$pandac$ASTNode* $tmp856 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp855)));
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) $tmp855);
// line 323
panda$core$Int64 $tmp857 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp858 = *(&local9);
panda$core$Int64 $tmp859 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp858);
int64_t $tmp860 = $tmp857.value;
int64_t $tmp861 = $tmp859.value;
int64_t $tmp862 = $tmp860 + $tmp861;
panda$core$Int64 $tmp863 = (panda$core$Int64) {$tmp862};
*(&local8) = $tmp863;
org$pandalanguage$pandac$ASTNode* $tmp864 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
// unreffing a
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block21;
block23:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp846));
// line 325
panda$core$Int64 $tmp865 = *(&local8);
panda$collections$ImmutableArray* $tmp866 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp866));
// unreffing args
*(&local7) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp867 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp867));
// unreffing target
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp865;
block20:;
panda$core$Int64 $tmp868 = (panda$core$Int64) {10};
panda$core$Bit $tmp869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp868);
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp871 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp872 = *$tmp871;
org$pandalanguage$pandac$ASTNode** $tmp873 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp874 = *$tmp873;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp875 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp875));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp874));
*(&local10) = $tmp874;
org$pandalanguage$pandac$ChoiceCase** $tmp876 = (org$pandalanguage$pandac$ChoiceCase**) (param1->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp877 = *$tmp876;
panda$core$Int64* $tmp878 = (panda$core$Int64*) (param1->$data + 32);
panda$core$Int64 $tmp879 = *$tmp878;
// line 328
org$pandalanguage$pandac$ASTNode* $tmp880 = *(&local10);
panda$core$Int64 $tmp881 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp880);
org$pandalanguage$pandac$ASTNode* $tmp882 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
// unreffing base
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp881;
block25:;
panda$core$Int64 $tmp883 = (panda$core$Int64) {12};
panda$core$Bit $tmp884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp883);
bool $tmp885 = $tmp884.value;
if ($tmp885) goto block26; else goto block27;
block26:;
// line 331
panda$core$Int64 $tmp886 = (panda$core$Int64) {1};
return $tmp886;
block27:;
panda$core$Int64 $tmp887 = (panda$core$Int64) {13};
panda$core$Bit $tmp888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp887);
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp890 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp891 = *$tmp890;
org$pandalanguage$pandac$ASTNode** $tmp892 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp893 = *$tmp892;
org$pandalanguage$pandac$ASTNode** $tmp894 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp895 = *$tmp894;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp896 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp896));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp895));
*(&local11) = $tmp895;
// line 334
org$pandalanguage$pandac$ASTNode* $tmp897 = *(&local11);
panda$core$Bit $tmp898 = panda$core$Bit$init$builtin_bit($tmp897 == NULL);
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block30; else goto block31;
block30:;
// line 335
panda$core$Int64 $tmp900 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ASTNode* $tmp901 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp901));
// unreffing value
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp900;
block31:;
// line 337
org$pandalanguage$pandac$ASTNode* $tmp902 = *(&local11);
panda$core$Int64 $tmp903 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp902);
org$pandalanguage$pandac$ASTNode* $tmp904 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp904));
// unreffing value
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp903;
block29:;
panda$core$Int64 $tmp905 = (panda$core$Int64) {14};
panda$core$Bit $tmp906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp905);
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp908 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp909 = *$tmp908;
panda$core$String** $tmp910 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp911 = *$tmp910;
panda$collections$ImmutableArray** $tmp912 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp913 = *$tmp912;
*(&local12) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp914 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp914));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp913));
*(&local12) = $tmp913;
org$pandalanguage$pandac$ASTNode** $tmp915 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp916 = *$tmp915;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp917 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp917));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
*(&local13) = $tmp916;
// line 340
org$pandalanguage$pandac$ASTNode* $tmp918 = *(&local13);
panda$core$Int64 $tmp919 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp918);
*(&local14) = $tmp919;
// line 341
panda$collections$ImmutableArray* $tmp920 = *(&local12);
ITable* $tmp921 = ((panda$collections$Iterable*) $tmp920)->$class->itable;
while ($tmp921->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp921 = $tmp921->next;
}
$fn923 $tmp922 = $tmp921->methods[0];
panda$collections$Iterator* $tmp924 = $tmp922(((panda$collections$Iterable*) $tmp920));
goto block34;
block34:;
ITable* $tmp925 = $tmp924->$class->itable;
while ($tmp925->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp925 = $tmp925->next;
}
$fn927 $tmp926 = $tmp925->methods[0];
panda$core$Bit $tmp928 = $tmp926($tmp924);
bool $tmp929 = $tmp928.value;
if ($tmp929) goto block36; else goto block35;
block35:;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp930 = $tmp924->$class->itable;
while ($tmp930->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp930 = $tmp930->next;
}
$fn932 $tmp931 = $tmp930->methods[1];
panda$core$Object* $tmp933 = $tmp931($tmp924);
panda$core$Panda$unref$panda$core$Object$Q($tmp933);
org$pandalanguage$pandac$ASTNode* $tmp934 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp933)));
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) $tmp933);
// line 342
panda$core$Int64 $tmp935 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp936 = *(&local15);
panda$core$Int64 $tmp937 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp936);
int64_t $tmp938 = $tmp935.value;
int64_t $tmp939 = $tmp937.value;
int64_t $tmp940 = $tmp938 + $tmp939;
panda$core$Int64 $tmp941 = (panda$core$Int64) {$tmp940};
*(&local14) = $tmp941;
org$pandalanguage$pandac$ASTNode* $tmp942 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp942));
// unreffing s
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block34;
block36:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp924));
// line 344
panda$core$Int64 $tmp943 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp944 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp944));
// unreffing test
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp945 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp945));
// unreffing statements
*(&local12) = ((panda$collections$ImmutableArray*) NULL);
return $tmp943;
block33:;
panda$core$Int64 $tmp946 = (panda$core$Int64) {15};
panda$core$Bit $tmp947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp946);
bool $tmp948 = $tmp947.value;
if ($tmp948) goto block37; else goto block38;
block37:;
org$pandalanguage$pandac$Position* $tmp949 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp950 = *$tmp949;
org$pandalanguage$pandac$ASTNode** $tmp951 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp952 = *$tmp951;
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp953 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp953));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp952));
*(&local16) = $tmp952;
panda$core$String** $tmp954 = (panda$core$String**) (param1->$data + 24);
panda$core$String* $tmp955 = *$tmp954;
// line 347
org$pandalanguage$pandac$ASTNode* $tmp956 = *(&local16);
panda$core$Int64 $tmp957 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp956);
org$pandalanguage$pandac$ASTNode* $tmp958 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp958));
// unreffing base
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp957;
block38:;
panda$core$Int64 $tmp959 = (panda$core$Int64) {18};
panda$core$Bit $tmp960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp959);
bool $tmp961 = $tmp960.value;
if ($tmp961) goto block39; else goto block40;
block39:;
org$pandalanguage$pandac$Position* $tmp962 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp963 = *$tmp962;
panda$core$String** $tmp964 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp965 = *$tmp964;
org$pandalanguage$pandac$ASTNode** $tmp966 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp967 = *$tmp966;
org$pandalanguage$pandac$ASTNode** $tmp968 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp969 = *$tmp968;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp970 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp970));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
*(&local17) = $tmp969;
panda$collections$ImmutableArray** $tmp971 = (panda$collections$ImmutableArray**) (param1->$data + 40);
panda$collections$ImmutableArray* $tmp972 = *$tmp971;
*(&local18) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp973 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp973));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp972));
*(&local18) = $tmp972;
// line 350
org$pandalanguage$pandac$ASTNode* $tmp974 = *(&local17);
panda$core$Int64 $tmp975 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp974);
*(&local19) = $tmp975;
// line 351
panda$collections$ImmutableArray* $tmp976 = *(&local18);
ITable* $tmp977 = ((panda$collections$Iterable*) $tmp976)->$class->itable;
while ($tmp977->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp977 = $tmp977->next;
}
$fn979 $tmp978 = $tmp977->methods[0];
panda$collections$Iterator* $tmp980 = $tmp978(((panda$collections$Iterable*) $tmp976));
goto block41;
block41:;
ITable* $tmp981 = $tmp980->$class->itable;
while ($tmp981->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp981 = $tmp981->next;
}
$fn983 $tmp982 = $tmp981->methods[0];
panda$core$Bit $tmp984 = $tmp982($tmp980);
bool $tmp985 = $tmp984.value;
if ($tmp985) goto block43; else goto block42;
block42:;
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp986 = $tmp980->$class->itable;
while ($tmp986->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp986 = $tmp986->next;
}
$fn988 $tmp987 = $tmp986->methods[1];
panda$core$Object* $tmp989 = $tmp987($tmp980);
panda$core$Panda$unref$panda$core$Object$Q($tmp989);
org$pandalanguage$pandac$ASTNode* $tmp990 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp989)));
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) $tmp989);
// line 352
panda$core$Int64 $tmp991 = *(&local19);
org$pandalanguage$pandac$ASTNode* $tmp992 = *(&local20);
panda$core$Int64 $tmp993 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp992);
int64_t $tmp994 = $tmp991.value;
int64_t $tmp995 = $tmp993.value;
int64_t $tmp996 = $tmp994 + $tmp995;
panda$core$Int64 $tmp997 = (panda$core$Int64) {$tmp996};
*(&local19) = $tmp997;
org$pandalanguage$pandac$ASTNode* $tmp998 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp998));
// unreffing s
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block41;
block43:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp980));
// line 354
panda$core$Int64 $tmp999 = *(&local19);
panda$collections$ImmutableArray* $tmp1000 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
// unreffing statements
*(&local18) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1001 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
// unreffing list
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp999;
block40:;
panda$core$Int64 $tmp1002 = (panda$core$Int64) {19};
panda$core$Bit $tmp1003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1002);
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block44; else goto block45;
block44:;
// line 357
panda$core$Int64 $tmp1005 = (panda$core$Int64) {0};
return $tmp1005;
block45:;
panda$core$Int64 $tmp1006 = (panda$core$Int64) {20};
panda$core$Bit $tmp1007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1006);
bool $tmp1008 = $tmp1007.value;
if ($tmp1008) goto block46; else goto block47;
block46:;
// line 360
panda$core$Int64 $tmp1009 = (panda$core$Int64) {1};
return $tmp1009;
block47:;
panda$core$Int64 $tmp1010 = (panda$core$Int64) {21};
panda$core$Bit $tmp1011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1010);
bool $tmp1012 = $tmp1011.value;
if ($tmp1012) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp1013 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1014 = *$tmp1013;
org$pandalanguage$pandac$ASTNode** $tmp1015 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1016 = *$tmp1015;
*(&local21) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1017 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1016));
*(&local21) = $tmp1016;
panda$collections$ImmutableArray** $tmp1018 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1019 = *$tmp1018;
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1020 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
*(&local22) = $tmp1019;
org$pandalanguage$pandac$ASTNode** $tmp1021 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1022 = *$tmp1021;
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1023 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1023));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
*(&local23) = $tmp1022;
// line 363
org$pandalanguage$pandac$ASTNode* $tmp1024 = *(&local21);
panda$core$Int64 $tmp1025 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1024);
*(&local24) = $tmp1025;
// line 364
panda$collections$ImmutableArray* $tmp1026 = *(&local22);
ITable* $tmp1027 = ((panda$collections$Iterable*) $tmp1026)->$class->itable;
while ($tmp1027->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1027 = $tmp1027->next;
}
$fn1029 $tmp1028 = $tmp1027->methods[0];
panda$collections$Iterator* $tmp1030 = $tmp1028(((panda$collections$Iterable*) $tmp1026));
goto block50;
block50:;
ITable* $tmp1031 = $tmp1030->$class->itable;
while ($tmp1031->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1031 = $tmp1031->next;
}
$fn1033 $tmp1032 = $tmp1031->methods[0];
panda$core$Bit $tmp1034 = $tmp1032($tmp1030);
bool $tmp1035 = $tmp1034.value;
if ($tmp1035) goto block52; else goto block51;
block51:;
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1036 = $tmp1030->$class->itable;
while ($tmp1036->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1036 = $tmp1036->next;
}
$fn1038 $tmp1037 = $tmp1036->methods[1];
panda$core$Object* $tmp1039 = $tmp1037($tmp1030);
panda$core$Panda$unref$panda$core$Object$Q($tmp1039);
org$pandalanguage$pandac$ASTNode* $tmp1040 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1040));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1039)));
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) $tmp1039);
// line 365
panda$core$Int64 $tmp1041 = *(&local24);
org$pandalanguage$pandac$ASTNode* $tmp1042 = *(&local25);
panda$core$Int64 $tmp1043 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1042);
int64_t $tmp1044 = $tmp1041.value;
int64_t $tmp1045 = $tmp1043.value;
int64_t $tmp1046 = $tmp1044 + $tmp1045;
panda$core$Int64 $tmp1047 = (panda$core$Int64) {$tmp1046};
*(&local24) = $tmp1047;
org$pandalanguage$pandac$ASTNode* $tmp1048 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
// unreffing s
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block50;
block52:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1030));
// line 367
org$pandalanguage$pandac$ASTNode* $tmp1049 = *(&local23);
panda$core$Bit $tmp1050 = panda$core$Bit$init$builtin_bit($tmp1049 != NULL);
bool $tmp1051 = $tmp1050.value;
if ($tmp1051) goto block53; else goto block54;
block53:;
// line 368
panda$core$Int64 $tmp1052 = *(&local24);
org$pandalanguage$pandac$ASTNode* $tmp1053 = *(&local23);
panda$core$Int64 $tmp1054 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1053);
int64_t $tmp1055 = $tmp1052.value;
int64_t $tmp1056 = $tmp1054.value;
int64_t $tmp1057 = $tmp1055 + $tmp1056;
panda$core$Int64 $tmp1058 = (panda$core$Int64) {$tmp1057};
*(&local24) = $tmp1058;
goto block54;
block54:;
// line 370
panda$core$Int64 $tmp1059 = *(&local24);
org$pandalanguage$pandac$ASTNode* $tmp1060 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1060));
// unreffing ifFalse
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1061 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1061));
// unreffing ifTrue
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1062 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1062));
// unreffing test
*(&local21) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1059;
block49:;
panda$core$Int64 $tmp1063 = (panda$core$Int64) {22};
panda$core$Bit $tmp1064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1063);
bool $tmp1065 = $tmp1064.value;
if ($tmp1065) goto block55; else goto block56;
block55:;
// line 373
panda$core$Int64 $tmp1066 = (panda$core$Int64) {1};
return $tmp1066;
block56:;
panda$core$Int64 $tmp1067 = (panda$core$Int64) {24};
panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1067);
bool $tmp1069 = $tmp1068.value;
if ($tmp1069) goto block57; else goto block58;
block57:;
org$pandalanguage$pandac$Position* $tmp1070 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1071 = *$tmp1070;
panda$core$String** $tmp1072 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp1073 = *$tmp1072;
panda$collections$ImmutableArray** $tmp1074 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1075 = *$tmp1074;
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1076 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1076));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1075));
*(&local26) = $tmp1075;
// line 376
panda$core$Int64 $tmp1077 = (panda$core$Int64) {0};
*(&local27) = $tmp1077;
// line 377
panda$collections$ImmutableArray* $tmp1078 = *(&local26);
ITable* $tmp1079 = ((panda$collections$Iterable*) $tmp1078)->$class->itable;
while ($tmp1079->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1079 = $tmp1079->next;
}
$fn1081 $tmp1080 = $tmp1079->methods[0];
panda$collections$Iterator* $tmp1082 = $tmp1080(((panda$collections$Iterable*) $tmp1078));
goto block59;
block59:;
ITable* $tmp1083 = $tmp1082->$class->itable;
while ($tmp1083->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1083 = $tmp1083->next;
}
$fn1085 $tmp1084 = $tmp1083->methods[0];
panda$core$Bit $tmp1086 = $tmp1084($tmp1082);
bool $tmp1087 = $tmp1086.value;
if ($tmp1087) goto block61; else goto block60;
block60:;
*(&local28) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1088 = $tmp1082->$class->itable;
while ($tmp1088->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1088 = $tmp1088->next;
}
$fn1090 $tmp1089 = $tmp1088->methods[1];
panda$core$Object* $tmp1091 = $tmp1089($tmp1082);
panda$core$Panda$unref$panda$core$Object$Q($tmp1091);
org$pandalanguage$pandac$ASTNode* $tmp1092 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1092));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1091)));
*(&local28) = ((org$pandalanguage$pandac$ASTNode*) $tmp1091);
// line 378
panda$core$Int64 $tmp1093 = *(&local27);
org$pandalanguage$pandac$ASTNode* $tmp1094 = *(&local28);
panda$core$Int64 $tmp1095 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1094);
int64_t $tmp1096 = $tmp1093.value;
int64_t $tmp1097 = $tmp1095.value;
int64_t $tmp1098 = $tmp1096 + $tmp1097;
panda$core$Int64 $tmp1099 = (panda$core$Int64) {$tmp1098};
*(&local27) = $tmp1099;
org$pandalanguage$pandac$ASTNode* $tmp1100 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
// unreffing s
*(&local28) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block59;
block61:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
// line 380
panda$core$Int64 $tmp1101 = *(&local27);
panda$collections$ImmutableArray* $tmp1102 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1102));
// unreffing statements
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1101;
block58:;
panda$core$Int64 $tmp1103 = (panda$core$Int64) {25};
panda$core$Bit $tmp1104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1103);
bool $tmp1105 = $tmp1104.value;
if ($tmp1105) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$Position* $tmp1106 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1107 = *$tmp1106;
org$pandalanguage$pandac$ASTNode** $tmp1108 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1109 = *$tmp1108;
*(&local29) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1110 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1110));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
*(&local29) = $tmp1109;
panda$collections$ImmutableArray** $tmp1111 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1112 = *$tmp1111;
*(&local30) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1113 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1112));
*(&local30) = $tmp1112;
panda$collections$ImmutableArray** $tmp1114 = (panda$collections$ImmutableArray**) (param1->$data + 32);
panda$collections$ImmutableArray* $tmp1115 = *$tmp1114;
*(&local31) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1116 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1116));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1115));
*(&local31) = $tmp1115;
// line 383
org$pandalanguage$pandac$ASTNode* $tmp1117 = *(&local29);
panda$core$Int64 $tmp1118 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1117);
*(&local32) = $tmp1118;
// line 384
panda$collections$ImmutableArray* $tmp1119 = *(&local30);
ITable* $tmp1120 = ((panda$collections$Iterable*) $tmp1119)->$class->itable;
while ($tmp1120->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1120 = $tmp1120->next;
}
$fn1122 $tmp1121 = $tmp1120->methods[0];
panda$collections$Iterator* $tmp1123 = $tmp1121(((panda$collections$Iterable*) $tmp1119));
goto block64;
block64:;
ITable* $tmp1124 = $tmp1123->$class->itable;
while ($tmp1124->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1124 = $tmp1124->next;
}
$fn1126 $tmp1125 = $tmp1124->methods[0];
panda$core$Bit $tmp1127 = $tmp1125($tmp1123);
bool $tmp1128 = $tmp1127.value;
if ($tmp1128) goto block66; else goto block65;
block65:;
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1129 = $tmp1123->$class->itable;
while ($tmp1129->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1129 = $tmp1129->next;
}
$fn1131 $tmp1130 = $tmp1129->methods[1];
panda$core$Object* $tmp1132 = $tmp1130($tmp1123);
panda$core$Panda$unref$panda$core$Object$Q($tmp1132);
org$pandalanguage$pandac$ASTNode* $tmp1133 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1132)));
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) $tmp1132);
// line 385
panda$core$Int64 $tmp1134 = *(&local32);
org$pandalanguage$pandac$ASTNode* $tmp1135 = *(&local33);
panda$core$Int64 $tmp1136 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1135);
int64_t $tmp1137 = $tmp1134.value;
int64_t $tmp1138 = $tmp1136.value;
int64_t $tmp1139 = $tmp1137 + $tmp1138;
panda$core$Int64 $tmp1140 = (panda$core$Int64) {$tmp1139};
*(&local32) = $tmp1140;
org$pandalanguage$pandac$ASTNode* $tmp1141 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1141));
// unreffing w
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block64;
block66:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1123));
// line 387
panda$collections$ImmutableArray* $tmp1142 = *(&local31);
panda$core$Bit $tmp1143 = panda$core$Bit$init$builtin_bit($tmp1142 != NULL);
bool $tmp1144 = $tmp1143.value;
if ($tmp1144) goto block67; else goto block68;
block67:;
// line 388
panda$collections$ImmutableArray* $tmp1145 = *(&local31);
ITable* $tmp1146 = ((panda$collections$Iterable*) $tmp1145)->$class->itable;
while ($tmp1146->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1146 = $tmp1146->next;
}
$fn1148 $tmp1147 = $tmp1146->methods[0];
panda$collections$Iterator* $tmp1149 = $tmp1147(((panda$collections$Iterable*) $tmp1145));
goto block69;
block69:;
ITable* $tmp1150 = $tmp1149->$class->itable;
while ($tmp1150->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1150 = $tmp1150->next;
}
$fn1152 $tmp1151 = $tmp1150->methods[0];
panda$core$Bit $tmp1153 = $tmp1151($tmp1149);
bool $tmp1154 = $tmp1153.value;
if ($tmp1154) goto block71; else goto block70;
block70:;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1155 = $tmp1149->$class->itable;
while ($tmp1155->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1155 = $tmp1155->next;
}
$fn1157 $tmp1156 = $tmp1155->methods[1];
panda$core$Object* $tmp1158 = $tmp1156($tmp1149);
panda$core$Panda$unref$panda$core$Object$Q($tmp1158);
org$pandalanguage$pandac$ASTNode* $tmp1159 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1159));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1158)));
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) $tmp1158);
// line 389
panda$core$Int64 $tmp1160 = *(&local32);
org$pandalanguage$pandac$ASTNode* $tmp1161 = *(&local34);
panda$core$Int64 $tmp1162 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1161);
int64_t $tmp1163 = $tmp1160.value;
int64_t $tmp1164 = $tmp1162.value;
int64_t $tmp1165 = $tmp1163 + $tmp1164;
panda$core$Int64 $tmp1166 = (panda$core$Int64) {$tmp1165};
*(&local32) = $tmp1166;
org$pandalanguage$pandac$ASTNode* $tmp1167 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
// unreffing s
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block69;
block71:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
goto block68;
block68:;
// line 392
panda$core$Int64 $tmp1168 = *(&local32);
panda$collections$ImmutableArray* $tmp1169 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
// unreffing other
*(&local31) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1170 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
// unreffing whens
*(&local30) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1171 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1171));
// unreffing value
*(&local29) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1168;
block63:;
panda$core$Int64 $tmp1172 = (panda$core$Int64) {26};
panda$core$Bit $tmp1173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1172);
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block72; else goto block73;
block72:;
// line 395
panda$core$Int64 $tmp1175 = (panda$core$Int64) {10};
return $tmp1175;
block73:;
panda$core$Int64 $tmp1176 = (panda$core$Int64) {28};
panda$core$Bit $tmp1177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1176);
bool $tmp1178 = $tmp1177.value;
if ($tmp1178) goto block74; else goto block75;
block74:;
// line 398
panda$core$Int64 $tmp1179 = (panda$core$Int64) {1};
return $tmp1179;
block75:;
panda$core$Int64 $tmp1180 = (panda$core$Int64) {29};
panda$core$Bit $tmp1181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1180);
bool $tmp1182 = $tmp1181.value;
if ($tmp1182) goto block76; else goto block77;
block76:;
// line 401
panda$core$Int64 $tmp1183 = (panda$core$Int64) {0};
return $tmp1183;
block77:;
panda$core$Int64 $tmp1184 = (panda$core$Int64) {32};
panda$core$Bit $tmp1185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1184);
bool $tmp1186 = $tmp1185.value;
if ($tmp1186) goto block78; else goto block79;
block78:;
org$pandalanguage$pandac$Position* $tmp1187 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1188 = *$tmp1187;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1189 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1190 = *$tmp1189;
org$pandalanguage$pandac$ASTNode** $tmp1191 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1192 = *$tmp1191;
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1193 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
*(&local35) = $tmp1192;
// line 404
panda$core$Int64 $tmp1194 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode* $tmp1195 = *(&local35);
panda$core$Int64 $tmp1196 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1195);
int64_t $tmp1197 = $tmp1194.value;
int64_t $tmp1198 = $tmp1196.value;
int64_t $tmp1199 = $tmp1197 + $tmp1198;
panda$core$Int64 $tmp1200 = (panda$core$Int64) {$tmp1199};
org$pandalanguage$pandac$ASTNode* $tmp1201 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1201));
// unreffing base
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1200;
block79:;
panda$core$Int64 $tmp1202 = (panda$core$Int64) {33};
panda$core$Bit $tmp1203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1202);
bool $tmp1204 = $tmp1203.value;
if ($tmp1204) goto block80; else goto block81;
block80:;
// line 407
panda$core$Int64 $tmp1205 = (panda$core$Int64) {1};
return $tmp1205;
block81:;
panda$core$Int64 $tmp1206 = (panda$core$Int64) {34};
panda$core$Bit $tmp1207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1206);
bool $tmp1208 = $tmp1207.value;
if ($tmp1208) goto block82; else goto block83;
block82:;
// line 410
panda$core$Int64 $tmp1209 = (panda$core$Int64) {1};
return $tmp1209;
block83:;
panda$core$Int64 $tmp1210 = (panda$core$Int64) {35};
panda$core$Bit $tmp1211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1210);
bool $tmp1212 = $tmp1211.value;
if ($tmp1212) goto block84; else goto block85;
block84:;
// line 413
panda$core$Int64 $tmp1213 = (panda$core$Int64) {1};
return $tmp1213;
block85:;
panda$core$Int64 $tmp1214 = (panda$core$Int64) {36};
panda$core$Bit $tmp1215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1214);
bool $tmp1216 = $tmp1215.value;
if ($tmp1216) goto block86; else goto block87;
block86:;
org$pandalanguage$pandac$Position* $tmp1217 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1218 = *$tmp1217;
org$pandalanguage$pandac$ASTNode** $tmp1219 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1220 = *$tmp1219;
*(&local36) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1221 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1221));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1220));
*(&local36) = $tmp1220;
// line 416
org$pandalanguage$pandac$ASTNode* $tmp1222 = *(&local36);
panda$core$Bit $tmp1223 = panda$core$Bit$init$builtin_bit($tmp1222 == NULL);
bool $tmp1224 = $tmp1223.value;
if ($tmp1224) goto block88; else goto block89;
block88:;
// line 417
panda$core$Int64 $tmp1225 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ASTNode* $tmp1226 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1226));
// unreffing value
*(&local36) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1225;
block89:;
// line 419
org$pandalanguage$pandac$ASTNode* $tmp1227 = *(&local36);
panda$core$Int64 $tmp1228 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1227);
org$pandalanguage$pandac$ASTNode* $tmp1229 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1229));
// unreffing value
*(&local36) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1228;
block87:;
panda$core$Int64 $tmp1230 = (panda$core$Int64) {37};
panda$core$Bit $tmp1231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1230);
bool $tmp1232 = $tmp1231.value;
if ($tmp1232) goto block90; else goto block91;
block90:;
// line 422
panda$core$Int64 $tmp1233 = (panda$core$Int64) {1};
return $tmp1233;
block91:;
panda$core$Int64 $tmp1234 = (panda$core$Int64) {38};
panda$core$Bit $tmp1235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1234);
bool $tmp1236 = $tmp1235.value;
if ($tmp1236) goto block92; else goto block93;
block92:;
// line 425
panda$core$Int64 $tmp1237 = (panda$core$Int64) {1};
return $tmp1237;
block93:;
panda$core$Int64 $tmp1238 = (panda$core$Int64) {39};
panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1238);
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block94; else goto block95;
block94:;
// line 428
panda$core$Int64 $tmp1241 = (panda$core$Int64) {1};
return $tmp1241;
block95:;
panda$core$Int64 $tmp1242 = (panda$core$Int64) {42};
panda$core$Bit $tmp1243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1242);
bool $tmp1244 = $tmp1243.value;
if ($tmp1244) goto block96; else goto block97;
block96:;
// line 431
panda$core$Int64 $tmp1245 = (panda$core$Int64) {0};
return $tmp1245;
block97:;
panda$core$Int64 $tmp1246 = (panda$core$Int64) {43};
panda$core$Bit $tmp1247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1246);
bool $tmp1248 = $tmp1247.value;
if ($tmp1248) goto block98; else goto block99;
block98:;
// line 434
panda$core$Int64 $tmp1249 = (panda$core$Int64) {10};
return $tmp1249;
block99:;
panda$core$Int64 $tmp1250 = (panda$core$Int64) {45};
panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1250);
bool $tmp1252 = $tmp1251.value;
if ($tmp1252) goto block100; else goto block101;
block100:;
// line 437
panda$core$Int64 $tmp1253 = (panda$core$Int64) {10};
return $tmp1253;
block101:;
panda$core$Int64 $tmp1254 = (panda$core$Int64) {47};
panda$core$Bit $tmp1255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1254);
bool $tmp1256 = $tmp1255.value;
if ($tmp1256) goto block102; else goto block103;
block102:;
org$pandalanguage$pandac$Position* $tmp1257 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1258 = *$tmp1257;
org$pandalanguage$pandac$Variable$Kind* $tmp1259 = (org$pandalanguage$pandac$Variable$Kind*) (param1->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp1260 = *$tmp1259;
panda$collections$ImmutableArray** $tmp1261 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1262 = *$tmp1261;
*(&local37) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1263 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
*(&local37) = $tmp1262;
// line 440
panda$core$Int64 $tmp1264 = (panda$core$Int64) {0};
*(&local38) = $tmp1264;
// line 441
panda$collections$ImmutableArray* $tmp1265 = *(&local37);
ITable* $tmp1266 = ((panda$collections$Iterable*) $tmp1265)->$class->itable;
while ($tmp1266->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1266 = $tmp1266->next;
}
$fn1268 $tmp1267 = $tmp1266->methods[0];
panda$collections$Iterator* $tmp1269 = $tmp1267(((panda$collections$Iterable*) $tmp1265));
goto block104;
block104:;
ITable* $tmp1270 = $tmp1269->$class->itable;
while ($tmp1270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1270 = $tmp1270->next;
}
$fn1272 $tmp1271 = $tmp1270->methods[0];
panda$core$Bit $tmp1273 = $tmp1271($tmp1269);
bool $tmp1274 = $tmp1273.value;
if ($tmp1274) goto block106; else goto block105;
block105:;
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1275 = $tmp1269->$class->itable;
while ($tmp1275->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1275 = $tmp1275->next;
}
$fn1277 $tmp1276 = $tmp1275->methods[1];
panda$core$Object* $tmp1278 = $tmp1276($tmp1269);
panda$core$Panda$unref$panda$core$Object$Q($tmp1278);
org$pandalanguage$pandac$ASTNode* $tmp1279 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1279));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1278)));
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) $tmp1278);
// line 442
panda$core$Int64 $tmp1280 = *(&local38);
org$pandalanguage$pandac$ASTNode* $tmp1281 = *(&local39);
panda$core$Int64 $tmp1282 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1281);
int64_t $tmp1283 = $tmp1280.value;
int64_t $tmp1284 = $tmp1282.value;
int64_t $tmp1285 = $tmp1283 + $tmp1284;
panda$core$Int64 $tmp1286 = (panda$core$Int64) {$tmp1285};
*(&local38) = $tmp1286;
org$pandalanguage$pandac$ASTNode* $tmp1287 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1287));
// unreffing decl
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block104;
block106:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1269));
// line 444
panda$core$Int64 $tmp1288 = *(&local38);
panda$collections$ImmutableArray* $tmp1289 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1289));
// unreffing decls
*(&local37) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1288;
block103:;
panda$core$Int64 $tmp1290 = (panda$core$Int64) {48};
panda$core$Bit $tmp1291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1290);
bool $tmp1292 = $tmp1291.value;
if ($tmp1292) goto block107; else goto block108;
block107:;
org$pandalanguage$pandac$Position* $tmp1293 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1294 = *$tmp1293;
panda$collections$ImmutableArray** $tmp1295 = (panda$collections$ImmutableArray**) (param1->$data + 16);
panda$collections$ImmutableArray* $tmp1296 = *$tmp1295;
*(&local40) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1297 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1297));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1296));
*(&local40) = $tmp1296;
panda$collections$ImmutableArray** $tmp1298 = (panda$collections$ImmutableArray**) (param1->$data + 24);
panda$collections$ImmutableArray* $tmp1299 = *$tmp1298;
*(&local41) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1300 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1300));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
*(&local41) = $tmp1299;
// line 447
panda$core$Int64 $tmp1301 = (panda$core$Int64) {0};
*(&local42) = $tmp1301;
// line 448
panda$collections$ImmutableArray* $tmp1302 = *(&local40);
ITable* $tmp1303 = ((panda$collections$Iterable*) $tmp1302)->$class->itable;
while ($tmp1303->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1303 = $tmp1303->next;
}
$fn1305 $tmp1304 = $tmp1303->methods[0];
panda$collections$Iterator* $tmp1306 = $tmp1304(((panda$collections$Iterable*) $tmp1302));
goto block109;
block109:;
ITable* $tmp1307 = $tmp1306->$class->itable;
while ($tmp1307->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1307 = $tmp1307->next;
}
$fn1309 $tmp1308 = $tmp1307->methods[0];
panda$core$Bit $tmp1310 = $tmp1308($tmp1306);
bool $tmp1311 = $tmp1310.value;
if ($tmp1311) goto block111; else goto block110;
block110:;
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1312 = $tmp1306->$class->itable;
while ($tmp1312->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1312 = $tmp1312->next;
}
$fn1314 $tmp1313 = $tmp1312->methods[1];
panda$core$Object* $tmp1315 = $tmp1313($tmp1306);
panda$core$Panda$unref$panda$core$Object$Q($tmp1315);
org$pandalanguage$pandac$ASTNode* $tmp1316 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1316));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1315)));
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) $tmp1315);
// line 449
panda$core$Int64 $tmp1317 = *(&local42);
org$pandalanguage$pandac$ASTNode* $tmp1318 = *(&local43);
panda$core$Int64 $tmp1319 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1318);
int64_t $tmp1320 = $tmp1317.value;
int64_t $tmp1321 = $tmp1319.value;
int64_t $tmp1322 = $tmp1320 + $tmp1321;
panda$core$Int64 $tmp1323 = (panda$core$Int64) {$tmp1322};
*(&local42) = $tmp1323;
org$pandalanguage$pandac$ASTNode* $tmp1324 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1324));
// unreffing test
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block109;
block111:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1306));
// line 451
panda$collections$ImmutableArray* $tmp1325 = *(&local41);
ITable* $tmp1326 = ((panda$collections$Iterable*) $tmp1325)->$class->itable;
while ($tmp1326->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1326 = $tmp1326->next;
}
$fn1328 $tmp1327 = $tmp1326->methods[0];
panda$collections$Iterator* $tmp1329 = $tmp1327(((panda$collections$Iterable*) $tmp1325));
goto block112;
block112:;
ITable* $tmp1330 = $tmp1329->$class->itable;
while ($tmp1330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1330 = $tmp1330->next;
}
$fn1332 $tmp1331 = $tmp1330->methods[0];
panda$core$Bit $tmp1333 = $tmp1331($tmp1329);
bool $tmp1334 = $tmp1333.value;
if ($tmp1334) goto block114; else goto block113;
block113:;
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1335 = $tmp1329->$class->itable;
while ($tmp1335->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1335 = $tmp1335->next;
}
$fn1337 $tmp1336 = $tmp1335->methods[1];
panda$core$Object* $tmp1338 = $tmp1336($tmp1329);
panda$core$Panda$unref$panda$core$Object$Q($tmp1338);
org$pandalanguage$pandac$ASTNode* $tmp1339 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1339));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1338)));
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) $tmp1338);
// line 452
panda$core$Int64 $tmp1340 = *(&local42);
org$pandalanguage$pandac$ASTNode* $tmp1341 = *(&local44);
panda$core$Int64 $tmp1342 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1341);
int64_t $tmp1343 = $tmp1340.value;
int64_t $tmp1344 = $tmp1342.value;
int64_t $tmp1345 = $tmp1343 + $tmp1344;
panda$core$Int64 $tmp1346 = (panda$core$Int64) {$tmp1345};
*(&local42) = $tmp1346;
org$pandalanguage$pandac$ASTNode* $tmp1347 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1347));
// unreffing s
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block112;
block114:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1329));
// line 454
panda$core$Int64 $tmp1348 = *(&local42);
panda$collections$ImmutableArray* $tmp1349 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1349));
// unreffing statements
*(&local41) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1350 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1350));
// unreffing tests
*(&local40) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1348;
block108:;
panda$core$Int64 $tmp1351 = (panda$core$Int64) {49};
panda$core$Bit $tmp1352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp1351);
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block115; else goto block116;
block115:;
org$pandalanguage$pandac$Position* $tmp1354 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1355 = *$tmp1354;
panda$core$String** $tmp1356 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp1357 = *$tmp1356;
org$pandalanguage$pandac$ASTNode** $tmp1358 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1359 = *$tmp1358;
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1360 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1360));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1359));
*(&local45) = $tmp1359;
panda$collections$ImmutableArray** $tmp1361 = (panda$collections$ImmutableArray**) (param1->$data + 32);
panda$collections$ImmutableArray* $tmp1362 = *$tmp1361;
*(&local46) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1363 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1363));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1362));
*(&local46) = $tmp1362;
// line 457
org$pandalanguage$pandac$ASTNode* $tmp1364 = *(&local45);
panda$core$Int64 $tmp1365 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1364);
*(&local47) = $tmp1365;
// line 458
panda$collections$ImmutableArray* $tmp1366 = *(&local46);
ITable* $tmp1367 = ((panda$collections$Iterable*) $tmp1366)->$class->itable;
while ($tmp1367->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1367 = $tmp1367->next;
}
$fn1369 $tmp1368 = $tmp1367->methods[0];
panda$collections$Iterator* $tmp1370 = $tmp1368(((panda$collections$Iterable*) $tmp1366));
goto block117;
block117:;
ITable* $tmp1371 = $tmp1370->$class->itable;
while ($tmp1371->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1371 = $tmp1371->next;
}
$fn1373 $tmp1372 = $tmp1371->methods[0];
panda$core$Bit $tmp1374 = $tmp1372($tmp1370);
bool $tmp1375 = $tmp1374.value;
if ($tmp1375) goto block119; else goto block118;
block118:;
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1376 = $tmp1370->$class->itable;
while ($tmp1376->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1376 = $tmp1376->next;
}
$fn1378 $tmp1377 = $tmp1376->methods[1];
panda$core$Object* $tmp1379 = $tmp1377($tmp1370);
panda$core$Panda$unref$panda$core$Object$Q($tmp1379);
org$pandalanguage$pandac$ASTNode* $tmp1380 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1380));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1379)));
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) $tmp1379);
// line 459
panda$core$Int64 $tmp1381 = *(&local47);
org$pandalanguage$pandac$ASTNode* $tmp1382 = *(&local48);
panda$core$Int64 $tmp1383 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1382);
int64_t $tmp1384 = $tmp1381.value;
int64_t $tmp1385 = $tmp1383.value;
int64_t $tmp1386 = $tmp1384 + $tmp1385;
panda$core$Int64 $tmp1387 = (panda$core$Int64) {$tmp1386};
*(&local47) = $tmp1387;
org$pandalanguage$pandac$ASTNode* $tmp1388 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1388));
// unreffing s
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block117;
block119:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1370));
// line 461
panda$core$Int64 $tmp1389 = *(&local47);
panda$collections$ImmutableArray* $tmp1390 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1390));
// unreffing statements
*(&local46) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1391 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1391));
// unreffing test
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1389;
block116:;
// line 464
panda$core$Bit $tmp1392 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1393 = $tmp1392.value;
if ($tmp1393) goto block120; else goto block121;
block121:;
panda$core$Int64 $tmp1394 = (panda$core$Int64) {464};
panda$core$String* $tmp1395 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1396, ((panda$core$Object*) param1));
panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1395, &$s1398);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1399, $tmp1394, $tmp1397);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1395));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1397));
abort(); // unreachable
block120:;
goto block1;
block1:;
panda$core$Bit $tmp1400 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1401 = $tmp1400.value;
if ($tmp1401) goto block122; else goto block123;
block123:;
panda$core$Int64 $tmp1402 = (panda$core$Int64) {292};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1403, $tmp1402, &$s1404);
abort(); // unreachable
block122:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Annotations* param1, panda$collections$ImmutableArray* param2) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 470
panda$core$Weak** $tmp1405 = &param0->compiler;
panda$core$Weak* $tmp1406 = *$tmp1405;
panda$core$Object* $tmp1407 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1406);
panda$core$Panda$unref$panda$core$Object$Q($tmp1407);
org$pandalanguage$pandac$Compiler$Settings** $tmp1408 = &((org$pandalanguage$pandac$Compiler*) $tmp1407)->settings;
org$pandalanguage$pandac$Compiler$Settings* $tmp1409 = *$tmp1408;
panda$core$Int64* $tmp1410 = &$tmp1409->optimizationLevel;
panda$core$Int64 $tmp1411 = *$tmp1410;
panda$core$Int64 $tmp1412 = (panda$core$Int64) {0};
int64_t $tmp1413 = $tmp1411.value;
int64_t $tmp1414 = $tmp1412.value;
bool $tmp1415 = $tmp1413 > $tmp1414;
panda$core$Bit $tmp1416 = (panda$core$Bit) {$tmp1415};
bool $tmp1417 = $tmp1416.value;
if ($tmp1417) goto block1; else goto block2;
block1:;
panda$core$Bit $tmp1418 = org$pandalanguage$pandac$Annotations$get_isInline$R$panda$core$Bit(param1);
panda$core$Bit $tmp1419 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1418);
*(&local1) = $tmp1419;
goto block3;
block2:;
*(&local1) = $tmp1416;
goto block3;
block3:;
panda$core$Bit $tmp1420 = *(&local1);
bool $tmp1421 = $tmp1420.value;
if ($tmp1421) goto block4; else goto block5;
block4:;
panda$core$Bit $tmp1422 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit(param1);
*(&local0) = $tmp1422;
goto block6;
block5:;
*(&local0) = $tmp1420;
goto block6;
block6:;
panda$core$Bit $tmp1423 = *(&local0);
bool $tmp1424 = $tmp1423.value;
if ($tmp1424) goto block7; else goto block8;
block7:;
// line 472
panda$core$Int64 $tmp1425 = (panda$core$Int64) {0};
*(&local2) = $tmp1425;
// line 473
ITable* $tmp1426 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp1426->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1426 = $tmp1426->next;
}
$fn1428 $tmp1427 = $tmp1426->methods[0];
panda$collections$Iterator* $tmp1429 = $tmp1427(((panda$collections$Iterable*) param2));
goto block9;
block9:;
ITable* $tmp1430 = $tmp1429->$class->itable;
while ($tmp1430->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1430 = $tmp1430->next;
}
$fn1432 $tmp1431 = $tmp1430->methods[0];
panda$core$Bit $tmp1433 = $tmp1431($tmp1429);
bool $tmp1434 = $tmp1433.value;
if ($tmp1434) goto block11; else goto block10;
block10:;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1435 = $tmp1429->$class->itable;
while ($tmp1435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1435 = $tmp1435->next;
}
$fn1437 $tmp1436 = $tmp1435->methods[1];
panda$core$Object* $tmp1438 = $tmp1436($tmp1429);
panda$core$Panda$unref$panda$core$Object$Q($tmp1438);
org$pandalanguage$pandac$ASTNode* $tmp1439 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1439));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1438)));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) $tmp1438);
// line 474
panda$core$Int64 $tmp1440 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1441 = *(&local3);
panda$core$Int64 $tmp1442 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1441);
int64_t $tmp1443 = $tmp1440.value;
int64_t $tmp1444 = $tmp1442.value;
int64_t $tmp1445 = $tmp1443 + $tmp1444;
panda$core$Int64 $tmp1446 = (panda$core$Int64) {$tmp1445};
*(&local2) = $tmp1446;
// line 475
panda$core$Int64 $tmp1447 = *(&local2);
panda$core$Int64 $tmp1448 = (panda$core$Int64) {10};
int64_t $tmp1449 = $tmp1447.value;
int64_t $tmp1450 = $tmp1448.value;
bool $tmp1451 = $tmp1449 > $tmp1450;
panda$core$Bit $tmp1452 = (panda$core$Bit) {$tmp1451};
bool $tmp1453 = $tmp1452.value;
if ($tmp1453) goto block12; else goto block13;
block12:;
// line 476
panda$core$Bit $tmp1454 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp1455 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1455));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1454;
block13:;
org$pandalanguage$pandac$ASTNode* $tmp1456 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1456));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1429));
// line 479
panda$core$Bit $tmp1457 = panda$core$Bit$init$builtin_bit(true);
return $tmp1457;
block8:;
// line 481
panda$core$Bit $tmp1458 = panda$core$Bit$init$builtin_bit(false);
return $tmp1458;

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
// line 488
*(&local0) = ((panda$core$String*) NULL);
// line 490
panda$core$Bit $tmp1459 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1460 = $tmp1459.value;
if ($tmp1460) goto block1; else goto block3;
block1:;
// line 491
panda$core$String* $tmp1461 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1461));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 494
panda$core$Int64* $tmp1462 = &param3->$rawValue;
panda$core$Int64 $tmp1463 = *$tmp1462;
panda$core$Int64 $tmp1464 = (panda$core$Int64) {38};
panda$core$Bit $tmp1465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1463, $tmp1464);
bool $tmp1466 = $tmp1465.value;
if ($tmp1466) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp1467 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp1468 = *$tmp1467;
*(&local1) = $tmp1468;
panda$core$String** $tmp1469 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp1470 = *$tmp1469;
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp1471 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1471));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1470));
*(&local2) = $tmp1470;
// line 496
panda$core$String* $tmp1472 = *(&local2);
panda$core$String* $tmp1473 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1472));
*(&local0) = $tmp1472;
panda$core$String* $tmp1474 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1474));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 499
panda$core$Bit $tmp1475 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1476 = $tmp1475.value;
if ($tmp1476) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1477 = (panda$core$Int64) {499};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1478, $tmp1477);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 503
org$pandalanguage$pandac$Annotations* $tmp1479 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param4);
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
org$pandalanguage$pandac$Annotations* $tmp1480 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1480));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1479));
*(&local3) = $tmp1479;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1479));
// line 504
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1481;
$tmp1481 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1481->value = param5;
panda$core$Int64 $tmp1482 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1483 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1482);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1484;
$tmp1484 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1484->value = $tmp1483;
ITable* $tmp1485 = ((panda$core$Equatable*) $tmp1481)->$class->itable;
while ($tmp1485->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1485 = $tmp1485->next;
}
$fn1487 $tmp1486 = $tmp1485->methods[1];
panda$core$Bit $tmp1488 = $tmp1486(((panda$core$Equatable*) $tmp1481), ((panda$core$Equatable*) $tmp1484));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1481)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1484)));
bool $tmp1489 = $tmp1488.value;
if ($tmp1489) goto block9; else goto block10;
block9:;
org$pandalanguage$pandac$Annotations** $tmp1490 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp1491 = *$tmp1490;
panda$core$Bit $tmp1492 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit($tmp1491);
*(&local5) = $tmp1492;
goto block11;
block10:;
*(&local5) = $tmp1488;
goto block11;
block11:;
panda$core$Bit $tmp1493 = *(&local5);
bool $tmp1494 = $tmp1493.value;
if ($tmp1494) goto block12; else goto block13;
block12:;
*(&local4) = $tmp1493;
goto block14;
block13:;
org$pandalanguage$pandac$Annotations* $tmp1495 = *(&local3);
panda$core$Bit $tmp1496 = org$pandalanguage$pandac$Annotations$get_isPrivate$R$panda$core$Bit($tmp1495);
*(&local4) = $tmp1496;
goto block14;
block14:;
panda$core$Bit $tmp1497 = *(&local4);
bool $tmp1498 = $tmp1497.value;
if ($tmp1498) goto block15; else goto block16;
block15:;
// line 505
org$pandalanguage$pandac$Annotations* $tmp1499 = *(&local3);
panda$core$Int64* $tmp1500 = &$tmp1499->flags;
panda$core$Int64 $tmp1501 = *$tmp1500;
panda$core$Int64 $tmp1502 = (panda$core$Int64) {256};
panda$core$Int64 $tmp1503 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1501, $tmp1502);
panda$core$Int64* $tmp1504 = &$tmp1499->flags;
*$tmp1504 = $tmp1503;
goto block16;
block16:;
// line 507
*(&local6) = ((panda$collections$Array*) NULL);
// line 508
panda$core$Bit $tmp1505 = panda$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1506 = $tmp1505.value;
if ($tmp1506) goto block17; else goto block19;
block17:;
// line 509
panda$collections$Array* $tmp1507 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1507);
panda$collections$Array* $tmp1508 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1508));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1507));
*(&local6) = $tmp1507;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1507));
// line 510
panda$core$String** $tmp1509 = &param1->name;
panda$core$String* $tmp1510 = *$tmp1509;
panda$core$String* $tmp1511 = panda$core$String$convert$R$panda$core$String($tmp1510);
panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1511, &$s1513);
panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1512, param6);
panda$core$String* $tmp1515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1514, &$s1516);
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp1517 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1517));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1515));
*(&local7) = $tmp1515;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1511));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1512));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1515));
// line 511
ITable* $tmp1518 = ((panda$collections$Iterable*) param7)->$class->itable;
while ($tmp1518->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1518 = $tmp1518->next;
}
$fn1520 $tmp1519 = $tmp1518->methods[0];
panda$collections$Iterator* $tmp1521 = $tmp1519(((panda$collections$Iterable*) param7));
goto block20;
block20:;
ITable* $tmp1522 = $tmp1521->$class->itable;
while ($tmp1522->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1522 = $tmp1522->next;
}
$fn1524 $tmp1523 = $tmp1522->methods[0];
panda$core$Bit $tmp1525 = $tmp1523($tmp1521);
bool $tmp1526 = $tmp1525.value;
if ($tmp1526) goto block22; else goto block21;
block21:;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1527 = $tmp1521->$class->itable;
while ($tmp1527->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1527 = $tmp1527->next;
}
$fn1529 $tmp1528 = $tmp1527->methods[1];
panda$core$Object* $tmp1530 = $tmp1528($tmp1521);
panda$core$Panda$unref$panda$core$Object$Q($tmp1530);
org$pandalanguage$pandac$ASTNode* $tmp1531 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1531));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1530)));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) $tmp1530);
// line 512
*(&local9) = ((panda$core$String*) NULL);
// line 513
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
// line 514
org$pandalanguage$pandac$ASTNode* $tmp1532 = *(&local8);
panda$core$Int64* $tmp1533 = &$tmp1532->$rawValue;
panda$core$Int64 $tmp1534 = *$tmp1533;
panda$core$Int64 $tmp1535 = (panda$core$Int64) {20};
panda$core$Bit $tmp1536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1534, $tmp1535);
bool $tmp1537 = $tmp1536.value;
if ($tmp1537) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp1538 = (org$pandalanguage$pandac$Position*) ($tmp1532->$data + 0);
org$pandalanguage$pandac$Position $tmp1539 = *$tmp1538;
panda$core$String** $tmp1540 = (panda$core$String**) ($tmp1532->$data + 16);
panda$core$String* $tmp1541 = *$tmp1540;
*(&local11) = ((panda$core$String*) NULL);
panda$core$String* $tmp1542 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1542));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1541));
*(&local11) = $tmp1541;
// line 516
panda$core$String* $tmp1543 = *(&local11);
panda$core$String* $tmp1544 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1544));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1543));
*(&local9) = $tmp1543;
// line 517
org$pandalanguage$pandac$Type* $tmp1545 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp1546 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1546));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1545));
*(&local10) = $tmp1545;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1545));
panda$core$String* $tmp1547 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1547));
// unreffing id
*(&local11) = ((panda$core$String*) NULL);
goto block23;
block25:;
panda$core$Int64 $tmp1548 = (panda$core$Int64) {44};
panda$core$Bit $tmp1549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1534, $tmp1548);
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp1551 = (org$pandalanguage$pandac$Position*) ($tmp1532->$data + 0);
org$pandalanguage$pandac$Position $tmp1552 = *$tmp1551;
panda$core$String** $tmp1553 = (panda$core$String**) ($tmp1532->$data + 16);
panda$core$String* $tmp1554 = *$tmp1553;
*(&local12) = ((panda$core$String*) NULL);
panda$core$String* $tmp1555 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1554));
*(&local12) = $tmp1554;
org$pandalanguage$pandac$ASTNode** $tmp1556 = (org$pandalanguage$pandac$ASTNode**) ($tmp1532->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1557 = *$tmp1556;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1558 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1558));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1557));
*(&local13) = $tmp1557;
// line 520
panda$core$String* $tmp1559 = *(&local12);
panda$core$String* $tmp1560 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1560));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1559));
*(&local9) = $tmp1559;
// line 521
org$pandalanguage$pandac$ASTNode* $tmp1561 = *(&local13);
org$pandalanguage$pandac$Type* $tmp1562 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1561);
org$pandalanguage$pandac$Type* $tmp1563 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1563));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1562));
*(&local10) = $tmp1562;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1562));
org$pandalanguage$pandac$ASTNode* $tmp1564 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1564));
// unreffing type
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1565 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1565));
// unreffing id
*(&local12) = ((panda$core$String*) NULL);
goto block23;
block27:;
// line 524
panda$core$Bit $tmp1566 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1567 = $tmp1566.value;
if ($tmp1567) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp1568 = (panda$core$Int64) {524};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1569, $tmp1568);
abort(); // unreachable
block28:;
goto block23;
block23:;
// line 527
panda$collections$Array* $tmp1570 = *(&local6);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1571 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
org$pandalanguage$pandac$ASTNode* $tmp1572 = *(&local8);
$fn1574 $tmp1573 = ($fn1574) $tmp1572->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1575 = $tmp1573($tmp1572);
panda$core$String* $tmp1576 = *(&local7);
panda$core$String* $tmp1577 = *(&local9);
org$pandalanguage$pandac$Type* $tmp1578 = *(&local10);
org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1571, $tmp1575, $tmp1576, $tmp1577, $tmp1578);
panda$collections$Array$add$panda$collections$Array$T($tmp1570, ((panda$core$Object*) $tmp1571));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
org$pandalanguage$pandac$Type* $tmp1579 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1579));
// unreffing bound
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp1580 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1580));
// unreffing parameterName
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1581 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1581));
// unreffing p
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block20;
block22:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
panda$core$String* $tmp1582 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1582));
// unreffing fullName
*(&local7) = ((panda$core$String*) NULL);
goto block18;
block19:;
// line 1
// line 532
panda$collections$Array* $tmp1583 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1583));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
*(&local6) = ((panda$collections$Array*) NULL);
goto block18;
block18:;
// line 534
panda$collections$Array* $tmp1584 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1584);
*(&local14) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1585 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1585));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1584));
*(&local14) = $tmp1584;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1584));
// line 535
ITable* $tmp1586 = ((panda$collections$Iterable*) param8)->$class->itable;
while ($tmp1586->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1586 = $tmp1586->next;
}
$fn1588 $tmp1587 = $tmp1586->methods[0];
panda$collections$Iterator* $tmp1589 = $tmp1587(((panda$collections$Iterable*) param8));
goto block30;
block30:;
ITable* $tmp1590 = $tmp1589->$class->itable;
while ($tmp1590->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1590 = $tmp1590->next;
}
$fn1592 $tmp1591 = $tmp1590->methods[0];
panda$core$Bit $tmp1593 = $tmp1591($tmp1589);
bool $tmp1594 = $tmp1593.value;
if ($tmp1594) goto block32; else goto block31;
block31:;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1595 = $tmp1589->$class->itable;
while ($tmp1595->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1595 = $tmp1595->next;
}
$fn1597 $tmp1596 = $tmp1595->methods[1];
panda$core$Object* $tmp1598 = $tmp1596($tmp1589);
panda$core$Panda$unref$panda$core$Object$Q($tmp1598);
org$pandalanguage$pandac$ASTNode* $tmp1599 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1599));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1598)));
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) $tmp1598);
// line 536
org$pandalanguage$pandac$ASTNode* $tmp1600 = *(&local15);
panda$core$Int64* $tmp1601 = &$tmp1600->$rawValue;
panda$core$Int64 $tmp1602 = *$tmp1601;
panda$core$Int64 $tmp1603 = (panda$core$Int64) {31};
panda$core$Bit $tmp1604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1602, $tmp1603);
bool $tmp1605 = $tmp1604.value;
if ($tmp1605) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp1606 = (org$pandalanguage$pandac$Position*) ($tmp1600->$data + 0);
org$pandalanguage$pandac$Position $tmp1607 = *$tmp1606;
panda$core$String** $tmp1608 = (panda$core$String**) ($tmp1600->$data + 16);
panda$core$String* $tmp1609 = *$tmp1608;
*(&local16) = ((panda$core$String*) NULL);
panda$core$String* $tmp1610 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1610));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1609));
*(&local16) = $tmp1609;
org$pandalanguage$pandac$ASTNode** $tmp1611 = (org$pandalanguage$pandac$ASTNode**) ($tmp1600->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1612 = *$tmp1611;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1613 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1613));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1612));
*(&local17) = $tmp1612;
// line 538
panda$collections$Array* $tmp1614 = *(&local14);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1615 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
panda$core$String* $tmp1616 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1617 = *(&local17);
org$pandalanguage$pandac$Type* $tmp1618 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1617);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1615, $tmp1616, $tmp1618);
panda$collections$Array$add$panda$collections$Array$T($tmp1614, ((panda$core$Object*) $tmp1615));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1615));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1618));
org$pandalanguage$pandac$ASTNode* $tmp1619 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1619));
// unreffing type
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1620 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1620));
// unreffing name
*(&local16) = ((panda$core$String*) NULL);
goto block33;
block35:;
// line 541
panda$core$Bit $tmp1621 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1622 = $tmp1621.value;
if ($tmp1622) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp1623 = (panda$core$Int64) {541};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1624, $tmp1623);
abort(); // unreachable
block36:;
goto block33;
block33:;
org$pandalanguage$pandac$ASTNode* $tmp1625 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1625));
// unreffing p
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block30;
block32:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1589));
// line 545
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
// line 546
panda$core$Bit $tmp1626 = panda$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1627 = $tmp1626.value;
if ($tmp1627) goto block38; else goto block40;
block38:;
// line 547
org$pandalanguage$pandac$Type* $tmp1628 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, param9);
org$pandalanguage$pandac$Type* $tmp1629 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1629));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
*(&local18) = $tmp1628;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
goto block39;
block40:;
// line 1
// line 550
org$pandalanguage$pandac$Type* $tmp1630 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp1631 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1631));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1630));
*(&local18) = $tmp1630;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1630));
goto block39;
block39:;
// line 552
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1632;
$tmp1632 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1632->value = param5;
panda$core$Int64 $tmp1633 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1634 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1633);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1635;
$tmp1635 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1635->value = $tmp1634;
ITable* $tmp1636 = ((panda$core$Equatable*) $tmp1632)->$class->itable;
while ($tmp1636->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1636 = $tmp1636->next;
}
$fn1638 $tmp1637 = $tmp1636->methods[0];
panda$core$Bit $tmp1639 = $tmp1637(((panda$core$Equatable*) $tmp1632), ((panda$core$Equatable*) $tmp1635));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1632)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1635)));
bool $tmp1640 = $tmp1639.value;
if ($tmp1640) goto block41; else goto block42;
block41:;
org$pandalanguage$pandac$Type* $tmp1641 = *(&local18);
org$pandalanguage$pandac$Type* $tmp1642 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1643 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1641, $tmp1642);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1642));
*(&local19) = $tmp1643;
goto block43;
block42:;
*(&local19) = $tmp1639;
goto block43;
block43:;
panda$core$Bit $tmp1644 = *(&local19);
bool $tmp1645 = $tmp1644.value;
if ($tmp1645) goto block44; else goto block45;
block44:;
// line 553
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param2, &$s1646);
goto block45;
block45:;
// line 555
panda$core$Bit $tmp1647 = panda$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1648 = $tmp1647.value;
if ($tmp1648) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Annotations* $tmp1649 = *(&local3);
panda$core$Bit $tmp1650 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(param0, $tmp1649, param10);
*(&local20) = $tmp1650;
goto block48;
block47:;
*(&local20) = $tmp1647;
goto block48;
block48:;
panda$core$Bit $tmp1651 = *(&local20);
bool $tmp1652 = $tmp1651.value;
if ($tmp1652) goto block49; else goto block50;
block49:;
// line 556
org$pandalanguage$pandac$Annotations* $tmp1653 = *(&local3);
panda$core$Int64* $tmp1654 = &$tmp1653->flags;
panda$core$Int64 $tmp1655 = *$tmp1654;
panda$core$Int64 $tmp1656 = (panda$core$Int64) {1024};
panda$core$Int64 $tmp1657 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1655, $tmp1656);
panda$core$Int64* $tmp1658 = &$tmp1653->flags;
*$tmp1658 = $tmp1657;
goto block50;
block50:;
// line 558
panda$core$Bit $tmp1659 = panda$core$Bit$init$builtin_bit(param10 == NULL);
bool $tmp1660 = $tmp1659.value;
if ($tmp1660) goto block51; else goto block52;
block51:;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp1661 = &param1->classKind;
org$pandalanguage$pandac$ClassDecl$Kind $tmp1662 = *$tmp1661;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp1663;
$tmp1663 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp1663->value = $tmp1662;
panda$core$Int64 $tmp1664 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp1665 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp1664);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp1666;
$tmp1666 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp1666->value = $tmp1665;
ITable* $tmp1667 = ((panda$core$Equatable*) $tmp1663)->$class->itable;
while ($tmp1667->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1667 = $tmp1667->next;
}
$fn1669 $tmp1668 = $tmp1667->methods[0];
panda$core$Bit $tmp1670 = $tmp1668(((panda$core$Equatable*) $tmp1663), ((panda$core$Equatable*) $tmp1666));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1663)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1666)));
*(&local21) = $tmp1670;
goto block53;
block52:;
*(&local21) = $tmp1659;
goto block53;
block53:;
panda$core$Bit $tmp1671 = *(&local21);
bool $tmp1672 = $tmp1671.value;
if ($tmp1672) goto block54; else goto block55;
block54:;
// line 559
org$pandalanguage$pandac$Annotations* $tmp1673 = *(&local3);
panda$core$Int64* $tmp1674 = &$tmp1673->flags;
panda$core$Int64 $tmp1675 = *$tmp1674;
panda$core$Int64 $tmp1676 = (panda$core$Int64) {512};
panda$core$Int64 $tmp1677 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp1675, $tmp1676);
panda$core$Int64 $tmp1678 = (panda$core$Int64) {0};
int64_t $tmp1679 = $tmp1677.value;
int64_t $tmp1680 = $tmp1678.value;
bool $tmp1681 = $tmp1679 != $tmp1680;
panda$core$Bit $tmp1682 = (panda$core$Bit) {$tmp1681};
bool $tmp1683 = $tmp1682.value;
if ($tmp1683) goto block56; else goto block57;
block56:;
// line 560
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param2, &$s1684);
goto block57;
block57:;
// line 563
org$pandalanguage$pandac$Annotations* $tmp1685 = *(&local3);
panda$core$Int64* $tmp1686 = &$tmp1685->flags;
panda$core$Int64 $tmp1687 = *$tmp1686;
panda$core$Int64 $tmp1688 = (panda$core$Int64) {512};
panda$core$Int64 $tmp1689 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1687, $tmp1688);
panda$core$Int64* $tmp1690 = &$tmp1685->flags;
*$tmp1690 = $tmp1689;
goto block55;
block55:;
// line 565
org$pandalanguage$pandac$MethodDecl* $tmp1691 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
panda$core$String* $tmp1692 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp1693 = *(&local3);
panda$collections$Array* $tmp1694 = *(&local6);
panda$collections$Array* $tmp1695 = *(&local14);
org$pandalanguage$pandac$Type* $tmp1696 = *(&local18);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1691, param1, param2, $tmp1692, $tmp1693, param5, param6, $tmp1694, $tmp1695, $tmp1696, param10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1691));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1691));
org$pandalanguage$pandac$Type* $tmp1697 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1697));
// unreffing returnType
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1698 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1698));
// unreffing parameters
*(&local14) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1699 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1699));
// unreffing generics
*(&local6) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp1700 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1700));
// unreffing annotations
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp1701 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1701));
// unreffing doccomment
*(&local0) = ((panda$core$String*) NULL);
return $tmp1691;

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
// line 570
panda$core$Int64* $tmp1702 = &param2->$rawValue;
panda$core$Int64 $tmp1703 = *$tmp1702;
panda$core$Int64 $tmp1704 = (panda$core$Int64) {16};
panda$core$Bit $tmp1705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1703, $tmp1704);
bool $tmp1706 = $tmp1705.value;
if ($tmp1706) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp1707 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1708 = *$tmp1707;
*(&local0) = $tmp1708;
org$pandalanguage$pandac$ASTNode** $tmp1709 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1710 = *$tmp1709;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1711 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1711));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1710));
*(&local1) = $tmp1710;
panda$collections$ImmutableArray** $tmp1712 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp1713 = *$tmp1712;
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1714 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1714));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1713));
*(&local2) = $tmp1713;
org$pandalanguage$pandac$ASTNode** $tmp1715 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1716 = *$tmp1715;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1717 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1717));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1716));
*(&local3) = $tmp1716;
// line 572
org$pandalanguage$pandac$Position $tmp1718 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp1719 = *(&local1);
panda$collections$ImmutableArray* $tmp1720 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1721 = *(&local3);
org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(param0, param1, $tmp1718, $tmp1719, $tmp1720, $tmp1721);
org$pandalanguage$pandac$ASTNode* $tmp1722 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1722));
// unreffing varDecl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1723 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1723));
// unreffing annotations
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1724 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1724));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp1725 = (panda$core$Int64) {26};
panda$core$Bit $tmp1726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1703, $tmp1725);
bool $tmp1727 = $tmp1726.value;
if ($tmp1727) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp1728 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1729 = *$tmp1728;
*(&local4) = $tmp1729;
org$pandalanguage$pandac$ASTNode** $tmp1730 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1731 = *$tmp1730;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1732 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1732));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1731));
*(&local5) = $tmp1731;
panda$collections$ImmutableArray** $tmp1733 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp1734 = *$tmp1733;
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1735 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1735));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1734));
*(&local6) = $tmp1734;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp1736 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param2->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1737 = *$tmp1736;
*(&local7) = $tmp1737;
panda$core$String** $tmp1738 = (panda$core$String**) (param2->$data + 40);
panda$core$String* $tmp1739 = *$tmp1738;
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp1740 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1740));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1739));
*(&local8) = $tmp1739;
panda$collections$ImmutableArray** $tmp1741 = (panda$collections$ImmutableArray**) (param2->$data + 48);
panda$collections$ImmutableArray* $tmp1742 = *$tmp1741;
*(&local9) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1743 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1743));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1742));
*(&local9) = $tmp1742;
panda$collections$ImmutableArray** $tmp1744 = (panda$collections$ImmutableArray**) (param2->$data + 56);
panda$collections$ImmutableArray* $tmp1745 = *$tmp1744;
*(&local10) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1746 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1746));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
*(&local10) = $tmp1745;
org$pandalanguage$pandac$ASTNode** $tmp1747 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp1748 = *$tmp1747;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1749 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1749));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1748));
*(&local11) = $tmp1748;
panda$collections$ImmutableArray** $tmp1750 = (panda$collections$ImmutableArray**) (param2->$data + 72);
panda$collections$ImmutableArray* $tmp1751 = *$tmp1750;
*(&local12) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1752 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1752));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1751));
*(&local12) = $tmp1751;
// line 576
org$pandalanguage$pandac$Position $tmp1753 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1754 = *(&local5);
panda$collections$ImmutableArray* $tmp1755 = *(&local6);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1756 = *(&local7);
panda$core$String* $tmp1757 = *(&local8);
panda$collections$ImmutableArray* $tmp1758 = *(&local9);
panda$collections$ImmutableArray* $tmp1759 = *(&local10);
org$pandalanguage$pandac$ASTNode* $tmp1760 = *(&local11);
panda$collections$ImmutableArray* $tmp1761 = *(&local12);
org$pandalanguage$pandac$MethodDecl* $tmp1762 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(param0, param1, $tmp1753, $tmp1754, $tmp1755, $tmp1756, $tmp1757, $tmp1758, $tmp1759, $tmp1760, $tmp1761);
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp1763 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1763));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1762));
*(&local13) = $tmp1762;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1762));
// line 578
org$pandalanguage$pandac$MethodDecl* $tmp1764 = *(&local13);
panda$core$Bit $tmp1765 = panda$core$Bit$init$builtin_bit($tmp1764 != NULL);
bool $tmp1766 = $tmp1765.value;
if ($tmp1766) goto block6; else goto block7;
block6:;
// line 579
org$pandalanguage$pandac$SymbolTable** $tmp1767 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1768 = *$tmp1767;
org$pandalanguage$pandac$MethodDecl* $tmp1769 = *(&local13);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1768, ((org$pandalanguage$pandac$Symbol*) $tmp1769));
// line 580
panda$collections$Array** $tmp1770 = &param1->methods;
panda$collections$Array* $tmp1771 = *$tmp1770;
org$pandalanguage$pandac$MethodDecl* $tmp1772 = *(&local13);
panda$collections$Array$add$panda$collections$Array$T($tmp1771, ((panda$core$Object*) $tmp1772));
goto block7;
block7:;
org$pandalanguage$pandac$MethodDecl* $tmp1773 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1773));
// unreffing m
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$collections$ImmutableArray* $tmp1774 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1774));
// unreffing statements
*(&local12) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1775 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1775));
// unreffing returnType
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1776 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1776));
// unreffing parameters
*(&local10) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1777 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1777));
// unreffing generics
*(&local9) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1778 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1778));
// unreffing name
*(&local8) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp1779 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1779));
// unreffing annotations
*(&local6) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1780 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1780));
// unreffing dc
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp1781 = (panda$core$Int64) {11};
panda$core$Bit $tmp1782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1703, $tmp1781);
bool $tmp1783 = $tmp1782.value;
if ($tmp1783) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp1784 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1785 = *$tmp1784;
*(&local14) = $tmp1785;
org$pandalanguage$pandac$ASTNode** $tmp1786 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1787 = *$tmp1786;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1788 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1788));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1787));
*(&local15) = $tmp1787;
panda$collections$ImmutableArray** $tmp1789 = (panda$collections$ImmutableArray**) (param2->$data + 24);
panda$collections$ImmutableArray* $tmp1790 = *$tmp1789;
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1791 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1791));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1790));
*(&local16) = $tmp1790;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp1792 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param2->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp1793 = *$tmp1792;
*(&local17) = $tmp1793;
panda$core$String** $tmp1794 = (panda$core$String**) (param2->$data + 40);
panda$core$String* $tmp1795 = *$tmp1794;
*(&local18) = ((panda$core$String*) NULL);
panda$core$String* $tmp1796 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1796));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1795));
*(&local18) = $tmp1795;
panda$collections$ImmutableArray** $tmp1797 = (panda$collections$ImmutableArray**) (param2->$data + 48);
panda$collections$ImmutableArray* $tmp1798 = *$tmp1797;
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1799 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1799));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1798));
*(&local19) = $tmp1798;
panda$collections$ImmutableArray** $tmp1800 = (panda$collections$ImmutableArray**) (param2->$data + 56);
panda$collections$ImmutableArray* $tmp1801 = *$tmp1800;
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1802 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1802));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1801));
*(&local20) = $tmp1801;
panda$collections$ImmutableArray** $tmp1803 = (panda$collections$ImmutableArray**) (param2->$data + 64);
panda$collections$ImmutableArray* $tmp1804 = *$tmp1803;
*(&local21) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1805 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1805));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1804));
*(&local21) = $tmp1804;
// line 585
panda$io$File** $tmp1806 = &param1->source;
panda$io$File* $tmp1807 = *$tmp1806;
panda$collections$MapView** $tmp1808 = &param1->aliases;
panda$collections$MapView* $tmp1809 = *$tmp1808;
panda$core$String** $tmp1810 = &param1->name;
panda$core$String* $tmp1811 = *$tmp1810;
org$pandalanguage$pandac$Position $tmp1812 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp1813 = *(&local15);
panda$collections$ImmutableArray* $tmp1814 = *(&local16);
org$pandalanguage$pandac$ClassDecl$Kind $tmp1815 = *(&local17);
panda$core$String* $tmp1816 = *(&local18);
panda$collections$ImmutableArray* $tmp1817 = *(&local19);
panda$collections$ImmutableArray* $tmp1818 = *(&local20);
panda$collections$ImmutableArray* $tmp1819 = *(&local21);
org$pandalanguage$pandac$ClassDecl* $tmp1820 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp1807, $tmp1809, $tmp1811, $tmp1812, $tmp1813, $tmp1814, $tmp1815, $tmp1816, $tmp1817, $tmp1818, $tmp1819);
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1821 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1821));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1820));
*(&local22) = $tmp1820;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1820));
// line 587
org$pandalanguage$pandac$ClassDecl* $tmp1822 = *(&local22);
panda$core$Bit $tmp1823 = panda$core$Bit$init$builtin_bit($tmp1822 != NULL);
bool $tmp1824 = $tmp1823.value;
if ($tmp1824) goto block10; else goto block11;
block10:;
// line 588
org$pandalanguage$pandac$ClassDecl* $tmp1825 = *(&local22);
panda$core$Weak* $tmp1826 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp1826, ((panda$core$Object*) param1));
panda$core$Weak** $tmp1827 = &$tmp1825->owner;
panda$core$Weak* $tmp1828 = *$tmp1827;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1828));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1826));
panda$core$Weak** $tmp1829 = &$tmp1825->owner;
*$tmp1829 = $tmp1826;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1826));
// line 589
panda$collections$Array** $tmp1830 = &param1->classes;
panda$collections$Array* $tmp1831 = *$tmp1830;
org$pandalanguage$pandac$ClassDecl* $tmp1832 = *(&local22);
panda$collections$Array$add$panda$collections$Array$T($tmp1831, ((panda$core$Object*) $tmp1832));
// line 590
org$pandalanguage$pandac$ClassDecl* $tmp1833 = *(&local22);
panda$core$String** $tmp1834 = &$tmp1833->name;
panda$core$String* $tmp1835 = *$tmp1834;
panda$core$String** $tmp1836 = &param1->name;
panda$core$String* $tmp1837 = *$tmp1836;
panda$core$String* $tmp1838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1837, &$s1839);
panda$core$Bit $tmp1840 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1835, $tmp1838);
bool $tmp1841 = $tmp1840.value;
if ($tmp1841) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp1842 = (panda$core$Int64) {590};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1843, $tmp1842);
abort(); // unreachable
block12:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1838));
// line 591
org$pandalanguage$pandac$SymbolTable** $tmp1844 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1845 = *$tmp1844;
org$pandalanguage$pandac$Alias* $tmp1846 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
org$pandalanguage$pandac$ClassDecl* $tmp1847 = *(&local22);
panda$core$String** $tmp1848 = &$tmp1847->name;
panda$core$String* $tmp1849 = *$tmp1848;
panda$core$String** $tmp1850 = &param1->name;
panda$core$String* $tmp1851 = *$tmp1850;
panda$core$Int64 $tmp1852 = panda$core$String$get_length$R$panda$core$Int64($tmp1851);
panda$core$Int64 $tmp1853 = (panda$core$Int64) {1};
int64_t $tmp1854 = $tmp1852.value;
int64_t $tmp1855 = $tmp1853.value;
int64_t $tmp1856 = $tmp1854 + $tmp1855;
panda$core$Int64 $tmp1857 = (panda$core$Int64) {$tmp1856};
panda$core$Bit $tmp1858 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1859 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp1857, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1858);
panda$core$String* $tmp1860 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1849, $tmp1859);
org$pandalanguage$pandac$ClassDecl* $tmp1861 = *(&local22);
panda$core$String** $tmp1862 = &$tmp1861->name;
panda$core$String* $tmp1863 = *$tmp1862;
org$pandalanguage$pandac$Position $tmp1864 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1846, $tmp1860, $tmp1863, $tmp1864);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1845, ((org$pandalanguage$pandac$Symbol*) $tmp1846));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1846));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
// line 593
org$pandalanguage$pandac$ClassDecl* $tmp1865 = *(&local22);
org$pandalanguage$pandac$SymbolTable** $tmp1866 = &$tmp1865->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1867 = *$tmp1866;
org$pandalanguage$pandac$Alias* $tmp1868 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
panda$core$String* $tmp1869 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(param1);
panda$core$String** $tmp1870 = &param1->name;
panda$core$String* $tmp1871 = *$tmp1870;
org$pandalanguage$pandac$Position $tmp1872 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1868, $tmp1869, $tmp1871, $tmp1872);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1867, ((org$pandalanguage$pandac$Symbol*) $tmp1868));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1868));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1869));
goto block11;
block11:;
org$pandalanguage$pandac$ClassDecl* $tmp1873 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1873));
// unreffing inner
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$ImmutableArray* $tmp1874 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1874));
// unreffing members
*(&local21) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1875 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1875));
// unreffing supertypes
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1876 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1876));
// unreffing generics
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1877 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1877));
// unreffing name
*(&local18) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp1878 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1878));
// unreffing annotations
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1879 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1879));
// unreffing dc
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp1880 = (panda$core$Int64) {9};
panda$core$Bit $tmp1881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1703, $tmp1880);
bool $tmp1882 = $tmp1881.value;
if ($tmp1882) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp1883 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1884 = *$tmp1883;
*(&local23) = $tmp1884;
org$pandalanguage$pandac$ASTNode** $tmp1885 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1886 = *$tmp1885;
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1887 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1887));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1886));
*(&local24) = $tmp1886;
panda$core$String** $tmp1888 = (panda$core$String**) (param2->$data + 24);
panda$core$String* $tmp1889 = *$tmp1888;
*(&local25) = ((panda$core$String*) NULL);
panda$core$String* $tmp1890 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1890));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1889));
*(&local25) = $tmp1889;
panda$collections$ImmutableArray** $tmp1891 = (panda$collections$ImmutableArray**) (param2->$data + 32);
panda$collections$ImmutableArray* $tmp1892 = *$tmp1891;
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1893 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1893));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1892));
*(&local26) = $tmp1892;
// line 597
org$pandalanguage$pandac$Position $tmp1894 = *(&local23);
org$pandalanguage$pandac$ASTNode* $tmp1895 = *(&local24);
panda$core$String* $tmp1896 = *(&local25);
panda$collections$ImmutableArray* $tmp1897 = *(&local26);
org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0, param1, $tmp1894, $tmp1895, $tmp1896, $tmp1897);
panda$collections$ImmutableArray* $tmp1898 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1898));
// unreffing fields
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1899 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1899));
// unreffing name
*(&local25) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1900 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1900));
// unreffing dc
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block15:;
// line 600
panda$core$Bit $tmp1901 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1902 = $tmp1901.value;
if ($tmp1902) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp1903 = (panda$core$Int64) {600};
panda$core$String* $tmp1904 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1905, ((panda$core$Object*) param2));
panda$core$String* $tmp1906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1904, &$s1907);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1908, $tmp1903, $tmp1906);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1904));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1906));
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
// line 607
*(&local0) = ((panda$core$String*) NULL);
// line 609
panda$core$Bit $tmp1909 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1910 = $tmp1909.value;
if ($tmp1910) goto block1; else goto block3;
block1:;
// line 610
panda$core$String* $tmp1911 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1911));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 613
panda$core$Int64* $tmp1912 = &param3->$rawValue;
panda$core$Int64 $tmp1913 = *$tmp1912;
panda$core$Int64 $tmp1914 = (panda$core$Int64) {38};
panda$core$Bit $tmp1915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1913, $tmp1914);
bool $tmp1916 = $tmp1915.value;
if ($tmp1916) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp1917 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp1918 = *$tmp1917;
*(&local1) = $tmp1918;
panda$core$String** $tmp1919 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp1920 = *$tmp1919;
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp1921 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1921));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1920));
*(&local2) = $tmp1920;
// line 615
panda$core$String* $tmp1922 = *(&local2);
panda$core$String* $tmp1923 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1923));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1922));
*(&local0) = $tmp1922;
panda$core$String* $tmp1924 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1924));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 618
panda$core$Bit $tmp1925 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1926 = $tmp1925.value;
if ($tmp1926) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1927 = (panda$core$Int64) {618};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1928, $tmp1927);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 622
panda$collections$Array* $tmp1929 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1929);
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1930 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1930));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1929));
*(&local3) = $tmp1929;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1929));
// line 623
ITable* $tmp1931 = ((panda$collections$Iterable*) param5)->$class->itable;
while ($tmp1931->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1931 = $tmp1931->next;
}
$fn1933 $tmp1932 = $tmp1931->methods[0];
panda$collections$Iterator* $tmp1934 = $tmp1932(((panda$collections$Iterable*) param5));
goto block9;
block9:;
ITable* $tmp1935 = $tmp1934->$class->itable;
while ($tmp1935->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1935 = $tmp1935->next;
}
$fn1937 $tmp1936 = $tmp1935->methods[0];
panda$core$Bit $tmp1938 = $tmp1936($tmp1934);
bool $tmp1939 = $tmp1938.value;
if ($tmp1939) goto block11; else goto block10;
block10:;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1940 = $tmp1934->$class->itable;
while ($tmp1940->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1940 = $tmp1940->next;
}
$fn1942 $tmp1941 = $tmp1940->methods[1];
panda$core$Object* $tmp1943 = $tmp1941($tmp1934);
panda$core$Panda$unref$panda$core$Object$Q($tmp1943);
org$pandalanguage$pandac$ASTNode* $tmp1944 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1944));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1943)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) $tmp1943);
// line 624
panda$collections$Array* $tmp1945 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1946 = *(&local4);
org$pandalanguage$pandac$Type* $tmp1947 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1946);
panda$collections$Array$add$panda$collections$Array$T($tmp1945, ((panda$core$Object*) $tmp1947));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1947));
org$pandalanguage$pandac$ASTNode* $tmp1948 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1948));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1934));
// line 626
org$pandalanguage$pandac$ChoiceCase* $tmp1949 = (org$pandalanguage$pandac$ChoiceCase*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceCase$class);
panda$core$String* $tmp1950 = *(&local0);
panda$collections$Array** $tmp1951 = &param1->choiceCases;
panda$collections$Array* $tmp1952 = *$tmp1951;
ITable* $tmp1953 = ((panda$collections$CollectionView*) $tmp1952)->$class->itable;
while ($tmp1953->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1953 = $tmp1953->next;
}
$fn1955 $tmp1954 = $tmp1953->methods[0];
panda$core$Int64 $tmp1956 = $tmp1954(((panda$collections$CollectionView*) $tmp1952));
panda$collections$Array* $tmp1957 = *(&local3);
org$pandalanguage$pandac$ChoiceCase$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1949, param1, param2, param4, $tmp1950, $tmp1956, ((panda$collections$ListView*) $tmp1957));
*(&local5) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ChoiceCase* $tmp1958 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1958));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1949));
*(&local5) = $tmp1949;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1949));
// line 628
panda$collections$Array** $tmp1959 = &param1->choiceCases;
panda$collections$Array* $tmp1960 = *$tmp1959;
org$pandalanguage$pandac$ChoiceCase* $tmp1961 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp1960, ((panda$core$Object*) $tmp1961));
// line 629
org$pandalanguage$pandac$SymbolTable** $tmp1962 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1963 = *$tmp1962;
org$pandalanguage$pandac$ChoiceCase* $tmp1964 = *(&local5);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1963, ((org$pandalanguage$pandac$Symbol*) $tmp1964));
org$pandalanguage$pandac$ChoiceCase* $tmp1965 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1965));
// unreffing entry
*(&local5) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$collections$Array* $tmp1966 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1966));
// unreffing fields
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1967 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1967));
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
// line 636
*(&local0) = ((panda$core$String*) NULL);
// line 637
ITable* $tmp1969 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp1969->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1969 = $tmp1969->next;
}
$fn1971 $tmp1970 = $tmp1969->methods[1];
panda$core$Bit $tmp1972 = $tmp1970(((panda$core$Equatable*) param3), ((panda$core$Equatable*) &$s1968));
bool $tmp1973 = $tmp1972.value;
if ($tmp1973) goto block1; else goto block3;
block1:;
// line 638
panda$core$String* $tmp1974 = panda$core$String$convert$R$panda$core$String(param3);
panda$core$String* $tmp1975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1974, &$s1976);
panda$core$String* $tmp1977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1975, param8);
panda$core$String* $tmp1978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1977, &$s1979);
panda$core$String* $tmp1980 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1980));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1978));
*(&local0) = $tmp1978;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1974));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1975));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1977));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1978));
goto block2;
block3:;
// line 1
// line 641
panda$core$String* $tmp1981 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1981));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
*(&local0) = param8;
goto block2;
block2:;
// line 643
*(&local1) = ((panda$core$String*) NULL);
// line 645
panda$core$Bit $tmp1982 = panda$core$Bit$init$builtin_bit(param5 == NULL);
bool $tmp1983 = $tmp1982.value;
if ($tmp1983) goto block4; else goto block6;
block4:;
// line 646
panda$core$String* $tmp1984 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1984));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local1) = ((panda$core$String*) NULL);
goto block5;
block6:;
// line 1
// line 649
panda$core$Int64* $tmp1985 = &param5->$rawValue;
panda$core$Int64 $tmp1986 = *$tmp1985;
panda$core$Int64 $tmp1987 = (panda$core$Int64) {38};
panda$core$Bit $tmp1988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1986, $tmp1987);
bool $tmp1989 = $tmp1988.value;
if ($tmp1989) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp1990 = (org$pandalanguage$pandac$Position*) (param5->$data + 0);
org$pandalanguage$pandac$Position $tmp1991 = *$tmp1990;
*(&local2) = $tmp1991;
panda$core$String** $tmp1992 = (panda$core$String**) (param5->$data + 16);
panda$core$String* $tmp1993 = *$tmp1992;
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1994 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1994));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1993));
*(&local3) = $tmp1993;
// line 651
panda$core$String* $tmp1995 = *(&local3);
panda$core$String* $tmp1996 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1996));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1995));
*(&local1) = $tmp1995;
panda$core$String* $tmp1997 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1997));
// unreffing text
*(&local3) = ((panda$core$String*) NULL);
goto block7;
block9:;
// line 654
panda$core$Bit $tmp1998 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1999 = $tmp1998.value;
if ($tmp1999) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp2000 = (panda$core$Int64) {654};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2001, $tmp2000);
abort(); // unreachable
block10:;
goto block7;
block7:;
goto block5;
block5:;
// line 658
org$pandalanguage$pandac$Annotations* $tmp2002 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param6);
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
org$pandalanguage$pandac$Annotations* $tmp2003 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2003));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2002));
*(&local4) = $tmp2002;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2002));
// line 659
panda$collections$Array* $tmp2004 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2004);
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2005 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2005));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2004));
*(&local5) = $tmp2004;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2004));
// line 660
panda$core$Bit $tmp2006 = panda$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2007 = $tmp2006.value;
if ($tmp2007) goto block12; else goto block13;
block12:;
// line 661
ITable* $tmp2008 = ((panda$collections$Iterable*) param9)->$class->itable;
while ($tmp2008->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2008 = $tmp2008->next;
}
$fn2010 $tmp2009 = $tmp2008->methods[0];
panda$collections$Iterator* $tmp2011 = $tmp2009(((panda$collections$Iterable*) param9));
goto block14;
block14:;
ITable* $tmp2012 = $tmp2011->$class->itable;
while ($tmp2012->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2012 = $tmp2012->next;
}
$fn2014 $tmp2013 = $tmp2012->methods[0];
panda$core$Bit $tmp2015 = $tmp2013($tmp2011);
bool $tmp2016 = $tmp2015.value;
if ($tmp2016) goto block16; else goto block15;
block15:;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2017 = $tmp2011->$class->itable;
while ($tmp2017->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2017 = $tmp2017->next;
}
$fn2019 $tmp2018 = $tmp2017->methods[1];
panda$core$Object* $tmp2020 = $tmp2018($tmp2011);
panda$core$Panda$unref$panda$core$Object$Q($tmp2020);
org$pandalanguage$pandac$ASTNode* $tmp2021 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2021));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2020)));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) $tmp2020);
// line 662
*(&local7) = ((panda$core$String*) NULL);
// line 663
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
// line 664
org$pandalanguage$pandac$ASTNode* $tmp2022 = *(&local6);
panda$core$Int64* $tmp2023 = &$tmp2022->$rawValue;
panda$core$Int64 $tmp2024 = *$tmp2023;
panda$core$Int64 $tmp2025 = (panda$core$Int64) {20};
panda$core$Bit $tmp2026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2024, $tmp2025);
bool $tmp2027 = $tmp2026.value;
if ($tmp2027) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp2028 = (org$pandalanguage$pandac$Position*) ($tmp2022->$data + 0);
org$pandalanguage$pandac$Position $tmp2029 = *$tmp2028;
panda$core$String** $tmp2030 = (panda$core$String**) ($tmp2022->$data + 16);
panda$core$String* $tmp2031 = *$tmp2030;
*(&local9) = ((panda$core$String*) NULL);
panda$core$String* $tmp2032 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2032));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2031));
*(&local9) = $tmp2031;
// line 666
panda$core$String* $tmp2033 = *(&local9);
panda$core$String* $tmp2034 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2034));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2033));
*(&local7) = $tmp2033;
// line 667
org$pandalanguage$pandac$Type* $tmp2035 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp2036 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2036));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2035));
*(&local8) = $tmp2035;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2035));
panda$core$String* $tmp2037 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2037));
// unreffing id
*(&local9) = ((panda$core$String*) NULL);
goto block17;
block19:;
panda$core$Int64 $tmp2038 = (panda$core$Int64) {44};
panda$core$Bit $tmp2039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2024, $tmp2038);
bool $tmp2040 = $tmp2039.value;
if ($tmp2040) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp2041 = (org$pandalanguage$pandac$Position*) ($tmp2022->$data + 0);
org$pandalanguage$pandac$Position $tmp2042 = *$tmp2041;
panda$core$String** $tmp2043 = (panda$core$String**) ($tmp2022->$data + 16);
panda$core$String* $tmp2044 = *$tmp2043;
*(&local10) = ((panda$core$String*) NULL);
panda$core$String* $tmp2045 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2045));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2044));
*(&local10) = $tmp2044;
org$pandalanguage$pandac$ASTNode** $tmp2046 = (org$pandalanguage$pandac$ASTNode**) ($tmp2022->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2047 = *$tmp2046;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2048 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2048));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2047));
*(&local11) = $tmp2047;
// line 670
panda$core$String* $tmp2049 = *(&local10);
panda$core$String* $tmp2050 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2050));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2049));
*(&local7) = $tmp2049;
// line 671
org$pandalanguage$pandac$ASTNode* $tmp2051 = *(&local11);
org$pandalanguage$pandac$Type* $tmp2052 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2051);
org$pandalanguage$pandac$Type* $tmp2053 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2053));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2052));
*(&local8) = $tmp2052;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2052));
org$pandalanguage$pandac$ASTNode* $tmp2054 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2054));
// unreffing type
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2055 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2055));
// unreffing id
*(&local10) = ((panda$core$String*) NULL);
goto block17;
block21:;
// line 674
panda$core$Bit $tmp2056 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2057 = $tmp2056.value;
if ($tmp2057) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp2058 = (panda$core$Int64) {674};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2059, $tmp2058);
abort(); // unreachable
block22:;
goto block17;
block17:;
// line 677
panda$collections$Array* $tmp2060 = *(&local5);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp2061 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
org$pandalanguage$pandac$ASTNode* $tmp2062 = *(&local6);
$fn2064 $tmp2063 = ($fn2064) $tmp2062->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2065 = $tmp2063($tmp2062);
panda$core$String* $tmp2066 = *(&local0);
panda$core$String* $tmp2067 = *(&local7);
org$pandalanguage$pandac$Type* $tmp2068 = *(&local8);
org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp2061, $tmp2065, $tmp2066, $tmp2067, $tmp2068);
panda$collections$Array$add$panda$collections$Array$T($tmp2060, ((panda$core$Object*) $tmp2061));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2061));
org$pandalanguage$pandac$Type* $tmp2069 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2069));
// unreffing bound
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp2070 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2070));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2071 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2071));
// unreffing p
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block16:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2011));
goto block13;
block13:;
// line 680
panda$collections$Array* $tmp2072 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2072);
*(&local12) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2073 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2073));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2072));
*(&local12) = $tmp2072;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2072));
// line 681
panda$core$Bit $tmp2074 = panda$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2075 = $tmp2074.value;
if ($tmp2075) goto block24; else goto block25;
block24:;
// line 682
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2076;
$tmp2076 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2076->value = param7;
panda$core$Int64 $tmp2077 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2078 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2077);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2079;
$tmp2079 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2079->value = $tmp2078;
ITable* $tmp2080 = ((panda$core$Equatable*) $tmp2076)->$class->itable;
while ($tmp2080->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2080 = $tmp2080->next;
}
$fn2082 $tmp2081 = $tmp2080->methods[0];
panda$core$Bit $tmp2083 = $tmp2081(((panda$core$Equatable*) $tmp2076), ((panda$core$Equatable*) $tmp2079));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2076)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2079)));
bool $tmp2084 = $tmp2083.value;
if ($tmp2084) goto block26; else goto block27;
block26:;
// line 683
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param4, &$s2085);
goto block27;
block27:;
// line 685
ITable* $tmp2086 = ((panda$collections$Iterable*) param10)->$class->itable;
while ($tmp2086->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2086 = $tmp2086->next;
}
$fn2088 $tmp2087 = $tmp2086->methods[0];
panda$collections$Iterator* $tmp2089 = $tmp2087(((panda$collections$Iterable*) param10));
goto block28;
block28:;
ITable* $tmp2090 = $tmp2089->$class->itable;
while ($tmp2090->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2090 = $tmp2090->next;
}
$fn2092 $tmp2091 = $tmp2090->methods[0];
panda$core$Bit $tmp2093 = $tmp2091($tmp2089);
bool $tmp2094 = $tmp2093.value;
if ($tmp2094) goto block30; else goto block29;
block29:;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2095 = $tmp2089->$class->itable;
while ($tmp2095->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2095 = $tmp2095->next;
}
$fn2097 $tmp2096 = $tmp2095->methods[1];
panda$core$Object* $tmp2098 = $tmp2096($tmp2089);
panda$core$Panda$unref$panda$core$Object$Q($tmp2098);
org$pandalanguage$pandac$ASTNode* $tmp2099 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2099));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2098)));
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) $tmp2098);
// line 686
panda$collections$Array* $tmp2100 = *(&local12);
org$pandalanguage$pandac$ASTNode* $tmp2101 = *(&local13);
org$pandalanguage$pandac$Type* $tmp2102 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2101);
panda$collections$Array$add$panda$collections$Array$T($tmp2100, ((panda$core$Object*) $tmp2102));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2102));
org$pandalanguage$pandac$ASTNode* $tmp2103 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2103));
// unreffing s
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block28;
block30:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2089));
goto block25;
block25:;
// line 689
org$pandalanguage$pandac$ClassDecl* $tmp2104 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
panda$core$String* $tmp2105 = *(&local1);
org$pandalanguage$pandac$Annotations* $tmp2106 = *(&local4);
panda$core$String* $tmp2107 = *(&local0);
panda$collections$Array* $tmp2108 = *(&local12);
panda$collections$Array* $tmp2109 = *(&local5);
panda$core$Weak** $tmp2110 = &param0->compiler;
panda$core$Weak* $tmp2111 = *$tmp2110;
panda$core$Object* $tmp2112 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2111);
panda$core$Panda$unref$panda$core$Object$Q($tmp2112);
org$pandalanguage$pandac$SymbolTable** $tmp2113 = &((org$pandalanguage$pandac$Compiler*) $tmp2112)->root;
org$pandalanguage$pandac$SymbolTable* $tmp2114 = *$tmp2113;
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2104, param1, param4, param2, $tmp2105, $tmp2106, param7, $tmp2107, ((panda$collections$ListView*) $tmp2108), $tmp2109, $tmp2114);
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2115 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2115));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2104));
*(&local14) = $tmp2104;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2104));
// line 691
panda$core$Weak** $tmp2116 = &param0->compiler;
panda$core$Weak* $tmp2117 = *$tmp2116;
panda$core$Object* $tmp2118 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2117);
panda$core$Panda$unref$panda$core$Object$Q($tmp2118);
panda$collections$Stack** $tmp2119 = &((org$pandalanguage$pandac$Compiler*) $tmp2118)->currentClass;
panda$collections$Stack* $tmp2120 = *$tmp2119;
org$pandalanguage$pandac$ClassDecl* $tmp2121 = *(&local14);
panda$collections$Stack$push$panda$collections$Stack$T($tmp2120, ((panda$core$Object*) $tmp2121));
// line 692
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2122;
$tmp2122 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2122->value = param7;
panda$core$Int64 $tmp2123 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2124 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2123);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2125;
$tmp2125 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2125->value = $tmp2124;
ITable* $tmp2126 = ((panda$core$Equatable*) $tmp2122)->$class->itable;
while ($tmp2126->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2126 = $tmp2126->next;
}
$fn2128 $tmp2127 = $tmp2126->methods[0];
panda$core$Bit $tmp2129 = $tmp2127(((panda$core$Equatable*) $tmp2122), ((panda$core$Equatable*) $tmp2125));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2122)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2125)));
bool $tmp2130 = $tmp2129.value;
if ($tmp2130) goto block31; else goto block32;
block31:;
// line 693
org$pandalanguage$pandac$FieldDecl* $tmp2131 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2132 = *(&local14);
org$pandalanguage$pandac$ClassDecl* $tmp2133 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2134 = &$tmp2133->position;
org$pandalanguage$pandac$Position $tmp2135 = *$tmp2134;
org$pandalanguage$pandac$Annotations* $tmp2136 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2137 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2136, $tmp2137);
panda$core$Int64 $tmp2138 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp2139 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp2138);
org$pandalanguage$pandac$Type* $tmp2140 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp2131, $tmp2132, $tmp2135, ((panda$core$String*) NULL), $tmp2136, $tmp2139, &$s2141, $tmp2140, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2142 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2142));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2131));
*(&local15) = $tmp2131;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2131));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2136));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2140));
// line 696
org$pandalanguage$pandac$ClassDecl* $tmp2143 = *(&local14);
panda$collections$Array** $tmp2144 = &$tmp2143->fields;
panda$collections$Array* $tmp2145 = *$tmp2144;
org$pandalanguage$pandac$FieldDecl* $tmp2146 = *(&local15);
panda$collections$Array$add$panda$collections$Array$T($tmp2145, ((panda$core$Object*) $tmp2146));
// line 697
org$pandalanguage$pandac$ClassDecl* $tmp2147 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2148 = &$tmp2147->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2149 = *$tmp2148;
org$pandalanguage$pandac$FieldDecl* $tmp2150 = *(&local15);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2149, ((org$pandalanguage$pandac$Symbol*) $tmp2150));
// line 698
org$pandalanguage$pandac$FieldDecl* $tmp2151 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2152 = *(&local14);
org$pandalanguage$pandac$ClassDecl* $tmp2153 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2154 = &$tmp2153->position;
org$pandalanguage$pandac$Position $tmp2155 = *$tmp2154;
org$pandalanguage$pandac$Annotations* $tmp2156 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2157 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2156, $tmp2157);
panda$core$Int64 $tmp2158 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp2159 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp2158);
org$pandalanguage$pandac$Type* $tmp2160 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp2151, $tmp2152, $tmp2155, ((panda$core$String*) NULL), $tmp2156, $tmp2159, &$s2161, $tmp2160, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2162 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2162));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2151));
*(&local16) = $tmp2151;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2151));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2156));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2160));
// line 701
org$pandalanguage$pandac$ClassDecl* $tmp2163 = *(&local14);
panda$collections$Array** $tmp2164 = &$tmp2163->fields;
panda$collections$Array* $tmp2165 = *$tmp2164;
org$pandalanguage$pandac$FieldDecl* $tmp2166 = *(&local16);
panda$collections$Array$add$panda$collections$Array$T($tmp2165, ((panda$core$Object*) $tmp2166));
// line 702
org$pandalanguage$pandac$ClassDecl* $tmp2167 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2168 = &$tmp2167->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2169 = *$tmp2168;
org$pandalanguage$pandac$FieldDecl* $tmp2170 = *(&local16);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2169, ((org$pandalanguage$pandac$Symbol*) $tmp2170));
org$pandalanguage$pandac$FieldDecl* $tmp2171 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2171));
// unreffing data
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2172 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2172));
// unreffing rawValue
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block32;
block32:;
// line 704
ITable* $tmp2173 = ((panda$collections$Iterable*) param11)->$class->itable;
while ($tmp2173->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2173 = $tmp2173->next;
}
$fn2175 $tmp2174 = $tmp2173->methods[0];
panda$collections$Iterator* $tmp2176 = $tmp2174(((panda$collections$Iterable*) param11));
goto block33;
block33:;
ITable* $tmp2177 = $tmp2176->$class->itable;
while ($tmp2177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2177 = $tmp2177->next;
}
$fn2179 $tmp2178 = $tmp2177->methods[0];
panda$core$Bit $tmp2180 = $tmp2178($tmp2176);
bool $tmp2181 = $tmp2180.value;
if ($tmp2181) goto block35; else goto block34;
block34:;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2182 = $tmp2176->$class->itable;
while ($tmp2182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2182 = $tmp2182->next;
}
$fn2184 $tmp2183 = $tmp2182->methods[1];
panda$core$Object* $tmp2185 = $tmp2183($tmp2176);
panda$core$Panda$unref$panda$core$Object$Q($tmp2185);
org$pandalanguage$pandac$ASTNode* $tmp2186 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2186));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2185)));
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) $tmp2185);
// line 705
org$pandalanguage$pandac$ASTNode* $tmp2187 = *(&local17);
panda$core$Int64* $tmp2188 = &$tmp2187->$rawValue;
panda$core$Int64 $tmp2189 = *$tmp2188;
panda$core$Int64 $tmp2190 = (panda$core$Int64) {26};
panda$core$Bit $tmp2191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2189, $tmp2190);
bool $tmp2192 = $tmp2191.value;
if ($tmp2192) goto block37; else goto block38;
block37:;
org$pandalanguage$pandac$Position* $tmp2193 = (org$pandalanguage$pandac$Position*) ($tmp2187->$data + 0);
org$pandalanguage$pandac$Position $tmp2194 = *$tmp2193;
*(&local18) = $tmp2194;
org$pandalanguage$pandac$ASTNode** $tmp2195 = (org$pandalanguage$pandac$ASTNode**) ($tmp2187->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2196 = *$tmp2195;
panda$collections$ImmutableArray** $tmp2197 = (panda$collections$ImmutableArray**) ($tmp2187->$data + 24);
panda$collections$ImmutableArray* $tmp2198 = *$tmp2197;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2199 = (org$pandalanguage$pandac$MethodDecl$Kind*) ($tmp2187->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2200 = *$tmp2199;
*(&local19) = $tmp2200;
panda$core$String** $tmp2201 = (panda$core$String**) ($tmp2187->$data + 40);
panda$core$String* $tmp2202 = *$tmp2201;
panda$collections$ImmutableArray** $tmp2203 = (panda$collections$ImmutableArray**) ($tmp2187->$data + 48);
panda$collections$ImmutableArray* $tmp2204 = *$tmp2203;
panda$collections$ImmutableArray** $tmp2205 = (panda$collections$ImmutableArray**) ($tmp2187->$data + 56);
panda$collections$ImmutableArray* $tmp2206 = *$tmp2205;
org$pandalanguage$pandac$ASTNode** $tmp2207 = (org$pandalanguage$pandac$ASTNode**) ($tmp2187->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2208 = *$tmp2207;
panda$collections$ImmutableArray** $tmp2209 = (panda$collections$ImmutableArray**) ($tmp2187->$data + 72);
panda$collections$ImmutableArray* $tmp2210 = *$tmp2209;
// line 707
org$pandalanguage$pandac$MethodDecl$Kind $tmp2211 = *(&local19);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2212;
$tmp2212 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2212->value = $tmp2211;
panda$core$Int64 $tmp2213 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2214 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2213);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2215;
$tmp2215 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2215->value = $tmp2214;
ITable* $tmp2216 = ((panda$core$Equatable*) $tmp2212)->$class->itable;
while ($tmp2216->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2216 = $tmp2216->next;
}
$fn2218 $tmp2217 = $tmp2216->methods[0];
panda$core$Bit $tmp2219 = $tmp2217(((panda$core$Equatable*) $tmp2212), ((panda$core$Equatable*) $tmp2215));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2212)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2215)));
bool $tmp2220 = $tmp2219.value;
if ($tmp2220) goto block39; else goto block40;
block39:;
// line 708
panda$core$Int64 $tmp2221 = param7.$rawValue;
panda$core$Int64 $tmp2222 = (panda$core$Int64) {0};
panda$core$Bit $tmp2223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2221, $tmp2222);
bool $tmp2224 = $tmp2223.value;
if ($tmp2224) goto block42; else goto block43;
block42:;
goto block41;
block43:;
panda$core$Int64 $tmp2225 = (panda$core$Int64) {1};
panda$core$Bit $tmp2226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2221, $tmp2225);
bool $tmp2227 = $tmp2226.value;
if ($tmp2227) goto block44; else goto block45;
block44:;
// line 713
org$pandalanguage$pandac$Position $tmp2228 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2228, &$s2229);
goto block41;
block45:;
panda$core$Int64 $tmp2230 = (panda$core$Int64) {2};
panda$core$Bit $tmp2231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2221, $tmp2230);
bool $tmp2232 = $tmp2231.value;
if ($tmp2232) goto block46; else goto block41;
block46:;
// line 716
org$pandalanguage$pandac$Position $tmp2233 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2233, &$s2234);
goto block41;
block41:;
goto block40;
block40:;
goto block36;
block38:;
goto block36;
block36:;
// line 725
org$pandalanguage$pandac$ClassDecl* $tmp2235 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp2236 = *(&local17);
org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(param0, $tmp2235, $tmp2236);
org$pandalanguage$pandac$ASTNode* $tmp2237 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2237));
// unreffing m
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block33;
block35:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2176));
// line 727
panda$core$Bit $tmp2238 = panda$core$Bit$init$builtin_bit(false);
*(&local20) = $tmp2238;
// line 728
panda$core$Bit $tmp2239 = panda$core$Bit$init$builtin_bit(false);
*(&local21) = $tmp2239;
// line 729
org$pandalanguage$pandac$ClassDecl* $tmp2240 = *(&local14);
panda$collections$Array** $tmp2241 = &$tmp2240->methods;
panda$collections$Array* $tmp2242 = *$tmp2241;
ITable* $tmp2243 = ((panda$collections$Iterable*) $tmp2242)->$class->itable;
while ($tmp2243->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2243 = $tmp2243->next;
}
$fn2245 $tmp2244 = $tmp2243->methods[0];
panda$collections$Iterator* $tmp2246 = $tmp2244(((panda$collections$Iterable*) $tmp2242));
goto block47;
block47:;
ITable* $tmp2247 = $tmp2246->$class->itable;
while ($tmp2247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2247 = $tmp2247->next;
}
$fn2249 $tmp2248 = $tmp2247->methods[0];
panda$core$Bit $tmp2250 = $tmp2248($tmp2246);
bool $tmp2251 = $tmp2250.value;
if ($tmp2251) goto block49; else goto block48;
block48:;
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp2252 = $tmp2246->$class->itable;
while ($tmp2252->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2252 = $tmp2252->next;
}
$fn2254 $tmp2253 = $tmp2252->methods[1];
panda$core$Object* $tmp2255 = $tmp2253($tmp2246);
panda$core$Panda$unref$panda$core$Object$Q($tmp2255);
org$pandalanguage$pandac$MethodDecl* $tmp2256 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2256));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2255)));
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) $tmp2255);
// line 730
org$pandalanguage$pandac$MethodDecl* $tmp2257 = *(&local22);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2258 = &$tmp2257->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp2259 = *$tmp2258;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2260;
$tmp2260 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2260->value = $tmp2259;
panda$core$Int64 $tmp2261 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2262 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2261);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2263;
$tmp2263 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2263->value = $tmp2262;
ITable* $tmp2264 = ((panda$core$Equatable*) $tmp2260)->$class->itable;
while ($tmp2264->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2264 = $tmp2264->next;
}
$fn2266 $tmp2265 = $tmp2264->methods[0];
panda$core$Bit $tmp2267 = $tmp2265(((panda$core$Equatable*) $tmp2260), ((panda$core$Equatable*) $tmp2263));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2260)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2263)));
bool $tmp2268 = $tmp2267.value;
if ($tmp2268) goto block50; else goto block51;
block50:;
// line 731
panda$core$Bit $tmp2269 = panda$core$Bit$init$builtin_bit(true);
*(&local20) = $tmp2269;
goto block51;
block51:;
// line 733
org$pandalanguage$pandac$MethodDecl* $tmp2270 = *(&local22);
panda$core$String** $tmp2271 = &((org$pandalanguage$pandac$Symbol*) $tmp2270)->name;
panda$core$String* $tmp2272 = *$tmp2271;
panda$core$Bit $tmp2273 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2272, &$s2274);
bool $tmp2275 = $tmp2273.value;
if ($tmp2275) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$MethodDecl* $tmp2276 = *(&local22);
panda$collections$Array** $tmp2277 = &$tmp2276->parameters;
panda$collections$Array* $tmp2278 = *$tmp2277;
ITable* $tmp2279 = ((panda$collections$CollectionView*) $tmp2278)->$class->itable;
while ($tmp2279->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2279 = $tmp2279->next;
}
$fn2281 $tmp2280 = $tmp2279->methods[0];
panda$core$Int64 $tmp2282 = $tmp2280(((panda$collections$CollectionView*) $tmp2278));
panda$core$Int64 $tmp2283 = (panda$core$Int64) {0};
panda$core$Bit $tmp2284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2282, $tmp2283);
*(&local23) = $tmp2284;
goto block54;
block53:;
*(&local23) = $tmp2273;
goto block54;
block54:;
panda$core$Bit $tmp2285 = *(&local23);
bool $tmp2286 = $tmp2285.value;
if ($tmp2286) goto block55; else goto block56;
block55:;
// line 734
panda$core$Bit $tmp2287 = panda$core$Bit$init$builtin_bit(true);
*(&local21) = $tmp2287;
// line 735
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2288;
$tmp2288 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2288->value = param7;
panda$core$Int64 $tmp2289 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2290 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2289);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2291;
$tmp2291 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2291->value = $tmp2290;
ITable* $tmp2292 = ((panda$core$Equatable*) $tmp2288)->$class->itable;
while ($tmp2292->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2292 = $tmp2292->next;
}
$fn2294 $tmp2293 = $tmp2292->methods[0];
panda$core$Bit $tmp2295 = $tmp2293(((panda$core$Equatable*) $tmp2288), ((panda$core$Equatable*) $tmp2291));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2288)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2291)));
bool $tmp2296 = $tmp2295.value;
if ($tmp2296) goto block57; else goto block58;
block57:;
// line 736
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param4, &$s2297);
goto block58;
block58:;
goto block56;
block56:;
org$pandalanguage$pandac$MethodDecl* $tmp2298 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2298));
// unreffing m
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block47;
block49:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2246));
// line 740
panda$core$Bit $tmp2299 = *(&local20);
panda$core$Bit $tmp2300 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2299);
bool $tmp2301 = $tmp2300.value;
if ($tmp2301) goto block59; else goto block60;
block59:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2302;
$tmp2302 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2302->value = param7;
panda$core$Int64 $tmp2303 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2304 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2303);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2305;
$tmp2305 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2305->value = $tmp2304;
ITable* $tmp2306 = ((panda$core$Equatable*) $tmp2302)->$class->itable;
while ($tmp2306->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2306 = $tmp2306->next;
}
$fn2308 $tmp2307 = $tmp2306->methods[0];
panda$core$Bit $tmp2309 = $tmp2307(((panda$core$Equatable*) $tmp2302), ((panda$core$Equatable*) $tmp2305));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2302)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2305)));
*(&local25) = $tmp2309;
goto block61;
block60:;
*(&local25) = $tmp2300;
goto block61;
block61:;
panda$core$Bit $tmp2310 = *(&local25);
bool $tmp2311 = $tmp2310.value;
if ($tmp2311) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$ClassDecl* $tmp2312 = *(&local14);
panda$core$String** $tmp2313 = &$tmp2312->name;
panda$core$String* $tmp2314 = *$tmp2313;
ITable* $tmp2316 = ((panda$core$Equatable*) $tmp2314)->$class->itable;
while ($tmp2316->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2316 = $tmp2316->next;
}
$fn2318 $tmp2317 = $tmp2316->methods[1];
panda$core$Bit $tmp2319 = $tmp2317(((panda$core$Equatable*) $tmp2314), ((panda$core$Equatable*) &$s2315));
*(&local24) = $tmp2319;
goto block64;
block63:;
*(&local24) = $tmp2310;
goto block64;
block64:;
panda$core$Bit $tmp2320 = *(&local24);
bool $tmp2321 = $tmp2320.value;
if ($tmp2321) goto block65; else goto block66;
block65:;
// line 741
org$pandalanguage$pandac$MethodDecl* $tmp2322 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2323 = *(&local14);
org$pandalanguage$pandac$Annotations* $tmp2324 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2325 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2324, $tmp2325);
panda$core$Int64 $tmp2326 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2327 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2326);
panda$collections$Array* $tmp2328 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2328);
panda$collections$Array* $tmp2329 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2329);
org$pandalanguage$pandac$Type* $tmp2330 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2331 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2331);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2322, $tmp2323, param4, ((panda$core$String*) NULL), $tmp2324, $tmp2327, &$s2332, $tmp2328, $tmp2329, $tmp2330, $tmp2331);
*(&local26) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2333 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2333));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2322));
*(&local26) = $tmp2322;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2322));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2324));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2328));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2329));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2330));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2331));
// line 745
org$pandalanguage$pandac$ClassDecl* $tmp2334 = *(&local14);
panda$collections$Array** $tmp2335 = &$tmp2334->methods;
panda$collections$Array* $tmp2336 = *$tmp2335;
org$pandalanguage$pandac$MethodDecl* $tmp2337 = *(&local26);
panda$collections$Array$add$panda$collections$Array$T($tmp2336, ((panda$core$Object*) $tmp2337));
// line 746
org$pandalanguage$pandac$ClassDecl* $tmp2338 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2339 = &$tmp2338->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2340 = *$tmp2339;
org$pandalanguage$pandac$MethodDecl* $tmp2341 = *(&local26);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2340, ((org$pandalanguage$pandac$Symbol*) $tmp2341));
org$pandalanguage$pandac$MethodDecl* $tmp2342 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2342));
// unreffing defaultInit
*(&local26) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block66;
block66:;
// line 748
panda$core$Bit $tmp2343 = *(&local21);
panda$core$Bit $tmp2344 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2343);
bool $tmp2345 = $tmp2344.value;
if ($tmp2345) goto block67; else goto block68;
block67:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2346;
$tmp2346 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2346->value = param7;
panda$core$Int64 $tmp2347 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2348 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2347);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2349;
$tmp2349 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2349->value = $tmp2348;
ITable* $tmp2350 = ((panda$core$Equatable*) $tmp2346)->$class->itable;
while ($tmp2350->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2350 = $tmp2350->next;
}
$fn2352 $tmp2351 = $tmp2350->methods[0];
panda$core$Bit $tmp2353 = $tmp2351(((panda$core$Equatable*) $tmp2346), ((panda$core$Equatable*) $tmp2349));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2346)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2349)));
bool $tmp2354 = $tmp2353.value;
if ($tmp2354) goto block70; else goto block71;
block70:;
*(&local29) = $tmp2353;
goto block72;
block71:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2355;
$tmp2355 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2355->value = param7;
panda$core$Int64 $tmp2356 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2357 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2356);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2358;
$tmp2358 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2358->value = $tmp2357;
ITable* $tmp2359 = ((panda$core$Equatable*) $tmp2355)->$class->itable;
while ($tmp2359->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2359 = $tmp2359->next;
}
$fn2361 $tmp2360 = $tmp2359->methods[0];
panda$core$Bit $tmp2362 = $tmp2360(((panda$core$Equatable*) $tmp2355), ((panda$core$Equatable*) $tmp2358));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2355)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2358)));
*(&local29) = $tmp2362;
goto block72;
block72:;
panda$core$Bit $tmp2363 = *(&local29);
*(&local28) = $tmp2363;
goto block69;
block68:;
*(&local28) = $tmp2344;
goto block69;
block69:;
panda$core$Bit $tmp2364 = *(&local28);
bool $tmp2365 = $tmp2364.value;
if ($tmp2365) goto block73; else goto block74;
block73:;
org$pandalanguage$pandac$ClassDecl* $tmp2366 = *(&local14);
panda$core$String** $tmp2367 = &$tmp2366->name;
panda$core$String* $tmp2368 = *$tmp2367;
ITable* $tmp2370 = ((panda$core$Equatable*) $tmp2368)->$class->itable;
while ($tmp2370->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2370 = $tmp2370->next;
}
$fn2372 $tmp2371 = $tmp2370->methods[1];
panda$core$Bit $tmp2373 = $tmp2371(((panda$core$Equatable*) $tmp2368), ((panda$core$Equatable*) &$s2369));
*(&local27) = $tmp2373;
goto block75;
block74:;
*(&local27) = $tmp2364;
goto block75;
block75:;
panda$core$Bit $tmp2374 = *(&local27);
bool $tmp2375 = $tmp2374.value;
if ($tmp2375) goto block76; else goto block77;
block76:;
// line 750
org$pandalanguage$pandac$MethodDecl* $tmp2376 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2377 = *(&local14);
org$pandalanguage$pandac$Annotations* $tmp2378 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2379 = (panda$core$Int64) {32};
panda$core$Int64 $tmp2380 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp2381 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2379, $tmp2380);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2378, $tmp2381);
panda$core$Int64 $tmp2382 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2383 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2382);
panda$collections$Array* $tmp2384 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2384);
panda$collections$Array* $tmp2385 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2385);
org$pandalanguage$pandac$Type* $tmp2386 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2387 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2387);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2376, $tmp2377, param4, ((panda$core$String*) NULL), $tmp2378, $tmp2383, &$s2388, $tmp2384, $tmp2385, $tmp2386, $tmp2387);
*(&local30) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2389 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2389));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2376));
*(&local30) = $tmp2376;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2376));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2378));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2384));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2385));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2386));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2387));
// line 754
org$pandalanguage$pandac$ClassDecl* $tmp2390 = *(&local14);
panda$collections$Array** $tmp2391 = &$tmp2390->methods;
panda$collections$Array* $tmp2392 = *$tmp2391;
org$pandalanguage$pandac$MethodDecl* $tmp2393 = *(&local30);
panda$collections$Array$add$panda$collections$Array$T($tmp2392, ((panda$core$Object*) $tmp2393));
// line 755
org$pandalanguage$pandac$ClassDecl* $tmp2394 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2395 = &$tmp2394->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2396 = *$tmp2395;
org$pandalanguage$pandac$MethodDecl* $tmp2397 = *(&local30);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2396, ((org$pandalanguage$pandac$Symbol*) $tmp2397));
org$pandalanguage$pandac$MethodDecl* $tmp2398 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2398));
// unreffing defaultCleanup
*(&local30) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block77;
block77:;
// line 757
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2399;
$tmp2399 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2399->value = param7;
panda$core$Int64 $tmp2400 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2401 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2400);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2402;
$tmp2402 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2402->value = $tmp2401;
ITable* $tmp2403 = ((panda$core$Equatable*) $tmp2399)->$class->itable;
while ($tmp2403->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2403 = $tmp2403->next;
}
$fn2405 $tmp2404 = $tmp2403->methods[0];
panda$core$Bit $tmp2406 = $tmp2404(((panda$core$Equatable*) $tmp2399), ((panda$core$Equatable*) $tmp2402));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2399)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2402)));
bool $tmp2407 = $tmp2406.value;
if ($tmp2407) goto block78; else goto block79;
block78:;
// line 758
panda$core$Bit $tmp2408 = panda$core$Bit$init$builtin_bit(false);
*(&local31) = $tmp2408;
// line 759
org$pandalanguage$pandac$ClassDecl* $tmp2409 = *(&local14);
panda$collections$Array** $tmp2410 = &$tmp2409->choiceCases;
panda$collections$Array* $tmp2411 = *$tmp2410;
ITable* $tmp2412 = ((panda$collections$CollectionView*) $tmp2411)->$class->itable;
while ($tmp2412->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2412 = $tmp2412->next;
}
$fn2414 $tmp2413 = $tmp2412->methods[0];
panda$core$Int64 $tmp2415 = $tmp2413(((panda$collections$CollectionView*) $tmp2411));
panda$core$Int64 $tmp2416 = (panda$core$Int64) {0};
int64_t $tmp2417 = $tmp2415.value;
int64_t $tmp2418 = $tmp2416.value;
bool $tmp2419 = $tmp2417 > $tmp2418;
panda$core$Bit $tmp2420 = (panda$core$Bit) {$tmp2419};
bool $tmp2421 = $tmp2420.value;
if ($tmp2421) goto block80; else goto block82;
block80:;
// line 760
org$pandalanguage$pandac$ClassDecl* $tmp2422 = *(&local14);
panda$collections$Array** $tmp2423 = &$tmp2422->choiceCases;
panda$collections$Array* $tmp2424 = *$tmp2423;
ITable* $tmp2425 = ((panda$collections$Iterable*) $tmp2424)->$class->itable;
while ($tmp2425->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2425 = $tmp2425->next;
}
$fn2427 $tmp2426 = $tmp2425->methods[0];
panda$collections$Iterator* $tmp2428 = $tmp2426(((panda$collections$Iterable*) $tmp2424));
goto block83;
block83:;
ITable* $tmp2429 = $tmp2428->$class->itable;
while ($tmp2429->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2429 = $tmp2429->next;
}
$fn2431 $tmp2430 = $tmp2429->methods[0];
panda$core$Bit $tmp2432 = $tmp2430($tmp2428);
bool $tmp2433 = $tmp2432.value;
if ($tmp2433) goto block85; else goto block84;
block84:;
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
ITable* $tmp2434 = $tmp2428->$class->itable;
while ($tmp2434->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2434 = $tmp2434->next;
}
$fn2436 $tmp2435 = $tmp2434->methods[1];
panda$core$Object* $tmp2437 = $tmp2435($tmp2428);
panda$core$Panda$unref$panda$core$Object$Q($tmp2437);
org$pandalanguage$pandac$ChoiceCase* $tmp2438 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2438));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ChoiceCase*) $tmp2437)));
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) $tmp2437);
// line 761
org$pandalanguage$pandac$ChoiceCase* $tmp2439 = *(&local32);
panda$collections$Array** $tmp2440 = &$tmp2439->fields;
panda$collections$Array* $tmp2441 = *$tmp2440;
ITable* $tmp2442 = ((panda$collections$CollectionView*) $tmp2441)->$class->itable;
while ($tmp2442->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2442 = $tmp2442->next;
}
$fn2444 $tmp2443 = $tmp2442->methods[0];
panda$core$Int64 $tmp2445 = $tmp2443(((panda$collections$CollectionView*) $tmp2441));
panda$core$Int64 $tmp2446 = (panda$core$Int64) {0};
int64_t $tmp2447 = $tmp2445.value;
int64_t $tmp2448 = $tmp2446.value;
bool $tmp2449 = $tmp2447 > $tmp2448;
panda$core$Bit $tmp2450 = (panda$core$Bit) {$tmp2449};
bool $tmp2451 = $tmp2450.value;
if ($tmp2451) goto block86; else goto block87;
block86:;
// line 762
panda$core$Bit $tmp2452 = panda$core$Bit$init$builtin_bit(true);
*(&local31) = $tmp2452;
// line 763
org$pandalanguage$pandac$ChoiceCase* $tmp2453 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2453));
// unreffing e
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
goto block85;
block87:;
org$pandalanguage$pandac$ChoiceCase* $tmp2454 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2454));
// unreffing e
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
goto block83;
block85:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2428));
goto block81;
block82:;
// line 1
// line 768
org$pandalanguage$pandac$ClassDecl* $tmp2455 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2456 = &$tmp2455->position;
org$pandalanguage$pandac$Position $tmp2457 = *$tmp2456;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2457, &$s2458);
// line 769
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp2459 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2459));
// unreffing result
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp2460 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2460));
// unreffing supertypes
*(&local12) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2461 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2461));
// unreffing parameters
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp2462 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2462));
// unreffing annotations
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp2463 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2463));
// unreffing doccomment
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2464 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2464));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ClassDecl*) NULL);
block81:;
// line 771
panda$core$Bit $tmp2465 = *(&local31);
panda$core$Bit $tmp2466 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2465);
bool $tmp2467 = $tmp2466.value;
if ($tmp2467) goto block88; else goto block89;
block88:;
// line 772
org$pandalanguage$pandac$ClassDecl* $tmp2468 = *(&local14);
org$pandalanguage$pandac$Type* $tmp2469 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type** $tmp2470 = &$tmp2468->rawSuper;
org$pandalanguage$pandac$Type* $tmp2471 = *$tmp2470;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2471));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2469));
org$pandalanguage$pandac$Type** $tmp2472 = &$tmp2468->rawSuper;
*$tmp2472 = $tmp2469;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2469));
goto block89;
block89:;
goto block79;
block79:;
// line 775
panda$core$Weak** $tmp2473 = &param0->compiler;
panda$core$Weak* $tmp2474 = *$tmp2473;
panda$core$Object* $tmp2475 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2474);
panda$core$Panda$unref$panda$core$Object$Q($tmp2475);
panda$collections$Stack** $tmp2476 = &((org$pandalanguage$pandac$Compiler*) $tmp2475)->currentClass;
panda$collections$Stack* $tmp2477 = *$tmp2476;
panda$core$Object* $tmp2478 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2477);
panda$core$Panda$unref$panda$core$Object$Q($tmp2478);
// line 776
org$pandalanguage$pandac$ClassDecl* $tmp2479 = *(&local14);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2479));
org$pandalanguage$pandac$ClassDecl* $tmp2480 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2480));
// unreffing result
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp2481 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
// unreffing supertypes
*(&local12) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2482 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2482));
// unreffing parameters
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp2483 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2483));
// unreffing annotations
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp2484 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2484));
// unreffing doccomment
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2485 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2485));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
return $tmp2479;

}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ClassDecl* param1, panda$collections$Array* param2) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
// line 780
panda$collections$Array$add$panda$collections$Array$T(param2, ((panda$core$Object*) param1));
// line 781
panda$collections$Array** $tmp2486 = &param1->classes;
panda$collections$Array* $tmp2487 = *$tmp2486;
ITable* $tmp2488 = ((panda$collections$Iterable*) $tmp2487)->$class->itable;
while ($tmp2488->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2488 = $tmp2488->next;
}
$fn2490 $tmp2489 = $tmp2488->methods[0];
panda$collections$Iterator* $tmp2491 = $tmp2489(((panda$collections$Iterable*) $tmp2487));
goto block1;
block1:;
ITable* $tmp2492 = $tmp2491->$class->itable;
while ($tmp2492->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2492 = $tmp2492->next;
}
$fn2494 $tmp2493 = $tmp2492->methods[0];
panda$core$Bit $tmp2495 = $tmp2493($tmp2491);
bool $tmp2496 = $tmp2495.value;
if ($tmp2496) goto block3; else goto block2;
block2:;
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
ITable* $tmp2497 = $tmp2491->$class->itable;
while ($tmp2497->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2497 = $tmp2497->next;
}
$fn2499 $tmp2498 = $tmp2497->methods[1];
panda$core$Object* $tmp2500 = $tmp2498($tmp2491);
panda$core$Panda$unref$panda$core$Object$Q($tmp2500);
org$pandalanguage$pandac$ClassDecl* $tmp2501 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2501));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp2500)));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) $tmp2500);
// line 782
org$pandalanguage$pandac$ClassDecl* $tmp2502 = *(&local0);
org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, $tmp2502, param2);
org$pandalanguage$pandac$ClassDecl* $tmp2503 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2503));
// unreffing inner
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2491));
return;

}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* param0, panda$io$File* param1, panda$collections$MapView* param2, panda$core$String* param3, panda$collections$List* param4) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$MethodDecl* local1 = NULL;
org$pandalanguage$pandac$MethodDecl* local2 = NULL;
// line 788
org$pandalanguage$pandac$ClassDecl** $tmp2504 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2505 = *$tmp2504;
panda$core$Bit $tmp2506 = panda$core$Bit$init$builtin_bit($tmp2505 == NULL);
bool $tmp2507 = $tmp2506.value;
if ($tmp2507) goto block1; else goto block2;
block1:;
// line 789
*(&local0) = ((panda$core$String*) NULL);
// line 790
ITable* $tmp2509 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp2509->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2509 = $tmp2509->next;
}
$fn2511 $tmp2510 = $tmp2509->methods[1];
panda$core$Bit $tmp2512 = $tmp2510(((panda$core$Equatable*) param3), ((panda$core$Equatable*) &$s2508));
bool $tmp2513 = $tmp2512.value;
if ($tmp2513) goto block3; else goto block5;
block3:;
// line 791
panda$core$String* $tmp2514 = panda$core$String$convert$R$panda$core$String(param3);
panda$core$String* $tmp2515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2514, &$s2516);
panda$core$String* $tmp2517 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2517));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2515));
*(&local0) = $tmp2515;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2514));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2515));
goto block4;
block5:;
// line 1
// line 794
panda$core$String* $tmp2518 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2518));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2519));
*(&local0) = &$s2520;
goto block4;
block4:;
// line 796
org$pandalanguage$pandac$ClassDecl* $tmp2521 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
org$pandalanguage$pandac$Position $tmp2522 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2523 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
org$pandalanguage$pandac$Annotations$init($tmp2523);
panda$core$Int64 $tmp2524 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2525 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2524);
panda$core$String* $tmp2526 = *(&local0);
panda$collections$Array* $tmp2527 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2527);
panda$collections$Array* $tmp2528 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2528);
panda$core$Weak** $tmp2529 = &param0->compiler;
panda$core$Weak* $tmp2530 = *$tmp2529;
panda$core$Object* $tmp2531 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2530);
panda$core$Panda$unref$panda$core$Object$Q($tmp2531);
org$pandalanguage$pandac$SymbolTable** $tmp2532 = &((org$pandalanguage$pandac$Compiler*) $tmp2531)->root;
org$pandalanguage$pandac$SymbolTable* $tmp2533 = *$tmp2532;
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2521, param1, $tmp2522, param2, ((panda$core$String*) NULL), $tmp2523, $tmp2525, $tmp2526, ((panda$collections$ListView*) $tmp2527), $tmp2528, $tmp2533);
org$pandalanguage$pandac$ClassDecl** $tmp2534 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2535 = *$tmp2534;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2535));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2521));
org$pandalanguage$pandac$ClassDecl** $tmp2536 = &param0->bareCodeClass;
*$tmp2536 = $tmp2521;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2521));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2523));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2527));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
// line 799
org$pandalanguage$pandac$ClassDecl** $tmp2537 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2538 = *$tmp2537;
ITable* $tmp2539 = ((panda$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp2539->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
    $tmp2539 = $tmp2539->next;
}
$fn2541 $tmp2540 = $tmp2539->methods[0];
$tmp2540(((panda$collections$CollectionWriter*) param4), ((panda$core$Object*) $tmp2538));
// line 800
org$pandalanguage$pandac$MethodDecl* $tmp2542 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2543 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2544 = *$tmp2543;
org$pandalanguage$pandac$Position $tmp2545 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2546 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2547 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2546, $tmp2547);
panda$core$Int64 $tmp2548 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2549 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2548);
panda$collections$Array* $tmp2550 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2550);
panda$collections$Array* $tmp2551 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2551);
org$pandalanguage$pandac$Type* $tmp2552 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2553 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2553);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2542, $tmp2544, $tmp2545, ((panda$core$String*) NULL), $tmp2546, $tmp2549, &$s2554, $tmp2550, $tmp2551, $tmp2552, $tmp2553);
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2555 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2555));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2542));
*(&local1) = $tmp2542;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2542));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2550));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2551));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2552));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2553));
// line 804
org$pandalanguage$pandac$ClassDecl** $tmp2556 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2557 = *$tmp2556;
panda$collections$Array** $tmp2558 = &$tmp2557->methods;
panda$collections$Array* $tmp2559 = *$tmp2558;
org$pandalanguage$pandac$MethodDecl* $tmp2560 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp2559, ((panda$core$Object*) $tmp2560));
// line 805
org$pandalanguage$pandac$ClassDecl** $tmp2561 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2562 = *$tmp2561;
org$pandalanguage$pandac$SymbolTable** $tmp2563 = &$tmp2562->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2564 = *$tmp2563;
org$pandalanguage$pandac$MethodDecl* $tmp2565 = *(&local1);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2564, ((org$pandalanguage$pandac$Symbol*) $tmp2565));
// line 806
org$pandalanguage$pandac$MethodDecl* $tmp2566 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2567 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2568 = *$tmp2567;
org$pandalanguage$pandac$Position $tmp2569 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2570 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2571 = (panda$core$Int64) {32};
panda$core$Int64 $tmp2572 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp2573 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2571, $tmp2572);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2570, $tmp2573);
panda$core$Int64 $tmp2574 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2575 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2574);
panda$collections$Array* $tmp2576 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2576);
panda$collections$Array* $tmp2577 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2577);
org$pandalanguage$pandac$Type* $tmp2578 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$collections$ImmutableArray* $tmp2579 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2579);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2566, $tmp2568, $tmp2569, ((panda$core$String*) NULL), $tmp2570, $tmp2575, &$s2580, $tmp2576, $tmp2577, $tmp2578, $tmp2579);
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2581 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2566));
*(&local2) = $tmp2566;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2566));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2570));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2576));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2577));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2579));
// line 810
org$pandalanguage$pandac$ClassDecl** $tmp2582 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2583 = *$tmp2582;
panda$collections$Array** $tmp2584 = &$tmp2583->methods;
panda$collections$Array* $tmp2585 = *$tmp2584;
org$pandalanguage$pandac$MethodDecl* $tmp2586 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2585, ((panda$core$Object*) $tmp2586));
// line 811
org$pandalanguage$pandac$ClassDecl** $tmp2587 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2588 = *$tmp2587;
org$pandalanguage$pandac$SymbolTable** $tmp2589 = &$tmp2588->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2590 = *$tmp2589;
org$pandalanguage$pandac$MethodDecl* $tmp2591 = *(&local2);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2590, ((org$pandalanguage$pandac$Symbol*) $tmp2591));
org$pandalanguage$pandac$MethodDecl* $tmp2592 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2592));
// unreffing defaultCleanup
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2593 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2593));
// unreffing defaultInit
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$String* $tmp2594 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2594));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2) {

panda$io$File** $tmp2595 = &param0->source;
panda$io$File* $tmp2596 = *$tmp2595;
panda$core$Bit $tmp2597 = panda$core$Bit$init$builtin_bit($tmp2596 != NULL);
bool $tmp2598 = $tmp2597.value;
if ($tmp2598) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2599 = (panda$core$Int64) {816};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2600, $tmp2599, &$s2601);
abort(); // unreachable
block1:;
// line 817
panda$core$Weak** $tmp2602 = &param0->compiler;
panda$core$Weak* $tmp2603 = *$tmp2602;
panda$core$Object* $tmp2604 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2603);
panda$core$Panda$unref$panda$core$Object$Q($tmp2604);
panda$io$File** $tmp2605 = &param0->source;
panda$io$File* $tmp2606 = *$tmp2605;
org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2604), $tmp2606, param1, param2);
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
// line 821
panda$io$File** $tmp2607 = &param0->source;
panda$io$File* $tmp2608 = *$tmp2607;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2608));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp2609 = &param0->source;
*$tmp2609 = param1;
// line 822
panda$core$Int64* $tmp2610 = &param2->$rawValue;
panda$core$Int64 $tmp2611 = *$tmp2610;
panda$core$Int64 $tmp2612 = (panda$core$Int64) {17};
panda$core$Bit $tmp2613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2611, $tmp2612);
bool $tmp2614 = $tmp2613.value;
if ($tmp2614) goto block2; else goto block3;
block2:;
panda$collections$ImmutableArray** $tmp2615 = (panda$collections$ImmutableArray**) (param2->$data + 0);
panda$collections$ImmutableArray* $tmp2616 = *$tmp2615;
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2617 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2617));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2616));
*(&local0) = $tmp2616;
// line 824
panda$collections$Array* $tmp2618 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2618);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2619 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2619));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2618));
*(&local1) = $tmp2618;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2618));
// line 825
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2620 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2620));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2621));
*(&local2) = &$s2622;
// line 826
panda$collections$HashMap* $tmp2623 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp2623);
*(&local3) = ((panda$collections$HashMap*) NULL);
panda$collections$HashMap* $tmp2624 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2624));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2623));
*(&local3) = $tmp2623;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2623));
// line 827
panda$collections$ImmutableArray* $tmp2625 = *(&local0);
ITable* $tmp2626 = ((panda$collections$Iterable*) $tmp2625)->$class->itable;
while ($tmp2626->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2626 = $tmp2626->next;
}
$fn2628 $tmp2627 = $tmp2626->methods[0];
panda$collections$Iterator* $tmp2629 = $tmp2627(((panda$collections$Iterable*) $tmp2625));
goto block4;
block4:;
ITable* $tmp2630 = $tmp2629->$class->itable;
while ($tmp2630->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2630 = $tmp2630->next;
}
$fn2632 $tmp2631 = $tmp2630->methods[0];
panda$core$Bit $tmp2633 = $tmp2631($tmp2629);
bool $tmp2634 = $tmp2633.value;
if ($tmp2634) goto block6; else goto block5;
block5:;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2635 = $tmp2629->$class->itable;
while ($tmp2635->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2635 = $tmp2635->next;
}
$fn2637 $tmp2636 = $tmp2635->methods[1];
panda$core$Object* $tmp2638 = $tmp2636($tmp2629);
panda$core$Panda$unref$panda$core$Object$Q($tmp2638);
org$pandalanguage$pandac$ASTNode* $tmp2639 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2639));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2638)));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) $tmp2638);
// line 828
org$pandalanguage$pandac$ASTNode* $tmp2640 = *(&local4);
panda$core$Int64* $tmp2641 = &$tmp2640->$rawValue;
panda$core$Int64 $tmp2642 = *$tmp2641;
panda$core$Int64 $tmp2643 = (panda$core$Int64) {30};
panda$core$Bit $tmp2644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2642, $tmp2643);
bool $tmp2645 = $tmp2644.value;
if ($tmp2645) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp2646 = (org$pandalanguage$pandac$Position*) ($tmp2640->$data + 0);
org$pandalanguage$pandac$Position $tmp2647 = *$tmp2646;
panda$core$String** $tmp2648 = (panda$core$String**) ($tmp2640->$data + 16);
panda$core$String* $tmp2649 = *$tmp2648;
*(&local5) = ((panda$core$String*) NULL);
panda$core$String* $tmp2650 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2650));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2649));
*(&local5) = $tmp2649;
// line 830
panda$core$String* $tmp2651 = *(&local5);
panda$core$String* $tmp2652 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2652));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2651));
*(&local2) = $tmp2651;
panda$core$String* $tmp2653 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2653));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
goto block7;
block9:;
panda$core$Int64 $tmp2654 = (panda$core$Int64) {46};
panda$core$Bit $tmp2655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2642, $tmp2654);
bool $tmp2656 = $tmp2655.value;
if ($tmp2656) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp2657 = (org$pandalanguage$pandac$Position*) ($tmp2640->$data + 0);
org$pandalanguage$pandac$Position $tmp2658 = *$tmp2657;
panda$core$String** $tmp2659 = (panda$core$String**) ($tmp2640->$data + 16);
panda$core$String* $tmp2660 = *$tmp2659;
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp2661 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2661));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2660));
*(&local6) = $tmp2660;
// line 833
panda$core$String* $tmp2662 = *(&local6);
panda$core$String$Index$nullable $tmp2663 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q($tmp2662, &$s2664);
*(&local7) = $tmp2663;
// line 834
*(&local8) = ((panda$core$String*) NULL);
// line 835
panda$core$String$Index$nullable $tmp2665 = *(&local7);
panda$core$Bit $tmp2666 = panda$core$Bit$init$builtin_bit($tmp2665.nonnull);
bool $tmp2667 = $tmp2666.value;
if ($tmp2667) goto block12; else goto block14;
block12:;
// line 836
panda$core$String* $tmp2668 = *(&local6);
panda$core$String* $tmp2669 = *(&local6);
panda$core$String$Index$nullable $tmp2670 = *(&local7);
panda$core$String$Index $tmp2671 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp2669, ((panda$core$String$Index) $tmp2670.value));
panda$core$Bit $tmp2672 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2673 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2671, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2672);
panda$core$String* $tmp2674 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp2668, $tmp2673);
panda$core$String* $tmp2675 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2675));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2674));
*(&local8) = $tmp2674;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2674));
goto block13;
block14:;
// line 1
// line 839
panda$core$String* $tmp2676 = *(&local6);
panda$core$String* $tmp2677 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2677));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2676));
*(&local8) = $tmp2676;
goto block13;
block13:;
// line 841
panda$collections$HashMap* $tmp2678 = *(&local3);
panda$core$String* $tmp2679 = *(&local6);
panda$core$String* $tmp2680 = *(&local8);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp2678, ((panda$collections$Key*) $tmp2680), ((panda$core$Object*) $tmp2679));
panda$core$String* $tmp2681 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2681));
// unreffing alias
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp2682 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2682));
// unreffing fullName
*(&local6) = ((panda$core$String*) NULL);
goto block7;
block11:;
panda$core$Int64 $tmp2683 = (panda$core$Int64) {11};
panda$core$Bit $tmp2684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2642, $tmp2683);
bool $tmp2685 = $tmp2684.value;
if ($tmp2685) goto block15; else goto block16;
block15:;
org$pandalanguage$pandac$Position* $tmp2686 = (org$pandalanguage$pandac$Position*) ($tmp2640->$data + 0);
org$pandalanguage$pandac$Position $tmp2687 = *$tmp2686;
*(&local9) = $tmp2687;
org$pandalanguage$pandac$ASTNode** $tmp2688 = (org$pandalanguage$pandac$ASTNode**) ($tmp2640->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2689 = *$tmp2688;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2690 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2690));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2689));
*(&local10) = $tmp2689;
panda$collections$ImmutableArray** $tmp2691 = (panda$collections$ImmutableArray**) ($tmp2640->$data + 24);
panda$collections$ImmutableArray* $tmp2692 = *$tmp2691;
*(&local11) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2693 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2693));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2692));
*(&local11) = $tmp2692;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2694 = (org$pandalanguage$pandac$ClassDecl$Kind*) ($tmp2640->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2695 = *$tmp2694;
*(&local12) = $tmp2695;
panda$core$String** $tmp2696 = (panda$core$String**) ($tmp2640->$data + 40);
panda$core$String* $tmp2697 = *$tmp2696;
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp2698 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2698));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2697));
*(&local13) = $tmp2697;
panda$collections$ImmutableArray** $tmp2699 = (panda$collections$ImmutableArray**) ($tmp2640->$data + 48);
panda$collections$ImmutableArray* $tmp2700 = *$tmp2699;
*(&local14) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2701 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2701));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2700));
*(&local14) = $tmp2700;
panda$collections$ImmutableArray** $tmp2702 = (panda$collections$ImmutableArray**) ($tmp2640->$data + 56);
panda$collections$ImmutableArray* $tmp2703 = *$tmp2702;
*(&local15) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2704 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2704));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2703));
*(&local15) = $tmp2703;
panda$collections$ImmutableArray** $tmp2705 = (panda$collections$ImmutableArray**) ($tmp2640->$data + 64);
panda$collections$ImmutableArray* $tmp2706 = *$tmp2705;
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2707 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2707));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2706));
*(&local16) = $tmp2706;
// line 845
panda$collections$HashMap* $tmp2708 = *(&local3);
panda$core$String* $tmp2709 = *(&local2);
org$pandalanguage$pandac$Position $tmp2710 = *(&local9);
org$pandalanguage$pandac$ASTNode* $tmp2711 = *(&local10);
panda$collections$ImmutableArray* $tmp2712 = *(&local11);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2713 = *(&local12);
panda$core$String* $tmp2714 = *(&local13);
panda$collections$ImmutableArray* $tmp2715 = *(&local14);
panda$collections$ImmutableArray* $tmp2716 = *(&local15);
panda$collections$ImmutableArray* $tmp2717 = *(&local16);
org$pandalanguage$pandac$ClassDecl* $tmp2718 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(param0, param1, ((panda$collections$MapView*) $tmp2708), $tmp2709, $tmp2710, $tmp2711, $tmp2712, $tmp2713, $tmp2714, $tmp2715, $tmp2716, $tmp2717);
*(&local17) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp2719 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2719));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2718));
*(&local17) = $tmp2718;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2718));
// line 847
org$pandalanguage$pandac$ClassDecl* $tmp2720 = *(&local17);
panda$core$Bit $tmp2721 = panda$core$Bit$init$builtin_bit($tmp2720 != NULL);
bool $tmp2722 = $tmp2721.value;
if ($tmp2722) goto block17; else goto block18;
block17:;
// line 848
org$pandalanguage$pandac$ClassDecl* $tmp2723 = *(&local17);
panda$collections$Array* $tmp2724 = *(&local1);
org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, $tmp2723, $tmp2724);
goto block18;
block18:;
org$pandalanguage$pandac$ClassDecl* $tmp2725 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2725));
// unreffing cl
*(&local17) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$ImmutableArray* $tmp2726 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2726));
// unreffing members
*(&local16) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2727 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2727));
// unreffing supertypes
*(&local15) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2728 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2728));
// unreffing generics
*(&local14) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2729 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2729));
// unreffing name
*(&local13) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2730 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2730));
// unreffing annotations
*(&local11) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2731 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2731));
// unreffing dc
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block16:;
panda$core$Int64 $tmp2732 = (panda$core$Int64) {26};
panda$core$Bit $tmp2733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2642, $tmp2732);
bool $tmp2734 = $tmp2733.value;
if ($tmp2734) goto block19; else goto block20;
block19:;
org$pandalanguage$pandac$Position* $tmp2735 = (org$pandalanguage$pandac$Position*) ($tmp2640->$data + 0);
org$pandalanguage$pandac$Position $tmp2736 = *$tmp2735;
*(&local18) = $tmp2736;
org$pandalanguage$pandac$ASTNode** $tmp2737 = (org$pandalanguage$pandac$ASTNode**) ($tmp2640->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2738 = *$tmp2737;
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2739 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2739));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2738));
*(&local19) = $tmp2738;
panda$collections$ImmutableArray** $tmp2740 = (panda$collections$ImmutableArray**) ($tmp2640->$data + 24);
panda$collections$ImmutableArray* $tmp2741 = *$tmp2740;
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2742 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2742));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2741));
*(&local20) = $tmp2741;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2743 = (org$pandalanguage$pandac$MethodDecl$Kind*) ($tmp2640->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2744 = *$tmp2743;
*(&local21) = $tmp2744;
panda$core$String** $tmp2745 = (panda$core$String**) ($tmp2640->$data + 40);
panda$core$String* $tmp2746 = *$tmp2745;
*(&local22) = ((panda$core$String*) NULL);
panda$core$String* $tmp2747 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2747));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2746));
*(&local22) = $tmp2746;
panda$collections$ImmutableArray** $tmp2748 = (panda$collections$ImmutableArray**) ($tmp2640->$data + 48);
panda$collections$ImmutableArray* $tmp2749 = *$tmp2748;
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2750 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2750));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2749));
*(&local23) = $tmp2749;
panda$collections$ImmutableArray** $tmp2751 = (panda$collections$ImmutableArray**) ($tmp2640->$data + 56);
panda$collections$ImmutableArray* $tmp2752 = *$tmp2751;
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2753 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2753));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2752));
*(&local24) = $tmp2752;
org$pandalanguage$pandac$ASTNode** $tmp2754 = (org$pandalanguage$pandac$ASTNode**) ($tmp2640->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2755 = *$tmp2754;
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2756 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2756));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2755));
*(&local25) = $tmp2755;
panda$collections$ImmutableArray** $tmp2757 = (panda$collections$ImmutableArray**) ($tmp2640->$data + 72);
panda$collections$ImmutableArray* $tmp2758 = *$tmp2757;
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2759 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2759));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2758));
*(&local26) = $tmp2758;
// line 853
org$pandalanguage$pandac$MethodDecl$Kind $tmp2760 = *(&local21);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2761;
$tmp2761 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2761->value = $tmp2760;
panda$core$Int64 $tmp2762 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2763 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2762);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2764;
$tmp2764 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2764->value = $tmp2763;
ITable* $tmp2765 = ((panda$core$Equatable*) $tmp2761)->$class->itable;
while ($tmp2765->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2765 = $tmp2765->next;
}
$fn2767 $tmp2766 = $tmp2765->methods[0];
panda$core$Bit $tmp2768 = $tmp2766(((panda$core$Equatable*) $tmp2761), ((panda$core$Equatable*) $tmp2764));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2761)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2764)));
bool $tmp2769 = $tmp2768.value;
if ($tmp2769) goto block21; else goto block22;
block21:;
// line 854
org$pandalanguage$pandac$Position $tmp2770 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2770, &$s2771);
// line 855
panda$collections$ImmutableArray* $tmp2772 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2772));
// unreffing statements
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2773 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2773));
// unreffing rawReturnType
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2774 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2774));
// unreffing parameters
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2775 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2775));
// unreffing generics
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2776 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2776));
// unreffing rawName
*(&local22) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2777 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2777));
// unreffing annotations
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2778 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2778));
// unreffing dc
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2779 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2779));
// unreffing e
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block22:;
// line 857
panda$collections$HashMap* $tmp2780 = *(&local3);
panda$core$String* $tmp2781 = *(&local2);
panda$collections$Array* $tmp2782 = *(&local1);
org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, param1, ((panda$collections$MapView*) $tmp2780), $tmp2781, ((panda$collections$List*) $tmp2782));
// line 858
*(&local27) = ((panda$core$String*) NULL);
// line 859
panda$core$String* $tmp2783 = *(&local22);
panda$core$Bit $tmp2784 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2783, &$s2785);
bool $tmp2786 = $tmp2784.value;
if ($tmp2786) goto block23; else goto block25;
block23:;
// line 860
panda$core$String* $tmp2787 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2787));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2788));
*(&local27) = &$s2789;
// line 861
panda$collections$Array* $tmp2790 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2790);
*(&local28) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2791 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2791));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2790));
*(&local28) = $tmp2790;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2790));
// line 862
panda$collections$Array* $tmp2792 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2792);
*(&local29) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2793 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2793));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2792));
*(&local29) = $tmp2792;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2792));
// line 863
panda$collections$Array* $tmp2794 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2794);
*(&local30) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2795 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2795));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2794));
*(&local30) = $tmp2794;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2794));
// line 864
panda$collections$ImmutableArray* $tmp2796 = *(&local24);
ITable* $tmp2797 = ((panda$collections$Iterable*) $tmp2796)->$class->itable;
while ($tmp2797->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2797 = $tmp2797->next;
}
$fn2799 $tmp2798 = $tmp2797->methods[0];
panda$collections$Iterator* $tmp2800 = $tmp2798(((panda$collections$Iterable*) $tmp2796));
goto block26;
block26:;
ITable* $tmp2801 = $tmp2800->$class->itable;
while ($tmp2801->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2801 = $tmp2801->next;
}
$fn2803 $tmp2802 = $tmp2801->methods[0];
panda$core$Bit $tmp2804 = $tmp2802($tmp2800);
bool $tmp2805 = $tmp2804.value;
if ($tmp2805) goto block28; else goto block27;
block27:;
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2806 = $tmp2800->$class->itable;
while ($tmp2806->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2806 = $tmp2806->next;
}
$fn2808 $tmp2807 = $tmp2806->methods[1];
panda$core$Object* $tmp2809 = $tmp2807($tmp2800);
panda$core$Panda$unref$panda$core$Object$Q($tmp2809);
org$pandalanguage$pandac$ASTNode* $tmp2810 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2810));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2809)));
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) $tmp2809);
// line 865
org$pandalanguage$pandac$ASTNode* $tmp2811 = *(&local31);
panda$core$Int64* $tmp2812 = &$tmp2811->$rawValue;
panda$core$Int64 $tmp2813 = *$tmp2812;
panda$core$Int64 $tmp2814 = (panda$core$Int64) {31};
panda$core$Bit $tmp2815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2813, $tmp2814);
bool $tmp2816 = $tmp2815.value;
if ($tmp2816) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp2817 = (org$pandalanguage$pandac$Position*) ($tmp2811->$data + 0);
org$pandalanguage$pandac$Position $tmp2818 = *$tmp2817;
*(&local32) = $tmp2818;
panda$core$String** $tmp2819 = (panda$core$String**) ($tmp2811->$data + 16);
panda$core$String* $tmp2820 = *$tmp2819;
*(&local33) = ((panda$core$String*) NULL);
panda$core$String* $tmp2821 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2821));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2820));
*(&local33) = $tmp2820;
org$pandalanguage$pandac$ASTNode** $tmp2822 = (org$pandalanguage$pandac$ASTNode**) ($tmp2811->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2823 = *$tmp2822;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2824 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2824));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2823));
*(&local34) = $tmp2823;
// line 867
panda$collections$Array* $tmp2825 = *(&local28);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2826 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
panda$core$String* $tmp2827 = *(&local33);
org$pandalanguage$pandac$ASTNode* $tmp2828 = *(&local34);
org$pandalanguage$pandac$Type* $tmp2829 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2828);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2826, $tmp2827, $tmp2829);
panda$collections$Array$add$panda$collections$Array$T($tmp2825, ((panda$core$Object*) $tmp2826));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2826));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2829));
// line 869
panda$collections$Array* $tmp2830 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp2831 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2832 = (panda$core$Int64) {20};
org$pandalanguage$pandac$Position $tmp2833 = *(&local32);
panda$core$String* $tmp2834 = *(&local33);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2831, $tmp2832, $tmp2833, $tmp2834);
panda$collections$Array$add$panda$collections$Array$T($tmp2830, ((panda$core$Object*) $tmp2831));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2831));
org$pandalanguage$pandac$ASTNode* $tmp2835 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2835));
// unreffing type
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2836 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2836));
// unreffing name
*(&local33) = ((panda$core$String*) NULL);
goto block29;
block31:;
// line 872
panda$core$Bit $tmp2837 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2838 = $tmp2837.value;
if ($tmp2838) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp2839 = (panda$core$Int64) {872};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2840, $tmp2839);
abort(); // unreachable
block32:;
goto block29;
block29:;
org$pandalanguage$pandac$ASTNode* $tmp2841 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2841));
// unreffing p
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block26;
block28:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2800));
// line 876
org$pandalanguage$pandac$ASTNode* $tmp2842 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2843 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Position $tmp2844 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2845 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2846 = (panda$core$Int64) {20};
org$pandalanguage$pandac$Position $tmp2847 = *(&local18);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2845, $tmp2846, $tmp2847, &$s2848);
panda$collections$ImmutableArray* $tmp2849 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
panda$collections$ImmutableArray$init($tmp2849);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2842, $tmp2843, $tmp2844, $tmp2845, $tmp2849);
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2850 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2850));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2842));
*(&local35) = $tmp2842;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2842));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2845));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2849));
// line 879
panda$collections$Array* $tmp2851 = *(&local29);
org$pandalanguage$pandac$ASTNode* $tmp2852 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2853 = (panda$core$Int64) {8};
org$pandalanguage$pandac$Position $tmp2854 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2855 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2856 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Position $tmp2857 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2858 = *(&local35);
panda$core$String* $tmp2859 = *(&local27);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2855, $tmp2856, $tmp2857, $tmp2858, $tmp2859);
panda$collections$Array* $tmp2860 = *(&local30);
panda$collections$ImmutableArray* $tmp2861 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2860);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2852, $tmp2853, $tmp2854, $tmp2855, $tmp2861);
panda$collections$Array$add$panda$collections$Array$T($tmp2851, ((panda$core$Object*) $tmp2852));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2852));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2855));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2861));
// line 882
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
// line 883
org$pandalanguage$pandac$ASTNode* $tmp2862 = *(&local25);
panda$core$Bit $tmp2863 = panda$core$Bit$init$builtin_bit($tmp2862 != NULL);
bool $tmp2864 = $tmp2863.value;
if ($tmp2864) goto block34; else goto block36;
block34:;
// line 884
org$pandalanguage$pandac$ASTNode* $tmp2865 = *(&local25);
org$pandalanguage$pandac$Type* $tmp2866 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2865);
org$pandalanguage$pandac$Type* $tmp2867 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2867));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2866));
*(&local36) = $tmp2866;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2866));
goto block35;
block36:;
// line 1
// line 887
org$pandalanguage$pandac$Type* $tmp2868 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Type* $tmp2869 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2869));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2868));
*(&local36) = $tmp2868;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2868));
goto block35;
block35:;
// line 889
org$pandalanguage$pandac$MethodDecl* $tmp2870 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2871 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2872 = *$tmp2871;
org$pandalanguage$pandac$Position $tmp2873 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2874 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2875 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2874, $tmp2875);
panda$core$Int64 $tmp2876 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2877 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2876);
panda$collections$Array* $tmp2878 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2878);
panda$collections$Array* $tmp2879 = *(&local28);
org$pandalanguage$pandac$Type* $tmp2880 = *(&local36);
panda$collections$Array* $tmp2881 = *(&local29);
panda$collections$ImmutableArray* $tmp2882 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT($tmp2881);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2870, $tmp2872, $tmp2873, ((panda$core$String*) NULL), $tmp2874, $tmp2877, &$s2883, $tmp2878, $tmp2879, $tmp2880, $tmp2882);
*(&local37) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2884 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2884));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2870));
*(&local37) = $tmp2870;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2870));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2874));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2878));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2882));
// line 893
org$pandalanguage$pandac$ClassDecl** $tmp2885 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2886 = *$tmp2885;
panda$collections$Array** $tmp2887 = &$tmp2886->methods;
panda$collections$Array* $tmp2888 = *$tmp2887;
org$pandalanguage$pandac$MethodDecl* $tmp2889 = *(&local37);
panda$collections$Array$add$panda$collections$Array$T($tmp2888, ((panda$core$Object*) $tmp2889));
org$pandalanguage$pandac$MethodDecl* $tmp2890 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2890));
// unreffing bareMain
*(&local37) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp2891 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2891));
// unreffing returnType
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2892 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2892));
// unreffing bareConstruct
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2893 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2893));
// unreffing mainArguments
*(&local30) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2894 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2894));
// unreffing mainStatements
*(&local29) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2895 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2895));
// unreffing mainParameters
*(&local28) = ((panda$collections$Array*) NULL);
goto block24;
block25:;
// line 1
// line 896
panda$core$String* $tmp2896 = *(&local22);
panda$core$String* $tmp2897 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2897));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2896));
*(&local27) = $tmp2896;
goto block24;
block24:;
// line 898
panda$core$Weak** $tmp2898 = &param0->compiler;
panda$core$Weak* $tmp2899 = *$tmp2898;
panda$core$Object* $tmp2900 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2899);
panda$core$Panda$unref$panda$core$Object$Q($tmp2900);
panda$collections$Stack** $tmp2901 = &((org$pandalanguage$pandac$Compiler*) $tmp2900)->currentClass;
panda$collections$Stack* $tmp2902 = *$tmp2901;
org$pandalanguage$pandac$ClassDecl** $tmp2903 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2904 = *$tmp2903;
panda$collections$Stack$push$panda$collections$Stack$T($tmp2902, ((panda$core$Object*) $tmp2904));
// line 899
org$pandalanguage$pandac$ClassDecl** $tmp2905 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2906 = *$tmp2905;
org$pandalanguage$pandac$Position $tmp2907 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2908 = *(&local19);
panda$collections$ImmutableArray* $tmp2909 = *(&local20);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2910 = *(&local21);
panda$core$String* $tmp2911 = *(&local27);
panda$collections$ImmutableArray* $tmp2912 = *(&local23);
panda$collections$ImmutableArray* $tmp2913 = *(&local24);
org$pandalanguage$pandac$ASTNode* $tmp2914 = *(&local25);
panda$collections$ImmutableArray* $tmp2915 = *(&local26);
org$pandalanguage$pandac$MethodDecl* $tmp2916 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(param0, $tmp2906, $tmp2907, $tmp2908, $tmp2909, $tmp2910, $tmp2911, $tmp2912, $tmp2913, $tmp2914, $tmp2915);
*(&local38) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2917 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2917));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2916));
*(&local38) = $tmp2916;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2916));
// line 901
org$pandalanguage$pandac$MethodDecl* $tmp2918 = *(&local38);
org$pandalanguage$pandac$Annotations** $tmp2919 = &$tmp2918->annotations;
org$pandalanguage$pandac$Annotations* $tmp2920 = *$tmp2919;
panda$core$Bit $tmp2921 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp2920);
bool $tmp2922 = $tmp2921.value;
if ($tmp2922) goto block37; else goto block38;
block37:;
// line 902
org$pandalanguage$pandac$MethodDecl* $tmp2923 = *(&local38);
org$pandalanguage$pandac$Position* $tmp2924 = &((org$pandalanguage$pandac$Symbol*) $tmp2923)->position;
org$pandalanguage$pandac$Position $tmp2925 = *$tmp2924;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2925, &$s2926);
// line 904
org$pandalanguage$pandac$MethodDecl* $tmp2927 = *(&local38);
org$pandalanguage$pandac$Annotations** $tmp2928 = &$tmp2927->annotations;
org$pandalanguage$pandac$Annotations* $tmp2929 = *$tmp2928;
panda$core$Int64* $tmp2930 = &$tmp2929->flags;
panda$core$Int64 $tmp2931 = *$tmp2930;
panda$core$Int64 $tmp2932 = (panda$core$Int64) {16};
panda$core$Int64 $tmp2933 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp2932);
panda$core$Int64 $tmp2934 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp2931, $tmp2933);
panda$core$Int64* $tmp2935 = &$tmp2929->flags;
*$tmp2935 = $tmp2934;
goto block38;
block38:;
// line 906
panda$core$Weak** $tmp2936 = &param0->compiler;
panda$core$Weak* $tmp2937 = *$tmp2936;
panda$core$Object* $tmp2938 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2937);
panda$core$Panda$unref$panda$core$Object$Q($tmp2938);
panda$collections$Stack** $tmp2939 = &((org$pandalanguage$pandac$Compiler*) $tmp2938)->currentClass;
panda$collections$Stack* $tmp2940 = *$tmp2939;
org$pandalanguage$pandac$ClassDecl** $tmp2941 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2942 = *$tmp2941;
panda$collections$Stack$pop$panda$collections$Stack$T($tmp2940, ((panda$core$Object*) $tmp2942));
// line 907
org$pandalanguage$pandac$ClassDecl** $tmp2943 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2944 = *$tmp2943;
panda$collections$Array** $tmp2945 = &$tmp2944->methods;
panda$collections$Array* $tmp2946 = *$tmp2945;
org$pandalanguage$pandac$MethodDecl* $tmp2947 = *(&local38);
panda$collections$Array$add$panda$collections$Array$T($tmp2946, ((panda$core$Object*) $tmp2947));
// line 908
org$pandalanguage$pandac$ClassDecl** $tmp2948 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2949 = *$tmp2948;
org$pandalanguage$pandac$SymbolTable** $tmp2950 = &$tmp2949->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2951 = *$tmp2950;
org$pandalanguage$pandac$MethodDecl* $tmp2952 = *(&local38);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2951, ((org$pandalanguage$pandac$Symbol*) $tmp2952));
org$pandalanguage$pandac$MethodDecl* $tmp2953 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2953));
// unreffing m
*(&local38) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$String* $tmp2954 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2954));
// unreffing name
*(&local27) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2955 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2955));
// unreffing statements
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2956 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2956));
// unreffing rawReturnType
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2957 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2957));
// unreffing parameters
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2958 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2958));
// unreffing generics
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2959 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2959));
// unreffing rawName
*(&local22) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2960 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2960));
// unreffing annotations
*(&local20) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2961 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2961));
// unreffing dc
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block20:;
panda$core$Int64 $tmp2962 = (panda$core$Int64) {16};
panda$core$Bit $tmp2963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2642, $tmp2962);
bool $tmp2964 = $tmp2963.value;
if ($tmp2964) goto block39; else goto block40;
block39:;
org$pandalanguage$pandac$Position* $tmp2965 = (org$pandalanguage$pandac$Position*) ($tmp2640->$data + 0);
org$pandalanguage$pandac$Position $tmp2966 = *$tmp2965;
*(&local39) = $tmp2966;
org$pandalanguage$pandac$ASTNode** $tmp2967 = (org$pandalanguage$pandac$ASTNode**) ($tmp2640->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2968 = *$tmp2967;
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2969 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2969));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2968));
*(&local40) = $tmp2968;
panda$collections$ImmutableArray** $tmp2970 = (panda$collections$ImmutableArray**) ($tmp2640->$data + 24);
panda$collections$ImmutableArray* $tmp2971 = *$tmp2970;
*(&local41) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2972 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2972));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2971));
*(&local41) = $tmp2971;
org$pandalanguage$pandac$ASTNode** $tmp2973 = (org$pandalanguage$pandac$ASTNode**) ($tmp2640->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2974 = *$tmp2973;
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2975 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2975));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2974));
*(&local42) = $tmp2974;
// line 911
panda$collections$HashMap* $tmp2976 = *(&local3);
panda$core$String* $tmp2977 = *(&local2);
panda$collections$Array* $tmp2978 = *(&local1);
org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, param1, ((panda$collections$MapView*) $tmp2976), $tmp2977, ((panda$collections$List*) $tmp2978));
// line 912
org$pandalanguage$pandac$ClassDecl** $tmp2979 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2980 = *$tmp2979;
panda$collections$Array** $tmp2981 = &$tmp2980->fields;
panda$collections$Array* $tmp2982 = *$tmp2981;
ITable* $tmp2983 = ((panda$collections$CollectionView*) $tmp2982)->$class->itable;
while ($tmp2983->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2983 = $tmp2983->next;
}
$fn2985 $tmp2984 = $tmp2983->methods[0];
panda$core$Int64 $tmp2986 = $tmp2984(((panda$collections$CollectionView*) $tmp2982));
*(&local43) = $tmp2986;
// line 913
org$pandalanguage$pandac$ClassDecl** $tmp2987 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2988 = *$tmp2987;
org$pandalanguage$pandac$Position $tmp2989 = *(&local39);
org$pandalanguage$pandac$ASTNode* $tmp2990 = *(&local40);
panda$collections$ImmutableArray* $tmp2991 = *(&local41);
org$pandalanguage$pandac$ASTNode* $tmp2992 = *(&local42);
org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(param0, $tmp2988, $tmp2989, $tmp2990, $tmp2991, $tmp2992);
// line 914
panda$core$Int64 $tmp2993 = *(&local43);
org$pandalanguage$pandac$ClassDecl** $tmp2994 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2995 = *$tmp2994;
panda$collections$Array** $tmp2996 = &$tmp2995->fields;
panda$collections$Array* $tmp2997 = *$tmp2996;
ITable* $tmp2998 = ((panda$collections$CollectionView*) $tmp2997)->$class->itable;
while ($tmp2998->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2998 = $tmp2998->next;
}
$fn3000 $tmp2999 = $tmp2998->methods[0];
panda$core$Int64 $tmp3001 = $tmp2999(((panda$collections$CollectionView*) $tmp2997));
panda$core$Bit $tmp3002 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp3003 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2993, $tmp3001, $tmp3002);
panda$core$Int64 $tmp3004 = $tmp3003.min;
*(&local44) = $tmp3004;
panda$core$Int64 $tmp3005 = $tmp3003.max;
panda$core$Bit $tmp3006 = $tmp3003.inclusive;
bool $tmp3007 = $tmp3006.value;
panda$core$Int64 $tmp3008 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp3009 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3008);
if ($tmp3007) goto block44; else goto block45;
block44:;
int64_t $tmp3010 = $tmp3004.value;
int64_t $tmp3011 = $tmp3005.value;
bool $tmp3012 = $tmp3010 <= $tmp3011;
panda$core$Bit $tmp3013 = (panda$core$Bit) {$tmp3012};
bool $tmp3014 = $tmp3013.value;
if ($tmp3014) goto block41; else goto block42;
block45:;
int64_t $tmp3015 = $tmp3004.value;
int64_t $tmp3016 = $tmp3005.value;
bool $tmp3017 = $tmp3015 < $tmp3016;
panda$core$Bit $tmp3018 = (panda$core$Bit) {$tmp3017};
bool $tmp3019 = $tmp3018.value;
if ($tmp3019) goto block41; else goto block42;
block41:;
// line 915
org$pandalanguage$pandac$ClassDecl** $tmp3020 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3021 = *$tmp3020;
panda$collections$Array** $tmp3022 = &$tmp3021->fields;
panda$collections$Array* $tmp3023 = *$tmp3022;
panda$core$Int64 $tmp3024 = *(&local44);
panda$core$Object* $tmp3025 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3023, $tmp3024);
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp3026 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3026));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3025)));
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) $tmp3025);
panda$core$Panda$unref$panda$core$Object$Q($tmp3025);
// line 916
org$pandalanguage$pandac$FieldDecl* $tmp3027 = *(&local45);
org$pandalanguage$pandac$FieldDecl$Kind* $tmp3028 = &$tmp3027->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp3029 = *$tmp3028;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp3030;
$tmp3030 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp3030->value = $tmp3029;
panda$core$Int64 $tmp3031 = (panda$core$Int64) {2};
org$pandalanguage$pandac$FieldDecl$Kind $tmp3032 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp3031);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp3033;
$tmp3033 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp3033->value = $tmp3032;
ITable* $tmp3034 = ((panda$core$Equatable*) $tmp3030)->$class->itable;
while ($tmp3034->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3034 = $tmp3034->next;
}
$fn3036 $tmp3035 = $tmp3034->methods[1];
panda$core$Bit $tmp3037 = $tmp3035(((panda$core$Equatable*) $tmp3030), ((panda$core$Equatable*) $tmp3033));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3030)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3033)));
bool $tmp3038 = $tmp3037.value;
if ($tmp3038) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$FieldDecl* $tmp3039 = *(&local45);
org$pandalanguage$pandac$Annotations** $tmp3040 = &$tmp3039->annotations;
org$pandalanguage$pandac$Annotations* $tmp3041 = *$tmp3040;
panda$core$Bit $tmp3042 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp3041);
*(&local46) = $tmp3042;
goto block48;
block47:;
*(&local46) = $tmp3037;
goto block48;
block48:;
panda$core$Bit $tmp3043 = *(&local46);
bool $tmp3044 = $tmp3043.value;
if ($tmp3044) goto block49; else goto block50;
block49:;
// line 918
org$pandalanguage$pandac$FieldDecl* $tmp3045 = *(&local45);
org$pandalanguage$pandac$Position* $tmp3046 = &((org$pandalanguage$pandac$Symbol*) $tmp3045)->position;
org$pandalanguage$pandac$Position $tmp3047 = *$tmp3046;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp3047, &$s3048);
goto block50;
block50:;
org$pandalanguage$pandac$FieldDecl* $tmp3049 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3049));
// unreffing f
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block43;
block43:;
panda$core$Int64 $tmp3050 = *(&local44);
int64_t $tmp3051 = $tmp3005.value;
int64_t $tmp3052 = $tmp3050.value;
int64_t $tmp3053 = $tmp3051 - $tmp3052;
panda$core$Int64 $tmp3054 = (panda$core$Int64) {$tmp3053};
panda$core$UInt64 $tmp3055 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3054);
if ($tmp3007) goto block52; else goto block53;
block52:;
uint64_t $tmp3056 = $tmp3055.value;
uint64_t $tmp3057 = $tmp3009.value;
bool $tmp3058 = $tmp3056 >= $tmp3057;
panda$core$Bit $tmp3059 = (panda$core$Bit) {$tmp3058};
bool $tmp3060 = $tmp3059.value;
if ($tmp3060) goto block51; else goto block42;
block53:;
uint64_t $tmp3061 = $tmp3055.value;
uint64_t $tmp3062 = $tmp3009.value;
bool $tmp3063 = $tmp3061 > $tmp3062;
panda$core$Bit $tmp3064 = (panda$core$Bit) {$tmp3063};
bool $tmp3065 = $tmp3064.value;
if ($tmp3065) goto block51; else goto block42;
block51:;
int64_t $tmp3066 = $tmp3050.value;
int64_t $tmp3067 = $tmp3008.value;
int64_t $tmp3068 = $tmp3066 + $tmp3067;
panda$core$Int64 $tmp3069 = (panda$core$Int64) {$tmp3068};
*(&local44) = $tmp3069;
goto block41;
block42:;
org$pandalanguage$pandac$ASTNode* $tmp3070 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3070));
// unreffing varDecl
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp3071 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3071));
// unreffing annotations
*(&local41) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3072 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3072));
// unreffing dc
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block40:;
// line 924
panda$core$Bit $tmp3073 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3074 = $tmp3073.value;
if ($tmp3074) goto block54; else goto block55;
block55:;
panda$core$Int64 $tmp3075 = (panda$core$Int64) {924};
org$pandalanguage$pandac$ASTNode* $tmp3076 = *(&local4);
panda$core$String* $tmp3077 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3078, ((panda$core$Object*) $tmp3076));
panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3077, &$s3080);
org$pandalanguage$pandac$ASTNode* $tmp3081 = *(&local4);
panda$core$Int64* $tmp3082 = &$tmp3081->$rawValue;
panda$core$Int64 $tmp3083 = *$tmp3082;
panda$core$Int64$wrapper* $tmp3084;
$tmp3084 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3084->value = $tmp3083;
panda$core$String* $tmp3085 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3079, ((panda$core$Object*) $tmp3084));
panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3085, &$s3087);
org$pandalanguage$pandac$ASTNode* $tmp3088 = *(&local4);
$fn3090 $tmp3089 = ($fn3090) $tmp3088->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3091 = $tmp3089($tmp3088);
org$pandalanguage$pandac$Position$wrapper* $tmp3092;
$tmp3092 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp3092->value = $tmp3091;
panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3086, ((panda$core$Object*) $tmp3092));
panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, &$s3095);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3096, $tmp3075, $tmp3094);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3077));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3079));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3084));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3085));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3086));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3092));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3093));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3094));
abort(); // unreachable
block54:;
goto block7;
block7:;
org$pandalanguage$pandac$ASTNode* $tmp3097 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3097));
// unreffing e
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2629));
// line 928
panda$io$File** $tmp3098 = &param0->source;
panda$io$File* $tmp3099 = *$tmp3098;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3099));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) NULL)));
panda$io$File** $tmp3100 = &param0->source;
*$tmp3100 = ((panda$io$File*) NULL);
// line 929
panda$collections$Array* $tmp3101 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp3101)));
panda$collections$HashMap* $tmp3102 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3102));
// unreffing aliases
*(&local3) = ((panda$collections$HashMap*) NULL);
panda$core$String* $tmp3103 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3103));
// unreffing currentPackage
*(&local2) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp3104 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3104));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$ImmutableArray* $tmp3105 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3105));
// unreffing entries
*(&local0) = ((panda$collections$ImmutableArray*) NULL);
return ((panda$collections$ListView*) $tmp3101);
block3:;
// line 932
panda$core$Bit $tmp3106 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3107 = $tmp3106.value;
if ($tmp3107) goto block56; else goto block57;
block57:;
panda$core$Int64 $tmp3108 = (panda$core$Int64) {932};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3109, $tmp3108);
abort(); // unreachable
block56:;
goto block1;
block1:;
panda$core$Bit $tmp3110 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3111 = $tmp3110.value;
if ($tmp3111) goto block58; else goto block59;
block59:;
panda$core$Int64 $tmp3112 = (panda$core$Int64) {820};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3113, $tmp3112, &$s3114);
abort(); // unreachable
block58:;
abort(); // unreachable

}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* param0) {

panda$core$Weak** $tmp3115 = &param0->compiler;
panda$core$Weak* $tmp3116 = *$tmp3115;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3116));
org$pandalanguage$pandac$ClassDecl** $tmp3117 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3118 = *$tmp3117;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3118));
panda$io$File** $tmp3119 = &param0->source;
panda$io$File* $tmp3120 = *$tmp3119;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3120));
return;

}

