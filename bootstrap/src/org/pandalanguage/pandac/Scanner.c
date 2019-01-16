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
#include "org/pandalanguage/pandac/MethodDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/io/File.h"
#include "panda/collections/MapView.h"
#include "org/pandalanguage/pandac/Alias.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
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
typedef org$pandalanguage$pandac$Position (*$fn199)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn249)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn254)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn258)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn263)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn401)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn403)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn445)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn447)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn489)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn491)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn533)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn535)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn577)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn579)(panda$core$Immutable*, org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Position, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn703)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn707)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn712)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn788)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn845)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn849)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn854)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn932)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn936)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn941)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn974)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn978)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn983)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1057)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1061)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1066)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1128)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1132)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1137)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1178)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1182)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1187)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1235)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1239)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1244)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1276)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1280)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1285)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1307)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1311)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1316)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1432)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1436)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1441)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1469)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1473)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1478)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1492)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1496)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1501)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1533)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1537)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1542)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1592)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1596)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1601)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1656)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn1694)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1698)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1703)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1758)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1772)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1776)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1781)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1827)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1863)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2177)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2181)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2186)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2199)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2215)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2264)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2268)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2273)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn2323)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn2341)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2352)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2356)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2361)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2392)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2439)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2443)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2448)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2482)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn2509)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2513)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2518)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2530)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2545)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2558)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2572)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2582)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2616)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2625)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2636)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2669)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2678)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2691)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2695)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2700)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2708)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2754)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2758)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2763)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn2775)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn2810)(panda$collections$CollectionWriter*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2932)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2936)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2941)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn3083)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn3115)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3119)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3124)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn3378)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn3403)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn3444)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3498)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x3a\x20", 18, -3453142829537486574, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 11, 197438526755717134, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x74\x79\x70\x65\x20", 17, 2340143862660264176, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6e\x76\x65\x72\x74\x54\x79\x70\x65\x28\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 145, 2505294641206069548, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 20, -2825162788070047205, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 12, -5891455126768809117, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 24, -1200106393953033593, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x64\x65\x66\x61\x75\x6c\x74", 8, 17797457560281006, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x27", 134, -511571516828878704, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x27", 134, -511571516828878704, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x27", 134, -511571516828878704, NULL };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x27", 134, -511571516828878704, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79", 9, 1798843608756893563, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x27", 134, -511571516828878704, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s762 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s1206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s1303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x27", 168, 565827917388174030, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s1560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6e\x6f\x64\x65\x3a\x20", 18, -3453142893651057202, NULL };
static panda$core$String $s1562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x63\x6f\x6d\x70\x6c\x65\x78\x69\x74\x79\x28\x6e\x6f\x64\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 133, -6414000039548560057, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x27", 168, 565827917388174030, NULL };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x27", 139, 5314703927183498697, NULL };
static panda$core$String $s1808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x27", 168, -1786035440248615731, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x61\x72\x65\x20\x61\x62\x73\x74\x72\x61\x63\x74\x20\x62\x79\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x20\x65\x78\x70\x6c\x69\x63\x69\x74\x20\x27\x40\x61\x62\x73\x74\x72\x61\x63\x74\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 93, -248208221547222217, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 105, 7765160379978601402, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x27", 109, 4071807571974616729, NULL };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x63\x6c\x61\x73\x73\x20\x63\x68\x69\x6c\x64\x3a\x20", 25, 3029823101366974806, NULL };
static panda$core$String $s2141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x27", 168, 565827917388174030, NULL };
static panda$core$String $s2212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x27", 168, 565827917388174030, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s2318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x27", 168, 565827917388174030, NULL };
static panda$core$String $s2405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65\x20\x65\x6e\x74\x72\x79", 37, -5234797192292926399, NULL };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 9, 1598979626783522604, NULL };
static panda$core$String $s2782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x42\x61\x72\x65\x43\x6f\x64\x65", 18, 1481749219970824221, NULL };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s2876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s2899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x65\x72\x72\x6f\x72\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x73\x67\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 137, -7307671091814209379, NULL };
static panda$core$String $s2909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x27", 65, -5184819833024418747, NULL };
static panda$core$String $s2924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s2969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s2980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x27", 85, 8487282784746649577, NULL };
static panda$core$String $s3038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x63\x6c\x61\x73\x73", 37, -3496695184518838362, NULL };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s3103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s3105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x61\x72\x65\x4d\x61\x69\x6e", 9, 1494124789357617736, NULL };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x42\x61\x72\x65\x43\x6f\x64\x65", 8, 18008836566525658, NULL };
static panda$core$String $s3185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x27", 103, 5260083777862347255, NULL };
static panda$core$String $s3197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s3208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6e", 4, 217363422, NULL };
static panda$core$String $s3215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x27", 109, 4071807571974616729, NULL };
static panda$core$String $s3272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 105, 7765160379978601402, NULL };
static panda$core$String $s3276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s3281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x27", 109, 4071807571974616729, NULL };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s3324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x27", 109, 4071807571974616729, NULL };
static panda$core$String $s3331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s3339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x27", 105, 7765160379978601402, NULL };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s3428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x27", 107, 4425987794594369063, NULL };
static panda$core$String $s3456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x40\x63\x6c\x61\x73\x73\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x75\x73\x65\x64\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x63\x6c\x61\x73\x73", 54, 8566811387257041261, NULL };
static panda$core$String $s3486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20", 13, 3375307400729363680, NULL };
static panda$core$String $s3488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a", 2, 14400, NULL };
static panda$core$String $s3503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x63\x61\x6e\x6e\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -5962399700092672641, NULL };
static panda$core$String $s3522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72\x2e\x73\x63\x61\x6e\x28\x73\x6f\x75\x72\x63\x65\x3a\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x66\x69\x6c\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 193, 7895019779626162639, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 21
panda$core$Weak* $tmp2 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
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
panda$core$Int64 $tmp8 = (panda$core$Int64) {45};
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
org$pandalanguage$pandac$Type* $tmp16 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
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
panda$core$Int64 $tmp22 = (panda$core$Int64) {32};
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
panda$collections$Array* $tmp30 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
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
org$pandalanguage$pandac$Type* $tmp35 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
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
panda$collections$Array* $tmp61 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
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
org$pandalanguage$pandac$Type* $tmp82 = (org$pandalanguage$pandac$Type*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
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
panda$core$Int64 $tmp94 = (panda$core$Int64) {26};
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
panda$core$Int64 $tmp124 = (panda$core$Int64) {30};
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
panda$core$Int64 $tmp142 = (panda$core$Int64) {15};
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
panda$core$Int64 $tmp147 = (panda$core$Int64) {16};
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
panda$core$Int64 $tmp152 = (panda$core$Int64) {17};
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
panda$core$Int64 $tmp157 = (panda$core$Int64) {18};
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
panda$collections$Array* $tmp164 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
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
panda$core$Bit $tmp189 = panda$core$Bit$init$builtin_bit($tmp188 != NULL);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp191 = (panda$core$Int64) {74};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s192, $tmp191, &$s193);
abort(); // unreachable
block36:;
org$pandalanguage$pandac$Type* $tmp194 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp188);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
org$pandalanguage$pandac$Type* $tmp195 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
*(&local19) = $tmp194;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// unreffing REF($461:org.pandalanguage.pandac.Type)
goto block34;
block35:;
// line 1
// line 77
org$pandalanguage$pandac$Type* $tmp196 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
org$pandalanguage$pandac$Type* $tmp197 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
*(&local19) = $tmp196;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing REF($474:org.pandalanguage.pandac.Type)
goto block34;
block34:;
// line 79
$fn199 $tmp198 = ($fn199) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp200 = $tmp198(param1);
org$pandalanguage$pandac$Type$Kind $tmp201 = *(&local16);
panda$collections$Array* $tmp202 = *(&local17);
org$pandalanguage$pandac$FixedArray* $tmp203 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp202);
org$pandalanguage$pandac$Type* $tmp204 = *(&local19);
panda$core$Int64 $tmp205 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp206 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp200, $tmp201, ((panda$collections$ListView*) $tmp203), $tmp204, $tmp205);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing REF($496:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// unreffing REF($491:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
org$pandalanguage$pandac$Type* $tmp207 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
// unreffing returnType
*(&local19) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp208 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
// unreffing parameters
*(&local17) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp209 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
// unreffing rawReturnType
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp210 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
// unreffing rawParameters
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp206;
block18:;
// line 83
panda$core$Bit $tmp211 = panda$core$Bit$init$builtin_bit(false);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block38; else goto block39;
block39:;
panda$core$Int64 $tmp213 = (panda$core$Int64) {83};
panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s215, ((panda$core$Object*) param1));
panda$core$String* $tmp216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp214, &$s217);
panda$core$Int64* $tmp218 = &param1->$rawValue;
panda$core$Int64 $tmp219 = *$tmp218;
panda$core$Int64$wrapper* $tmp220;
$tmp220 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp220->value = $tmp219;
panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp216, ((panda$core$Object*) $tmp220));
panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp221, &$s223);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s224, $tmp213, $tmp222);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// unreffing REF($538:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
// unreffing REF($537:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
// unreffing REF($536:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
// unreffing REF($533:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
// unreffing REF($532:panda.core.String)
abort(); // unreachable
block38:;
goto block1;
block1:;
panda$core$Bit $tmp225 = panda$core$Bit$init$builtin_bit(false);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block40; else goto block41;
block41:;
panda$core$Int64 $tmp227 = (panda$core$Int64) {24};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s228, $tmp227, &$s229);
abort(); // unreachable
block40:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Position param1, panda$core$Int64 param2, panda$core$Int64 param3) {

// line 89
panda$core$Int64 $tmp230 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(param2, param3);
panda$core$Int64 $tmp231 = (panda$core$Int64) {0};
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231.value;
bool $tmp234 = $tmp232 != $tmp233;
panda$core$Bit $tmp235 = (panda$core$Bit) {$tmp234};
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block1; else goto block2;
block1:;
// line 90
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, &$s237);
goto block2;
block2:;
// line 92
panda$core$Int64 $tmp238 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(param2, param3);
return $tmp238;

}
panda$core$Bit org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 99
panda$core$Bit $tmp239 = panda$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block1; else goto block2;
block1:;
// line 100
panda$core$Bit $tmp241 = panda$core$Bit$init$builtin_bit(true);
return $tmp241;
block2:;
// line 102
panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s243, param2);
panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, &$s245);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp244);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp244));
// unreffing REF($10:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
// unreffing REF($9:panda.core.String)
// line 103
panda$core$Bit $tmp246 = panda$core$Bit$init$builtin_bit(false);
return $tmp246;

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
panda$core$Int64 $tmp247 = (panda$core$Int64) {0};
*(&local0) = $tmp247;
// line 97
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
panda$collections$Array* $tmp248 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
*(&local1) = ((panda$collections$Array*) NULL);
// line 98
panda$core$Method* $tmp250 = (panda$core$Method*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp250, ((panda$core$Int8*) org$pandalanguage$pandac$Scanner$$anonymous1$org$pandalanguage$pandac$Scanner$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit), ((panda$core$Immutable*) NULL));
// line 98
*(&local2) = ((panda$core$Method*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
panda$core$Method* $tmp251 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
*(&local2) = $tmp250;
// line 105
ITable* $tmp252 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp252->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp252 = $tmp252->next;
}
$fn254 $tmp253 = $tmp252->methods[0];
panda$collections$Iterator* $tmp255 = $tmp253(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp256 = $tmp255->$class->itable;
while ($tmp256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp256 = $tmp256->next;
}
$fn258 $tmp257 = $tmp256->methods[0];
panda$core$Bit $tmp259 = $tmp257($tmp255);
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block3; else goto block2;
block2:;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp261 = $tmp255->$class->itable;
while ($tmp261->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp261 = $tmp261->next;
}
$fn263 $tmp262 = $tmp261->methods[1];
panda$core$Object* $tmp264 = $tmp262($tmp255);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp264)));
org$pandalanguage$pandac$ASTNode* $tmp265 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) $tmp264);
// line 106
org$pandalanguage$pandac$ASTNode* $tmp266 = *(&local3);
panda$core$Int64* $tmp267 = &$tmp266->$rawValue;
panda$core$Int64 $tmp268 = *$tmp267;
panda$core$Int64 $tmp269 = (panda$core$Int64) {0};
panda$core$Bit $tmp270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp268, $tmp269);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$Position* $tmp272 = (org$pandalanguage$pandac$Position*) ($tmp266->$data + 0);
org$pandalanguage$pandac$Position $tmp273 = *$tmp272;
*(&local4) = $tmp273;
panda$core$String** $tmp274 = (panda$core$String**) ($tmp266->$data + 16);
panda$core$String* $tmp275 = *$tmp274;
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
panda$core$String* $tmp276 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp276));
*(&local5) = $tmp275;
panda$core$String** $tmp277 = (panda$core$String**) ($tmp266->$data + 24);
panda$core$String* $tmp278 = *$tmp277;
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
panda$core$String* $tmp279 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
*(&local6) = $tmp278;
org$pandalanguage$pandac$ASTNode** $tmp280 = (org$pandalanguage$pandac$ASTNode**) ($tmp266->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp281 = *$tmp280;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
org$pandalanguage$pandac$ASTNode* $tmp282 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
*(&local7) = $tmp281;
// line 108
org$pandalanguage$pandac$ASTNode* $tmp283 = *(&local7);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
org$pandalanguage$pandac$ASTNode* $tmp284 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
*(&local8) = $tmp283;
// line 109
panda$core$String* $tmp285 = *(&local5);
panda$core$Bit $tmp286 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s287);
bool $tmp288 = $tmp286.value;
if ($tmp288) goto block8; else goto block9;
block8:;
// line 111
org$pandalanguage$pandac$Position $tmp289 = *(&local4);
panda$core$Int64 $tmp290 = *(&local0);
panda$core$Int64 $tmp291 = (panda$core$Int64) {2};
panda$core$Int64 $tmp292 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp289, $tmp290, $tmp291);
*(&local0) = $tmp292;
goto block7;
block9:;
panda$core$Bit $tmp293 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s294);
bool $tmp295 = $tmp293.value;
if ($tmp295) goto block10; else goto block11;
block10:;
// line 114
org$pandalanguage$pandac$Position $tmp296 = *(&local4);
panda$core$Int64 $tmp297 = *(&local0);
panda$core$Int64 $tmp298 = (panda$core$Int64) {4};
panda$core$Int64 $tmp299 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp296, $tmp297, $tmp298);
*(&local0) = $tmp299;
goto block7;
block11:;
panda$core$Bit $tmp300 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s301);
bool $tmp302 = $tmp300.value;
if ($tmp302) goto block12; else goto block13;
block12:;
// line 117
org$pandalanguage$pandac$Position $tmp303 = *(&local4);
panda$core$Int64 $tmp304 = *(&local0);
panda$core$Int64 $tmp305 = (panda$core$Int64) {8};
panda$core$Int64 $tmp306 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp303, $tmp304, $tmp305);
*(&local0) = $tmp306;
goto block7;
block13:;
panda$core$Bit $tmp307 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s308);
bool $tmp309 = $tmp307.value;
if ($tmp309) goto block14; else goto block15;
block14:;
// line 120
org$pandalanguage$pandac$Position $tmp310 = *(&local4);
panda$core$Int64 $tmp311 = *(&local0);
panda$core$Int64 $tmp312 = (panda$core$Int64) {16};
panda$core$Int64 $tmp313 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp310, $tmp311, $tmp312);
*(&local0) = $tmp313;
goto block7;
block15:;
panda$core$Bit $tmp314 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s315);
bool $tmp316 = $tmp314.value;
if ($tmp316) goto block16; else goto block17;
block16:;
// line 123
org$pandalanguage$pandac$Position $tmp317 = *(&local4);
panda$core$Int64 $tmp318 = *(&local0);
panda$core$Int64 $tmp319 = (panda$core$Int64) {32};
panda$core$Int64 $tmp320 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp317, $tmp318, $tmp319);
*(&local0) = $tmp320;
goto block7;
block17:;
panda$core$Bit $tmp321 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s322);
bool $tmp323 = $tmp321.value;
if ($tmp323) goto block18; else goto block19;
block18:;
// line 126
org$pandalanguage$pandac$Position $tmp324 = *(&local4);
panda$core$Int64 $tmp325 = *(&local0);
panda$core$Int64 $tmp326 = (panda$core$Int64) {64};
panda$core$Int64 $tmp327 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp324, $tmp325, $tmp326);
*(&local0) = $tmp327;
goto block7;
block19:;
panda$core$Bit $tmp328 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s329);
bool $tmp330 = $tmp328.value;
if ($tmp330) goto block20; else goto block21;
block20:;
// line 129
org$pandalanguage$pandac$Position $tmp331 = *(&local4);
panda$core$Int64 $tmp332 = *(&local0);
panda$core$Int64 $tmp333 = (panda$core$Int64) {128};
panda$core$Int64 $tmp334 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp331, $tmp332, $tmp333);
*(&local0) = $tmp334;
goto block7;
block21:;
panda$core$Bit $tmp335 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s336);
bool $tmp337 = $tmp335.value;
if ($tmp337) goto block22; else goto block23;
block22:;
// line 132
org$pandalanguage$pandac$Position $tmp338 = *(&local4);
panda$core$Int64 $tmp339 = *(&local0);
panda$core$Int64 $tmp340 = (panda$core$Int64) {256};
panda$core$Int64 $tmp341 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp338, $tmp339, $tmp340);
*(&local0) = $tmp341;
goto block7;
block23:;
panda$core$Bit $tmp342 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s343);
bool $tmp344 = $tmp342.value;
if ($tmp344) goto block24; else goto block25;
block24:;
// line 135
org$pandalanguage$pandac$Position $tmp345 = *(&local4);
panda$core$Int64 $tmp346 = *(&local0);
panda$core$Int64 $tmp347 = (panda$core$Int64) {512};
panda$core$Int64 $tmp348 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp345, $tmp346, $tmp347);
*(&local0) = $tmp348;
goto block7;
block25:;
panda$core$Bit $tmp349 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s350);
bool $tmp351 = $tmp349.value;
if ($tmp351) goto block26; else goto block27;
block26:;
// line 138
org$pandalanguage$pandac$Position $tmp352 = *(&local4);
panda$core$Int64 $tmp353 = *(&local0);
panda$core$Int64 $tmp354 = (panda$core$Int64) {1024};
panda$core$Int64 $tmp355 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp352, $tmp353, $tmp354);
*(&local0) = $tmp355;
goto block7;
block27:;
panda$core$Bit $tmp356 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s357);
bool $tmp358 = $tmp356.value;
if ($tmp358) goto block28; else goto block29;
block28:;
// line 141
org$pandalanguage$pandac$Position $tmp359 = *(&local4);
panda$core$Int64 $tmp360 = *(&local0);
panda$core$Int64 $tmp361 = (panda$core$Int64) {2048};
panda$core$Int64 $tmp362 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp359, $tmp360, $tmp361);
*(&local0) = $tmp362;
goto block7;
block29:;
panda$core$Bit $tmp363 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s364);
bool $tmp365 = $tmp363.value;
if ($tmp365) goto block30; else goto block31;
block30:;
// line 144
org$pandalanguage$pandac$Position $tmp366 = *(&local4);
panda$core$Int64 $tmp367 = *(&local0);
panda$core$Int64 $tmp368 = (panda$core$Int64) {4096};
panda$core$Int64 $tmp369 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp366, $tmp367, $tmp368);
*(&local0) = $tmp369;
goto block7;
block31:;
panda$core$Bit $tmp370 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s371);
bool $tmp372 = $tmp370.value;
if ($tmp372) goto block32; else goto block33;
block32:;
// line 147
org$pandalanguage$pandac$Position $tmp373 = *(&local4);
panda$core$Int64 $tmp374 = *(&local0);
panda$core$Int64 $tmp375 = (panda$core$Int64) {16384};
panda$core$Int64 $tmp376 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp373, $tmp374, $tmp375);
*(&local0) = $tmp376;
goto block7;
block33:;
panda$core$Bit $tmp377 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s378);
bool $tmp379 = $tmp377.value;
if ($tmp379) goto block34; else goto block35;
block34:;
// line 150
org$pandalanguage$pandac$Position $tmp380 = *(&local4);
panda$core$Int64 $tmp381 = *(&local0);
panda$core$Int64 $tmp382 = (panda$core$Int64) {32768};
panda$core$Int64 $tmp383 = org$pandalanguage$pandac$Scanner$add$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$Int64$R$panda$core$Int64(param0, $tmp380, $tmp381, $tmp382);
*(&local0) = $tmp383;
goto block7;
block35:;
panda$core$Bit $tmp384 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s385);
bool $tmp386 = $tmp384.value;
if ($tmp386) goto block36; else goto block37;
block36:;
// line 153
panda$collections$Array* $tmp387 = *(&local1);
panda$core$Bit $tmp388 = panda$core$Bit$init$builtin_bit($tmp387 == NULL);
bool $tmp389 = $tmp388.value;
if ($tmp389) goto block38; else goto block39;
block38:;
// line 154
panda$collections$Array* $tmp390 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp390);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
panda$collections$Array* $tmp391 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
*(&local1) = $tmp390;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
// unreffing REF($246:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block39;
block39:;
// line 156
panda$core$Method* $tmp392 = *(&local2);
org$pandalanguage$pandac$Position $tmp393 = *(&local4);
panda$core$String* $tmp394 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp395 = *(&local8);
panda$core$Int8** $tmp396 = &$tmp392->pointer;
panda$core$Int8* $tmp397 = *$tmp396;
panda$core$Immutable** $tmp398 = &$tmp392->target;
panda$core$Immutable* $tmp399 = *$tmp398;
bool $tmp400 = $tmp399 != ((panda$core$Immutable*) NULL);
if ($tmp400) goto block42; else goto block43;
block43:;
panda$core$Bit $tmp402 = (($fn401) $tmp397)(param0, $tmp393, $tmp394, $tmp395);
*(&local9) = $tmp402;
goto block44;
block42:;
panda$core$Bit $tmp404 = (($fn403) $tmp397)($tmp399, param0, $tmp393, $tmp394, $tmp395);
*(&local9) = $tmp404;
goto block44;
block44:;
panda$core$Bit $tmp405 = *(&local9);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block40; else goto block41;
block40:;
// line 157
panda$collections$Array* $tmp407 = *(&local1);
panda$core$Bit $tmp408 = panda$core$Bit$init$builtin_bit($tmp407 != NULL);
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block45; else goto block46;
block46:;
panda$core$Int64 $tmp410 = (panda$core$Int64) {157};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s411, $tmp410, &$s412);
abort(); // unreachable
block45:;
org$pandalanguage$pandac$Annotations$Expression* $tmp413 = (org$pandalanguage$pandac$Annotations$Expression*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp414 = (panda$core$Int64) {0};
panda$core$String* $tmp415 = *(&local6);
panda$core$Bit $tmp416 = panda$core$Bit$init$builtin_bit($tmp415 != NULL);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block47; else goto block48;
block48:;
panda$core$Int64 $tmp418 = (panda$core$Int64) {157};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s419, $tmp418, &$s420);
abort(); // unreachable
block47:;
org$pandalanguage$pandac$ASTNode* $tmp421 = *(&local8);
panda$core$Bit $tmp422 = panda$core$Bit$init$builtin_bit($tmp421 != NULL);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp424 = (panda$core$Int64) {157};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s425, $tmp424, &$s426);
abort(); // unreachable
block49:;
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp413, $tmp414, $tmp415, $tmp421);
panda$collections$Array$add$panda$collections$Array$T($tmp407, ((panda$core$Object*) $tmp413));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
// unreffing REF($293:org.pandalanguage.pandac.Annotations.Expression)
// line 158
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp427 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block41;
block41:;
goto block7;
block37:;
panda$core$Bit $tmp428 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s429);
bool $tmp430 = $tmp428.value;
if ($tmp430) goto block51; else goto block52;
block51:;
// line 162
panda$collections$Array* $tmp431 = *(&local1);
panda$core$Bit $tmp432 = panda$core$Bit$init$builtin_bit($tmp431 == NULL);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block53; else goto block54;
block53:;
// line 163
panda$collections$Array* $tmp434 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp434);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
panda$collections$Array* $tmp435 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
*(&local1) = $tmp434;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
// unreffing REF($338:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block54;
block54:;
// line 165
panda$core$Method* $tmp436 = *(&local2);
org$pandalanguage$pandac$Position $tmp437 = *(&local4);
panda$core$String* $tmp438 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp439 = *(&local8);
panda$core$Int8** $tmp440 = &$tmp436->pointer;
panda$core$Int8* $tmp441 = *$tmp440;
panda$core$Immutable** $tmp442 = &$tmp436->target;
panda$core$Immutable* $tmp443 = *$tmp442;
bool $tmp444 = $tmp443 != ((panda$core$Immutable*) NULL);
if ($tmp444) goto block57; else goto block58;
block58:;
panda$core$Bit $tmp446 = (($fn445) $tmp441)(param0, $tmp437, $tmp438, $tmp439);
*(&local10) = $tmp446;
goto block59;
block57:;
panda$core$Bit $tmp448 = (($fn447) $tmp441)($tmp443, param0, $tmp437, $tmp438, $tmp439);
*(&local10) = $tmp448;
goto block59;
block59:;
panda$core$Bit $tmp449 = *(&local10);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block55; else goto block56;
block55:;
// line 166
panda$collections$Array* $tmp451 = *(&local1);
panda$core$Bit $tmp452 = panda$core$Bit$init$builtin_bit($tmp451 != NULL);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block60; else goto block61;
block61:;
panda$core$Int64 $tmp454 = (panda$core$Int64) {166};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s455, $tmp454, &$s456);
abort(); // unreachable
block60:;
org$pandalanguage$pandac$Annotations$Expression* $tmp457 = (org$pandalanguage$pandac$Annotations$Expression*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp458 = (panda$core$Int64) {1};
panda$core$String* $tmp459 = *(&local6);
panda$core$Bit $tmp460 = panda$core$Bit$init$builtin_bit($tmp459 != NULL);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block62; else goto block63;
block63:;
panda$core$Int64 $tmp462 = (panda$core$Int64) {166};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s463, $tmp462, &$s464);
abort(); // unreachable
block62:;
org$pandalanguage$pandac$ASTNode* $tmp465 = *(&local8);
panda$core$Bit $tmp466 = panda$core$Bit$init$builtin_bit($tmp465 != NULL);
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block64; else goto block65;
block65:;
panda$core$Int64 $tmp468 = (panda$core$Int64) {166};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s469, $tmp468, &$s470);
abort(); // unreachable
block64:;
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp457, $tmp458, $tmp459, $tmp465);
panda$collections$Array$add$panda$collections$Array$T($tmp451, ((panda$core$Object*) $tmp457));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
// unreffing REF($385:org.pandalanguage.pandac.Annotations.Expression)
// line 167
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp471 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp471));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block56;
block56:;
goto block7;
block52:;
panda$core$Bit $tmp472 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s473);
bool $tmp474 = $tmp472.value;
if ($tmp474) goto block66; else goto block67;
block66:;
// line 171
panda$collections$Array* $tmp475 = *(&local1);
panda$core$Bit $tmp476 = panda$core$Bit$init$builtin_bit($tmp475 == NULL);
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block68; else goto block69;
block68:;
// line 172
panda$collections$Array* $tmp478 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp478);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp478));
panda$collections$Array* $tmp479 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
*(&local1) = $tmp478;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp478));
// unreffing REF($430:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block69;
block69:;
// line 174
panda$core$Method* $tmp480 = *(&local2);
org$pandalanguage$pandac$Position $tmp481 = *(&local4);
panda$core$String* $tmp482 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp483 = *(&local8);
panda$core$Int8** $tmp484 = &$tmp480->pointer;
panda$core$Int8* $tmp485 = *$tmp484;
panda$core$Immutable** $tmp486 = &$tmp480->target;
panda$core$Immutable* $tmp487 = *$tmp486;
bool $tmp488 = $tmp487 != ((panda$core$Immutable*) NULL);
if ($tmp488) goto block72; else goto block73;
block73:;
panda$core$Bit $tmp490 = (($fn489) $tmp485)(param0, $tmp481, $tmp482, $tmp483);
*(&local11) = $tmp490;
goto block74;
block72:;
panda$core$Bit $tmp492 = (($fn491) $tmp485)($tmp487, param0, $tmp481, $tmp482, $tmp483);
*(&local11) = $tmp492;
goto block74;
block74:;
panda$core$Bit $tmp493 = *(&local11);
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block70; else goto block71;
block70:;
// line 175
panda$collections$Array* $tmp495 = *(&local1);
panda$core$Bit $tmp496 = panda$core$Bit$init$builtin_bit($tmp495 != NULL);
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block75; else goto block76;
block76:;
panda$core$Int64 $tmp498 = (panda$core$Int64) {175};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s499, $tmp498, &$s500);
abort(); // unreachable
block75:;
org$pandalanguage$pandac$Annotations$Expression* $tmp501 = (org$pandalanguage$pandac$Annotations$Expression*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp502 = (panda$core$Int64) {2};
panda$core$String* $tmp503 = *(&local6);
panda$core$Bit $tmp504 = panda$core$Bit$init$builtin_bit($tmp503 != NULL);
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block77; else goto block78;
block78:;
panda$core$Int64 $tmp506 = (panda$core$Int64) {175};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s507, $tmp506, &$s508);
abort(); // unreachable
block77:;
org$pandalanguage$pandac$ASTNode* $tmp509 = *(&local8);
panda$core$Bit $tmp510 = panda$core$Bit$init$builtin_bit($tmp509 != NULL);
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block79; else goto block80;
block80:;
panda$core$Int64 $tmp512 = (panda$core$Int64) {175};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s513, $tmp512, &$s514);
abort(); // unreachable
block79:;
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp501, $tmp502, $tmp503, $tmp509);
panda$collections$Array$add$panda$collections$Array$T($tmp495, ((panda$core$Object*) $tmp501));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
// unreffing REF($477:org.pandalanguage.pandac.Annotations.Expression)
// line 176
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp515 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block71;
block71:;
goto block7;
block67:;
panda$core$Bit $tmp516 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s517);
bool $tmp518 = $tmp516.value;
if ($tmp518) goto block81; else goto block82;
block81:;
// line 180
panda$collections$Array* $tmp519 = *(&local1);
panda$core$Bit $tmp520 = panda$core$Bit$init$builtin_bit($tmp519 == NULL);
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block83; else goto block84;
block83:;
// line 181
panda$collections$Array* $tmp522 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp522);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
panda$collections$Array* $tmp523 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
*(&local1) = $tmp522;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
// unreffing REF($522:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block84;
block84:;
// line 183
panda$core$Method* $tmp524 = *(&local2);
org$pandalanguage$pandac$Position $tmp525 = *(&local4);
panda$core$String* $tmp526 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp527 = *(&local8);
panda$core$Int8** $tmp528 = &$tmp524->pointer;
panda$core$Int8* $tmp529 = *$tmp528;
panda$core$Immutable** $tmp530 = &$tmp524->target;
panda$core$Immutable* $tmp531 = *$tmp530;
bool $tmp532 = $tmp531 != ((panda$core$Immutable*) NULL);
if ($tmp532) goto block87; else goto block88;
block88:;
panda$core$Bit $tmp534 = (($fn533) $tmp529)(param0, $tmp525, $tmp526, $tmp527);
*(&local12) = $tmp534;
goto block89;
block87:;
panda$core$Bit $tmp536 = (($fn535) $tmp529)($tmp531, param0, $tmp525, $tmp526, $tmp527);
*(&local12) = $tmp536;
goto block89;
block89:;
panda$core$Bit $tmp537 = *(&local12);
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block85; else goto block86;
block85:;
// line 184
panda$collections$Array* $tmp539 = *(&local1);
panda$core$Bit $tmp540 = panda$core$Bit$init$builtin_bit($tmp539 != NULL);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block90; else goto block91;
block91:;
panda$core$Int64 $tmp542 = (panda$core$Int64) {184};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s543, $tmp542, &$s544);
abort(); // unreachable
block90:;
org$pandalanguage$pandac$Annotations$Expression* $tmp545 = (org$pandalanguage$pandac$Annotations$Expression*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp546 = (panda$core$Int64) {3};
panda$core$String* $tmp547 = *(&local6);
panda$core$Bit $tmp548 = panda$core$Bit$init$builtin_bit($tmp547 != NULL);
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block92; else goto block93;
block93:;
panda$core$Int64 $tmp550 = (panda$core$Int64) {184};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s551, $tmp550, &$s552);
abort(); // unreachable
block92:;
org$pandalanguage$pandac$ASTNode* $tmp553 = *(&local8);
panda$core$Bit $tmp554 = panda$core$Bit$init$builtin_bit($tmp553 != NULL);
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block94; else goto block95;
block95:;
panda$core$Int64 $tmp556 = (panda$core$Int64) {184};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s557, $tmp556, &$s558);
abort(); // unreachable
block94:;
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp545, $tmp546, $tmp547, $tmp553);
panda$collections$Array$add$panda$collections$Array$T($tmp539, ((panda$core$Object*) $tmp545));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
// unreffing REF($569:org.pandalanguage.pandac.Annotations.Expression)
// line 185
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp559 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp559));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block86;
block86:;
goto block7;
block82:;
panda$core$Bit $tmp560 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp285, &$s561);
bool $tmp562 = $tmp560.value;
if ($tmp562) goto block96; else goto block97;
block96:;
// line 189
panda$collections$Array* $tmp563 = *(&local1);
panda$core$Bit $tmp564 = panda$core$Bit$init$builtin_bit($tmp563 == NULL);
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block98; else goto block99;
block98:;
// line 190
panda$collections$Array* $tmp566 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp566);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
panda$collections$Array* $tmp567 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
*(&local1) = $tmp566;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
// unreffing REF($614:panda.collections.Array<org.pandalanguage.pandac.Annotations.Expression>)
goto block99;
block99:;
// line 192
panda$core$Method* $tmp568 = *(&local2);
org$pandalanguage$pandac$Position $tmp569 = *(&local4);
panda$core$String* $tmp570 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp571 = *(&local8);
panda$core$Int8** $tmp572 = &$tmp568->pointer;
panda$core$Int8* $tmp573 = *$tmp572;
panda$core$Immutable** $tmp574 = &$tmp568->target;
panda$core$Immutable* $tmp575 = *$tmp574;
bool $tmp576 = $tmp575 != ((panda$core$Immutable*) NULL);
if ($tmp576) goto block102; else goto block103;
block103:;
panda$core$Bit $tmp578 = (($fn577) $tmp573)(param0, $tmp569, $tmp570, $tmp571);
*(&local13) = $tmp578;
goto block104;
block102:;
panda$core$Bit $tmp580 = (($fn579) $tmp573)($tmp575, param0, $tmp569, $tmp570, $tmp571);
*(&local13) = $tmp580;
goto block104;
block104:;
panda$core$Bit $tmp581 = *(&local13);
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block100; else goto block101;
block100:;
// line 193
panda$collections$Array* $tmp583 = *(&local1);
panda$core$Bit $tmp584 = panda$core$Bit$init$builtin_bit($tmp583 != NULL);
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block105; else goto block106;
block106:;
panda$core$Int64 $tmp586 = (panda$core$Int64) {193};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s587, $tmp586, &$s588);
abort(); // unreachable
block105:;
org$pandalanguage$pandac$Annotations$Expression* $tmp589 = (org$pandalanguage$pandac$Annotations$Expression*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
panda$core$Int64 $tmp590 = (panda$core$Int64) {4};
panda$core$String* $tmp591 = *(&local6);
panda$core$Bit $tmp592 = panda$core$Bit$init$builtin_bit($tmp591 != NULL);
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block107; else goto block108;
block108:;
panda$core$Int64 $tmp594 = (panda$core$Int64) {193};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s595, $tmp594, &$s596);
abort(); // unreachable
block107:;
org$pandalanguage$pandac$ASTNode* $tmp597 = *(&local8);
panda$core$Bit $tmp598 = panda$core$Bit$init$builtin_bit($tmp597 != NULL);
bool $tmp599 = $tmp598.value;
if ($tmp599) goto block109; else goto block110;
block110:;
panda$core$Int64 $tmp600 = (panda$core$Int64) {193};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s601, $tmp600, &$s602);
abort(); // unreachable
block109:;
org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp589, $tmp590, $tmp591, $tmp597);
panda$collections$Array$add$panda$collections$Array$T($tmp583, ((panda$core$Object*) $tmp589));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp589));
// unreffing REF($661:org.pandalanguage.pandac.Annotations.Expression)
// line 194
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp603 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block101;
block101:;
goto block7;
block97:;
// line 198
org$pandalanguage$pandac$Position $tmp604 = *(&local4);
panda$core$String* $tmp605 = *(&local5);
panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s607, $tmp605);
panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp606, &$s609);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp604, $tmp608);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
// unreffing REF($700:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
// unreffing REF($699:panda.core.String)
goto block7;
block7:;
// line 201
org$pandalanguage$pandac$ASTNode* $tmp610 = *(&local8);
panda$core$Bit $tmp611 = panda$core$Bit$init$builtin_bit($tmp610 != NULL);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block111; else goto block112;
block111:;
// line 202
org$pandalanguage$pandac$Position $tmp613 = *(&local4);
panda$core$String* $tmp614 = *(&local5);
panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s616, $tmp614);
panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp615, &$s618);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp613, $tmp617);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
// unreffing REF($719:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
// unreffing REF($718:panda.core.String)
goto block112;
block112:;
org$pandalanguage$pandac$ASTNode* $tmp619 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
// unreffing expr
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp620 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
// unreffing rawExpr
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp621 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
// unreffing exprText
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp622 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
// unreffing text
*(&local5) = ((panda$core$String*) NULL);
goto block4;
block6:;
// line 206
panda$core$Bit $tmp623 = panda$core$Bit$init$builtin_bit(false);
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block113; else goto block114;
block114:;
panda$core$Int64 $tmp625 = (panda$core$Int64) {206};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s626, $tmp625);
abort(); // unreachable
block113:;
goto block4;
block4:;
panda$core$Panda$unref$panda$core$Object$Q($tmp264);
// unreffing REF($39:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp627 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
// unreffing c
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
// unreffing REF($28:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 210
org$pandalanguage$pandac$Annotations* $tmp628 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp629 = *(&local0);
panda$collections$Array* $tmp630 = *(&local1);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp628, $tmp629, ((panda$collections$ListView*) $tmp630));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
// unreffing REF($770:org.pandalanguage.pandac.Annotations)
panda$core$Method* $tmp631 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp631));
// unreffing checkExpression
*(&local2) = ((panda$core$Method*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
// unreffing REF($13:panda.core.Method)
panda$collections$Array* $tmp632 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp628;

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
panda$core$Bit $tmp633 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block1; else goto block3;
block1:;
// line 218
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp635 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 221
panda$core$Bit $tmp636 = panda$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp638 = (panda$core$Int64) {221};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s639, $tmp638, &$s640);
abort(); // unreachable
block4:;
panda$core$Int64* $tmp641 = &param3->$rawValue;
panda$core$Int64 $tmp642 = *$tmp641;
panda$core$Int64 $tmp643 = (panda$core$Int64) {41};
panda$core$Bit $tmp644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp642, $tmp643);
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block7; else goto block8;
block7:;
org$pandalanguage$pandac$Position* $tmp646 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp647 = *$tmp646;
*(&local1) = $tmp647;
panda$core$String** $tmp648 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp649 = *$tmp648;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
panda$core$String* $tmp650 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp650));
*(&local2) = $tmp649;
// line 223
panda$core$String* $tmp651 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp651));
panda$core$String* $tmp652 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
*(&local0) = $tmp651;
panda$core$String* $tmp653 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block6;
block8:;
// line 226
panda$core$Bit $tmp654 = panda$core$Bit$init$builtin_bit(false);
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp656 = (panda$core$Int64) {226};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s657, $tmp656);
abort(); // unreachable
block9:;
goto block6;
block6:;
goto block2;
block2:;
// line 230
org$pandalanguage$pandac$Annotations* $tmp658 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param4);
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
org$pandalanguage$pandac$Annotations* $tmp659 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
*(&local3) = $tmp658;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
// unreffing REF($68:org.pandalanguage.pandac.Annotations)
// line 231
// line 232
panda$core$Int64* $tmp660 = &param5->$rawValue;
panda$core$Int64 $tmp661 = *$tmp660;
panda$core$Int64 $tmp662 = (panda$core$Int64) {50};
panda$core$Bit $tmp663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp661, $tmp662);
bool $tmp664 = $tmp663.value;
if ($tmp664) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp665 = (org$pandalanguage$pandac$Position*) (param5->$data + 0);
org$pandalanguage$pandac$Position $tmp666 = *$tmp665;
org$pandalanguage$pandac$Variable$Kind* $tmp667 = (org$pandalanguage$pandac$Variable$Kind*) (param5->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp668 = *$tmp667;
*(&local5) = $tmp668;
org$pandalanguage$pandac$FixedArray** $tmp669 = (org$pandalanguage$pandac$FixedArray**) (param5->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp670 = *$tmp669;
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
org$pandalanguage$pandac$FixedArray* $tmp671 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
*(&local6) = $tmp670;
// line 234
org$pandalanguage$pandac$Variable$Kind $tmp672 = *(&local5);
panda$core$Int64 $tmp673 = $tmp672.$rawValue;
panda$core$Int64 $tmp674 = (panda$core$Int64) {0};
panda$core$Bit $tmp675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp673, $tmp674);
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block15; else goto block16;
block15:;
// line 236
panda$core$Int64 $tmp677 = (panda$core$Int64) {0};
org$pandalanguage$pandac$FieldDecl$Kind $tmp678 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp677);
*(&local4) = $tmp678;
goto block14;
block16:;
panda$core$Int64 $tmp679 = (panda$core$Int64) {1};
panda$core$Bit $tmp680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp673, $tmp679);
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block17; else goto block18;
block17:;
// line 239
panda$core$Int64 $tmp682 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp683 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp682);
*(&local4) = $tmp683;
goto block14;
block18:;
panda$core$Int64 $tmp684 = (panda$core$Int64) {2};
panda$core$Bit $tmp685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp673, $tmp684);
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block19; else goto block20;
block19:;
// line 242
panda$core$Int64 $tmp687 = (panda$core$Int64) {2};
org$pandalanguage$pandac$FieldDecl$Kind $tmp688 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp687);
*(&local4) = $tmp688;
// line 243
org$pandalanguage$pandac$Annotations* $tmp689 = *(&local3);
panda$core$Int64* $tmp690 = &$tmp689->flags;
panda$core$Int64 $tmp691 = *$tmp690;
panda$core$Int64 $tmp692 = (panda$core$Int64) {16};
panda$core$Int64 $tmp693 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp691, $tmp692);
panda$core$Int64* $tmp694 = &$tmp689->flags;
*$tmp694 = $tmp693;
goto block14;
block20:;
panda$core$Int64 $tmp695 = (panda$core$Int64) {3};
panda$core$Bit $tmp696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp673, $tmp695);
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block21; else goto block14;
block21:;
// line 246
panda$core$Int64 $tmp698 = (panda$core$Int64) {3};
org$pandalanguage$pandac$FieldDecl$Kind $tmp699 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp698);
*(&local4) = $tmp699;
goto block14;
block14:;
// line 249
org$pandalanguage$pandac$FixedArray* $tmp700 = *(&local6);
ITable* $tmp701 = ((panda$collections$Iterable*) $tmp700)->$class->itable;
while ($tmp701->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp701 = $tmp701->next;
}
$fn703 $tmp702 = $tmp701->methods[0];
panda$collections$Iterator* $tmp704 = $tmp702(((panda$collections$Iterable*) $tmp700));
goto block22;
block22:;
ITable* $tmp705 = $tmp704->$class->itable;
while ($tmp705->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp705 = $tmp705->next;
}
$fn707 $tmp706 = $tmp705->methods[0];
panda$core$Bit $tmp708 = $tmp706($tmp704);
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block24; else goto block23;
block23:;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp710 = $tmp704->$class->itable;
while ($tmp710->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp710 = $tmp710->next;
}
$fn712 $tmp711 = $tmp710->methods[1];
panda$core$Object* $tmp713 = $tmp711($tmp704);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp713)));
org$pandalanguage$pandac$ASTNode* $tmp714 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp714));
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) $tmp713);
// line 250
org$pandalanguage$pandac$ASTNode* $tmp715 = *(&local7);
panda$core$Int64* $tmp716 = &$tmp715->$rawValue;
panda$core$Int64 $tmp717 = *$tmp716;
panda$core$Int64 $tmp718 = (panda$core$Int64) {14};
panda$core$Bit $tmp719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp717, $tmp718);
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp721 = (org$pandalanguage$pandac$Position*) ($tmp715->$data + 0);
org$pandalanguage$pandac$Position $tmp722 = *$tmp721;
*(&local8) = $tmp722;
org$pandalanguage$pandac$ASTNode** $tmp723 = (org$pandalanguage$pandac$ASTNode**) ($tmp715->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp724 = *$tmp723;
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp724));
org$pandalanguage$pandac$ASTNode* $tmp725 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
*(&local9) = $tmp724;
org$pandalanguage$pandac$ASTNode** $tmp726 = (org$pandalanguage$pandac$ASTNode**) ($tmp715->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp727 = *$tmp726;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp727));
org$pandalanguage$pandac$ASTNode* $tmp728 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
*(&local10) = $tmp727;
// line 252
*(&local11) = ((panda$core$String*) NULL);
// line 253
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
// line 254
org$pandalanguage$pandac$ASTNode* $tmp729 = *(&local9);
panda$core$Int64* $tmp730 = &$tmp729->$rawValue;
panda$core$Int64 $tmp731 = *$tmp730;
panda$core$Int64 $tmp732 = (panda$core$Int64) {22};
panda$core$Bit $tmp733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp731, $tmp732);
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block29; else goto block30;
block29:;
org$pandalanguage$pandac$Position* $tmp735 = (org$pandalanguage$pandac$Position*) ($tmp729->$data + 0);
org$pandalanguage$pandac$Position $tmp736 = *$tmp735;
panda$core$String** $tmp737 = (panda$core$String**) ($tmp729->$data + 16);
panda$core$String* $tmp738 = *$tmp737;
*(&local13) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp738));
panda$core$String* $tmp739 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp739));
*(&local13) = $tmp738;
// line 256
panda$core$String* $tmp740 = *(&local13);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
panda$core$String* $tmp741 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp741));
*(&local11) = $tmp740;
// line 257
org$pandalanguage$pandac$Type* $tmp742 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp742));
org$pandalanguage$pandac$Type* $tmp743 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp743));
*(&local12) = $tmp742;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp742));
// unreffing REF($233:org.pandalanguage.pandac.Type)
panda$core$String* $tmp744 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp744));
// unreffing id
*(&local13) = ((panda$core$String*) NULL);
goto block28;
block30:;
panda$core$Int64 $tmp745 = (panda$core$Int64) {47};
panda$core$Bit $tmp746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp731, $tmp745);
bool $tmp747 = $tmp746.value;
if ($tmp747) goto block31; else goto block32;
block31:;
org$pandalanguage$pandac$Position* $tmp748 = (org$pandalanguage$pandac$Position*) ($tmp729->$data + 0);
org$pandalanguage$pandac$Position $tmp749 = *$tmp748;
panda$core$String** $tmp750 = (panda$core$String**) ($tmp729->$data + 16);
panda$core$String* $tmp751 = *$tmp750;
*(&local14) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp751));
panda$core$String* $tmp752 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp752));
*(&local14) = $tmp751;
org$pandalanguage$pandac$ASTNode** $tmp753 = (org$pandalanguage$pandac$ASTNode**) ($tmp729->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp754 = *$tmp753;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp754));
org$pandalanguage$pandac$ASTNode* $tmp755 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp755));
*(&local15) = $tmp754;
// line 260
panda$core$String* $tmp756 = *(&local14);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp756));
panda$core$String* $tmp757 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp757));
*(&local11) = $tmp756;
// line 261
org$pandalanguage$pandac$ASTNode* $tmp758 = *(&local15);
panda$core$Bit $tmp759 = panda$core$Bit$init$builtin_bit($tmp758 != NULL);
bool $tmp760 = $tmp759.value;
if ($tmp760) goto block33; else goto block34;
block34:;
panda$core$Int64 $tmp761 = (panda$core$Int64) {261};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s762, $tmp761, &$s763);
abort(); // unreachable
block33:;
org$pandalanguage$pandac$Type* $tmp764 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp758);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
org$pandalanguage$pandac$Type* $tmp765 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
*(&local12) = $tmp764;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
// unreffing REF($291:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$ASTNode* $tmp766 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
// unreffing idType
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp767 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
// unreffing id
*(&local14) = ((panda$core$String*) NULL);
goto block28;
block32:;
// line 264
panda$core$Bit $tmp768 = panda$core$Bit$init$builtin_bit(false);
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block35; else goto block36;
block36:;
panda$core$Int64 $tmp770 = (panda$core$Int64) {264};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s771, $tmp770);
abort(); // unreachable
block35:;
goto block28;
block28:;
// line 267
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 268
org$pandalanguage$pandac$ASTNode* $tmp772 = *(&local10);
panda$core$Bit $tmp773 = panda$core$Bit$init$builtin_bit($tmp772 == NULL);
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block39; else goto block40;
block39:;
org$pandalanguage$pandac$Annotations* $tmp775 = *(&local3);
panda$core$Bit $tmp776 = org$pandalanguage$pandac$Annotations$get_isWeak$R$panda$core$Bit($tmp775);
*(&local18) = $tmp776;
goto block41;
block40:;
*(&local18) = $tmp773;
goto block41;
block41:;
panda$core$Bit $tmp777 = *(&local18);
bool $tmp778 = $tmp777.value;
if ($tmp778) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Type* $tmp779 = *(&local12);
org$pandalanguage$pandac$Type$Kind* $tmp780 = &$tmp779->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp781 = *$tmp780;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp782;
$tmp782 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp782->value = $tmp781;
panda$core$Int64 $tmp783 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp784 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp783);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp785;
$tmp785 = (org$pandalanguage$pandac$Type$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp785->value = $tmp784;
ITable* $tmp786 = ((panda$core$Equatable*) $tmp782)->$class->itable;
while ($tmp786->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp786 = $tmp786->next;
}
$fn788 $tmp787 = $tmp786->methods[0];
panda$core$Bit $tmp789 = $tmp787(((panda$core$Equatable*) $tmp782), ((panda$core$Equatable*) $tmp785));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp785)));
// unreffing REF($344:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp782)));
// unreffing REF($340:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
*(&local17) = $tmp789;
goto block44;
block43:;
*(&local17) = $tmp777;
goto block44;
block44:;
panda$core$Bit $tmp790 = *(&local17);
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block37; else goto block45;
block37:;
// line 270
org$pandalanguage$pandac$ASTNode* $tmp792 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp793 = (panda$core$Int64) {31};
org$pandalanguage$pandac$Position $tmp794 = *(&local8);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp792, $tmp793, $tmp794);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp792));
org$pandalanguage$pandac$ASTNode* $tmp795 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp795));
*(&local16) = $tmp792;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp792));
// unreffing REF($361:org.pandalanguage.pandac.ASTNode)
goto block38;
block45:;
// line 1
// line 273
org$pandalanguage$pandac$ASTNode* $tmp796 = *(&local10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
org$pandalanguage$pandac$ASTNode* $tmp797 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp797));
*(&local16) = $tmp796;
goto block38;
block38:;
// line 275
org$pandalanguage$pandac$FieldDecl* $tmp798 = (org$pandalanguage$pandac$FieldDecl*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$Position $tmp799 = *(&local8);
panda$core$String* $tmp800 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp801 = *(&local3);
org$pandalanguage$pandac$FieldDecl$Kind $tmp802 = *(&local4);
panda$core$String* $tmp803 = *(&local11);
org$pandalanguage$pandac$Type* $tmp804 = *(&local12);
org$pandalanguage$pandac$ASTNode* $tmp805 = *(&local16);
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp798, param1, $tmp799, $tmp800, $tmp801, $tmp802, $tmp803, $tmp804, $tmp805);
*(&local19) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp798));
org$pandalanguage$pandac$FieldDecl* $tmp806 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp806));
*(&local19) = $tmp798;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp798));
// unreffing REF($387:org.pandalanguage.pandac.FieldDecl)
// line 277
org$pandalanguage$pandac$SymbolTable** $tmp807 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp808 = *$tmp807;
org$pandalanguage$pandac$FieldDecl* $tmp809 = *(&local19);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp808, ((org$pandalanguage$pandac$Symbol*) $tmp809));
// line 278
panda$collections$Array** $tmp810 = &param1->fields;
panda$collections$Array* $tmp811 = *$tmp810;
org$pandalanguage$pandac$FieldDecl* $tmp812 = *(&local19);
panda$collections$Array$add$panda$collections$Array$T($tmp811, ((panda$core$Object*) $tmp812));
org$pandalanguage$pandac$FieldDecl* $tmp813 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp813));
// unreffing field
*(&local19) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp814 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
// unreffing value
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Type* $tmp815 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp815));
// unreffing type
*(&local12) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp816 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp816));
// unreffing name
*(&local11) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp817 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp817));
// unreffing rawValue
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp818 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp818));
// unreffing target
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block25;
block27:;
// line 281
panda$core$Bit $tmp819 = panda$core$Bit$init$builtin_bit(false);
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block46; else goto block47;
block47:;
panda$core$Int64 $tmp821 = (panda$core$Int64) {281};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s822, $tmp821);
abort(); // unreachable
block46:;
goto block25;
block25:;
panda$core$Panda$unref$panda$core$Object$Q($tmp713);
// unreffing REF($164:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp823 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
// unreffing decl
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block22;
block24:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
// unreffing REF($153:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$FixedArray* $tmp824 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
// unreffing decls
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block11;
block13:;
// line 287
panda$core$Bit $tmp825 = panda$core$Bit$init$builtin_bit(false);
bool $tmp826 = $tmp825.value;
if ($tmp826) goto block48; else goto block49;
block49:;
panda$core$Int64 $tmp827 = (panda$core$Int64) {287};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s828, $tmp827);
abort(); // unreachable
block48:;
goto block11;
block11:;
org$pandalanguage$pandac$Annotations* $tmp829 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp829));
// unreffing annotations
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp830 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp830));
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
panda$core$Int64* $tmp831 = &param1->$rawValue;
panda$core$Int64 $tmp832 = *$tmp831;
panda$core$Int64 $tmp833 = (panda$core$Int64) {1};
panda$core$Bit $tmp834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp833);
bool $tmp835 = $tmp834.value;
if ($tmp835) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp836 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp837 = *$tmp836;
org$pandalanguage$pandac$FixedArray** $tmp838 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp839 = *$tmp838;
*(&local0) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
org$pandalanguage$pandac$FixedArray* $tmp840 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp840));
*(&local0) = $tmp839;
// line 296
panda$core$Int64 $tmp841 = (panda$core$Int64) {0};
*(&local1) = $tmp841;
// line 297
org$pandalanguage$pandac$FixedArray* $tmp842 = *(&local0);
ITable* $tmp843 = ((panda$collections$Iterable*) $tmp842)->$class->itable;
while ($tmp843->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp843 = $tmp843->next;
}
$fn845 $tmp844 = $tmp843->methods[0];
panda$collections$Iterator* $tmp846 = $tmp844(((panda$collections$Iterable*) $tmp842));
goto block4;
block4:;
ITable* $tmp847 = $tmp846->$class->itable;
while ($tmp847->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp847 = $tmp847->next;
}
$fn849 $tmp848 = $tmp847->methods[0];
panda$core$Bit $tmp850 = $tmp848($tmp846);
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block6; else goto block5;
block5:;
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp852 = $tmp846->$class->itable;
while ($tmp852->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp852 = $tmp852->next;
}
$fn854 $tmp853 = $tmp852->methods[1];
panda$core$Object* $tmp855 = $tmp853($tmp846);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp855)));
org$pandalanguage$pandac$ASTNode* $tmp856 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) $tmp855);
// line 298
panda$core$Int64 $tmp857 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp858 = *(&local2);
panda$core$Int64 $tmp859 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp858);
int64_t $tmp860 = $tmp857.value;
int64_t $tmp861 = $tmp859.value;
int64_t $tmp862 = $tmp860 + $tmp861;
panda$core$Int64 $tmp863 = (panda$core$Int64) {$tmp862};
*(&local1) = $tmp863;
panda$core$Panda$unref$panda$core$Object$Q($tmp855);
// unreffing REF($37:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp864 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
// unreffing e
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp846));
// unreffing REF($26:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 300
panda$core$Int64 $tmp865 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp866 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp866));
// unreffing elements
*(&local0) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp865;
block3:;
panda$core$Int64 $tmp867 = (panda$core$Int64) {2};
panda$core$Bit $tmp868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp867);
bool $tmp869 = $tmp868.value;
if ($tmp869) goto block7; else goto block8;
block7:;
org$pandalanguage$pandac$Position* $tmp870 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp871 = *$tmp870;
org$pandalanguage$pandac$ASTNode** $tmp872 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp873 = *$tmp872;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp873));
org$pandalanguage$pandac$ASTNode* $tmp874 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp874));
*(&local3) = $tmp873;
org$pandalanguage$pandac$ASTNode** $tmp875 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp876 = *$tmp875;
// line 303
org$pandalanguage$pandac$ASTNode* $tmp877 = *(&local3);
panda$core$Int64 $tmp878 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp877);
org$pandalanguage$pandac$ASTNode* $tmp879 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp879));
// unreffing test
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp878;
block8:;
panda$core$Int64 $tmp880 = (panda$core$Int64) {3};
panda$core$Bit $tmp881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp880);
bool $tmp882 = $tmp881.value;
if ($tmp882) goto block9; else goto block10;
block9:;
// line 306
panda$core$Int64 $tmp883 = (panda$core$Int64) {0};
return $tmp883;
block10:;
panda$core$Int64 $tmp884 = (panda$core$Int64) {4};
panda$core$Bit $tmp885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp884);
bool $tmp886 = $tmp885.value;
if ($tmp886) goto block11; else goto block12;
block11:;
// line 309
panda$core$Int64 $tmp887 = (panda$core$Int64) {0};
return $tmp887;
block12:;
panda$core$Int64 $tmp888 = (panda$core$Int64) {5};
panda$core$Bit $tmp889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp888);
bool $tmp890 = $tmp889.value;
if ($tmp890) goto block13; else goto block14;
block13:;
org$pandalanguage$pandac$Position* $tmp891 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp892 = *$tmp891;
org$pandalanguage$pandac$ASTNode** $tmp893 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp894 = *$tmp893;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp894));
org$pandalanguage$pandac$ASTNode* $tmp895 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp895));
*(&local4) = $tmp894;
org$pandalanguage$pandac$parser$Token$Kind* $tmp896 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp897 = *$tmp896;
org$pandalanguage$pandac$ASTNode** $tmp898 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp899 = *$tmp898;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp899));
org$pandalanguage$pandac$ASTNode* $tmp900 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp900));
*(&local5) = $tmp899;
// line 312
panda$core$Int64 $tmp901 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode* $tmp902 = *(&local4);
panda$core$Int64 $tmp903 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp902);
int64_t $tmp904 = $tmp901.value;
int64_t $tmp905 = $tmp903.value;
int64_t $tmp906 = $tmp904 + $tmp905;
panda$core$Int64 $tmp907 = (panda$core$Int64) {$tmp906};
org$pandalanguage$pandac$ASTNode* $tmp908 = *(&local5);
panda$core$Int64 $tmp909 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp908);
int64_t $tmp910 = $tmp907.value;
int64_t $tmp911 = $tmp909.value;
int64_t $tmp912 = $tmp910 + $tmp911;
panda$core$Int64 $tmp913 = (panda$core$Int64) {$tmp912};
org$pandalanguage$pandac$ASTNode* $tmp914 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp914));
// unreffing right
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp915 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp915));
// unreffing left
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp913;
block14:;
panda$core$Int64 $tmp916 = (panda$core$Int64) {6};
panda$core$Bit $tmp917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp916);
bool $tmp918 = $tmp917.value;
if ($tmp918) goto block15; else goto block16;
block15:;
// line 315
panda$core$Int64 $tmp919 = (panda$core$Int64) {1};
return $tmp919;
block16:;
panda$core$Int64 $tmp920 = (panda$core$Int64) {7};
panda$core$Bit $tmp921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp920);
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block17; else goto block18;
block17:;
org$pandalanguage$pandac$Position* $tmp923 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp924 = *$tmp923;
org$pandalanguage$pandac$FixedArray** $tmp925 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp926 = *$tmp925;
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
org$pandalanguage$pandac$FixedArray* $tmp927 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp927));
*(&local6) = $tmp926;
// line 318
panda$core$Int64 $tmp928 = (panda$core$Int64) {0};
*(&local7) = $tmp928;
// line 319
org$pandalanguage$pandac$FixedArray* $tmp929 = *(&local6);
ITable* $tmp930 = ((panda$collections$Iterable*) $tmp929)->$class->itable;
while ($tmp930->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp930 = $tmp930->next;
}
$fn932 $tmp931 = $tmp930->methods[0];
panda$collections$Iterator* $tmp933 = $tmp931(((panda$collections$Iterable*) $tmp929));
goto block19;
block19:;
ITable* $tmp934 = $tmp933->$class->itable;
while ($tmp934->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp934 = $tmp934->next;
}
$fn936 $tmp935 = $tmp934->methods[0];
panda$core$Bit $tmp937 = $tmp935($tmp933);
bool $tmp938 = $tmp937.value;
if ($tmp938) goto block21; else goto block20;
block20:;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp939 = $tmp933->$class->itable;
while ($tmp939->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp939 = $tmp939->next;
}
$fn941 $tmp940 = $tmp939->methods[1];
panda$core$Object* $tmp942 = $tmp940($tmp933);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp942)));
org$pandalanguage$pandac$ASTNode* $tmp943 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) $tmp942);
// line 320
panda$core$Int64 $tmp944 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp945 = *(&local8);
panda$core$Int64 $tmp946 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp945);
int64_t $tmp947 = $tmp944.value;
int64_t $tmp948 = $tmp946.value;
int64_t $tmp949 = $tmp947 + $tmp948;
panda$core$Int64 $tmp950 = (panda$core$Int64) {$tmp949};
*(&local7) = $tmp950;
panda$core$Panda$unref$panda$core$Object$Q($tmp942);
// unreffing REF($206:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp951 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp951));
// unreffing s
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block19;
block21:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
// unreffing REF($195:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 322
panda$core$Int64 $tmp952 = *(&local7);
org$pandalanguage$pandac$FixedArray* $tmp953 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp953));
// unreffing statements
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp952;
block18:;
panda$core$Int64 $tmp954 = (panda$core$Int64) {8};
panda$core$Bit $tmp955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp954);
bool $tmp956 = $tmp955.value;
if ($tmp956) goto block22; else goto block23;
block22:;
// line 325
panda$core$Int64 $tmp957 = (panda$core$Int64) {1};
return $tmp957;
block23:;
panda$core$Int64 $tmp958 = (panda$core$Int64) {9};
panda$core$Bit $tmp959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp958);
bool $tmp960 = $tmp959.value;
if ($tmp960) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp961 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp962 = *$tmp961;
org$pandalanguage$pandac$ASTNode** $tmp963 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp964 = *$tmp963;
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp964));
org$pandalanguage$pandac$ASTNode* $tmp965 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp965));
*(&local9) = $tmp964;
org$pandalanguage$pandac$FixedArray** $tmp966 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp967 = *$tmp966;
*(&local10) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp967));
org$pandalanguage$pandac$FixedArray* $tmp968 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp968));
*(&local10) = $tmp967;
// line 328
org$pandalanguage$pandac$ASTNode* $tmp969 = *(&local9);
panda$core$Int64 $tmp970 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp969);
*(&local11) = $tmp970;
// line 329
org$pandalanguage$pandac$FixedArray* $tmp971 = *(&local10);
ITable* $tmp972 = ((panda$collections$Iterable*) $tmp971)->$class->itable;
while ($tmp972->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp972 = $tmp972->next;
}
$fn974 $tmp973 = $tmp972->methods[0];
panda$collections$Iterator* $tmp975 = $tmp973(((panda$collections$Iterable*) $tmp971));
goto block26;
block26:;
ITable* $tmp976 = $tmp975->$class->itable;
while ($tmp976->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp976 = $tmp976->next;
}
$fn978 $tmp977 = $tmp976->methods[0];
panda$core$Bit $tmp979 = $tmp977($tmp975);
bool $tmp980 = $tmp979.value;
if ($tmp980) goto block28; else goto block27;
block27:;
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp981 = $tmp975->$class->itable;
while ($tmp981->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp981 = $tmp981->next;
}
$fn983 $tmp982 = $tmp981->methods[1];
panda$core$Object* $tmp984 = $tmp982($tmp975);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp984)));
org$pandalanguage$pandac$ASTNode* $tmp985 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) $tmp984);
// line 330
panda$core$Int64 $tmp986 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp987 = *(&local12);
panda$core$Int64 $tmp988 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp987);
int64_t $tmp989 = $tmp986.value;
int64_t $tmp990 = $tmp988.value;
int64_t $tmp991 = $tmp989 + $tmp990;
panda$core$Int64 $tmp992 = (panda$core$Int64) {$tmp991};
*(&local11) = $tmp992;
panda$core$Panda$unref$panda$core$Object$Q($tmp984);
// unreffing REF($294:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp993 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
// unreffing a
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block26;
block28:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp975));
// unreffing REF($283:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 332
panda$core$Int64 $tmp994 = *(&local11);
org$pandalanguage$pandac$FixedArray* $tmp995 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
// unreffing args
*(&local10) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp996 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp996));
// unreffing target
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp994;
block25:;
panda$core$Int64 $tmp997 = (panda$core$Int64) {11};
panda$core$Bit $tmp998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp997);
bool $tmp999 = $tmp998.value;
if ($tmp999) goto block29; else goto block30;
block29:;
org$pandalanguage$pandac$Position* $tmp1000 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1001 = *$tmp1000;
org$pandalanguage$pandac$ASTNode** $tmp1002 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1003 = *$tmp1002;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1003));
org$pandalanguage$pandac$ASTNode* $tmp1004 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1004));
*(&local13) = $tmp1003;
org$pandalanguage$pandac$ChoiceCase** $tmp1005 = (org$pandalanguage$pandac$ChoiceCase**) (param1->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp1006 = *$tmp1005;
panda$core$Int64* $tmp1007 = (panda$core$Int64*) (param1->$data + 32);
panda$core$Int64 $tmp1008 = *$tmp1007;
// line 335
org$pandalanguage$pandac$ASTNode* $tmp1009 = *(&local13);
panda$core$Int64 $tmp1010 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1009);
org$pandalanguage$pandac$ASTNode* $tmp1011 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1011));
// unreffing base
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1010;
block30:;
panda$core$Int64 $tmp1012 = (panda$core$Int64) {13};
panda$core$Bit $tmp1013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1012);
bool $tmp1014 = $tmp1013.value;
if ($tmp1014) goto block31; else goto block32;
block31:;
// line 338
panda$core$Int64 $tmp1015 = (panda$core$Int64) {1};
return $tmp1015;
block32:;
panda$core$Int64 $tmp1016 = (panda$core$Int64) {14};
panda$core$Bit $tmp1017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1016);
bool $tmp1018 = $tmp1017.value;
if ($tmp1018) goto block33; else goto block34;
block33:;
org$pandalanguage$pandac$Position* $tmp1019 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1020 = *$tmp1019;
org$pandalanguage$pandac$ASTNode** $tmp1021 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1022 = *$tmp1021;
org$pandalanguage$pandac$ASTNode** $tmp1023 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1024 = *$tmp1023;
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1024));
org$pandalanguage$pandac$ASTNode* $tmp1025 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1025));
*(&local14) = $tmp1024;
// line 341
org$pandalanguage$pandac$ASTNode* $tmp1026 = *(&local14);
panda$core$Bit $tmp1027 = panda$core$Bit$init$builtin_bit($tmp1026 == NULL);
bool $tmp1028 = $tmp1027.value;
if ($tmp1028) goto block35; else goto block36;
block35:;
// line 342
panda$core$Int64 $tmp1029 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ASTNode* $tmp1030 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1030));
// unreffing value
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1029;
block36:;
// line 344
org$pandalanguage$pandac$ASTNode* $tmp1031 = *(&local14);
panda$core$Bit $tmp1032 = panda$core$Bit$init$builtin_bit($tmp1031 != NULL);
bool $tmp1033 = $tmp1032.value;
if ($tmp1033) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp1034 = (panda$core$Int64) {344};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1035, $tmp1034, &$s1036);
abort(); // unreachable
block37:;
panda$core$Int64 $tmp1037 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1031);
org$pandalanguage$pandac$ASTNode* $tmp1038 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1038));
// unreffing value
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1037;
block34:;
panda$core$Int64 $tmp1039 = (panda$core$Int64) {15};
panda$core$Bit $tmp1040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1039);
bool $tmp1041 = $tmp1040.value;
if ($tmp1041) goto block39; else goto block40;
block39:;
org$pandalanguage$pandac$Position* $tmp1042 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1043 = *$tmp1042;
panda$core$String** $tmp1044 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp1045 = *$tmp1044;
org$pandalanguage$pandac$FixedArray** $tmp1046 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1047 = *$tmp1046;
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1047));
org$pandalanguage$pandac$FixedArray* $tmp1048 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
*(&local15) = $tmp1047;
org$pandalanguage$pandac$ASTNode** $tmp1049 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1050 = *$tmp1049;
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
org$pandalanguage$pandac$ASTNode* $tmp1051 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
*(&local16) = $tmp1050;
// line 347
org$pandalanguage$pandac$ASTNode* $tmp1052 = *(&local16);
panda$core$Int64 $tmp1053 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1052);
*(&local17) = $tmp1053;
// line 348
org$pandalanguage$pandac$FixedArray* $tmp1054 = *(&local15);
ITable* $tmp1055 = ((panda$collections$Iterable*) $tmp1054)->$class->itable;
while ($tmp1055->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1055 = $tmp1055->next;
}
$fn1057 $tmp1056 = $tmp1055->methods[0];
panda$collections$Iterator* $tmp1058 = $tmp1056(((panda$collections$Iterable*) $tmp1054));
goto block41;
block41:;
ITable* $tmp1059 = $tmp1058->$class->itable;
while ($tmp1059->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1059 = $tmp1059->next;
}
$fn1061 $tmp1060 = $tmp1059->methods[0];
panda$core$Bit $tmp1062 = $tmp1060($tmp1058);
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block43; else goto block42;
block42:;
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1064 = $tmp1058->$class->itable;
while ($tmp1064->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1064 = $tmp1064->next;
}
$fn1066 $tmp1065 = $tmp1064->methods[1];
panda$core$Object* $tmp1067 = $tmp1065($tmp1058);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1067)));
org$pandalanguage$pandac$ASTNode* $tmp1068 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1068));
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) $tmp1067);
// line 349
panda$core$Int64 $tmp1069 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp1070 = *(&local18);
panda$core$Int64 $tmp1071 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1070);
int64_t $tmp1072 = $tmp1069.value;
int64_t $tmp1073 = $tmp1071.value;
int64_t $tmp1074 = $tmp1072 + $tmp1073;
panda$core$Int64 $tmp1075 = (panda$core$Int64) {$tmp1074};
*(&local17) = $tmp1075;
panda$core$Panda$unref$panda$core$Object$Q($tmp1067);
// unreffing REF($465:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1076 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1076));
// unreffing s
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block41;
block43:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1058));
// unreffing REF($454:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 351
panda$core$Int64 $tmp1077 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp1078 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1078));
// unreffing test
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1079 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1079));
// unreffing statements
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1077;
block40:;
panda$core$Int64 $tmp1080 = (panda$core$Int64) {16};
panda$core$Bit $tmp1081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1080);
bool $tmp1082 = $tmp1081.value;
if ($tmp1082) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp1083 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1084 = *$tmp1083;
org$pandalanguage$pandac$ASTNode** $tmp1085 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1086 = *$tmp1085;
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1086));
org$pandalanguage$pandac$ASTNode* $tmp1087 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1087));
*(&local19) = $tmp1086;
panda$core$String** $tmp1088 = (panda$core$String**) (param1->$data + 24);
panda$core$String* $tmp1089 = *$tmp1088;
// line 354
org$pandalanguage$pandac$ASTNode* $tmp1090 = *(&local19);
panda$core$Int64 $tmp1091 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1090);
org$pandalanguage$pandac$ASTNode* $tmp1092 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1092));
// unreffing base
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1091;
block45:;
panda$core$Int64 $tmp1093 = (panda$core$Int64) {17};
panda$core$Bit $tmp1094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1093);
bool $tmp1095 = $tmp1094.value;
if ($tmp1095) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp1096 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1097 = *$tmp1096;
org$pandalanguage$pandac$ASTNode** $tmp1098 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1099 = *$tmp1098;
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1099));
org$pandalanguage$pandac$ASTNode* $tmp1100 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
*(&local20) = $tmp1099;
panda$core$String** $tmp1101 = (panda$core$String**) (param1->$data + 24);
panda$core$String* $tmp1102 = *$tmp1101;
org$pandalanguage$pandac$FixedArray** $tmp1103 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp1104 = *$tmp1103;
// line 357
org$pandalanguage$pandac$ASTNode* $tmp1105 = *(&local20);
panda$core$Int64 $tmp1106 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1105);
org$pandalanguage$pandac$ASTNode* $tmp1107 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1107));
// unreffing base
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1106;
block47:;
panda$core$Int64 $tmp1108 = (panda$core$Int64) {20};
panda$core$Bit $tmp1109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1108);
bool $tmp1110 = $tmp1109.value;
if ($tmp1110) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp1111 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1112 = *$tmp1111;
panda$core$String** $tmp1113 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp1114 = *$tmp1113;
org$pandalanguage$pandac$ASTNode** $tmp1115 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1116 = *$tmp1115;
org$pandalanguage$pandac$ASTNode** $tmp1117 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1118 = *$tmp1117;
*(&local21) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1118));
org$pandalanguage$pandac$ASTNode* $tmp1119 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
*(&local21) = $tmp1118;
org$pandalanguage$pandac$FixedArray** $tmp1120 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 40);
org$pandalanguage$pandac$FixedArray* $tmp1121 = *$tmp1120;
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1121));
org$pandalanguage$pandac$FixedArray* $tmp1122 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1122));
*(&local22) = $tmp1121;
// line 360
org$pandalanguage$pandac$ASTNode* $tmp1123 = *(&local21);
panda$core$Int64 $tmp1124 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1123);
*(&local23) = $tmp1124;
// line 361
org$pandalanguage$pandac$FixedArray* $tmp1125 = *(&local22);
ITable* $tmp1126 = ((panda$collections$Iterable*) $tmp1125)->$class->itable;
while ($tmp1126->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1126 = $tmp1126->next;
}
$fn1128 $tmp1127 = $tmp1126->methods[0];
panda$collections$Iterator* $tmp1129 = $tmp1127(((panda$collections$Iterable*) $tmp1125));
goto block50;
block50:;
ITable* $tmp1130 = $tmp1129->$class->itable;
while ($tmp1130->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1130 = $tmp1130->next;
}
$fn1132 $tmp1131 = $tmp1130->methods[0];
panda$core$Bit $tmp1133 = $tmp1131($tmp1129);
bool $tmp1134 = $tmp1133.value;
if ($tmp1134) goto block52; else goto block51;
block51:;
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1135 = $tmp1129->$class->itable;
while ($tmp1135->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1135 = $tmp1135->next;
}
$fn1137 $tmp1136 = $tmp1135->methods[1];
panda$core$Object* $tmp1138 = $tmp1136($tmp1129);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1138)));
org$pandalanguage$pandac$ASTNode* $tmp1139 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1139));
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) $tmp1138);
// line 362
panda$core$Int64 $tmp1140 = *(&local23);
org$pandalanguage$pandac$ASTNode* $tmp1141 = *(&local24);
panda$core$Int64 $tmp1142 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1141);
int64_t $tmp1143 = $tmp1140.value;
int64_t $tmp1144 = $tmp1142.value;
int64_t $tmp1145 = $tmp1143 + $tmp1144;
panda$core$Int64 $tmp1146 = (panda$core$Int64) {$tmp1145};
*(&local23) = $tmp1146;
panda$core$Panda$unref$panda$core$Object$Q($tmp1138);
// unreffing REF($609:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1147 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1147));
// unreffing s
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block50;
block52:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1129));
// unreffing REF($598:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 364
panda$core$Int64 $tmp1148 = *(&local23);
org$pandalanguage$pandac$FixedArray* $tmp1149 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
// unreffing statements
*(&local22) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1150 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1150));
// unreffing list
*(&local21) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1148;
block49:;
panda$core$Int64 $tmp1151 = (panda$core$Int64) {21};
panda$core$Bit $tmp1152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1151);
bool $tmp1153 = $tmp1152.value;
if ($tmp1153) goto block53; else goto block54;
block53:;
// line 367
panda$core$Int64 $tmp1154 = (panda$core$Int64) {0};
return $tmp1154;
block54:;
panda$core$Int64 $tmp1155 = (panda$core$Int64) {22};
panda$core$Bit $tmp1156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1155);
bool $tmp1157 = $tmp1156.value;
if ($tmp1157) goto block55; else goto block56;
block55:;
// line 370
panda$core$Int64 $tmp1158 = (panda$core$Int64) {1};
return $tmp1158;
block56:;
panda$core$Int64 $tmp1159 = (panda$core$Int64) {24};
panda$core$Bit $tmp1160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1159);
bool $tmp1161 = $tmp1160.value;
if ($tmp1161) goto block57; else goto block58;
block57:;
org$pandalanguage$pandac$Position* $tmp1162 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1163 = *$tmp1162;
org$pandalanguage$pandac$ASTNode** $tmp1164 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1165 = *$tmp1164;
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1165));
org$pandalanguage$pandac$ASTNode* $tmp1166 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
*(&local25) = $tmp1165;
org$pandalanguage$pandac$FixedArray** $tmp1167 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1168 = *$tmp1167;
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1168));
org$pandalanguage$pandac$FixedArray* $tmp1169 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
*(&local26) = $tmp1168;
org$pandalanguage$pandac$ASTNode** $tmp1170 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1171 = *$tmp1170;
*(&local27) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1171));
org$pandalanguage$pandac$ASTNode* $tmp1172 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1172));
*(&local27) = $tmp1171;
// line 373
org$pandalanguage$pandac$ASTNode* $tmp1173 = *(&local25);
panda$core$Int64 $tmp1174 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1173);
*(&local28) = $tmp1174;
// line 374
org$pandalanguage$pandac$FixedArray* $tmp1175 = *(&local26);
ITable* $tmp1176 = ((panda$collections$Iterable*) $tmp1175)->$class->itable;
while ($tmp1176->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1176 = $tmp1176->next;
}
$fn1178 $tmp1177 = $tmp1176->methods[0];
panda$collections$Iterator* $tmp1179 = $tmp1177(((panda$collections$Iterable*) $tmp1175));
goto block59;
block59:;
ITable* $tmp1180 = $tmp1179->$class->itable;
while ($tmp1180->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1180 = $tmp1180->next;
}
$fn1182 $tmp1181 = $tmp1180->methods[0];
panda$core$Bit $tmp1183 = $tmp1181($tmp1179);
bool $tmp1184 = $tmp1183.value;
if ($tmp1184) goto block61; else goto block60;
block60:;
*(&local29) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1185 = $tmp1179->$class->itable;
while ($tmp1185->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1185 = $tmp1185->next;
}
$fn1187 $tmp1186 = $tmp1185->methods[1];
panda$core$Object* $tmp1188 = $tmp1186($tmp1179);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1188)));
org$pandalanguage$pandac$ASTNode* $tmp1189 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1189));
*(&local29) = ((org$pandalanguage$pandac$ASTNode*) $tmp1188);
// line 375
panda$core$Int64 $tmp1190 = *(&local28);
org$pandalanguage$pandac$ASTNode* $tmp1191 = *(&local29);
panda$core$Int64 $tmp1192 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1191);
int64_t $tmp1193 = $tmp1190.value;
int64_t $tmp1194 = $tmp1192.value;
int64_t $tmp1195 = $tmp1193 + $tmp1194;
panda$core$Int64 $tmp1196 = (panda$core$Int64) {$tmp1195};
*(&local28) = $tmp1196;
panda$core$Panda$unref$panda$core$Object$Q($tmp1188);
// unreffing REF($718:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1197 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
// unreffing s
*(&local29) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block59;
block61:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1179));
// unreffing REF($707:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 377
org$pandalanguage$pandac$ASTNode* $tmp1198 = *(&local27);
panda$core$Bit $tmp1199 = panda$core$Bit$init$builtin_bit($tmp1198 != NULL);
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block62; else goto block63;
block62:;
// line 378
panda$core$Int64 $tmp1201 = *(&local28);
org$pandalanguage$pandac$ASTNode* $tmp1202 = *(&local27);
panda$core$Bit $tmp1203 = panda$core$Bit$init$builtin_bit($tmp1202 != NULL);
bool $tmp1204 = $tmp1203.value;
if ($tmp1204) goto block64; else goto block65;
block65:;
panda$core$Int64 $tmp1205 = (panda$core$Int64) {378};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1206, $tmp1205, &$s1207);
abort(); // unreachable
block64:;
panda$core$Int64 $tmp1208 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1202);
int64_t $tmp1209 = $tmp1201.value;
int64_t $tmp1210 = $tmp1208.value;
int64_t $tmp1211 = $tmp1209 + $tmp1210;
panda$core$Int64 $tmp1212 = (panda$core$Int64) {$tmp1211};
*(&local28) = $tmp1212;
goto block63;
block63:;
// line 380
panda$core$Int64 $tmp1213 = *(&local28);
org$pandalanguage$pandac$ASTNode* $tmp1214 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1214));
// unreffing ifFalse
*(&local27) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1215 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1215));
// unreffing ifTrue
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1216 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1216));
// unreffing test
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1213;
block58:;
panda$core$Int64 $tmp1217 = (panda$core$Int64) {25};
panda$core$Bit $tmp1218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1217);
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block66; else goto block67;
block66:;
// line 383
panda$core$Int64 $tmp1220 = (panda$core$Int64) {1};
return $tmp1220;
block67:;
panda$core$Int64 $tmp1221 = (panda$core$Int64) {27};
panda$core$Bit $tmp1222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1221);
bool $tmp1223 = $tmp1222.value;
if ($tmp1223) goto block68; else goto block69;
block68:;
org$pandalanguage$pandac$Position* $tmp1224 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1225 = *$tmp1224;
panda$core$String** $tmp1226 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp1227 = *$tmp1226;
org$pandalanguage$pandac$FixedArray** $tmp1228 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1229 = *$tmp1228;
*(&local30) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1229));
org$pandalanguage$pandac$FixedArray* $tmp1230 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
*(&local30) = $tmp1229;
// line 386
panda$core$Int64 $tmp1231 = (panda$core$Int64) {0};
*(&local31) = $tmp1231;
// line 387
org$pandalanguage$pandac$FixedArray* $tmp1232 = *(&local30);
ITable* $tmp1233 = ((panda$collections$Iterable*) $tmp1232)->$class->itable;
while ($tmp1233->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1233 = $tmp1233->next;
}
$fn1235 $tmp1234 = $tmp1233->methods[0];
panda$collections$Iterator* $tmp1236 = $tmp1234(((panda$collections$Iterable*) $tmp1232));
goto block70;
block70:;
ITable* $tmp1237 = $tmp1236->$class->itable;
while ($tmp1237->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1237 = $tmp1237->next;
}
$fn1239 $tmp1238 = $tmp1237->methods[0];
panda$core$Bit $tmp1240 = $tmp1238($tmp1236);
bool $tmp1241 = $tmp1240.value;
if ($tmp1241) goto block72; else goto block71;
block71:;
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1242 = $tmp1236->$class->itable;
while ($tmp1242->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1242 = $tmp1242->next;
}
$fn1244 $tmp1243 = $tmp1242->methods[1];
panda$core$Object* $tmp1245 = $tmp1243($tmp1236);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1245)));
org$pandalanguage$pandac$ASTNode* $tmp1246 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1246));
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) $tmp1245);
// line 388
panda$core$Int64 $tmp1247 = *(&local31);
org$pandalanguage$pandac$ASTNode* $tmp1248 = *(&local32);
panda$core$Int64 $tmp1249 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1248);
int64_t $tmp1250 = $tmp1247.value;
int64_t $tmp1251 = $tmp1249.value;
int64_t $tmp1252 = $tmp1250 + $tmp1251;
panda$core$Int64 $tmp1253 = (panda$core$Int64) {$tmp1252};
*(&local31) = $tmp1253;
panda$core$Panda$unref$panda$core$Object$Q($tmp1245);
// unreffing REF($832:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1254 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1254));
// unreffing s
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block70;
block72:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1236));
// unreffing REF($821:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 390
panda$core$Int64 $tmp1255 = *(&local31);
org$pandalanguage$pandac$FixedArray* $tmp1256 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1256));
// unreffing statements
*(&local30) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1255;
block69:;
panda$core$Int64 $tmp1257 = (panda$core$Int64) {28};
panda$core$Bit $tmp1258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1257);
bool $tmp1259 = $tmp1258.value;
if ($tmp1259) goto block73; else goto block74;
block73:;
org$pandalanguage$pandac$Position* $tmp1260 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1261 = *$tmp1260;
org$pandalanguage$pandac$ASTNode** $tmp1262 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1263 = *$tmp1262;
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
org$pandalanguage$pandac$ASTNode* $tmp1264 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1264));
*(&local33) = $tmp1263;
org$pandalanguage$pandac$FixedArray** $tmp1265 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1266 = *$tmp1265;
*(&local34) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
org$pandalanguage$pandac$FixedArray* $tmp1267 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1267));
*(&local34) = $tmp1266;
org$pandalanguage$pandac$FixedArray** $tmp1268 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp1269 = *$tmp1268;
*(&local35) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1269));
org$pandalanguage$pandac$FixedArray* $tmp1270 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1270));
*(&local35) = $tmp1269;
// line 393
org$pandalanguage$pandac$ASTNode* $tmp1271 = *(&local33);
panda$core$Int64 $tmp1272 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1271);
*(&local36) = $tmp1272;
// line 394
org$pandalanguage$pandac$FixedArray* $tmp1273 = *(&local34);
ITable* $tmp1274 = ((panda$collections$Iterable*) $tmp1273)->$class->itable;
while ($tmp1274->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1274 = $tmp1274->next;
}
$fn1276 $tmp1275 = $tmp1274->methods[0];
panda$collections$Iterator* $tmp1277 = $tmp1275(((panda$collections$Iterable*) $tmp1273));
goto block75;
block75:;
ITable* $tmp1278 = $tmp1277->$class->itable;
while ($tmp1278->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1278 = $tmp1278->next;
}
$fn1280 $tmp1279 = $tmp1278->methods[0];
panda$core$Bit $tmp1281 = $tmp1279($tmp1277);
bool $tmp1282 = $tmp1281.value;
if ($tmp1282) goto block77; else goto block76;
block76:;
*(&local37) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1283 = $tmp1277->$class->itable;
while ($tmp1283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1283 = $tmp1283->next;
}
$fn1285 $tmp1284 = $tmp1283->methods[1];
panda$core$Object* $tmp1286 = $tmp1284($tmp1277);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1286)));
org$pandalanguage$pandac$ASTNode* $tmp1287 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1287));
*(&local37) = ((org$pandalanguage$pandac$ASTNode*) $tmp1286);
// line 395
panda$core$Int64 $tmp1288 = *(&local36);
org$pandalanguage$pandac$ASTNode* $tmp1289 = *(&local37);
panda$core$Int64 $tmp1290 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1289);
int64_t $tmp1291 = $tmp1288.value;
int64_t $tmp1292 = $tmp1290.value;
int64_t $tmp1293 = $tmp1291 + $tmp1292;
panda$core$Int64 $tmp1294 = (panda$core$Int64) {$tmp1293};
*(&local36) = $tmp1294;
panda$core$Panda$unref$panda$core$Object$Q($tmp1286);
// unreffing REF($922:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1295 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1295));
// unreffing w
*(&local37) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block75;
block77:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1277));
// unreffing REF($911:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 397
org$pandalanguage$pandac$FixedArray* $tmp1296 = *(&local35);
panda$core$Bit $tmp1297 = panda$core$Bit$init$builtin_bit($tmp1296 != NULL);
bool $tmp1298 = $tmp1297.value;
if ($tmp1298) goto block78; else goto block79;
block78:;
// line 398
org$pandalanguage$pandac$FixedArray* $tmp1299 = *(&local35);
panda$core$Bit $tmp1300 = panda$core$Bit$init$builtin_bit($tmp1299 != NULL);
bool $tmp1301 = $tmp1300.value;
if ($tmp1301) goto block80; else goto block81;
block81:;
panda$core$Int64 $tmp1302 = (panda$core$Int64) {398};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1303, $tmp1302, &$s1304);
abort(); // unreachable
block80:;
ITable* $tmp1305 = ((panda$collections$Iterable*) $tmp1299)->$class->itable;
while ($tmp1305->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1305 = $tmp1305->next;
}
$fn1307 $tmp1306 = $tmp1305->methods[0];
panda$collections$Iterator* $tmp1308 = $tmp1306(((panda$collections$Iterable*) $tmp1299));
goto block82;
block82:;
ITable* $tmp1309 = $tmp1308->$class->itable;
while ($tmp1309->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1309 = $tmp1309->next;
}
$fn1311 $tmp1310 = $tmp1309->methods[0];
panda$core$Bit $tmp1312 = $tmp1310($tmp1308);
bool $tmp1313 = $tmp1312.value;
if ($tmp1313) goto block84; else goto block83;
block83:;
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1314 = $tmp1308->$class->itable;
while ($tmp1314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1314 = $tmp1314->next;
}
$fn1316 $tmp1315 = $tmp1314->methods[1];
panda$core$Object* $tmp1317 = $tmp1315($tmp1308);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1317)));
org$pandalanguage$pandac$ASTNode* $tmp1318 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1318));
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) $tmp1317);
// line 399
panda$core$Int64 $tmp1319 = *(&local36);
org$pandalanguage$pandac$ASTNode* $tmp1320 = *(&local38);
panda$core$Int64 $tmp1321 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1320);
int64_t $tmp1322 = $tmp1319.value;
int64_t $tmp1323 = $tmp1321.value;
int64_t $tmp1324 = $tmp1322 + $tmp1323;
panda$core$Int64 $tmp1325 = (panda$core$Int64) {$tmp1324};
*(&local36) = $tmp1325;
panda$core$Panda$unref$panda$core$Object$Q($tmp1317);
// unreffing REF($980:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1326 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1326));
// unreffing s
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block82;
block84:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1308));
// unreffing REF($969:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block79;
block79:;
// line 402
panda$core$Int64 $tmp1327 = *(&local36);
org$pandalanguage$pandac$FixedArray* $tmp1328 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
// unreffing other
*(&local35) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1329 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1329));
// unreffing whens
*(&local34) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1330 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1330));
// unreffing value
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1327;
block74:;
panda$core$Int64 $tmp1331 = (panda$core$Int64) {29};
panda$core$Bit $tmp1332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1331);
bool $tmp1333 = $tmp1332.value;
if ($tmp1333) goto block85; else goto block86;
block85:;
// line 405
panda$core$Int64 $tmp1334 = (panda$core$Int64) {10};
return $tmp1334;
block86:;
panda$core$Int64 $tmp1335 = (panda$core$Int64) {31};
panda$core$Bit $tmp1336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1335);
bool $tmp1337 = $tmp1336.value;
if ($tmp1337) goto block87; else goto block88;
block87:;
// line 408
panda$core$Int64 $tmp1338 = (panda$core$Int64) {1};
return $tmp1338;
block88:;
panda$core$Int64 $tmp1339 = (panda$core$Int64) {32};
panda$core$Bit $tmp1340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1339);
bool $tmp1341 = $tmp1340.value;
if ($tmp1341) goto block89; else goto block90;
block89:;
// line 411
panda$core$Int64 $tmp1342 = (panda$core$Int64) {0};
return $tmp1342;
block90:;
panda$core$Int64 $tmp1343 = (panda$core$Int64) {35};
panda$core$Bit $tmp1344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1343);
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block91; else goto block92;
block91:;
org$pandalanguage$pandac$Position* $tmp1346 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1347 = *$tmp1346;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1348 = (org$pandalanguage$pandac$parser$Token$Kind*) (param1->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1349 = *$tmp1348;
org$pandalanguage$pandac$ASTNode** $tmp1350 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1351 = *$tmp1350;
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1351));
org$pandalanguage$pandac$ASTNode* $tmp1352 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1352));
*(&local39) = $tmp1351;
// line 414
panda$core$Int64 $tmp1353 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ASTNode* $tmp1354 = *(&local39);
panda$core$Int64 $tmp1355 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1354);
int64_t $tmp1356 = $tmp1353.value;
int64_t $tmp1357 = $tmp1355.value;
int64_t $tmp1358 = $tmp1356 + $tmp1357;
panda$core$Int64 $tmp1359 = (panda$core$Int64) {$tmp1358};
org$pandalanguage$pandac$ASTNode* $tmp1360 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1360));
// unreffing base
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1359;
block92:;
panda$core$Int64 $tmp1361 = (panda$core$Int64) {36};
panda$core$Bit $tmp1362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1361);
bool $tmp1363 = $tmp1362.value;
if ($tmp1363) goto block93; else goto block94;
block93:;
// line 417
panda$core$Int64 $tmp1364 = (panda$core$Int64) {1};
return $tmp1364;
block94:;
panda$core$Int64 $tmp1365 = (panda$core$Int64) {37};
panda$core$Bit $tmp1366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1365);
bool $tmp1367 = $tmp1366.value;
if ($tmp1367) goto block95; else goto block96;
block95:;
// line 420
panda$core$Int64 $tmp1368 = (panda$core$Int64) {1};
return $tmp1368;
block96:;
panda$core$Int64 $tmp1369 = (panda$core$Int64) {38};
panda$core$Bit $tmp1370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1369);
bool $tmp1371 = $tmp1370.value;
if ($tmp1371) goto block97; else goto block98;
block97:;
// line 423
panda$core$Int64 $tmp1372 = (panda$core$Int64) {1};
return $tmp1372;
block98:;
panda$core$Int64 $tmp1373 = (panda$core$Int64) {39};
panda$core$Bit $tmp1374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1373);
bool $tmp1375 = $tmp1374.value;
if ($tmp1375) goto block99; else goto block100;
block99:;
org$pandalanguage$pandac$Position* $tmp1376 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1377 = *$tmp1376;
org$pandalanguage$pandac$ASTNode** $tmp1378 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1379 = *$tmp1378;
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1379));
org$pandalanguage$pandac$ASTNode* $tmp1380 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1380));
*(&local40) = $tmp1379;
// line 426
org$pandalanguage$pandac$ASTNode* $tmp1381 = *(&local40);
panda$core$Bit $tmp1382 = panda$core$Bit$init$builtin_bit($tmp1381 == NULL);
bool $tmp1383 = $tmp1382.value;
if ($tmp1383) goto block101; else goto block102;
block101:;
// line 427
panda$core$Int64 $tmp1384 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ASTNode* $tmp1385 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1385));
// unreffing value
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1384;
block102:;
// line 429
org$pandalanguage$pandac$ASTNode* $tmp1386 = *(&local40);
panda$core$Bit $tmp1387 = panda$core$Bit$init$builtin_bit($tmp1386 != NULL);
bool $tmp1388 = $tmp1387.value;
if ($tmp1388) goto block103; else goto block104;
block104:;
panda$core$Int64 $tmp1389 = (panda$core$Int64) {429};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1390, $tmp1389, &$s1391);
abort(); // unreachable
block103:;
panda$core$Int64 $tmp1392 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1386);
org$pandalanguage$pandac$ASTNode* $tmp1393 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
// unreffing value
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1392;
block100:;
panda$core$Int64 $tmp1394 = (panda$core$Int64) {40};
panda$core$Bit $tmp1395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1394);
bool $tmp1396 = $tmp1395.value;
if ($tmp1396) goto block105; else goto block106;
block105:;
// line 432
panda$core$Int64 $tmp1397 = (panda$core$Int64) {1};
return $tmp1397;
block106:;
panda$core$Int64 $tmp1398 = (panda$core$Int64) {41};
panda$core$Bit $tmp1399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1398);
bool $tmp1400 = $tmp1399.value;
if ($tmp1400) goto block107; else goto block108;
block107:;
// line 435
panda$core$Int64 $tmp1401 = (panda$core$Int64) {1};
return $tmp1401;
block108:;
panda$core$Int64 $tmp1402 = (panda$core$Int64) {42};
panda$core$Bit $tmp1403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1402);
bool $tmp1404 = $tmp1403.value;
if ($tmp1404) goto block109; else goto block110;
block109:;
// line 438
panda$core$Int64 $tmp1405 = (panda$core$Int64) {1};
return $tmp1405;
block110:;
panda$core$Int64 $tmp1406 = (panda$core$Int64) {45};
panda$core$Bit $tmp1407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1406);
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block111; else goto block112;
block111:;
// line 441
panda$core$Int64 $tmp1409 = (panda$core$Int64) {0};
return $tmp1409;
block112:;
panda$core$Int64 $tmp1410 = (panda$core$Int64) {46};
panda$core$Bit $tmp1411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1410);
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block113; else goto block114;
block113:;
// line 444
panda$core$Int64 $tmp1413 = (panda$core$Int64) {10};
return $tmp1413;
block114:;
panda$core$Int64 $tmp1414 = (panda$core$Int64) {48};
panda$core$Bit $tmp1415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1414);
bool $tmp1416 = $tmp1415.value;
if ($tmp1416) goto block115; else goto block116;
block115:;
// line 447
panda$core$Int64 $tmp1417 = (panda$core$Int64) {10};
return $tmp1417;
block116:;
panda$core$Int64 $tmp1418 = (panda$core$Int64) {50};
panda$core$Bit $tmp1419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1418);
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block117; else goto block118;
block117:;
org$pandalanguage$pandac$Position* $tmp1421 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1422 = *$tmp1421;
org$pandalanguage$pandac$Variable$Kind* $tmp1423 = (org$pandalanguage$pandac$Variable$Kind*) (param1->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp1424 = *$tmp1423;
org$pandalanguage$pandac$FixedArray** $tmp1425 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1426 = *$tmp1425;
*(&local41) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1426));
org$pandalanguage$pandac$FixedArray* $tmp1427 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1427));
*(&local41) = $tmp1426;
// line 450
panda$core$Int64 $tmp1428 = (panda$core$Int64) {0};
*(&local42) = $tmp1428;
// line 451
org$pandalanguage$pandac$FixedArray* $tmp1429 = *(&local41);
ITable* $tmp1430 = ((panda$collections$Iterable*) $tmp1429)->$class->itable;
while ($tmp1430->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1430 = $tmp1430->next;
}
$fn1432 $tmp1431 = $tmp1430->methods[0];
panda$collections$Iterator* $tmp1433 = $tmp1431(((panda$collections$Iterable*) $tmp1429));
goto block119;
block119:;
ITable* $tmp1434 = $tmp1433->$class->itable;
while ($tmp1434->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1434 = $tmp1434->next;
}
$fn1436 $tmp1435 = $tmp1434->methods[0];
panda$core$Bit $tmp1437 = $tmp1435($tmp1433);
bool $tmp1438 = $tmp1437.value;
if ($tmp1438) goto block121; else goto block120;
block120:;
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1439 = $tmp1433->$class->itable;
while ($tmp1439->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1439 = $tmp1439->next;
}
$fn1441 $tmp1440 = $tmp1439->methods[1];
panda$core$Object* $tmp1442 = $tmp1440($tmp1433);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1442)));
org$pandalanguage$pandac$ASTNode* $tmp1443 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1443));
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) $tmp1442);
// line 452
panda$core$Int64 $tmp1444 = *(&local42);
org$pandalanguage$pandac$ASTNode* $tmp1445 = *(&local43);
panda$core$Int64 $tmp1446 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1445);
int64_t $tmp1447 = $tmp1444.value;
int64_t $tmp1448 = $tmp1446.value;
int64_t $tmp1449 = $tmp1447 + $tmp1448;
panda$core$Int64 $tmp1450 = (panda$core$Int64) {$tmp1449};
*(&local42) = $tmp1450;
panda$core$Panda$unref$panda$core$Object$Q($tmp1442);
// unreffing REF($1225:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1451 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1451));
// unreffing decl
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block119;
block121:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1433));
// unreffing REF($1214:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 454
panda$core$Int64 $tmp1452 = *(&local42);
org$pandalanguage$pandac$FixedArray* $tmp1453 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1453));
// unreffing decls
*(&local41) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1452;
block118:;
panda$core$Int64 $tmp1454 = (panda$core$Int64) {51};
panda$core$Bit $tmp1455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1454);
bool $tmp1456 = $tmp1455.value;
if ($tmp1456) goto block122; else goto block123;
block122:;
org$pandalanguage$pandac$Position* $tmp1457 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1458 = *$tmp1457;
org$pandalanguage$pandac$FixedArray** $tmp1459 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp1460 = *$tmp1459;
*(&local44) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
org$pandalanguage$pandac$FixedArray* $tmp1461 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1461));
*(&local44) = $tmp1460;
org$pandalanguage$pandac$FixedArray** $tmp1462 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1463 = *$tmp1462;
*(&local45) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1463));
org$pandalanguage$pandac$FixedArray* $tmp1464 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1464));
*(&local45) = $tmp1463;
// line 457
panda$core$Int64 $tmp1465 = (panda$core$Int64) {0};
*(&local46) = $tmp1465;
// line 458
org$pandalanguage$pandac$FixedArray* $tmp1466 = *(&local44);
ITable* $tmp1467 = ((panda$collections$Iterable*) $tmp1466)->$class->itable;
while ($tmp1467->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1467 = $tmp1467->next;
}
$fn1469 $tmp1468 = $tmp1467->methods[0];
panda$collections$Iterator* $tmp1470 = $tmp1468(((panda$collections$Iterable*) $tmp1466));
goto block124;
block124:;
ITable* $tmp1471 = $tmp1470->$class->itable;
while ($tmp1471->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1471 = $tmp1471->next;
}
$fn1473 $tmp1472 = $tmp1471->methods[0];
panda$core$Bit $tmp1474 = $tmp1472($tmp1470);
bool $tmp1475 = $tmp1474.value;
if ($tmp1475) goto block126; else goto block125;
block125:;
*(&local47) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1476 = $tmp1470->$class->itable;
while ($tmp1476->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1476 = $tmp1476->next;
}
$fn1478 $tmp1477 = $tmp1476->methods[1];
panda$core$Object* $tmp1479 = $tmp1477($tmp1470);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1479)));
org$pandalanguage$pandac$ASTNode* $tmp1480 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1480));
*(&local47) = ((org$pandalanguage$pandac$ASTNode*) $tmp1479);
// line 459
panda$core$Int64 $tmp1481 = *(&local46);
org$pandalanguage$pandac$ASTNode* $tmp1482 = *(&local47);
panda$core$Int64 $tmp1483 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1482);
int64_t $tmp1484 = $tmp1481.value;
int64_t $tmp1485 = $tmp1483.value;
int64_t $tmp1486 = $tmp1484 + $tmp1485;
panda$core$Int64 $tmp1487 = (panda$core$Int64) {$tmp1486};
*(&local46) = $tmp1487;
panda$core$Panda$unref$panda$core$Object$Q($tmp1479);
// unreffing REF($1305:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1488 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1488));
// unreffing test
*(&local47) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block124;
block126:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1470));
// unreffing REF($1294:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 461
org$pandalanguage$pandac$FixedArray* $tmp1489 = *(&local45);
ITable* $tmp1490 = ((panda$collections$Iterable*) $tmp1489)->$class->itable;
while ($tmp1490->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1490 = $tmp1490->next;
}
$fn1492 $tmp1491 = $tmp1490->methods[0];
panda$collections$Iterator* $tmp1493 = $tmp1491(((panda$collections$Iterable*) $tmp1489));
goto block127;
block127:;
ITable* $tmp1494 = $tmp1493->$class->itable;
while ($tmp1494->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1494 = $tmp1494->next;
}
$fn1496 $tmp1495 = $tmp1494->methods[0];
panda$core$Bit $tmp1497 = $tmp1495($tmp1493);
bool $tmp1498 = $tmp1497.value;
if ($tmp1498) goto block129; else goto block128;
block128:;
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1499 = $tmp1493->$class->itable;
while ($tmp1499->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1499 = $tmp1499->next;
}
$fn1501 $tmp1500 = $tmp1499->methods[1];
panda$core$Object* $tmp1502 = $tmp1500($tmp1493);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1502)));
org$pandalanguage$pandac$ASTNode* $tmp1503 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1503));
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) $tmp1502);
// line 462
panda$core$Int64 $tmp1504 = *(&local46);
org$pandalanguage$pandac$ASTNode* $tmp1505 = *(&local48);
panda$core$Int64 $tmp1506 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1505);
int64_t $tmp1507 = $tmp1504.value;
int64_t $tmp1508 = $tmp1506.value;
int64_t $tmp1509 = $tmp1507 + $tmp1508;
panda$core$Int64 $tmp1510 = (panda$core$Int64) {$tmp1509};
*(&local46) = $tmp1510;
panda$core$Panda$unref$panda$core$Object$Q($tmp1502);
// unreffing REF($1350:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1511 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1511));
// unreffing s
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block127;
block129:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1493));
// unreffing REF($1339:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 464
panda$core$Int64 $tmp1512 = *(&local46);
org$pandalanguage$pandac$FixedArray* $tmp1513 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1513));
// unreffing statements
*(&local45) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1514 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
// unreffing tests
*(&local44) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1512;
block123:;
panda$core$Int64 $tmp1515 = (panda$core$Int64) {52};
panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp832, $tmp1515);
bool $tmp1517 = $tmp1516.value;
if ($tmp1517) goto block130; else goto block131;
block130:;
org$pandalanguage$pandac$Position* $tmp1518 = (org$pandalanguage$pandac$Position*) (param1->$data + 0);
org$pandalanguage$pandac$Position $tmp1519 = *$tmp1518;
panda$core$String** $tmp1520 = (panda$core$String**) (param1->$data + 16);
panda$core$String* $tmp1521 = *$tmp1520;
org$pandalanguage$pandac$ASTNode** $tmp1522 = (org$pandalanguage$pandac$ASTNode**) (param1->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1523 = *$tmp1522;
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1523));
org$pandalanguage$pandac$ASTNode* $tmp1524 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1524));
*(&local49) = $tmp1523;
org$pandalanguage$pandac$FixedArray** $tmp1525 = (org$pandalanguage$pandac$FixedArray**) (param1->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp1526 = *$tmp1525;
*(&local50) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1526));
org$pandalanguage$pandac$FixedArray* $tmp1527 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1527));
*(&local50) = $tmp1526;
// line 467
org$pandalanguage$pandac$ASTNode* $tmp1528 = *(&local49);
panda$core$Int64 $tmp1529 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1528);
*(&local51) = $tmp1529;
// line 468
org$pandalanguage$pandac$FixedArray* $tmp1530 = *(&local50);
ITable* $tmp1531 = ((panda$collections$Iterable*) $tmp1530)->$class->itable;
while ($tmp1531->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1531 = $tmp1531->next;
}
$fn1533 $tmp1532 = $tmp1531->methods[0];
panda$collections$Iterator* $tmp1534 = $tmp1532(((panda$collections$Iterable*) $tmp1530));
goto block132;
block132:;
ITable* $tmp1535 = $tmp1534->$class->itable;
while ($tmp1535->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1535 = $tmp1535->next;
}
$fn1537 $tmp1536 = $tmp1535->methods[0];
panda$core$Bit $tmp1538 = $tmp1536($tmp1534);
bool $tmp1539 = $tmp1538.value;
if ($tmp1539) goto block134; else goto block133;
block133:;
*(&local52) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1540 = $tmp1534->$class->itable;
while ($tmp1540->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1540 = $tmp1540->next;
}
$fn1542 $tmp1541 = $tmp1540->methods[1];
panda$core$Object* $tmp1543 = $tmp1541($tmp1534);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1543)));
org$pandalanguage$pandac$ASTNode* $tmp1544 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1544));
*(&local52) = ((org$pandalanguage$pandac$ASTNode*) $tmp1543);
// line 469
panda$core$Int64 $tmp1545 = *(&local51);
org$pandalanguage$pandac$ASTNode* $tmp1546 = *(&local52);
panda$core$Int64 $tmp1547 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1546);
int64_t $tmp1548 = $tmp1545.value;
int64_t $tmp1549 = $tmp1547.value;
int64_t $tmp1550 = $tmp1548 + $tmp1549;
panda$core$Int64 $tmp1551 = (panda$core$Int64) {$tmp1550};
*(&local51) = $tmp1551;
panda$core$Panda$unref$panda$core$Object$Q($tmp1543);
// unreffing REF($1438:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1552 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1552));
// unreffing s
*(&local52) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block132;
block134:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1534));
// unreffing REF($1427:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 471
panda$core$Int64 $tmp1553 = *(&local51);
org$pandalanguage$pandac$FixedArray* $tmp1554 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1554));
// unreffing statements
*(&local50) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1555 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
// unreffing test
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1553;
block131:;
// line 474
panda$core$Bit $tmp1556 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1557 = $tmp1556.value;
if ($tmp1557) goto block135; else goto block136;
block136:;
panda$core$Int64 $tmp1558 = (panda$core$Int64) {474};
panda$core$String* $tmp1559 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1560, ((panda$core$Object*) param1));
panda$core$String* $tmp1561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1559, &$s1562);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1563, $tmp1558, $tmp1561);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1561));
// unreffing REF($1487:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1559));
// unreffing REF($1486:panda.core.String)
abort(); // unreachable
block135:;
goto block1;
block1:;
panda$core$Bit $tmp1564 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1565 = $tmp1564.value;
if ($tmp1565) goto block137; else goto block138;
block138:;
panda$core$Int64 $tmp1566 = (panda$core$Int64) {292};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1567, $tmp1566, &$s1568);
abort(); // unreachable
block137:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Annotations* param1, panda$collections$ListView* param2) {

panda$core$Bit local0;
panda$core$Bit local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 480
panda$core$Weak** $tmp1569 = &param0->compiler;
panda$core$Weak* $tmp1570 = *$tmp1569;
panda$core$Object* $tmp1571 = panda$core$Weak$get$R$panda$core$Weak$T($tmp1570);
org$pandalanguage$pandac$Compiler$Settings** $tmp1572 = &((org$pandalanguage$pandac$Compiler*) $tmp1571)->settings;
org$pandalanguage$pandac$Compiler$Settings* $tmp1573 = *$tmp1572;
panda$core$Int64* $tmp1574 = &$tmp1573->optimizationLevel;
panda$core$Int64 $tmp1575 = *$tmp1574;
panda$core$Int64 $tmp1576 = (panda$core$Int64) {0};
int64_t $tmp1577 = $tmp1575.value;
int64_t $tmp1578 = $tmp1576.value;
bool $tmp1579 = $tmp1577 > $tmp1578;
panda$core$Bit $tmp1580 = (panda$core$Bit) {$tmp1579};
bool $tmp1581 = $tmp1580.value;
if ($tmp1581) goto block3; else goto block4;
block3:;
panda$core$Bit $tmp1582 = org$pandalanguage$pandac$Annotations$get_isInline$R$panda$core$Bit(param1);
panda$core$Bit $tmp1583 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1582);
*(&local1) = $tmp1583;
goto block5;
block4:;
*(&local1) = $tmp1580;
goto block5;
block5:;
panda$core$Bit $tmp1584 = *(&local1);
bool $tmp1585 = $tmp1584.value;
if ($tmp1585) goto block6; else goto block7;
block6:;
panda$core$Bit $tmp1586 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit(param1);
*(&local0) = $tmp1586;
goto block8;
block7:;
*(&local0) = $tmp1584;
goto block8;
block8:;
panda$core$Bit $tmp1587 = *(&local0);
bool $tmp1588 = $tmp1587.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp1571);
// unreffing REF($4:panda.core.Weak.T)
if ($tmp1588) goto block1; else goto block2;
block1:;
// line 482
panda$core$Int64 $tmp1589 = (panda$core$Int64) {0};
*(&local2) = $tmp1589;
// line 483
ITable* $tmp1590 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp1590->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1590 = $tmp1590->next;
}
$fn1592 $tmp1591 = $tmp1590->methods[0];
panda$collections$Iterator* $tmp1593 = $tmp1591(((panda$collections$Iterable*) param2));
goto block9;
block9:;
ITable* $tmp1594 = $tmp1593->$class->itable;
while ($tmp1594->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1594 = $tmp1594->next;
}
$fn1596 $tmp1595 = $tmp1594->methods[0];
panda$core$Bit $tmp1597 = $tmp1595($tmp1593);
bool $tmp1598 = $tmp1597.value;
if ($tmp1598) goto block11; else goto block10;
block10:;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1599 = $tmp1593->$class->itable;
while ($tmp1599->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1599 = $tmp1599->next;
}
$fn1601 $tmp1600 = $tmp1599->methods[1];
panda$core$Object* $tmp1602 = $tmp1600($tmp1593);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1602)));
org$pandalanguage$pandac$ASTNode* $tmp1603 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1603));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) $tmp1602);
// line 484
panda$core$Int64 $tmp1604 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1605 = *(&local3);
panda$core$Int64 $tmp1606 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(param0, $tmp1605);
int64_t $tmp1607 = $tmp1604.value;
int64_t $tmp1608 = $tmp1606.value;
int64_t $tmp1609 = $tmp1607 + $tmp1608;
panda$core$Int64 $tmp1610 = (panda$core$Int64) {$tmp1609};
*(&local2) = $tmp1610;
// line 485
panda$core$Int64 $tmp1611 = *(&local2);
panda$core$Int64 $tmp1612 = (panda$core$Int64) {10};
int64_t $tmp1613 = $tmp1611.value;
int64_t $tmp1614 = $tmp1612.value;
bool $tmp1615 = $tmp1613 > $tmp1614;
panda$core$Bit $tmp1616 = (panda$core$Bit) {$tmp1615};
bool $tmp1617 = $tmp1616.value;
if ($tmp1617) goto block12; else goto block13;
block12:;
// line 486
panda$core$Bit $tmp1618 = panda$core$Bit$init$builtin_bit(false);
panda$core$Panda$unref$panda$core$Object$Q($tmp1602);
// unreffing REF($55:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1619 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1619));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1593));
// unreffing REF($44:panda.collections.Iterator<panda.collections.Iterable.T>)
return $tmp1618;
block13:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1602);
// unreffing REF($55:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1620 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1620));
// unreffing s
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1593));
// unreffing REF($44:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 489
panda$core$Bit $tmp1621 = panda$core$Bit$init$builtin_bit(true);
return $tmp1621;
block2:;
// line 491
panda$core$Bit $tmp1622 = panda$core$Bit$init$builtin_bit(false);
return $tmp1622;

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
panda$core$Bit $tmp1623 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp1624 = $tmp1623.value;
if ($tmp1624) goto block1; else goto block3;
block1:;
// line 501
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp1625 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1625));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 504
panda$core$Bit $tmp1626 = panda$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp1627 = $tmp1626.value;
if ($tmp1627) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1628 = (panda$core$Int64) {504};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1629, $tmp1628, &$s1630);
abort(); // unreachable
block4:;
panda$core$Int64* $tmp1631 = &param3->$rawValue;
panda$core$Int64 $tmp1632 = *$tmp1631;
panda$core$Int64 $tmp1633 = (panda$core$Int64) {41};
panda$core$Bit $tmp1634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1632, $tmp1633);
bool $tmp1635 = $tmp1634.value;
if ($tmp1635) goto block7; else goto block8;
block7:;
org$pandalanguage$pandac$Position* $tmp1636 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp1637 = *$tmp1636;
*(&local1) = $tmp1637;
panda$core$String** $tmp1638 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp1639 = *$tmp1638;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1639));
panda$core$String* $tmp1640 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1640));
*(&local2) = $tmp1639;
// line 506
panda$core$String* $tmp1641 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1641));
panda$core$String* $tmp1642 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1642));
*(&local0) = $tmp1641;
panda$core$String* $tmp1643 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1643));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block6;
block8:;
// line 509
panda$core$Bit $tmp1644 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1645 = $tmp1644.value;
if ($tmp1645) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp1646 = (panda$core$Int64) {509};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1647, $tmp1646);
abort(); // unreachable
block9:;
goto block6;
block6:;
goto block2;
block2:;
// line 513
org$pandalanguage$pandac$Annotations* $tmp1648 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param4);
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1648));
org$pandalanguage$pandac$Annotations* $tmp1649 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1649));
*(&local3) = $tmp1648;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1648));
// unreffing REF($68:org.pandalanguage.pandac.Annotations)
// line 514
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1650;
$tmp1650 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1650->value = param5;
panda$core$Int64 $tmp1651 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1652 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1651);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1653;
$tmp1653 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1653->value = $tmp1652;
ITable* $tmp1654 = ((panda$core$Equatable*) $tmp1650)->$class->itable;
while ($tmp1654->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1654 = $tmp1654->next;
}
$fn1656 $tmp1655 = $tmp1654->methods[1];
panda$core$Bit $tmp1657 = $tmp1655(((panda$core$Equatable*) $tmp1650), ((panda$core$Equatable*) $tmp1653));
bool $tmp1658 = $tmp1657.value;
if ($tmp1658) goto block13; else goto block14;
block13:;
org$pandalanguage$pandac$Annotations** $tmp1659 = &param1->annotations;
org$pandalanguage$pandac$Annotations* $tmp1660 = *$tmp1659;
panda$core$Bit $tmp1661 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit($tmp1660);
*(&local5) = $tmp1661;
goto block15;
block14:;
*(&local5) = $tmp1657;
goto block15;
block15:;
panda$core$Bit $tmp1662 = *(&local5);
bool $tmp1663 = $tmp1662.value;
if ($tmp1663) goto block16; else goto block17;
block16:;
*(&local4) = $tmp1662;
goto block18;
block17:;
org$pandalanguage$pandac$Annotations* $tmp1664 = *(&local3);
panda$core$Bit $tmp1665 = org$pandalanguage$pandac$Annotations$get_isPrivate$R$panda$core$Bit($tmp1664);
*(&local4) = $tmp1665;
goto block18;
block18:;
panda$core$Bit $tmp1666 = *(&local4);
bool $tmp1667 = $tmp1666.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1653)));
// unreffing REF($84:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1650)));
// unreffing REF($80:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp1667) goto block11; else goto block12;
block11:;
// line 515
org$pandalanguage$pandac$Annotations* $tmp1668 = *(&local3);
panda$core$Int64* $tmp1669 = &$tmp1668->flags;
panda$core$Int64 $tmp1670 = *$tmp1669;
panda$core$Int64 $tmp1671 = (panda$core$Int64) {256};
panda$core$Int64 $tmp1672 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1670, $tmp1671);
panda$core$Int64* $tmp1673 = &$tmp1668->flags;
*$tmp1673 = $tmp1672;
goto block12;
block12:;
// line 517
*(&local6) = ((panda$collections$Array*) NULL);
// line 518
panda$core$Bit $tmp1674 = panda$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1675 = $tmp1674.value;
if ($tmp1675) goto block19; else goto block21;
block19:;
// line 519
panda$collections$Array* $tmp1676 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1676);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1676));
panda$collections$Array* $tmp1677 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1677));
*(&local6) = $tmp1676;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1676));
// unreffing REF($131:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.GenericParameter>)
// line 520
panda$core$String** $tmp1678 = &param1->name;
panda$core$String* $tmp1679 = *$tmp1678;
panda$core$String* $tmp1680 = panda$core$String$convert$R$panda$core$String($tmp1679);
panda$core$String* $tmp1681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1680, &$s1682);
panda$core$String* $tmp1683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1681, param6);
panda$core$String* $tmp1684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1683, &$s1685);
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1684));
panda$core$String* $tmp1686 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1686));
*(&local7) = $tmp1684;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1684));
// unreffing REF($150:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1683));
// unreffing REF($149:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1681));
// unreffing REF($148:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1680));
// unreffing REF($147:panda.core.String)
// line 521
panda$core$Bit $tmp1687 = panda$core$Bit$init$builtin_bit(param7 != NULL);
bool $tmp1688 = $tmp1687.value;
if ($tmp1688) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp1689 = (panda$core$Int64) {521};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1690, $tmp1689, &$s1691);
abort(); // unreachable
block22:;
ITable* $tmp1692 = ((panda$collections$Iterable*) param7)->$class->itable;
while ($tmp1692->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1692 = $tmp1692->next;
}
$fn1694 $tmp1693 = $tmp1692->methods[0];
panda$collections$Iterator* $tmp1695 = $tmp1693(((panda$collections$Iterable*) param7));
goto block24;
block24:;
ITable* $tmp1696 = $tmp1695->$class->itable;
while ($tmp1696->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1696 = $tmp1696->next;
}
$fn1698 $tmp1697 = $tmp1696->methods[0];
panda$core$Bit $tmp1699 = $tmp1697($tmp1695);
bool $tmp1700 = $tmp1699.value;
if ($tmp1700) goto block26; else goto block25;
block25:;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1701 = $tmp1695->$class->itable;
while ($tmp1701->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1701 = $tmp1701->next;
}
$fn1703 $tmp1702 = $tmp1701->methods[1];
panda$core$Object* $tmp1704 = $tmp1702($tmp1695);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1704)));
org$pandalanguage$pandac$ASTNode* $tmp1705 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1705));
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) $tmp1704);
// line 522
*(&local9) = ((panda$core$String*) NULL);
// line 523
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
// line 524
org$pandalanguage$pandac$ASTNode* $tmp1706 = *(&local8);
panda$core$Int64* $tmp1707 = &$tmp1706->$rawValue;
panda$core$Int64 $tmp1708 = *$tmp1707;
panda$core$Int64 $tmp1709 = (panda$core$Int64) {22};
panda$core$Bit $tmp1710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1708, $tmp1709);
bool $tmp1711 = $tmp1710.value;
if ($tmp1711) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp1712 = (org$pandalanguage$pandac$Position*) ($tmp1706->$data + 0);
org$pandalanguage$pandac$Position $tmp1713 = *$tmp1712;
panda$core$String** $tmp1714 = (panda$core$String**) ($tmp1706->$data + 16);
panda$core$String* $tmp1715 = *$tmp1714;
*(&local11) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1715));
panda$core$String* $tmp1716 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1716));
*(&local11) = $tmp1715;
// line 526
panda$core$String* $tmp1717 = *(&local11);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1717));
panda$core$String* $tmp1718 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1718));
*(&local9) = $tmp1717;
// line 527
org$pandalanguage$pandac$Type* $tmp1719 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1719));
org$pandalanguage$pandac$Type* $tmp1720 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1720));
*(&local10) = $tmp1719;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1719));
// unreffing REF($232:org.pandalanguage.pandac.Type)
panda$core$String* $tmp1721 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1721));
// unreffing id
*(&local11) = ((panda$core$String*) NULL);
goto block27;
block29:;
panda$core$Int64 $tmp1722 = (panda$core$Int64) {47};
panda$core$Bit $tmp1723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1708, $tmp1722);
bool $tmp1724 = $tmp1723.value;
if ($tmp1724) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp1725 = (org$pandalanguage$pandac$Position*) ($tmp1706->$data + 0);
org$pandalanguage$pandac$Position $tmp1726 = *$tmp1725;
panda$core$String** $tmp1727 = (panda$core$String**) ($tmp1706->$data + 16);
panda$core$String* $tmp1728 = *$tmp1727;
*(&local12) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1728));
panda$core$String* $tmp1729 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1729));
*(&local12) = $tmp1728;
org$pandalanguage$pandac$ASTNode** $tmp1730 = (org$pandalanguage$pandac$ASTNode**) ($tmp1706->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1731 = *$tmp1730;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1731));
org$pandalanguage$pandac$ASTNode* $tmp1732 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1732));
*(&local13) = $tmp1731;
// line 530
panda$core$String* $tmp1733 = *(&local12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1733));
panda$core$String* $tmp1734 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1734));
*(&local9) = $tmp1733;
// line 531
org$pandalanguage$pandac$ASTNode* $tmp1735 = *(&local13);
panda$core$Bit $tmp1736 = panda$core$Bit$init$builtin_bit($tmp1735 != NULL);
bool $tmp1737 = $tmp1736.value;
if ($tmp1737) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp1738 = (panda$core$Int64) {531};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1739, $tmp1738, &$s1740);
abort(); // unreachable
block32:;
org$pandalanguage$pandac$Type* $tmp1741 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1735);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1741));
org$pandalanguage$pandac$Type* $tmp1742 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1742));
*(&local10) = $tmp1741;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1741));
// unreffing REF($290:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$ASTNode* $tmp1743 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1743));
// unreffing type
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1744 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1744));
// unreffing id
*(&local12) = ((panda$core$String*) NULL);
goto block27;
block31:;
// line 534
panda$core$Bit $tmp1745 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1746 = $tmp1745.value;
if ($tmp1746) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp1747 = (panda$core$Int64) {534};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1748, $tmp1747);
abort(); // unreachable
block34:;
goto block27;
block27:;
// line 537
panda$collections$Array* $tmp1749 = *(&local6);
panda$core$Bit $tmp1750 = panda$core$Bit$init$builtin_bit($tmp1749 != NULL);
bool $tmp1751 = $tmp1750.value;
if ($tmp1751) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp1752 = (panda$core$Int64) {537};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1753, $tmp1752, &$s1754);
abort(); // unreachable
block36:;
org$pandalanguage$pandac$MethodDecl$GenericParameter* $tmp1755 = (org$pandalanguage$pandac$MethodDecl$GenericParameter*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$GenericParameter$class);
org$pandalanguage$pandac$ASTNode* $tmp1756 = *(&local8);
$fn1758 $tmp1757 = ($fn1758) $tmp1756->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1759 = $tmp1757($tmp1756);
panda$core$String* $tmp1760 = *(&local7);
panda$core$String* $tmp1761 = *(&local9);
org$pandalanguage$pandac$Type* $tmp1762 = *(&local10);
org$pandalanguage$pandac$MethodDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1755, $tmp1759, $tmp1760, $tmp1761, $tmp1762);
panda$collections$Array$add$panda$collections$Array$T($tmp1749, ((panda$core$Object*) $tmp1755));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1755));
// unreffing REF($329:org.pandalanguage.pandac.MethodDecl.GenericParameter)
org$pandalanguage$pandac$Type* $tmp1763 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1763));
// unreffing bound
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp1764 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1764));
// unreffing parameterName
*(&local9) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1704);
// unreffing REF($192:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1765 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1765));
// unreffing p
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block24;
block26:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1695));
// unreffing REF($181:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$String* $tmp1766 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1766));
// unreffing fullName
*(&local7) = ((panda$core$String*) NULL);
goto block20;
block21:;
// line 1
// line 542
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Array*) NULL)));
panda$collections$Array* $tmp1767 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1767));
*(&local6) = ((panda$collections$Array*) NULL);
goto block20;
block20:;
// line 544
panda$collections$Array* $tmp1768 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1768);
*(&local14) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1768));
panda$collections$Array* $tmp1769 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1769));
*(&local14) = $tmp1768;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1768));
// unreffing REF($380:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
// line 545
ITable* $tmp1770 = ((panda$collections$Iterable*) param8)->$class->itable;
while ($tmp1770->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1770 = $tmp1770->next;
}
$fn1772 $tmp1771 = $tmp1770->methods[0];
panda$collections$Iterator* $tmp1773 = $tmp1771(((panda$collections$Iterable*) param8));
goto block38;
block38:;
ITable* $tmp1774 = $tmp1773->$class->itable;
while ($tmp1774->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1774 = $tmp1774->next;
}
$fn1776 $tmp1775 = $tmp1774->methods[0];
panda$core$Bit $tmp1777 = $tmp1775($tmp1773);
bool $tmp1778 = $tmp1777.value;
if ($tmp1778) goto block40; else goto block39;
block39:;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1779 = $tmp1773->$class->itable;
while ($tmp1779->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1779 = $tmp1779->next;
}
$fn1781 $tmp1780 = $tmp1779->methods[1];
panda$core$Object* $tmp1782 = $tmp1780($tmp1773);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1782)));
org$pandalanguage$pandac$ASTNode* $tmp1783 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1783));
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) $tmp1782);
// line 546
org$pandalanguage$pandac$ASTNode* $tmp1784 = *(&local15);
panda$core$Int64* $tmp1785 = &$tmp1784->$rawValue;
panda$core$Int64 $tmp1786 = *$tmp1785;
panda$core$Int64 $tmp1787 = (panda$core$Int64) {34};
panda$core$Bit $tmp1788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1786, $tmp1787);
bool $tmp1789 = $tmp1788.value;
if ($tmp1789) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp1790 = (org$pandalanguage$pandac$Position*) ($tmp1784->$data + 0);
org$pandalanguage$pandac$Position $tmp1791 = *$tmp1790;
panda$core$String** $tmp1792 = (panda$core$String**) ($tmp1784->$data + 16);
panda$core$String* $tmp1793 = *$tmp1792;
*(&local16) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1793));
panda$core$String* $tmp1794 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1794));
*(&local16) = $tmp1793;
org$pandalanguage$pandac$ASTNode** $tmp1795 = (org$pandalanguage$pandac$ASTNode**) ($tmp1784->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1796 = *$tmp1795;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1796));
org$pandalanguage$pandac$ASTNode* $tmp1797 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1797));
*(&local17) = $tmp1796;
// line 548
panda$collections$Array* $tmp1798 = *(&local14);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1799 = (org$pandalanguage$pandac$MethodDecl$Parameter*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
panda$core$String* $tmp1800 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1801 = *(&local17);
org$pandalanguage$pandac$Type* $tmp1802 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp1801);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1799, $tmp1800, $tmp1802);
panda$collections$Array$add$panda$collections$Array$T($tmp1798, ((panda$core$Object*) $tmp1799));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1802));
// unreffing REF($450:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1799));
// unreffing REF($447:org.pandalanguage.pandac.MethodDecl.Parameter)
org$pandalanguage$pandac$ASTNode* $tmp1803 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1803));
// unreffing type
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1804 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1804));
// unreffing name
*(&local16) = ((panda$core$String*) NULL);
goto block41;
block43:;
// line 551
panda$core$Bit $tmp1805 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1806 = $tmp1805.value;
if ($tmp1806) goto block44; else goto block45;
block45:;
panda$core$Int64 $tmp1807 = (panda$core$Int64) {551};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1808, $tmp1807);
abort(); // unreachable
block44:;
goto block41;
block41:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1782);
// unreffing REF($408:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1809 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1809));
// unreffing p
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block38;
block40:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1773));
// unreffing REF($397:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 555
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
// line 556
panda$core$Bit $tmp1810 = panda$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1811 = $tmp1810.value;
if ($tmp1811) goto block46; else goto block48;
block46:;
// line 557
panda$core$Bit $tmp1812 = panda$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp1813 = $tmp1812.value;
if ($tmp1813) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp1814 = (panda$core$Int64) {557};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1815, $tmp1814, &$s1816);
abort(); // unreachable
block49:;
org$pandalanguage$pandac$Type* $tmp1817 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, param9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1817));
org$pandalanguage$pandac$Type* $tmp1818 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1818));
*(&local18) = $tmp1817;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1817));
// unreffing REF($507:org.pandalanguage.pandac.Type)
goto block47;
block48:;
// line 1
// line 560
org$pandalanguage$pandac$Type* $tmp1819 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1819));
org$pandalanguage$pandac$Type* $tmp1820 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1820));
*(&local18) = $tmp1819;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1819));
// unreffing REF($520:org.pandalanguage.pandac.Type)
goto block47;
block47:;
// line 562
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1821;
$tmp1821 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1821->value = param5;
panda$core$Int64 $tmp1822 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp1823 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp1822);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp1824;
$tmp1824 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp1824->value = $tmp1823;
ITable* $tmp1825 = ((panda$core$Equatable*) $tmp1821)->$class->itable;
while ($tmp1825->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1825 = $tmp1825->next;
}
$fn1827 $tmp1826 = $tmp1825->methods[0];
panda$core$Bit $tmp1828 = $tmp1826(((panda$core$Equatable*) $tmp1821), ((panda$core$Equatable*) $tmp1824));
bool $tmp1829 = $tmp1828.value;
if ($tmp1829) goto block53; else goto block54;
block53:;
org$pandalanguage$pandac$Type* $tmp1830 = *(&local18);
org$pandalanguage$pandac$Type* $tmp1831 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1832 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1830, $tmp1831);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1831));
// unreffing REF($542:org.pandalanguage.pandac.Type)
*(&local19) = $tmp1832;
goto block55;
block54:;
*(&local19) = $tmp1828;
goto block55;
block55:;
panda$core$Bit $tmp1833 = *(&local19);
bool $tmp1834 = $tmp1833.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1824)));
// unreffing REF($536:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1821)));
// unreffing REF($532:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp1834) goto block51; else goto block52;
block51:;
// line 563
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param2, &$s1835);
goto block52;
block52:;
// line 565
panda$core$Bit $tmp1836 = panda$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block58; else goto block59;
block58:;
org$pandalanguage$pandac$Annotations* $tmp1838 = *(&local3);
panda$core$Bit $tmp1839 = panda$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp1840 = $tmp1839.value;
if ($tmp1840) goto block61; else goto block62;
block62:;
panda$core$Int64 $tmp1841 = (panda$core$Int64) {565};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1842, $tmp1841, &$s1843);
abort(); // unreachable
block61:;
panda$core$Bit $tmp1844 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(param0, $tmp1838, ((panda$collections$ListView*) param10));
*(&local20) = $tmp1844;
goto block60;
block59:;
*(&local20) = $tmp1836;
goto block60;
block60:;
panda$core$Bit $tmp1845 = *(&local20);
bool $tmp1846 = $tmp1845.value;
if ($tmp1846) goto block56; else goto block57;
block56:;
// line 566
org$pandalanguage$pandac$Annotations* $tmp1847 = *(&local3);
panda$core$Int64* $tmp1848 = &$tmp1847->flags;
panda$core$Int64 $tmp1849 = *$tmp1848;
panda$core$Int64 $tmp1850 = (panda$core$Int64) {1024};
panda$core$Int64 $tmp1851 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1849, $tmp1850);
panda$core$Int64* $tmp1852 = &$tmp1847->flags;
*$tmp1852 = $tmp1851;
goto block57;
block57:;
// line 568
panda$core$Bit $tmp1853 = panda$core$Bit$init$builtin_bit(param10 == NULL);
bool $tmp1854 = $tmp1853.value;
if ($tmp1854) goto block65; else goto block66;
block65:;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp1855 = &param1->classKind;
org$pandalanguage$pandac$ClassDecl$Kind $tmp1856 = *$tmp1855;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp1857;
$tmp1857 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp1857->value = $tmp1856;
panda$core$Int64 $tmp1858 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp1859 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp1858);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp1860;
$tmp1860 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp1860->value = $tmp1859;
ITable* $tmp1861 = ((panda$core$Equatable*) $tmp1857)->$class->itable;
while ($tmp1861->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1861 = $tmp1861->next;
}
$fn1863 $tmp1862 = $tmp1861->methods[0];
panda$core$Bit $tmp1864 = $tmp1862(((panda$core$Equatable*) $tmp1857), ((panda$core$Equatable*) $tmp1860));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1860)));
// unreffing REF($605:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1857)));
// unreffing REF($601:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
*(&local21) = $tmp1864;
goto block67;
block66:;
*(&local21) = $tmp1853;
goto block67;
block67:;
panda$core$Bit $tmp1865 = *(&local21);
bool $tmp1866 = $tmp1865.value;
if ($tmp1866) goto block63; else goto block64;
block63:;
// line 569
org$pandalanguage$pandac$Annotations* $tmp1867 = *(&local3);
panda$core$Int64* $tmp1868 = &$tmp1867->flags;
panda$core$Int64 $tmp1869 = *$tmp1868;
panda$core$Int64 $tmp1870 = (panda$core$Int64) {512};
panda$core$Int64 $tmp1871 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp1869, $tmp1870);
panda$core$Int64 $tmp1872 = (panda$core$Int64) {0};
int64_t $tmp1873 = $tmp1871.value;
int64_t $tmp1874 = $tmp1872.value;
bool $tmp1875 = $tmp1873 != $tmp1874;
panda$core$Bit $tmp1876 = (panda$core$Bit) {$tmp1875};
bool $tmp1877 = $tmp1876.value;
if ($tmp1877) goto block68; else goto block69;
block68:;
// line 570
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param2, &$s1878);
goto block69;
block69:;
// line 573
org$pandalanguage$pandac$Annotations* $tmp1879 = *(&local3);
panda$core$Int64* $tmp1880 = &$tmp1879->flags;
panda$core$Int64 $tmp1881 = *$tmp1880;
panda$core$Int64 $tmp1882 = (panda$core$Int64) {512};
panda$core$Int64 $tmp1883 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1881, $tmp1882);
panda$core$Int64* $tmp1884 = &$tmp1879->flags;
*$tmp1884 = $tmp1883;
goto block64;
block64:;
// line 575
org$pandalanguage$pandac$MethodDecl* $tmp1885 = (org$pandalanguage$pandac$MethodDecl*) frostObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
panda$core$String* $tmp1886 = *(&local0);
org$pandalanguage$pandac$Annotations* $tmp1887 = *(&local3);
panda$collections$Array* $tmp1888 = *(&local6);
panda$collections$Array* $tmp1889 = *(&local14);
org$pandalanguage$pandac$Type* $tmp1890 = *(&local18);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1885, param1, param2, $tmp1886, $tmp1887, param5, param6, $tmp1888, $tmp1889, $tmp1890, param10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1885));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1885));
// unreffing REF($647:org.pandalanguage.pandac.MethodDecl)
org$pandalanguage$pandac$Type* $tmp1891 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1891));
// unreffing returnType
*(&local18) = ((org$pandalanguage$pandac$Type*) NULL);
panda$collections$Array* $tmp1892 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1892));
// unreffing parameters
*(&local14) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1893 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1893));
// unreffing generics
*(&local6) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp1894 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1894));
// unreffing annotations
*(&local3) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp1895 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1895));
// unreffing doccomment
*(&local0) = ((panda$core$String*) NULL);
return $tmp1885;

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
panda$core$Int64* $tmp1896 = &param2->$rawValue;
panda$core$Int64 $tmp1897 = *$tmp1896;
panda$core$Int64 $tmp1898 = (panda$core$Int64) {18};
panda$core$Bit $tmp1899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1897, $tmp1898);
bool $tmp1900 = $tmp1899.value;
if ($tmp1900) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp1901 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1902 = *$tmp1901;
*(&local0) = $tmp1902;
org$pandalanguage$pandac$ASTNode** $tmp1903 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1904 = *$tmp1903;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1904));
org$pandalanguage$pandac$ASTNode* $tmp1905 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1905));
*(&local1) = $tmp1904;
org$pandalanguage$pandac$FixedArray** $tmp1906 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1907 = *$tmp1906;
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1907));
org$pandalanguage$pandac$FixedArray* $tmp1908 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1908));
*(&local2) = $tmp1907;
org$pandalanguage$pandac$ASTNode** $tmp1909 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1910 = *$tmp1909;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1910));
org$pandalanguage$pandac$ASTNode* $tmp1911 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1911));
*(&local3) = $tmp1910;
// line 582
org$pandalanguage$pandac$Position $tmp1912 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp1913 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp1914 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1915 = *(&local3);
org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(param0, param1, $tmp1912, $tmp1913, $tmp1914, $tmp1915);
org$pandalanguage$pandac$ASTNode* $tmp1916 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1916));
// unreffing varDecl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1917 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1917));
// unreffing annotations
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1918 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1918));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp1919 = (panda$core$Int64) {29};
panda$core$Bit $tmp1920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1897, $tmp1919);
bool $tmp1921 = $tmp1920.value;
if ($tmp1921) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp1922 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1923 = *$tmp1922;
*(&local4) = $tmp1923;
org$pandalanguage$pandac$ASTNode** $tmp1924 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1925 = *$tmp1924;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1925));
org$pandalanguage$pandac$ASTNode* $tmp1926 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1926));
*(&local5) = $tmp1925;
org$pandalanguage$pandac$FixedArray** $tmp1927 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1928 = *$tmp1927;
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1928));
org$pandalanguage$pandac$FixedArray* $tmp1929 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1929));
*(&local6) = $tmp1928;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp1930 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param2->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1931 = *$tmp1930;
*(&local7) = $tmp1931;
panda$core$String** $tmp1932 = (panda$core$String**) (param2->$data + 40);
panda$core$String* $tmp1933 = *$tmp1932;
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1933));
panda$core$String* $tmp1934 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1934));
*(&local8) = $tmp1933;
org$pandalanguage$pandac$FixedArray** $tmp1935 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp1936 = *$tmp1935;
*(&local9) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1936));
org$pandalanguage$pandac$FixedArray* $tmp1937 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1937));
*(&local9) = $tmp1936;
org$pandalanguage$pandac$FixedArray** $tmp1938 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp1939 = *$tmp1938;
*(&local10) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1939));
org$pandalanguage$pandac$FixedArray* $tmp1940 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1940));
*(&local10) = $tmp1939;
org$pandalanguage$pandac$ASTNode** $tmp1941 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp1942 = *$tmp1941;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1942));
org$pandalanguage$pandac$ASTNode* $tmp1943 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1943));
*(&local11) = $tmp1942;
org$pandalanguage$pandac$FixedArray** $tmp1944 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 72);
org$pandalanguage$pandac$FixedArray* $tmp1945 = *$tmp1944;
*(&local12) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1945));
org$pandalanguage$pandac$FixedArray* $tmp1946 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1946));
*(&local12) = $tmp1945;
// line 586
org$pandalanguage$pandac$Position $tmp1947 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1948 = *(&local5);
org$pandalanguage$pandac$FixedArray* $tmp1949 = *(&local6);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1950 = *(&local7);
panda$core$String* $tmp1951 = *(&local8);
org$pandalanguage$pandac$FixedArray* $tmp1952 = *(&local9);
org$pandalanguage$pandac$FixedArray* $tmp1953 = *(&local10);
org$pandalanguage$pandac$ASTNode* $tmp1954 = *(&local11);
org$pandalanguage$pandac$FixedArray* $tmp1955 = *(&local12);
org$pandalanguage$pandac$MethodDecl* $tmp1956 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(param0, param1, $tmp1947, $tmp1948, $tmp1949, $tmp1950, $tmp1951, $tmp1952, $tmp1953, $tmp1954, $tmp1955);
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1956));
org$pandalanguage$pandac$MethodDecl* $tmp1957 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1957));
*(&local13) = $tmp1956;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1956));
// unreffing REF($142:org.pandalanguage.pandac.MethodDecl?)
// line 588
org$pandalanguage$pandac$MethodDecl* $tmp1958 = *(&local13);
panda$core$Bit $tmp1959 = panda$core$Bit$init$builtin_bit($tmp1958 != NULL);
bool $tmp1960 = $tmp1959.value;
if ($tmp1960) goto block6; else goto block7;
block6:;
// line 589
org$pandalanguage$pandac$SymbolTable** $tmp1961 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp1962 = *$tmp1961;
org$pandalanguage$pandac$MethodDecl* $tmp1963 = *(&local13);
panda$core$Bit $tmp1964 = panda$core$Bit$init$builtin_bit($tmp1963 != NULL);
bool $tmp1965 = $tmp1964.value;
if ($tmp1965) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp1966 = (panda$core$Int64) {589};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1967, $tmp1966, &$s1968);
abort(); // unreachable
block8:;
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp1962, ((org$pandalanguage$pandac$Symbol*) $tmp1963));
// line 590
panda$collections$Array** $tmp1969 = &param1->methods;
panda$collections$Array* $tmp1970 = *$tmp1969;
org$pandalanguage$pandac$MethodDecl* $tmp1971 = *(&local13);
panda$core$Bit $tmp1972 = panda$core$Bit$init$builtin_bit($tmp1971 != NULL);
bool $tmp1973 = $tmp1972.value;
if ($tmp1973) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp1974 = (panda$core$Int64) {590};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1975, $tmp1974, &$s1976);
abort(); // unreachable
block10:;
panda$collections$Array$add$panda$collections$Array$T($tmp1970, ((panda$core$Object*) $tmp1971));
goto block7;
block7:;
org$pandalanguage$pandac$MethodDecl* $tmp1977 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1977));
// unreffing m
*(&local13) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1978 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1978));
// unreffing statements
*(&local12) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1979 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1979));
// unreffing returnType
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1980 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1980));
// unreffing parameters
*(&local10) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1981 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1981));
// unreffing generics
*(&local9) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1982 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1982));
// unreffing name
*(&local8) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1983 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
// unreffing annotations
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1984 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1984));
// unreffing dc
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp1985 = (panda$core$Int64) {12};
panda$core$Bit $tmp1986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1897, $tmp1985);
bool $tmp1987 = $tmp1986.value;
if ($tmp1987) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp1988 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp1989 = *$tmp1988;
*(&local14) = $tmp1989;
org$pandalanguage$pandac$ASTNode** $tmp1990 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1991 = *$tmp1990;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1991));
org$pandalanguage$pandac$ASTNode* $tmp1992 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1992));
*(&local15) = $tmp1991;
org$pandalanguage$pandac$FixedArray** $tmp1993 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1994 = *$tmp1993;
*(&local16) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1994));
org$pandalanguage$pandac$FixedArray* $tmp1995 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1995));
*(&local16) = $tmp1994;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp1996 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param2->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp1997 = *$tmp1996;
*(&local17) = $tmp1997;
panda$core$String** $tmp1998 = (panda$core$String**) (param2->$data + 40);
panda$core$String* $tmp1999 = *$tmp1998;
*(&local18) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1999));
panda$core$String* $tmp2000 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2000));
*(&local18) = $tmp1999;
org$pandalanguage$pandac$FixedArray** $tmp2001 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp2002 = *$tmp2001;
*(&local19) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2002));
org$pandalanguage$pandac$FixedArray* $tmp2003 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2003));
*(&local19) = $tmp2002;
org$pandalanguage$pandac$FixedArray** $tmp2004 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp2005 = *$tmp2004;
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2005));
org$pandalanguage$pandac$FixedArray* $tmp2006 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2006));
*(&local20) = $tmp2005;
org$pandalanguage$pandac$FixedArray** $tmp2007 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 64);
org$pandalanguage$pandac$FixedArray* $tmp2008 = *$tmp2007;
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2008));
org$pandalanguage$pandac$FixedArray* $tmp2009 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2009));
*(&local21) = $tmp2008;
// line 595
panda$io$File** $tmp2010 = &param1->source;
panda$io$File* $tmp2011 = *$tmp2010;
panda$collections$MapView** $tmp2012 = &param1->aliases;
panda$collections$MapView* $tmp2013 = *$tmp2012;
panda$core$String** $tmp2014 = &param1->name;
panda$core$String* $tmp2015 = *$tmp2014;
org$pandalanguage$pandac$Position $tmp2016 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp2017 = *(&local15);
org$pandalanguage$pandac$FixedArray* $tmp2018 = *(&local16);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2019 = *(&local17);
panda$core$String* $tmp2020 = *(&local18);
org$pandalanguage$pandac$FixedArray* $tmp2021 = *(&local19);
org$pandalanguage$pandac$FixedArray* $tmp2022 = *(&local20);
org$pandalanguage$pandac$FixedArray* $tmp2023 = *(&local21);
org$pandalanguage$pandac$ClassDecl* $tmp2024 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp2011, $tmp2013, $tmp2015, $tmp2016, $tmp2017, $tmp2018, $tmp2019, $tmp2020, $tmp2021, $tmp2022, $tmp2023);
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2024));
org$pandalanguage$pandac$ClassDecl* $tmp2025 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2025));
*(&local22) = $tmp2024;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2024));
// unreffing REF($308:org.pandalanguage.pandac.ClassDecl?)
// line 597
org$pandalanguage$pandac$ClassDecl* $tmp2026 = *(&local22);
panda$core$Bit $tmp2027 = panda$core$Bit$init$builtin_bit($tmp2026 != NULL);
bool $tmp2028 = $tmp2027.value;
if ($tmp2028) goto block14; else goto block15;
block14:;
// line 598
org$pandalanguage$pandac$ClassDecl* $tmp2029 = *(&local22);
panda$core$Bit $tmp2030 = panda$core$Bit$init$builtin_bit($tmp2029 != NULL);
bool $tmp2031 = $tmp2030.value;
if ($tmp2031) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp2032 = (panda$core$Int64) {598};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2033, $tmp2032, &$s2034);
abort(); // unreachable
block16:;
panda$core$Weak* $tmp2035 = (panda$core$Weak*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp2035, ((panda$core$Object*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2035));
panda$core$Weak** $tmp2036 = &$tmp2029->owner;
panda$core$Weak* $tmp2037 = *$tmp2036;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2037));
panda$core$Weak** $tmp2038 = &$tmp2029->owner;
*$tmp2038 = $tmp2035;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2035));
// unreffing REF($336:panda.core.Weak<org.pandalanguage.pandac.ClassDecl?>)
// line 599
panda$collections$Array** $tmp2039 = &param1->classes;
panda$collections$Array* $tmp2040 = *$tmp2039;
org$pandalanguage$pandac$ClassDecl* $tmp2041 = *(&local22);
panda$core$Bit $tmp2042 = panda$core$Bit$init$builtin_bit($tmp2041 != NULL);
bool $tmp2043 = $tmp2042.value;
if ($tmp2043) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp2044 = (panda$core$Int64) {599};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2045, $tmp2044, &$s2046);
abort(); // unreachable
block18:;
panda$collections$Array$add$panda$collections$Array$T($tmp2040, ((panda$core$Object*) $tmp2041));
// line 600
org$pandalanguage$pandac$ClassDecl* $tmp2047 = *(&local22);
panda$core$Bit $tmp2048 = panda$core$Bit$init$builtin_bit($tmp2047 != NULL);
bool $tmp2049 = $tmp2048.value;
if ($tmp2049) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp2050 = (panda$core$Int64) {600};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2051, $tmp2050, &$s2052);
abort(); // unreachable
block20:;
panda$core$String** $tmp2053 = &$tmp2047->name;
panda$core$String* $tmp2054 = *$tmp2053;
panda$core$String** $tmp2055 = &param1->name;
panda$core$String* $tmp2056 = *$tmp2055;
panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2056, &$s2058);
panda$core$Bit $tmp2059 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp2054, $tmp2057);
bool $tmp2060 = $tmp2059.value;
if ($tmp2060) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp2061 = (panda$core$Int64) {600};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2062, $tmp2061);
abort(); // unreachable
block22:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2057));
// unreffing REF($380:panda.core.String)
// line 601
org$pandalanguage$pandac$SymbolTable** $tmp2063 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2064 = *$tmp2063;
org$pandalanguage$pandac$Alias* $tmp2065 = (org$pandalanguage$pandac$Alias*) frostObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
org$pandalanguage$pandac$ClassDecl* $tmp2066 = *(&local22);
panda$core$Bit $tmp2067 = panda$core$Bit$init$builtin_bit($tmp2066 != NULL);
bool $tmp2068 = $tmp2067.value;
if ($tmp2068) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp2069 = (panda$core$Int64) {601};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2070, $tmp2069, &$s2071);
abort(); // unreachable
block24:;
panda$core$String** $tmp2072 = &$tmp2066->name;
panda$core$String* $tmp2073 = *$tmp2072;
panda$core$String** $tmp2074 = &param1->name;
panda$core$String* $tmp2075 = *$tmp2074;
panda$core$Int64 $tmp2076 = panda$core$String$get_length$R$panda$core$Int64($tmp2075);
panda$core$Int64 $tmp2077 = (panda$core$Int64) {1};
int64_t $tmp2078 = $tmp2076.value;
int64_t $tmp2079 = $tmp2077.value;
int64_t $tmp2080 = $tmp2078 + $tmp2079;
panda$core$Int64 $tmp2081 = (panda$core$Int64) {$tmp2080};
panda$core$Bit $tmp2082 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2083 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp2081, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp2082);
panda$core$String* $tmp2084 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp2073, $tmp2083);
org$pandalanguage$pandac$ClassDecl* $tmp2085 = *(&local22);
panda$core$Bit $tmp2086 = panda$core$Bit$init$builtin_bit($tmp2085 != NULL);
bool $tmp2087 = $tmp2086.value;
if ($tmp2087) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp2088 = (panda$core$Int64) {601};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2089, $tmp2088, &$s2090);
abort(); // unreachable
block26:;
panda$core$String** $tmp2091 = &$tmp2085->name;
panda$core$String* $tmp2092 = *$tmp2091;
org$pandalanguage$pandac$Position $tmp2093 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp2065, $tmp2084, $tmp2092, $tmp2093);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2064, ((org$pandalanguage$pandac$Symbol*) $tmp2065));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2084));
// unreffing REF($416:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2065));
// unreffing REF($393:org.pandalanguage.pandac.Alias)
// line 603
org$pandalanguage$pandac$ClassDecl* $tmp2094 = *(&local22);
panda$core$Bit $tmp2095 = panda$core$Bit$init$builtin_bit($tmp2094 != NULL);
bool $tmp2096 = $tmp2095.value;
if ($tmp2096) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp2097 = (panda$core$Int64) {603};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2098, $tmp2097, &$s2099);
abort(); // unreachable
block28:;
org$pandalanguage$pandac$SymbolTable** $tmp2100 = &$tmp2094->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2101 = *$tmp2100;
org$pandalanguage$pandac$Alias* $tmp2102 = (org$pandalanguage$pandac$Alias*) frostObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
panda$core$String* $tmp2103 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(param1);
panda$core$String** $tmp2104 = &param1->name;
panda$core$String* $tmp2105 = *$tmp2104;
org$pandalanguage$pandac$Position $tmp2106 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp2102, $tmp2103, $tmp2105, $tmp2106);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2101, ((org$pandalanguage$pandac$Symbol*) $tmp2102));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2103));
// unreffing REF($451:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2102));
// unreffing REF($450:org.pandalanguage.pandac.Alias)
goto block15;
block15:;
org$pandalanguage$pandac$ClassDecl* $tmp2107 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
// unreffing inner
*(&local22) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2108 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2108));
// unreffing members
*(&local21) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2109 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2109));
// unreffing supertypes
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2110 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2110));
// unreffing generics
*(&local19) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2111 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2111));
// unreffing name
*(&local18) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2112 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2112));
// unreffing annotations
*(&local16) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2113 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2113));
// unreffing dc
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp2114 = (panda$core$Int64) {10};
panda$core$Bit $tmp2115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1897, $tmp2114);
bool $tmp2116 = $tmp2115.value;
if ($tmp2116) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp2117 = (org$pandalanguage$pandac$Position*) (param2->$data + 0);
org$pandalanguage$pandac$Position $tmp2118 = *$tmp2117;
*(&local23) = $tmp2118;
org$pandalanguage$pandac$ASTNode** $tmp2119 = (org$pandalanguage$pandac$ASTNode**) (param2->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2120 = *$tmp2119;
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2120));
org$pandalanguage$pandac$ASTNode* $tmp2121 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2121));
*(&local24) = $tmp2120;
panda$core$String** $tmp2122 = (panda$core$String**) (param2->$data + 24);
panda$core$String* $tmp2123 = *$tmp2122;
*(&local25) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2123));
panda$core$String* $tmp2124 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2124));
*(&local25) = $tmp2123;
org$pandalanguage$pandac$FixedArray** $tmp2125 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp2126 = *$tmp2125;
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2126));
org$pandalanguage$pandac$FixedArray* $tmp2127 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2127));
*(&local26) = $tmp2126;
// line 607
org$pandalanguage$pandac$Position $tmp2128 = *(&local23);
org$pandalanguage$pandac$ASTNode* $tmp2129 = *(&local24);
panda$core$String* $tmp2130 = *(&local25);
org$pandalanguage$pandac$FixedArray* $tmp2131 = *(&local26);
org$pandalanguage$pandac$Scanner$scanChoiceCase$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0, param1, $tmp2128, $tmp2129, $tmp2130, $tmp2131);
org$pandalanguage$pandac$FixedArray* $tmp2132 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2132));
// unreffing fields
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2133 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2133));
// unreffing name
*(&local25) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2134 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2134));
// unreffing dc
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block31:;
// line 610
panda$core$Bit $tmp2135 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2136 = $tmp2135.value;
if ($tmp2136) goto block32; else goto block33;
block33:;
panda$core$Int64 $tmp2137 = (panda$core$Int64) {610};
panda$core$String* $tmp2138 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2139, ((panda$core$Object*) param2));
panda$core$String* $tmp2140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2138, &$s2141);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2142, $tmp2137, $tmp2140);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2140));
// unreffing REF($564:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2138));
// unreffing REF($563:panda.core.String)
abort(); // unreachable
block32:;
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
panda$core$Bit $tmp2143 = panda$core$Bit$init$builtin_bit(param3 == NULL);
bool $tmp2144 = $tmp2143.value;
if ($tmp2144) goto block1; else goto block3;
block1:;
// line 620
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp2145 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2145));
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block3:;
// line 1
// line 623
panda$core$Bit $tmp2146 = panda$core$Bit$init$builtin_bit(param3 != NULL);
bool $tmp2147 = $tmp2146.value;
if ($tmp2147) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp2148 = (panda$core$Int64) {623};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2149, $tmp2148, &$s2150);
abort(); // unreachable
block4:;
panda$core$Int64* $tmp2151 = &param3->$rawValue;
panda$core$Int64 $tmp2152 = *$tmp2151;
panda$core$Int64 $tmp2153 = (panda$core$Int64) {41};
panda$core$Bit $tmp2154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2152, $tmp2153);
bool $tmp2155 = $tmp2154.value;
if ($tmp2155) goto block7; else goto block8;
block7:;
org$pandalanguage$pandac$Position* $tmp2156 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp2157 = *$tmp2156;
*(&local1) = $tmp2157;
panda$core$String** $tmp2158 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp2159 = *$tmp2158;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2159));
panda$core$String* $tmp2160 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2160));
*(&local2) = $tmp2159;
// line 625
panda$core$String* $tmp2161 = *(&local2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2161));
panda$core$String* $tmp2162 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2162));
*(&local0) = $tmp2161;
panda$core$String* $tmp2163 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2163));
// unreffing text
*(&local2) = ((panda$core$String*) NULL);
goto block6;
block8:;
// line 628
panda$core$Bit $tmp2164 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2165 = $tmp2164.value;
if ($tmp2165) goto block9; else goto block10;
block10:;
panda$core$Int64 $tmp2166 = (panda$core$Int64) {628};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2167, $tmp2166);
abort(); // unreachable
block9:;
goto block6;
block6:;
goto block2;
block2:;
// line 632
panda$collections$Array* $tmp2168 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2168);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2168));
panda$collections$Array* $tmp2169 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2169));
*(&local3) = $tmp2168;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2168));
// unreffing REF($68:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 633
panda$core$Bit $tmp2170 = panda$core$Bit$init$builtin_bit(param5 != NULL);
bool $tmp2171 = $tmp2170.value;
if ($tmp2171) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp2172 = (panda$core$Int64) {633};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2173, $tmp2172, &$s2174);
abort(); // unreachable
block11:;
ITable* $tmp2175 = ((panda$collections$Iterable*) param5)->$class->itable;
while ($tmp2175->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2175 = $tmp2175->next;
}
$fn2177 $tmp2176 = $tmp2175->methods[0];
panda$collections$Iterator* $tmp2178 = $tmp2176(((panda$collections$Iterable*) param5));
goto block13;
block13:;
ITable* $tmp2179 = $tmp2178->$class->itable;
while ($tmp2179->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2179 = $tmp2179->next;
}
$fn2181 $tmp2180 = $tmp2179->methods[0];
panda$core$Bit $tmp2182 = $tmp2180($tmp2178);
bool $tmp2183 = $tmp2182.value;
if ($tmp2183) goto block15; else goto block14;
block14:;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2184 = $tmp2178->$class->itable;
while ($tmp2184->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2184 = $tmp2184->next;
}
$fn2186 $tmp2185 = $tmp2184->methods[1];
panda$core$Object* $tmp2187 = $tmp2185($tmp2178);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2187)));
org$pandalanguage$pandac$ASTNode* $tmp2188 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2188));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) $tmp2187);
// line 634
panda$collections$Array* $tmp2189 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp2190 = *(&local4);
org$pandalanguage$pandac$Type* $tmp2191 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2190);
panda$collections$Array$add$panda$collections$Array$T($tmp2189, ((panda$core$Object*) $tmp2191));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2191));
// unreffing REF($115:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp2187);
// unreffing REF($103:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2192 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2192));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block13;
block15:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2178));
// unreffing REF($92:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 636
org$pandalanguage$pandac$ChoiceCase* $tmp2193 = (org$pandalanguage$pandac$ChoiceCase*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceCase$class);
panda$core$String* $tmp2194 = *(&local0);
panda$collections$Array** $tmp2195 = &param1->choiceCases;
panda$collections$Array* $tmp2196 = *$tmp2195;
ITable* $tmp2197 = ((panda$collections$CollectionView*) $tmp2196)->$class->itable;
while ($tmp2197->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2197 = $tmp2197->next;
}
$fn2199 $tmp2198 = $tmp2197->methods[0];
panda$core$Int64 $tmp2200 = $tmp2198(((panda$collections$CollectionView*) $tmp2196));
panda$collections$Array* $tmp2201 = *(&local3);
org$pandalanguage$pandac$ChoiceCase$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2193, param1, param2, param4, $tmp2194, $tmp2200, ((panda$collections$ListView*) $tmp2201));
*(&local5) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2193));
org$pandalanguage$pandac$ChoiceCase* $tmp2202 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2202));
*(&local5) = $tmp2193;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2193));
// unreffing REF($134:org.pandalanguage.pandac.ChoiceCase)
// line 638
panda$collections$Array** $tmp2203 = &param1->choiceCases;
panda$collections$Array* $tmp2204 = *$tmp2203;
org$pandalanguage$pandac$ChoiceCase* $tmp2205 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp2204, ((panda$core$Object*) $tmp2205));
// line 639
org$pandalanguage$pandac$SymbolTable** $tmp2206 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2207 = *$tmp2206;
org$pandalanguage$pandac$ChoiceCase* $tmp2208 = *(&local5);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2207, ((org$pandalanguage$pandac$Symbol*) $tmp2208));
org$pandalanguage$pandac$ChoiceCase* $tmp2209 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2209));
// unreffing entry
*(&local5) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$collections$Array* $tmp2210 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2210));
// unreffing fields
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2211 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2211));
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
ITable* $tmp2213 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp2213->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2213 = $tmp2213->next;
}
$fn2215 $tmp2214 = $tmp2213->methods[1];
panda$core$Bit $tmp2216 = $tmp2214(((panda$core$Equatable*) param3), ((panda$core$Equatable*) &$s2212));
bool $tmp2217 = $tmp2216.value;
if ($tmp2217) goto block1; else goto block3;
block1:;
// line 648
panda$core$String* $tmp2218 = panda$core$String$convert$R$panda$core$String(param3);
panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2218, &$s2220);
panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2219, param8);
panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2221, &$s2223);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2222));
panda$core$String* $tmp2224 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2224));
*(&local0) = $tmp2222;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2222));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2221));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2219));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2218));
// unreffing REF($11:panda.core.String)
goto block2;
block3:;
// line 1
// line 651
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
panda$core$String* $tmp2225 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2225));
*(&local0) = param8;
goto block2;
block2:;
// line 653
*(&local1) = ((panda$core$String*) NULL);
// line 655
panda$core$Bit $tmp2226 = panda$core$Bit$init$builtin_bit(param5 == NULL);
bool $tmp2227 = $tmp2226.value;
if ($tmp2227) goto block4; else goto block6;
block4:;
// line 656
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp2228 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2228));
*(&local1) = ((panda$core$String*) NULL);
goto block5;
block6:;
// line 1
// line 659
panda$core$Bit $tmp2229 = panda$core$Bit$init$builtin_bit(param5 != NULL);
bool $tmp2230 = $tmp2229.value;
if ($tmp2230) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp2231 = (panda$core$Int64) {659};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2232, $tmp2231, &$s2233);
abort(); // unreachable
block7:;
panda$core$Int64* $tmp2234 = &param5->$rawValue;
panda$core$Int64 $tmp2235 = *$tmp2234;
panda$core$Int64 $tmp2236 = (panda$core$Int64) {41};
panda$core$Bit $tmp2237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2235, $tmp2236);
bool $tmp2238 = $tmp2237.value;
if ($tmp2238) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp2239 = (org$pandalanguage$pandac$Position*) (param5->$data + 0);
org$pandalanguage$pandac$Position $tmp2240 = *$tmp2239;
*(&local2) = $tmp2240;
panda$core$String** $tmp2241 = (panda$core$String**) (param5->$data + 16);
panda$core$String* $tmp2242 = *$tmp2241;
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2242));
panda$core$String* $tmp2243 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2243));
*(&local3) = $tmp2242;
// line 661
panda$core$String* $tmp2244 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2244));
panda$core$String* $tmp2245 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2245));
*(&local1) = $tmp2244;
panda$core$String* $tmp2246 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2246));
// unreffing text
*(&local3) = ((panda$core$String*) NULL);
goto block9;
block11:;
// line 664
panda$core$Bit $tmp2247 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2248 = $tmp2247.value;
if ($tmp2248) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp2249 = (panda$core$Int64) {664};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2250, $tmp2249);
abort(); // unreachable
block12:;
goto block9;
block9:;
goto block5;
block5:;
// line 668
org$pandalanguage$pandac$Annotations* $tmp2251 = org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(param0, param6);
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2251));
org$pandalanguage$pandac$Annotations* $tmp2252 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2252));
*(&local4) = $tmp2251;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2251));
// unreffing REF($111:org.pandalanguage.pandac.Annotations)
// line 669
panda$collections$Array* $tmp2253 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2253);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2253));
panda$collections$Array* $tmp2254 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2254));
*(&local5) = $tmp2253;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2253));
// unreffing REF($123:panda.collections.Array<org.pandalanguage.pandac.ClassDecl.GenericParameter>)
// line 670
panda$core$Bit $tmp2255 = panda$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2256 = $tmp2255.value;
if ($tmp2256) goto block14; else goto block15;
block14:;
// line 671
panda$core$Bit $tmp2257 = panda$core$Bit$init$builtin_bit(param9 != NULL);
bool $tmp2258 = $tmp2257.value;
if ($tmp2258) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp2259 = (panda$core$Int64) {671};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2260, $tmp2259, &$s2261);
abort(); // unreachable
block16:;
ITable* $tmp2262 = ((panda$collections$Iterable*) param9)->$class->itable;
while ($tmp2262->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2262 = $tmp2262->next;
}
$fn2264 $tmp2263 = $tmp2262->methods[0];
panda$collections$Iterator* $tmp2265 = $tmp2263(((panda$collections$Iterable*) param9));
goto block18;
block18:;
ITable* $tmp2266 = $tmp2265->$class->itable;
while ($tmp2266->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2266 = $tmp2266->next;
}
$fn2268 $tmp2267 = $tmp2266->methods[0];
panda$core$Bit $tmp2269 = $tmp2267($tmp2265);
bool $tmp2270 = $tmp2269.value;
if ($tmp2270) goto block20; else goto block19;
block19:;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2271 = $tmp2265->$class->itable;
while ($tmp2271->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2271 = $tmp2271->next;
}
$fn2273 $tmp2272 = $tmp2271->methods[1];
panda$core$Object* $tmp2274 = $tmp2272($tmp2265);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2274)));
org$pandalanguage$pandac$ASTNode* $tmp2275 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2275));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) $tmp2274);
// line 672
*(&local7) = ((panda$core$String*) NULL);
// line 673
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
// line 674
org$pandalanguage$pandac$ASTNode* $tmp2276 = *(&local6);
panda$core$Int64* $tmp2277 = &$tmp2276->$rawValue;
panda$core$Int64 $tmp2278 = *$tmp2277;
panda$core$Int64 $tmp2279 = (panda$core$Int64) {22};
panda$core$Bit $tmp2280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2278, $tmp2279);
bool $tmp2281 = $tmp2280.value;
if ($tmp2281) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp2282 = (org$pandalanguage$pandac$Position*) ($tmp2276->$data + 0);
org$pandalanguage$pandac$Position $tmp2283 = *$tmp2282;
panda$core$String** $tmp2284 = (panda$core$String**) ($tmp2276->$data + 16);
panda$core$String* $tmp2285 = *$tmp2284;
*(&local9) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2285));
panda$core$String* $tmp2286 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2286));
*(&local9) = $tmp2285;
// line 676
panda$core$String* $tmp2287 = *(&local9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2287));
panda$core$String* $tmp2288 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2288));
*(&local7) = $tmp2287;
// line 677
org$pandalanguage$pandac$Type* $tmp2289 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2289));
org$pandalanguage$pandac$Type* $tmp2290 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2290));
*(&local8) = $tmp2289;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2289));
// unreffing REF($203:org.pandalanguage.pandac.Type)
panda$core$String* $tmp2291 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2291));
// unreffing id
*(&local9) = ((panda$core$String*) NULL);
goto block21;
block23:;
panda$core$Int64 $tmp2292 = (panda$core$Int64) {47};
panda$core$Bit $tmp2293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2278, $tmp2292);
bool $tmp2294 = $tmp2293.value;
if ($tmp2294) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp2295 = (org$pandalanguage$pandac$Position*) ($tmp2276->$data + 0);
org$pandalanguage$pandac$Position $tmp2296 = *$tmp2295;
panda$core$String** $tmp2297 = (panda$core$String**) ($tmp2276->$data + 16);
panda$core$String* $tmp2298 = *$tmp2297;
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2298));
panda$core$String* $tmp2299 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2299));
*(&local10) = $tmp2298;
org$pandalanguage$pandac$ASTNode** $tmp2300 = (org$pandalanguage$pandac$ASTNode**) ($tmp2276->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2301 = *$tmp2300;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2301));
org$pandalanguage$pandac$ASTNode* $tmp2302 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2302));
*(&local11) = $tmp2301;
// line 680
panda$core$String* $tmp2303 = *(&local10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2303));
panda$core$String* $tmp2304 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2304));
*(&local7) = $tmp2303;
// line 681
org$pandalanguage$pandac$ASTNode* $tmp2305 = *(&local11);
panda$core$Bit $tmp2306 = panda$core$Bit$init$builtin_bit($tmp2305 != NULL);
bool $tmp2307 = $tmp2306.value;
if ($tmp2307) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp2308 = (panda$core$Int64) {681};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2309, $tmp2308, &$s2310);
abort(); // unreachable
block26:;
org$pandalanguage$pandac$Type* $tmp2311 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2305);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2311));
org$pandalanguage$pandac$Type* $tmp2312 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2312));
*(&local8) = $tmp2311;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2311));
// unreffing REF($261:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$ASTNode* $tmp2313 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2313));
// unreffing type
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2314 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2314));
// unreffing id
*(&local10) = ((panda$core$String*) NULL);
goto block21;
block25:;
// line 684
panda$core$Bit $tmp2315 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2316 = $tmp2315.value;
if ($tmp2316) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp2317 = (panda$core$Int64) {684};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2318, $tmp2317);
abort(); // unreachable
block28:;
goto block21;
block21:;
// line 687
panda$collections$Array* $tmp2319 = *(&local5);
org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp2320 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) frostObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
org$pandalanguage$pandac$ASTNode* $tmp2321 = *(&local6);
$fn2323 $tmp2322 = ($fn2323) $tmp2321->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2324 = $tmp2322($tmp2321);
panda$core$String* $tmp2325 = *(&local0);
panda$core$String* $tmp2326 = *(&local7);
org$pandalanguage$pandac$Type* $tmp2327 = *(&local8);
org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp2320, $tmp2324, $tmp2325, $tmp2326, $tmp2327);
panda$collections$Array$add$panda$collections$Array$T($tmp2319, ((panda$core$Object*) $tmp2320));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2320));
// unreffing REF($293:org.pandalanguage.pandac.ClassDecl.GenericParameter)
org$pandalanguage$pandac$Type* $tmp2328 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2328));
// unreffing bound
*(&local8) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$String* $tmp2329 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2329));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2274);
// unreffing REF($163:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2330 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2330));
// unreffing p
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block18;
block20:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2265));
// unreffing REF($152:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block15;
block15:;
// line 690
panda$collections$Array* $tmp2331 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2331);
*(&local12) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2331));
panda$collections$Array* $tmp2332 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2332));
*(&local12) = $tmp2331;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2331));
// unreffing REF($330:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 691
panda$core$Bit $tmp2333 = panda$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2334 = $tmp2333.value;
if ($tmp2334) goto block30; else goto block31;
block30:;
// line 692
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2335;
$tmp2335 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2335->value = param7;
panda$core$Int64 $tmp2336 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2337 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2336);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2338;
$tmp2338 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2338->value = $tmp2337;
ITable* $tmp2339 = ((panda$core$Equatable*) $tmp2335)->$class->itable;
while ($tmp2339->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2339 = $tmp2339->next;
}
$fn2341 $tmp2340 = $tmp2339->methods[0];
panda$core$Bit $tmp2342 = $tmp2340(((panda$core$Equatable*) $tmp2335), ((panda$core$Equatable*) $tmp2338));
bool $tmp2343 = $tmp2342.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2338)));
// unreffing REF($353:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2335)));
// unreffing REF($349:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
if ($tmp2343) goto block32; else goto block33;
block32:;
// line 693
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param4, &$s2344);
goto block33;
block33:;
// line 695
panda$core$Bit $tmp2345 = panda$core$Bit$init$builtin_bit(param10 != NULL);
bool $tmp2346 = $tmp2345.value;
if ($tmp2346) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp2347 = (panda$core$Int64) {695};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2348, $tmp2347, &$s2349);
abort(); // unreachable
block34:;
ITable* $tmp2350 = ((panda$collections$Iterable*) param10)->$class->itable;
while ($tmp2350->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2350 = $tmp2350->next;
}
$fn2352 $tmp2351 = $tmp2350->methods[0];
panda$collections$Iterator* $tmp2353 = $tmp2351(((panda$collections$Iterable*) param10));
goto block36;
block36:;
ITable* $tmp2354 = $tmp2353->$class->itable;
while ($tmp2354->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2354 = $tmp2354->next;
}
$fn2356 $tmp2355 = $tmp2354->methods[0];
panda$core$Bit $tmp2357 = $tmp2355($tmp2353);
bool $tmp2358 = $tmp2357.value;
if ($tmp2358) goto block38; else goto block37;
block37:;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2359 = $tmp2353->$class->itable;
while ($tmp2359->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2359 = $tmp2359->next;
}
$fn2361 $tmp2360 = $tmp2359->methods[1];
panda$core$Object* $tmp2362 = $tmp2360($tmp2353);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2362)));
org$pandalanguage$pandac$ASTNode* $tmp2363 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2363));
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) $tmp2362);
// line 696
panda$collections$Array* $tmp2364 = *(&local12);
org$pandalanguage$pandac$ASTNode* $tmp2365 = *(&local13);
org$pandalanguage$pandac$Type* $tmp2366 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp2365);
panda$collections$Array$add$panda$collections$Array$T($tmp2364, ((panda$core$Object*) $tmp2366));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2366));
// unreffing REF($401:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp2362);
// unreffing REF($389:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2367 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2367));
// unreffing s
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block38:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2353));
// unreffing REF($378:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block31;
block31:;
// line 699
org$pandalanguage$pandac$ClassDecl* $tmp2368 = (org$pandalanguage$pandac$ClassDecl*) frostObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
panda$core$String* $tmp2369 = *(&local1);
org$pandalanguage$pandac$Annotations* $tmp2370 = *(&local4);
panda$core$String* $tmp2371 = *(&local0);
panda$collections$Array* $tmp2372 = *(&local12);
panda$collections$Array* $tmp2373 = *(&local5);
panda$core$Weak** $tmp2374 = &param0->compiler;
panda$core$Weak* $tmp2375 = *$tmp2374;
panda$core$Object* $tmp2376 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2375);
org$pandalanguage$pandac$SymbolTable** $tmp2377 = &((org$pandalanguage$pandac$Compiler*) $tmp2376)->root;
org$pandalanguage$pandac$SymbolTable* $tmp2378 = *$tmp2377;
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2368, param1, param4, param2, $tmp2369, $tmp2370, param7, $tmp2371, ((panda$collections$ListView*) $tmp2372), $tmp2373, $tmp2378);
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2368));
org$pandalanguage$pandac$ClassDecl* $tmp2379 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2379));
*(&local14) = $tmp2368;
panda$core$Panda$unref$panda$core$Object$Q($tmp2376);
// unreffing REF($431:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2368));
// unreffing REF($421:org.pandalanguage.pandac.ClassDecl)
// line 701
panda$core$Weak** $tmp2380 = &param0->compiler;
panda$core$Weak* $tmp2381 = *$tmp2380;
panda$core$Object* $tmp2382 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2381);
panda$collections$Stack** $tmp2383 = &((org$pandalanguage$pandac$Compiler*) $tmp2382)->currentClass;
panda$collections$Stack* $tmp2384 = *$tmp2383;
org$pandalanguage$pandac$ClassDecl* $tmp2385 = *(&local14);
panda$collections$Stack$push$panda$collections$Stack$T($tmp2384, ((panda$core$Object*) $tmp2385));
panda$core$Panda$unref$panda$core$Object$Q($tmp2382);
// unreffing REF($453:panda.core.Weak.T)
// line 702
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2386;
$tmp2386 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2386->value = param7;
panda$core$Int64 $tmp2387 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2388 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2387);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2389;
$tmp2389 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2389->value = $tmp2388;
ITable* $tmp2390 = ((panda$core$Equatable*) $tmp2386)->$class->itable;
while ($tmp2390->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2390 = $tmp2390->next;
}
$fn2392 $tmp2391 = $tmp2390->methods[0];
panda$core$Bit $tmp2393 = $tmp2391(((panda$core$Equatable*) $tmp2386), ((panda$core$Equatable*) $tmp2389));
bool $tmp2394 = $tmp2393.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2389)));
// unreffing REF($469:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2386)));
// unreffing REF($465:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
if ($tmp2394) goto block39; else goto block40;
block39:;
// line 703
org$pandalanguage$pandac$FieldDecl* $tmp2395 = (org$pandalanguage$pandac$FieldDecl*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2396 = *(&local14);
org$pandalanguage$pandac$ClassDecl* $tmp2397 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2398 = &$tmp2397->position;
org$pandalanguage$pandac$Position $tmp2399 = *$tmp2398;
org$pandalanguage$pandac$Annotations* $tmp2400 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2401 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2400, $tmp2401);
panda$core$Int64 $tmp2402 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp2403 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp2402);
org$pandalanguage$pandac$Type* $tmp2404 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp2395, $tmp2396, $tmp2399, ((panda$core$String*) NULL), $tmp2400, $tmp2403, &$s2405, $tmp2404, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2395));
org$pandalanguage$pandac$FieldDecl* $tmp2406 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2406));
*(&local15) = $tmp2395;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2404));
// unreffing REF($491:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2400));
// unreffing REF($486:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2395));
// unreffing REF($481:org.pandalanguage.pandac.FieldDecl)
// line 706
org$pandalanguage$pandac$ClassDecl* $tmp2407 = *(&local14);
panda$collections$Array** $tmp2408 = &$tmp2407->fields;
panda$collections$Array* $tmp2409 = *$tmp2408;
org$pandalanguage$pandac$FieldDecl* $tmp2410 = *(&local15);
panda$collections$Array$add$panda$collections$Array$T($tmp2409, ((panda$core$Object*) $tmp2410));
// line 707
org$pandalanguage$pandac$ClassDecl* $tmp2411 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2412 = &$tmp2411->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2413 = *$tmp2412;
org$pandalanguage$pandac$FieldDecl* $tmp2414 = *(&local15);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2413, ((org$pandalanguage$pandac$Symbol*) $tmp2414));
// line 708
org$pandalanguage$pandac$FieldDecl* $tmp2415 = (org$pandalanguage$pandac$FieldDecl*) frostObjectAlloc(112, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2416 = *(&local14);
org$pandalanguage$pandac$ClassDecl* $tmp2417 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2418 = &$tmp2417->position;
org$pandalanguage$pandac$Position $tmp2419 = *$tmp2418;
org$pandalanguage$pandac$Annotations* $tmp2420 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2421 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2420, $tmp2421);
panda$core$Int64 $tmp2422 = (panda$core$Int64) {1};
org$pandalanguage$pandac$FieldDecl$Kind $tmp2423 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp2422);
org$pandalanguage$pandac$Type* $tmp2424 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp2415, $tmp2416, $tmp2419, ((panda$core$String*) NULL), $tmp2420, $tmp2423, &$s2425, $tmp2424, ((org$pandalanguage$pandac$ASTNode*) NULL));
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2415));
org$pandalanguage$pandac$FieldDecl* $tmp2426 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2426));
*(&local16) = $tmp2415;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2424));
// unreffing REF($535:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2420));
// unreffing REF($530:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2415));
// unreffing REF($525:org.pandalanguage.pandac.FieldDecl)
// line 711
org$pandalanguage$pandac$ClassDecl* $tmp2427 = *(&local14);
panda$collections$Array** $tmp2428 = &$tmp2427->fields;
panda$collections$Array* $tmp2429 = *$tmp2428;
org$pandalanguage$pandac$FieldDecl* $tmp2430 = *(&local16);
panda$collections$Array$add$panda$collections$Array$T($tmp2429, ((panda$core$Object*) $tmp2430));
// line 712
org$pandalanguage$pandac$ClassDecl* $tmp2431 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2432 = &$tmp2431->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2433 = *$tmp2432;
org$pandalanguage$pandac$FieldDecl* $tmp2434 = *(&local16);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2433, ((org$pandalanguage$pandac$Symbol*) $tmp2434));
org$pandalanguage$pandac$FieldDecl* $tmp2435 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2435));
// unreffing data
*(&local16) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
org$pandalanguage$pandac$FieldDecl* $tmp2436 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2436));
// unreffing rawValue
*(&local15) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block40;
block40:;
// line 714
ITable* $tmp2437 = ((panda$collections$Iterable*) param11)->$class->itable;
while ($tmp2437->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2437 = $tmp2437->next;
}
$fn2439 $tmp2438 = $tmp2437->methods[0];
panda$collections$Iterator* $tmp2440 = $tmp2438(((panda$collections$Iterable*) param11));
goto block41;
block41:;
ITable* $tmp2441 = $tmp2440->$class->itable;
while ($tmp2441->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2441 = $tmp2441->next;
}
$fn2443 $tmp2442 = $tmp2441->methods[0];
panda$core$Bit $tmp2444 = $tmp2442($tmp2440);
bool $tmp2445 = $tmp2444.value;
if ($tmp2445) goto block43; else goto block42;
block42:;
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2446 = $tmp2440->$class->itable;
while ($tmp2446->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2446 = $tmp2446->next;
}
$fn2448 $tmp2447 = $tmp2446->methods[1];
panda$core$Object* $tmp2449 = $tmp2447($tmp2440);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2449)));
org$pandalanguage$pandac$ASTNode* $tmp2450 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2450));
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) $tmp2449);
// line 715
org$pandalanguage$pandac$ASTNode* $tmp2451 = *(&local17);
panda$core$Int64* $tmp2452 = &$tmp2451->$rawValue;
panda$core$Int64 $tmp2453 = *$tmp2452;
panda$core$Int64 $tmp2454 = (panda$core$Int64) {29};
panda$core$Bit $tmp2455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2453, $tmp2454);
bool $tmp2456 = $tmp2455.value;
if ($tmp2456) goto block45; else goto block46;
block45:;
org$pandalanguage$pandac$Position* $tmp2457 = (org$pandalanguage$pandac$Position*) ($tmp2451->$data + 0);
org$pandalanguage$pandac$Position $tmp2458 = *$tmp2457;
*(&local18) = $tmp2458;
org$pandalanguage$pandac$ASTNode** $tmp2459 = (org$pandalanguage$pandac$ASTNode**) ($tmp2451->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2460 = *$tmp2459;
org$pandalanguage$pandac$FixedArray** $tmp2461 = (org$pandalanguage$pandac$FixedArray**) ($tmp2451->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2462 = *$tmp2461;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2463 = (org$pandalanguage$pandac$MethodDecl$Kind*) ($tmp2451->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2464 = *$tmp2463;
*(&local19) = $tmp2464;
panda$core$String** $tmp2465 = (panda$core$String**) ($tmp2451->$data + 40);
panda$core$String* $tmp2466 = *$tmp2465;
org$pandalanguage$pandac$FixedArray** $tmp2467 = (org$pandalanguage$pandac$FixedArray**) ($tmp2451->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp2468 = *$tmp2467;
org$pandalanguage$pandac$FixedArray** $tmp2469 = (org$pandalanguage$pandac$FixedArray**) ($tmp2451->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp2470 = *$tmp2469;
org$pandalanguage$pandac$ASTNode** $tmp2471 = (org$pandalanguage$pandac$ASTNode**) ($tmp2451->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2472 = *$tmp2471;
org$pandalanguage$pandac$FixedArray** $tmp2473 = (org$pandalanguage$pandac$FixedArray**) ($tmp2451->$data + 72);
org$pandalanguage$pandac$FixedArray* $tmp2474 = *$tmp2473;
// line 717
org$pandalanguage$pandac$MethodDecl$Kind $tmp2475 = *(&local19);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2476;
$tmp2476 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2476->value = $tmp2475;
panda$core$Int64 $tmp2477 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2478 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2477);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2479;
$tmp2479 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2479->value = $tmp2478;
ITable* $tmp2480 = ((panda$core$Equatable*) $tmp2476)->$class->itable;
while ($tmp2480->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2480 = $tmp2480->next;
}
$fn2482 $tmp2481 = $tmp2480->methods[0];
panda$core$Bit $tmp2483 = $tmp2481(((panda$core$Equatable*) $tmp2476), ((panda$core$Equatable*) $tmp2479));
bool $tmp2484 = $tmp2483.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2479)));
// unreffing REF($636:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2476)));
// unreffing REF($632:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp2484) goto block47; else goto block48;
block47:;
// line 718
panda$core$Int64 $tmp2485 = param7.$rawValue;
panda$core$Int64 $tmp2486 = (panda$core$Int64) {0};
panda$core$Bit $tmp2487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2485, $tmp2486);
bool $tmp2488 = $tmp2487.value;
if ($tmp2488) goto block50; else goto block51;
block50:;
goto block49;
block51:;
panda$core$Int64 $tmp2489 = (panda$core$Int64) {1};
panda$core$Bit $tmp2490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2485, $tmp2489);
bool $tmp2491 = $tmp2490.value;
if ($tmp2491) goto block52; else goto block53;
block52:;
// line 723
org$pandalanguage$pandac$Position $tmp2492 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2492, &$s2493);
goto block49;
block53:;
panda$core$Int64 $tmp2494 = (panda$core$Int64) {2};
panda$core$Bit $tmp2495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2485, $tmp2494);
bool $tmp2496 = $tmp2495.value;
if ($tmp2496) goto block54; else goto block49;
block54:;
// line 726
org$pandalanguage$pandac$Position $tmp2497 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2497, &$s2498);
goto block49;
block49:;
goto block48;
block48:;
goto block44;
block46:;
goto block44;
block44:;
// line 735
org$pandalanguage$pandac$ClassDecl* $tmp2499 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp2500 = *(&local17);
org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(param0, $tmp2499, $tmp2500);
panda$core$Panda$unref$panda$core$Object$Q($tmp2449);
// unreffing REF($594:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2501 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2501));
// unreffing m
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block41;
block43:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2440));
// unreffing REF($583:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 737
panda$core$Bit $tmp2502 = panda$core$Bit$init$builtin_bit(false);
*(&local20) = $tmp2502;
// line 738
panda$core$Bit $tmp2503 = panda$core$Bit$init$builtin_bit(false);
*(&local21) = $tmp2503;
// line 739
org$pandalanguage$pandac$ClassDecl* $tmp2504 = *(&local14);
panda$collections$Array** $tmp2505 = &$tmp2504->methods;
panda$collections$Array* $tmp2506 = *$tmp2505;
ITable* $tmp2507 = ((panda$collections$Iterable*) $tmp2506)->$class->itable;
while ($tmp2507->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2507 = $tmp2507->next;
}
$fn2509 $tmp2508 = $tmp2507->methods[0];
panda$collections$Iterator* $tmp2510 = $tmp2508(((panda$collections$Iterable*) $tmp2506));
goto block55;
block55:;
ITable* $tmp2511 = $tmp2510->$class->itable;
while ($tmp2511->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2511 = $tmp2511->next;
}
$fn2513 $tmp2512 = $tmp2511->methods[0];
panda$core$Bit $tmp2514 = $tmp2512($tmp2510);
bool $tmp2515 = $tmp2514.value;
if ($tmp2515) goto block57; else goto block56;
block56:;
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
ITable* $tmp2516 = $tmp2510->$class->itable;
while ($tmp2516->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2516 = $tmp2516->next;
}
$fn2518 $tmp2517 = $tmp2516->methods[1];
panda$core$Object* $tmp2519 = $tmp2517($tmp2510);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2519)));
org$pandalanguage$pandac$MethodDecl* $tmp2520 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2520));
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) $tmp2519);
// line 740
org$pandalanguage$pandac$MethodDecl* $tmp2521 = *(&local22);
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2522 = &$tmp2521->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp2523 = *$tmp2522;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2524;
$tmp2524 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2524->value = $tmp2523;
panda$core$Int64 $tmp2525 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2526 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2525);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp2527;
$tmp2527 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp2527->value = $tmp2526;
ITable* $tmp2528 = ((panda$core$Equatable*) $tmp2524)->$class->itable;
while ($tmp2528->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2528 = $tmp2528->next;
}
$fn2530 $tmp2529 = $tmp2528->methods[0];
panda$core$Bit $tmp2531 = $tmp2529(((panda$core$Equatable*) $tmp2524), ((panda$core$Equatable*) $tmp2527));
bool $tmp2532 = $tmp2531.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2527)));
// unreffing REF($729:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2524)));
// unreffing REF($725:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp2532) goto block58; else goto block59;
block58:;
// line 741
panda$core$Bit $tmp2533 = panda$core$Bit$init$builtin_bit(true);
*(&local20) = $tmp2533;
goto block59;
block59:;
// line 743
org$pandalanguage$pandac$MethodDecl* $tmp2534 = *(&local22);
panda$core$String** $tmp2535 = &((org$pandalanguage$pandac$Symbol*) $tmp2534)->name;
panda$core$String* $tmp2536 = *$tmp2535;
panda$core$Bit $tmp2537 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2536, &$s2538);
bool $tmp2539 = $tmp2537.value;
if ($tmp2539) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$MethodDecl* $tmp2540 = *(&local22);
panda$collections$Array** $tmp2541 = &$tmp2540->parameters;
panda$collections$Array* $tmp2542 = *$tmp2541;
ITable* $tmp2543 = ((panda$collections$CollectionView*) $tmp2542)->$class->itable;
while ($tmp2543->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2543 = $tmp2543->next;
}
$fn2545 $tmp2544 = $tmp2543->methods[0];
panda$core$Int64 $tmp2546 = $tmp2544(((panda$collections$CollectionView*) $tmp2542));
panda$core$Int64 $tmp2547 = (panda$core$Int64) {0};
panda$core$Bit $tmp2548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2546, $tmp2547);
*(&local23) = $tmp2548;
goto block64;
block63:;
*(&local23) = $tmp2537;
goto block64;
block64:;
panda$core$Bit $tmp2549 = *(&local23);
bool $tmp2550 = $tmp2549.value;
if ($tmp2550) goto block60; else goto block61;
block60:;
// line 744
panda$core$Bit $tmp2551 = panda$core$Bit$init$builtin_bit(true);
*(&local21) = $tmp2551;
// line 745
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2552;
$tmp2552 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2552->value = param7;
panda$core$Int64 $tmp2553 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2554 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2553);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2555;
$tmp2555 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2555->value = $tmp2554;
ITable* $tmp2556 = ((panda$core$Equatable*) $tmp2552)->$class->itable;
while ($tmp2556->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2556 = $tmp2556->next;
}
$fn2558 $tmp2557 = $tmp2556->methods[0];
panda$core$Bit $tmp2559 = $tmp2557(((panda$core$Equatable*) $tmp2552), ((panda$core$Equatable*) $tmp2555));
bool $tmp2560 = $tmp2559.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2555)));
// unreffing REF($775:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2552)));
// unreffing REF($771:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
if ($tmp2560) goto block65; else goto block66;
block65:;
// line 746
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param4, &$s2561);
goto block66;
block66:;
goto block61;
block61:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2519);
// unreffing REF($713:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl* $tmp2562 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2562));
// unreffing m
*(&local22) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block55;
block57:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2510));
// unreffing REF($702:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 750
panda$core$Bit $tmp2563 = *(&local20);
panda$core$Bit $tmp2564 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2563);
bool $tmp2565 = $tmp2564.value;
if ($tmp2565) goto block69; else goto block70;
block69:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2566;
$tmp2566 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2566->value = param7;
panda$core$Int64 $tmp2567 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2568 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2567);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2569;
$tmp2569 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2569->value = $tmp2568;
ITable* $tmp2570 = ((panda$core$Equatable*) $tmp2566)->$class->itable;
while ($tmp2570->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2570 = $tmp2570->next;
}
$fn2572 $tmp2571 = $tmp2570->methods[0];
panda$core$Bit $tmp2573 = $tmp2571(((panda$core$Equatable*) $tmp2566), ((panda$core$Equatable*) $tmp2569));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2569)));
// unreffing REF($811:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2566)));
// unreffing REF($807:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
*(&local25) = $tmp2573;
goto block71;
block70:;
*(&local25) = $tmp2564;
goto block71;
block71:;
panda$core$Bit $tmp2574 = *(&local25);
bool $tmp2575 = $tmp2574.value;
if ($tmp2575) goto block72; else goto block73;
block72:;
org$pandalanguage$pandac$ClassDecl* $tmp2576 = *(&local14);
panda$core$String** $tmp2577 = &$tmp2576->name;
panda$core$String* $tmp2578 = *$tmp2577;
ITable* $tmp2580 = ((panda$core$Equatable*) $tmp2578)->$class->itable;
while ($tmp2580->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2580 = $tmp2580->next;
}
$fn2582 $tmp2581 = $tmp2580->methods[1];
panda$core$Bit $tmp2583 = $tmp2581(((panda$core$Equatable*) $tmp2578), ((panda$core$Equatable*) &$s2579));
*(&local24) = $tmp2583;
goto block74;
block73:;
*(&local24) = $tmp2574;
goto block74;
block74:;
panda$core$Bit $tmp2584 = *(&local24);
bool $tmp2585 = $tmp2584.value;
if ($tmp2585) goto block67; else goto block68;
block67:;
// line 751
org$pandalanguage$pandac$MethodDecl* $tmp2586 = (org$pandalanguage$pandac$MethodDecl*) frostObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2587 = *(&local14);
org$pandalanguage$pandac$Annotations* $tmp2588 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2589 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2588, $tmp2589);
panda$core$Int64 $tmp2590 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2591 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2590);
panda$collections$Array* $tmp2592 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp2593 = (panda$core$Int64) {0};
panda$collections$Array$init$panda$core$Int64($tmp2592, $tmp2593);
org$pandalanguage$pandac$Type* $tmp2594 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FixedArray* $tmp2595 = (org$pandalanguage$pandac$FixedArray*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp2595);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2586, $tmp2587, param4, ((panda$core$String*) NULL), $tmp2588, $tmp2591, &$s2596, ((panda$collections$Array*) NULL), $tmp2592, $tmp2594, $tmp2595);
*(&local26) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2586));
org$pandalanguage$pandac$MethodDecl* $tmp2597 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2597));
*(&local26) = $tmp2586;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2595));
// unreffing REF($855:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2594));
// unreffing REF($854:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2592));
// unreffing REF($850:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2588));
// unreffing REF($845:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2586));
// unreffing REF($843:org.pandalanguage.pandac.MethodDecl)
// line 754
org$pandalanguage$pandac$ClassDecl* $tmp2598 = *(&local14);
panda$collections$Array** $tmp2599 = &$tmp2598->methods;
panda$collections$Array* $tmp2600 = *$tmp2599;
org$pandalanguage$pandac$MethodDecl* $tmp2601 = *(&local26);
panda$collections$Array$add$panda$collections$Array$T($tmp2600, ((panda$core$Object*) $tmp2601));
// line 755
org$pandalanguage$pandac$ClassDecl* $tmp2602 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2603 = &$tmp2602->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2604 = *$tmp2603;
org$pandalanguage$pandac$MethodDecl* $tmp2605 = *(&local26);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2604, ((org$pandalanguage$pandac$Symbol*) $tmp2605));
org$pandalanguage$pandac$MethodDecl* $tmp2606 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2606));
// unreffing defaultInit
*(&local26) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block68;
block68:;
// line 757
panda$core$Bit $tmp2607 = *(&local21);
panda$core$Bit $tmp2608 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2607);
bool $tmp2609 = $tmp2608.value;
if ($tmp2609) goto block77; else goto block78;
block77:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2610;
$tmp2610 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2610->value = param7;
panda$core$Int64 $tmp2611 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2612 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2611);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2613;
$tmp2613 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2613->value = $tmp2612;
ITable* $tmp2614 = ((panda$core$Equatable*) $tmp2610)->$class->itable;
while ($tmp2614->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2614 = $tmp2614->next;
}
$fn2616 $tmp2615 = $tmp2614->methods[0];
panda$core$Bit $tmp2617 = $tmp2615(((panda$core$Equatable*) $tmp2610), ((panda$core$Equatable*) $tmp2613));
bool $tmp2618 = $tmp2617.value;
if ($tmp2618) goto block80; else goto block81;
block80:;
*(&local29) = $tmp2617;
goto block82;
block81:;
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2619;
$tmp2619 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2619->value = param7;
panda$core$Int64 $tmp2620 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2621 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2620);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2622;
$tmp2622 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2622->value = $tmp2621;
ITable* $tmp2623 = ((panda$core$Equatable*) $tmp2619)->$class->itable;
while ($tmp2623->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2623 = $tmp2623->next;
}
$fn2625 $tmp2624 = $tmp2623->methods[0];
panda$core$Bit $tmp2626 = $tmp2624(((panda$core$Equatable*) $tmp2619), ((panda$core$Equatable*) $tmp2622));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2622)));
// unreffing REF($923:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2619)));
// unreffing REF($919:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
*(&local29) = $tmp2626;
goto block82;
block82:;
panda$core$Bit $tmp2627 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2613)));
// unreffing REF($912:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2610)));
// unreffing REF($908:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
*(&local28) = $tmp2627;
goto block79;
block78:;
*(&local28) = $tmp2608;
goto block79;
block79:;
panda$core$Bit $tmp2628 = *(&local28);
bool $tmp2629 = $tmp2628.value;
if ($tmp2629) goto block83; else goto block84;
block83:;
org$pandalanguage$pandac$ClassDecl* $tmp2630 = *(&local14);
panda$core$String** $tmp2631 = &$tmp2630->name;
panda$core$String* $tmp2632 = *$tmp2631;
ITable* $tmp2634 = ((panda$core$Equatable*) $tmp2632)->$class->itable;
while ($tmp2634->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2634 = $tmp2634->next;
}
$fn2636 $tmp2635 = $tmp2634->methods[1];
panda$core$Bit $tmp2637 = $tmp2635(((panda$core$Equatable*) $tmp2632), ((panda$core$Equatable*) &$s2633));
*(&local27) = $tmp2637;
goto block85;
block84:;
*(&local27) = $tmp2628;
goto block85;
block85:;
panda$core$Bit $tmp2638 = *(&local27);
bool $tmp2639 = $tmp2638.value;
if ($tmp2639) goto block75; else goto block76;
block75:;
// line 759
org$pandalanguage$pandac$MethodDecl* $tmp2640 = (org$pandalanguage$pandac$MethodDecl*) frostObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl* $tmp2641 = *(&local14);
org$pandalanguage$pandac$Annotations* $tmp2642 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2643 = (panda$core$Int64) {32};
panda$core$Int64 $tmp2644 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp2645 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2643, $tmp2644);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2642, $tmp2645);
panda$core$Int64 $tmp2646 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2647 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2646);
panda$collections$Array* $tmp2648 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp2649 = (panda$core$Int64) {0};
panda$collections$Array$init$panda$core$Int64($tmp2648, $tmp2649);
org$pandalanguage$pandac$Type* $tmp2650 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FixedArray* $tmp2651 = (org$pandalanguage$pandac$FixedArray*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp2651);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2640, $tmp2641, param4, ((panda$core$String*) NULL), $tmp2642, $tmp2647, &$s2652, ((panda$collections$Array*) NULL), $tmp2648, $tmp2650, $tmp2651);
*(&local30) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2640));
org$pandalanguage$pandac$MethodDecl* $tmp2653 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2653));
*(&local30) = $tmp2640;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2651));
// unreffing REF($978:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2650));
// unreffing REF($977:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2648));
// unreffing REF($973:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2642));
// unreffing REF($966:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2640));
// unreffing REF($964:org.pandalanguage.pandac.MethodDecl)
// line 762
org$pandalanguage$pandac$ClassDecl* $tmp2654 = *(&local14);
panda$collections$Array** $tmp2655 = &$tmp2654->methods;
panda$collections$Array* $tmp2656 = *$tmp2655;
org$pandalanguage$pandac$MethodDecl* $tmp2657 = *(&local30);
panda$collections$Array$add$panda$collections$Array$T($tmp2656, ((panda$core$Object*) $tmp2657));
// line 763
org$pandalanguage$pandac$ClassDecl* $tmp2658 = *(&local14);
org$pandalanguage$pandac$SymbolTable** $tmp2659 = &$tmp2658->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2660 = *$tmp2659;
org$pandalanguage$pandac$MethodDecl* $tmp2661 = *(&local30);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2660, ((org$pandalanguage$pandac$Symbol*) $tmp2661));
org$pandalanguage$pandac$MethodDecl* $tmp2662 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2662));
// unreffing defaultCleanup
*(&local30) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
goto block76;
block76:;
// line 765
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2663;
$tmp2663 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2663->value = param7;
panda$core$Int64 $tmp2664 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2665 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2664);
org$pandalanguage$pandac$ClassDecl$Kind$wrapper* $tmp2666;
$tmp2666 = (org$pandalanguage$pandac$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass);
$tmp2666->value = $tmp2665;
ITable* $tmp2667 = ((panda$core$Equatable*) $tmp2663)->$class->itable;
while ($tmp2667->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2667 = $tmp2667->next;
}
$fn2669 $tmp2668 = $tmp2667->methods[0];
panda$core$Bit $tmp2670 = $tmp2668(((panda$core$Equatable*) $tmp2663), ((panda$core$Equatable*) $tmp2666));
bool $tmp2671 = $tmp2670.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2666)));
// unreffing REF($1031:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2663)));
// unreffing REF($1027:panda.core.Equatable<org.pandalanguage.pandac.ClassDecl.Kind>)
if ($tmp2671) goto block86; else goto block87;
block86:;
// line 766
panda$core$Bit $tmp2672 = panda$core$Bit$init$builtin_bit(false);
*(&local31) = $tmp2672;
// line 767
org$pandalanguage$pandac$ClassDecl* $tmp2673 = *(&local14);
panda$collections$Array** $tmp2674 = &$tmp2673->choiceCases;
panda$collections$Array* $tmp2675 = *$tmp2674;
ITable* $tmp2676 = ((panda$collections$CollectionView*) $tmp2675)->$class->itable;
while ($tmp2676->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2676 = $tmp2676->next;
}
$fn2678 $tmp2677 = $tmp2676->methods[0];
panda$core$Int64 $tmp2679 = $tmp2677(((panda$collections$CollectionView*) $tmp2675));
panda$core$Int64 $tmp2680 = (panda$core$Int64) {0};
int64_t $tmp2681 = $tmp2679.value;
int64_t $tmp2682 = $tmp2680.value;
bool $tmp2683 = $tmp2681 > $tmp2682;
panda$core$Bit $tmp2684 = (panda$core$Bit) {$tmp2683};
bool $tmp2685 = $tmp2684.value;
if ($tmp2685) goto block88; else goto block90;
block88:;
// line 768
org$pandalanguage$pandac$ClassDecl* $tmp2686 = *(&local14);
panda$collections$Array** $tmp2687 = &$tmp2686->choiceCases;
panda$collections$Array* $tmp2688 = *$tmp2687;
ITable* $tmp2689 = ((panda$collections$Iterable*) $tmp2688)->$class->itable;
while ($tmp2689->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2689 = $tmp2689->next;
}
$fn2691 $tmp2690 = $tmp2689->methods[0];
panda$collections$Iterator* $tmp2692 = $tmp2690(((panda$collections$Iterable*) $tmp2688));
goto block91;
block91:;
ITable* $tmp2693 = $tmp2692->$class->itable;
while ($tmp2693->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2693 = $tmp2693->next;
}
$fn2695 $tmp2694 = $tmp2693->methods[0];
panda$core$Bit $tmp2696 = $tmp2694($tmp2692);
bool $tmp2697 = $tmp2696.value;
if ($tmp2697) goto block93; else goto block92;
block92:;
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
ITable* $tmp2698 = $tmp2692->$class->itable;
while ($tmp2698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2698 = $tmp2698->next;
}
$fn2700 $tmp2699 = $tmp2698->methods[1];
panda$core$Object* $tmp2701 = $tmp2699($tmp2692);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ChoiceCase*) $tmp2701)));
org$pandalanguage$pandac$ChoiceCase* $tmp2702 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2702));
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) $tmp2701);
// line 769
org$pandalanguage$pandac$ChoiceCase* $tmp2703 = *(&local32);
panda$collections$Array** $tmp2704 = &$tmp2703->fields;
panda$collections$Array* $tmp2705 = *$tmp2704;
ITable* $tmp2706 = ((panda$collections$CollectionView*) $tmp2705)->$class->itable;
while ($tmp2706->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2706 = $tmp2706->next;
}
$fn2708 $tmp2707 = $tmp2706->methods[0];
panda$core$Int64 $tmp2709 = $tmp2707(((panda$collections$CollectionView*) $tmp2705));
panda$core$Int64 $tmp2710 = (panda$core$Int64) {0};
int64_t $tmp2711 = $tmp2709.value;
int64_t $tmp2712 = $tmp2710.value;
bool $tmp2713 = $tmp2711 > $tmp2712;
panda$core$Bit $tmp2714 = (panda$core$Bit) {$tmp2713};
bool $tmp2715 = $tmp2714.value;
if ($tmp2715) goto block94; else goto block95;
block94:;
// line 770
panda$core$Bit $tmp2716 = panda$core$Bit$init$builtin_bit(true);
*(&local31) = $tmp2716;
// line 771
panda$core$Panda$unref$panda$core$Object$Q($tmp2701);
// unreffing REF($1077:panda.collections.Iterator.T)
org$pandalanguage$pandac$ChoiceCase* $tmp2717 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2717));
// unreffing e
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
goto block93;
block95:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2701);
// unreffing REF($1077:panda.collections.Iterator.T)
org$pandalanguage$pandac$ChoiceCase* $tmp2718 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2718));
// unreffing e
*(&local32) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
goto block91;
block93:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2692));
// unreffing REF($1066:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block89;
block90:;
// line 1
// line 776
org$pandalanguage$pandac$ClassDecl* $tmp2719 = *(&local14);
org$pandalanguage$pandac$Position* $tmp2720 = &$tmp2719->position;
org$pandalanguage$pandac$Position $tmp2721 = *$tmp2720;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp2721, &$s2722);
// line 777
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) NULL)));
org$pandalanguage$pandac$ClassDecl* $tmp2723 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2723));
// unreffing result
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp2724 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2724));
// unreffing supertypes
*(&local12) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2725 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2725));
// unreffing parameters
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp2726 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2726));
// unreffing annotations
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp2727 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2727));
// unreffing doccomment
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2728 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2728));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ClassDecl*) NULL);
block89:;
// line 779
panda$core$Bit $tmp2729 = *(&local31);
panda$core$Bit $tmp2730 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2729);
bool $tmp2731 = $tmp2730.value;
if ($tmp2731) goto block96; else goto block97;
block96:;
// line 780
org$pandalanguage$pandac$ClassDecl* $tmp2732 = *(&local14);
org$pandalanguage$pandac$Type* $tmp2733 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2733));
org$pandalanguage$pandac$Type** $tmp2734 = &$tmp2732->rawSuper;
org$pandalanguage$pandac$Type* $tmp2735 = *$tmp2734;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2735));
org$pandalanguage$pandac$Type** $tmp2736 = &$tmp2732->rawSuper;
*$tmp2736 = $tmp2733;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2733));
// unreffing REF($1172:org.pandalanguage.pandac.Type)
goto block97;
block97:;
goto block87;
block87:;
// line 783
panda$core$Weak** $tmp2737 = &param0->compiler;
panda$core$Weak* $tmp2738 = *$tmp2737;
panda$core$Object* $tmp2739 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2738);
panda$collections$Stack** $tmp2740 = &((org$pandalanguage$pandac$Compiler*) $tmp2739)->currentClass;
panda$collections$Stack* $tmp2741 = *$tmp2740;
panda$core$Object* $tmp2742 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2741);
panda$core$Panda$unref$panda$core$Object$Q($tmp2742);
// unreffing REF($1196:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp2739);
// unreffing REF($1191:panda.core.Weak.T)
// line 784
org$pandalanguage$pandac$ClassDecl* $tmp2743 = *(&local14);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2743));
org$pandalanguage$pandac$ClassDecl* $tmp2744 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2744));
// unreffing result
*(&local14) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$collections$Array* $tmp2745 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2745));
// unreffing supertypes
*(&local12) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2746 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2746));
// unreffing parameters
*(&local5) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Annotations* $tmp2747 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2747));
// unreffing annotations
*(&local4) = ((org$pandalanguage$pandac$Annotations*) NULL);
panda$core$String* $tmp2748 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2748));
// unreffing doccomment
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2749 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2749));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
return $tmp2743;

}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$ClassDecl* param1, panda$collections$Array* param2) {

org$pandalanguage$pandac$ClassDecl* local0 = NULL;
// line 788
panda$collections$Array$add$panda$collections$Array$T(param2, ((panda$core$Object*) param1));
// line 789
panda$collections$Array** $tmp2750 = &param1->classes;
panda$collections$Array* $tmp2751 = *$tmp2750;
ITable* $tmp2752 = ((panda$collections$Iterable*) $tmp2751)->$class->itable;
while ($tmp2752->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2752 = $tmp2752->next;
}
$fn2754 $tmp2753 = $tmp2752->methods[0];
panda$collections$Iterator* $tmp2755 = $tmp2753(((panda$collections$Iterable*) $tmp2751));
goto block1;
block1:;
ITable* $tmp2756 = $tmp2755->$class->itable;
while ($tmp2756->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2756 = $tmp2756->next;
}
$fn2758 $tmp2757 = $tmp2756->methods[0];
panda$core$Bit $tmp2759 = $tmp2757($tmp2755);
bool $tmp2760 = $tmp2759.value;
if ($tmp2760) goto block3; else goto block2;
block2:;
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
ITable* $tmp2761 = $tmp2755->$class->itable;
while ($tmp2761->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2761 = $tmp2761->next;
}
$fn2763 $tmp2762 = $tmp2761->methods[1];
panda$core$Object* $tmp2764 = $tmp2762($tmp2755);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp2764)));
org$pandalanguage$pandac$ClassDecl* $tmp2765 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2765));
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) $tmp2764);
// line 790
org$pandalanguage$pandac$ClassDecl* $tmp2766 = *(&local0);
org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, $tmp2766, param2);
panda$core$Panda$unref$panda$core$Object$Q($tmp2764);
// unreffing REF($21:panda.collections.Iterator.T)
org$pandalanguage$pandac$ClassDecl* $tmp2767 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2767));
// unreffing inner
*(&local0) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2755));
// unreffing REF($10:panda.collections.Iterator<panda.collections.Iterable.T>)
return;

}
void org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* param0, panda$io$File* param1, panda$collections$MapView* param2, panda$core$String* param3, panda$collections$List* param4) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$MethodDecl* local1 = NULL;
org$pandalanguage$pandac$MethodDecl* local2 = NULL;
// line 796
org$pandalanguage$pandac$ClassDecl** $tmp2768 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2769 = *$tmp2768;
panda$core$Bit $tmp2770 = panda$core$Bit$init$builtin_bit($tmp2769 == NULL);
bool $tmp2771 = $tmp2770.value;
if ($tmp2771) goto block1; else goto block2;
block1:;
// line 797
*(&local0) = ((panda$core$String*) NULL);
// line 798
ITable* $tmp2773 = ((panda$core$Equatable*) param3)->$class->itable;
while ($tmp2773->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2773 = $tmp2773->next;
}
$fn2775 $tmp2774 = $tmp2773->methods[1];
panda$core$Bit $tmp2776 = $tmp2774(((panda$core$Equatable*) param3), ((panda$core$Equatable*) &$s2772));
bool $tmp2777 = $tmp2776.value;
if ($tmp2777) goto block3; else goto block5;
block3:;
// line 799
panda$core$String* $tmp2778 = panda$core$String$convert$R$panda$core$String(param3);
panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, &$s2780);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2779));
panda$core$String* $tmp2781 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2781));
*(&local0) = $tmp2779;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2779));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2778));
// unreffing REF($18:panda.core.String)
goto block4;
block5:;
// line 1
// line 802
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2782));
panda$core$String* $tmp2783 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2783));
*(&local0) = &$s2784;
goto block4;
block4:;
// line 804
org$pandalanguage$pandac$ClassDecl* $tmp2785 = (org$pandalanguage$pandac$ClassDecl*) frostObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
org$pandalanguage$pandac$Position $tmp2786 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2787 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
org$pandalanguage$pandac$Annotations$init($tmp2787);
panda$core$Int64 $tmp2788 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp2789 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp2788);
panda$core$String* $tmp2790 = *(&local0);
panda$collections$Array* $tmp2791 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2791);
panda$collections$Array* $tmp2792 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2792);
panda$core$Weak** $tmp2793 = &param0->compiler;
panda$core$Weak* $tmp2794 = *$tmp2793;
panda$core$Object* $tmp2795 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2794);
org$pandalanguage$pandac$SymbolTable** $tmp2796 = &((org$pandalanguage$pandac$Compiler*) $tmp2795)->root;
org$pandalanguage$pandac$SymbolTable* $tmp2797 = *$tmp2796;
org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp2785, param1, $tmp2786, param2, ((panda$core$String*) NULL), $tmp2787, $tmp2789, $tmp2790, ((panda$collections$ListView*) $tmp2791), $tmp2792, $tmp2797);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2785));
org$pandalanguage$pandac$ClassDecl** $tmp2798 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2799 = *$tmp2798;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2799));
org$pandalanguage$pandac$ClassDecl** $tmp2800 = &param0->bareCodeClass;
*$tmp2800 = $tmp2785;
panda$core$Panda$unref$panda$core$Object$Q($tmp2795);
// unreffing REF($60:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2792));
// unreffing REF($54:panda.collections.Array<org.pandalanguage.pandac.ClassDecl.GenericParameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2791));
// unreffing REF($50:panda.collections.Array<org.pandalanguage.pandac.Type>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2787));
// unreffing REF($45:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2785));
// unreffing REF($43:org.pandalanguage.pandac.ClassDecl)
// line 807
org$pandalanguage$pandac$ClassDecl** $tmp2801 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2802 = *$tmp2801;
panda$core$Bit $tmp2803 = panda$core$Bit$init$builtin_bit($tmp2802 != NULL);
bool $tmp2804 = $tmp2803.value;
if ($tmp2804) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp2805 = (panda$core$Int64) {807};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2806, $tmp2805, &$s2807);
abort(); // unreachable
block6:;
ITable* $tmp2808 = ((panda$collections$CollectionWriter*) param4)->$class->itable;
while ($tmp2808->$class != (panda$core$Class*) &panda$collections$CollectionWriter$class) {
    $tmp2808 = $tmp2808->next;
}
$fn2810 $tmp2809 = $tmp2808->methods[0];
$tmp2809(((panda$collections$CollectionWriter*) param4), ((panda$core$Object*) $tmp2802));
// line 808
org$pandalanguage$pandac$MethodDecl* $tmp2811 = (org$pandalanguage$pandac$MethodDecl*) frostObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2812 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2813 = *$tmp2812;
panda$core$Bit $tmp2814 = panda$core$Bit$init$builtin_bit($tmp2813 != NULL);
bool $tmp2815 = $tmp2814.value;
if ($tmp2815) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp2816 = (panda$core$Int64) {808};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2817, $tmp2816, &$s2818);
abort(); // unreachable
block8:;
org$pandalanguage$pandac$Position $tmp2819 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2820 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2821 = (panda$core$Int64) {8192};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2820, $tmp2821);
panda$core$Int64 $tmp2822 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2823 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2822);
panda$collections$Array* $tmp2824 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp2825 = (panda$core$Int64) {0};
panda$collections$Array$init$panda$core$Int64($tmp2824, $tmp2825);
org$pandalanguage$pandac$Type* $tmp2826 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FixedArray* $tmp2827 = (org$pandalanguage$pandac$FixedArray*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp2827);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2811, $tmp2813, $tmp2819, ((panda$core$String*) NULL), $tmp2820, $tmp2823, &$s2828, ((panda$collections$Array*) NULL), $tmp2824, $tmp2826, $tmp2827);
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2811));
org$pandalanguage$pandac$MethodDecl* $tmp2829 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2829));
*(&local1) = $tmp2811;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2827));
// unreffing REF($127:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2826));
// unreffing REF($126:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2824));
// unreffing REF($122:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2820));
// unreffing REF($117:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2811));
// unreffing REF($105:org.pandalanguage.pandac.MethodDecl)
// line 811
org$pandalanguage$pandac$ClassDecl** $tmp2830 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2831 = *$tmp2830;
panda$core$Bit $tmp2832 = panda$core$Bit$init$builtin_bit($tmp2831 != NULL);
bool $tmp2833 = $tmp2832.value;
if ($tmp2833) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp2834 = (panda$core$Int64) {811};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2835, $tmp2834, &$s2836);
abort(); // unreachable
block10:;
panda$collections$Array** $tmp2837 = &$tmp2831->methods;
panda$collections$Array* $tmp2838 = *$tmp2837;
org$pandalanguage$pandac$MethodDecl* $tmp2839 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp2838, ((panda$core$Object*) $tmp2839));
// line 812
org$pandalanguage$pandac$ClassDecl** $tmp2840 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2841 = *$tmp2840;
panda$core$Bit $tmp2842 = panda$core$Bit$init$builtin_bit($tmp2841 != NULL);
bool $tmp2843 = $tmp2842.value;
if ($tmp2843) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp2844 = (panda$core$Int64) {812};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2845, $tmp2844, &$s2846);
abort(); // unreachable
block12:;
org$pandalanguage$pandac$SymbolTable** $tmp2847 = &$tmp2841->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2848 = *$tmp2847;
org$pandalanguage$pandac$MethodDecl* $tmp2849 = *(&local1);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2848, ((org$pandalanguage$pandac$Symbol*) $tmp2849));
// line 813
org$pandalanguage$pandac$MethodDecl* $tmp2850 = (org$pandalanguage$pandac$MethodDecl*) frostObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp2851 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2852 = *$tmp2851;
panda$core$Bit $tmp2853 = panda$core$Bit$init$builtin_bit($tmp2852 != NULL);
bool $tmp2854 = $tmp2853.value;
if ($tmp2854) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp2855 = (panda$core$Int64) {813};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2856, $tmp2855, &$s2857);
abort(); // unreachable
block14:;
org$pandalanguage$pandac$Position $tmp2858 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp2859 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp2860 = (panda$core$Int64) {32};
panda$core$Int64 $tmp2861 = (panda$core$Int64) {8192};
panda$core$Int64 $tmp2862 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp2860, $tmp2861);
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp2859, $tmp2862);
panda$core$Int64 $tmp2863 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp2864 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp2863);
panda$collections$Array* $tmp2865 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp2866 = (panda$core$Int64) {0};
panda$collections$Array$init$panda$core$Int64($tmp2865, $tmp2866);
org$pandalanguage$pandac$Type* $tmp2867 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$FixedArray* $tmp2868 = (org$pandalanguage$pandac$FixedArray*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp2868);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2850, $tmp2852, $tmp2858, ((panda$core$String*) NULL), $tmp2859, $tmp2864, &$s2869, ((panda$collections$Array*) NULL), $tmp2865, $tmp2867, $tmp2868);
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2850));
org$pandalanguage$pandac$MethodDecl* $tmp2870 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2870));
*(&local2) = $tmp2850;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2868));
// unreffing REF($212:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2867));
// unreffing REF($211:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2865));
// unreffing REF($207:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2859));
// unreffing REF($200:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2850));
// unreffing REF($188:org.pandalanguage.pandac.MethodDecl)
// line 816
org$pandalanguage$pandac$ClassDecl** $tmp2871 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2872 = *$tmp2871;
panda$core$Bit $tmp2873 = panda$core$Bit$init$builtin_bit($tmp2872 != NULL);
bool $tmp2874 = $tmp2873.value;
if ($tmp2874) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp2875 = (panda$core$Int64) {816};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2876, $tmp2875, &$s2877);
abort(); // unreachable
block16:;
panda$collections$Array** $tmp2878 = &$tmp2872->methods;
panda$collections$Array* $tmp2879 = *$tmp2878;
org$pandalanguage$pandac$MethodDecl* $tmp2880 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2879, ((panda$core$Object*) $tmp2880));
// line 817
org$pandalanguage$pandac$ClassDecl** $tmp2881 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp2882 = *$tmp2881;
panda$core$Bit $tmp2883 = panda$core$Bit$init$builtin_bit($tmp2882 != NULL);
bool $tmp2884 = $tmp2883.value;
if ($tmp2884) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp2885 = (panda$core$Int64) {817};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2886, $tmp2885, &$s2887);
abort(); // unreachable
block18:;
org$pandalanguage$pandac$SymbolTable** $tmp2888 = &$tmp2882->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp2889 = *$tmp2888;
org$pandalanguage$pandac$MethodDecl* $tmp2890 = *(&local2);
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp2889, ((org$pandalanguage$pandac$Symbol*) $tmp2890));
org$pandalanguage$pandac$MethodDecl* $tmp2891 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2891));
// unreffing defaultCleanup
*(&local2) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$MethodDecl* $tmp2892 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2892));
// unreffing defaultInit
*(&local1) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$String* $tmp2893 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2893));
// unreffing fullName
*(&local0) = ((panda$core$String*) NULL);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Scanner* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2) {

panda$io$File** $tmp2894 = &param0->source;
panda$io$File* $tmp2895 = *$tmp2894;
panda$core$Bit $tmp2896 = panda$core$Bit$init$builtin_bit($tmp2895 != NULL);
bool $tmp2897 = $tmp2896.value;
if ($tmp2897) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp2898 = (panda$core$Int64) {822};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2899, $tmp2898, &$s2900);
abort(); // unreachable
block1:;
// line 823
panda$core$Weak** $tmp2901 = &param0->compiler;
panda$core$Weak* $tmp2902 = *$tmp2901;
panda$core$Object* $tmp2903 = panda$core$Weak$get$R$panda$core$Weak$T($tmp2902);
panda$io$File** $tmp2904 = &param0->source;
panda$io$File* $tmp2905 = *$tmp2904;
panda$core$Bit $tmp2906 = panda$core$Bit$init$builtin_bit($tmp2905 != NULL);
bool $tmp2907 = $tmp2906.value;
if ($tmp2907) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp2908 = (panda$core$Int64) {823};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2909, $tmp2908, &$s2910);
abort(); // unreachable
block3:;
org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp2903), $tmp2905, param1, param2);
panda$core$Panda$unref$panda$core$Object$Q($tmp2903);
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
panda$io$File** $tmp2911 = &param0->source;
panda$io$File* $tmp2912 = *$tmp2911;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2912));
panda$io$File** $tmp2913 = &param0->source;
*$tmp2913 = param1;
// line 828
panda$core$Int64* $tmp2914 = &param2->$rawValue;
panda$core$Int64 $tmp2915 = *$tmp2914;
panda$core$Int64 $tmp2916 = (panda$core$Int64) {19};
panda$core$Bit $tmp2917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2915, $tmp2916);
bool $tmp2918 = $tmp2917.value;
if ($tmp2918) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$FixedArray** $tmp2919 = (org$pandalanguage$pandac$FixedArray**) (param2->$data + 0);
org$pandalanguage$pandac$FixedArray* $tmp2920 = *$tmp2919;
*(&local0) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2920));
org$pandalanguage$pandac$FixedArray* $tmp2921 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2921));
*(&local0) = $tmp2920;
// line 830
panda$collections$Array* $tmp2922 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2922);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2922));
panda$collections$Array* $tmp2923 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2923));
*(&local1) = $tmp2922;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2922));
// unreffing REF($27:panda.collections.Array<org.pandalanguage.pandac.ClassDecl>)
// line 831
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2924));
panda$core$String* $tmp2925 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2925));
*(&local2) = &$s2926;
// line 832
panda$collections$HashMap* $tmp2927 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp2927);
*(&local3) = ((panda$collections$HashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2927));
panda$collections$HashMap* $tmp2928 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2928));
*(&local3) = $tmp2927;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2927));
// unreffing REF($49:panda.collections.HashMap<panda.core.String, panda.core.String>)
// line 833
org$pandalanguage$pandac$FixedArray* $tmp2929 = *(&local0);
ITable* $tmp2930 = ((panda$collections$Iterable*) $tmp2929)->$class->itable;
while ($tmp2930->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2930 = $tmp2930->next;
}
$fn2932 $tmp2931 = $tmp2930->methods[0];
panda$collections$Iterator* $tmp2933 = $tmp2931(((panda$collections$Iterable*) $tmp2929));
goto block4;
block4:;
ITable* $tmp2934 = $tmp2933->$class->itable;
while ($tmp2934->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2934 = $tmp2934->next;
}
$fn2936 $tmp2935 = $tmp2934->methods[0];
panda$core$Bit $tmp2937 = $tmp2935($tmp2933);
bool $tmp2938 = $tmp2937.value;
if ($tmp2938) goto block6; else goto block5;
block5:;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2939 = $tmp2933->$class->itable;
while ($tmp2939->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2939 = $tmp2939->next;
}
$fn2941 $tmp2940 = $tmp2939->methods[1];
panda$core$Object* $tmp2942 = $tmp2940($tmp2933);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2942)));
org$pandalanguage$pandac$ASTNode* $tmp2943 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2943));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) $tmp2942);
// line 834
org$pandalanguage$pandac$ASTNode* $tmp2944 = *(&local4);
panda$core$Int64* $tmp2945 = &$tmp2944->$rawValue;
panda$core$Int64 $tmp2946 = *$tmp2945;
panda$core$Int64 $tmp2947 = (panda$core$Int64) {33};
panda$core$Bit $tmp2948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2946, $tmp2947);
bool $tmp2949 = $tmp2948.value;
if ($tmp2949) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp2950 = (org$pandalanguage$pandac$Position*) ($tmp2944->$data + 0);
org$pandalanguage$pandac$Position $tmp2951 = *$tmp2950;
panda$core$String** $tmp2952 = (panda$core$String**) ($tmp2944->$data + 16);
panda$core$String* $tmp2953 = *$tmp2952;
*(&local5) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2953));
panda$core$String* $tmp2954 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2954));
*(&local5) = $tmp2953;
// line 836
panda$core$String* $tmp2955 = *(&local5);
panda$core$String* $tmp2956 = org$pandalanguage$pandac$Compiler$FIXMEcorrect$panda$core$String$R$panda$core$String($tmp2955);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2956));
panda$core$String* $tmp2957 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2957));
*(&local2) = $tmp2956;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2956));
// unreffing REF($107:panda.core.String)
panda$core$String* $tmp2958 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2958));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
goto block7;
block9:;
panda$core$Int64 $tmp2959 = (panda$core$Int64) {49};
panda$core$Bit $tmp2960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2946, $tmp2959);
bool $tmp2961 = $tmp2960.value;
if ($tmp2961) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp2962 = (org$pandalanguage$pandac$Position*) ($tmp2944->$data + 0);
org$pandalanguage$pandac$Position $tmp2963 = *$tmp2962;
panda$core$String** $tmp2964 = (panda$core$String**) ($tmp2944->$data + 16);
panda$core$String* $tmp2965 = *$tmp2964;
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2965));
panda$core$String* $tmp2966 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2966));
*(&local6) = $tmp2965;
// line 839
panda$core$String* $tmp2967 = *(&local6);
panda$core$String$Index$nullable $tmp2968 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q($tmp2967, &$s2969);
*(&local7) = $tmp2968;
// line 840
*(&local8) = ((panda$core$String*) NULL);
// line 841
panda$core$String$Index$nullable $tmp2970 = *(&local7);
panda$core$Bit $tmp2971 = panda$core$Bit$init$builtin_bit($tmp2970.nonnull);
bool $tmp2972 = $tmp2971.value;
if ($tmp2972) goto block12; else goto block14;
block12:;
// line 842
panda$core$String* $tmp2973 = *(&local6);
panda$core$String* $tmp2974 = *(&local6);
panda$core$String$Index$nullable $tmp2975 = *(&local7);
panda$core$Bit $tmp2976 = panda$core$Bit$init$builtin_bit($tmp2975.nonnull);
bool $tmp2977 = $tmp2976.value;
if ($tmp2977) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp2978 = (panda$core$Int64) {842};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2979, $tmp2978, &$s2980);
abort(); // unreachable
block15:;
panda$core$String$Index $tmp2981 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp2974, ((panda$core$String$Index) $tmp2975.value));
panda$core$Bit $tmp2982 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp2983 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp2981, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp2982);
panda$core$String* $tmp2984 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp2973, $tmp2983);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2984));
panda$core$String* $tmp2985 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2985));
*(&local8) = $tmp2984;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2984));
// unreffing REF($166:panda.core.String)
goto block13;
block14:;
// line 1
// line 845
panda$core$String* $tmp2986 = *(&local6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2986));
panda$core$String* $tmp2987 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2987));
*(&local8) = $tmp2986;
goto block13;
block13:;
// line 847
panda$collections$HashMap* $tmp2988 = *(&local3);
panda$core$String* $tmp2989 = *(&local8);
panda$core$String* $tmp2990 = *(&local6);
panda$core$String* $tmp2991 = org$pandalanguage$pandac$Compiler$FIXMEcorrect$panda$core$String$R$panda$core$String($tmp2990);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp2988, ((panda$collections$Key*) $tmp2989), ((panda$core$Object*) $tmp2991));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2991));
// unreffing REF($193:panda.core.String)
panda$core$String* $tmp2992 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2992));
// unreffing alias
*(&local8) = ((panda$core$String*) NULL);
panda$core$String* $tmp2993 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2993));
// unreffing fullName
*(&local6) = ((panda$core$String*) NULL);
goto block7;
block11:;
panda$core$Int64 $tmp2994 = (panda$core$Int64) {12};
panda$core$Bit $tmp2995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2946, $tmp2994);
bool $tmp2996 = $tmp2995.value;
if ($tmp2996) goto block17; else goto block18;
block17:;
org$pandalanguage$pandac$Position* $tmp2997 = (org$pandalanguage$pandac$Position*) ($tmp2944->$data + 0);
org$pandalanguage$pandac$Position $tmp2998 = *$tmp2997;
*(&local9) = $tmp2998;
org$pandalanguage$pandac$ASTNode** $tmp2999 = (org$pandalanguage$pandac$ASTNode**) ($tmp2944->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp3000 = *$tmp2999;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3000));
org$pandalanguage$pandac$ASTNode* $tmp3001 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3001));
*(&local10) = $tmp3000;
org$pandalanguage$pandac$FixedArray** $tmp3002 = (org$pandalanguage$pandac$FixedArray**) ($tmp2944->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp3003 = *$tmp3002;
*(&local11) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3003));
org$pandalanguage$pandac$FixedArray* $tmp3004 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3004));
*(&local11) = $tmp3003;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp3005 = (org$pandalanguage$pandac$ClassDecl$Kind*) ($tmp2944->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp3006 = *$tmp3005;
*(&local12) = $tmp3006;
panda$core$String** $tmp3007 = (panda$core$String**) ($tmp2944->$data + 40);
panda$core$String* $tmp3008 = *$tmp3007;
*(&local13) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3008));
panda$core$String* $tmp3009 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3009));
*(&local13) = $tmp3008;
org$pandalanguage$pandac$FixedArray** $tmp3010 = (org$pandalanguage$pandac$FixedArray**) ($tmp2944->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp3011 = *$tmp3010;
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3011));
org$pandalanguage$pandac$FixedArray* $tmp3012 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3012));
*(&local14) = $tmp3011;
org$pandalanguage$pandac$FixedArray** $tmp3013 = (org$pandalanguage$pandac$FixedArray**) ($tmp2944->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp3014 = *$tmp3013;
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3014));
org$pandalanguage$pandac$FixedArray* $tmp3015 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3015));
*(&local15) = $tmp3014;
org$pandalanguage$pandac$FixedArray** $tmp3016 = (org$pandalanguage$pandac$FixedArray**) ($tmp2944->$data + 64);
org$pandalanguage$pandac$FixedArray* $tmp3017 = *$tmp3016;
*(&local16) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3017));
org$pandalanguage$pandac$FixedArray* $tmp3018 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3018));
*(&local16) = $tmp3017;
// line 851
panda$collections$HashMap* $tmp3019 = *(&local3);
panda$core$String* $tmp3020 = *(&local2);
org$pandalanguage$pandac$Position $tmp3021 = *(&local9);
org$pandalanguage$pandac$ASTNode* $tmp3022 = *(&local10);
org$pandalanguage$pandac$FixedArray* $tmp3023 = *(&local11);
org$pandalanguage$pandac$ClassDecl$Kind $tmp3024 = *(&local12);
panda$core$String* $tmp3025 = *(&local13);
org$pandalanguage$pandac$FixedArray* $tmp3026 = *(&local14);
org$pandalanguage$pandac$FixedArray* $tmp3027 = *(&local15);
org$pandalanguage$pandac$FixedArray* $tmp3028 = *(&local16);
org$pandalanguage$pandac$ClassDecl* $tmp3029 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(param0, param1, ((panda$collections$MapView*) $tmp3019), $tmp3020, $tmp3021, $tmp3022, $tmp3023, $tmp3024, $tmp3025, $tmp3026, $tmp3027, $tmp3028);
*(&local17) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3029));
org$pandalanguage$pandac$ClassDecl* $tmp3030 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3030));
*(&local17) = $tmp3029;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3029));
// unreffing REF($286:org.pandalanguage.pandac.ClassDecl?)
// line 853
org$pandalanguage$pandac$ClassDecl* $tmp3031 = *(&local17);
panda$core$Bit $tmp3032 = panda$core$Bit$init$builtin_bit($tmp3031 != NULL);
bool $tmp3033 = $tmp3032.value;
if ($tmp3033) goto block19; else goto block20;
block19:;
// line 854
org$pandalanguage$pandac$ClassDecl* $tmp3034 = *(&local17);
panda$core$Bit $tmp3035 = panda$core$Bit$init$builtin_bit($tmp3034 != NULL);
bool $tmp3036 = $tmp3035.value;
if ($tmp3036) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp3037 = (panda$core$Int64) {854};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3038, $tmp3037, &$s3039);
abort(); // unreachable
block21:;
panda$collections$Array* $tmp3040 = *(&local1);
org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, $tmp3034, $tmp3040);
goto block20;
block20:;
org$pandalanguage$pandac$ClassDecl* $tmp3041 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3041));
// unreffing cl
*(&local17) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3042 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3042));
// unreffing members
*(&local16) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3043 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3043));
// unreffing supertypes
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3044 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3044));
// unreffing generics
*(&local14) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp3045 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3045));
// unreffing name
*(&local13) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3046 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3046));
// unreffing annotations
*(&local11) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3047 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3047));
// unreffing dc
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block18:;
panda$core$Int64 $tmp3048 = (panda$core$Int64) {29};
panda$core$Bit $tmp3049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2946, $tmp3048);
bool $tmp3050 = $tmp3049.value;
if ($tmp3050) goto block23; else goto block24;
block23:;
org$pandalanguage$pandac$Position* $tmp3051 = (org$pandalanguage$pandac$Position*) ($tmp2944->$data + 0);
org$pandalanguage$pandac$Position $tmp3052 = *$tmp3051;
*(&local18) = $tmp3052;
org$pandalanguage$pandac$ASTNode** $tmp3053 = (org$pandalanguage$pandac$ASTNode**) ($tmp2944->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp3054 = *$tmp3053;
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3054));
org$pandalanguage$pandac$ASTNode* $tmp3055 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3055));
*(&local19) = $tmp3054;
org$pandalanguage$pandac$FixedArray** $tmp3056 = (org$pandalanguage$pandac$FixedArray**) ($tmp2944->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp3057 = *$tmp3056;
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3057));
org$pandalanguage$pandac$FixedArray* $tmp3058 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3058));
*(&local20) = $tmp3057;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp3059 = (org$pandalanguage$pandac$MethodDecl$Kind*) ($tmp2944->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp3060 = *$tmp3059;
*(&local21) = $tmp3060;
panda$core$String** $tmp3061 = (panda$core$String**) ($tmp2944->$data + 40);
panda$core$String* $tmp3062 = *$tmp3061;
*(&local22) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3062));
panda$core$String* $tmp3063 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3063));
*(&local22) = $tmp3062;
org$pandalanguage$pandac$FixedArray** $tmp3064 = (org$pandalanguage$pandac$FixedArray**) ($tmp2944->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp3065 = *$tmp3064;
*(&local23) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3065));
org$pandalanguage$pandac$FixedArray* $tmp3066 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3066));
*(&local23) = $tmp3065;
org$pandalanguage$pandac$FixedArray** $tmp3067 = (org$pandalanguage$pandac$FixedArray**) ($tmp2944->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp3068 = *$tmp3067;
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3068));
org$pandalanguage$pandac$FixedArray* $tmp3069 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3069));
*(&local24) = $tmp3068;
org$pandalanguage$pandac$ASTNode** $tmp3070 = (org$pandalanguage$pandac$ASTNode**) ($tmp2944->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp3071 = *$tmp3070;
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3071));
org$pandalanguage$pandac$ASTNode* $tmp3072 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3072));
*(&local25) = $tmp3071;
org$pandalanguage$pandac$FixedArray** $tmp3073 = (org$pandalanguage$pandac$FixedArray**) ($tmp2944->$data + 72);
org$pandalanguage$pandac$FixedArray* $tmp3074 = *$tmp3073;
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3074));
org$pandalanguage$pandac$FixedArray* $tmp3075 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3075));
*(&local26) = $tmp3074;
// line 859
org$pandalanguage$pandac$MethodDecl$Kind $tmp3076 = *(&local21);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3077;
$tmp3077 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3077->value = $tmp3076;
panda$core$Int64 $tmp3078 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp3079 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp3078);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp3080;
$tmp3080 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp3080->value = $tmp3079;
ITable* $tmp3081 = ((panda$core$Equatable*) $tmp3077)->$class->itable;
while ($tmp3081->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3081 = $tmp3081->next;
}
$fn3083 $tmp3082 = $tmp3081->methods[0];
panda$core$Bit $tmp3084 = $tmp3082(((panda$core$Equatable*) $tmp3077), ((panda$core$Equatable*) $tmp3080));
bool $tmp3085 = $tmp3084.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3080)));
// unreffing REF($431:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3077)));
// unreffing REF($427:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp3085) goto block25; else goto block26;
block25:;
// line 860
org$pandalanguage$pandac$Position $tmp3086 = *(&local18);
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp3086, &$s3087);
// line 861
org$pandalanguage$pandac$FixedArray* $tmp3088 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3088));
// unreffing statements
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3089 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3089));
// unreffing rawReturnType
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3090 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3090));
// unreffing parameters
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3091 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3091));
// unreffing generics
*(&local23) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp3092 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3092));
// unreffing rawName
*(&local22) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3093 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3093));
// unreffing annotations
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3094 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3094));
// unreffing dc
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp2942);
// unreffing REF($78:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp3095 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3095));
// unreffing e
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block26:;
// line 863
panda$collections$HashMap* $tmp3096 = *(&local3);
panda$core$String* $tmp3097 = *(&local2);
panda$collections$Array* $tmp3098 = *(&local1);
org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, param1, ((panda$collections$MapView*) $tmp3096), $tmp3097, ((panda$collections$List*) $tmp3098));
// line 864
*(&local27) = ((panda$core$String*) NULL);
// line 865
panda$core$String* $tmp3099 = *(&local22);
panda$core$Bit $tmp3100 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp3099, &$s3101);
bool $tmp3102 = $tmp3100.value;
if ($tmp3102) goto block27; else goto block29;
block27:;
// line 866
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s3103));
panda$core$String* $tmp3104 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3104));
*(&local27) = &$s3105;
// line 867
panda$collections$Array* $tmp3106 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3106);
*(&local28) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3106));
panda$collections$Array* $tmp3107 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3107));
*(&local28) = $tmp3106;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3106));
// unreffing REF($512:panda.collections.Array<org.pandalanguage.pandac.MethodDecl.Parameter>)
// line 868
panda$collections$Array* $tmp3108 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3108);
*(&local29) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3108));
panda$collections$Array* $tmp3109 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3109));
*(&local29) = $tmp3108;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3108));
// unreffing REF($526:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 869
panda$collections$Array* $tmp3110 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3110);
*(&local30) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3110));
panda$collections$Array* $tmp3111 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3111));
*(&local30) = $tmp3110;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3110));
// unreffing REF($540:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 870
org$pandalanguage$pandac$FixedArray* $tmp3112 = *(&local24);
ITable* $tmp3113 = ((panda$collections$Iterable*) $tmp3112)->$class->itable;
while ($tmp3113->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp3113 = $tmp3113->next;
}
$fn3115 $tmp3114 = $tmp3113->methods[0];
panda$collections$Iterator* $tmp3116 = $tmp3114(((panda$collections$Iterable*) $tmp3112));
goto block30;
block30:;
ITable* $tmp3117 = $tmp3116->$class->itable;
while ($tmp3117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp3117 = $tmp3117->next;
}
$fn3119 $tmp3118 = $tmp3117->methods[0];
panda$core$Bit $tmp3120 = $tmp3118($tmp3116);
bool $tmp3121 = $tmp3120.value;
if ($tmp3121) goto block32; else goto block31;
block31:;
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp3122 = $tmp3116->$class->itable;
while ($tmp3122->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp3122 = $tmp3122->next;
}
$fn3124 $tmp3123 = $tmp3122->methods[1];
panda$core$Object* $tmp3125 = $tmp3123($tmp3116);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp3125)));
org$pandalanguage$pandac$ASTNode* $tmp3126 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3126));
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) $tmp3125);
// line 871
org$pandalanguage$pandac$ASTNode* $tmp3127 = *(&local31);
panda$core$Int64* $tmp3128 = &$tmp3127->$rawValue;
panda$core$Int64 $tmp3129 = *$tmp3128;
panda$core$Int64 $tmp3130 = (panda$core$Int64) {34};
panda$core$Bit $tmp3131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3129, $tmp3130);
bool $tmp3132 = $tmp3131.value;
if ($tmp3132) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp3133 = (org$pandalanguage$pandac$Position*) ($tmp3127->$data + 0);
org$pandalanguage$pandac$Position $tmp3134 = *$tmp3133;
*(&local32) = $tmp3134;
panda$core$String** $tmp3135 = (panda$core$String**) ($tmp3127->$data + 16);
panda$core$String* $tmp3136 = *$tmp3135;
*(&local33) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3136));
panda$core$String* $tmp3137 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3137));
*(&local33) = $tmp3136;
org$pandalanguage$pandac$ASTNode** $tmp3138 = (org$pandalanguage$pandac$ASTNode**) ($tmp3127->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp3139 = *$tmp3138;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3139));
org$pandalanguage$pandac$ASTNode* $tmp3140 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3140));
*(&local34) = $tmp3139;
// line 873
panda$collections$Array* $tmp3141 = *(&local28);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp3142 = (org$pandalanguage$pandac$MethodDecl$Parameter*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
panda$core$String* $tmp3143 = *(&local33);
org$pandalanguage$pandac$ASTNode* $tmp3144 = *(&local34);
org$pandalanguage$pandac$Type* $tmp3145 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp3144);
org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp3142, $tmp3143, $tmp3145);
panda$collections$Array$add$panda$collections$Array$T($tmp3141, ((panda$core$Object*) $tmp3142));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3145));
// unreffing REF($612:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3142));
// unreffing REF($609:org.pandalanguage.pandac.MethodDecl.Parameter)
// line 875
panda$collections$Array* $tmp3146 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp3147 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3148 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp3149 = *(&local32);
panda$core$String* $tmp3150 = *(&local33);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3147, $tmp3148, $tmp3149, $tmp3150);
panda$collections$Array$add$panda$collections$Array$T($tmp3146, ((panda$core$Object*) $tmp3147));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3147));
// unreffing REF($625:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3151 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3151));
// unreffing type
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp3152 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3152));
// unreffing name
*(&local33) = ((panda$core$String*) NULL);
goto block33;
block35:;
// line 878
panda$core$Bit $tmp3153 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3154 = $tmp3153.value;
if ($tmp3154) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp3155 = (panda$core$Int64) {878};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3156, $tmp3155);
abort(); // unreachable
block36:;
goto block33;
block33:;
panda$core$Panda$unref$panda$core$Object$Q($tmp3125);
// unreffing REF($569:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp3157 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3157));
// unreffing p
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block30;
block32:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3116));
// unreffing REF($558:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 882
org$pandalanguage$pandac$ASTNode* $tmp3158 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3159 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position $tmp3160 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp3161 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3162 = (panda$core$Int64) {22};
org$pandalanguage$pandac$Position $tmp3163 = *(&local18);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3161, $tmp3162, $tmp3163, &$s3164);
org$pandalanguage$pandac$FixedArray* $tmp3165 = (org$pandalanguage$pandac$FixedArray*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp3165);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3158, $tmp3159, $tmp3160, $tmp3161, $tmp3165);
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3158));
org$pandalanguage$pandac$ASTNode* $tmp3166 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3166));
*(&local35) = $tmp3158;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3165));
// unreffing REF($674:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3161));
// unreffing REF($670:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3158));
// unreffing REF($667:org.pandalanguage.pandac.ASTNode)
// line 885
panda$collections$Array* $tmp3167 = *(&local29);
org$pandalanguage$pandac$ASTNode* $tmp3168 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3169 = (panda$core$Int64) {9};
org$pandalanguage$pandac$Position $tmp3170 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp3171 = (org$pandalanguage$pandac$ASTNode*) frostObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3172 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Position $tmp3173 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp3174 = *(&local35);
panda$core$String* $tmp3175 = *(&local27);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp3171, $tmp3172, $tmp3173, $tmp3174, $tmp3175);
panda$collections$Array* $tmp3176 = *(&local30);
org$pandalanguage$pandac$FixedArray* $tmp3177 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp3176);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3168, $tmp3169, $tmp3170, $tmp3171, $tmp3177);
panda$collections$Array$add$panda$collections$Array$T($tmp3167, ((panda$core$Object*) $tmp3168));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3177));
// unreffing REF($708:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3171));
// unreffing REF($700:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3168));
// unreffing REF($697:org.pandalanguage.pandac.ASTNode)
// line 888
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
// line 889
org$pandalanguage$pandac$ASTNode* $tmp3178 = *(&local25);
panda$core$Bit $tmp3179 = panda$core$Bit$init$builtin_bit($tmp3178 != NULL);
bool $tmp3180 = $tmp3179.value;
if ($tmp3180) goto block38; else goto block40;
block38:;
// line 890
org$pandalanguage$pandac$ASTNode* $tmp3181 = *(&local25);
panda$core$Bit $tmp3182 = panda$core$Bit$init$builtin_bit($tmp3181 != NULL);
bool $tmp3183 = $tmp3182.value;
if ($tmp3183) goto block41; else goto block42;
block42:;
panda$core$Int64 $tmp3184 = (panda$core$Int64) {890};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3185, $tmp3184, &$s3186);
abort(); // unreachable
block41:;
org$pandalanguage$pandac$Type* $tmp3187 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(param0, $tmp3181);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3187));
org$pandalanguage$pandac$Type* $tmp3188 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3188));
*(&local36) = $tmp3187;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3187));
// unreffing REF($740:org.pandalanguage.pandac.Type)
goto block39;
block40:;
// line 1
// line 893
org$pandalanguage$pandac$Type* $tmp3189 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3189));
org$pandalanguage$pandac$Type* $tmp3190 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3190));
*(&local36) = $tmp3189;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3189));
// unreffing REF($753:org.pandalanguage.pandac.Type)
goto block39;
block39:;
// line 895
org$pandalanguage$pandac$MethodDecl* $tmp3191 = (org$pandalanguage$pandac$MethodDecl*) frostObjectAlloc(144, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
org$pandalanguage$pandac$ClassDecl** $tmp3192 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3193 = *$tmp3192;
panda$core$Bit $tmp3194 = panda$core$Bit$init$builtin_bit($tmp3193 != NULL);
bool $tmp3195 = $tmp3194.value;
if ($tmp3195) goto block43; else goto block44;
block44:;
panda$core$Int64 $tmp3196 = (panda$core$Int64) {895};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3197, $tmp3196, &$s3198);
abort(); // unreachable
block43:;
org$pandalanguage$pandac$Position $tmp3199 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$Annotations* $tmp3200 = (org$pandalanguage$pandac$Annotations*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
panda$core$Int64 $tmp3201 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp3200, $tmp3201);
panda$core$Int64 $tmp3202 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp3203 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp3202);
panda$collections$Array* $tmp3204 = *(&local28);
org$pandalanguage$pandac$Type* $tmp3205 = *(&local36);
panda$collections$Array* $tmp3206 = *(&local29);
org$pandalanguage$pandac$FixedArray* $tmp3207 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp3206);
org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3191, $tmp3193, $tmp3199, ((panda$core$String*) NULL), $tmp3200, $tmp3203, &$s3208, ((panda$collections$Array*) NULL), $tmp3204, $tmp3205, $tmp3207);
*(&local37) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3191));
org$pandalanguage$pandac$MethodDecl* $tmp3209 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3209));
*(&local37) = $tmp3191;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3207));
// unreffing REF($786:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3200));
// unreffing REF($777:org.pandalanguage.pandac.Annotations)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3191));
// unreffing REF($765:org.pandalanguage.pandac.MethodDecl)
// line 899
org$pandalanguage$pandac$ClassDecl** $tmp3210 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3211 = *$tmp3210;
panda$core$Bit $tmp3212 = panda$core$Bit$init$builtin_bit($tmp3211 != NULL);
bool $tmp3213 = $tmp3212.value;
if ($tmp3213) goto block45; else goto block46;
block46:;
panda$core$Int64 $tmp3214 = (panda$core$Int64) {899};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3215, $tmp3214, &$s3216);
abort(); // unreachable
block45:;
panda$collections$Array** $tmp3217 = &$tmp3211->methods;
panda$collections$Array* $tmp3218 = *$tmp3217;
org$pandalanguage$pandac$MethodDecl* $tmp3219 = *(&local37);
panda$collections$Array$add$panda$collections$Array$T($tmp3218, ((panda$core$Object*) $tmp3219));
org$pandalanguage$pandac$MethodDecl* $tmp3220 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3220));
// unreffing bareMain
*(&local37) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp3221 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3221));
// unreffing returnType
*(&local36) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3222 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3222));
// unreffing bareConstruct
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3223 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3223));
// unreffing mainArguments
*(&local30) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3224 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3224));
// unreffing mainStatements
*(&local29) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp3225 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3225));
// unreffing mainParameters
*(&local28) = ((panda$collections$Array*) NULL);
goto block28;
block29:;
// line 1
// line 902
panda$core$String* $tmp3226 = *(&local22);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3226));
panda$core$String* $tmp3227 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3227));
*(&local27) = $tmp3226;
goto block28;
block28:;
// line 904
panda$core$Weak** $tmp3228 = &param0->compiler;
panda$core$Weak* $tmp3229 = *$tmp3228;
panda$core$Object* $tmp3230 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3229);
panda$collections$Stack** $tmp3231 = &((org$pandalanguage$pandac$Compiler*) $tmp3230)->currentClass;
panda$collections$Stack* $tmp3232 = *$tmp3231;
org$pandalanguage$pandac$ClassDecl** $tmp3233 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3234 = *$tmp3233;
panda$core$Bit $tmp3235 = panda$core$Bit$init$builtin_bit($tmp3234 != NULL);
bool $tmp3236 = $tmp3235.value;
if ($tmp3236) goto block47; else goto block48;
block48:;
panda$core$Int64 $tmp3237 = (panda$core$Int64) {904};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3238, $tmp3237, &$s3239);
abort(); // unreachable
block47:;
panda$collections$Stack$push$panda$collections$Stack$T($tmp3232, ((panda$core$Object*) $tmp3234));
panda$core$Panda$unref$panda$core$Object$Q($tmp3230);
// unreffing REF($868:panda.core.Weak.T)
// line 905
org$pandalanguage$pandac$ClassDecl** $tmp3240 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3241 = *$tmp3240;
panda$core$Bit $tmp3242 = panda$core$Bit$init$builtin_bit($tmp3241 != NULL);
bool $tmp3243 = $tmp3242.value;
if ($tmp3243) goto block49; else goto block50;
block50:;
panda$core$Int64 $tmp3244 = (panda$core$Int64) {905};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3245, $tmp3244, &$s3246);
abort(); // unreachable
block49:;
org$pandalanguage$pandac$Position $tmp3247 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp3248 = *(&local19);
org$pandalanguage$pandac$FixedArray* $tmp3249 = *(&local20);
org$pandalanguage$pandac$MethodDecl$Kind $tmp3250 = *(&local21);
panda$core$String* $tmp3251 = *(&local27);
org$pandalanguage$pandac$FixedArray* $tmp3252 = *(&local23);
org$pandalanguage$pandac$FixedArray* $tmp3253 = *(&local24);
org$pandalanguage$pandac$ASTNode* $tmp3254 = *(&local25);
org$pandalanguage$pandac$FixedArray* $tmp3255 = *(&local26);
org$pandalanguage$pandac$MethodDecl* $tmp3256 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(param0, $tmp3241, $tmp3247, $tmp3248, $tmp3249, $tmp3250, $tmp3251, $tmp3252, $tmp3253, $tmp3254, $tmp3255);
*(&local38) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3256));
org$pandalanguage$pandac$MethodDecl* $tmp3257 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3257));
*(&local38) = $tmp3256;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3256));
// unreffing REF($908:org.pandalanguage.pandac.MethodDecl?)
// line 907
org$pandalanguage$pandac$MethodDecl* $tmp3258 = *(&local38);
panda$core$Bit $tmp3259 = panda$core$Bit$init$builtin_bit($tmp3258 != NULL);
bool $tmp3260 = $tmp3259.value;
if ($tmp3260) goto block53; else goto block54;
block54:;
panda$core$Int64 $tmp3261 = (panda$core$Int64) {907};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3262, $tmp3261, &$s3263);
abort(); // unreachable
block53:;
org$pandalanguage$pandac$Annotations** $tmp3264 = &$tmp3258->annotations;
org$pandalanguage$pandac$Annotations* $tmp3265 = *$tmp3264;
panda$core$Bit $tmp3266 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp3265);
bool $tmp3267 = $tmp3266.value;
if ($tmp3267) goto block51; else goto block52;
block51:;
// line 908
org$pandalanguage$pandac$MethodDecl* $tmp3268 = *(&local38);
panda$core$Bit $tmp3269 = panda$core$Bit$init$builtin_bit($tmp3268 != NULL);
bool $tmp3270 = $tmp3269.value;
if ($tmp3270) goto block55; else goto block56;
block56:;
panda$core$Int64 $tmp3271 = (panda$core$Int64) {908};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3272, $tmp3271, &$s3273);
abort(); // unreachable
block55:;
org$pandalanguage$pandac$Position* $tmp3274 = &((org$pandalanguage$pandac$Symbol*) $tmp3268)->position;
org$pandalanguage$pandac$Position $tmp3275 = *$tmp3274;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp3275, &$s3276);
// line 910
org$pandalanguage$pandac$MethodDecl* $tmp3277 = *(&local38);
panda$core$Bit $tmp3278 = panda$core$Bit$init$builtin_bit($tmp3277 != NULL);
bool $tmp3279 = $tmp3278.value;
if ($tmp3279) goto block57; else goto block58;
block58:;
panda$core$Int64 $tmp3280 = (panda$core$Int64) {910};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3281, $tmp3280, &$s3282);
abort(); // unreachable
block57:;
org$pandalanguage$pandac$Annotations** $tmp3283 = &$tmp3277->annotations;
org$pandalanguage$pandac$Annotations* $tmp3284 = *$tmp3283;
panda$core$Int64* $tmp3285 = &$tmp3284->flags;
panda$core$Int64 $tmp3286 = *$tmp3285;
panda$core$Int64 $tmp3287 = (panda$core$Int64) {16};
panda$core$Int64 $tmp3288 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp3287);
panda$core$Int64 $tmp3289 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64($tmp3286, $tmp3288);
panda$core$Int64* $tmp3290 = &$tmp3284->flags;
*$tmp3290 = $tmp3289;
goto block52;
block52:;
// line 912
panda$core$Weak** $tmp3291 = &param0->compiler;
panda$core$Weak* $tmp3292 = *$tmp3291;
panda$core$Object* $tmp3293 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3292);
panda$collections$Stack** $tmp3294 = &((org$pandalanguage$pandac$Compiler*) $tmp3293)->currentClass;
panda$collections$Stack* $tmp3295 = *$tmp3294;
panda$core$Int64 $tmp3296 = (panda$core$Int64) {0};
panda$core$Object* $tmp3297 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp3295, $tmp3296);
org$pandalanguage$pandac$ClassDecl** $tmp3298 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3299 = *$tmp3298;
bool $tmp3300 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3297) == $tmp3299;
panda$core$Bit $tmp3301 = panda$core$Bit$init$builtin_bit($tmp3300);
bool $tmp3302 = $tmp3301.value;
if ($tmp3302) goto block59; else goto block60;
block60:;
panda$core$Int64 $tmp3303 = (panda$core$Int64) {912};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3304, $tmp3303);
abort(); // unreachable
block59:;
panda$core$Panda$unref$panda$core$Object$Q($tmp3297);
// unreffing REF($977:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp3293);
// unreffing REF($971:panda.core.Weak.T)
// line 913
panda$core$Weak** $tmp3305 = &param0->compiler;
panda$core$Weak* $tmp3306 = *$tmp3305;
panda$core$Object* $tmp3307 = panda$core$Weak$get$R$panda$core$Weak$T($tmp3306);
panda$collections$Stack** $tmp3308 = &((org$pandalanguage$pandac$Compiler*) $tmp3307)->currentClass;
panda$collections$Stack* $tmp3309 = *$tmp3308;
panda$core$Object* $tmp3310 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp3309);
panda$core$Panda$unref$panda$core$Object$Q($tmp3310);
// unreffing REF($1003:panda.collections.Stack.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp3307);
// unreffing REF($998:panda.core.Weak.T)
// line 914
org$pandalanguage$pandac$ClassDecl** $tmp3311 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3312 = *$tmp3311;
panda$core$Bit $tmp3313 = panda$core$Bit$init$builtin_bit($tmp3312 != NULL);
bool $tmp3314 = $tmp3313.value;
if ($tmp3314) goto block61; else goto block62;
block62:;
panda$core$Int64 $tmp3315 = (panda$core$Int64) {914};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3316, $tmp3315, &$s3317);
abort(); // unreachable
block61:;
panda$collections$Array** $tmp3318 = &$tmp3312->methods;
panda$collections$Array* $tmp3319 = *$tmp3318;
org$pandalanguage$pandac$MethodDecl* $tmp3320 = *(&local38);
panda$core$Bit $tmp3321 = panda$core$Bit$init$builtin_bit($tmp3320 != NULL);
bool $tmp3322 = $tmp3321.value;
if ($tmp3322) goto block63; else goto block64;
block64:;
panda$core$Int64 $tmp3323 = (panda$core$Int64) {914};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3324, $tmp3323, &$s3325);
abort(); // unreachable
block63:;
panda$collections$Array$add$panda$collections$Array$T($tmp3319, ((panda$core$Object*) $tmp3320));
// line 915
org$pandalanguage$pandac$ClassDecl** $tmp3326 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3327 = *$tmp3326;
panda$core$Bit $tmp3328 = panda$core$Bit$init$builtin_bit($tmp3327 != NULL);
bool $tmp3329 = $tmp3328.value;
if ($tmp3329) goto block65; else goto block66;
block66:;
panda$core$Int64 $tmp3330 = (panda$core$Int64) {915};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3331, $tmp3330, &$s3332);
abort(); // unreachable
block65:;
org$pandalanguage$pandac$SymbolTable** $tmp3333 = &$tmp3327->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp3334 = *$tmp3333;
org$pandalanguage$pandac$MethodDecl* $tmp3335 = *(&local38);
panda$core$Bit $tmp3336 = panda$core$Bit$init$builtin_bit($tmp3335 != NULL);
bool $tmp3337 = $tmp3336.value;
if ($tmp3337) goto block67; else goto block68;
block68:;
panda$core$Int64 $tmp3338 = (panda$core$Int64) {915};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3339, $tmp3338, &$s3340);
abort(); // unreachable
block67:;
org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol($tmp3334, ((org$pandalanguage$pandac$Symbol*) $tmp3335));
org$pandalanguage$pandac$MethodDecl* $tmp3341 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3341));
// unreffing m
*(&local38) = ((org$pandalanguage$pandac$MethodDecl*) NULL);
panda$core$String* $tmp3342 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3342));
// unreffing name
*(&local27) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3343 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3343));
// unreffing statements
*(&local26) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3344 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3344));
// unreffing rawReturnType
*(&local25) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3345 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3345));
// unreffing parameters
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3346 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3346));
// unreffing generics
*(&local23) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp3347 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3347));
// unreffing rawName
*(&local22) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3348 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3348));
// unreffing annotations
*(&local20) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3349 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3349));
// unreffing dc
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block24:;
panda$core$Int64 $tmp3350 = (panda$core$Int64) {18};
panda$core$Bit $tmp3351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2946, $tmp3350);
bool $tmp3352 = $tmp3351.value;
if ($tmp3352) goto block69; else goto block70;
block69:;
org$pandalanguage$pandac$Position* $tmp3353 = (org$pandalanguage$pandac$Position*) ($tmp2944->$data + 0);
org$pandalanguage$pandac$Position $tmp3354 = *$tmp3353;
*(&local39) = $tmp3354;
org$pandalanguage$pandac$ASTNode** $tmp3355 = (org$pandalanguage$pandac$ASTNode**) ($tmp2944->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp3356 = *$tmp3355;
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3356));
org$pandalanguage$pandac$ASTNode* $tmp3357 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3357));
*(&local40) = $tmp3356;
org$pandalanguage$pandac$FixedArray** $tmp3358 = (org$pandalanguage$pandac$FixedArray**) ($tmp2944->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp3359 = *$tmp3358;
*(&local41) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3359));
org$pandalanguage$pandac$FixedArray* $tmp3360 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3360));
*(&local41) = $tmp3359;
org$pandalanguage$pandac$ASTNode** $tmp3361 = (org$pandalanguage$pandac$ASTNode**) ($tmp2944->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp3362 = *$tmp3361;
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3362));
org$pandalanguage$pandac$ASTNode* $tmp3363 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3363));
*(&local42) = $tmp3362;
// line 918
panda$collections$HashMap* $tmp3364 = *(&local3);
panda$core$String* $tmp3365 = *(&local2);
panda$collections$Array* $tmp3366 = *(&local1);
org$pandalanguage$pandac$Scanner$createBareCodeClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$panda$collections$List$LTorg$pandalanguage$pandac$ClassDecl$GT(param0, param1, ((panda$collections$MapView*) $tmp3364), $tmp3365, ((panda$collections$List*) $tmp3366));
// line 919
org$pandalanguage$pandac$ClassDecl** $tmp3367 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3368 = *$tmp3367;
panda$core$Bit $tmp3369 = panda$core$Bit$init$builtin_bit($tmp3368 != NULL);
bool $tmp3370 = $tmp3369.value;
if ($tmp3370) goto block71; else goto block72;
block72:;
panda$core$Int64 $tmp3371 = (panda$core$Int64) {919};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3372, $tmp3371, &$s3373);
abort(); // unreachable
block71:;
panda$collections$Array** $tmp3374 = &$tmp3368->fields;
panda$collections$Array* $tmp3375 = *$tmp3374;
ITable* $tmp3376 = ((panda$collections$CollectionView*) $tmp3375)->$class->itable;
while ($tmp3376->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3376 = $tmp3376->next;
}
$fn3378 $tmp3377 = $tmp3376->methods[0];
panda$core$Int64 $tmp3379 = $tmp3377(((panda$collections$CollectionView*) $tmp3375));
*(&local43) = $tmp3379;
// line 920
org$pandalanguage$pandac$ClassDecl** $tmp3380 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3381 = *$tmp3380;
panda$core$Bit $tmp3382 = panda$core$Bit$init$builtin_bit($tmp3381 != NULL);
bool $tmp3383 = $tmp3382.value;
if ($tmp3383) goto block73; else goto block74;
block74:;
panda$core$Int64 $tmp3384 = (panda$core$Int64) {920};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3385, $tmp3384, &$s3386);
abort(); // unreachable
block73:;
org$pandalanguage$pandac$Position $tmp3387 = *(&local39);
org$pandalanguage$pandac$ASTNode* $tmp3388 = *(&local40);
org$pandalanguage$pandac$FixedArray* $tmp3389 = *(&local41);
org$pandalanguage$pandac$ASTNode* $tmp3390 = *(&local42);
org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(param0, $tmp3381, $tmp3387, $tmp3388, $tmp3389, $tmp3390);
// line 921
panda$core$Int64 $tmp3391 = *(&local43);
org$pandalanguage$pandac$ClassDecl** $tmp3392 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3393 = *$tmp3392;
panda$core$Bit $tmp3394 = panda$core$Bit$init$builtin_bit($tmp3393 != NULL);
bool $tmp3395 = $tmp3394.value;
if ($tmp3395) goto block75; else goto block76;
block76:;
panda$core$Int64 $tmp3396 = (panda$core$Int64) {921};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3397, $tmp3396, &$s3398);
abort(); // unreachable
block75:;
panda$collections$Array** $tmp3399 = &$tmp3393->fields;
panda$collections$Array* $tmp3400 = *$tmp3399;
ITable* $tmp3401 = ((panda$collections$CollectionView*) $tmp3400)->$class->itable;
while ($tmp3401->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp3401 = $tmp3401->next;
}
$fn3403 $tmp3402 = $tmp3401->methods[0];
panda$core$Int64 $tmp3404 = $tmp3402(((panda$collections$CollectionView*) $tmp3400));
panda$core$Bit $tmp3405 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp3406 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp3391, $tmp3404, $tmp3405);
panda$core$Int64 $tmp3407 = $tmp3406.min;
*(&local44) = $tmp3407;
panda$core$Int64 $tmp3408 = $tmp3406.max;
panda$core$Bit $tmp3409 = $tmp3406.inclusive;
bool $tmp3410 = $tmp3409.value;
panda$core$Int64 $tmp3411 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp3412 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3411);
if ($tmp3410) goto block80; else goto block81;
block80:;
int64_t $tmp3413 = $tmp3407.value;
int64_t $tmp3414 = $tmp3408.value;
bool $tmp3415 = $tmp3413 <= $tmp3414;
panda$core$Bit $tmp3416 = (panda$core$Bit) {$tmp3415};
bool $tmp3417 = $tmp3416.value;
if ($tmp3417) goto block77; else goto block78;
block81:;
int64_t $tmp3418 = $tmp3407.value;
int64_t $tmp3419 = $tmp3408.value;
bool $tmp3420 = $tmp3418 < $tmp3419;
panda$core$Bit $tmp3421 = (panda$core$Bit) {$tmp3420};
bool $tmp3422 = $tmp3421.value;
if ($tmp3422) goto block77; else goto block78;
block77:;
// line 922
org$pandalanguage$pandac$ClassDecl** $tmp3423 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3424 = *$tmp3423;
panda$core$Bit $tmp3425 = panda$core$Bit$init$builtin_bit($tmp3424 != NULL);
bool $tmp3426 = $tmp3425.value;
if ($tmp3426) goto block82; else goto block83;
block83:;
panda$core$Int64 $tmp3427 = (panda$core$Int64) {922};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3428, $tmp3427, &$s3429);
abort(); // unreachable
block82:;
panda$collections$Array** $tmp3430 = &$tmp3424->fields;
panda$collections$Array* $tmp3431 = *$tmp3430;
panda$core$Int64 $tmp3432 = *(&local44);
panda$core$Object* $tmp3433 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp3431, $tmp3432);
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3433)));
org$pandalanguage$pandac$FieldDecl* $tmp3434 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3434));
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) $tmp3433);
panda$core$Panda$unref$panda$core$Object$Q($tmp3433);
// unreffing REF($1233:panda.collections.Array.T)
// line 923
org$pandalanguage$pandac$FieldDecl* $tmp3435 = *(&local45);
org$pandalanguage$pandac$FieldDecl$Kind* $tmp3436 = &$tmp3435->fieldKind;
org$pandalanguage$pandac$FieldDecl$Kind $tmp3437 = *$tmp3436;
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp3438;
$tmp3438 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp3438->value = $tmp3437;
panda$core$Int64 $tmp3439 = (panda$core$Int64) {2};
org$pandalanguage$pandac$FieldDecl$Kind $tmp3440 = org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64($tmp3439);
org$pandalanguage$pandac$FieldDecl$Kind$wrapper* $tmp3441;
$tmp3441 = (org$pandalanguage$pandac$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$Kind$wrapperclass);
$tmp3441->value = $tmp3440;
ITable* $tmp3442 = ((panda$core$Equatable*) $tmp3438)->$class->itable;
while ($tmp3442->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3442 = $tmp3442->next;
}
$fn3444 $tmp3443 = $tmp3442->methods[1];
panda$core$Bit $tmp3445 = $tmp3443(((panda$core$Equatable*) $tmp3438), ((panda$core$Equatable*) $tmp3441));
bool $tmp3446 = $tmp3445.value;
if ($tmp3446) goto block86; else goto block87;
block86:;
org$pandalanguage$pandac$FieldDecl* $tmp3447 = *(&local45);
org$pandalanguage$pandac$Annotations** $tmp3448 = &$tmp3447->annotations;
org$pandalanguage$pandac$Annotations* $tmp3449 = *$tmp3448;
panda$core$Bit $tmp3450 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp3449);
*(&local46) = $tmp3450;
goto block88;
block87:;
*(&local46) = $tmp3445;
goto block88;
block88:;
panda$core$Bit $tmp3451 = *(&local46);
bool $tmp3452 = $tmp3451.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3441)));
// unreffing REF($1253:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3438)));
// unreffing REF($1249:panda.core.Equatable<org.pandalanguage.pandac.FieldDecl.Kind>)
if ($tmp3452) goto block84; else goto block85;
block84:;
// line 925
org$pandalanguage$pandac$FieldDecl* $tmp3453 = *(&local45);
org$pandalanguage$pandac$Position* $tmp3454 = &((org$pandalanguage$pandac$Symbol*) $tmp3453)->position;
org$pandalanguage$pandac$Position $tmp3455 = *$tmp3454;
org$pandalanguage$pandac$Scanner$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp3455, &$s3456);
goto block85;
block85:;
org$pandalanguage$pandac$FieldDecl* $tmp3457 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3457));
// unreffing f
*(&local45) = ((org$pandalanguage$pandac$FieldDecl*) NULL);
goto block79;
block79:;
panda$core$Int64 $tmp3458 = *(&local44);
int64_t $tmp3459 = $tmp3408.value;
int64_t $tmp3460 = $tmp3458.value;
int64_t $tmp3461 = $tmp3459 - $tmp3460;
panda$core$Int64 $tmp3462 = (panda$core$Int64) {$tmp3461};
panda$core$UInt64 $tmp3463 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3462);
if ($tmp3410) goto block90; else goto block91;
block90:;
uint64_t $tmp3464 = $tmp3463.value;
uint64_t $tmp3465 = $tmp3412.value;
bool $tmp3466 = $tmp3464 >= $tmp3465;
panda$core$Bit $tmp3467 = (panda$core$Bit) {$tmp3466};
bool $tmp3468 = $tmp3467.value;
if ($tmp3468) goto block89; else goto block78;
block91:;
uint64_t $tmp3469 = $tmp3463.value;
uint64_t $tmp3470 = $tmp3412.value;
bool $tmp3471 = $tmp3469 > $tmp3470;
panda$core$Bit $tmp3472 = (panda$core$Bit) {$tmp3471};
bool $tmp3473 = $tmp3472.value;
if ($tmp3473) goto block89; else goto block78;
block89:;
int64_t $tmp3474 = $tmp3458.value;
int64_t $tmp3475 = $tmp3411.value;
int64_t $tmp3476 = $tmp3474 + $tmp3475;
panda$core$Int64 $tmp3477 = (panda$core$Int64) {$tmp3476};
*(&local44) = $tmp3477;
goto block77;
block78:;
org$pandalanguage$pandac$ASTNode* $tmp3478 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3478));
// unreffing varDecl
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3479 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3479));
// unreffing annotations
*(&local41) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3480 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3480));
// unreffing dc
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block7;
block70:;
// line 931
panda$core$Bit $tmp3481 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3482 = $tmp3481.value;
if ($tmp3482) goto block92; else goto block93;
block93:;
panda$core$Int64 $tmp3483 = (panda$core$Int64) {931};
org$pandalanguage$pandac$ASTNode* $tmp3484 = *(&local4);
panda$core$String* $tmp3485 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3486, ((panda$core$Object*) $tmp3484));
panda$core$String* $tmp3487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3485, &$s3488);
org$pandalanguage$pandac$ASTNode* $tmp3489 = *(&local4);
panda$core$Int64* $tmp3490 = &$tmp3489->$rawValue;
panda$core$Int64 $tmp3491 = *$tmp3490;
panda$core$Int64$wrapper* $tmp3492;
$tmp3492 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp3492->value = $tmp3491;
panda$core$String* $tmp3493 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3487, ((panda$core$Object*) $tmp3492));
panda$core$String* $tmp3494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3493, &$s3495);
org$pandalanguage$pandac$ASTNode* $tmp3496 = *(&local4);
$fn3498 $tmp3497 = ($fn3498) $tmp3496->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3499 = $tmp3497($tmp3496);
org$pandalanguage$pandac$Position$wrapper* $tmp3500;
$tmp3500 = (org$pandalanguage$pandac$Position$wrapper*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp3500->value = $tmp3499;
panda$core$String* $tmp3501 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3494, ((panda$core$Object*) $tmp3500));
panda$core$String* $tmp3502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3501, &$s3503);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3504, $tmp3483, $tmp3502);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3502));
// unreffing REF($1349:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3501));
// unreffing REF($1348:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3500));
// unreffing REF($1347:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3494));
// unreffing REF($1343:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3493));
// unreffing REF($1342:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3492));
// unreffing REF($1341:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3487));
// unreffing REF($1337:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3485));
// unreffing REF($1336:panda.core.String)
abort(); // unreachable
block92:;
goto block7;
block7:;
panda$core$Panda$unref$panda$core$Object$Q($tmp2942);
// unreffing REF($78:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp3505 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3505));
// unreffing e
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block6:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2933));
// unreffing REF($67:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 935
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) NULL)));
panda$io$File** $tmp3506 = &param0->source;
panda$io$File* $tmp3507 = *$tmp3506;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3507));
panda$io$File** $tmp3508 = &param0->source;
*$tmp3508 = ((panda$io$File*) NULL);
// line 936
panda$collections$Array* $tmp3509 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp3509)));
panda$collections$HashMap* $tmp3510 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3510));
// unreffing aliases
*(&local3) = ((panda$collections$HashMap*) NULL);
panda$core$String* $tmp3511 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3511));
// unreffing currentPackage
*(&local2) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp3512 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3512));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3513 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3513));
// unreffing entries
*(&local0) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((panda$collections$ListView*) $tmp3509);
block3:;
// line 939
panda$core$Bit $tmp3514 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3515 = $tmp3514.value;
if ($tmp3515) goto block94; else goto block95;
block95:;
panda$core$Int64 $tmp3516 = (panda$core$Int64) {939};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3517, $tmp3516);
abort(); // unreachable
block94:;
goto block1;
block1:;
panda$core$Bit $tmp3518 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3519 = $tmp3518.value;
if ($tmp3519) goto block96; else goto block97;
block97:;
panda$core$Int64 $tmp3520 = (panda$core$Int64) {826};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3521, $tmp3520, &$s3522);
abort(); // unreachable
block96:;
abort(); // unreachable

}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* param0) {

// line 6
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$core$Weak** $tmp3523 = &param0->compiler;
panda$core$Weak* $tmp3524 = *$tmp3523;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3524));
org$pandalanguage$pandac$ClassDecl** $tmp3525 = &param0->bareCodeClass;
org$pandalanguage$pandac$ClassDecl* $tmp3526 = *$tmp3525;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3526));
panda$io$File** $tmp3527 = &param0->source;
panda$io$File* $tmp3528 = *$tmp3527;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3528));
return;

}

