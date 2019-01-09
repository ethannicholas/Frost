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
#include "org/pandalanguage/pandac/FixedArray.h"
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
org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Scanner$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef panda$collections$Iterator* (*$fn66)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn70)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn75)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn87)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn169)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn173)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn178)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn194)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn244)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn249)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn253)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn258)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn396)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn398)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn425)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn427)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn454)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn456)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn483)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn485)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn512)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn514)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn618)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn622)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn627)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn698)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn755)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn759)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn764)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn842)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn846)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn851)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn884)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn888)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn893)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn962)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn966)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn971)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1033)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1037)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1042)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1083)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1087)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1092)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1135)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1139)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1144)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1176)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1180)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1185)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1202)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1206)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1211)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1322)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1326)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1331)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1359)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1363)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1368)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1382)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1386)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1391)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1423)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1427)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1432)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1482)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1486)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1491)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1541)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1574)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1578)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1583)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1628)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1642)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1646)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1651)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1692)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1723)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1987)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1991)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1996)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2009)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2025)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2064)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2068)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2073)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn2118)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn2136)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2142)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2146)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2151)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2182)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2229)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2233)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2238)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2272)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2299)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2303)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2308)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2320)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2335)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2348)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2362)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2372)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2406)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2415)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2426)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2459)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2468)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2481)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2485)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2490)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2498)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2544)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2548)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2553)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2565)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2595)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2682)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2686)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2691)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2821)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2853)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2857)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2862)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn3051)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn3066)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn3102)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3156)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x3a\x20", 18, -3453142829537486574, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 197438526755717134, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6e\x76\x65\x72\x74\x54\x79\x70\x65\x28\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 145, 2505294641206069548, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, -5891455126768809117, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, -1200106393953033593, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, 17797457560281006, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 1798843608756893563, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6d\x70\x6c\x65\x78\x69\x74\x79\x28\x6e\x6f\x64\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 133, -6414000039548560057, NULL };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s1961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static panda$core$String $s2572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s2902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s3002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s3161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x70\x61\x6e\x64\x61", 13, -5962399699069595483, NULL };
static panda$core$String $s3180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x73\x63\x61\x6e\x28\x73\x6f\x75\x72\x63\x65\x3a\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x66\x69\x6c\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 193, 7895019779626162639, NULL };

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
org$pandalanguage$pandac$FixedArray* local7 = NULL;
panda$collections$Array* local8 = NULL;
org$pandalanguage$pandac$ASTNode* local9 = NULL;
org$pandalanguage$pandac$IR$Value* local10 = NULL;
org$pandalanguage$pandac$Type* local11 = NULL;
org$pandalanguage$pandac$Position local12;
org$pandalanguage$pandac$parser$Token$Kind local13;
org$pandalanguage$pandac$FixedArray* local14 = NULL;
org$pandalanguage$pandac$ASTNode* local15 = NULL;
org$pandalanguage$pandac$Type$Kind local16;
panda$collections$Array* local17 = NULL;
org$pandalanguage$pandac$ASTNode* local18 = NULL;
org$pandalanguage$pandac$Type* local19 = NULL;
// line 25
panda$core$Int64* $tmp6 = &param1->$rawValue;
panda$core$Int64 $tmp7 = *$tmp6;
panda$core$Int64 $tmp8 = (panda$core$Int64) {44};
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
panda$core$Int64 $tmp22 = (panda$core$Int64) {31};
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
panda$core$Int64 $tmp50 = (panda$core$Int64) {21};
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
org$pandalanguage$pandac$FixedArray** $tmp58 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp59 = *$tmp58;
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
org$pandalanguage$pandac$FixedArray* $tmp60 = *(&local7);
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
org$pandalanguage$pandac$FixedArray* $tmp63 = *(&local7);
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
org$pandalanguage$pandac$FixedArray* $tmp92 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// unreffing args
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp93 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp93));
// unreffing base
*(&local6) = ((panda$core$String*) NULL);
return $tmp90;
block7:;
panda$core$Int64 $tmp94 = (panda$core$Int64) {25};
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
panda$core$Int64 $tmp105 = (panda$core$Int64) {14};
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
org$pandalanguage$pandac$IR$Value* $tmp117 = *(&local10);
panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s119, ((panda$core$Object*) $tmp117));
panda$core$String* $tmp120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp118, &$s121);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s122, $tmp116, $tmp120);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
// unreffing REF($292:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing REF($291:panda.core.String)
abort(); // unreachable
block15:;
org$pandalanguage$pandac$IR$Value* $tmp123 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
// unreffing type
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block12:;
panda$core$Int64 $tmp124 = (panda$core$Int64) {29};
panda$core$Bit $tmp125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp7, $tmp124);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block17; else goto block18;
block17:;
org$pandalanguage$pandac$Position* $tmp127 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp128 = *$tmp127;
*(&local12) = $tmp128;
org$pandalanguage$pandac$parser$Token$Kind* $tmp129 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp130 = *$tmp129;
*(&local13) = $tmp130;
org$pandalanguage$pandac$FixedArray** $tmp131 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp132 = *$tmp131;
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
org$pandalanguage$pandac$FixedArray* $tmp133 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
*(&local14) = $tmp132;
org$pandalanguage$pandac$ASTNode** $tmp134 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp135 = *$tmp134;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
org$pandalanguage$pandac$ASTNode* $tmp136 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
*(&local15) = $tmp135;
// line 50
// line 51
org$pandalanguage$pandac$parser$Token$Kind $tmp137 = *(&local13);
panda$core$Int64 $tmp138 = $tmp137.$rawValue;
panda$core$Int64 $tmp139 = (panda$core$Int64) {91};
panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp138, $tmp139);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block20; else goto block21;
block20:;
// line 53
panda$core$Int64 $tmp142 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp143 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp142);
*(&local16) = $tmp143;
goto block19;
block21:;
panda$core$Int64 $tmp144 = (panda$core$Int64) {92};
panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp138, $tmp144);
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block22; else goto block23;
block22:;
// line 56
panda$core$Int64 $tmp147 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp148 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp147);
*(&local16) = $tmp148;
goto block19;
block23:;
panda$core$Int64 $tmp149 = (panda$core$Int64) {93};
panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp138, $tmp149);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block24; else goto block25;
block24:;
// line 59
panda$core$Int64 $tmp152 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp153 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp152);
*(&local16) = $tmp153;
goto block19;
block25:;
panda$core$Int64 $tmp154 = (panda$core$Int64) {94};
panda$core$Bit $tmp155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp138, $tmp154);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block26; else goto block27;
block26:;
// line 62
panda$core$Int64 $tmp157 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp158 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp157);
*(&local16) = $tmp158;
goto block19;
block27:;
// line 65
panda$core$Bit $tmp159 = panda$core$Bit$init$builtin_bit(false);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp161 = (panda$core$Int64) {65};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s162, $tmp161, &$s163);
abort(); // unreachable
block28:;
goto block19;
block19:;
// line 68
panda$collections$Array* $tmp164 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp164);
*(&local17) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
panda$collections$Array* $tmp165 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp165));
*(&local17) = $tmp164;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
// unreffing REF($384:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 69
org$pandalanguage$pandac$FixedArray* $tmp166 = *(&local14);
ITable* $tmp167 = ((panda$collections$Iterable*) $tmp166)->$class->itable;
while ($tmp167->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp167 = $tmp167->next;
}
$fn169 $tmp168 = $tmp167->methods[0];
panda$collections$Iterator* $tmp170 = $tmp168(((panda$collections$Iterable*) $tmp166));
goto block30;
block30:;
ITable* $tmp171 = $tmp170->$class->itable;
while ($tmp171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp171 = $tmp171->next;
}
$fn173 $tmp172 = $tmp171->methods[0];
panda$core$Bit $tmp174 = $tmp172($tmp170);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block32; else goto block31;
block31:;
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp176 = $tmp170->$class->itable;
while ($tmp176->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp176 = $tmp176->next;
}
$fn178 $tmp177 = $tmp176->methods[1];
panda$core$Object* $tmp179 = $tmp177($tmp170);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp179)));
org$pandalanguage$pandac$ASTNode* $tmp180 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) $tmp179);
// line 70
panda$collections$Array* $tmp181 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp182 = *(&local18);
org$pandalanguage$pandac$Type* $tmp183 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp182);
panda$collections$Array$add$panda$collections$Array$T($tmp181, ((panda$core$Object*) $tmp183));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// unreffing REF($425:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp179);
// unreffing REF($413:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp184 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
// unreffing p
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block30;
block32:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
// unreffing REF($402:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 72
*(&local19) = ((org$pandalanguage$pandac$Type*) NULL);
// line 73
org$pandalanguage$pandac$ASTNode* $tmp185 = *(&local15);
panda$core$Bit $tmp186 = panda$core$Bit$init$builtin_bit($tmp185 != NULL);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block33; else goto block35;
block33:;
// line 74
org$pandalanguage$pandac$ASTNode* $tmp188 = *(&local15);
org$pandalanguage$pandac$Type* $tmp189 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp188);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
org$pandalanguage$pandac$Type* $tmp190 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
*(&local19) = $tmp189;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
// unreffing REF($454:org.pandalanguage.pandac.Type)
goto block34;
block35:;
// line 1
// line 77
org$pandalanguage$pandac$Type* $tmp191 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
org$pandalanguage$pandac$Type* $tmp192 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
*(&local19) = $tmp191;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing REF($467:org.pandalanguage.pandac.Type)
goto block34;
block34:;
// line 79
$fn194 $tmp193 = ($fn194) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp195 = $tmp193(param1);
org$pandalanguage$pandac$Type$Kind $tmp196 = *(&local16);
panda$collections$Array* $tmp197 = *(&local17);
org$pandalanguage$pandac$FixedArray* $tmp198 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp197);
org$pandalanguage$pandac$Type* $tmp199 = *(&local19);
panda$core$Int64 $tmp200 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp201 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp195, $tmp196, ((panda$collections$ListView*) $tmp198), $tmp199, $tmp200);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// unreffing REF($489:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing REF($484:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
org$pandalanguage$pandac$Type* $tmp202 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
// unreffing returnType
*(&local19) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp203 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// unreffing parameters
*(&local17) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp204 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing rawReturnType
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp205 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing rawParameters
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp201;
block18:;
// line 83
panda$core$Bit $tmp206 = panda$core$Bit$init$builtin_bit(false);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp208 = (panda$core$Int64) {83};
panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s210, ((panda$core$Object*) param1));
panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp209, &$s212);
panda$core$Int64* $tmp213 = &param1->$rawValue;
panda$core$Int64 $tmp214 = *$tmp213;
panda$core$Int64$wrapper* $tmp215;
$tmp215 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp215->value = $tmp214;
panda$core$String* $tmp216 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp211, ((panda$core$Object*) $tmp215));
panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp216, &$s218);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s219, $tmp208, $tmp217);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
// unreffing REF($531:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
// unreffing REF($530:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
// unreffing REF($529:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
// unreffing REF($526:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
// unreffing REF($525:panda.core.String)
abort(); // unreachable
block36:;
goto block1;
block1:;
panda$core$Bit $tmp220 = panda$core$Bit$init$builtin_bit(false);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block38; else goto block39;
block39:;
panda$core$Int64 $tmp222 = (panda$core$Int64) {24};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s223, $tmp222, &$s224);
abort(); // unreachable
block38:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Position param1, panda$core$Int64 param2, panda$core$Int64 param3) {

// line 89
panda$core$Int64 $tmp225 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(param2, param3);
panda$core$Int64 $tmp226 = (panda$core$Int64) {0};
int64_t $tmp227 = $tmp225.value;
int64_t $tmp228 = $tmp226.value;
bool $tmp229 = $tmp227 != $tmp228;
panda$core$Bit $tmp230 = (panda$core$Bit) {$tmp229};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block1; else goto block2;
block1:;
// line 90
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s232);
goto block2;
block2:;
// line 92
panda$core$Int64 $tmp233 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(param2, param3);
return $tmp233;

}
panda$core$Bit org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 99
panda$core$Bit $tmp234 = panda$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block1; else goto block2;
block1:;
// line 100
panda$core$Bit $tmp236 = panda$core$Bit$init$builtin_bit(true);
return $tmp236;
block2:;
// line 102
panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s238, param2);
panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp237, &$s240);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp239);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// unreffing REF($10:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing REF($9:panda.core.String)
// line 103
panda$core$Bit $tmp241 = panda$core$Bit$init$builtin_bit(false);
return $tmp241;

}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$FixedArray* param1) {

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
panda$core$Int64 $tmp242 = (panda$core$Int64) {0};
*(&local0) = $tmp242;
// line 97
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
panda$collections$Array* $tmp243 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
*(&local1) = ((panda$collections$Array*) NULL);
// line 98
panda$core$Method* $tmp245 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp245, ((panda$core$Int8*) org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit), ((panda$core$Immutable*) NULL));
// line 98
*(&local2) = ((panda$core$Method*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
panda$core$Method* $tmp246 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
*(&local2) = $tmp245;
// line 105
ITable* $tmp247 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp247->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[0];
panda$collections$Iterator* $tmp250 = $tmp248(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp251 = $tmp250->$class->itable;
while ($tmp251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
panda$core$Bit $tmp254 = $tmp252($tmp250);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block3; else goto block2;
block2:;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp256 = $tmp250->$class->itable;
while ($tmp256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[1];
panda$core$Object* $tmp259 = $tmp257($tmp250);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp259)));
org$pandalanguage$pandac$ASTNode* $tmp260 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp260));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) $tmp259);
// line 106
org$pandalanguage$pandac$ASTNode* $tmp261 = *(&local3);
panda$core$Int64* $tmp262 = &$tmp261->$rawValue;
panda$core$Int64 $tmp263 = *$tmp262;
panda$core$Int64 $tmp264 = (panda$core$Int64) {0};
panda$core$Bit $tmp265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp263, $tmp264);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp267 = (org$pandalanguage$pandac$Position*) ($tmp261->$data + 0);
org$pandalanguage$pandac$Position $tmp268 = *$tmp267;
*(&local4) = $tmp268;
panda$core$String** $tmp269 = (panda$core$String**) ($tmp261->$data + 16);
panda$core$String* $tmp270 = *$tmp269;
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
panda$core$String* $tmp271 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp271));
*(&local5) = $tmp270;
panda$core$String** $tmp272 = (panda$core$String**) ($tmp261->$data + 24);
panda$core$String* $tmp273 = *$tmp272;
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
panda$core$String* $tmp274 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
*(&local6) = $tmp273;
org$pandalanguage$pandac$ASTNode** $tmp275 = (org$pandalanguage$pandac$ASTNode**) ($tmp261->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp276 = *$tmp275;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp276));
org$pandalanguage$pandac$ASTNode* $tmp277 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
*(&local7) = $tmp276;
// line 108
org$pandalanguage$pandac$ASTNode* $tmp278 = *(&local7);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
org$pandalanguage$pandac$ASTNode* $tmp279 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
*(&local8) = $tmp278;
// line 109
panda$core$String* $tmp280 = *(&local5);
panda$core$Bit $tmp281 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s282);
bool $tmp283 = $tmp281.value;
if ($tmp283) goto block8; else goto block9;
block8:;
// line 111
org$pandalanguage$pandac$Position $tmp284 = *(&local4);
panda$core$Int64 $tmp285 = *(&local0);
panda$core$Int64 $tmp286 = (panda$core$Int64) {2};
panda$core$Int64 $tmp287 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp284, $tmp285, $tmp286);
*(&local0) = $tmp287;
goto block7;
block9:;
panda$core$Bit $tmp288 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s289);
bool $tmp290 = $tmp288.value;
if ($tmp290) goto block10; else goto block11;
block10:;
// line 114
org$pandalanguage$pandac$Position $tmp291 = *(&local4);
panda$core$Int64 $tmp292 = *(&local0);
panda$core$Int64 $tmp293 = (panda$core$Int64) {4};
panda$core$Int64 $tmp294 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp291, $tmp292, $tmp293);
*(&local0) = $tmp294;
goto block7;
block11:;
panda$core$Bit $tmp295 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s296);
bool $tmp297 = $tmp295.value;
if ($tmp297) goto block12; else goto block13;
block12:;
// line 117
org$pandalanguage$pandac$Position $tmp298 = *(&local4);
panda$core$Int64 $tmp299 = *(&local0);
panda$core$Int64 $tmp300 = (panda$core$Int64) {8};
panda$core$Int64 $tmp301 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp298, $tmp299, $tmp300);
*(&local0) = $tmp301;
goto block7;
block13:;
panda$core$Bit $tmp302 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s303);
bool $tmp304 = $tmp302.value;
if ($tmp304) goto block14; else goto block15;
block14:;
// line 120
org$pandalanguage$pandac$Position $tmp305 = *(&local4);
panda$core$Int64 $tmp306 = *(&local0);
panda$core$Int64 $tmp307 = (panda$core$Int64) {16};
panda$core$Int64 $tmp308 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp305, $tmp306, $tmp307);
*(&local0) = $tmp308;
goto block7;
block15:;
panda$core$Bit $tmp309 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s310);
bool $tmp311 = $tmp309.value;
if ($tmp311) goto block16; else goto block17;
block16:;
// line 123
org$pandalanguage$pandac$Position $tmp312 = *(&local4);
panda$core$Int64 $tmp313 = *(&local0);
panda$core$Int64 $tmp314 = (panda$core$Int64) {32};
panda$core$Int64 $tmp315 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp312, $tmp313, $tmp314);
*(&local0) = $tmp315;
goto block7;
block17:;
panda$core$Bit $tmp316 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s317);
bool $tmp318 = $tmp316.value;
if ($tmp318) goto block18; else goto block19;
block18:;
// line 126
org$pandalanguage$pandac$Position $tmp319 = *(&local4);
panda$core$Int64 $tmp320 = *(&local0);
panda$core$Int64 $tmp321 = (panda$core$Int64) {64};
panda$core$Int64 $tmp322 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp319, $tmp320, $tmp321);
*(&local0) = $tmp322;
goto block7;
block19:;
panda$core$Bit $tmp323 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s324);
bool $tmp325 = $tmp323.value;
if ($tmp325) goto block20; else goto block21;
block20:;
// line 129
org$pandalanguage$pandac$Position $tmp326 = *(&local4);
panda$core$Int64 $tmp327 = *(&local0);
panda$core$Int64 $tmp328 = (panda$core$Int64) {128};
panda$core$Int64 $tmp329 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp326, $tmp327, $tmp328);
*(&local0) = $tmp329;
goto block7;
block21:;
panda$core$Bit $tmp330 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s331);
bool $tmp332 = $tmp330.value;
if ($tmp332) goto block22; else goto block23;
block22:;
// line 132
org$pandalanguage$pandac$Position $tmp333 = *(&local4);
panda$core$Int64 $tmp334 = *(&local0);
panda$core$Int64 $tmp335 = (panda$core$Int64) {256};
panda$core$Int64 $tmp336 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp333, $tmp334, $tmp335);
*(&local0) = $tmp336;
goto block7;
block23:;
panda$core$Bit $tmp337 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s338);
bool $tmp339 = $tmp337.value;
if ($tmp339) goto block24; else goto block25;
block24:;
// line 135
org$pandalanguage$pandac$Position $tmp340 = *(&local4);
panda$core$Int64 $tmp341 = *(&local0);
panda$core$Int64 $tmp342 = (panda$core$Int64) {512};
panda$core$Int64 $tmp343 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp340, $tmp341, $tmp342);
*(&local0) = $tmp343;
goto block7;
block25:;
panda$core$Bit $tmp344 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s345);
bool $tmp346 = $tmp344.value;
if ($tmp346) goto block26; else goto block27;
block26:;
// line 138
org$pandalanguage$pandac$Position $tmp347 = *(&local4);
panda$core$Int64 $tmp348 = *(&local0);
panda$core$Int64 $tmp349 = (panda$core$Int64) {1024};
panda$core$Int64 $tmp350 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp347, $tmp348, $tmp349);
*(&local0) = $tmp350;
goto block7;
block27:;
panda$core$Bit $tmp351 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s352);
bool $tmp353 = $tmp351.value;
if ($tmp353) goto block28; else goto block29;
block28:;
// line 141
org$pandalanguage$pandac$Position $tmp354 = *(&local4);
panda$core$Int64 $tmp355 = *(&local0);
panda$core$Int64 $tmp356 = (panda$core$Int64) {2048};
panda$core$Int64 $tmp357 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp354, $tmp355, $tmp356);
*(&local0) = $tmp357;
goto block7;
block29:;
panda$core$Bit $tmp358 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s359);
bool $tmp360 = $tmp358.value;
if ($tmp360) goto block30; else goto block31;
block30:;
// line 144
org$pandalanguage$pandac$Position $tmp361 = *(&local4);
panda$core$Int64 $tmp362 = *(&local0);
panda$core$Int64 $tmp363 = (panda$core$Int64) {4096};
panda$core$Int64 $tmp364 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp361, $tmp362, $tmp363);
*(&local0) = $tmp364;
goto block7;
block31:;
panda$core$Bit $tmp365 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s366);
bool $tmp367 = $tmp365.value;
if ($tmp367) goto block32; else goto block33;
block32:;
// line 147
org$pandalanguage$pandac$Position $tmp368 = *(&local4);
panda$core$Int64 $tmp369 = *(&local0);
panda$core$Int64 $tmp370 = (panda$core$Int64) {16384};
panda$core$Int64 $tmp371 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp368, $tmp369, $tmp370);
*(&local0) = $tmp371;
goto block7;
block33:;
panda$core$Bit $tmp372 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s373);
bool $tmp374 = $tmp372.value;
if ($tmp374) goto block34; else goto block35;
block34:;
// line 150
org$pandalanguage$pandac$Position $tmp375 = *(&local4);
panda$core$Int64 $tmp376 = *(&local0);
panda$core$Int64 $tmp377 = (panda$core$Int64) {32768};
panda$core$Int64 $tmp378 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp375, $tmp376, $tmp377);
*(&local0) = $tmp378;
goto block7;
block35:;
panda$core$Bit $tmp379 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s380);
bool $tmp381 = $tmp379.value;
if ($tmp381) goto block36; else goto block37;
block36:;
// line 153
panda$collections$Array* $tmp382 = *(&local1);
panda$core$Bit $tmp383 = panda$core$Bit$init$builtin_bit($tmp382 == NULL);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block38; else goto block39;
block38:;
// line 154
panda$collections$Array* $tmp385 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp385);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
panda$collections$Array* $tmp386 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp386));
*(&local1) = $tmp385;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
// unreffing REF($246:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block39;
block39:;
// line 156
panda$core$Method* $tmp387 = *(&local2);
org$pandalanguage$pandac$Position $tmp388 = *(&local4);
panda$core$String* $tmp389 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp390 = *(&local8);
panda$core$Int8** $tmp391 = &$tmp387->pointer;
panda$core$Int8* $tmp392 = *$tmp391;
panda$core$Immutable** $tmp393 = &$tmp387->target;
panda$core$Immutable* $tmp394 = *$tmp393;
bool $tmp395 = $tmp394 != ((panda$core$Immutable*) NULL);
if ($tmp395) goto block42; else goto block43;
block43:;
panda$core$Bit $tmp397 = (($fn396) $tmp392)(param0, $tmp388, $tmp389, $tmp390);
*(&local9) = $tmp397;
goto block44;
block42:;
panda$core$Bit $tmp399 = (($fn398) $tmp392)($tmp394, param0, $tmp388, $tmp389, $tmp390);
*(&local9) = $tmp399;
goto block44;
block44:;
panda$core$Bit $tmp400 = *(&local9);
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block40; else goto block41;
block40:;
// line 157
panda$collections$Array* $tmp402 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp403 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp404 = (panda$core$Int64) {0};
panda$core$String* $tmp405 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp406 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp403, $tmp404, $tmp405, $tmp406);
panda$collections$Array$add$panda$collections$Array$T($tmp402, ((panda$core$Object*) $tmp403));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing REF($286:org.pandalanguage.pandac.Annotations.Expression)
// line 158
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp407 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block41;
block41:;
goto block7;
block37:;
panda$core$Bit $tmp408 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s409);
bool $tmp410 = $tmp408.value;
if ($tmp410) goto block45; else goto block46;
block45:;
// line 162
panda$collections$Array* $tmp411 = *(&local1);
panda$core$Bit $tmp412 = panda$core$Bit$init$builtin_bit($tmp411 == NULL);
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block47; else goto block48;
block47:;
// line 163
panda$collections$Array* $tmp414 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp414);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp414));
panda$collections$Array* $tmp415 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
*(&local1) = $tmp414;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp414));
// unreffing REF($317:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block48;
block48:;
// line 165
panda$core$Method* $tmp416 = *(&local2);
org$pandalanguage$pandac$Position $tmp417 = *(&local4);
panda$core$String* $tmp418 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp419 = *(&local8);
panda$core$Int8** $tmp420 = &$tmp416->pointer;
panda$core$Int8* $tmp421 = *$tmp420;
panda$core$Immutable** $tmp422 = &$tmp416->target;
panda$core$Immutable* $tmp423 = *$tmp422;
bool $tmp424 = $tmp423 != ((panda$core$Immutable*) NULL);
if ($tmp424) goto block51; else goto block52;
block52:;
panda$core$Bit $tmp426 = (($fn425) $tmp421)(param0, $tmp417, $tmp418, $tmp419);
*(&local10) = $tmp426;
goto block53;
block51:;
panda$core$Bit $tmp428 = (($fn427) $tmp421)($tmp423, param0, $tmp417, $tmp418, $tmp419);
*(&local10) = $tmp428;
goto block53;
block53:;
panda$core$Bit $tmp429 = *(&local10);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block49; else goto block50;
block49:;
// line 166
panda$collections$Array* $tmp431 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp432 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp433 = (panda$core$Int64) {1};
panda$core$String* $tmp434 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp435 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp432, $tmp433, $tmp434, $tmp435);
panda$collections$Array$add$panda$collections$Array$T($tmp431, ((panda$core$Object*) $tmp432));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
// unreffing REF($357:org.pandalanguage.pandac.Annotations.Expression)
// line 167
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp436 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp436));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block50;
block50:;
goto block7;
block46:;
panda$core$Bit $tmp437 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s438);
bool $tmp439 = $tmp437.value;
if ($tmp439) goto block54; else goto block55;
block54:;
// line 171
panda$collections$Array* $tmp440 = *(&local1);
panda$core$Bit $tmp441 = panda$core$Bit$init$builtin_bit($tmp440 == NULL);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block56; else goto block57;
block56:;
// line 172
panda$collections$Array* $tmp443 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp443);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
panda$collections$Array* $tmp444 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp444));
*(&local1) = $tmp443;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
// unreffing REF($388:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block57;
block57:;
// line 174
panda$core$Method* $tmp445 = *(&local2);
org$pandalanguage$pandac$Position $tmp446 = *(&local4);
panda$core$String* $tmp447 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp448 = *(&local8);
panda$core$Int8** $tmp449 = &$tmp445->pointer;
panda$core$Int8* $tmp450 = *$tmp449;
panda$core$Immutable** $tmp451 = &$tmp445->target;
panda$core$Immutable* $tmp452 = *$tmp451;
bool $tmp453 = $tmp452 != ((panda$core$Immutable*) NULL);
if ($tmp453) goto block60; else goto block61;
block61:;
panda$core$Bit $tmp455 = (($fn454) $tmp450)(param0, $tmp446, $tmp447, $tmp448);
*(&local11) = $tmp455;
goto block62;
block60:;
panda$core$Bit $tmp457 = (($fn456) $tmp450)($tmp452, param0, $tmp446, $tmp447, $tmp448);
*(&local11) = $tmp457;
goto block62;
block62:;
panda$core$Bit $tmp458 = *(&local11);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block58; else goto block59;
block58:;
// line 175
panda$collections$Array* $tmp460 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp461 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp462 = (panda$core$Int64) {2};
panda$core$String* $tmp463 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp464 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp461, $tmp462, $tmp463, $tmp464);
panda$collections$Array$add$panda$collections$Array$T($tmp460, ((panda$core$Object*) $tmp461));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
// unreffing REF($428:org.pandalanguage.pandac.Annotations.Expression)
// line 176
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp465 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp465));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block59;
block59:;
goto block7;
block55:;
panda$core$Bit $tmp466 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s467);
bool $tmp468 = $tmp466.value;
if ($tmp468) goto block63; else goto block64;
block63:;
// line 180
panda$collections$Array* $tmp469 = *(&local1);
panda$core$Bit $tmp470 = panda$core$Bit$init$builtin_bit($tmp469 == NULL);
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block65; else goto block66;
block65:;
// line 181
panda$collections$Array* $tmp472 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp472);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp472));
panda$collections$Array* $tmp473 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
*(&local1) = $tmp472;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp472));
// unreffing REF($459:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block66;
block66:;
// line 183
panda$core$Method* $tmp474 = *(&local2);
org$pandalanguage$pandac$Position $tmp475 = *(&local4);
panda$core$String* $tmp476 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp477 = *(&local8);
panda$core$Int8** $tmp478 = &$tmp474->pointer;
panda$core$Int8* $tmp479 = *$tmp478;
panda$core$Immutable** $tmp480 = &$tmp474->target;
panda$core$Immutable* $tmp481 = *$tmp480;
bool $tmp482 = $tmp481 != ((panda$core$Immutable*) NULL);
if ($tmp482) goto block69; else goto block70;
block70:;
panda$core$Bit $tmp484 = (($fn483) $tmp479)(param0, $tmp475, $tmp476, $tmp477);
*(&local12) = $tmp484;
goto block71;
block69:;
panda$core$Bit $tmp486 = (($fn485) $tmp479)($tmp481, param0, $tmp475, $tmp476, $tmp477);
*(&local12) = $tmp486;
goto block71;
block71:;
panda$core$Bit $tmp487 = *(&local12);
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block67; else goto block68;
block67:;
// line 184
panda$collections$Array* $tmp489 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp490 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp491 = (panda$core$Int64) {3};
panda$core$String* $tmp492 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp493 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp490, $tmp491, $tmp492, $tmp493);
panda$collections$Array$add$panda$collections$Array$T($tmp489, ((panda$core$Object*) $tmp490));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp490));
// unreffing REF($499:org.pandalanguage.pandac.Annotations.Expression)
// line 185
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp494 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block68;
block68:;
goto block7;
block64:;
panda$core$Bit $tmp495 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s496);
bool $tmp497 = $tmp495.value;
if ($tmp497) goto block72; else goto block73;
block72:;
// line 189
panda$collections$Array* $tmp498 = *(&local1);
panda$core$Bit $tmp499 = panda$core$Bit$init$builtin_bit($tmp498 == NULL);
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block74; else goto block75;
block74:;
// line 190
panda$collections$Array* $tmp501 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp501);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
panda$collections$Array* $tmp502 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
*(&local1) = $tmp501;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
// unreffing REF($530:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block75;
block75:;
// line 192
panda$core$Method* $tmp503 = *(&local2);
org$pandalanguage$pandac$Position $tmp504 = *(&local4);
panda$core$String* $tmp505 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp506 = *(&local8);
panda$core$Int8** $tmp507 = &$tmp503->pointer;
panda$core$Int8* $tmp508 = *$tmp507;
panda$core$Immutable** $tmp509 = &$tmp503->target;
panda$core$Immutable* $tmp510 = *$tmp509;
bool $tmp511 = $tmp510 != ((panda$core$Immutable*) NULL);
if ($tmp511) goto block78; else goto block79;
block79:;
panda$core$Bit $tmp513 = (($fn512) $tmp508)(param0, $tmp504, $tmp505, $tmp506);
*(&local13) = $tmp513;
goto block80;
block78:;
panda$core$Bit $tmp515 = (($fn514) $tmp508)($tmp510, param0, $tmp504, $tmp505, $tmp506);
*(&local13) = $tmp515;
goto block80;
block80:;
panda$core$Bit $tmp516 = *(&local13);
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block76; else goto block77;
block76:;
// line 193
panda$collections$Array* $tmp518 = *(&local1);
org$pandalanguage$pandac$Annotations$Expression* $tmp519 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp520 = (panda$core$Int64) {4};
panda$core$String* $tmp521 = *(&local6);
org$pandalanguage$pandac$ASTNode* $tmp522 = *(&local8);
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp519, $tmp520, $tmp521, $tmp522);
panda$collections$Array$add$panda$collections$Array$T($tmp518, ((panda$core$Object*) $tmp519));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
// unreffing REF($570:org.pandalanguage.pandac.Annotations.Expression)
// line 194
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp523 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block77;
block77:;
goto block7;
block73:;
// line 198
org$pandalanguage$pandac$Position $tmp524 = *(&local4);
panda$core$String* $tmp525 = *(&local5);
panda$core$String* $tmp526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s527, $tmp525);
panda$core$String* $tmp528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp526, &$s529);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp524, $tmp528);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
// unreffing REF($595:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
// unreffing REF($594:panda.core.String)
goto block7;
block7:;
// line 201
org$pandalanguage$pandac$ASTNode* $tmp530 = *(&local8);
panda$core$Bit $tmp531 = panda$core$Bit$init$builtin_bit($tmp530 != NULL);
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block81; else goto block82;
block81:;
// line 202
org$pandalanguage$pandac$Position $tmp533 = *(&local4);
panda$core$String* $tmp534 = *(&local5);
panda$core$String* $tmp535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s536, $tmp534);
panda$core$String* $tmp537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp535, &$s538);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp533, $tmp537);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
// unreffing REF($614:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
// unreffing REF($613:panda.core.String)
goto block82;
block82:;
org$pandalanguage$pandac$ASTNode* $tmp539 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
// unreffing expr
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp540 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
// unreffing rawExpr
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp541 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
// unreffing exprText
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp542 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
// unreffing text
*(&local5) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 206
panda$core$Bit $tmp543 = panda$core$Bit$init$builtin_bit(false);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block83; else goto block84;
block84:;
panda$core$Int64 $tmp545 = (panda$core$Int64) {206};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s546, $tmp545);
abort(); // unreachable
block83:;
goto block4;
block4:;
panda$core$Panda$unref$panda$core$Object$Q($tmp259);
// unreffing REF($39:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp547 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
// unreffing c
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
// unreffing REF($28:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 210
org$pandalanguage$pandac$Annotations* $tmp548 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp549 = *(&local0);
panda$collections$Array* $tmp550 = *(&local1);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp548, $tmp549, ((panda$collections$ListView*) $tmp550));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
// unreffing REF($665:org.pandalanguage.pandac.Annotations)
panda$core$Method* $tmp551 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
// unreffing checkExpression
*(&local2) = ((panda$core$Method*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
// unreffing REF($13:panda.core.Method)
panda$collections$Array* $tmp552 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp552));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp548;

}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ClassDecl* param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$Position local1;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$Annotations* local3 = NULL;
org$pandalanguage$pandac$FieldDecl$Kind local4;
org$pandalanguage$pandac$Variable$Kind local5;
org$pandalanguage$pandac$FixedArray* local6 = NULL;
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
panda$core$Bit $tmp553 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block1; else goto block3;
block1:;
// line 218
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp555 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 221
panda$core$Int64* $tmp556 = &param3->$rawValue;
panda$core$Int64 $tmp557 = *$tmp556;
panda$core$Int64 $tmp558 = (panda$core$Int64) {40};
panda$core$Bit $tmp559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp557, $tmp558);
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp561 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp562 = *$tmp561;
*(&local1) = $tmp562;
panda$core$String** $tmp563 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp564 = *$tmp563;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
panda$core$String* $tmp565 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
*(&local2) = $tmp564;
// line 223
panda$core$String* $tmp566 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
panda$core$String* $tmp567 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
*(&local0) = $tmp566;
panda$core$String* $tmp568 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 226
panda$core$Bit $tmp569 = panda$core$Bit$init$builtin_bit(false);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp571 = (panda$core$Int64) {226};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s572, $tmp571);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 230
org$pandalanguage$pandac$Annotations* $tmp573 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param4);
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
org$pandalanguage$pandac$Annotations* $tmp574 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
*(&local3) = $tmp573;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
// unreffing REF($61:org.pandalanguage.pandac.Annotations)
// line 231
// line 232
panda$core$Int64* $tmp575 = &param5->$rawValue;
panda$core$Int64 $tmp576 = *$tmp575;
panda$core$Int64 $tmp577 = (panda$core$Int64) {49};
panda$core$Bit $tmp578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp576, $tmp577);
bool $tmp579 = $tmp578.value;
if ($tmp579) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp580 = (org$pandalanguage$pandac$Position*) (param5->$data + 0);
org$pandalanguage$pandac$Position $tmp581 = *$tmp580;
org$pandalanguage$pandac$Variable$Kind* $tmp582 = (org$pandalanguage$pandac$Variable$Kind*) (param5->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp583 = *$tmp582;
*(&local5) = $tmp583;
org$pandalanguage$pandac$FixedArray** $tmp584 = (org$pandalanguage$pandac$FixedArray**) (param5->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp585 = *$tmp584;
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
org$pandalanguage$pandac$FixedArray* $tmp586 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
*(&local6) = $tmp585;
// line 234
org$pandalanguage$pandac$Variable$Kind $tmp587 = *(&local5);
panda$core$Int64 $tmp588 = $tmp587.$rawValue;
panda$core$Int64 $tmp589 = (panda$core$Int64) {0};
panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp588, $tmp589);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block13; else goto block14;
block13:;
// line 236
panda$core$Int64 $tmp592 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FieldDecl$Kind $tmp593 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp592);
*(&local4) = $tmp593;
goto block12;
block14:;
panda$core$Int64 $tmp594 = (panda$core$Int64) {1};
panda$core$Bit $tmp595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp588, $tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block15; else goto block16;
block15:;
// line 239
panda$core$Int64 $tmp597 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp598 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp597);
*(&local4) = $tmp598;
goto block12;
block16:;
panda$core$Int64 $tmp599 = (panda$core$Int64) {2};
panda$core$Bit $tmp600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp588, $tmp599);
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block17; else goto block18;
block17:;
// line 242
panda$core$Int64 $tmp602 = (panda$core$Int64) {2};
org$pandalanguage$pandac$FieldDecl$Kind $tmp603 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp602);
*(&local4) = $tmp603;
// line 243
org$pandalanguage$pandac$Annotations* $tmp604 = *(&local3);
panda$core$Int64* $tmp605 = &$tmp604->flags;
panda$core$Int64 $tmp606 = *$tmp605;
panda$core$Int64 $tmp607 = (panda$core$Int64) {16};
panda$core$Int64 $tmp608 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp606, $tmp607);
panda$core$Int64* $tmp609 = &$tmp604->flags;
*$tmp609 = $tmp608;
goto block12;
block18:;
panda$core$Int64 $tmp610 = (panda$core$Int64) {3};
panda$core$Bit $tmp611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp588, $tmp610);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block19; else goto block12;
block19:;
// line 246
panda$core$Int64 $tmp613 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp614 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp613);
*(&local4) = $tmp614;
goto block12;
block12:;
// line 249
org$pandalanguage$pandac$FixedArray* $tmp615 = *(&local6);
ITable* $tmp616 = ((panda$collections$Iterable*) $tmp615)->$class->itable;
while ($tmp616->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp616 = $tmp616->next;
}
$fn618 $tmp617 = $tmp616->methods[0];
panda$collections$Iterator* $tmp619 = $tmp617(((panda$collections$Iterable*) $tmp615));
goto block20;
block20:;
ITable* $tmp620 = $tmp619->$class->itable;
while ($tmp620->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp620 = $tmp620->next;
}
$fn622 $tmp621 = $tmp620->methods[0];
panda$core$Bit $tmp623 = $tmp621($tmp619);
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block22; else goto block21;
block21:;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp625 = $tmp619->$class->itable;
while ($tmp625->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp625 = $tmp625->next;
}
$fn627 $tmp626 = $tmp625->methods[1];
panda$core$Object* $tmp628 = $tmp626($tmp619);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp628)));
org$pandalanguage$pandac$ASTNode* $tmp629 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp629));
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) $tmp628);
// line 250
org$pandalanguage$pandac$ASTNode* $tmp630 = *(&local7);
panda$core$Int64* $tmp631 = &$tmp630->$rawValue;
panda$core$Int64 $tmp632 = *$tmp631;
panda$core$Int64 $tmp633 = (panda$core$Int64) {14};
panda$core$Bit $tmp634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp632, $tmp633);
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp636 = (org$pandalanguage$pandac$Position*) ($tmp630->$data + 0);
org$pandalanguage$pandac$Position $tmp637 = *$tmp636;
*(&local8) = $tmp637;
org$pandalanguage$pandac$ASTNode** $tmp638 = (org$pandalanguage$pandac$ASTNode**) ($tmp630->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp639 = *$tmp638;
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
org$pandalanguage$pandac$ASTNode* $tmp640 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp640));
*(&local9) = $tmp639;
org$pandalanguage$pandac$ASTNode** $tmp641 = (org$pandalanguage$pandac$ASTNode**) ($tmp630->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp642 = *$tmp641;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
org$pandalanguage$pandac$ASTNode* $tmp643 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp643));
*(&local10) = $tmp642;
// line 252
*(&local11) = ((panda$core$String*) NULL);
// line 253
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
// line 254
org$pandalanguage$pandac$ASTNode* $tmp644 = *(&local9);
panda$core$Int64* $tmp645 = &$tmp644->$rawValue;
panda$core$Int64 $tmp646 = *$tmp645;
panda$core$Int64 $tmp647 = (panda$core$Int64) {22};
panda$core$Bit $tmp648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp646, $tmp647);
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block27; else goto block28;
block27:;
org$pandalanguage$pandac$Position* $tmp650 = (org$pandalanguage$pandac$Position*) ($tmp644->$data + 0);
org$pandalanguage$pandac$Position $tmp651 = *$tmp650;
panda$core$String** $tmp652 = (panda$core$String**) ($tmp644->$data + 16);
panda$core$String* $tmp653 = *$tmp652;
*(&local13) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
panda$core$String* $tmp654 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
*(&local13) = $tmp653;
// line 256
panda$core$String* $tmp655 = *(&local13);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp655));
panda$core$String* $tmp656 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp656));
*(&local11) = $tmp655;
// line 257
org$pandalanguage$pandac$Type* $tmp657 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
org$pandalanguage$pandac$Type* $tmp658 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
*(&local12) = $tmp657;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
// unreffing REF($226:org.pandalanguage.pandac.Type)
panda$core$String* $tmp659 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
// unreffing id
*(&local13) = ((panda$core$String*) NULL);
goto block26;
block28:;
panda$core$Int64 $tmp660 = (panda$core$Int64) {46};
panda$core$Bit $tmp661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp646, $tmp660);
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block29; else goto block30;
block29:;
org$pandalanguage$pandac$Position* $tmp663 = (org$pandalanguage$pandac$Position*) ($tmp644->$data + 0);
org$pandalanguage$pandac$Position $tmp664 = *$tmp663;
panda$core$String** $tmp665 = (panda$core$String**) ($tmp644->$data + 16);
panda$core$String* $tmp666 = *$tmp665;
*(&local14) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
panda$core$String* $tmp667 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
*(&local14) = $tmp666;
org$pandalanguage$pandac$ASTNode** $tmp668 = (org$pandalanguage$pandac$ASTNode**) ($tmp644->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp669 = *$tmp668;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
org$pandalanguage$pandac$ASTNode* $tmp670 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
*(&local15) = $tmp669;
// line 260
panda$core$String* $tmp671 = *(&local14);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
panda$core$String* $tmp672 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
*(&local11) = $tmp671;
// line 261
org$pandalanguage$pandac$ASTNode* $tmp673 = *(&local15);
org$pandalanguage$pandac$Type* $tmp674 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp673);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
org$pandalanguage$pandac$Type* $tmp675 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
*(&local12) = $tmp674;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
// unreffing REF($277:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$ASTNode* $tmp676 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
// unreffing idType
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp677 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
// unreffing id
*(&local14) = ((panda$core$String*) NULL);
goto block26;
block30:;
// line 264
panda$core$Bit $tmp678 = panda$core$Bit$init$builtin_bit(false);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp680 = (panda$core$Int64) {264};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s681, $tmp680);
abort(); // unreachable
block31:;
goto block26;
block26:;
// line 267
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 268
org$pandalanguage$pandac$ASTNode* $tmp682 = *(&local10);
panda$core$Bit $tmp683 = panda$core$Bit$init$builtin_bit($tmp682 == NULL);
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block35; else goto block36;
block35:;
org$pandalanguage$pandac$Annotations* $tmp685 = *(&local3);
panda$core$Bit $tmp686 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp685);
*(&local18) = $tmp686;
goto block37;
block36:;
*(&local18) = $tmp683;
goto block37;
block37:;
panda$core$Bit $tmp687 = *(&local18);
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Type* $tmp689 = *(&local12);
org$pandalanguage$pandac$Type$Kind* $tmp690 = &$tmp689->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp691 = *$tmp690;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp692;
$tmp692 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp692->value = $tmp691;
panda$core$Int64 $tmp693 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp694 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp693);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp695;
$tmp695 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp695->value = $tmp694;
ITable* $tmp696 = ((panda$core$Equatable*) $tmp692)->$class->itable;
while ($tmp696->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp696 = $tmp696->next;
}
$fn698 $tmp697 = $tmp696->methods[0];
panda$core$Bit $tmp699 = $tmp697(((panda$core$Equatable*) $tmp692), ((panda$core$Equatable*) $tmp695));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp695)));
// unreffing REF($330:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp692)));
// unreffing REF($326:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local17) = $tmp699;
goto block40;
block39:;
*(&local17) = $tmp687;
goto block40;
block40:;
panda$core$Bit $tmp700 = *(&local17);
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block33; else goto block41;
block33:;
// line 270
org$pandalanguage$pandac$ASTNode* $tmp702 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp703 = (panda$core$Int64) {30};
org$pandalanguage$pandac$Position $tmp704 = *(&local8);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp702, $tmp703, $tmp704);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
org$pandalanguage$pandac$ASTNode* $tmp705 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp705));
*(&local16) = $tmp702;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
// unreffing REF($347:org.pandalanguage.pandac.ASTNode)
goto block34;
block41:;
// line 1
// line 273
org$pandalanguage$pandac$ASTNode* $tmp706 = *(&local10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp706));
org$pandalanguage$pandac$ASTNode* $tmp707 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
*(&local16) = $tmp706;
goto block34;
block34:;
// line 275
org$pandalanguage$pandac$FieldDecl* $tmp708 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$Position $tmp709 = *(&local8);
panda$core$String* $tmp710 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp711 = *(&local3);
org$pandalanguage$pandac$FieldDecl$Kind $tmp712 = *(&local4);
panda$core$String* $tmp713 = *(&local11);
org$pandalanguage$pandac$Type* $tmp714 = *(&local12);
org$pandalanguage$pandac$ASTNode* $tmp715 = *(&local16);
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp708, param1, $tmp709, $tmp710, $tmp711, $tmp712, $tmp713, $tmp714, $tmp715);
*(&local19) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
org$pandalanguage$pandac$FieldDecl* $tmp716 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp716));
*(&local19) = $tmp708;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
// unreffing REF($373:org.pandalanguage.pandac.FieldDecl)
// line 277
org$pandalanguage$pandac$SymbolTable** $tmp717 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp718 = *$tmp717;
org$pandalanguage$pandac$FieldDecl* $tmp719 = *(&local19);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp718, ((org$pandalanguage$pandac$Symbol*) $tmp719));
// line 278
panda$collections$Array** $tmp720 = &param1->fields;
panda$collections$Array* $tmp721 = *$tmp720;
org$pandalanguage$pandac$FieldDecl* $tmp722 = *(&local19);
panda$collections$Array$add$panda$collections$Array$T($tmp721, ((panda$core$Object*) $tmp722));
org$pandalanguage$pandac$FieldDecl* $tmp723 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
// unreffing field
*(&local19) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp724 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp724));
// unreffing value
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Type* $tmp725 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
// unreffing type
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp726 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp726));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp727 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp727));
// unreffing rawValue
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp728 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
// unreffing target
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block23;
block25:;
// line 281
panda$core$Bit $tmp729 = panda$core$Bit$init$builtin_bit(false);
bool $tmp730 = $tmp729.value;
if ($tmp730) goto block42; else goto block43;
block43:;
panda$core$Int64 $tmp731 = (panda$core$Int64) {281};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s732, $tmp731);
abort(); // unreachable
block42:;
goto block23;
block23:;
panda$core$Panda$unref$panda$core$Object$Q($tmp628);
// unreffing REF($157:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp733 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp733));
// unreffing decl
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block20;
block22:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
// unreffing REF($146:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$FixedArray* $tmp734 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
// unreffing decls
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block9;
block11:;
// line 287
panda$core$Bit $tmp735 = panda$core$Bit$init$builtin_bit(false);
bool $tmp736 = $tmp735.value;
if ($tmp736) goto block44; else goto block45;
block45:;
panda$core$Int64 $tmp737 = (panda$core$Int64) {287};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s738, $tmp737);
abort(); // unreachable
block44:;
goto block9;
block9:;
org$pandalanguage$pandac$Annotations* $tmp739 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp739));
// unreffing annotations
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp740 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
// unreffing doccomment
*(&local0) = ((panda$core$String*) NULL);
return;

}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ASTNode* param1) {

org$pandalanguage$pandac$FixedArray* local0 = NULL;
panda$core$Int64 local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$FixedArray* local6 = NULL;
panda$core$Int64 local7;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
org$pandalanguage$pandac$ASTNode* local9 = NULL;
org$pandalanguage$pandac$FixedArray* local10 = NULL;
panda$core$Int64 local11;
org$pandalanguage$pandac$ASTNode* local12 = NULL;
org$pandalanguage$pandac$ASTNode* local13 = NULL;
org$pandalanguage$pandac$ASTNode* local14 = NULL;
org$pandalanguage$pandac$FixedArray* local15 = NULL;
org$pandalanguage$pandac$ASTNode* local16 = NULL;
panda$core$Int64 local17;
org$pandalanguage$pandac$ASTNode* local18 = NULL;
org$pandalanguage$pandac$ASTNode* local19 = NULL;
org$pandalanguage$pandac$ASTNode* local20 = NULL;
org$pandalanguage$pandac$ASTNode* local21 = NULL;
org$pandalanguage$pandac$FixedArray* local22 = NULL;
panda$core$Int64 local23;
org$pandalanguage$pandac$ASTNode* local24 = NULL;
org$pandalanguage$pandac$ASTNode* local25 = NULL;
org$pandalanguage$pandac$FixedArray* local26 = NULL;
org$pandalanguage$pandac$ASTNode* local27 = NULL;
panda$core$Int64 local28;
org$pandalanguage$pandac$ASTNode* local29 = NULL;
org$pandalanguage$pandac$FixedArray* local30 = NULL;
panda$core$Int64 local31;
org$pandalanguage$pandac$ASTNode* local32 = NULL;
org$pandalanguage$pandac$ASTNode* local33 = NULL;
org$pandalanguage$pandac$FixedArray* local34 = NULL;
org$pandalanguage$pandac$FixedArray* local35 = NULL;
panda$core$Int64 local36;
org$pandalanguage$pandac$ASTNode* local37 = NULL;
org$pandalanguage$pandac$ASTNode* local38 = NULL;
org$pandalanguage$pandac$ASTNode* local39 = NULL;
org$pandalanguage$pandac$ASTNode* local40 = NULL;
org$pandalanguage$pandac$FixedArray* local41 = NULL;
panda$core$Int64 local42;
org$pandalanguage$pandac$ASTNode* local43 = NULL;
org$pandalanguage$pandac$FixedArray* local44 = NULL;
org$pandalanguage$pandac$FixedArray* local45 = NULL;
panda$core$Int64 local46;
org$pandalanguage$pandac$ASTNode* local47 = NULL;
org$pandalanguage$pandac$ASTNode* local48 = NULL;
org$pandalanguage$pandac$ASTNode* local49 = NULL;
org$pandalanguage$pandac$FixedArray* local50 = NULL;
panda$core$Int64 local51;
org$pandalanguage$pandac$ASTNode* local52 = NULL;
// line 294
panda$core$Int64* $tmp741 = &param1->$rawValue;
panda$core$Int64 $tmp742 = *$tmp741;
panda$core$Int64 $tmp743 = (panda$core$Int64) {1};
panda$core$Bit $tmp744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp743);
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp746 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp747 = *$tmp746;
org$pandalanguage$pandac$FixedArray** $tmp748 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp749 = *$tmp748;
*(&local0) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp749));
org$pandalanguage$pandac$FixedArray* $tmp750 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp750));
*(&local0) = $tmp749;
// line 296
panda$core$Int64 $tmp751 = (panda$core$Int64) {0};
*(&local1) = $tmp751;
// line 297
org$pandalanguage$pandac$FixedArray* $tmp752 = *(&local0);
ITable* $tmp753 = ((panda$collections$Iterable*) $tmp752)->$class->itable;
while ($tmp753->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp753 = $tmp753->next;
}
$fn755 $tmp754 = $tmp753->methods[0];
panda$collections$Iterator* $tmp756 = $tmp754(((panda$collections$Iterable*) $tmp752));
goto block4;
block4:;
ITable* $tmp757 = $tmp756->$class->itable;
while ($tmp757->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp757 = $tmp757->next;
}
$fn759 $tmp758 = $tmp757->methods[0];
panda$core$Bit $tmp760 = $tmp758($tmp756);
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block6; else goto block5;
block5:;
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp762 = $tmp756->$class->itable;
while ($tmp762->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp762 = $tmp762->next;
}
$fn764 $tmp763 = $tmp762->methods[1];
panda$core$Object* $tmp765 = $tmp763($tmp756);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp765)));
org$pandalanguage$pandac$ASTNode* $tmp766 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) $tmp765);
// line 298
panda$core$Int64 $tmp767 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp768 = *(&local2);
panda$core$Int64 $tmp769 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp768);
int64_t $tmp770 = $tmp767.value;
int64_t $tmp771 = $tmp769.value;
int64_t $tmp772 = $tmp770 + $tmp771;
panda$core$Int64 $tmp773 = (panda$core$Int64) {$tmp772};
*(&local1) = $tmp773;
panda$core$Panda$unref$panda$core$Object$Q($tmp765);
// unreffing REF($37:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp774 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp774));
// unreffing e
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp756));
// unreffing REF($26:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 300
panda$core$Int64 $tmp775 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp776 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp776));
// unreffing elements
*(&local0) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp775;
block3:;
panda$core$Int64 $tmp777 = (panda$core$Int64) {2};
panda$core$Bit $tmp778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp777);
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block7; else goto block8;
block7:;
org$pandalanguage$pandac$Position* $tmp780 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp781 = *$tmp780;
org$pandalanguage$pandac$ASTNode** $tmp782 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp783 = *$tmp782;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp783));
org$pandalanguage$pandac$ASTNode* $tmp784 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
*(&local3) = $tmp783;
org$pandalanguage$pandac$ASTNode** $tmp785 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp786 = *$tmp785;
// line 303
org$pandalanguage$pandac$ASTNode* $tmp787 = *(&local3);
panda$core$Int64 $tmp788 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp787);
org$pandalanguage$pandac$ASTNode* $tmp789 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp789));
// unreffing test
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp788;
block8:;
panda$core$Int64 $tmp790 = (panda$core$Int64) {3};
panda$core$Bit $tmp791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp790);
bool $tmp792 = $tmp791.value;
if ($tmp792) goto block9; else goto block10;
block9:;
// line 306
panda$core$Int64 $tmp793 = (panda$core$Int64) {0};
return $tmp793;
block10:;
panda$core$Int64 $tmp794 = (panda$core$Int64) {4};
panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp794);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block11; else goto block12;
block11:;
// line 309
panda$core$Int64 $tmp797 = (panda$core$Int64) {0};
return $tmp797;
block12:;
panda$core$Int64 $tmp798 = (panda$core$Int64) {5};
panda$core$Bit $tmp799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp798);
bool $tmp800 = $tmp799.value;
if ($tmp800) goto block13; else goto block14;
block13:;
org$pandalanguage$pandac$Position* $tmp801 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp802 = *$tmp801;
org$pandalanguage$pandac$ASTNode** $tmp803 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp804 = *$tmp803;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
org$pandalanguage$pandac$ASTNode* $tmp805 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp805));
*(&local4) = $tmp804;
org$pandalanguage$pandac$parser$Token$Kind* $tmp806 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp807 = *$tmp806;
org$pandalanguage$pandac$ASTNode** $tmp808 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp809 = *$tmp808;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp809));
org$pandalanguage$pandac$ASTNode* $tmp810 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
*(&local5) = $tmp809;
// line 312
panda$core$Int64 $tmp811 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode* $tmp812 = *(&local4);
panda$core$Int64 $tmp813 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp812);
int64_t $tmp814 = $tmp811.value;
int64_t $tmp815 = $tmp813.value;
int64_t $tmp816 = $tmp814 + $tmp815;
panda$core$Int64 $tmp817 = (panda$core$Int64) {$tmp816};
org$pandalanguage$pandac$ASTNode* $tmp818 = *(&local5);
panda$core$Int64 $tmp819 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp818);
int64_t $tmp820 = $tmp817.value;
int64_t $tmp821 = $tmp819.value;
int64_t $tmp822 = $tmp820 + $tmp821;
panda$core$Int64 $tmp823 = (panda$core$Int64) {$tmp822};
org$pandalanguage$pandac$ASTNode* $tmp824 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
// unreffing right
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp825 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp825));
// unreffing left
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp823;
block14:;
panda$core$Int64 $tmp826 = (panda$core$Int64) {6};
panda$core$Bit $tmp827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp826);
bool $tmp828 = $tmp827.value;
if ($tmp828) goto block15; else goto block16;
block15:;
// line 315
panda$core$Int64 $tmp829 = (panda$core$Int64) {1};
return $tmp829;
block16:;
panda$core$Int64 $tmp830 = (panda$core$Int64) {7};
panda$core$Bit $tmp831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp830);
bool $tmp832 = $tmp831.value;
if ($tmp832) goto block17; else goto block18;
block17:;
org$pandalanguage$pandac$Position* $tmp833 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp834 = *$tmp833;
org$pandalanguage$pandac$FixedArray** $tmp835 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp836 = *$tmp835;
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
org$pandalanguage$pandac$FixedArray* $tmp837 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp837));
*(&local6) = $tmp836;
// line 318
panda$core$Int64 $tmp838 = (panda$core$Int64) {0};
*(&local7) = $tmp838;
// line 319
org$pandalanguage$pandac$FixedArray* $tmp839 = *(&local6);
ITable* $tmp840 = ((panda$collections$Iterable*) $tmp839)->$class->itable;
while ($tmp840->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp840 = $tmp840->next;
}
$fn842 $tmp841 = $tmp840->methods[0];
panda$collections$Iterator* $tmp843 = $tmp841(((panda$collections$Iterable*) $tmp839));
goto block19;
block19:;
ITable* $tmp844 = $tmp843->$class->itable;
while ($tmp844->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp844 = $tmp844->next;
}
$fn846 $tmp845 = $tmp844->methods[0];
panda$core$Bit $tmp847 = $tmp845($tmp843);
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block21; else goto block20;
block20:;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp849 = $tmp843->$class->itable;
while ($tmp849->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp849 = $tmp849->next;
}
$fn851 $tmp850 = $tmp849->methods[1];
panda$core$Object* $tmp852 = $tmp850($tmp843);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp852)));
org$pandalanguage$pandac$ASTNode* $tmp853 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp853));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) $tmp852);
// line 320
panda$core$Int64 $tmp854 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp855 = *(&local8);
panda$core$Int64 $tmp856 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp855);
int64_t $tmp857 = $tmp854.value;
int64_t $tmp858 = $tmp856.value;
int64_t $tmp859 = $tmp857 + $tmp858;
panda$core$Int64 $tmp860 = (panda$core$Int64) {$tmp859};
*(&local7) = $tmp860;
panda$core$Panda$unref$panda$core$Object$Q($tmp852);
// unreffing REF($206:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp861 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
// unreffing s
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block19;
block21:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp843));
// unreffing REF($195:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 322
panda$core$Int64 $tmp862 = *(&local7);
org$pandalanguage$pandac$FixedArray* $tmp863 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp863));
// unreffing statements
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp862;
block18:;
panda$core$Int64 $tmp864 = (panda$core$Int64) {8};
panda$core$Bit $tmp865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp864);
bool $tmp866 = $tmp865.value;
if ($tmp866) goto block22; else goto block23;
block22:;
// line 325
panda$core$Int64 $tmp867 = (panda$core$Int64) {1};
return $tmp867;
block23:;
panda$core$Int64 $tmp868 = (panda$core$Int64) {9};
panda$core$Bit $tmp869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp868);
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp871 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp872 = *$tmp871;
org$pandalanguage$pandac$ASTNode** $tmp873 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp874 = *$tmp873;
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp874));
org$pandalanguage$pandac$ASTNode* $tmp875 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp875));
*(&local9) = $tmp874;
org$pandalanguage$pandac$FixedArray** $tmp876 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp877 = *$tmp876;
*(&local10) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp877));
org$pandalanguage$pandac$FixedArray* $tmp878 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp878));
*(&local10) = $tmp877;
// line 328
org$pandalanguage$pandac$ASTNode* $tmp879 = *(&local9);
panda$core$Int64 $tmp880 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp879);
*(&local11) = $tmp880;
// line 329
org$pandalanguage$pandac$FixedArray* $tmp881 = *(&local10);
ITable* $tmp882 = ((panda$collections$Iterable*) $tmp881)->$class->itable;
while ($tmp882->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp882 = $tmp882->next;
}
$fn884 $tmp883 = $tmp882->methods[0];
panda$collections$Iterator* $tmp885 = $tmp883(((panda$collections$Iterable*) $tmp881));
goto block26;
block26:;
ITable* $tmp886 = $tmp885->$class->itable;
while ($tmp886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp886 = $tmp886->next;
}
$fn888 $tmp887 = $tmp886->methods[0];
panda$core$Bit $tmp889 = $tmp887($tmp885);
bool $tmp890 = $tmp889.value;
if ($tmp890) goto block28; else goto block27;
block27:;
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp891 = $tmp885->$class->itable;
while ($tmp891->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp891 = $tmp891->next;
}
$fn893 $tmp892 = $tmp891->methods[1];
panda$core$Object* $tmp894 = $tmp892($tmp885);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp894)));
org$pandalanguage$pandac$ASTNode* $tmp895 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp895));
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) $tmp894);
// line 330
panda$core$Int64 $tmp896 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp897 = *(&local12);
panda$core$Int64 $tmp898 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp897);
int64_t $tmp899 = $tmp896.value;
int64_t $tmp900 = $tmp898.value;
int64_t $tmp901 = $tmp899 + $tmp900;
panda$core$Int64 $tmp902 = (panda$core$Int64) {$tmp901};
*(&local11) = $tmp902;
panda$core$Panda$unref$panda$core$Object$Q($tmp894);
// unreffing REF($294:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp903 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
// unreffing a
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block26;
block28:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp885));
// unreffing REF($283:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 332
panda$core$Int64 $tmp904 = *(&local11);
org$pandalanguage$pandac$FixedArray* $tmp905 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp905));
// unreffing args
*(&local10) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp906 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp906));
// unreffing target
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp904;
block25:;
panda$core$Int64 $tmp907 = (panda$core$Int64) {11};
panda$core$Bit $tmp908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp907);
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block29; else goto block30;
block29:;
org$pandalanguage$pandac$Position* $tmp910 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp911 = *$tmp910;
org$pandalanguage$pandac$ASTNode** $tmp912 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp913 = *$tmp912;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp913));
org$pandalanguage$pandac$ASTNode* $tmp914 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp914));
*(&local13) = $tmp913;
org$pandalanguage$pandac$ChoiceCase** $tmp915 = (org$pandalanguage$pandac$ChoiceCase**) (param1->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp916 = *$tmp915;
panda$core$Int64* $tmp917 = (panda$core$Int64*) (param1->$data + 32);
panda$core$Int64 $tmp918 = *$tmp917;
// line 335
org$pandalanguage$pandac$ASTNode* $tmp919 = *(&local13);
panda$core$Int64 $tmp920 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp919);
org$pandalanguage$pandac$ASTNode* $tmp921 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp921));
// unreffing base
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp920;
block30:;
panda$core$Int64 $tmp922 = (panda$core$Int64) {13};
panda$core$Bit $tmp923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp922);
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block31; else goto block32;
block31:;
// line 338
panda$core$Int64 $tmp925 = (panda$core$Int64) {1};
return $tmp925;
block32:;
panda$core$Int64 $tmp926 = (panda$core$Int64) {14};
panda$core$Bit $tmp927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp926);
bool $tmp928 = $tmp927.value;
if ($tmp928) goto block33; else goto block34;
block33:;
org$pandalanguage$pandac$Position* $tmp929 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp930 = *$tmp929;
org$pandalanguage$pandac$ASTNode** $tmp931 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp932 = *$tmp931;
org$pandalanguage$pandac$ASTNode** $tmp933 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp934 = *$tmp933;
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
org$pandalanguage$pandac$ASTNode* $tmp935 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
*(&local14) = $tmp934;
// line 341
org$pandalanguage$pandac$ASTNode* $tmp936 = *(&local14);
panda$core$Bit $tmp937 = panda$core$Bit$init$builtin_bit($tmp936 == NULL);
bool $tmp938 = $tmp937.value;
if ($tmp938) goto block35; else goto block36;
block35:;
// line 342
panda$core$Int64 $tmp939 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ASTNode* $tmp940 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
// unreffing value
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp939;
block36:;
// line 344
org$pandalanguage$pandac$ASTNode* $tmp941 = *(&local14);
panda$core$Int64 $tmp942 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp941);
org$pandalanguage$pandac$ASTNode* $tmp943 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
// unreffing value
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp942;
block34:;
panda$core$Int64 $tmp944 = (panda$core$Int64) {15};
panda$core$Bit $tmp945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp944);
bool $tmp946 = $tmp945.value;
if ($tmp946) goto block37; else goto block38;
block37:;
org$pandalanguage$pandac$Position* $tmp947 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp948 = *$tmp947;
panda$core$String** $tmp949 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp950 = *$tmp949;
org$pandalanguage$pandac$FixedArray** $tmp951 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp952 = *$tmp951;
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp952));
org$pandalanguage$pandac$FixedArray* $tmp953 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp953));
*(&local15) = $tmp952;
org$pandalanguage$pandac$ASTNode** $tmp954 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp955 = *$tmp954;
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp955));
org$pandalanguage$pandac$ASTNode* $tmp956 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp956));
*(&local16) = $tmp955;
// line 347
org$pandalanguage$pandac$ASTNode* $tmp957 = *(&local16);
panda$core$Int64 $tmp958 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp957);
*(&local17) = $tmp958;
// line 348
org$pandalanguage$pandac$FixedArray* $tmp959 = *(&local15);
ITable* $tmp960 = ((panda$collections$Iterable*) $tmp959)->$class->itable;
while ($tmp960->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp960 = $tmp960->next;
}
$fn962 $tmp961 = $tmp960->methods[0];
panda$collections$Iterator* $tmp963 = $tmp961(((panda$collections$Iterable*) $tmp959));
goto block39;
block39:;
ITable* $tmp964 = $tmp963->$class->itable;
while ($tmp964->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp964 = $tmp964->next;
}
$fn966 $tmp965 = $tmp964->methods[0];
panda$core$Bit $tmp967 = $tmp965($tmp963);
bool $tmp968 = $tmp967.value;
if ($tmp968) goto block41; else goto block40;
block40:;
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp969 = $tmp963->$class->itable;
while ($tmp969->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp969 = $tmp969->next;
}
$fn971 $tmp970 = $tmp969->methods[1];
panda$core$Object* $tmp972 = $tmp970($tmp963);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp972)));
org$pandalanguage$pandac$ASTNode* $tmp973 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp973));
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) $tmp972);
// line 349
panda$core$Int64 $tmp974 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp975 = *(&local18);
panda$core$Int64 $tmp976 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp975);
int64_t $tmp977 = $tmp974.value;
int64_t $tmp978 = $tmp976.value;
int64_t $tmp979 = $tmp977 + $tmp978;
panda$core$Int64 $tmp980 = (panda$core$Int64) {$tmp979};
*(&local17) = $tmp980;
panda$core$Panda$unref$panda$core$Object$Q($tmp972);
// unreffing REF($458:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp981 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp981));
// unreffing s
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block39;
block41:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp963));
// unreffing REF($447:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 351
panda$core$Int64 $tmp982 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp983 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp983));
// unreffing test
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp984 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
// unreffing statements
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp982;
block38:;
panda$core$Int64 $tmp985 = (panda$core$Int64) {16};
panda$core$Bit $tmp986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp985);
bool $tmp987 = $tmp986.value;
if ($tmp987) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp988 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp989 = *$tmp988;
org$pandalanguage$pandac$ASTNode** $tmp990 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp991 = *$tmp990;
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp991));
org$pandalanguage$pandac$ASTNode* $tmp992 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
*(&local19) = $tmp991;
panda$core$String** $tmp993 = (panda$core$String**) (param1->$data + 24);
panda$core$String* $tmp994 = *$tmp993;
// line 354
org$pandalanguage$pandac$ASTNode* $tmp995 = *(&local19);
panda$core$Int64 $tmp996 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp995);
org$pandalanguage$pandac$ASTNode* $tmp997 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
// unreffing base
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp996;
block43:;
panda$core$Int64 $tmp998 = (panda$core$Int64) {17};
panda$core$Bit $tmp999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp998);
bool $tmp1000 = $tmp999.value;
if ($tmp1000) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp1001 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1002 = *$tmp1001;
org$pandalanguage$pandac$ASTNode** $tmp1003 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1004 = *$tmp1003;
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1004));
org$pandalanguage$pandac$ASTNode* $tmp1005 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1005));
*(&local20) = $tmp1004;
panda$core$String** $tmp1006 = (panda$core$String**) (param1->$data + 24);
panda$core$String* $tmp1007 = *$tmp1006;
org$pandalanguage$pandac$FixedArray** $tmp1008 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp1009 = *$tmp1008;
// line 357
org$pandalanguage$pandac$ASTNode* $tmp1010 = *(&local20);
panda$core$Int64 $tmp1011 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1010);
org$pandalanguage$pandac$ASTNode* $tmp1012 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1012));
// unreffing base
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1011;
block45:;
panda$core$Int64 $tmp1013 = (panda$core$Int64) {20};
panda$core$Bit $tmp1014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1013);
bool $tmp1015 = $tmp1014.value;
if ($tmp1015) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp1016 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1017 = *$tmp1016;
panda$core$String** $tmp1018 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp1019 = *$tmp1018;
org$pandalanguage$pandac$ASTNode** $tmp1020 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1021 = *$tmp1020;
org$pandalanguage$pandac$ASTNode** $tmp1022 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1023 = *$tmp1022;
*(&local21) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1023));
org$pandalanguage$pandac$ASTNode* $tmp1024 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1024));
*(&local21) = $tmp1023;
org$pandalanguage$pandac$FixedArray** $tmp1025 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 40);
org$pandalanguage$pandac$FixedArray* $tmp1026 = *$tmp1025;
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1026));
org$pandalanguage$pandac$FixedArray* $tmp1027 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
*(&local22) = $tmp1026;
// line 360
org$pandalanguage$pandac$ASTNode* $tmp1028 = *(&local21);
panda$core$Int64 $tmp1029 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1028);
*(&local23) = $tmp1029;
// line 361
org$pandalanguage$pandac$FixedArray* $tmp1030 = *(&local22);
ITable* $tmp1031 = ((panda$collections$Iterable*) $tmp1030)->$class->itable;
while ($tmp1031->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1031 = $tmp1031->next;
}
$fn1033 $tmp1032 = $tmp1031->methods[0];
panda$collections$Iterator* $tmp1034 = $tmp1032(((panda$collections$Iterable*) $tmp1030));
goto block48;
block48:;
ITable* $tmp1035 = $tmp1034->$class->itable;
while ($tmp1035->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1035 = $tmp1035->next;
}
$fn1037 $tmp1036 = $tmp1035->methods[0];
panda$core$Bit $tmp1038 = $tmp1036($tmp1034);
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block50; else goto block49;
block49:;
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1040 = $tmp1034->$class->itable;
while ($tmp1040->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1040 = $tmp1040->next;
}
$fn1042 $tmp1041 = $tmp1040->methods[1];
panda$core$Object* $tmp1043 = $tmp1041($tmp1034);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1043)));
org$pandalanguage$pandac$ASTNode* $tmp1044 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1044));
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) $tmp1043);
// line 362
panda$core$Int64 $tmp1045 = *(&local23);
org$pandalanguage$pandac$ASTNode* $tmp1046 = *(&local24);
panda$core$Int64 $tmp1047 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1046);
int64_t $tmp1048 = $tmp1045.value;
int64_t $tmp1049 = $tmp1047.value;
int64_t $tmp1050 = $tmp1048 + $tmp1049;
panda$core$Int64 $tmp1051 = (panda$core$Int64) {$tmp1050};
*(&local23) = $tmp1051;
panda$core$Panda$unref$panda$core$Object$Q($tmp1043);
// unreffing REF($602:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1052 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
// unreffing s
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block48;
block50:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1034));
// unreffing REF($591:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 364
panda$core$Int64 $tmp1053 = *(&local23);
org$pandalanguage$pandac$FixedArray* $tmp1054 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1054));
// unreffing statements
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1055 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1055));
// unreffing list
*(&local21) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1053;
block47:;
panda$core$Int64 $tmp1056 = (panda$core$Int64) {21};
panda$core$Bit $tmp1057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1056);
bool $tmp1058 = $tmp1057.value;
if ($tmp1058) goto block51; else goto block52;
block51:;
// line 367
panda$core$Int64 $tmp1059 = (panda$core$Int64) {0};
return $tmp1059;
block52:;
panda$core$Int64 $tmp1060 = (panda$core$Int64) {22};
panda$core$Bit $tmp1061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1060);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block53; else goto block54;
block53:;
// line 370
panda$core$Int64 $tmp1063 = (panda$core$Int64) {1};
return $tmp1063;
block54:;
panda$core$Int64 $tmp1064 = (panda$core$Int64) {23};
panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1064);
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block55; else goto block56;
block55:;
org$pandalanguage$pandac$Position* $tmp1067 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1068 = *$tmp1067;
org$pandalanguage$pandac$ASTNode** $tmp1069 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1070 = *$tmp1069;
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1070));
org$pandalanguage$pandac$ASTNode* $tmp1071 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1071));
*(&local25) = $tmp1070;
org$pandalanguage$pandac$FixedArray** $tmp1072 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1073 = *$tmp1072;
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1073));
org$pandalanguage$pandac$FixedArray* $tmp1074 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1074));
*(&local26) = $tmp1073;
org$pandalanguage$pandac$ASTNode** $tmp1075 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1076 = *$tmp1075;
*(&local27) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1076));
org$pandalanguage$pandac$ASTNode* $tmp1077 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1077));
*(&local27) = $tmp1076;
// line 373
org$pandalanguage$pandac$ASTNode* $tmp1078 = *(&local25);
panda$core$Int64 $tmp1079 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1078);
*(&local28) = $tmp1079;
// line 374
org$pandalanguage$pandac$FixedArray* $tmp1080 = *(&local26);
ITable* $tmp1081 = ((panda$collections$Iterable*) $tmp1080)->$class->itable;
while ($tmp1081->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1081 = $tmp1081->next;
}
$fn1083 $tmp1082 = $tmp1081->methods[0];
panda$collections$Iterator* $tmp1084 = $tmp1082(((panda$collections$Iterable*) $tmp1080));
goto block57;
block57:;
ITable* $tmp1085 = $tmp1084->$class->itable;
while ($tmp1085->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1085 = $tmp1085->next;
}
$fn1087 $tmp1086 = $tmp1085->methods[0];
panda$core$Bit $tmp1088 = $tmp1086($tmp1084);
bool $tmp1089 = $tmp1088.value;
if ($tmp1089) goto block59; else goto block58;
block58:;
*(&local29) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1090 = $tmp1084->$class->itable;
while ($tmp1090->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1090 = $tmp1090->next;
}
$fn1092 $tmp1091 = $tmp1090->methods[1];
panda$core$Object* $tmp1093 = $tmp1091($tmp1084);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1093)));
org$pandalanguage$pandac$ASTNode* $tmp1094 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1094));
*(&local29) = ((org$pandalanguage$pandac$ASTNode*) $tmp1093);
// line 375
panda$core$Int64 $tmp1095 = *(&local28);
org$pandalanguage$pandac$ASTNode* $tmp1096 = *(&local29);
panda$core$Int64 $tmp1097 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1096);
int64_t $tmp1098 = $tmp1095.value;
int64_t $tmp1099 = $tmp1097.value;
int64_t $tmp1100 = $tmp1098 + $tmp1099;
panda$core$Int64 $tmp1101 = (panda$core$Int64) {$tmp1100};
*(&local28) = $tmp1101;
panda$core$Panda$unref$panda$core$Object$Q($tmp1093);
// unreffing REF($711:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1102 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1102));
// unreffing s
*(&local29) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block57;
block59:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1084));
// unreffing REF($700:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 377
org$pandalanguage$pandac$ASTNode* $tmp1103 = *(&local27);
panda$core$Bit $tmp1104 = panda$core$Bit$init$builtin_bit($tmp1103 != NULL);
bool $tmp1105 = $tmp1104.value;
if ($tmp1105) goto block60; else goto block61;
block60:;
// line 378
panda$core$Int64 $tmp1106 = *(&local28);
org$pandalanguage$pandac$ASTNode* $tmp1107 = *(&local27);
panda$core$Int64 $tmp1108 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1107);
int64_t $tmp1109 = $tmp1106.value;
int64_t $tmp1110 = $tmp1108.value;
int64_t $tmp1111 = $tmp1109 + $tmp1110;
panda$core$Int64 $tmp1112 = (panda$core$Int64) {$tmp1111};
*(&local28) = $tmp1112;
goto block61;
block61:;
// line 380
panda$core$Int64 $tmp1113 = *(&local28);
org$pandalanguage$pandac$ASTNode* $tmp1114 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1114));
// unreffing ifFalse
*(&local27) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1115 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1115));
// unreffing ifTrue
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1116 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1116));
// unreffing test
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1113;
block56:;
panda$core$Int64 $tmp1117 = (panda$core$Int64) {24};
panda$core$Bit $tmp1118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1117);
bool $tmp1119 = $tmp1118.value;
if ($tmp1119) goto block62; else goto block63;
block62:;
// line 383
panda$core$Int64 $tmp1120 = (panda$core$Int64) {1};
return $tmp1120;
block63:;
panda$core$Int64 $tmp1121 = (panda$core$Int64) {26};
panda$core$Bit $tmp1122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1121);
bool $tmp1123 = $tmp1122.value;
if ($tmp1123) goto block64; else goto block65;
block64:;
org$pandalanguage$pandac$Position* $tmp1124 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1125 = *$tmp1124;
panda$core$String** $tmp1126 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp1127 = *$tmp1126;
org$pandalanguage$pandac$FixedArray** $tmp1128 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1129 = *$tmp1128;
*(&local30) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1129));
org$pandalanguage$pandac$FixedArray* $tmp1130 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
*(&local30) = $tmp1129;
// line 386
panda$core$Int64 $tmp1131 = (panda$core$Int64) {0};
*(&local31) = $tmp1131;
// line 387
org$pandalanguage$pandac$FixedArray* $tmp1132 = *(&local30);
ITable* $tmp1133 = ((panda$collections$Iterable*) $tmp1132)->$class->itable;
while ($tmp1133->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1133 = $tmp1133->next;
}
$fn1135 $tmp1134 = $tmp1133->methods[0];
panda$collections$Iterator* $tmp1136 = $tmp1134(((panda$collections$Iterable*) $tmp1132));
goto block66;
block66:;
ITable* $tmp1137 = $tmp1136->$class->itable;
while ($tmp1137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1137 = $tmp1137->next;
}
$fn1139 $tmp1138 = $tmp1137->methods[0];
panda$core$Bit $tmp1140 = $tmp1138($tmp1136);
bool $tmp1141 = $tmp1140.value;
if ($tmp1141) goto block68; else goto block67;
block67:;
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1142 = $tmp1136->$class->itable;
while ($tmp1142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1142 = $tmp1142->next;
}
$fn1144 $tmp1143 = $tmp1142->methods[1];
panda$core$Object* $tmp1145 = $tmp1143($tmp1136);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1145)));
org$pandalanguage$pandac$ASTNode* $tmp1146 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) $tmp1145);
// line 388
panda$core$Int64 $tmp1147 = *(&local31);
org$pandalanguage$pandac$ASTNode* $tmp1148 = *(&local32);
panda$core$Int64 $tmp1149 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1148);
int64_t $tmp1150 = $tmp1147.value;
int64_t $tmp1151 = $tmp1149.value;
int64_t $tmp1152 = $tmp1150 + $tmp1151;
panda$core$Int64 $tmp1153 = (panda$core$Int64) {$tmp1152};
*(&local31) = $tmp1153;
panda$core$Panda$unref$panda$core$Object$Q($tmp1145);
// unreffing REF($818:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1154 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
// unreffing s
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block66;
block68:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1136));
// unreffing REF($807:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 390
panda$core$Int64 $tmp1155 = *(&local31);
org$pandalanguage$pandac$FixedArray* $tmp1156 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1156));
// unreffing statements
*(&local30) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1155;
block65:;
panda$core$Int64 $tmp1157 = (panda$core$Int64) {27};
panda$core$Bit $tmp1158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1157);
bool $tmp1159 = $tmp1158.value;
if ($tmp1159) goto block69; else goto block70;
block69:;
org$pandalanguage$pandac$Position* $tmp1160 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1161 = *$tmp1160;
org$pandalanguage$pandac$ASTNode** $tmp1162 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1163 = *$tmp1162;
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1163));
org$pandalanguage$pandac$ASTNode* $tmp1164 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1164));
*(&local33) = $tmp1163;
org$pandalanguage$pandac$FixedArray** $tmp1165 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1166 = *$tmp1165;
*(&local34) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
org$pandalanguage$pandac$FixedArray* $tmp1167 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
*(&local34) = $tmp1166;
org$pandalanguage$pandac$FixedArray** $tmp1168 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp1169 = *$tmp1168;
*(&local35) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
org$pandalanguage$pandac$FixedArray* $tmp1170 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
*(&local35) = $tmp1169;
// line 393
org$pandalanguage$pandac$ASTNode* $tmp1171 = *(&local33);
panda$core$Int64 $tmp1172 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1171);
*(&local36) = $tmp1172;
// line 394
org$pandalanguage$pandac$FixedArray* $tmp1173 = *(&local34);
ITable* $tmp1174 = ((panda$collections$Iterable*) $tmp1173)->$class->itable;
while ($tmp1174->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1174 = $tmp1174->next;
}
$fn1176 $tmp1175 = $tmp1174->methods[0];
panda$collections$Iterator* $tmp1177 = $tmp1175(((panda$collections$Iterable*) $tmp1173));
goto block71;
block71:;
ITable* $tmp1178 = $tmp1177->$class->itable;
while ($tmp1178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1178 = $tmp1178->next;
}
$fn1180 $tmp1179 = $tmp1178->methods[0];
panda$core$Bit $tmp1181 = $tmp1179($tmp1177);
bool $tmp1182 = $tmp1181.value;
if ($tmp1182) goto block73; else goto block72;
block72:;
*(&local37) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1183 = $tmp1177->$class->itable;
while ($tmp1183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1183 = $tmp1183->next;
}
$fn1185 $tmp1184 = $tmp1183->methods[1];
panda$core$Object* $tmp1186 = $tmp1184($tmp1177);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1186)));
org$pandalanguage$pandac$ASTNode* $tmp1187 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1187));
*(&local37) = ((org$pandalanguage$pandac$ASTNode*) $tmp1186);
// line 395
panda$core$Int64 $tmp1188 = *(&local36);
org$pandalanguage$pandac$ASTNode* $tmp1189 = *(&local37);
panda$core$Int64 $tmp1190 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1189);
int64_t $tmp1191 = $tmp1188.value;
int64_t $tmp1192 = $tmp1190.value;
int64_t $tmp1193 = $tmp1191 + $tmp1192;
panda$core$Int64 $tmp1194 = (panda$core$Int64) {$tmp1193};
*(&local36) = $tmp1194;
panda$core$Panda$unref$panda$core$Object$Q($tmp1186);
// unreffing REF($908:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1195 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
// unreffing w
*(&local37) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block71;
block73:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1177));
// unreffing REF($897:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 397
org$pandalanguage$pandac$FixedArray* $tmp1196 = *(&local35);
panda$core$Bit $tmp1197 = panda$core$Bit$init$builtin_bit($tmp1196 != NULL);
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block74; else goto block75;
block74:;
// line 398
org$pandalanguage$pandac$FixedArray* $tmp1199 = *(&local35);
ITable* $tmp1200 = ((panda$collections$Iterable*) $tmp1199)->$class->itable;
while ($tmp1200->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1200 = $tmp1200->next;
}
$fn1202 $tmp1201 = $tmp1200->methods[0];
panda$collections$Iterator* $tmp1203 = $tmp1201(((panda$collections$Iterable*) $tmp1199));
goto block76;
block76:;
ITable* $tmp1204 = $tmp1203->$class->itable;
while ($tmp1204->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1204 = $tmp1204->next;
}
$fn1206 $tmp1205 = $tmp1204->methods[0];
panda$core$Bit $tmp1207 = $tmp1205($tmp1203);
bool $tmp1208 = $tmp1207.value;
if ($tmp1208) goto block78; else goto block77;
block77:;
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1209 = $tmp1203->$class->itable;
while ($tmp1209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1209 = $tmp1209->next;
}
$fn1211 $tmp1210 = $tmp1209->methods[1];
panda$core$Object* $tmp1212 = $tmp1210($tmp1203);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1212)));
org$pandalanguage$pandac$ASTNode* $tmp1213 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1213));
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) $tmp1212);
// line 399
panda$core$Int64 $tmp1214 = *(&local36);
org$pandalanguage$pandac$ASTNode* $tmp1215 = *(&local38);
panda$core$Int64 $tmp1216 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1215);
int64_t $tmp1217 = $tmp1214.value;
int64_t $tmp1218 = $tmp1216.value;
int64_t $tmp1219 = $tmp1217 + $tmp1218;
panda$core$Int64 $tmp1220 = (panda$core$Int64) {$tmp1219};
*(&local36) = $tmp1220;
panda$core$Panda$unref$panda$core$Object$Q($tmp1212);
// unreffing REF($959:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1221 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1221));
// unreffing s
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block76;
block78:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1203));
// unreffing REF($948:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block75;
block75:;
// line 402
panda$core$Int64 $tmp1222 = *(&local36);
org$pandalanguage$pandac$FixedArray* $tmp1223 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1223));
// unreffing other
*(&local35) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1224 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1224));
// unreffing whens
*(&local34) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1225 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1225));
// unreffing value
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1222;
block70:;
panda$core$Int64 $tmp1226 = (panda$core$Int64) {28};
panda$core$Bit $tmp1227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1226);
bool $tmp1228 = $tmp1227.value;
if ($tmp1228) goto block79; else goto block80;
block79:;
// line 405
panda$core$Int64 $tmp1229 = (panda$core$Int64) {10};
return $tmp1229;
block80:;
panda$core$Int64 $tmp1230 = (panda$core$Int64) {30};
panda$core$Bit $tmp1231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1230);
bool $tmp1232 = $tmp1231.value;
if ($tmp1232) goto block81; else goto block82;
block81:;
// line 408
panda$core$Int64 $tmp1233 = (panda$core$Int64) {1};
return $tmp1233;
block82:;
panda$core$Int64 $tmp1234 = (panda$core$Int64) {31};
panda$core$Bit $tmp1235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1234);
bool $tmp1236 = $tmp1235.value;
if ($tmp1236) goto block83; else goto block84;
block83:;
// line 411
panda$core$Int64 $tmp1237 = (panda$core$Int64) {0};
return $tmp1237;
block84:;
panda$core$Int64 $tmp1238 = (panda$core$Int64) {34};
panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1238);
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block85; else goto block86;
block85:;
org$pandalanguage$pandac$Position* $tmp1241 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1242 = *$tmp1241;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1243 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1244 = *$tmp1243;
org$pandalanguage$pandac$ASTNode** $tmp1245 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1246 = *$tmp1245;
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1246));
org$pandalanguage$pandac$ASTNode* $tmp1247 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1247));
*(&local39) = $tmp1246;
// line 414
panda$core$Int64 $tmp1248 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode* $tmp1249 = *(&local39);
panda$core$Int64 $tmp1250 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1249);
int64_t $tmp1251 = $tmp1248.value;
int64_t $tmp1252 = $tmp1250.value;
int64_t $tmp1253 = $tmp1251 + $tmp1252;
panda$core$Int64 $tmp1254 = (panda$core$Int64) {$tmp1253};
org$pandalanguage$pandac$ASTNode* $tmp1255 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1255));
// unreffing base
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1254;
block86:;
panda$core$Int64 $tmp1256 = (panda$core$Int64) {35};
panda$core$Bit $tmp1257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1256);
bool $tmp1258 = $tmp1257.value;
if ($tmp1258) goto block87; else goto block88;
block87:;
// line 417
panda$core$Int64 $tmp1259 = (panda$core$Int64) {1};
return $tmp1259;
block88:;
panda$core$Int64 $tmp1260 = (panda$core$Int64) {36};
panda$core$Bit $tmp1261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1260);
bool $tmp1262 = $tmp1261.value;
if ($tmp1262) goto block89; else goto block90;
block89:;
// line 420
panda$core$Int64 $tmp1263 = (panda$core$Int64) {1};
return $tmp1263;
block90:;
panda$core$Int64 $tmp1264 = (panda$core$Int64) {37};
panda$core$Bit $tmp1265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1264);
bool $tmp1266 = $tmp1265.value;
if ($tmp1266) goto block91; else goto block92;
block91:;
// line 423
panda$core$Int64 $tmp1267 = (panda$core$Int64) {1};
return $tmp1267;
block92:;
panda$core$Int64 $tmp1268 = (panda$core$Int64) {38};
panda$core$Bit $tmp1269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1268);
bool $tmp1270 = $tmp1269.value;
if ($tmp1270) goto block93; else goto block94;
block93:;
org$pandalanguage$pandac$Position* $tmp1271 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1272 = *$tmp1271;
org$pandalanguage$pandac$ASTNode** $tmp1273 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1274 = *$tmp1273;
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1274));
org$pandalanguage$pandac$ASTNode* $tmp1275 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1275));
*(&local40) = $tmp1274;
// line 426
org$pandalanguage$pandac$ASTNode* $tmp1276 = *(&local40);
panda$core$Bit $tmp1277 = panda$core$Bit$init$builtin_bit($tmp1276 == NULL);
bool $tmp1278 = $tmp1277.value;
if ($tmp1278) goto block95; else goto block96;
block95:;
// line 427
panda$core$Int64 $tmp1279 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ASTNode* $tmp1280 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1280));
// unreffing value
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1279;
block96:;
// line 429
org$pandalanguage$pandac$ASTNode* $tmp1281 = *(&local40);
panda$core$Int64 $tmp1282 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1281);
org$pandalanguage$pandac$ASTNode* $tmp1283 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1283));
// unreffing value
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1282;
block94:;
panda$core$Int64 $tmp1284 = (panda$core$Int64) {39};
panda$core$Bit $tmp1285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1284);
bool $tmp1286 = $tmp1285.value;
if ($tmp1286) goto block97; else goto block98;
block97:;
// line 432
panda$core$Int64 $tmp1287 = (panda$core$Int64) {1};
return $tmp1287;
block98:;
panda$core$Int64 $tmp1288 = (panda$core$Int64) {40};
panda$core$Bit $tmp1289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1288);
bool $tmp1290 = $tmp1289.value;
if ($tmp1290) goto block99; else goto block100;
block99:;
// line 435
panda$core$Int64 $tmp1291 = (panda$core$Int64) {1};
return $tmp1291;
block100:;
panda$core$Int64 $tmp1292 = (panda$core$Int64) {41};
panda$core$Bit $tmp1293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1292);
bool $tmp1294 = $tmp1293.value;
if ($tmp1294) goto block101; else goto block102;
block101:;
// line 438
panda$core$Int64 $tmp1295 = (panda$core$Int64) {1};
return $tmp1295;
block102:;
panda$core$Int64 $tmp1296 = (panda$core$Int64) {44};
panda$core$Bit $tmp1297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1296);
bool $tmp1298 = $tmp1297.value;
if ($tmp1298) goto block103; else goto block104;
block103:;
// line 441
panda$core$Int64 $tmp1299 = (panda$core$Int64) {0};
return $tmp1299;
block104:;
panda$core$Int64 $tmp1300 = (panda$core$Int64) {45};
panda$core$Bit $tmp1301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1300);
bool $tmp1302 = $tmp1301.value;
if ($tmp1302) goto block105; else goto block106;
block105:;
// line 444
panda$core$Int64 $tmp1303 = (panda$core$Int64) {10};
return $tmp1303;
block106:;
panda$core$Int64 $tmp1304 = (panda$core$Int64) {47};
panda$core$Bit $tmp1305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1304);
bool $tmp1306 = $tmp1305.value;
if ($tmp1306) goto block107; else goto block108;
block107:;
// line 447
panda$core$Int64 $tmp1307 = (panda$core$Int64) {10};
return $tmp1307;
block108:;
panda$core$Int64 $tmp1308 = (panda$core$Int64) {49};
panda$core$Bit $tmp1309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1308);
bool $tmp1310 = $tmp1309.value;
if ($tmp1310) goto block109; else goto block110;
block109:;
org$pandalanguage$pandac$Position* $tmp1311 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1312 = *$tmp1311;
org$pandalanguage$pandac$Variable$Kind* $tmp1313 = (org$pandalanguage$pandac$Variable$Kind*) (param1->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp1314 = *$tmp1313;
org$pandalanguage$pandac$FixedArray** $tmp1315 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1316 = *$tmp1315;
*(&local41) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1316));
org$pandalanguage$pandac$FixedArray* $tmp1317 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1317));
*(&local41) = $tmp1316;
// line 450
panda$core$Int64 $tmp1318 = (panda$core$Int64) {0};
*(&local42) = $tmp1318;
// line 451
org$pandalanguage$pandac$FixedArray* $tmp1319 = *(&local41);
ITable* $tmp1320 = ((panda$collections$Iterable*) $tmp1319)->$class->itable;
while ($tmp1320->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1320 = $tmp1320->next;
}
$fn1322 $tmp1321 = $tmp1320->methods[0];
panda$collections$Iterator* $tmp1323 = $tmp1321(((panda$collections$Iterable*) $tmp1319));
goto block111;
block111:;
ITable* $tmp1324 = $tmp1323->$class->itable;
while ($tmp1324->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1324 = $tmp1324->next;
}
$fn1326 $tmp1325 = $tmp1324->methods[0];
panda$core$Bit $tmp1327 = $tmp1325($tmp1323);
bool $tmp1328 = $tmp1327.value;
if ($tmp1328) goto block113; else goto block112;
block112:;
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1329 = $tmp1323->$class->itable;
while ($tmp1329->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1329 = $tmp1329->next;
}
$fn1331 $tmp1330 = $tmp1329->methods[1];
panda$core$Object* $tmp1332 = $tmp1330($tmp1323);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1332)));
org$pandalanguage$pandac$ASTNode* $tmp1333 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1333));
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) $tmp1332);
// line 452
panda$core$Int64 $tmp1334 = *(&local42);
org$pandalanguage$pandac$ASTNode* $tmp1335 = *(&local43);
panda$core$Int64 $tmp1336 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1335);
int64_t $tmp1337 = $tmp1334.value;
int64_t $tmp1338 = $tmp1336.value;
int64_t $tmp1339 = $tmp1337 + $tmp1338;
panda$core$Int64 $tmp1340 = (panda$core$Int64) {$tmp1339};
*(&local42) = $tmp1340;
panda$core$Panda$unref$panda$core$Object$Q($tmp1332);
// unreffing REF($1197:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1341 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1341));
// unreffing decl
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block111;
block113:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1323));
// unreffing REF($1186:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 454
panda$core$Int64 $tmp1342 = *(&local42);
org$pandalanguage$pandac$FixedArray* $tmp1343 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1343));
// unreffing decls
*(&local41) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1342;
block110:;
panda$core$Int64 $tmp1344 = (panda$core$Int64) {50};
panda$core$Bit $tmp1345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1344);
bool $tmp1346 = $tmp1345.value;
if ($tmp1346) goto block114; else goto block115;
block114:;
org$pandalanguage$pandac$Position* $tmp1347 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1348 = *$tmp1347;
org$pandalanguage$pandac$FixedArray** $tmp1349 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp1350 = *$tmp1349;
*(&local44) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1350));
org$pandalanguage$pandac$FixedArray* $tmp1351 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1351));
*(&local44) = $tmp1350;
org$pandalanguage$pandac$FixedArray** $tmp1352 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1353 = *$tmp1352;
*(&local45) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1353));
org$pandalanguage$pandac$FixedArray* $tmp1354 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1354));
*(&local45) = $tmp1353;
// line 457
panda$core$Int64 $tmp1355 = (panda$core$Int64) {0};
*(&local46) = $tmp1355;
// line 458
org$pandalanguage$pandac$FixedArray* $tmp1356 = *(&local44);
ITable* $tmp1357 = ((panda$collections$Iterable*) $tmp1356)->$class->itable;
while ($tmp1357->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1357 = $tmp1357->next;
}
$fn1359 $tmp1358 = $tmp1357->methods[0];
panda$collections$Iterator* $tmp1360 = $tmp1358(((panda$collections$Iterable*) $tmp1356));
goto block116;
block116:;
ITable* $tmp1361 = $tmp1360->$class->itable;
while ($tmp1361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1361 = $tmp1361->next;
}
$fn1363 $tmp1362 = $tmp1361->methods[0];
panda$core$Bit $tmp1364 = $tmp1362($tmp1360);
bool $tmp1365 = $tmp1364.value;
if ($tmp1365) goto block118; else goto block117;
block117:;
*(&local47) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1366 = $tmp1360->$class->itable;
while ($tmp1366->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1366 = $tmp1366->next;
}
$fn1368 $tmp1367 = $tmp1366->methods[1];
panda$core$Object* $tmp1369 = $tmp1367($tmp1360);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1369)));
org$pandalanguage$pandac$ASTNode* $tmp1370 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1370));
*(&local47) = ((org$pandalanguage$pandac$ASTNode*) $tmp1369);
// line 459
panda$core$Int64 $tmp1371 = *(&local46);
org$pandalanguage$pandac$ASTNode* $tmp1372 = *(&local47);
panda$core$Int64 $tmp1373 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1372);
int64_t $tmp1374 = $tmp1371.value;
int64_t $tmp1375 = $tmp1373.value;
int64_t $tmp1376 = $tmp1374 + $tmp1375;
panda$core$Int64 $tmp1377 = (panda$core$Int64) {$tmp1376};
*(&local46) = $tmp1377;
panda$core$Panda$unref$panda$core$Object$Q($tmp1369);
// unreffing REF($1277:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1378 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
// unreffing test
*(&local47) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block116;
block118:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1360));
// unreffing REF($1266:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 461
org$pandalanguage$pandac$FixedArray* $tmp1379 = *(&local45);
ITable* $tmp1380 = ((panda$collections$Iterable*) $tmp1379)->$class->itable;
while ($tmp1380->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1380 = $tmp1380->next;
}
$fn1382 $tmp1381 = $tmp1380->methods[0];
panda$collections$Iterator* $tmp1383 = $tmp1381(((panda$collections$Iterable*) $tmp1379));
goto block119;
block119:;
ITable* $tmp1384 = $tmp1383->$class->itable;
while ($tmp1384->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1384 = $tmp1384->next;
}
$fn1386 $tmp1385 = $tmp1384->methods[0];
panda$core$Bit $tmp1387 = $tmp1385($tmp1383);
bool $tmp1388 = $tmp1387.value;
if ($tmp1388) goto block121; else goto block120;
block120:;
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1389 = $tmp1383->$class->itable;
while ($tmp1389->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1389 = $tmp1389->next;
}
$fn1391 $tmp1390 = $tmp1389->methods[1];
panda$core$Object* $tmp1392 = $tmp1390($tmp1383);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1392)));
org$pandalanguage$pandac$ASTNode* $tmp1393 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) $tmp1392);
// line 462
panda$core$Int64 $tmp1394 = *(&local46);
org$pandalanguage$pandac$ASTNode* $tmp1395 = *(&local48);
panda$core$Int64 $tmp1396 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1395);
int64_t $tmp1397 = $tmp1394.value;
int64_t $tmp1398 = $tmp1396.value;
int64_t $tmp1399 = $tmp1397 + $tmp1398;
panda$core$Int64 $tmp1400 = (panda$core$Int64) {$tmp1399};
*(&local46) = $tmp1400;
panda$core$Panda$unref$panda$core$Object$Q($tmp1392);
// unreffing REF($1322:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1401 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1401));
// unreffing s
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block119;
block121:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1383));
// unreffing REF($1311:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 464
panda$core$Int64 $tmp1402 = *(&local46);
org$pandalanguage$pandac$FixedArray* $tmp1403 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1403));
// unreffing statements
*(&local45) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1404 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1404));
// unreffing tests
*(&local44) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1402;
block115:;
panda$core$Int64 $tmp1405 = (panda$core$Int64) {51};
panda$core$Bit $tmp1406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp1405);
bool $tmp1407 = $tmp1406.value;
if ($tmp1407) goto block122; else goto block123;
block122:;
org$pandalanguage$pandac$Position* $tmp1408 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1409 = *$tmp1408;
panda$core$String** $tmp1410 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp1411 = *$tmp1410;
org$pandalanguage$pandac$ASTNode** $tmp1412 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1413 = *$tmp1412;
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1413));
org$pandalanguage$pandac$ASTNode* $tmp1414 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1414));
*(&local49) = $tmp1413;
org$pandalanguage$pandac$FixedArray** $tmp1415 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp1416 = *$tmp1415;
*(&local50) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
org$pandalanguage$pandac$FixedArray* $tmp1417 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
*(&local50) = $tmp1416;
// line 467
org$pandalanguage$pandac$ASTNode* $tmp1418 = *(&local49);
panda$core$Int64 $tmp1419 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1418);
*(&local51) = $tmp1419;
// line 468
org$pandalanguage$pandac$FixedArray* $tmp1420 = *(&local50);
ITable* $tmp1421 = ((panda$collections$Iterable*) $tmp1420)->$class->itable;
while ($tmp1421->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1421 = $tmp1421->next;
}
$fn1423 $tmp1422 = $tmp1421->methods[0];
panda$collections$Iterator* $tmp1424 = $tmp1422(((panda$collections$Iterable*) $tmp1420));
goto block124;
block124:;
ITable* $tmp1425 = $tmp1424->$class->itable;
while ($tmp1425->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1425 = $tmp1425->next;
}
$fn1427 $tmp1426 = $tmp1425->methods[0];
panda$core$Bit $tmp1428 = $tmp1426($tmp1424);
bool $tmp1429 = $tmp1428.value;
if ($tmp1429) goto block126; else goto block125;
block125:;
*(&local52) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1430 = $tmp1424->$class->itable;
while ($tmp1430->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1430 = $tmp1430->next;
}
$fn1432 $tmp1431 = $tmp1430->methods[1];
panda$core$Object* $tmp1433 = $tmp1431($tmp1424);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1433)));
org$pandalanguage$pandac$ASTNode* $tmp1434 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1434));
*(&local52) = ((org$pandalanguage$pandac$ASTNode*) $tmp1433);
// line 469
panda$core$Int64 $tmp1435 = *(&local51);
org$pandalanguage$pandac$ASTNode* $tmp1436 = *(&local52);
panda$core$Int64 $tmp1437 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1436);
int64_t $tmp1438 = $tmp1435.value;
int64_t $tmp1439 = $tmp1437.value;
int64_t $tmp1440 = $tmp1438 + $tmp1439;
panda$core$Int64 $tmp1441 = (panda$core$Int64) {$tmp1440};
*(&local51) = $tmp1441;
panda$core$Panda$unref$panda$core$Object$Q($tmp1433);
// unreffing REF($1410:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1442 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1442));
// unreffing s
*(&local52) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block124;
block126:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1424));
// unreffing REF($1399:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 471
panda$core$Int64 $tmp1443 = *(&local51);
org$pandalanguage$pandac$FixedArray* $tmp1444 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1444));
// unreffing statements
*(&local50) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1445 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1445));
// unreffing test
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1443;
block123:;
// line 474
panda$core$Bit $tmp1446 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1447 = $tmp1446.value;
if ($tmp1447) goto block127; else goto block128;
block128:;
panda$core$Int64 $tmp1448 = (panda$core$Int64) {474};
panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1450, ((panda$core$Object*) param1));
panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1449, &$s1452);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1453, $tmp1448, $tmp1451);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1451));
// unreffing REF($1459:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
// unreffing REF($1458:panda.core.String)
abort(); // unreachable
block127:;
goto block1;
block1:;
panda$core$Bit $tmp1454 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1455 = $tmp1454.value;
if ($tmp1455) goto block129; else goto block130;
block130:;
panda$core$Int64 $tmp1456 = (panda$core$Int64) {292};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1457, $tmp1456, &$s1458);
abort(); // unreachable
block129:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Annotations* param1, panda$collections$ListView* param2) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 480
panda$core$Weak** $tmp1459 = &param0->compiler;
panda$core$Weak* $tmp1460 = *$tmp1459;
panda$core$Object* $tmp1461 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1460);
org$pandalanguage$pandac$Compiler$Settings** $tmp1462 = &((org$pandalanguage$pandac$Compiler*) $tmp1461)->settings;
org$pandalanguage$pandac$Compiler$Settings* $tmp1463 = *$tmp1462;
panda$core$Int64* $tmp1464 = &$tmp1463->optimizationLevel;
panda$core$Int64 $tmp1465 = *$tmp1464;
panda$core$Int64 $tmp1466 = (panda$core$Int64) {0};
int64_t $tmp1467 = $tmp1465.value;
int64_t $tmp1468 = $tmp1466.value;
bool $tmp1469 = $tmp1467 > $tmp1468;
panda$core$Bit $tmp1470 = (panda$core$Bit) {$tmp1469};
bool $tmp1471 = $tmp1470.value;
if ($tmp1471) goto block3; else goto block4;
block3:;
panda$core$Bit $tmp1472 = org$pandalanguage$pandac$Annotations$get_isInline$R$panda$core$Bit(param1);
panda$core$Bit $tmp1473 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1472);
*(&local1) = $tmp1473;
goto block5;
block4:;
*(&local1) = $tmp1470;
goto block5;
block5:;
panda$core$Bit $tmp1474 = *(&local1);
bool $tmp1475 = $tmp1474.value;
if ($tmp1475) goto block6; else goto block7;
block6:;
panda$core$Bit $tmp1476 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit(param1);
*(&local0) = $tmp1476;
goto block8;
block7:;
*(&local0) = $tmp1474;
goto block8;
block8:;
panda$core$Bit $tmp1477 = *(&local0);
bool $tmp1478 = $tmp1477.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp1461);
// unreffing REF($4:panda.core.Weak.T)
if ($tmp1478) goto block1; else goto block2;
block1:;
// line 482
panda$core$Int64 $tmp1479 = (panda$core$Int64) {0};
*(&local2) = $tmp1479;
// line 483
ITable* $tmp1480 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp1480->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1480 = $tmp1480->next;
}
$fn1482 $tmp1481 = $tmp1480->methods[0];
panda$collections$Iterator* $tmp1483 = $tmp1481(((panda$collections$Iterable*) param2));
goto block9;
block9:;
ITable* $tmp1484 = $tmp1483->$class->itable;
while ($tmp1484->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1484 = $tmp1484->next;
}
$fn1486 $tmp1485 = $tmp1484->methods[0];
panda$core$Bit $tmp1487 = $tmp1485($tmp1483);
bool $tmp1488 = $tmp1487.value;
if ($tmp1488) goto block11; else goto block10;
block10:;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1489 = $tmp1483->$class->itable;
while ($tmp1489->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1489 = $tmp1489->next;
}
$fn1491 $tmp1490 = $tmp1489->methods[1];
panda$core$Object* $tmp1492 = $tmp1490($tmp1483);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1492)));
org$pandalanguage$pandac$ASTNode* $tmp1493 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1493));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) $tmp1492);
// line 484
panda$core$Int64 $tmp1494 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1495 = *(&local3);
panda$core$Int64 $tmp1496 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1495);
int64_t $tmp1497 = $tmp1494.value;
int64_t $tmp1498 = $tmp1496.value;
int64_t $tmp1499 = $tmp1497 + $tmp1498;
panda$core$Int64 $tmp1500 = (panda$core$Int64) {$tmp1499};
*(&local2) = $tmp1500;
// line 485
panda$core$Int64 $tmp1501 = *(&local2);
panda$core$Int64 $tmp1502 = (panda$core$Int64) {10};
int64_t $tmp1503 = $tmp1501.value;
int64_t $tmp1504 = $tmp1502.value;
bool $tmp1505 = $tmp1503 > $tmp1504;
panda$core$Bit $tmp1506 = (panda$core$Bit) {$tmp1505};
bool $tmp1507 = $tmp1506.value;
if ($tmp1507) goto block12; else goto block13;
block12:;
// line 486
panda$core$Bit $tmp1508 = panda$core$Bit$init$builtin_bit(false);
panda$core$Panda$unref$panda$core$Object$Q($tmp1492);
// unreffing REF($55:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1509 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1509));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1483));
// unreffing REF($44:panda.collections.Iterator<panda.collections.Iterable.T>)
return $tmp1508;
block13:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1492);
// unreffing REF($55:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1510 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1510));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1483));
// unreffing REF($44:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 489
panda$core$Bit $tmp1511 = panda$core$Bit$init$builtin_bit(true);
return $tmp1511;
block2:;
// line 491
panda$core$Bit $tmp1512 = panda$core$Bit$init$builtin_bit(false);
return $tmp1512;

}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ClassDecl* param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$MethodDecl$Kind param5, panda$core$String* param6, org$pandalanguage$pandac$FixedArray* param7, org$pandalanguage$pandac$FixedArray* param8, org$pandalanguage$pandac$ASTNode* param9, org$pandalanguage$pandac$FixedArray* param10) {

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
// line 498
*(&local0) = ((panda$core$String*) NULL);
// line 500
panda$core$Bit $tmp1513 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1514 = $tmp1513.value;
if ($tmp1514) goto block1; else goto block3;
block1:;
// line 501
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp1515 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1515));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 504
panda$core$Int64* $tmp1516 = &param3->$rawValue;
panda$core$Int64 $tmp1517 = *$tmp1516;
panda$core$Int64 $tmp1518 = (panda$core$Int64) {40};
panda$core$Bit $tmp1519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1517, $tmp1518);
bool $tmp1520 = $tmp1519.value;
if ($tmp1520) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp1521 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp1522 = *$tmp1521;
*(&local1) = $tmp1522;
panda$core$String** $tmp1523 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp1524 = *$tmp1523;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1524));
panda$core$String* $tmp1525 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1525));
*(&local2) = $tmp1524;
// line 506
panda$core$String* $tmp1526 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1526));
panda$core$String* $tmp1527 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1527));
*(&local0) = $tmp1526;
panda$core$String* $tmp1528 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1528));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 509
panda$core$Bit $tmp1529 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1530 = $tmp1529.value;
if ($tmp1530) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1531 = (panda$core$Int64) {509};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1532, $tmp1531);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 513
org$pandalanguage$pandac$Annotations* $tmp1533 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param4);
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1533));
org$pandalanguage$pandac$Annotations* $tmp1534 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1534));
*(&local3) = $tmp1533;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1533));
// unreffing REF($61:org.pandalanguage.pandac.Annotations)
// line 514
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1535;
$tmp1535 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1535->value = param5;
panda$core$Int64 $tmp1536 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1537 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1536);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1538;
$tmp1538 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1538->value = $tmp1537;
ITable* $tmp1539 = ((panda$core$Equatable*) $tmp1535)->$class->itable;
while ($tmp1539->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1539 = $tmp1539->next;
}
$fn1541 $tmp1540 = $tmp1539->methods[1];
panda$core$Bit $tmp1542 = $tmp1540(((panda$core$Equatable*) $tmp1535), ((panda$core$Equatable*) $tmp1538));
bool $tmp1543 = $tmp1542.value;
if ($tmp1543) goto block11; else goto block12;
block11:;
org$pandalanguage$pandac$Annotations** $tmp1544 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp1545 = *$tmp1544;
panda$core$Bit $tmp1546 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit($tmp1545);
*(&local5) = $tmp1546;
goto block13;
block12:;
*(&local5) = $tmp1542;
goto block13;
block13:;
panda$core$Bit $tmp1547 = *(&local5);
bool $tmp1548 = $tmp1547.value;
if ($tmp1548) goto block14; else goto block15;
block14:;
*(&local4) = $tmp1547;
goto block16;
block15:;
org$pandalanguage$pandac$Annotations* $tmp1549 = *(&local3);
panda$core$Bit $tmp1550 = org$pandalanguage$pandac$Annotations$get_isPrivate$R$panda$core$Bit($tmp1549);
*(&local4) = $tmp1550;
goto block16;
block16:;
panda$core$Bit $tmp1551 = *(&local4);
bool $tmp1552 = $tmp1551.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1538)));
// unreffing REF($77:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1535)));
// unreffing REF($73:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp1552) goto block9; else goto block10;
block9:;
// line 515
org$pandalanguage$pandac$Annotations* $tmp1553 = *(&local3);
panda$core$Int64* $tmp1554 = &$tmp1553->flags;
panda$core$Int64 $tmp1555 = *$tmp1554;
panda$core$Int64 $tmp1556 = (panda$core$Int64) {256};
panda$core$Int64 $tmp1557 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1555, $tmp1556);
panda$core$Int64* $tmp1558 = &$tmp1553->flags;
*$tmp1558 = $tmp1557;
goto block10;
block10:;
// line 517
*(&local6) = ((panda$collections$Array*) NULL);
// line 518
panda$core$Bit $tmp1559 = panda$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1560 = $tmp1559.value;
if ($tmp1560) goto block17; else goto block19;
block17:;
// line 519
panda$collections$Array* $tmp1561 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1561);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1561));
panda$collections$Array* $tmp1562 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1562));
*(&local6) = $tmp1561;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1561));
// unreffing REF($124:panda.collections.Array<org.pandalanguage.pandac.ClassDecl.GenericParameter>)
// line 520
panda$core$String** $tmp1563 = &param1->name;
panda$core$String* $tmp1564 = *$tmp1563;
panda$core$String* $tmp1565 = panda$core$String$convert$R$panda$core$String($tmp1564);
panda$core$String* $tmp1566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1565, &$s1567);
panda$core$String* $tmp1568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1566, param6);
panda$core$String* $tmp1569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1568, &$s1570);
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1569));
panda$core$String* $tmp1571 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
*(&local7) = $tmp1569;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1569));
// unreffing REF($143:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1568));
// unreffing REF($142:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1566));
// unreffing REF($141:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1565));
// unreffing REF($140:panda.core.String)
// line 521
ITable* $tmp1572 = ((panda$collections$Iterable*) param7)->$class->itable;
while ($tmp1572->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1572 = $tmp1572->next;
}
$fn1574 $tmp1573 = $tmp1572->methods[0];
panda$collections$Iterator* $tmp1575 = $tmp1573(((panda$collections$Iterable*) param7));
goto block20;
block20:;
ITable* $tmp1576 = $tmp1575->$class->itable;
while ($tmp1576->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1576 = $tmp1576->next;
}
$fn1578 $tmp1577 = $tmp1576->methods[0];
panda$core$Bit $tmp1579 = $tmp1577($tmp1575);
bool $tmp1580 = $tmp1579.value;
if ($tmp1580) goto block22; else goto block21;
block21:;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1581 = $tmp1575->$class->itable;
while ($tmp1581->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1581 = $tmp1581->next;
}
$fn1583 $tmp1582 = $tmp1581->methods[1];
panda$core$Object* $tmp1584 = $tmp1582($tmp1575);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1584)));
org$pandalanguage$pandac$ASTNode* $tmp1585 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1585));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) $tmp1584);
// line 522
*(&local9) = ((panda$core$String*) NULL);
// line 523
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
// line 524
org$pandalanguage$pandac$ASTNode* $tmp1586 = *(&local8);
panda$core$Int64* $tmp1587 = &$tmp1586->$rawValue;
panda$core$Int64 $tmp1588 = *$tmp1587;
panda$core$Int64 $tmp1589 = (panda$core$Int64) {22};
panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1588, $tmp1589);
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp1592 = (org$pandalanguage$pandac$Position*) ($tmp1586->$data + 0);
org$pandalanguage$pandac$Position $tmp1593 = *$tmp1592;
panda$core$String** $tmp1594 = (panda$core$String**) ($tmp1586->$data + 16);
panda$core$String* $tmp1595 = *$tmp1594;
*(&local11) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1595));
panda$core$String* $tmp1596 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1596));
*(&local11) = $tmp1595;
// line 526
panda$core$String* $tmp1597 = *(&local11);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1597));
panda$core$String* $tmp1598 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1598));
*(&local9) = $tmp1597;
// line 527
org$pandalanguage$pandac$Type* $tmp1599 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1599));
org$pandalanguage$pandac$Type* $tmp1600 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1600));
*(&local10) = $tmp1599;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1599));
// unreffing REF($218:org.pandalanguage.pandac.Type)
panda$core$String* $tmp1601 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1601));
// unreffing id
*(&local11) = ((panda$core$String*) NULL);
goto block23;
block25:;
panda$core$Int64 $tmp1602 = (panda$core$Int64) {46};
panda$core$Bit $tmp1603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1588, $tmp1602);
bool $tmp1604 = $tmp1603.value;
if ($tmp1604) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp1605 = (org$pandalanguage$pandac$Position*) ($tmp1586->$data + 0);
org$pandalanguage$pandac$Position $tmp1606 = *$tmp1605;
panda$core$String** $tmp1607 = (panda$core$String**) ($tmp1586->$data + 16);
panda$core$String* $tmp1608 = *$tmp1607;
*(&local12) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1608));
panda$core$String* $tmp1609 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1609));
*(&local12) = $tmp1608;
org$pandalanguage$pandac$ASTNode** $tmp1610 = (org$pandalanguage$pandac$ASTNode**) ($tmp1586->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1611 = *$tmp1610;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1611));
org$pandalanguage$pandac$ASTNode* $tmp1612 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1612));
*(&local13) = $tmp1611;
// line 530
panda$core$String* $tmp1613 = *(&local12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1613));
panda$core$String* $tmp1614 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1614));
*(&local9) = $tmp1613;
// line 531
org$pandalanguage$pandac$ASTNode* $tmp1615 = *(&local13);
org$pandalanguage$pandac$Type* $tmp1616 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1615);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1616));
org$pandalanguage$pandac$Type* $tmp1617 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1617));
*(&local10) = $tmp1616;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1616));
// unreffing REF($269:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$ASTNode* $tmp1618 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1618));
// unreffing type
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1619 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1619));
// unreffing id
*(&local12) = ((panda$core$String*) NULL);
goto block23;
block27:;
// line 534
panda$core$Bit $tmp1620 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1621 = $tmp1620.value;
if ($tmp1621) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp1622 = (panda$core$Int64) {534};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1623, $tmp1622);
abort(); // unreachable
block28:;
goto block23;
block23:;
// line 537
panda$collections$Array* $tmp1624 = *(&local6);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1625 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
org$pandalanguage$pandac$ASTNode* $tmp1626 = *(&local8);
$fn1628 $tmp1627 = ($fn1628) $tmp1626->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1629 = $tmp1627($tmp1626);
panda$core$String* $tmp1630 = *(&local7);
panda$core$String* $tmp1631 = *(&local9);
org$pandalanguage$pandac$Type* $tmp1632 = *(&local10);
org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1625, $tmp1629, $tmp1630, $tmp1631, $tmp1632);
panda$collections$Array$add$panda$collections$Array$T($tmp1624, ((panda$core$Object*) $tmp1625));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1625));
// unreffing REF($301:org.pandalanguage.pandac.ClassDecl.GenericParameter)
org$pandalanguage$pandac$Type* $tmp1633 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1633));
// unreffing bound
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp1634 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1634));
// unreffing parameterName
*(&local9) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1584);
// unreffing REF($178:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1635 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1635));
// unreffing p
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block20;
block22:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1575));
// unreffing REF($167:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$String* $tmp1636 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1636));
// unreffing fullName
*(&local7) = ((panda$core$String*) NULL);
goto block18;
block19:;
// line 1
// line 542
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
panda$collections$Array* $tmp1637 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1637));
*(&local6) = ((panda$collections$Array*) NULL);
goto block18;
block18:;
// line 544
panda$collections$Array* $tmp1638 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1638);
*(&local14) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1638));
panda$collections$Array* $tmp1639 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1639));
*(&local14) = $tmp1638;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1638));
// unreffing REF($352:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
// line 545
ITable* $tmp1640 = ((panda$collections$Iterable*) param8)->$class->itable;
while ($tmp1640->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1640 = $tmp1640->next;
}
$fn1642 $tmp1641 = $tmp1640->methods[0];
panda$collections$Iterator* $tmp1643 = $tmp1641(((panda$collections$Iterable*) param8));
goto block30;
block30:;
ITable* $tmp1644 = $tmp1643->$class->itable;
while ($tmp1644->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1644 = $tmp1644->next;
}
$fn1646 $tmp1645 = $tmp1644->methods[0];
panda$core$Bit $tmp1647 = $tmp1645($tmp1643);
bool $tmp1648 = $tmp1647.value;
if ($tmp1648) goto block32; else goto block31;
block31:;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1649 = $tmp1643->$class->itable;
while ($tmp1649->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1649 = $tmp1649->next;
}
$fn1651 $tmp1650 = $tmp1649->methods[1];
panda$core$Object* $tmp1652 = $tmp1650($tmp1643);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1652)));
org$pandalanguage$pandac$ASTNode* $tmp1653 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1653));
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) $tmp1652);
// line 546
org$pandalanguage$pandac$ASTNode* $tmp1654 = *(&local15);
panda$core$Int64* $tmp1655 = &$tmp1654->$rawValue;
panda$core$Int64 $tmp1656 = *$tmp1655;
panda$core$Int64 $tmp1657 = (panda$core$Int64) {33};
panda$core$Bit $tmp1658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1656, $tmp1657);
bool $tmp1659 = $tmp1658.value;
if ($tmp1659) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp1660 = (org$pandalanguage$pandac$Position*) ($tmp1654->$data + 0);
org$pandalanguage$pandac$Position $tmp1661 = *$tmp1660;
panda$core$String** $tmp1662 = (panda$core$String**) ($tmp1654->$data + 16);
panda$core$String* $tmp1663 = *$tmp1662;
*(&local16) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1663));
panda$core$String* $tmp1664 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1664));
*(&local16) = $tmp1663;
org$pandalanguage$pandac$ASTNode** $tmp1665 = (org$pandalanguage$pandac$ASTNode**) ($tmp1654->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1666 = *$tmp1665;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1666));
org$pandalanguage$pandac$ASTNode* $tmp1667 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1667));
*(&local17) = $tmp1666;
// line 548
panda$collections$Array* $tmp1668 = *(&local14);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1669 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
panda$core$String* $tmp1670 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1671 = *(&local17);
org$pandalanguage$pandac$Type* $tmp1672 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1671);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1669, $tmp1670, $tmp1672);
panda$collections$Array$add$panda$collections$Array$T($tmp1668, ((panda$core$Object*) $tmp1669));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1672));
// unreffing REF($422:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1669));
// unreffing REF($419:org.pandalanguage.pandac.MethodDecl.Parameter)
org$pandalanguage$pandac$ASTNode* $tmp1673 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1673));
// unreffing type
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1674 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1674));
// unreffing name
*(&local16) = ((panda$core$String*) NULL);
goto block33;
block35:;
// line 551
panda$core$Bit $tmp1675 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1676 = $tmp1675.value;
if ($tmp1676) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp1677 = (panda$core$Int64) {551};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1678, $tmp1677);
abort(); // unreachable
block36:;
goto block33;
block33:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1652);
// unreffing REF($380:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1679 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1679));
// unreffing p
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block30;
block32:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1643));
// unreffing REF($369:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 555
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
// line 556
panda$core$Bit $tmp1680 = panda$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1681 = $tmp1680.value;
if ($tmp1681) goto block38; else goto block40;
block38:;
// line 557
org$pandalanguage$pandac$Type* $tmp1682 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, param9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1682));
org$pandalanguage$pandac$Type* $tmp1683 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1683));
*(&local18) = $tmp1682;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1682));
// unreffing REF($472:org.pandalanguage.pandac.Type)
goto block39;
block40:;
// line 1
// line 560
org$pandalanguage$pandac$Type* $tmp1684 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1684));
org$pandalanguage$pandac$Type* $tmp1685 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1685));
*(&local18) = $tmp1684;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1684));
// unreffing REF($485:org.pandalanguage.pandac.Type)
goto block39;
block39:;
// line 562
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1686;
$tmp1686 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1686->value = param5;
panda$core$Int64 $tmp1687 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1688 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1687);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1689;
$tmp1689 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1689->value = $tmp1688;
ITable* $tmp1690 = ((panda$core$Equatable*) $tmp1686)->$class->itable;
while ($tmp1690->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1690 = $tmp1690->next;
}
$fn1692 $tmp1691 = $tmp1690->methods[0];
panda$core$Bit $tmp1693 = $tmp1691(((panda$core$Equatable*) $tmp1686), ((panda$core$Equatable*) $tmp1689));
bool $tmp1694 = $tmp1693.value;
if ($tmp1694) goto block43; else goto block44;
block43:;
org$pandalanguage$pandac$Type* $tmp1695 = *(&local18);
org$pandalanguage$pandac$Type* $tmp1696 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1697 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1695, $tmp1696);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1696));
// unreffing REF($507:org.pandalanguage.pandac.Type)
*(&local19) = $tmp1697;
goto block45;
block44:;
*(&local19) = $tmp1693;
goto block45;
block45:;
panda$core$Bit $tmp1698 = *(&local19);
bool $tmp1699 = $tmp1698.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1689)));
// unreffing REF($501:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1686)));
// unreffing REF($497:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp1699) goto block41; else goto block42;
block41:;
// line 563
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param2, &$s1700);
goto block42;
block42:;
// line 565
panda$core$Bit $tmp1701 = panda$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1702 = $tmp1701.value;
if ($tmp1702) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Annotations* $tmp1703 = *(&local3);
panda$core$Bit $tmp1704 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(param0, $tmp1703, ((panda$collections$ListView*) param10));
*(&local20) = $tmp1704;
goto block50;
block49:;
*(&local20) = $tmp1701;
goto block50;
block50:;
panda$core$Bit $tmp1705 = *(&local20);
bool $tmp1706 = $tmp1705.value;
if ($tmp1706) goto block46; else goto block47;
block46:;
// line 566
org$pandalanguage$pandac$Annotations* $tmp1707 = *(&local3);
panda$core$Int64* $tmp1708 = &$tmp1707->flags;
panda$core$Int64 $tmp1709 = *$tmp1708;
panda$core$Int64 $tmp1710 = (panda$core$Int64) {1024};
panda$core$Int64 $tmp1711 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1709, $tmp1710);
panda$core$Int64* $tmp1712 = &$tmp1707->flags;
*$tmp1712 = $tmp1711;
goto block47;
block47:;
// line 568
panda$core$Bit $tmp1713 = panda$core$Bit$init$builtin_bit(param10 == NULL);
bool $tmp1714 = $tmp1713.value;
if ($tmp1714) goto block53; else goto block54;
block53:;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp1715 = &param1->classKind;
org$pandalanguage$pandac$ClassDecl$Kind $tmp1716 = *$tmp1715;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp1717;
$tmp1717 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp1717->value = $tmp1716;
panda$core$Int64 $tmp1718 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp1719 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp1718);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp1720;
$tmp1720 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp1720->value = $tmp1719;
ITable* $tmp1721 = ((panda$core$Equatable*) $tmp1717)->$class->itable;
while ($tmp1721->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1721 = $tmp1721->next;
}
$fn1723 $tmp1722 = $tmp1721->methods[0];
panda$core$Bit $tmp1724 = $tmp1722(((panda$core$Equatable*) $tmp1717), ((panda$core$Equatable*) $tmp1720));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1720)));
// unreffing REF($563:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1717)));
// unreffing REF($559:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
*(&local21) = $tmp1724;
goto block55;
block54:;
*(&local21) = $tmp1713;
goto block55;
block55:;
panda$core$Bit $tmp1725 = *(&local21);
bool $tmp1726 = $tmp1725.value;
if ($tmp1726) goto block51; else goto block52;
block51:;
// line 569
org$pandalanguage$pandac$Annotations* $tmp1727 = *(&local3);
panda$core$Int64* $tmp1728 = &$tmp1727->flags;
panda$core$Int64 $tmp1729 = *$tmp1728;
panda$core$Int64 $tmp1730 = (panda$core$Int64) {512};
panda$core$Int64 $tmp1731 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp1729, $tmp1730);
panda$core$Int64 $tmp1732 = (panda$core$Int64) {0};
int64_t $tmp1733 = $tmp1731.value;
int64_t $tmp1734 = $tmp1732.value;
bool $tmp1735 = $tmp1733 != $tmp1734;
panda$core$Bit $tmp1736 = (panda$core$Bit) {$tmp1735};
bool $tmp1737 = $tmp1736.value;
if ($tmp1737) goto block56; else goto block57;
block56:;
// line 570
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param2, &$s1738);
goto block57;
block57:;
// line 573
org$pandalanguage$pandac$Annotations* $tmp1739 = *(&local3);
panda$core$Int64* $tmp1740 = &$tmp1739->flags;
panda$core$Int64 $tmp1741 = *$tmp1740;
panda$core$Int64 $tmp1742 = (panda$core$Int64) {512};
panda$core$Int64 $tmp1743 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1741, $tmp1742);
panda$core$Int64* $tmp1744 = &$tmp1739->flags;
*$tmp1744 = $tmp1743;
goto block52;
block52:;
// line 575
org$pandalanguage$pandac$MethodDecl* $tmp1745 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
panda$core$String* $tmp1746 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp1747 = *(&local3);
panda$collections$Array* $tmp1748 = *(&local6);
panda$collections$Array* $tmp1749 = *(&local14);
org$pandalanguage$pandac$Type* $tmp1750 = *(&local18);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1745, param1, param2, $tmp1746, $tmp1747, param5, param6, $tmp1748, $tmp1749, $tmp1750, param10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
// unreffing REF($605:org.pandalanguage.pandac.MethodDecl)
org$pandalanguage$pandac$Type* $tmp1751 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1751));
// unreffing returnType
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1752 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1752));
// unreffing parameters
*(&local14) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1753 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1753));
// unreffing generics
*(&local6) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp1754 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1754));
// unreffing annotations
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp1755 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1755));
// unreffing doccomment
*(&local0) = ((panda$core$String*) NULL);
return $tmp1745;

}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ClassDecl* param1, org$pandalanguage$pandac$ASTNode* param2) {

org$pandalanguage$pandac$Position local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$Position local4;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$FixedArray* local6 = NULL;
org$pandalanguage$pandac$MethodDecl$Kind local7;
panda$core$String* local8 = NULL;
org$pandalanguage$pandac$FixedArray* local9 = NULL;
org$pandalanguage$pandac$FixedArray* local10 = NULL;
org$pandalanguage$pandac$ASTNode* local11 = NULL;
org$pandalanguage$pandac$FixedArray* local12 = NULL;
org$pandalanguage$pandac$MethodDecl* local13 = NULL;
org$pandalanguage$pandac$Position local14;
org$pandalanguage$pandac$ASTNode* local15 = NULL;
org$pandalanguage$pandac$FixedArray* local16 = NULL;
org$pandalanguage$pandac$ClassDecl$Kind local17;
panda$core$String* local18 = NULL;
org$pandalanguage$pandac$FixedArray* local19 = NULL;
org$pandalanguage$pandac$FixedArray* local20 = NULL;
org$pandalanguage$pandac$FixedArray* local21 = NULL;
org$pandalanguage$pandac$ClassDecl* local22 = NULL;
org$pandalanguage$pandac$Position local23;
org$pandalanguage$pandac$ASTNode* local24 = NULL;
panda$core$String* local25 = NULL;
org$pandalanguage$pandac$FixedArray* local26 = NULL;
// line 580
panda$core$Int64* $tmp1756 = &param2->$rawValue;
panda$core$Int64 $tmp1757 = *$tmp1756;
panda$core$Int64 $tmp1758 = (panda$core$Int64) {18};
panda$core$Bit $tmp1759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1757, $tmp1758);
bool $tmp1760 = $tmp1759.value;
if ($tmp1760) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp1761 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1762 = *$tmp1761;
*(&local0) = $tmp1762;
org$pandalanguage$pandac$ASTNode** $tmp1763 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1764 = *$tmp1763;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1764));
org$pandalanguage$pandac$ASTNode* $tmp1765 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1765));
*(&local1) = $tmp1764;
org$pandalanguage$pandac$FixedArray** $tmp1766 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1767 = *$tmp1766;
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1767));
org$pandalanguage$pandac$FixedArray* $tmp1768 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1768));
*(&local2) = $tmp1767;
org$pandalanguage$pandac$ASTNode** $tmp1769 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1770 = *$tmp1769;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1770));
org$pandalanguage$pandac$ASTNode* $tmp1771 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1771));
*(&local3) = $tmp1770;
// line 582
org$pandalanguage$pandac$Position $tmp1772 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp1773 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp1774 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1775 = *(&local3);
org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(param0, param1, $tmp1772, $tmp1773, $tmp1774, $tmp1775);
org$pandalanguage$pandac$ASTNode* $tmp1776 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1776));
// unreffing varDecl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1777 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1777));
// unreffing annotations
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1778 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1778));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp1779 = (panda$core$Int64) {28};
panda$core$Bit $tmp1780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1757, $tmp1779);
bool $tmp1781 = $tmp1780.value;
if ($tmp1781) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp1782 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1783 = *$tmp1782;
*(&local4) = $tmp1783;
org$pandalanguage$pandac$ASTNode** $tmp1784 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1785 = *$tmp1784;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1785));
org$pandalanguage$pandac$ASTNode* $tmp1786 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1786));
*(&local5) = $tmp1785;
org$pandalanguage$pandac$FixedArray** $tmp1787 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1788 = *$tmp1787;
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1788));
org$pandalanguage$pandac$FixedArray* $tmp1789 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1789));
*(&local6) = $tmp1788;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp1790 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param2->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1791 = *$tmp1790;
*(&local7) = $tmp1791;
panda$core$String** $tmp1792 = (panda$core$String**) (param2->$data + 40);
panda$core$String* $tmp1793 = *$tmp1792;
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1793));
panda$core$String* $tmp1794 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1794));
*(&local8) = $tmp1793;
org$pandalanguage$pandac$FixedArray** $tmp1795 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp1796 = *$tmp1795;
*(&local9) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1796));
org$pandalanguage$pandac$FixedArray* $tmp1797 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1797));
*(&local9) = $tmp1796;
org$pandalanguage$pandac$FixedArray** $tmp1798 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp1799 = *$tmp1798;
*(&local10) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1799));
org$pandalanguage$pandac$FixedArray* $tmp1800 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1800));
*(&local10) = $tmp1799;
org$pandalanguage$pandac$ASTNode** $tmp1801 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp1802 = *$tmp1801;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1802));
org$pandalanguage$pandac$ASTNode* $tmp1803 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1803));
*(&local11) = $tmp1802;
org$pandalanguage$pandac$FixedArray** $tmp1804 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 72);
org$pandalanguage$pandac$FixedArray* $tmp1805 = *$tmp1804;
*(&local12) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1805));
org$pandalanguage$pandac$FixedArray* $tmp1806 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1806));
*(&local12) = $tmp1805;
// line 586
org$pandalanguage$pandac$Position $tmp1807 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1808 = *(&local5);
org$pandalanguage$pandac$FixedArray* $tmp1809 = *(&local6);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1810 = *(&local7);
panda$core$String* $tmp1811 = *(&local8);
org$pandalanguage$pandac$FixedArray* $tmp1812 = *(&local9);
org$pandalanguage$pandac$FixedArray* $tmp1813 = *(&local10);
org$pandalanguage$pandac$ASTNode* $tmp1814 = *(&local11);
org$pandalanguage$pandac$FixedArray* $tmp1815 = *(&local12);
org$pandalanguage$pandac$MethodDecl* $tmp1816 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(param0, param1, $tmp1807, $tmp1808, $tmp1809, $tmp1810, $tmp1811, $tmp1812, $tmp1813, $tmp1814, $tmp1815);
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1816));
org$pandalanguage$pandac$MethodDecl* $tmp1817 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1817));
*(&local13) = $tmp1816;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1816));
// unreffing REF($142:org.pandalanguage.pandac.MethodDecl?)
// line 588
org$pandalanguage$pandac$MethodDecl* $tmp1818 = *(&local13);
panda$core$Bit $tmp1819 = panda$core$Bit$init$builtin_bit($tmp1818 != NULL);
bool $tmp1820 = $tmp1819.value;
if ($tmp1820) goto block6; else goto block7;
block6:;
// line 589
org$pandalanguage$pandac$SymbolTable** $tmp1821 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1822 = *$tmp1821;
org$pandalanguage$pandac$MethodDecl* $tmp1823 = *(&local13);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1822, ((org$pandalanguage$pandac$Symbol*) $tmp1823));
// line 590
panda$collections$Array** $tmp1824 = &param1->methods;
panda$collections$Array* $tmp1825 = *$tmp1824;
org$pandalanguage$pandac$MethodDecl* $tmp1826 = *(&local13);
panda$collections$Array$add$panda$collections$Array$T($tmp1825, ((panda$core$Object*) $tmp1826));
goto block7;
block7:;
org$pandalanguage$pandac$MethodDecl* $tmp1827 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1827));
// unreffing m
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1828 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1828));
// unreffing statements
*(&local12) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1829 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1829));
// unreffing returnType
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1830 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1830));
// unreffing parameters
*(&local10) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1831 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1831));
// unreffing generics
*(&local9) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1832 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1832));
// unreffing name
*(&local8) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1833 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1833));
// unreffing annotations
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1834 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1834));
// unreffing dc
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp1835 = (panda$core$Int64) {12};
panda$core$Bit $tmp1836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1757, $tmp1835);
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp1838 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1839 = *$tmp1838;
*(&local14) = $tmp1839;
org$pandalanguage$pandac$ASTNode** $tmp1840 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1841 = *$tmp1840;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1841));
org$pandalanguage$pandac$ASTNode* $tmp1842 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1842));
*(&local15) = $tmp1841;
org$pandalanguage$pandac$FixedArray** $tmp1843 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1844 = *$tmp1843;
*(&local16) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1844));
org$pandalanguage$pandac$FixedArray* $tmp1845 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1845));
*(&local16) = $tmp1844;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp1846 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param2->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp1847 = *$tmp1846;
*(&local17) = $tmp1847;
panda$core$String** $tmp1848 = (panda$core$String**) (param2->$data + 40);
panda$core$String* $tmp1849 = *$tmp1848;
*(&local18) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1849));
panda$core$String* $tmp1850 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1850));
*(&local18) = $tmp1849;
org$pandalanguage$pandac$FixedArray** $tmp1851 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp1852 = *$tmp1851;
*(&local19) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1852));
org$pandalanguage$pandac$FixedArray* $tmp1853 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1853));
*(&local19) = $tmp1852;
org$pandalanguage$pandac$FixedArray** $tmp1854 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp1855 = *$tmp1854;
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1855));
org$pandalanguage$pandac$FixedArray* $tmp1856 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1856));
*(&local20) = $tmp1855;
org$pandalanguage$pandac$FixedArray** $tmp1857 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 64);
org$pandalanguage$pandac$FixedArray* $tmp1858 = *$tmp1857;
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1858));
org$pandalanguage$pandac$FixedArray* $tmp1859 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1859));
*(&local21) = $tmp1858;
// line 595
panda$io$File** $tmp1860 = &param1->source;
panda$io$File* $tmp1861 = *$tmp1860;
panda$collections$MapView** $tmp1862 = &param1->aliases;
panda$collections$MapView* $tmp1863 = *$tmp1862;
panda$core$String** $tmp1864 = &param1->name;
panda$core$String* $tmp1865 = *$tmp1864;
org$pandalanguage$pandac$Position $tmp1866 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp1867 = *(&local15);
org$pandalanguage$pandac$FixedArray* $tmp1868 = *(&local16);
org$pandalanguage$pandac$ClassDecl$Kind $tmp1869 = *(&local17);
panda$core$String* $tmp1870 = *(&local18);
org$pandalanguage$pandac$FixedArray* $tmp1871 = *(&local19);
org$pandalanguage$pandac$FixedArray* $tmp1872 = *(&local20);
org$pandalanguage$pandac$FixedArray* $tmp1873 = *(&local21);
org$pandalanguage$pandac$ClassDecl* $tmp1874 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp1861, $tmp1863, $tmp1865, $tmp1866, $tmp1867, $tmp1868, $tmp1869, $tmp1870, $tmp1871, $tmp1872, $tmp1873);
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1874));
org$pandalanguage$pandac$ClassDecl* $tmp1875 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1875));
*(&local22) = $tmp1874;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1874));
// unreffing REF($294:org.pandalanguage.pandac.ClassDecl?)
// line 597
org$pandalanguage$pandac$ClassDecl* $tmp1876 = *(&local22);
panda$core$Bit $tmp1877 = panda$core$Bit$init$builtin_bit($tmp1876 != NULL);
bool $tmp1878 = $tmp1877.value;
if ($tmp1878) goto block10; else goto block11;
block10:;
// line 598
org$pandalanguage$pandac$ClassDecl* $tmp1879 = *(&local22);
panda$core$Weak* $tmp1880 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp1880, ((panda$core$Object*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1880));
panda$core$Weak** $tmp1881 = &$tmp1879->owner;
panda$core$Weak* $tmp1882 = *$tmp1881;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1882));
panda$core$Weak** $tmp1883 = &$tmp1879->owner;
*$tmp1883 = $tmp1880;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1880));
// unreffing REF($315:panda.core.Weak<org.pandalanguage.pandac.ClassDecl?>)
// line 599
panda$collections$Array** $tmp1884 = &param1->classes;
panda$collections$Array* $tmp1885 = *$tmp1884;
org$pandalanguage$pandac$ClassDecl* $tmp1886 = *(&local22);
panda$collections$Array$add$panda$collections$Array$T($tmp1885, ((panda$core$Object*) $tmp1886));
// line 600
org$pandalanguage$pandac$ClassDecl* $tmp1887 = *(&local22);
panda$core$String** $tmp1888 = &$tmp1887->name;
panda$core$String* $tmp1889 = *$tmp1888;
panda$core$String** $tmp1890 = &param1->name;
panda$core$String* $tmp1891 = *$tmp1890;
panda$core$String* $tmp1892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1891, &$s1893);
panda$core$Bit $tmp1894 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp1889, $tmp1892);
bool $tmp1895 = $tmp1894.value;
if ($tmp1895) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp1896 = (panda$core$Int64) {600};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1897, $tmp1896);
abort(); // unreachable
block12:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1892));
// unreffing REF($345:panda.core.String)
// line 601
org$pandalanguage$pandac$SymbolTable** $tmp1898 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1899 = *$tmp1898;
org$pandalanguage$pandac$Alias* $tmp1900 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
org$pandalanguage$pandac$ClassDecl* $tmp1901 = *(&local22);
panda$core$String** $tmp1902 = &$tmp1901->name;
panda$core$String* $tmp1903 = *$tmp1902;
panda$core$String** $tmp1904 = &param1->name;
panda$core$String* $tmp1905 = *$tmp1904;
panda$core$Int64 $tmp1906 = panda$core$String$get_length$R$panda$core$Int64($tmp1905);
panda$core$Int64 $tmp1907 = (panda$core$Int64) {1};
int64_t $tmp1908 = $tmp1906.value;
int64_t $tmp1909 = $tmp1907.value;
int64_t $tmp1910 = $tmp1908 + $tmp1909;
panda$core$Int64 $tmp1911 = (panda$core$Int64) {$tmp1910};
panda$core$Bit $tmp1912 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1913 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp1911, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1912);
panda$core$String* $tmp1914 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1903, $tmp1913);
org$pandalanguage$pandac$ClassDecl* $tmp1915 = *(&local22);
panda$core$String** $tmp1916 = &$tmp1915->name;
panda$core$String* $tmp1917 = *$tmp1916;
org$pandalanguage$pandac$Position $tmp1918 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1900, $tmp1914, $tmp1917, $tmp1918);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1899, ((org$pandalanguage$pandac$Symbol*) $tmp1900));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1914));
// unreffing REF($374:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1900));
// unreffing REF($358:org.pandalanguage.pandac.Alias)
// line 603
org$pandalanguage$pandac$ClassDecl* $tmp1919 = *(&local22);
org$pandalanguage$pandac$SymbolTable** $tmp1920 = &$tmp1919->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1921 = *$tmp1920;
org$pandalanguage$pandac$Alias* $tmp1922 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
panda$core$String* $tmp1923 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(param1);
panda$core$String** $tmp1924 = &param1->name;
panda$core$String* $tmp1925 = *$tmp1924;
org$pandalanguage$pandac$Position $tmp1926 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1922, $tmp1923, $tmp1925, $tmp1926);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1921, ((org$pandalanguage$pandac$Symbol*) $tmp1922));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1923));
// unreffing REF($395:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1922));
// unreffing REF($394:org.pandalanguage.pandac.Alias)
goto block11;
block11:;
org$pandalanguage$pandac$ClassDecl* $tmp1927 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1927));
// unreffing inner
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1928 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1928));
// unreffing members
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1929 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1929));
// unreffing supertypes
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1930 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1930));
// unreffing generics
*(&local19) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1931 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1931));
// unreffing name
*(&local18) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1932 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1932));
// unreffing annotations
*(&local16) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1933 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1933));
// unreffing dc
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp1934 = (panda$core$Int64) {10};
panda$core$Bit $tmp1935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1757, $tmp1934);
bool $tmp1936 = $tmp1935.value;
if ($tmp1936) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp1937 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1938 = *$tmp1937;
*(&local23) = $tmp1938;
org$pandalanguage$pandac$ASTNode** $tmp1939 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1940 = *$tmp1939;
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1940));
org$pandalanguage$pandac$ASTNode* $tmp1941 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1941));
*(&local24) = $tmp1940;
panda$core$String** $tmp1942 = (panda$core$String**) (param2->$data + 24);
panda$core$String* $tmp1943 = *$tmp1942;
*(&local25) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1943));
panda$core$String* $tmp1944 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1944));
*(&local25) = $tmp1943;
org$pandalanguage$pandac$FixedArray** $tmp1945 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp1946 = *$tmp1945;
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1946));
org$pandalanguage$pandac$FixedArray* $tmp1947 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1947));
*(&local26) = $tmp1946;
// line 607
org$pandalanguage$pandac$Position $tmp1948 = *(&local23);
org$pandalanguage$pandac$ASTNode* $tmp1949 = *(&local24);
panda$core$String* $tmp1950 = *(&local25);
org$pandalanguage$pandac$FixedArray* $tmp1951 = *(&local26);
org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0, param1, $tmp1948, $tmp1949, $tmp1950, $tmp1951);
org$pandalanguage$pandac$FixedArray* $tmp1952 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1952));
// unreffing fields
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1953 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1953));
// unreffing name
*(&local25) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1954 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1954));
// unreffing dc
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block15:;
// line 610
panda$core$Bit $tmp1955 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1956 = $tmp1955.value;
if ($tmp1956) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp1957 = (panda$core$Int64) {610};
panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1959, ((panda$core$Object*) param2));
panda$core$String* $tmp1960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1958, &$s1961);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1962, $tmp1957, $tmp1960);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1960));
// unreffing REF($508:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1958));
// unreffing REF($507:panda.core.String)
abort(); // unreachable
block16:;
goto block1;
block1:;
return;

}
void org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ClassDecl* param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$String* param4, org$pandalanguage$pandac$FixedArray* param5) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$Position local1;
panda$core$String* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
org$pandalanguage$pandac$ChoiceCase* local5 = NULL;
// line 617
*(&local0) = ((panda$core$String*) NULL);
// line 619
panda$core$Bit $tmp1963 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1964 = $tmp1963.value;
if ($tmp1964) goto block1; else goto block3;
block1:;
// line 620
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp1965 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1965));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 623
panda$core$Int64* $tmp1966 = &param3->$rawValue;
panda$core$Int64 $tmp1967 = *$tmp1966;
panda$core$Int64 $tmp1968 = (panda$core$Int64) {40};
panda$core$Bit $tmp1969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1967, $tmp1968);
bool $tmp1970 = $tmp1969.value;
if ($tmp1970) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp1971 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp1972 = *$tmp1971;
*(&local1) = $tmp1972;
panda$core$String** $tmp1973 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp1974 = *$tmp1973;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1974));
panda$core$String* $tmp1975 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1975));
*(&local2) = $tmp1974;
// line 625
panda$core$String* $tmp1976 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1976));
panda$core$String* $tmp1977 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1977));
*(&local0) = $tmp1976;
panda$core$String* $tmp1978 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1978));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 628
panda$core$Bit $tmp1979 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1980 = $tmp1979.value;
if ($tmp1980) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp1981 = (panda$core$Int64) {628};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1982, $tmp1981);
abort(); // unreachable
block7:;
goto block4;
block4:;
goto block2;
block2:;
// line 632
panda$collections$Array* $tmp1983 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1983);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
panda$collections$Array* $tmp1984 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1984));
*(&local3) = $tmp1983;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
// unreffing REF($61:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 633
ITable* $tmp1985 = ((panda$collections$Iterable*) param5)->$class->itable;
while ($tmp1985->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1985 = $tmp1985->next;
}
$fn1987 $tmp1986 = $tmp1985->methods[0];
panda$collections$Iterator* $tmp1988 = $tmp1986(((panda$collections$Iterable*) param5));
goto block9;
block9:;
ITable* $tmp1989 = $tmp1988->$class->itable;
while ($tmp1989->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1989 = $tmp1989->next;
}
$fn1991 $tmp1990 = $tmp1989->methods[0];
panda$core$Bit $tmp1992 = $tmp1990($tmp1988);
bool $tmp1993 = $tmp1992.value;
if ($tmp1993) goto block11; else goto block10;
block10:;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1994 = $tmp1988->$class->itable;
while ($tmp1994->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1994 = $tmp1994->next;
}
$fn1996 $tmp1995 = $tmp1994->methods[1];
panda$core$Object* $tmp1997 = $tmp1995($tmp1988);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1997)));
org$pandalanguage$pandac$ASTNode* $tmp1998 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1998));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) $tmp1997);
// line 634
panda$collections$Array* $tmp1999 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp2000 = *(&local4);
org$pandalanguage$pandac$Type* $tmp2001 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2000);
panda$collections$Array$add$panda$collections$Array$T($tmp1999, ((panda$core$Object*) $tmp2001));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2001));
// unreffing REF($101:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1997);
// unreffing REF($89:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2002 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2002));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1988));
// unreffing REF($78:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 636
org$pandalanguage$pandac$ChoiceCase* $tmp2003 = (org$pandalanguage$pandac$ChoiceCase*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceCase$class);
panda$core$String* $tmp2004 = *(&local0);
panda$collections$Array** $tmp2005 = &param1->choiceCases;
panda$collections$Array* $tmp2006 = *$tmp2005;
ITable* $tmp2007 = ((panda$collections$CollectionView*) $tmp2006)->$class->itable;
while ($tmp2007->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2007 = $tmp2007->next;
}
$fn2009 $tmp2008 = $tmp2007->methods[0];
panda$core$Int64 $tmp2010 = $tmp2008(((panda$collections$CollectionView*) $tmp2006));
panda$collections$Array* $tmp2011 = *(&local3);
org$pandalanguage$pandac$ChoiceCase$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2003, param1, param2, param4, $tmp2004, $tmp2010, ((panda$collections$ListView*) $tmp2011));
*(&local5) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2003));
org$pandalanguage$pandac$ChoiceCase* $tmp2012 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2012));
*(&local5) = $tmp2003;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2003));
// unreffing REF($120:org.pandalanguage.pandac.ChoiceCase)
// line 638
panda$collections$Array** $tmp2013 = &param1->choiceCases;
panda$collections$Array* $tmp2014 = *$tmp2013;
org$pandalanguage$pandac$ChoiceCase* $tmp2015 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp2014, ((panda$core$Object*) $tmp2015));
// line 639
org$pandalanguage$pandac$SymbolTable** $tmp2016 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2017 = *$tmp2016;
org$pandalanguage$pandac$ChoiceCase* $tmp2018 = *(&local5);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2017, ((org$pandalanguage$pandac$Symbol*) $tmp2018));
org$pandalanguage$pandac$ChoiceCase* $tmp2019 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2019));
// unreffing entry
*(&local5) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$collections$Array* $tmp2020 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2020));
// unreffing fields
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2021 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2021));
// unreffing doccomment
*(&local0) = ((panda$core$String*) NULL);
return;

}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* param0, panda$io$File* param1, panda$collections$MapView* param2, panda$core$String* param3, org$pandalanguage$pandac$Position param4, org$pandalanguage$pandac$ASTNode* param5, org$pandalanguage$pandac$FixedArray* param6, org$pandalanguage$pandac$ClassDecl$Kind param7, panda$core$String* param8, org$pandalanguage$pandac$FixedArray* param9, org$pandalanguage$pandac$FixedArray* param10, org$pandalanguage$pandac$FixedArray* param11) {

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
// line 646
*(&local0) = ((panda$core$String*) NULL);
// line 647
ITable* $tmp2023 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp2023->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2023 = $tmp2023->next;
}
$fn2025 $tmp2024 = $tmp2023->methods[1];
panda$core$Bit $tmp2026 = $tmp2024(((panda$core$Equatable*) param3), ((panda$core$Equatable*) &$s2022));
bool $tmp2027 = $tmp2026.value;
if ($tmp2027) goto block1; else goto block3;
block1:;
// line 648
panda$core$String* $tmp2028 = panda$core$String$convert$R$panda$core$String(param3);
panda$core$String* $tmp2029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2028, &$s2030);
panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2029, param8);
panda$core$String* $tmp2032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2031, &$s2033);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2032));
panda$core$String* $tmp2034 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2034));
*(&local0) = $tmp2032;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2032));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2031));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2029));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2028));
// unreffing REF($11:panda.core.String)
goto block2;
block3:;
// line 1
// line 651
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
panda$core$String* $tmp2035 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2035));
*(&local0) = param8;
goto block2;
block2:;
// line 653
*(&local1) = ((panda$core$String*) NULL);
// line 655
panda$core$Bit $tmp2036 = panda$core$Bit$init$builtin_bit(param5 == NULL);
bool $tmp2037 = $tmp2036.value;
if ($tmp2037) goto block4; else goto block6;
block4:;
// line 656
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp2038 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2038));
*(&local1) = ((panda$core$String*) NULL);
goto block5;
block6:;
// line 1
// line 659
panda$core$Int64* $tmp2039 = &param5->$rawValue;
panda$core$Int64 $tmp2040 = *$tmp2039;
panda$core$Int64 $tmp2041 = (panda$core$Int64) {40};
panda$core$Bit $tmp2042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2040, $tmp2041);
bool $tmp2043 = $tmp2042.value;
if ($tmp2043) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp2044 = (org$pandalanguage$pandac$Position*) (param5->$data + 0);
org$pandalanguage$pandac$Position $tmp2045 = *$tmp2044;
*(&local2) = $tmp2045;
panda$core$String** $tmp2046 = (panda$core$String**) (param5->$data + 16);
panda$core$String* $tmp2047 = *$tmp2046;
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2047));
panda$core$String* $tmp2048 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2048));
*(&local3) = $tmp2047;
// line 661
panda$core$String* $tmp2049 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2049));
panda$core$String* $tmp2050 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2050));
*(&local1) = $tmp2049;
panda$core$String* $tmp2051 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2051));
// unreffing text
*(&local3) = ((panda$core$String*) NULL);
goto block7;
block9:;
// line 664
panda$core$Bit $tmp2052 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2053 = $tmp2052.value;
if ($tmp2053) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp2054 = (panda$core$Int64) {664};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2055, $tmp2054);
abort(); // unreachable
block10:;
goto block7;
block7:;
goto block5;
block5:;
// line 668
org$pandalanguage$pandac$Annotations* $tmp2056 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param6);
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2056));
org$pandalanguage$pandac$Annotations* $tmp2057 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2057));
*(&local4) = $tmp2056;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2056));
// unreffing REF($104:org.pandalanguage.pandac.Annotations)
// line 669
panda$collections$Array* $tmp2058 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2058);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2058));
panda$collections$Array* $tmp2059 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2059));
*(&local5) = $tmp2058;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2058));
// unreffing REF($116:panda.collections.Array<org.pandalanguage.pandac.ClassDecl.GenericParameter>)
// line 670
panda$core$Bit $tmp2060 = panda$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2061 = $tmp2060.value;
if ($tmp2061) goto block12; else goto block13;
block12:;
// line 671
ITable* $tmp2062 = ((panda$collections$Iterable*) param9)->$class->itable;
while ($tmp2062->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2062 = $tmp2062->next;
}
$fn2064 $tmp2063 = $tmp2062->methods[0];
panda$collections$Iterator* $tmp2065 = $tmp2063(((panda$collections$Iterable*) param9));
goto block14;
block14:;
ITable* $tmp2066 = $tmp2065->$class->itable;
while ($tmp2066->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2066 = $tmp2066->next;
}
$fn2068 $tmp2067 = $tmp2066->methods[0];
panda$core$Bit $tmp2069 = $tmp2067($tmp2065);
bool $tmp2070 = $tmp2069.value;
if ($tmp2070) goto block16; else goto block15;
block15:;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2071 = $tmp2065->$class->itable;
while ($tmp2071->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2071 = $tmp2071->next;
}
$fn2073 $tmp2072 = $tmp2071->methods[1];
panda$core$Object* $tmp2074 = $tmp2072($tmp2065);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2074)));
org$pandalanguage$pandac$ASTNode* $tmp2075 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2075));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) $tmp2074);
// line 672
*(&local7) = ((panda$core$String*) NULL);
// line 673
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
// line 674
org$pandalanguage$pandac$ASTNode* $tmp2076 = *(&local6);
panda$core$Int64* $tmp2077 = &$tmp2076->$rawValue;
panda$core$Int64 $tmp2078 = *$tmp2077;
panda$core$Int64 $tmp2079 = (panda$core$Int64) {22};
panda$core$Bit $tmp2080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2078, $tmp2079);
bool $tmp2081 = $tmp2080.value;
if ($tmp2081) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp2082 = (org$pandalanguage$pandac$Position*) ($tmp2076->$data + 0);
org$pandalanguage$pandac$Position $tmp2083 = *$tmp2082;
panda$core$String** $tmp2084 = (panda$core$String**) ($tmp2076->$data + 16);
panda$core$String* $tmp2085 = *$tmp2084;
*(&local9) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2085));
panda$core$String* $tmp2086 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2086));
*(&local9) = $tmp2085;
// line 676
panda$core$String* $tmp2087 = *(&local9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2087));
panda$core$String* $tmp2088 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2088));
*(&local7) = $tmp2087;
// line 677
org$pandalanguage$pandac$Type* $tmp2089 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2089));
org$pandalanguage$pandac$Type* $tmp2090 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2090));
*(&local8) = $tmp2089;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2089));
// unreffing REF($189:org.pandalanguage.pandac.Type)
panda$core$String* $tmp2091 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2091));
// unreffing id
*(&local9) = ((panda$core$String*) NULL);
goto block17;
block19:;
panda$core$Int64 $tmp2092 = (panda$core$Int64) {46};
panda$core$Bit $tmp2093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2078, $tmp2092);
bool $tmp2094 = $tmp2093.value;
if ($tmp2094) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp2095 = (org$pandalanguage$pandac$Position*) ($tmp2076->$data + 0);
org$pandalanguage$pandac$Position $tmp2096 = *$tmp2095;
panda$core$String** $tmp2097 = (panda$core$String**) ($tmp2076->$data + 16);
panda$core$String* $tmp2098 = *$tmp2097;
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2098));
panda$core$String* $tmp2099 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2099));
*(&local10) = $tmp2098;
org$pandalanguage$pandac$ASTNode** $tmp2100 = (org$pandalanguage$pandac$ASTNode**) ($tmp2076->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2101 = *$tmp2100;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2101));
org$pandalanguage$pandac$ASTNode* $tmp2102 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2102));
*(&local11) = $tmp2101;
// line 680
panda$core$String* $tmp2103 = *(&local10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2103));
panda$core$String* $tmp2104 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2104));
*(&local7) = $tmp2103;
// line 681
org$pandalanguage$pandac$ASTNode* $tmp2105 = *(&local11);
org$pandalanguage$pandac$Type* $tmp2106 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2105);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2106));
org$pandalanguage$pandac$Type* $tmp2107 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
*(&local8) = $tmp2106;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2106));
// unreffing REF($240:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$ASTNode* $tmp2108 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2108));
// unreffing type
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2109 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2109));
// unreffing id
*(&local10) = ((panda$core$String*) NULL);
goto block17;
block21:;
// line 684
panda$core$Bit $tmp2110 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2111 = $tmp2110.value;
if ($tmp2111) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp2112 = (panda$core$Int64) {684};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2113, $tmp2112);
abort(); // unreachable
block22:;
goto block17;
block17:;
// line 687
panda$collections$Array* $tmp2114 = *(&local5);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp2115 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
org$pandalanguage$pandac$ASTNode* $tmp2116 = *(&local6);
$fn2118 $tmp2117 = ($fn2118) $tmp2116->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2119 = $tmp2117($tmp2116);
panda$core$String* $tmp2120 = *(&local0);
panda$core$String* $tmp2121 = *(&local7);
org$pandalanguage$pandac$Type* $tmp2122 = *(&local8);
org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp2115, $tmp2119, $tmp2120, $tmp2121, $tmp2122);
panda$collections$Array$add$panda$collections$Array$T($tmp2114, ((panda$core$Object*) $tmp2115));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2115));
// unreffing REF($272:org.pandalanguage.pandac.ClassDecl.GenericParameter)
org$pandalanguage$pandac$Type* $tmp2123 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2123));
// unreffing bound
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp2124 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2124));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2074);
// unreffing REF($149:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2125 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2125));
// unreffing p
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block16:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2065));
// unreffing REF($138:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block13;
block13:;
// line 690
panda$collections$Array* $tmp2126 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2126);
*(&local12) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2126));
panda$collections$Array* $tmp2127 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2127));
*(&local12) = $tmp2126;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2126));
// unreffing REF($309:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 691
panda$core$Bit $tmp2128 = panda$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2129 = $tmp2128.value;
if ($tmp2129) goto block24; else goto block25;
block24:;
// line 692
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2130;
$tmp2130 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2130->value = param7;
panda$core$Int64 $tmp2131 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2132 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2131);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2133;
$tmp2133 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2133->value = $tmp2132;
ITable* $tmp2134 = ((panda$core$Equatable*) $tmp2130)->$class->itable;
while ($tmp2134->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2134 = $tmp2134->next;
}
$fn2136 $tmp2135 = $tmp2134->methods[0];
panda$core$Bit $tmp2137 = $tmp2135(((panda$core$Equatable*) $tmp2130), ((panda$core$Equatable*) $tmp2133));
bool $tmp2138 = $tmp2137.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2133)));
// unreffing REF($332:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2130)));
// unreffing REF($328:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
if ($tmp2138) goto block26; else goto block27;
block26:;
// line 693
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param4, &$s2139);
goto block27;
block27:;
// line 695
ITable* $tmp2140 = ((panda$collections$Iterable*) param10)->$class->itable;
while ($tmp2140->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2140 = $tmp2140->next;
}
$fn2142 $tmp2141 = $tmp2140->methods[0];
panda$collections$Iterator* $tmp2143 = $tmp2141(((panda$collections$Iterable*) param10));
goto block28;
block28:;
ITable* $tmp2144 = $tmp2143->$class->itable;
while ($tmp2144->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2144 = $tmp2144->next;
}
$fn2146 $tmp2145 = $tmp2144->methods[0];
panda$core$Bit $tmp2147 = $tmp2145($tmp2143);
bool $tmp2148 = $tmp2147.value;
if ($tmp2148) goto block30; else goto block29;
block29:;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2149 = $tmp2143->$class->itable;
while ($tmp2149->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2149 = $tmp2149->next;
}
$fn2151 $tmp2150 = $tmp2149->methods[1];
panda$core$Object* $tmp2152 = $tmp2150($tmp2143);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2152)));
org$pandalanguage$pandac$ASTNode* $tmp2153 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2153));
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) $tmp2152);
// line 696
panda$collections$Array* $tmp2154 = *(&local12);
org$pandalanguage$pandac$ASTNode* $tmp2155 = *(&local13);
org$pandalanguage$pandac$Type* $tmp2156 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2155);
panda$collections$Array$add$panda$collections$Array$T($tmp2154, ((panda$core$Object*) $tmp2156));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2156));
// unreffing REF($373:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp2152);
// unreffing REF($361:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2157 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2157));
// unreffing s
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block28;
block30:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2143));
// unreffing REF($350:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block25;
block25:;
// line 699
org$pandalanguage$pandac$ClassDecl* $tmp2158 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
panda$core$String* $tmp2159 = *(&local1);
org$pandalanguage$pandac$Annotations* $tmp2160 = *(&local4);
panda$core$String* $tmp2161 = *(&local0);
panda$collections$Array* $tmp2162 = *(&local12);
panda$collections$Array* $tmp2163 = *(&local5);
panda$core$Weak** $tmp2164 = &param0->compiler;
panda$core$Weak* $tmp2165 = *$tmp2164;
panda$core$Object* $tmp2166 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2165);
org$pandalanguage$pandac$SymbolTable** $tmp2167 = &((org$pandalanguage$pandac$Compiler*) $tmp2166)->root;
org$pandalanguage$pandac$SymbolTable* $tmp2168 = *$tmp2167;
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2158, param1, param4, param2, $tmp2159, $tmp2160, param7, $tmp2161, ((panda$collections$ListView*) $tmp2162), $tmp2163, $tmp2168);
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2158));
org$pandalanguage$pandac$ClassDecl* $tmp2169 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2169));
*(&local14) = $tmp2158;
panda$core$Panda$unref$panda$core$Object$Q($tmp2166);
// unreffing REF($403:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2158));
// unreffing REF($393:org.pandalanguage.pandac.ClassDecl)
// line 701
panda$core$Weak** $tmp2170 = &param0->compiler;
panda$core$Weak* $tmp2171 = *$tmp2170;
panda$core$Object* $tmp2172 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2171);
panda$collections$Stack** $tmp2173 = &((org$pandalanguage$pandac$Compiler*) $tmp2172)->currentClass;
panda$collections$Stack* $tmp2174 = *$tmp2173;
org$pandalanguage$pandac$ClassDecl* $tmp2175 = *(&local14);
panda$collections$Stack$push$panda$collections$Stack$T($tmp2174, ((panda$core$Object*) $tmp2175));
panda$core$Panda$unref$panda$core$Object$Q($tmp2172);
// unreffing REF($425:panda.core.Weak.T)
// line 702
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2176;
$tmp2176 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2176->value = param7;
panda$core$Int64 $tmp2177 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2178 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2177);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2179;
$tmp2179 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2179->value = $tmp2178;
ITable* $tmp2180 = ((panda$core$Equatable*) $tmp2176)->$class->itable;
while ($tmp2180->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2180 = $tmp2180->next;
}
$fn2182 $tmp2181 = $tmp2180->methods[0];
panda$core$Bit $tmp2183 = $tmp2181(((panda$core$Equatable*) $tmp2176), ((panda$core$Equatable*) $tmp2179));
bool $tmp2184 = $tmp2183.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2179)));
// unreffing REF($441:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2176)));
// unreffing REF($437:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
if ($tmp2184) goto block31; else goto block32;
block31:;
// line 703
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
org$pandalanguage$pandac$Type* $tmp2194 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp2185, $tmp2186, $tmp2189, ((panda$core$String*) NULL), $tmp2190, $tmp2193, &$s2195, $tmp2194, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
org$pandalanguage$pandac$FieldDecl* $tmp2196 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2196));
*(&local15) = $tmp2185;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2194));
// unreffing REF($463:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2190));
// unreffing REF($458:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
// unreffing REF($453:org.pandalanguage.pandac.FieldDecl)
// line 706
org$pandalanguage$pandac$ClassDecl* $tmp2197 = *(&local14);
panda$collections$Array** $tmp2198 = &$tmp2197->fields;
panda$collections$Array* $tmp2199 = *$tmp2198;
org$pandalanguage$pandac$FieldDecl* $tmp2200 = *(&local15);
panda$collections$Array$add$panda$collections$Array$T($tmp2199, ((panda$core$Object*) $tmp2200));
// line 707
org$pandalanguage$pandac$ClassDecl* $tmp2201 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2202 = &$tmp2201->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2203 = *$tmp2202;
org$pandalanguage$pandac$FieldDecl* $tmp2204 = *(&local15);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2203, ((org$pandalanguage$pandac$Symbol*) $tmp2204));
// line 708
org$pandalanguage$pandac$FieldDecl* $tmp2205 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2206 = *(&local14);
org$pandalanguage$pandac$ClassDecl* $tmp2207 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2208 = &$tmp2207->position;
org$pandalanguage$pandac$Position $tmp2209 = *$tmp2208;
org$pandalanguage$pandac$Annotations* $tmp2210 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2211 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2210, $tmp2211);
panda$core$Int64 $tmp2212 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp2213 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp2212);
org$pandalanguage$pandac$Type* $tmp2214 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp2205, $tmp2206, $tmp2209, ((panda$core$String*) NULL), $tmp2210, $tmp2213, &$s2215, $tmp2214, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2205));
org$pandalanguage$pandac$FieldDecl* $tmp2216 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2216));
*(&local16) = $tmp2205;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2214));
// unreffing REF($507:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2210));
// unreffing REF($502:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2205));
// unreffing REF($497:org.pandalanguage.pandac.FieldDecl)
// line 711
org$pandalanguage$pandac$ClassDecl* $tmp2217 = *(&local14);
panda$collections$Array** $tmp2218 = &$tmp2217->fields;
panda$collections$Array* $tmp2219 = *$tmp2218;
org$pandalanguage$pandac$FieldDecl* $tmp2220 = *(&local16);
panda$collections$Array$add$panda$collections$Array$T($tmp2219, ((panda$core$Object*) $tmp2220));
// line 712
org$pandalanguage$pandac$ClassDecl* $tmp2221 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2222 = &$tmp2221->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2223 = *$tmp2222;
org$pandalanguage$pandac$FieldDecl* $tmp2224 = *(&local16);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2223, ((org$pandalanguage$pandac$Symbol*) $tmp2224));
org$pandalanguage$pandac$FieldDecl* $tmp2225 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2225));
// unreffing data
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2226 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2226));
// unreffing rawValue
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block32;
block32:;
// line 714
ITable* $tmp2227 = ((panda$collections$Iterable*) param11)->$class->itable;
while ($tmp2227->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2227 = $tmp2227->next;
}
$fn2229 $tmp2228 = $tmp2227->methods[0];
panda$collections$Iterator* $tmp2230 = $tmp2228(((panda$collections$Iterable*) param11));
goto block33;
block33:;
ITable* $tmp2231 = $tmp2230->$class->itable;
while ($tmp2231->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2231 = $tmp2231->next;
}
$fn2233 $tmp2232 = $tmp2231->methods[0];
panda$core$Bit $tmp2234 = $tmp2232($tmp2230);
bool $tmp2235 = $tmp2234.value;
if ($tmp2235) goto block35; else goto block34;
block34:;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2236 = $tmp2230->$class->itable;
while ($tmp2236->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2236 = $tmp2236->next;
}
$fn2238 $tmp2237 = $tmp2236->methods[1];
panda$core$Object* $tmp2239 = $tmp2237($tmp2230);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2239)));
org$pandalanguage$pandac$ASTNode* $tmp2240 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2240));
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) $tmp2239);
// line 715
org$pandalanguage$pandac$ASTNode* $tmp2241 = *(&local17);
panda$core$Int64* $tmp2242 = &$tmp2241->$rawValue;
panda$core$Int64 $tmp2243 = *$tmp2242;
panda$core$Int64 $tmp2244 = (panda$core$Int64) {28};
panda$core$Bit $tmp2245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2243, $tmp2244);
bool $tmp2246 = $tmp2245.value;
if ($tmp2246) goto block37; else goto block38;
block37:;
org$pandalanguage$pandac$Position* $tmp2247 = (org$pandalanguage$pandac$Position*) ($tmp2241->$data + 0);
org$pandalanguage$pandac$Position $tmp2248 = *$tmp2247;
*(&local18) = $tmp2248;
org$pandalanguage$pandac$ASTNode** $tmp2249 = (org$pandalanguage$pandac$ASTNode**) ($tmp2241->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2250 = *$tmp2249;
org$pandalanguage$pandac$FixedArray** $tmp2251 = (org$pandalanguage$pandac$FixedArray**) ($tmp2241->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2252 = *$tmp2251;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2253 = (org$pandalanguage$pandac$MethodDecl$Kind*) ($tmp2241->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2254 = *$tmp2253;
*(&local19) = $tmp2254;
panda$core$String** $tmp2255 = (panda$core$String**) ($tmp2241->$data + 40);
panda$core$String* $tmp2256 = *$tmp2255;
org$pandalanguage$pandac$FixedArray** $tmp2257 = (org$pandalanguage$pandac$FixedArray**) ($tmp2241->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp2258 = *$tmp2257;
org$pandalanguage$pandac$FixedArray** $tmp2259 = (org$pandalanguage$pandac$FixedArray**) ($tmp2241->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp2260 = *$tmp2259;
org$pandalanguage$pandac$ASTNode** $tmp2261 = (org$pandalanguage$pandac$ASTNode**) ($tmp2241->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2262 = *$tmp2261;
org$pandalanguage$pandac$FixedArray** $tmp2263 = (org$pandalanguage$pandac$FixedArray**) ($tmp2241->$data + 72);
org$pandalanguage$pandac$FixedArray* $tmp2264 = *$tmp2263;
// line 717
org$pandalanguage$pandac$MethodDecl$Kind $tmp2265 = *(&local19);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2266;
$tmp2266 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2266->value = $tmp2265;
panda$core$Int64 $tmp2267 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2268 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2267);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2269;
$tmp2269 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2269->value = $tmp2268;
ITable* $tmp2270 = ((panda$core$Equatable*) $tmp2266)->$class->itable;
while ($tmp2270->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2270 = $tmp2270->next;
}
$fn2272 $tmp2271 = $tmp2270->methods[0];
panda$core$Bit $tmp2273 = $tmp2271(((panda$core$Equatable*) $tmp2266), ((panda$core$Equatable*) $tmp2269));
bool $tmp2274 = $tmp2273.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2269)));
// unreffing REF($608:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2266)));
// unreffing REF($604:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp2274) goto block39; else goto block40;
block39:;
// line 718
panda$core$Int64 $tmp2275 = param7.$rawValue;
panda$core$Int64 $tmp2276 = (panda$core$Int64) {0};
panda$core$Bit $tmp2277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2275, $tmp2276);
bool $tmp2278 = $tmp2277.value;
if ($tmp2278) goto block42; else goto block43;
block42:;
goto block41;
block43:;
panda$core$Int64 $tmp2279 = (panda$core$Int64) {1};
panda$core$Bit $tmp2280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2275, $tmp2279);
bool $tmp2281 = $tmp2280.value;
if ($tmp2281) goto block44; else goto block45;
block44:;
// line 723
org$pandalanguage$pandac$Position $tmp2282 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2282, &$s2283);
goto block41;
block45:;
panda$core$Int64 $tmp2284 = (panda$core$Int64) {2};
panda$core$Bit $tmp2285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2275, $tmp2284);
bool $tmp2286 = $tmp2285.value;
if ($tmp2286) goto block46; else goto block41;
block46:;
// line 726
org$pandalanguage$pandac$Position $tmp2287 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2287, &$s2288);
goto block41;
block41:;
goto block40;
block40:;
goto block36;
block38:;
goto block36;
block36:;
// line 735
org$pandalanguage$pandac$ClassDecl* $tmp2289 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp2290 = *(&local17);
org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(param0, $tmp2289, $tmp2290);
panda$core$Panda$unref$panda$core$Object$Q($tmp2239);
// unreffing REF($566:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2291 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2291));
// unreffing m
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block33;
block35:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2230));
// unreffing REF($555:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 737
panda$core$Bit $tmp2292 = panda$core$Bit$init$builtin_bit(false);
*(&local20) = $tmp2292;
// line 738
panda$core$Bit $tmp2293 = panda$core$Bit$init$builtin_bit(false);
*(&local21) = $tmp2293;
// line 739
org$pandalanguage$pandac$ClassDecl* $tmp2294 = *(&local14);
panda$collections$Array** $tmp2295 = &$tmp2294->methods;
panda$collections$Array* $tmp2296 = *$tmp2295;
ITable* $tmp2297 = ((panda$collections$Iterable*) $tmp2296)->$class->itable;
while ($tmp2297->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2297 = $tmp2297->next;
}
$fn2299 $tmp2298 = $tmp2297->methods[0];
panda$collections$Iterator* $tmp2300 = $tmp2298(((panda$collections$Iterable*) $tmp2296));
goto block47;
block47:;
ITable* $tmp2301 = $tmp2300->$class->itable;
while ($tmp2301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2301 = $tmp2301->next;
}
$fn2303 $tmp2302 = $tmp2301->methods[0];
panda$core$Bit $tmp2304 = $tmp2302($tmp2300);
bool $tmp2305 = $tmp2304.value;
if ($tmp2305) goto block49; else goto block48;
block48:;
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp2306 = $tmp2300->$class->itable;
while ($tmp2306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2306 = $tmp2306->next;
}
$fn2308 $tmp2307 = $tmp2306->methods[1];
panda$core$Object* $tmp2309 = $tmp2307($tmp2300);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2309)));
org$pandalanguage$pandac$MethodDecl* $tmp2310 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2310));
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) $tmp2309);
// line 740
org$pandalanguage$pandac$MethodDecl* $tmp2311 = *(&local22);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2312 = &$tmp2311->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp2313 = *$tmp2312;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2314;
$tmp2314 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2314->value = $tmp2313;
panda$core$Int64 $tmp2315 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2316 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2315);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2317;
$tmp2317 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2317->value = $tmp2316;
ITable* $tmp2318 = ((panda$core$Equatable*) $tmp2314)->$class->itable;
while ($tmp2318->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2318 = $tmp2318->next;
}
$fn2320 $tmp2319 = $tmp2318->methods[0];
panda$core$Bit $tmp2321 = $tmp2319(((panda$core$Equatable*) $tmp2314), ((panda$core$Equatable*) $tmp2317));
bool $tmp2322 = $tmp2321.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2317)));
// unreffing REF($701:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2314)));
// unreffing REF($697:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp2322) goto block50; else goto block51;
block50:;
// line 741
panda$core$Bit $tmp2323 = panda$core$Bit$init$builtin_bit(true);
*(&local20) = $tmp2323;
goto block51;
block51:;
// line 743
org$pandalanguage$pandac$MethodDecl* $tmp2324 = *(&local22);
panda$core$String** $tmp2325 = &((org$pandalanguage$pandac$Symbol*) $tmp2324)->name;
panda$core$String* $tmp2326 = *$tmp2325;
panda$core$Bit $tmp2327 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2326, &$s2328);
bool $tmp2329 = $tmp2327.value;
if ($tmp2329) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$MethodDecl* $tmp2330 = *(&local22);
panda$collections$Array** $tmp2331 = &$tmp2330->parameters;
panda$collections$Array* $tmp2332 = *$tmp2331;
ITable* $tmp2333 = ((panda$collections$CollectionView*) $tmp2332)->$class->itable;
while ($tmp2333->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2333 = $tmp2333->next;
}
$fn2335 $tmp2334 = $tmp2333->methods[0];
panda$core$Int64 $tmp2336 = $tmp2334(((panda$collections$CollectionView*) $tmp2332));
panda$core$Int64 $tmp2337 = (panda$core$Int64) {0};
panda$core$Bit $tmp2338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2336, $tmp2337);
*(&local23) = $tmp2338;
goto block56;
block55:;
*(&local23) = $tmp2327;
goto block56;
block56:;
panda$core$Bit $tmp2339 = *(&local23);
bool $tmp2340 = $tmp2339.value;
if ($tmp2340) goto block52; else goto block53;
block52:;
// line 744
panda$core$Bit $tmp2341 = panda$core$Bit$init$builtin_bit(true);
*(&local21) = $tmp2341;
// line 745
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2342;
$tmp2342 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2342->value = param7;
panda$core$Int64 $tmp2343 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2344 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2343);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2345;
$tmp2345 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2345->value = $tmp2344;
ITable* $tmp2346 = ((panda$core$Equatable*) $tmp2342)->$class->itable;
while ($tmp2346->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2346 = $tmp2346->next;
}
$fn2348 $tmp2347 = $tmp2346->methods[0];
panda$core$Bit $tmp2349 = $tmp2347(((panda$core$Equatable*) $tmp2342), ((panda$core$Equatable*) $tmp2345));
bool $tmp2350 = $tmp2349.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2345)));
// unreffing REF($747:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2342)));
// unreffing REF($743:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
if ($tmp2350) goto block57; else goto block58;
block57:;
// line 746
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param4, &$s2351);
goto block58;
block58:;
goto block53;
block53:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2309);
// unreffing REF($685:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp2352 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2352));
// unreffing m
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block47;
block49:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2300));
// unreffing REF($674:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 750
panda$core$Bit $tmp2353 = *(&local20);
panda$core$Bit $tmp2354 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2353);
bool $tmp2355 = $tmp2354.value;
if ($tmp2355) goto block61; else goto block62;
block61:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2356;
$tmp2356 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2356->value = param7;
panda$core$Int64 $tmp2357 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2358 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2357);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2359;
$tmp2359 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2359->value = $tmp2358;
ITable* $tmp2360 = ((panda$core$Equatable*) $tmp2356)->$class->itable;
while ($tmp2360->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2360 = $tmp2360->next;
}
$fn2362 $tmp2361 = $tmp2360->methods[0];
panda$core$Bit $tmp2363 = $tmp2361(((panda$core$Equatable*) $tmp2356), ((panda$core$Equatable*) $tmp2359));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2359)));
// unreffing REF($783:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2356)));
// unreffing REF($779:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
*(&local25) = $tmp2363;
goto block63;
block62:;
*(&local25) = $tmp2354;
goto block63;
block63:;
panda$core$Bit $tmp2364 = *(&local25);
bool $tmp2365 = $tmp2364.value;
if ($tmp2365) goto block64; else goto block65;
block64:;
org$pandalanguage$pandac$ClassDecl* $tmp2366 = *(&local14);
panda$core$String** $tmp2367 = &$tmp2366->name;
panda$core$String* $tmp2368 = *$tmp2367;
ITable* $tmp2370 = ((panda$core$Equatable*) $tmp2368)->$class->itable;
while ($tmp2370->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2370 = $tmp2370->next;
}
$fn2372 $tmp2371 = $tmp2370->methods[1];
panda$core$Bit $tmp2373 = $tmp2371(((panda$core$Equatable*) $tmp2368), ((panda$core$Equatable*) &$s2369));
*(&local24) = $tmp2373;
goto block66;
block65:;
*(&local24) = $tmp2364;
goto block66;
block66:;
panda$core$Bit $tmp2374 = *(&local24);
bool $tmp2375 = $tmp2374.value;
if ($tmp2375) goto block59; else goto block60;
block59:;
// line 751
org$pandalanguage$pandac$MethodDecl* $tmp2376 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2377 = *(&local14);
org$pandalanguage$pandac$Annotations* $tmp2378 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2379 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2378, $tmp2379);
panda$core$Int64 $tmp2380 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2381 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2380);
panda$collections$Array* $tmp2382 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp2383 = (panda$core$Int64) {0};
panda$collections$Array$init$panda$core$Int64($tmp2382, $tmp2383);
org$pandalanguage$pandac$Type* $tmp2384 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FixedArray* $tmp2385 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp2385);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2376, $tmp2377, param4, ((panda$core$String*) NULL), $tmp2378, $tmp2381, &$s2386, ((panda$collections$Array*) NULL), $tmp2382, $tmp2384, $tmp2385);
*(&local26) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2376));
org$pandalanguage$pandac$MethodDecl* $tmp2387 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2387));
*(&local26) = $tmp2376;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2385));
// unreffing REF($827:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2384));
// unreffing REF($826:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2382));
// unreffing REF($822:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2378));
// unreffing REF($817:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2376));
// unreffing REF($815:org.pandalanguage.pandac.MethodDecl)
// line 754
org$pandalanguage$pandac$ClassDecl* $tmp2388 = *(&local14);
panda$collections$Array** $tmp2389 = &$tmp2388->methods;
panda$collections$Array* $tmp2390 = *$tmp2389;
org$pandalanguage$pandac$MethodDecl* $tmp2391 = *(&local26);
panda$collections$Array$add$panda$collections$Array$T($tmp2390, ((panda$core$Object*) $tmp2391));
// line 755
org$pandalanguage$pandac$ClassDecl* $tmp2392 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2393 = &$tmp2392->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2394 = *$tmp2393;
org$pandalanguage$pandac$MethodDecl* $tmp2395 = *(&local26);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2394, ((org$pandalanguage$pandac$Symbol*) $tmp2395));
org$pandalanguage$pandac$MethodDecl* $tmp2396 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
// unreffing defaultInit
*(&local26) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block60;
block60:;
// line 757
panda$core$Bit $tmp2397 = *(&local21);
panda$core$Bit $tmp2398 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2397);
bool $tmp2399 = $tmp2398.value;
if ($tmp2399) goto block69; else goto block70;
block69:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2400;
$tmp2400 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2400->value = param7;
panda$core$Int64 $tmp2401 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2402 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2401);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2403;
$tmp2403 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2403->value = $tmp2402;
ITable* $tmp2404 = ((panda$core$Equatable*) $tmp2400)->$class->itable;
while ($tmp2404->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2404 = $tmp2404->next;
}
$fn2406 $tmp2405 = $tmp2404->methods[0];
panda$core$Bit $tmp2407 = $tmp2405(((panda$core$Equatable*) $tmp2400), ((panda$core$Equatable*) $tmp2403));
bool $tmp2408 = $tmp2407.value;
if ($tmp2408) goto block72; else goto block73;
block72:;
*(&local29) = $tmp2407;
goto block74;
block73:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2409;
$tmp2409 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2409->value = param7;
panda$core$Int64 $tmp2410 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2411 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2410);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2412;
$tmp2412 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2412->value = $tmp2411;
ITable* $tmp2413 = ((panda$core$Equatable*) $tmp2409)->$class->itable;
while ($tmp2413->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2413 = $tmp2413->next;
}
$fn2415 $tmp2414 = $tmp2413->methods[0];
panda$core$Bit $tmp2416 = $tmp2414(((panda$core$Equatable*) $tmp2409), ((panda$core$Equatable*) $tmp2412));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2412)));
// unreffing REF($895:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2409)));
// unreffing REF($891:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
*(&local29) = $tmp2416;
goto block74;
block74:;
panda$core$Bit $tmp2417 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2403)));
// unreffing REF($884:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2400)));
// unreffing REF($880:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
*(&local28) = $tmp2417;
goto block71;
block70:;
*(&local28) = $tmp2398;
goto block71;
block71:;
panda$core$Bit $tmp2418 = *(&local28);
bool $tmp2419 = $tmp2418.value;
if ($tmp2419) goto block75; else goto block76;
block75:;
org$pandalanguage$pandac$ClassDecl* $tmp2420 = *(&local14);
panda$core$String** $tmp2421 = &$tmp2420->name;
panda$core$String* $tmp2422 = *$tmp2421;
ITable* $tmp2424 = ((panda$core$Equatable*) $tmp2422)->$class->itable;
while ($tmp2424->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2424 = $tmp2424->next;
}
$fn2426 $tmp2425 = $tmp2424->methods[1];
panda$core$Bit $tmp2427 = $tmp2425(((panda$core$Equatable*) $tmp2422), ((panda$core$Equatable*) &$s2423));
*(&local27) = $tmp2427;
goto block77;
block76:;
*(&local27) = $tmp2418;
goto block77;
block77:;
panda$core$Bit $tmp2428 = *(&local27);
bool $tmp2429 = $tmp2428.value;
if ($tmp2429) goto block67; else goto block68;
block67:;
// line 759
org$pandalanguage$pandac$MethodDecl* $tmp2430 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2431 = *(&local14);
org$pandalanguage$pandac$Annotations* $tmp2432 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2433 = (panda$core$Int64) {32};
panda$core$Int64 $tmp2434 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp2435 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2433, $tmp2434);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2432, $tmp2435);
panda$core$Int64 $tmp2436 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2437 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2436);
panda$collections$Array* $tmp2438 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp2439 = (panda$core$Int64) {0};
panda$collections$Array$init$panda$core$Int64($tmp2438, $tmp2439);
org$pandalanguage$pandac$Type* $tmp2440 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FixedArray* $tmp2441 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp2441);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2430, $tmp2431, param4, ((panda$core$String*) NULL), $tmp2432, $tmp2437, &$s2442, ((panda$collections$Array*) NULL), $tmp2438, $tmp2440, $tmp2441);
*(&local30) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2430));
org$pandalanguage$pandac$MethodDecl* $tmp2443 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2443));
*(&local30) = $tmp2430;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2441));
// unreffing REF($950:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2440));
// unreffing REF($949:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2438));
// unreffing REF($945:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2432));
// unreffing REF($938:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2430));
// unreffing REF($936:org.pandalanguage.pandac.MethodDecl)
// line 762
org$pandalanguage$pandac$ClassDecl* $tmp2444 = *(&local14);
panda$collections$Array** $tmp2445 = &$tmp2444->methods;
panda$collections$Array* $tmp2446 = *$tmp2445;
org$pandalanguage$pandac$MethodDecl* $tmp2447 = *(&local30);
panda$collections$Array$add$panda$collections$Array$T($tmp2446, ((panda$core$Object*) $tmp2447));
// line 763
org$pandalanguage$pandac$ClassDecl* $tmp2448 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2449 = &$tmp2448->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2450 = *$tmp2449;
org$pandalanguage$pandac$MethodDecl* $tmp2451 = *(&local30);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2450, ((org$pandalanguage$pandac$Symbol*) $tmp2451));
org$pandalanguage$pandac$MethodDecl* $tmp2452 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
// unreffing defaultCleanup
*(&local30) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block68;
block68:;
// line 765
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2453;
$tmp2453 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2453->value = param7;
panda$core$Int64 $tmp2454 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2455 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2454);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2456;
$tmp2456 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2456->value = $tmp2455;
ITable* $tmp2457 = ((panda$core$Equatable*) $tmp2453)->$class->itable;
while ($tmp2457->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2457 = $tmp2457->next;
}
$fn2459 $tmp2458 = $tmp2457->methods[0];
panda$core$Bit $tmp2460 = $tmp2458(((panda$core$Equatable*) $tmp2453), ((panda$core$Equatable*) $tmp2456));
bool $tmp2461 = $tmp2460.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2456)));
// unreffing REF($1003:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2453)));
// unreffing REF($999:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
if ($tmp2461) goto block78; else goto block79;
block78:;
// line 766
panda$core$Bit $tmp2462 = panda$core$Bit$init$builtin_bit(false);
*(&local31) = $tmp2462;
// line 767
org$pandalanguage$pandac$ClassDecl* $tmp2463 = *(&local14);
panda$collections$Array** $tmp2464 = &$tmp2463->choiceCases;
panda$collections$Array* $tmp2465 = *$tmp2464;
ITable* $tmp2466 = ((panda$collections$CollectionView*) $tmp2465)->$class->itable;
while ($tmp2466->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2466 = $tmp2466->next;
}
$fn2468 $tmp2467 = $tmp2466->methods[0];
panda$core$Int64 $tmp2469 = $tmp2467(((panda$collections$CollectionView*) $tmp2465));
panda$core$Int64 $tmp2470 = (panda$core$Int64) {0};
int64_t $tmp2471 = $tmp2469.value;
int64_t $tmp2472 = $tmp2470.value;
bool $tmp2473 = $tmp2471 > $tmp2472;
panda$core$Bit $tmp2474 = (panda$core$Bit) {$tmp2473};
bool $tmp2475 = $tmp2474.value;
if ($tmp2475) goto block80; else goto block82;
block80:;
// line 768
org$pandalanguage$pandac$ClassDecl* $tmp2476 = *(&local14);
panda$collections$Array** $tmp2477 = &$tmp2476->choiceCases;
panda$collections$Array* $tmp2478 = *$tmp2477;
ITable* $tmp2479 = ((panda$collections$Iterable*) $tmp2478)->$class->itable;
while ($tmp2479->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2479 = $tmp2479->next;
}
$fn2481 $tmp2480 = $tmp2479->methods[0];
panda$collections$Iterator* $tmp2482 = $tmp2480(((panda$collections$Iterable*) $tmp2478));
goto block83;
block83:;
ITable* $tmp2483 = $tmp2482->$class->itable;
while ($tmp2483->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2483 = $tmp2483->next;
}
$fn2485 $tmp2484 = $tmp2483->methods[0];
panda$core$Bit $tmp2486 = $tmp2484($tmp2482);
bool $tmp2487 = $tmp2486.value;
if ($tmp2487) goto block85; else goto block84;
block84:;
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
ITable* $tmp2488 = $tmp2482->$class->itable;
while ($tmp2488->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2488 = $tmp2488->next;
}
$fn2490 $tmp2489 = $tmp2488->methods[1];
panda$core$Object* $tmp2491 = $tmp2489($tmp2482);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ChoiceCase*) $tmp2491)));
org$pandalanguage$pandac$ChoiceCase* $tmp2492 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2492));
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) $tmp2491);
// line 769
org$pandalanguage$pandac$ChoiceCase* $tmp2493 = *(&local32);
panda$collections$Array** $tmp2494 = &$tmp2493->fields;
panda$collections$Array* $tmp2495 = *$tmp2494;
ITable* $tmp2496 = ((panda$collections$CollectionView*) $tmp2495)->$class->itable;
while ($tmp2496->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2496 = $tmp2496->next;
}
$fn2498 $tmp2497 = $tmp2496->methods[0];
panda$core$Int64 $tmp2499 = $tmp2497(((panda$collections$CollectionView*) $tmp2495));
panda$core$Int64 $tmp2500 = (panda$core$Int64) {0};
int64_t $tmp2501 = $tmp2499.value;
int64_t $tmp2502 = $tmp2500.value;
bool $tmp2503 = $tmp2501 > $tmp2502;
panda$core$Bit $tmp2504 = (panda$core$Bit) {$tmp2503};
bool $tmp2505 = $tmp2504.value;
if ($tmp2505) goto block86; else goto block87;
block86:;
// line 770
panda$core$Bit $tmp2506 = panda$core$Bit$init$builtin_bit(true);
*(&local31) = $tmp2506;
// line 771
panda$core$Panda$unref$panda$core$Object$Q($tmp2491);
// unreffing REF($1049:panda.collections.Iterator.T)
org$pandalanguage$pandac$ChoiceCase* $tmp2507 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2507));
// unreffing e
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
goto block85;
block87:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2491);
// unreffing REF($1049:panda.collections.Iterator.T)
org$pandalanguage$pandac$ChoiceCase* $tmp2508 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2508));
// unreffing e
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
goto block83;
block85:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2482));
// unreffing REF($1038:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block81;
block82:;
// line 1
// line 776
org$pandalanguage$pandac$ClassDecl* $tmp2509 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2510 = &$tmp2509->position;
org$pandalanguage$pandac$Position $tmp2511 = *$tmp2510;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2511, &$s2512);
// line 777
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp2513 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2513));
// unreffing result
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp2514 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2514));
// unreffing supertypes
*(&local12) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2515 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2515));
// unreffing parameters
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp2516 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2516));
// unreffing annotations
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp2517 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2517));
// unreffing doccomment
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2518 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2518));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ClassDecl*) NULL);
block81:;
// line 779
panda$core$Bit $tmp2519 = *(&local31);
panda$core$Bit $tmp2520 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2519);
bool $tmp2521 = $tmp2520.value;
if ($tmp2521) goto block88; else goto block89;
block88:;
// line 780
org$pandalanguage$pandac$ClassDecl* $tmp2522 = *(&local14);
org$pandalanguage$pandac$Type* $tmp2523 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2523));
org$pandalanguage$pandac$Type** $tmp2524 = &$tmp2522->rawSuper;
org$pandalanguage$pandac$Type* $tmp2525 = *$tmp2524;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2525));
org$pandalanguage$pandac$Type** $tmp2526 = &$tmp2522->rawSuper;
*$tmp2526 = $tmp2523;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2523));
// unreffing REF($1144:org.pandalanguage.pandac.Type)
goto block89;
block89:;
goto block79;
block79:;
// line 783
panda$core$Weak** $tmp2527 = &param0->compiler;
panda$core$Weak* $tmp2528 = *$tmp2527;
panda$core$Object* $tmp2529 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2528);
panda$collections$Stack** $tmp2530 = &((org$pandalanguage$pandac$Compiler*) $tmp2529)->currentClass;
panda$collections$Stack* $tmp2531 = *$tmp2530;
panda$core$Object* $tmp2532 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2531);
panda$core$Panda$unref$panda$core$Object$Q($tmp2532);
// unreffing REF($1168:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp2529);
// unreffing REF($1163:panda.core.Weak.T)
// line 784
org$pandalanguage$pandac$ClassDecl* $tmp2533 = *(&local14);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2533));
org$pandalanguage$pandac$ClassDecl* $tmp2534 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2534));
// unreffing result
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp2535 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2535));
// unreffing supertypes
*(&local12) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2536 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2536));
// unreffing parameters
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp2537 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2537));
// unreffing annotations
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp2538 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2538));
// unreffing doccomment
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2539 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2539));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
return $tmp2533;

}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ClassDecl* param1, panda$collections$Array* param2) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
// line 788
panda$collections$Array$add$panda$collections$Array$T(param2, ((panda$core$Object*) param1));
// line 789
panda$collections$Array** $tmp2540 = &param1->classes;
panda$collections$Array* $tmp2541 = *$tmp2540;
ITable* $tmp2542 = ((panda$collections$Iterable*) $tmp2541)->$class->itable;
while ($tmp2542->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2542 = $tmp2542->next;
}
$fn2544 $tmp2543 = $tmp2542->methods[0];
panda$collections$Iterator* $tmp2545 = $tmp2543(((panda$collections$Iterable*) $tmp2541));
goto block1;
block1:;
ITable* $tmp2546 = $tmp2545->$class->itable;
while ($tmp2546->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2546 = $tmp2546->next;
}
$fn2548 $tmp2547 = $tmp2546->methods[0];
panda$core$Bit $tmp2549 = $tmp2547($tmp2545);
bool $tmp2550 = $tmp2549.value;
if ($tmp2550) goto block3; else goto block2;
block2:;
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
ITable* $tmp2551 = $tmp2545->$class->itable;
while ($tmp2551->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2551 = $tmp2551->next;
}
$fn2553 $tmp2552 = $tmp2551->methods[1];
panda$core$Object* $tmp2554 = $tmp2552($tmp2545);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp2554)));
org$pandalanguage$pandac$ClassDecl* $tmp2555 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2555));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) $tmp2554);
// line 790
org$pandalanguage$pandac$ClassDecl* $tmp2556 = *(&local0);
org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, $tmp2556, param2);
panda$core$Panda$unref$panda$core$Object$Q($tmp2554);
// unreffing REF($21:panda.collections.Iterator.T)
org$pandalanguage$pandac$ClassDecl* $tmp2557 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2557));
// unreffing inner
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2545));
// unreffing REF($10:panda.collections.Iterator<panda.collections.Iterable.T>)
return;

}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* param0, panda$io$File* param1, panda$collections$MapView* param2, panda$core$String* param3, panda$collections$List* param4) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$MethodDecl* local1 = NULL;
org$pandalanguage$pandac$MethodDecl* local2 = NULL;
// line 796
org$pandalanguage$pandac$ClassDecl** $tmp2558 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2559 = *$tmp2558;
panda$core$Bit $tmp2560 = panda$core$Bit$init$builtin_bit($tmp2559 == NULL);
bool $tmp2561 = $tmp2560.value;
if ($tmp2561) goto block1; else goto block2;
block1:;
// line 797
*(&local0) = ((panda$core$String*) NULL);
// line 798
ITable* $tmp2563 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp2563->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2563 = $tmp2563->next;
}
$fn2565 $tmp2564 = $tmp2563->methods[1];
panda$core$Bit $tmp2566 = $tmp2564(((panda$core$Equatable*) param3), ((panda$core$Equatable*) &$s2562));
bool $tmp2567 = $tmp2566.value;
if ($tmp2567) goto block3; else goto block5;
block3:;
// line 799
panda$core$String* $tmp2568 = panda$core$String$convert$R$panda$core$String(param3);
panda$core$String* $tmp2569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2568, &$s2570);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
panda$core$String* $tmp2571 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2571));
*(&local0) = $tmp2569;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2568));
// unreffing REF($18:panda.core.String)
goto block4;
block5:;
// line 1
// line 802
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2572));
panda$core$String* $tmp2573 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2573));
*(&local0) = &$s2574;
goto block4;
block4:;
// line 804
org$pandalanguage$pandac$ClassDecl* $tmp2575 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
org$pandalanguage$pandac$Position $tmp2576 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2577 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
org$pandalanguage$pandac$Annotations$init($tmp2577);
panda$core$Int64 $tmp2578 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2579 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2578);
panda$core$String* $tmp2580 = *(&local0);
panda$collections$Array* $tmp2581 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2581);
panda$collections$Array* $tmp2582 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2582);
panda$core$Weak** $tmp2583 = &param0->compiler;
panda$core$Weak* $tmp2584 = *$tmp2583;
panda$core$Object* $tmp2585 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2584);
org$pandalanguage$pandac$SymbolTable** $tmp2586 = &((org$pandalanguage$pandac$Compiler*) $tmp2585)->root;
org$pandalanguage$pandac$SymbolTable* $tmp2587 = *$tmp2586;
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2575, param1, $tmp2576, param2, ((panda$core$String*) NULL), $tmp2577, $tmp2579, $tmp2580, ((panda$collections$ListView*) $tmp2581), $tmp2582, $tmp2587);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2575));
org$pandalanguage$pandac$ClassDecl** $tmp2588 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2589 = *$tmp2588;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2589));
org$pandalanguage$pandac$ClassDecl** $tmp2590 = &param0->bareCodeClass;
*$tmp2590 = $tmp2575;
panda$core$Panda$unref$panda$core$Object$Q($tmp2585);
// unreffing REF($60:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2582));
// unreffing REF($54:panda.collections.Array<org.pandalanguage.pandac.ClassDecl.GenericParameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
// unreffing REF($50:panda.collections.Array<org.pandalanguage.pandac.Type>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2577));
// unreffing REF($45:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2575));
// unreffing REF($43:org.pandalanguage.pandac.ClassDecl)
// line 807
org$pandalanguage$pandac$ClassDecl** $tmp2591 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2592 = *$tmp2591;
ITable* $tmp2593 = ((panda$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp2593->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
    $tmp2593 = $tmp2593->next;
}
$fn2595 $tmp2594 = $tmp2593->methods[0];
$tmp2594(((panda$collections$CollectionWriter*) param4), ((panda$core$Object*) $tmp2592));
// line 808
org$pandalanguage$pandac$MethodDecl* $tmp2596 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2597 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2598 = *$tmp2597;
org$pandalanguage$pandac$Position $tmp2599 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2600 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2601 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2600, $tmp2601);
panda$core$Int64 $tmp2602 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2603 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2602);
panda$collections$Array* $tmp2604 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp2605 = (panda$core$Int64) {0};
panda$collections$Array$init$panda$core$Int64($tmp2604, $tmp2605);
org$pandalanguage$pandac$Type* $tmp2606 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FixedArray* $tmp2607 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp2607);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2596, $tmp2598, $tmp2599, ((panda$core$String*) NULL), $tmp2600, $tmp2603, &$s2608, ((panda$collections$Array*) NULL), $tmp2604, $tmp2606, $tmp2607);
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2596));
org$pandalanguage$pandac$MethodDecl* $tmp2609 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2609));
*(&local1) = $tmp2596;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2607));
// unreffing REF($113:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2606));
// unreffing REF($112:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2604));
// unreffing REF($108:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2600));
// unreffing REF($103:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2596));
// unreffing REF($98:org.pandalanguage.pandac.MethodDecl)
// line 811
org$pandalanguage$pandac$ClassDecl** $tmp2610 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2611 = *$tmp2610;
panda$collections$Array** $tmp2612 = &$tmp2611->methods;
panda$collections$Array* $tmp2613 = *$tmp2612;
org$pandalanguage$pandac$MethodDecl* $tmp2614 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp2613, ((panda$core$Object*) $tmp2614));
// line 812
org$pandalanguage$pandac$ClassDecl** $tmp2615 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2616 = *$tmp2615;
org$pandalanguage$pandac$SymbolTable** $tmp2617 = &$tmp2616->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2618 = *$tmp2617;
org$pandalanguage$pandac$MethodDecl* $tmp2619 = *(&local1);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2618, ((org$pandalanguage$pandac$Symbol*) $tmp2619));
// line 813
org$pandalanguage$pandac$MethodDecl* $tmp2620 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2621 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2622 = *$tmp2621;
org$pandalanguage$pandac$Position $tmp2623 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2624 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2625 = (panda$core$Int64) {32};
panda$core$Int64 $tmp2626 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp2627 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2625, $tmp2626);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2624, $tmp2627);
panda$core$Int64 $tmp2628 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2629 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2628);
panda$collections$Array* $tmp2630 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp2631 = (panda$core$Int64) {0};
panda$collections$Array$init$panda$core$Int64($tmp2630, $tmp2631);
org$pandalanguage$pandac$Type* $tmp2632 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FixedArray* $tmp2633 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp2633);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2620, $tmp2622, $tmp2623, ((panda$core$String*) NULL), $tmp2624, $tmp2629, &$s2634, ((panda$collections$Array*) NULL), $tmp2630, $tmp2632, $tmp2633);
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2620));
org$pandalanguage$pandac$MethodDecl* $tmp2635 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2635));
*(&local2) = $tmp2620;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2633));
// unreffing REF($177:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2632));
// unreffing REF($176:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2630));
// unreffing REF($172:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2624));
// unreffing REF($165:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2620));
// unreffing REF($160:org.pandalanguage.pandac.MethodDecl)
// line 816
org$pandalanguage$pandac$ClassDecl** $tmp2636 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2637 = *$tmp2636;
panda$collections$Array** $tmp2638 = &$tmp2637->methods;
panda$collections$Array* $tmp2639 = *$tmp2638;
org$pandalanguage$pandac$MethodDecl* $tmp2640 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2639, ((panda$core$Object*) $tmp2640));
// line 817
org$pandalanguage$pandac$ClassDecl** $tmp2641 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2642 = *$tmp2641;
org$pandalanguage$pandac$SymbolTable** $tmp2643 = &$tmp2642->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2644 = *$tmp2643;
org$pandalanguage$pandac$MethodDecl* $tmp2645 = *(&local2);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2644, ((org$pandalanguage$pandac$Symbol*) $tmp2645));
org$pandalanguage$pandac$MethodDecl* $tmp2646 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2646));
// unreffing defaultCleanup
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2647 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2647));
// unreffing defaultInit
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$String* $tmp2648 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2648));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2) {

panda$io$File** $tmp2649 = &param0->source;
panda$io$File* $tmp2650 = *$tmp2649;
panda$core$Bit $tmp2651 = panda$core$Bit$init$builtin_bit($tmp2650 != NULL);
bool $tmp2652 = $tmp2651.value;
if ($tmp2652) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2653 = (panda$core$Int64) {822};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2654, $tmp2653, &$s2655);
abort(); // unreachable
block1:;
// line 823
panda$core$Weak** $tmp2656 = &param0->compiler;
panda$core$Weak* $tmp2657 = *$tmp2656;
panda$core$Object* $tmp2658 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2657);
panda$io$File** $tmp2659 = &param0->source;
panda$io$File* $tmp2660 = *$tmp2659;
org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2658), $tmp2660, param1, param2);
panda$core$Panda$unref$panda$core$Object$Q($tmp2658);
// unreffing REF($13:panda.core.Weak.T)
return;

}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* param0, panda$io$File* param1, org$pandalanguage$pandac$ASTNode* param2) {

org$pandalanguage$pandac$FixedArray* local0 = NULL;
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
org$pandalanguage$pandac$FixedArray* local11 = NULL;
org$pandalanguage$pandac$ClassDecl$Kind local12;
panda$core$String* local13 = NULL;
org$pandalanguage$pandac$FixedArray* local14 = NULL;
org$pandalanguage$pandac$FixedArray* local15 = NULL;
org$pandalanguage$pandac$FixedArray* local16 = NULL;
org$pandalanguage$pandac$ClassDecl* local17 = NULL;
org$pandalanguage$pandac$Position local18;
org$pandalanguage$pandac$ASTNode* local19 = NULL;
org$pandalanguage$pandac$FixedArray* local20 = NULL;
org$pandalanguage$pandac$MethodDecl$Kind local21;
panda$core$String* local22 = NULL;
org$pandalanguage$pandac$FixedArray* local23 = NULL;
org$pandalanguage$pandac$FixedArray* local24 = NULL;
org$pandalanguage$pandac$ASTNode* local25 = NULL;
org$pandalanguage$pandac$FixedArray* local26 = NULL;
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
org$pandalanguage$pandac$FixedArray* local41 = NULL;
org$pandalanguage$pandac$ASTNode* local42 = NULL;
panda$core$Int64 local43;
panda$core$Int64 local44;
org$pandalanguage$pandac$FieldDecl* local45 = NULL;
panda$core$Bit local46;
// line 827
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp2661 = &param0->source;
panda$io$File* $tmp2662 = *$tmp2661;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2662));
panda$io$File** $tmp2663 = &param0->source;
*$tmp2663 = param1;
// line 828
panda$core$Int64* $tmp2664 = &param2->$rawValue;
panda$core$Int64 $tmp2665 = *$tmp2664;
panda$core$Int64 $tmp2666 = (panda$core$Int64) {19};
panda$core$Bit $tmp2667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2665, $tmp2666);
bool $tmp2668 = $tmp2667.value;
if ($tmp2668) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$FixedArray** $tmp2669 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 0);
org$pandalanguage$pandac$FixedArray* $tmp2670 = *$tmp2669;
*(&local0) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2670));
org$pandalanguage$pandac$FixedArray* $tmp2671 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2671));
*(&local0) = $tmp2670;
// line 830
panda$collections$Array* $tmp2672 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2672);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2672));
panda$collections$Array* $tmp2673 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2673));
*(&local1) = $tmp2672;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2672));
// unreffing REF($27:panda.collections.Array<org.pandalanguage.pandac.ClassDecl>)
// line 831
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2674));
panda$core$String* $tmp2675 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2675));
*(&local2) = &$s2676;
// line 832
panda$collections$HashMap* $tmp2677 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp2677);
*(&local3) = ((panda$collections$HashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2677));
panda$collections$HashMap* $tmp2678 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2678));
*(&local3) = $tmp2677;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2677));
// unreffing REF($49:panda.collections.HashMap<panda.core.String, panda.core.String>)
// line 833
org$pandalanguage$pandac$FixedArray* $tmp2679 = *(&local0);
ITable* $tmp2680 = ((panda$collections$Iterable*) $tmp2679)->$class->itable;
while ($tmp2680->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2680 = $tmp2680->next;
}
$fn2682 $tmp2681 = $tmp2680->methods[0];
panda$collections$Iterator* $tmp2683 = $tmp2681(((panda$collections$Iterable*) $tmp2679));
goto block4;
block4:;
ITable* $tmp2684 = $tmp2683->$class->itable;
while ($tmp2684->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2684 = $tmp2684->next;
}
$fn2686 $tmp2685 = $tmp2684->methods[0];
panda$core$Bit $tmp2687 = $tmp2685($tmp2683);
bool $tmp2688 = $tmp2687.value;
if ($tmp2688) goto block6; else goto block5;
block5:;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2689 = $tmp2683->$class->itable;
while ($tmp2689->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2689 = $tmp2689->next;
}
$fn2691 $tmp2690 = $tmp2689->methods[1];
panda$core$Object* $tmp2692 = $tmp2690($tmp2683);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2692)));
org$pandalanguage$pandac$ASTNode* $tmp2693 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2693));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) $tmp2692);
// line 834
org$pandalanguage$pandac$ASTNode* $tmp2694 = *(&local4);
panda$core$Int64* $tmp2695 = &$tmp2694->$rawValue;
panda$core$Int64 $tmp2696 = *$tmp2695;
panda$core$Int64 $tmp2697 = (panda$core$Int64) {32};
panda$core$Bit $tmp2698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2696, $tmp2697);
bool $tmp2699 = $tmp2698.value;
if ($tmp2699) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp2700 = (org$pandalanguage$pandac$Position*) ($tmp2694->$data + 0);
org$pandalanguage$pandac$Position $tmp2701 = *$tmp2700;
panda$core$String** $tmp2702 = (panda$core$String**) ($tmp2694->$data + 16);
panda$core$String* $tmp2703 = *$tmp2702;
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2703));
panda$core$String* $tmp2704 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2704));
*(&local5) = $tmp2703;
// line 836
panda$core$String* $tmp2705 = *(&local5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2705));
panda$core$String* $tmp2706 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2706));
*(&local2) = $tmp2705;
panda$core$String* $tmp2707 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2707));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
goto block7;
block9:;
panda$core$Int64 $tmp2708 = (panda$core$Int64) {48};
panda$core$Bit $tmp2709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2696, $tmp2708);
bool $tmp2710 = $tmp2709.value;
if ($tmp2710) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp2711 = (org$pandalanguage$pandac$Position*) ($tmp2694->$data + 0);
org$pandalanguage$pandac$Position $tmp2712 = *$tmp2711;
panda$core$String** $tmp2713 = (panda$core$String**) ($tmp2694->$data + 16);
panda$core$String* $tmp2714 = *$tmp2713;
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2714));
panda$core$String* $tmp2715 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2715));
*(&local6) = $tmp2714;
// line 839
panda$core$String* $tmp2716 = *(&local6);
panda$core$String$Index$nullable $tmp2717 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q($tmp2716, &$s2718);
*(&local7) = $tmp2717;
// line 840
*(&local8) = ((panda$core$String*) NULL);
// line 841
panda$core$String$Index$nullable $tmp2719 = *(&local7);
panda$core$Bit $tmp2720 = panda$core$Bit$init$builtin_bit($tmp2719.nonnull);
bool $tmp2721 = $tmp2720.value;
if ($tmp2721) goto block12; else goto block14;
block12:;
// line 842
panda$core$String* $tmp2722 = *(&local6);
panda$core$String* $tmp2723 = *(&local6);
panda$core$String$Index$nullable $tmp2724 = *(&local7);
panda$core$String$Index $tmp2725 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp2723, ((panda$core$String$Index) $tmp2724.value));
panda$core$Bit $tmp2726 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2727 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2725, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2726);
panda$core$String* $tmp2728 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp2722, $tmp2727);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2728));
panda$core$String* $tmp2729 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2729));
*(&local8) = $tmp2728;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2728));
// unreffing REF($155:panda.core.String)
goto block13;
block14:;
// line 1
// line 845
panda$core$String* $tmp2730 = *(&local6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2730));
panda$core$String* $tmp2731 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2731));
*(&local8) = $tmp2730;
goto block13;
block13:;
// line 847
panda$collections$HashMap* $tmp2732 = *(&local3);
panda$core$String* $tmp2733 = *(&local8);
panda$core$String* $tmp2734 = *(&local6);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp2732, ((panda$collections$Key*) $tmp2733), ((panda$core$Object*) $tmp2734));
panda$core$String* $tmp2735 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2735));
// unreffing alias
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp2736 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2736));
// unreffing fullName
*(&local6) = ((panda$core$String*) NULL);
goto block7;
block11:;
panda$core$Int64 $tmp2737 = (panda$core$Int64) {12};
panda$core$Bit $tmp2738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2696, $tmp2737);
bool $tmp2739 = $tmp2738.value;
if ($tmp2739) goto block15; else goto block16;
block15:;
org$pandalanguage$pandac$Position* $tmp2740 = (org$pandalanguage$pandac$Position*) ($tmp2694->$data + 0);
org$pandalanguage$pandac$Position $tmp2741 = *$tmp2740;
*(&local9) = $tmp2741;
org$pandalanguage$pandac$ASTNode** $tmp2742 = (org$pandalanguage$pandac$ASTNode**) ($tmp2694->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2743 = *$tmp2742;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2743));
org$pandalanguage$pandac$ASTNode* $tmp2744 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2744));
*(&local10) = $tmp2743;
org$pandalanguage$pandac$FixedArray** $tmp2745 = (org$pandalanguage$pandac$FixedArray**) ($tmp2694->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2746 = *$tmp2745;
*(&local11) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2746));
org$pandalanguage$pandac$FixedArray* $tmp2747 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2747));
*(&local11) = $tmp2746;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2748 = (org$pandalanguage$pandac$ClassDecl$Kind*) ($tmp2694->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2749 = *$tmp2748;
*(&local12) = $tmp2749;
panda$core$String** $tmp2750 = (panda$core$String**) ($tmp2694->$data + 40);
panda$core$String* $tmp2751 = *$tmp2750;
*(&local13) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2751));
panda$core$String* $tmp2752 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2752));
*(&local13) = $tmp2751;
org$pandalanguage$pandac$FixedArray** $tmp2753 = (org$pandalanguage$pandac$FixedArray**) ($tmp2694->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp2754 = *$tmp2753;
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2754));
org$pandalanguage$pandac$FixedArray* $tmp2755 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2755));
*(&local14) = $tmp2754;
org$pandalanguage$pandac$FixedArray** $tmp2756 = (org$pandalanguage$pandac$FixedArray**) ($tmp2694->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp2757 = *$tmp2756;
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2757));
org$pandalanguage$pandac$FixedArray* $tmp2758 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2758));
*(&local15) = $tmp2757;
org$pandalanguage$pandac$FixedArray** $tmp2759 = (org$pandalanguage$pandac$FixedArray**) ($tmp2694->$data + 64);
org$pandalanguage$pandac$FixedArray* $tmp2760 = *$tmp2759;
*(&local16) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2760));
org$pandalanguage$pandac$FixedArray* $tmp2761 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2761));
*(&local16) = $tmp2760;
// line 851
panda$collections$HashMap* $tmp2762 = *(&local3);
panda$core$String* $tmp2763 = *(&local2);
org$pandalanguage$pandac$Position $tmp2764 = *(&local9);
org$pandalanguage$pandac$ASTNode* $tmp2765 = *(&local10);
org$pandalanguage$pandac$FixedArray* $tmp2766 = *(&local11);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2767 = *(&local12);
panda$core$String* $tmp2768 = *(&local13);
org$pandalanguage$pandac$FixedArray* $tmp2769 = *(&local14);
org$pandalanguage$pandac$FixedArray* $tmp2770 = *(&local15);
org$pandalanguage$pandac$FixedArray* $tmp2771 = *(&local16);
org$pandalanguage$pandac$ClassDecl* $tmp2772 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(param0, param1, ((panda$collections$MapView*) $tmp2762), $tmp2763, $tmp2764, $tmp2765, $tmp2766, $tmp2767, $tmp2768, $tmp2769, $tmp2770, $tmp2771);
*(&local17) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2772));
org$pandalanguage$pandac$ClassDecl* $tmp2773 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2773));
*(&local17) = $tmp2772;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2772));
// unreffing REF($271:org.pandalanguage.pandac.ClassDecl?)
// line 853
org$pandalanguage$pandac$ClassDecl* $tmp2774 = *(&local17);
panda$core$Bit $tmp2775 = panda$core$Bit$init$builtin_bit($tmp2774 != NULL);
bool $tmp2776 = $tmp2775.value;
if ($tmp2776) goto block17; else goto block18;
block17:;
// line 854
org$pandalanguage$pandac$ClassDecl* $tmp2777 = *(&local17);
panda$collections$Array* $tmp2778 = *(&local1);
org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, $tmp2777, $tmp2778);
goto block18;
block18:;
org$pandalanguage$pandac$ClassDecl* $tmp2779 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2779));
// unreffing cl
*(&local17) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2780 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2780));
// unreffing members
*(&local16) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2781 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2781));
// unreffing supertypes
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2782 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2782));
// unreffing generics
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2783 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2783));
// unreffing name
*(&local13) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2784 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2784));
// unreffing annotations
*(&local11) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2785 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2785));
// unreffing dc
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block16:;
panda$core$Int64 $tmp2786 = (panda$core$Int64) {28};
panda$core$Bit $tmp2787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2696, $tmp2786);
bool $tmp2788 = $tmp2787.value;
if ($tmp2788) goto block19; else goto block20;
block19:;
org$pandalanguage$pandac$Position* $tmp2789 = (org$pandalanguage$pandac$Position*) ($tmp2694->$data + 0);
org$pandalanguage$pandac$Position $tmp2790 = *$tmp2789;
*(&local18) = $tmp2790;
org$pandalanguage$pandac$ASTNode** $tmp2791 = (org$pandalanguage$pandac$ASTNode**) ($tmp2694->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2792 = *$tmp2791;
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2792));
org$pandalanguage$pandac$ASTNode* $tmp2793 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2793));
*(&local19) = $tmp2792;
org$pandalanguage$pandac$FixedArray** $tmp2794 = (org$pandalanguage$pandac$FixedArray**) ($tmp2694->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2795 = *$tmp2794;
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2795));
org$pandalanguage$pandac$FixedArray* $tmp2796 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2796));
*(&local20) = $tmp2795;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2797 = (org$pandalanguage$pandac$MethodDecl$Kind*) ($tmp2694->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2798 = *$tmp2797;
*(&local21) = $tmp2798;
panda$core$String** $tmp2799 = (panda$core$String**) ($tmp2694->$data + 40);
panda$core$String* $tmp2800 = *$tmp2799;
*(&local22) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2800));
panda$core$String* $tmp2801 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2801));
*(&local22) = $tmp2800;
org$pandalanguage$pandac$FixedArray** $tmp2802 = (org$pandalanguage$pandac$FixedArray**) ($tmp2694->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp2803 = *$tmp2802;
*(&local23) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2803));
org$pandalanguage$pandac$FixedArray* $tmp2804 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2804));
*(&local23) = $tmp2803;
org$pandalanguage$pandac$FixedArray** $tmp2805 = (org$pandalanguage$pandac$FixedArray**) ($tmp2694->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp2806 = *$tmp2805;
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2806));
org$pandalanguage$pandac$FixedArray* $tmp2807 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2807));
*(&local24) = $tmp2806;
org$pandalanguage$pandac$ASTNode** $tmp2808 = (org$pandalanguage$pandac$ASTNode**) ($tmp2694->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2809 = *$tmp2808;
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2809));
org$pandalanguage$pandac$ASTNode* $tmp2810 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2810));
*(&local25) = $tmp2809;
org$pandalanguage$pandac$FixedArray** $tmp2811 = (org$pandalanguage$pandac$FixedArray**) ($tmp2694->$data + 72);
org$pandalanguage$pandac$FixedArray* $tmp2812 = *$tmp2811;
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2812));
org$pandalanguage$pandac$FixedArray* $tmp2813 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2813));
*(&local26) = $tmp2812;
// line 859
org$pandalanguage$pandac$MethodDecl$Kind $tmp2814 = *(&local21);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2815;
$tmp2815 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2815->value = $tmp2814;
panda$core$Int64 $tmp2816 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2817 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2816);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2818;
$tmp2818 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2818->value = $tmp2817;
ITable* $tmp2819 = ((panda$core$Equatable*) $tmp2815)->$class->itable;
while ($tmp2819->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2819 = $tmp2819->next;
}
$fn2821 $tmp2820 = $tmp2819->methods[0];
panda$core$Bit $tmp2822 = $tmp2820(((panda$core$Equatable*) $tmp2815), ((panda$core$Equatable*) $tmp2818));
bool $tmp2823 = $tmp2822.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2818)));
// unreffing REF($409:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2815)));
// unreffing REF($405:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp2823) goto block21; else goto block22;
block21:;
// line 860
org$pandalanguage$pandac$Position $tmp2824 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2824, &$s2825);
// line 861
org$pandalanguage$pandac$FixedArray* $tmp2826 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2826));
// unreffing statements
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2827 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2827));
// unreffing rawReturnType
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2828 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2828));
// unreffing parameters
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2829 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2829));
// unreffing generics
*(&local23) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2830 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2830));
// unreffing rawName
*(&local22) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2831 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2831));
// unreffing annotations
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2832 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2832));
// unreffing dc
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2692);
// unreffing REF($78:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2833 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2833));
// unreffing e
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block22:;
// line 863
panda$collections$HashMap* $tmp2834 = *(&local3);
panda$core$String* $tmp2835 = *(&local2);
panda$collections$Array* $tmp2836 = *(&local1);
org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, param1, ((panda$collections$MapView*) $tmp2834), $tmp2835, ((panda$collections$List*) $tmp2836));
// line 864
*(&local27) = ((panda$core$String*) NULL);
// line 865
panda$core$String* $tmp2837 = *(&local22);
panda$core$Bit $tmp2838 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2837, &$s2839);
bool $tmp2840 = $tmp2838.value;
if ($tmp2840) goto block23; else goto block25;
block23:;
// line 866
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2841));
panda$core$String* $tmp2842 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2842));
*(&local27) = &$s2843;
// line 867
panda$collections$Array* $tmp2844 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2844);
*(&local28) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
panda$collections$Array* $tmp2845 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2845));
*(&local28) = $tmp2844;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
// unreffing REF($490:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
// line 868
panda$collections$Array* $tmp2846 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2846);
*(&local29) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2846));
panda$collections$Array* $tmp2847 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2847));
*(&local29) = $tmp2846;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2846));
// unreffing REF($504:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 869
panda$collections$Array* $tmp2848 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2848);
*(&local30) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2848));
panda$collections$Array* $tmp2849 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2849));
*(&local30) = $tmp2848;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2848));
// unreffing REF($518:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 870
org$pandalanguage$pandac$FixedArray* $tmp2850 = *(&local24);
ITable* $tmp2851 = ((panda$collections$Iterable*) $tmp2850)->$class->itable;
while ($tmp2851->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2851 = $tmp2851->next;
}
$fn2853 $tmp2852 = $tmp2851->methods[0];
panda$collections$Iterator* $tmp2854 = $tmp2852(((panda$collections$Iterable*) $tmp2850));
goto block26;
block26:;
ITable* $tmp2855 = $tmp2854->$class->itable;
while ($tmp2855->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2855 = $tmp2855->next;
}
$fn2857 $tmp2856 = $tmp2855->methods[0];
panda$core$Bit $tmp2858 = $tmp2856($tmp2854);
bool $tmp2859 = $tmp2858.value;
if ($tmp2859) goto block28; else goto block27;
block27:;
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2860 = $tmp2854->$class->itable;
while ($tmp2860->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2860 = $tmp2860->next;
}
$fn2862 $tmp2861 = $tmp2860->methods[1];
panda$core$Object* $tmp2863 = $tmp2861($tmp2854);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2863)));
org$pandalanguage$pandac$ASTNode* $tmp2864 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2864));
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) $tmp2863);
// line 871
org$pandalanguage$pandac$ASTNode* $tmp2865 = *(&local31);
panda$core$Int64* $tmp2866 = &$tmp2865->$rawValue;
panda$core$Int64 $tmp2867 = *$tmp2866;
panda$core$Int64 $tmp2868 = (panda$core$Int64) {33};
panda$core$Bit $tmp2869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2867, $tmp2868);
bool $tmp2870 = $tmp2869.value;
if ($tmp2870) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp2871 = (org$pandalanguage$pandac$Position*) ($tmp2865->$data + 0);
org$pandalanguage$pandac$Position $tmp2872 = *$tmp2871;
*(&local32) = $tmp2872;
panda$core$String** $tmp2873 = (panda$core$String**) ($tmp2865->$data + 16);
panda$core$String* $tmp2874 = *$tmp2873;
*(&local33) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2874));
panda$core$String* $tmp2875 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2875));
*(&local33) = $tmp2874;
org$pandalanguage$pandac$ASTNode** $tmp2876 = (org$pandalanguage$pandac$ASTNode**) ($tmp2865->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2877 = *$tmp2876;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2877));
org$pandalanguage$pandac$ASTNode* $tmp2878 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2878));
*(&local34) = $tmp2877;
// line 873
panda$collections$Array* $tmp2879 = *(&local28);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp2880 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
panda$core$String* $tmp2881 = *(&local33);
org$pandalanguage$pandac$ASTNode* $tmp2882 = *(&local34);
org$pandalanguage$pandac$Type* $tmp2883 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2882);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp2880, $tmp2881, $tmp2883);
panda$collections$Array$add$panda$collections$Array$T($tmp2879, ((panda$core$Object*) $tmp2880));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2883));
// unreffing REF($590:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2880));
// unreffing REF($587:org.pandalanguage.pandac.MethodDecl.Parameter)
// line 875
panda$collections$Array* $tmp2884 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp2885 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2886 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp2887 = *(&local32);
panda$core$String* $tmp2888 = *(&local33);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2885, $tmp2886, $tmp2887, $tmp2888);
panda$collections$Array$add$panda$collections$Array$T($tmp2884, ((panda$core$Object*) $tmp2885));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2885));
// unreffing REF($603:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2889 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2889));
// unreffing type
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2890 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2890));
// unreffing name
*(&local33) = ((panda$core$String*) NULL);
goto block29;
block31:;
// line 878
panda$core$Bit $tmp2891 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2892 = $tmp2891.value;
if ($tmp2892) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp2893 = (panda$core$Int64) {878};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2894, $tmp2893);
abort(); // unreachable
block32:;
goto block29;
block29:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2863);
// unreffing REF($547:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2895 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2895));
// unreffing p
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block26;
block28:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2854));
// unreffing REF($536:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 882
org$pandalanguage$pandac$ASTNode* $tmp2896 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2897 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position $tmp2898 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2899 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2900 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp2901 = *(&local18);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2899, $tmp2900, $tmp2901, &$s2902);
org$pandalanguage$pandac$FixedArray* $tmp2903 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp2903);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2896, $tmp2897, $tmp2898, $tmp2899, $tmp2903);
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2896));
org$pandalanguage$pandac$ASTNode* $tmp2904 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2904));
*(&local35) = $tmp2896;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2903));
// unreffing REF($652:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2899));
// unreffing REF($648:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2896));
// unreffing REF($645:org.pandalanguage.pandac.ASTNode)
// line 885
panda$collections$Array* $tmp2905 = *(&local29);
org$pandalanguage$pandac$ASTNode* $tmp2906 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2907 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position $tmp2908 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2909 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2910 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Position $tmp2911 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2912 = *(&local35);
panda$core$String* $tmp2913 = *(&local27);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2909, $tmp2910, $tmp2911, $tmp2912, $tmp2913);
panda$collections$Array* $tmp2914 = *(&local30);
org$pandalanguage$pandac$FixedArray* $tmp2915 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp2914);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2906, $tmp2907, $tmp2908, $tmp2909, $tmp2915);
panda$collections$Array$add$panda$collections$Array$T($tmp2905, ((panda$core$Object*) $tmp2906));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2915));
// unreffing REF($686:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2909));
// unreffing REF($678:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2906));
// unreffing REF($675:org.pandalanguage.pandac.ASTNode)
// line 888
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
// line 889
org$pandalanguage$pandac$ASTNode* $tmp2916 = *(&local25);
panda$core$Bit $tmp2917 = panda$core$Bit$init$builtin_bit($tmp2916 != NULL);
bool $tmp2918 = $tmp2917.value;
if ($tmp2918) goto block34; else goto block36;
block34:;
// line 890
org$pandalanguage$pandac$ASTNode* $tmp2919 = *(&local25);
org$pandalanguage$pandac$Type* $tmp2920 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2919);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2920));
org$pandalanguage$pandac$Type* $tmp2921 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2921));
*(&local36) = $tmp2920;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2920));
// unreffing REF($711:org.pandalanguage.pandac.Type)
goto block35;
block36:;
// line 1
// line 893
org$pandalanguage$pandac$Type* $tmp2922 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2922));
org$pandalanguage$pandac$Type* $tmp2923 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2923));
*(&local36) = $tmp2922;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2922));
// unreffing REF($724:org.pandalanguage.pandac.Type)
goto block35;
block35:;
// line 895
org$pandalanguage$pandac$MethodDecl* $tmp2924 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2925 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2926 = *$tmp2925;
org$pandalanguage$pandac$Position $tmp2927 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2928 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2929 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2928, $tmp2929);
panda$core$Int64 $tmp2930 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2931 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2930);
panda$collections$Array* $tmp2932 = *(&local28);
org$pandalanguage$pandac$Type* $tmp2933 = *(&local36);
panda$collections$Array* $tmp2934 = *(&local29);
org$pandalanguage$pandac$FixedArray* $tmp2935 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp2934);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2924, $tmp2926, $tmp2927, ((panda$core$String*) NULL), $tmp2928, $tmp2931, &$s2936, ((panda$collections$Array*) NULL), $tmp2932, $tmp2933, $tmp2935);
*(&local37) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2924));
org$pandalanguage$pandac$MethodDecl* $tmp2937 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2937));
*(&local37) = $tmp2924;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2935));
// unreffing REF($750:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2928));
// unreffing REF($741:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2924));
// unreffing REF($736:org.pandalanguage.pandac.MethodDecl)
// line 899
org$pandalanguage$pandac$ClassDecl** $tmp2938 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2939 = *$tmp2938;
panda$collections$Array** $tmp2940 = &$tmp2939->methods;
panda$collections$Array* $tmp2941 = *$tmp2940;
org$pandalanguage$pandac$MethodDecl* $tmp2942 = *(&local37);
panda$collections$Array$add$panda$collections$Array$T($tmp2941, ((panda$core$Object*) $tmp2942));
org$pandalanguage$pandac$MethodDecl* $tmp2943 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2943));
// unreffing bareMain
*(&local37) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp2944 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2944));
// unreffing returnType
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2945 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2945));
// unreffing bareConstruct
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2946 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2946));
// unreffing mainArguments
*(&local30) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2947 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2947));
// unreffing mainStatements
*(&local29) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2948 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2948));
// unreffing mainParameters
*(&local28) = ((panda$collections$Array*) NULL);
goto block24;
block25:;
// line 1
// line 902
panda$core$String* $tmp2949 = *(&local22);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2949));
panda$core$String* $tmp2950 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2950));
*(&local27) = $tmp2949;
goto block24;
block24:;
// line 904
panda$core$Weak** $tmp2951 = &param0->compiler;
panda$core$Weak* $tmp2952 = *$tmp2951;
panda$core$Object* $tmp2953 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2952);
panda$collections$Stack** $tmp2954 = &((org$pandalanguage$pandac$Compiler*) $tmp2953)->currentClass;
panda$collections$Stack* $tmp2955 = *$tmp2954;
org$pandalanguage$pandac$ClassDecl** $tmp2956 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2957 = *$tmp2956;
panda$collections$Stack$push$panda$collections$Stack$T($tmp2955, ((panda$core$Object*) $tmp2957));
panda$core$Panda$unref$panda$core$Object$Q($tmp2953);
// unreffing REF($825:panda.core.Weak.T)
// line 905
org$pandalanguage$pandac$ClassDecl** $tmp2958 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2959 = *$tmp2958;
org$pandalanguage$pandac$Position $tmp2960 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp2961 = *(&local19);
org$pandalanguage$pandac$FixedArray* $tmp2962 = *(&local20);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2963 = *(&local21);
panda$core$String* $tmp2964 = *(&local27);
org$pandalanguage$pandac$FixedArray* $tmp2965 = *(&local23);
org$pandalanguage$pandac$FixedArray* $tmp2966 = *(&local24);
org$pandalanguage$pandac$ASTNode* $tmp2967 = *(&local25);
org$pandalanguage$pandac$FixedArray* $tmp2968 = *(&local26);
org$pandalanguage$pandac$MethodDecl* $tmp2969 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(param0, $tmp2959, $tmp2960, $tmp2961, $tmp2962, $tmp2963, $tmp2964, $tmp2965, $tmp2966, $tmp2967, $tmp2968);
*(&local38) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2969));
org$pandalanguage$pandac$MethodDecl* $tmp2970 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2970));
*(&local38) = $tmp2969;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2969));
// unreffing REF($851:org.pandalanguage.pandac.MethodDecl?)
// line 907
org$pandalanguage$pandac$MethodDecl* $tmp2971 = *(&local38);
org$pandalanguage$pandac$Annotations** $tmp2972 = &$tmp2971->annotations;
org$pandalanguage$pandac$Annotations* $tmp2973 = *$tmp2972;
panda$core$Bit $tmp2974 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp2973);
bool $tmp2975 = $tmp2974.value;
if ($tmp2975) goto block37; else goto block38;
block37:;
// line 908
org$pandalanguage$pandac$MethodDecl* $tmp2976 = *(&local38);
org$pandalanguage$pandac$Position* $tmp2977 = &((org$pandalanguage$pandac$Symbol*) $tmp2976)->position;
org$pandalanguage$pandac$Position $tmp2978 = *$tmp2977;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2978, &$s2979);
// line 910
org$pandalanguage$pandac$MethodDecl* $tmp2980 = *(&local38);
org$pandalanguage$pandac$Annotations** $tmp2981 = &$tmp2980->annotations;
org$pandalanguage$pandac$Annotations* $tmp2982 = *$tmp2981;
panda$core$Int64* $tmp2983 = &$tmp2982->flags;
panda$core$Int64 $tmp2984 = *$tmp2983;
panda$core$Int64 $tmp2985 = (panda$core$Int64) {16};
panda$core$Int64 $tmp2986 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp2985);
panda$core$Int64 $tmp2987 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp2984, $tmp2986);
panda$core$Int64* $tmp2988 = &$tmp2982->flags;
*$tmp2988 = $tmp2987;
goto block38;
block38:;
// line 912
panda$core$Weak** $tmp2989 = &param0->compiler;
panda$core$Weak* $tmp2990 = *$tmp2989;
panda$core$Object* $tmp2991 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2990);
panda$collections$Stack** $tmp2992 = &((org$pandalanguage$pandac$Compiler*) $tmp2991)->currentClass;
panda$collections$Stack* $tmp2993 = *$tmp2992;
panda$core$Int64 $tmp2994 = (panda$core$Int64) {0};
panda$core$Object* $tmp2995 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp2993, $tmp2994);
org$pandalanguage$pandac$ClassDecl** $tmp2996 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2997 = *$tmp2996;
bool $tmp2998 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2995) == $tmp2997;
panda$core$Bit $tmp2999 = panda$core$Bit$init$builtin_bit($tmp2998);
bool $tmp3000 = $tmp2999.value;
if ($tmp3000) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp3001 = (panda$core$Int64) {912};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3002, $tmp3001);
abort(); // unreachable
block39:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2995);
// unreffing REF($899:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp2991);
// unreffing REF($893:panda.core.Weak.T)
// line 913
panda$core$Weak** $tmp3003 = &param0->compiler;
panda$core$Weak* $tmp3004 = *$tmp3003;
panda$core$Object* $tmp3005 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3004);
panda$collections$Stack** $tmp3006 = &((org$pandalanguage$pandac$Compiler*) $tmp3005)->currentClass;
panda$collections$Stack* $tmp3007 = *$tmp3006;
panda$core$Object* $tmp3008 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp3007);
panda$core$Panda$unref$panda$core$Object$Q($tmp3008);
// unreffing REF($925:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp3005);
// unreffing REF($920:panda.core.Weak.T)
// line 914
org$pandalanguage$pandac$ClassDecl** $tmp3009 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3010 = *$tmp3009;
panda$collections$Array** $tmp3011 = &$tmp3010->methods;
panda$collections$Array* $tmp3012 = *$tmp3011;
org$pandalanguage$pandac$MethodDecl* $tmp3013 = *(&local38);
panda$collections$Array$add$panda$collections$Array$T($tmp3012, ((panda$core$Object*) $tmp3013));
// line 915
org$pandalanguage$pandac$ClassDecl** $tmp3014 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3015 = *$tmp3014;
org$pandalanguage$pandac$SymbolTable** $tmp3016 = &$tmp3015->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp3017 = *$tmp3016;
org$pandalanguage$pandac$MethodDecl* $tmp3018 = *(&local38);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp3017, ((org$pandalanguage$pandac$Symbol*) $tmp3018));
org$pandalanguage$pandac$MethodDecl* $tmp3019 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3019));
// unreffing m
*(&local38) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$String* $tmp3020 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3020));
// unreffing name
*(&local27) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3021 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3021));
// unreffing statements
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3022 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3022));
// unreffing rawReturnType
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3023 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3023));
// unreffing parameters
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3024 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3024));
// unreffing generics
*(&local23) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp3025 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3025));
// unreffing rawName
*(&local22) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3026 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3026));
// unreffing annotations
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3027 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3027));
// unreffing dc
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block20:;
panda$core$Int64 $tmp3028 = (panda$core$Int64) {18};
panda$core$Bit $tmp3029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2696, $tmp3028);
bool $tmp3030 = $tmp3029.value;
if ($tmp3030) goto block41; else goto block42;
block41:;
org$pandalanguage$pandac$Position* $tmp3031 = (org$pandalanguage$pandac$Position*) ($tmp2694->$data + 0);
org$pandalanguage$pandac$Position $tmp3032 = *$tmp3031;
*(&local39) = $tmp3032;
org$pandalanguage$pandac$ASTNode** $tmp3033 = (org$pandalanguage$pandac$ASTNode**) ($tmp2694->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp3034 = *$tmp3033;
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3034));
org$pandalanguage$pandac$ASTNode* $tmp3035 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3035));
*(&local40) = $tmp3034;
org$pandalanguage$pandac$FixedArray** $tmp3036 = (org$pandalanguage$pandac$FixedArray**) ($tmp2694->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp3037 = *$tmp3036;
*(&local41) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3037));
org$pandalanguage$pandac$FixedArray* $tmp3038 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3038));
*(&local41) = $tmp3037;
org$pandalanguage$pandac$ASTNode** $tmp3039 = (org$pandalanguage$pandac$ASTNode**) ($tmp2694->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp3040 = *$tmp3039;
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3040));
org$pandalanguage$pandac$ASTNode* $tmp3041 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3041));
*(&local42) = $tmp3040;
// line 918
panda$collections$HashMap* $tmp3042 = *(&local3);
panda$core$String* $tmp3043 = *(&local2);
panda$collections$Array* $tmp3044 = *(&local1);
org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, param1, ((panda$collections$MapView*) $tmp3042), $tmp3043, ((panda$collections$List*) $tmp3044));
// line 919
org$pandalanguage$pandac$ClassDecl** $tmp3045 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3046 = *$tmp3045;
panda$collections$Array** $tmp3047 = &$tmp3046->fields;
panda$collections$Array* $tmp3048 = *$tmp3047;
ITable* $tmp3049 = ((panda$collections$CollectionView*) $tmp3048)->$class->itable;
while ($tmp3049->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3049 = $tmp3049->next;
}
$fn3051 $tmp3050 = $tmp3049->methods[0];
panda$core$Int64 $tmp3052 = $tmp3050(((panda$collections$CollectionView*) $tmp3048));
*(&local43) = $tmp3052;
// line 920
org$pandalanguage$pandac$ClassDecl** $tmp3053 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3054 = *$tmp3053;
org$pandalanguage$pandac$Position $tmp3055 = *(&local39);
org$pandalanguage$pandac$ASTNode* $tmp3056 = *(&local40);
org$pandalanguage$pandac$FixedArray* $tmp3057 = *(&local41);
org$pandalanguage$pandac$ASTNode* $tmp3058 = *(&local42);
org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(param0, $tmp3054, $tmp3055, $tmp3056, $tmp3057, $tmp3058);
// line 921
panda$core$Int64 $tmp3059 = *(&local43);
org$pandalanguage$pandac$ClassDecl** $tmp3060 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3061 = *$tmp3060;
panda$collections$Array** $tmp3062 = &$tmp3061->fields;
panda$collections$Array* $tmp3063 = *$tmp3062;
ITable* $tmp3064 = ((panda$collections$CollectionView*) $tmp3063)->$class->itable;
while ($tmp3064->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3064 = $tmp3064->next;
}
$fn3066 $tmp3065 = $tmp3064->methods[0];
panda$core$Int64 $tmp3067 = $tmp3065(((panda$collections$CollectionView*) $tmp3063));
panda$core$Bit $tmp3068 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp3069 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3059, $tmp3067, $tmp3068);
panda$core$Int64 $tmp3070 = $tmp3069.min;
*(&local44) = $tmp3070;
panda$core$Int64 $tmp3071 = $tmp3069.max;
panda$core$Bit $tmp3072 = $tmp3069.inclusive;
bool $tmp3073 = $tmp3072.value;
panda$core$Int64 $tmp3074 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp3075 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3074);
if ($tmp3073) goto block46; else goto block47;
block46:;
int64_t $tmp3076 = $tmp3070.value;
int64_t $tmp3077 = $tmp3071.value;
bool $tmp3078 = $tmp3076 <= $tmp3077;
panda$core$Bit $tmp3079 = (panda$core$Bit) {$tmp3078};
bool $tmp3080 = $tmp3079.value;
if ($tmp3080) goto block43; else goto block44;
block47:;
int64_t $tmp3081 = $tmp3070.value;
int64_t $tmp3082 = $tmp3071.value;
bool $tmp3083 = $tmp3081 < $tmp3082;
panda$core$Bit $tmp3084 = (panda$core$Bit) {$tmp3083};
bool $tmp3085 = $tmp3084.value;
if ($tmp3085) goto block43; else goto block44;
block43:;
// line 922
org$pandalanguage$pandac$ClassDecl** $tmp3086 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3087 = *$tmp3086;
panda$collections$Array** $tmp3088 = &$tmp3087->fields;
panda$collections$Array* $tmp3089 = *$tmp3088;
panda$core$Int64 $tmp3090 = *(&local44);
panda$core$Object* $tmp3091 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3089, $tmp3090);
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3091)));
org$pandalanguage$pandac$FieldDecl* $tmp3092 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3092));
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) $tmp3091);
panda$core$Panda$unref$panda$core$Object$Q($tmp3091);
// unreffing REF($1099:panda.collections.Array.T)
// line 923
org$pandalanguage$pandac$FieldDecl* $tmp3093 = *(&local45);
org$pandalanguage$pandac$FieldDecl$Kind* $tmp3094 = &$tmp3093->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp3095 = *$tmp3094;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp3096;
$tmp3096 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp3096->value = $tmp3095;
panda$core$Int64 $tmp3097 = (panda$core$Int64) {2};
org$pandalanguage$pandac$FieldDecl$Kind $tmp3098 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp3097);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp3099;
$tmp3099 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp3099->value = $tmp3098;
ITable* $tmp3100 = ((panda$core$Equatable*) $tmp3096)->$class->itable;
while ($tmp3100->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3100 = $tmp3100->next;
}
$fn3102 $tmp3101 = $tmp3100->methods[1];
panda$core$Bit $tmp3103 = $tmp3101(((panda$core$Equatable*) $tmp3096), ((panda$core$Equatable*) $tmp3099));
bool $tmp3104 = $tmp3103.value;
if ($tmp3104) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$FieldDecl* $tmp3105 = *(&local45);
org$pandalanguage$pandac$Annotations** $tmp3106 = &$tmp3105->annotations;
org$pandalanguage$pandac$Annotations* $tmp3107 = *$tmp3106;
panda$core$Bit $tmp3108 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp3107);
*(&local46) = $tmp3108;
goto block52;
block51:;
*(&local46) = $tmp3103;
goto block52;
block52:;
panda$core$Bit $tmp3109 = *(&local46);
bool $tmp3110 = $tmp3109.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3099)));
// unreffing REF($1119:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3096)));
// unreffing REF($1115:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
if ($tmp3110) goto block48; else goto block49;
block48:;
// line 925
org$pandalanguage$pandac$FieldDecl* $tmp3111 = *(&local45);
org$pandalanguage$pandac$Position* $tmp3112 = &((org$pandalanguage$pandac$Symbol*) $tmp3111)->position;
org$pandalanguage$pandac$Position $tmp3113 = *$tmp3112;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp3113, &$s3114);
goto block49;
block49:;
org$pandalanguage$pandac$FieldDecl* $tmp3115 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3115));
// unreffing f
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block45;
block45:;
panda$core$Int64 $tmp3116 = *(&local44);
int64_t $tmp3117 = $tmp3071.value;
int64_t $tmp3118 = $tmp3116.value;
int64_t $tmp3119 = $tmp3117 - $tmp3118;
panda$core$Int64 $tmp3120 = (panda$core$Int64) {$tmp3119};
panda$core$UInt64 $tmp3121 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3120);
if ($tmp3073) goto block54; else goto block55;
block54:;
uint64_t $tmp3122 = $tmp3121.value;
uint64_t $tmp3123 = $tmp3075.value;
bool $tmp3124 = $tmp3122 >= $tmp3123;
panda$core$Bit $tmp3125 = (panda$core$Bit) {$tmp3124};
bool $tmp3126 = $tmp3125.value;
if ($tmp3126) goto block53; else goto block44;
block55:;
uint64_t $tmp3127 = $tmp3121.value;
uint64_t $tmp3128 = $tmp3075.value;
bool $tmp3129 = $tmp3127 > $tmp3128;
panda$core$Bit $tmp3130 = (panda$core$Bit) {$tmp3129};
bool $tmp3131 = $tmp3130.value;
if ($tmp3131) goto block53; else goto block44;
block53:;
int64_t $tmp3132 = $tmp3116.value;
int64_t $tmp3133 = $tmp3074.value;
int64_t $tmp3134 = $tmp3132 + $tmp3133;
panda$core$Int64 $tmp3135 = (panda$core$Int64) {$tmp3134};
*(&local44) = $tmp3135;
goto block43;
block44:;
org$pandalanguage$pandac$ASTNode* $tmp3136 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3136));
// unreffing varDecl
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3137 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3137));
// unreffing annotations
*(&local41) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3138 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3138));
// unreffing dc
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block42:;
// line 931
panda$core$Bit $tmp3139 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3140 = $tmp3139.value;
if ($tmp3140) goto block56; else goto block57;
block57:;
panda$core$Int64 $tmp3141 = (panda$core$Int64) {931};
org$pandalanguage$pandac$ASTNode* $tmp3142 = *(&local4);
panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3144, ((panda$core$Object*) $tmp3142));
panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, &$s3146);
org$pandalanguage$pandac$ASTNode* $tmp3147 = *(&local4);
panda$core$Int64* $tmp3148 = &$tmp3147->$rawValue;
panda$core$Int64 $tmp3149 = *$tmp3148;
panda$core$Int64$wrapper* $tmp3150;
$tmp3150 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3150->value = $tmp3149;
panda$core$String* $tmp3151 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3145, ((panda$core$Object*) $tmp3150));
panda$core$String* $tmp3152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3151, &$s3153);
org$pandalanguage$pandac$ASTNode* $tmp3154 = *(&local4);
$fn3156 $tmp3155 = ($fn3156) $tmp3154->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3157 = $tmp3155($tmp3154);
org$pandalanguage$pandac$Position$wrapper* $tmp3158;
$tmp3158 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp3158->value = $tmp3157;
panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3152, ((panda$core$Object*) $tmp3158));
panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3159, &$s3161);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3162, $tmp3141, $tmp3160);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3160));
// unreffing REF($1215:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3159));
// unreffing REF($1214:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3158));
// unreffing REF($1213:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3152));
// unreffing REF($1209:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3151));
// unreffing REF($1208:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3150));
// unreffing REF($1207:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3145));
// unreffing REF($1203:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3143));
// unreffing REF($1202:panda.core.String)
abort(); // unreachable
block56:;
goto block7;
block7:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2692);
// unreffing REF($78:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp3163 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3163));
// unreffing e
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2683));
// unreffing REF($67:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 935
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) NULL)));
panda$io$File** $tmp3164 = &param0->source;
panda$io$File* $tmp3165 = *$tmp3164;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3165));
panda$io$File** $tmp3166 = &param0->source;
*$tmp3166 = ((panda$io$File*) NULL);
// line 936
panda$collections$Array* $tmp3167 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp3167)));
panda$collections$HashMap* $tmp3168 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3168));
// unreffing aliases
*(&local3) = ((panda$collections$HashMap*) NULL);
panda$core$String* $tmp3169 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3169));
// unreffing currentPackage
*(&local2) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp3170 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3170));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3171 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3171));
// unreffing entries
*(&local0) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((panda$collections$ListView*) $tmp3167);
block3:;
// line 939
panda$core$Bit $tmp3172 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3173 = $tmp3172.value;
if ($tmp3173) goto block58; else goto block59;
block59:;
panda$core$Int64 $tmp3174 = (panda$core$Int64) {939};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3175, $tmp3174);
abort(); // unreachable
block58:;
goto block1;
block1:;
panda$core$Bit $tmp3176 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3177 = $tmp3176.value;
if ($tmp3177) goto block60; else goto block61;
block61:;
panda$core$Int64 $tmp3178 = (panda$core$Int64) {826};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3179, $tmp3178, &$s3180);
abort(); // unreachable
block60:;
abort(); // unreachable

}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* param0) {

// line 6
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$Weak** $tmp3181 = &param0->compiler;
panda$core$Weak* $tmp3182 = *$tmp3181;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3182));
org$pandalanguage$pandac$ClassDecl** $tmp3183 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3184 = *$tmp3183;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3184));
panda$io$File** $tmp3185 = &param0->source;
panda$io$File* $tmp3186 = *$tmp3185;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3186));
return;

}

