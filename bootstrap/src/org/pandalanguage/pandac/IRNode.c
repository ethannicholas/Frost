#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/ChoiceCase.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/ASTNode.h"

static panda$core$String $s1;
org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, org$pandalanguage$pandac$IRNode$cleanup, org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit, org$pandalanguage$pandac$IRNode$default$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$IRNode$default$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q, org$pandalanguage$pandac$IRNode$transform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q} };

typedef org$pandalanguage$pandac$Type* (*$fn84)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn87)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn91)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn104)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn167)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn193)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn232)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn235)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn243)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn403)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn417)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn425)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn523)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn647)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn650)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn672)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn676)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn698)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn705)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn716)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn718)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn754)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn761)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn772)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn774)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn807)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn829)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn842)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn855)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn862)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn873)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn875)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn905)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn918)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn925)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn936)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn938)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn947)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn960)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn968)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn986)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn993)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1004)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1006)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1026)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1039)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1046)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1057)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1059)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1076)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1083)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1094)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1096)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1127)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1137)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1150)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1157)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1168)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1170)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1191)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1204)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1238)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1241)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1245)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1303)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1310)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1321)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1323)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1359)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1366)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1377)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1379)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1396)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1403)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1414)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1416)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1434)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1447)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1454)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1465)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1467)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn1493)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1544)(org$pandalanguage$pandac$IRNode*, panda$core$MutableMethod*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1579)(panda$core$Object*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1580)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1734)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1737)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1775)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1778)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn1831)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn1834)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn1863)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn1997)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2000)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2032)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2035)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2067)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2070)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2139)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2142)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2145)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2256)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2259)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn2262)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2350)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2353)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2440)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2443)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2446)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2504)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn2507)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2543)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2546)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$core$String* (*$fn2618)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2661)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2668)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2679)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2717)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2724)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2735)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2751)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2758)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2769)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2819)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2837)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2870)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2910)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2961)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2966)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2981)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2986)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn3022)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3029)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3040)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3071)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3079)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn3097)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3117)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn3158)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3165)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3176)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3260)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3267)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3278)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3323)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3330)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3341)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3357)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3364)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3375)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3402)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn3492)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3499)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3510)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3673)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3680)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3702)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3740)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3762)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3780)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3864)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3905)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3914)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3955)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3962)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3973)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s2682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static panda$core$String $s2738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x66\x69\x6e\x61\x6c\x6c\x79\x20\x7b\x0a", 12, -1355183944487068280, NULL };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s2928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s2938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s2940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s2963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s3043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s3102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s3119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s3148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s3189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s3227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s3249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s3281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s3313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s3344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s3378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s3429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s3444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s3479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s3482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s3513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s3561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s3565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s3584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s3587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s3600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66\x2d\x2a\x63\x61\x70\x74\x75\x72\x65\x2a\x2d", 15, 7664694969176949793, NULL };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s3634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s3639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s3642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s3683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s3698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3705 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s3708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s3729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s3757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s3821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s3824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s3826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s3854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s3857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s3860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s3886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x63\x61\x70\x74\x75\x72\x65\x2a\x2d", 11, -3294192213738444701, NULL };
static panda$core$String $s3901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s3908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s3911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s3945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s3976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };

org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$76_95 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp6;
    panda$core$Int64 $tmp7;
    org$pandalanguage$pandac$Type* type9 = NULL;
    org$pandalanguage$pandac$Type* $returnValue11;
    org$pandalanguage$pandac$Type* $tmp12;
    panda$core$Int64 $tmp15;
    org$pandalanguage$pandac$Type* type17 = NULL;
    org$pandalanguage$pandac$Type* $tmp19;
    panda$core$Int64 $tmp22;
    org$pandalanguage$pandac$Type* type24 = NULL;
    org$pandalanguage$pandac$Type* $tmp26;
    panda$core$Int64 $tmp29;
    org$pandalanguage$pandac$Type* type31 = NULL;
    org$pandalanguage$pandac$Type* $tmp33;
    panda$core$Int64 $tmp36;
    org$pandalanguage$pandac$Type* type38 = NULL;
    org$pandalanguage$pandac$Type* $tmp40;
    panda$core$Int64 $tmp43;
    org$pandalanguage$pandac$ChoiceCase* ce45 = NULL;
    org$pandalanguage$pandac$Type* $tmp47;
    org$pandalanguage$pandac$Type* $tmp48;
    panda$core$Int64 $tmp52;
    org$pandalanguage$pandac$ChoiceCase* ce54 = NULL;
    panda$core$Int64 field56;
    org$pandalanguage$pandac$Type* $tmp58;
    panda$core$Object* $tmp59;
    panda$core$Int64 $tmp63;
    org$pandalanguage$pandac$Type* type65 = NULL;
    org$pandalanguage$pandac$Type* $tmp67;
    panda$core$Int64 $tmp70;
    org$pandalanguage$pandac$Type* type72 = NULL;
    org$pandalanguage$pandac$Type* $tmp74;
    panda$core$Int64 $tmp77;
    org$pandalanguage$pandac$IRNode* m79 = NULL;
    org$pandalanguage$pandac$Type* $tmp81;
    panda$core$Object* $tmp82;
    org$pandalanguage$pandac$Type* $tmp83;
    org$pandalanguage$pandac$Type* $tmp86;
    panda$core$Int64 $tmp93;
    panda$core$Int64 $tmp98;
    org$pandalanguage$pandac$IRNode* expr100 = NULL;
    org$pandalanguage$pandac$Type* $tmp102;
    org$pandalanguage$pandac$Type* $tmp103;
    panda$core$Int64 $tmp108;
    org$pandalanguage$pandac$Type* type110 = NULL;
    org$pandalanguage$pandac$Type* $tmp112;
    panda$core$Int64 $tmp115;
    org$pandalanguage$pandac$Type* type117 = NULL;
    org$pandalanguage$pandac$Type* $tmp119;
    panda$core$Int64 $tmp122;
    org$pandalanguage$pandac$Type* $tmp124;
    org$pandalanguage$pandac$Type* $tmp125;
    panda$core$Int64 $tmp129;
    org$pandalanguage$pandac$Type* $tmp131;
    org$pandalanguage$pandac$Type* $tmp132;
    panda$core$Int64 $tmp136;
    org$pandalanguage$pandac$Type* type138 = NULL;
    org$pandalanguage$pandac$IRNode* target140 = NULL;
    org$pandalanguage$pandac$MethodRef* m142 = NULL;
    org$pandalanguage$pandac$Type* $tmp144;
    panda$core$Int64 $tmp147;
    org$pandalanguage$pandac$Type* type149 = NULL;
    org$pandalanguage$pandac$Type* $tmp151;
    panda$core$Int64 $tmp154;
    org$pandalanguage$pandac$Type* type156 = NULL;
    org$pandalanguage$pandac$Type* $tmp158;
    panda$core$Int64 $tmp161;
    org$pandalanguage$pandac$IRNode* base163 = NULL;
    org$pandalanguage$pandac$Type* $tmp165;
    org$pandalanguage$pandac$Type* $tmp166;
    panda$core$Int64 $tmp171;
    org$pandalanguage$pandac$Type* type173 = NULL;
    org$pandalanguage$pandac$Type* $tmp175;
    panda$core$Int64 $tmp178;
    org$pandalanguage$pandac$Type* type180 = NULL;
    panda$core$Int64 id182;
    org$pandalanguage$pandac$Type* $tmp184;
    panda$core$Int64 $tmp187;
    org$pandalanguage$pandac$IRNode* base189 = NULL;
    org$pandalanguage$pandac$Type* $tmp191;
    org$pandalanguage$pandac$Type* $tmp192;
    panda$core$Int64 $tmp197;
    org$pandalanguage$pandac$Type* type199 = NULL;
    org$pandalanguage$pandac$Type* $tmp201;
    panda$core$Int64 $tmp204;
    org$pandalanguage$pandac$Type* type206 = NULL;
    org$pandalanguage$pandac$Type* $tmp208;
    panda$core$Int64 $tmp211;
    org$pandalanguage$pandac$Type* $tmp213;
    org$pandalanguage$pandac$Type* $tmp214;
    panda$core$Int64 $tmp218;
    org$pandalanguage$pandac$Type* type220 = NULL;
    org$pandalanguage$pandac$Type* $tmp222;
    panda$core$Int64 $tmp225;
    org$pandalanguage$pandac$IRNode* ifTrue227 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse229 = NULL;
    org$pandalanguage$pandac$Type* $tmp231;
    org$pandalanguage$pandac$Type* $tmp234;
    org$pandalanguage$pandac$Type* $tmp241;
    org$pandalanguage$pandac$Type* $tmp242;
    panda$core$Int64 $tmp247;
    org$pandalanguage$pandac$Type* $tmp249;
    org$pandalanguage$pandac$Type* $tmp250;
    panda$core$Int64 $tmp254;
    org$pandalanguage$pandac$Type* $tmp256;
    org$pandalanguage$pandac$Type* $tmp257;
    panda$core$Int64 $tmp261;
    org$pandalanguage$pandac$Type* type263 = NULL;
    org$pandalanguage$pandac$Type* $tmp265;
    panda$core$Int64 $tmp268;
    org$pandalanguage$pandac$Type* $tmp270;
    org$pandalanguage$pandac$Type* $tmp271;
    panda$core$Int64 $tmp275;
    org$pandalanguage$pandac$Type* type277 = NULL;
    org$pandalanguage$pandac$Type* $tmp279;
    panda$core$Int64 $tmp282;
    org$pandalanguage$pandac$Type* $tmp284;
    org$pandalanguage$pandac$Type* $tmp285;
    panda$core$Int64 $tmp289;
    org$pandalanguage$pandac$Type* $tmp291;
    org$pandalanguage$pandac$Type* $tmp292;
    panda$core$Int64 $tmp296;
    org$pandalanguage$pandac$Type* type298 = NULL;
    org$pandalanguage$pandac$Type* $tmp300;
    panda$core$Int64 $tmp303;
    org$pandalanguage$pandac$Variable* variable305 = NULL;
    org$pandalanguage$pandac$Type* $tmp307;
    panda$core$Bit $tmp310;
    int $tmp4;
    {
        $tmp6 = self;
        $match$76_95 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Int64$init$builtin_int64(&$tmp7, 1);
        panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp7);
        if ($tmp8.value) {
        {
            org$pandalanguage$pandac$Type** $tmp10 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type9 = *$tmp10;
            $tmp12 = type9;
            $returnValue11 = $tmp12;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
            $tmp4 = 0;
            goto $l2;
            $l13:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp15, 2);
        panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp15);
        if ($tmp16.value) {
        {
            org$pandalanguage$pandac$Type** $tmp18 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type17 = *$tmp18;
            $tmp19 = type17;
            $returnValue11 = $tmp19;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
            $tmp4 = 1;
            goto $l2;
            $l20:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp22, 3);
        panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp22);
        if ($tmp23.value) {
        {
            org$pandalanguage$pandac$Type** $tmp25 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type24 = *$tmp25;
            $tmp26 = type24;
            $returnValue11 = $tmp26;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
            $tmp4 = 2;
            goto $l2;
            $l27:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp29, 7);
        panda$core$Bit $tmp30 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp29);
        if ($tmp30.value) {
        {
            org$pandalanguage$pandac$Type** $tmp32 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type31 = *$tmp32;
            $tmp33 = type31;
            $returnValue11 = $tmp33;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp33));
            $tmp4 = 3;
            goto $l2;
            $l34:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp36, 8);
        panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp36);
        if ($tmp37.value) {
        {
            org$pandalanguage$pandac$Type** $tmp39 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 24));
            type38 = *$tmp39;
            $tmp40 = type38;
            $returnValue11 = $tmp40;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
            $tmp4 = 4;
            goto $l2;
            $l41:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp43, 9);
        panda$core$Bit $tmp44 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp43);
        if ($tmp44.value) {
        {
            org$pandalanguage$pandac$ChoiceCase** $tmp46 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$76_95->$data + 16));
            ce45 = *$tmp46;
            org$pandalanguage$pandac$Type* $tmp49 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp48 = $tmp49;
            $tmp47 = $tmp48;
            $returnValue11 = $tmp47;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
            $tmp4 = 5;
            goto $l2;
            $l50:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp52, 10);
        panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp52);
        if ($tmp53.value) {
        {
            org$pandalanguage$pandac$ChoiceCase** $tmp55 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$76_95->$data + 24));
            ce54 = *$tmp55;
            panda$core$Int64* $tmp57 = ((panda$core$Int64*) ((char*) $match$76_95->$data + 32));
            field56 = *$tmp57;
            panda$core$Object* $tmp60 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce54->fields, field56);
            $tmp59 = $tmp60;
            $tmp58 = ((org$pandalanguage$pandac$Type*) $tmp59);
            $returnValue11 = $tmp58;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
            panda$core$Panda$unref$panda$core$Object($tmp59);
            $tmp4 = 6;
            goto $l2;
            $l61:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp63, 11);
        panda$core$Bit $tmp64 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp63);
        if ($tmp64.value) {
        {
            org$pandalanguage$pandac$Type** $tmp66 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type65 = *$tmp66;
            $tmp67 = type65;
            $returnValue11 = $tmp67;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
            $tmp4 = 7;
            goto $l2;
            $l68:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp70, 12);
        panda$core$Bit $tmp71 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp70);
        if ($tmp71.value) {
        {
            org$pandalanguage$pandac$Type** $tmp73 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type72 = *$tmp73;
            $tmp74 = type72;
            $returnValue11 = $tmp74;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
            $tmp4 = 8;
            goto $l2;
            $l75:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp77, 16);
        panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp77);
        if ($tmp78.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp80 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 0));
            m79 = *$tmp80;
            org$pandalanguage$pandac$Type* $tmp85 = (($fn84) m79->$class->vtable[2])(m79);
            $tmp83 = $tmp85;
            org$pandalanguage$pandac$Type* $tmp88 = (($fn87) m79->$class->vtable[2])(m79);
            $tmp86 = $tmp88;
            ITable* $tmp89 = ((panda$collections$CollectionView*) $tmp86->subtypes)->$class->itable;
            while ($tmp89->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp89 = $tmp89->next;
            }
            $fn91 $tmp90 = $tmp89->methods[0];
            panda$core$Int64 $tmp92 = $tmp90(((panda$collections$CollectionView*) $tmp86->subtypes));
            panda$core$Int64$init$builtin_int64(&$tmp93, 1);
            panda$core$Int64 $tmp94 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp92, $tmp93);
            panda$core$Object* $tmp95 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp83->subtypes, $tmp94);
            $tmp82 = $tmp95;
            $tmp81 = ((org$pandalanguage$pandac$Type*) $tmp82);
            $returnValue11 = $tmp81;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp81));
            panda$core$Panda$unref$panda$core$Object($tmp82);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
            $tmp4 = 9;
            goto $l2;
            $l96:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp98, 17);
        panda$core$Bit $tmp99 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp98);
        if ($tmp99.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp101 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 0));
            expr100 = *$tmp101;
            org$pandalanguage$pandac$Type* $tmp105 = (($fn104) expr100->$class->vtable[2])(expr100);
            $tmp103 = $tmp105;
            $tmp102 = $tmp103;
            $returnValue11 = $tmp102;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
            $tmp4 = 10;
            goto $l2;
            $l106:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp108, 18);
        panda$core$Bit $tmp109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp108);
        if ($tmp109.value) {
        {
            org$pandalanguage$pandac$Type** $tmp111 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type110 = *$tmp111;
            $tmp112 = type110;
            $returnValue11 = $tmp112;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
            $tmp4 = 11;
            goto $l2;
            $l113:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp115, 20);
        panda$core$Bit $tmp116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp115);
        if ($tmp116.value) {
        {
            org$pandalanguage$pandac$Type** $tmp118 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type117 = *$tmp118;
            $tmp119 = type117;
            $returnValue11 = $tmp119;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
            $tmp4 = 12;
            goto $l2;
            $l120:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp122, 21);
        panda$core$Bit $tmp123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp122);
        if ($tmp123.value) {
        {
            org$pandalanguage$pandac$Type* $tmp126 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp125 = $tmp126;
            $tmp124 = $tmp125;
            $returnValue11 = $tmp124;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp124));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp125));
            $tmp4 = 13;
            goto $l2;
            $l127:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp129, 22);
        panda$core$Bit $tmp130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp129);
        if ($tmp130.value) {
        {
            org$pandalanguage$pandac$Type* $tmp133 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp132 = $tmp133;
            $tmp131 = $tmp132;
            $returnValue11 = $tmp131;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp131));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
            $tmp4 = 14;
            goto $l2;
            $l134:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp136, 25);
        panda$core$Bit $tmp137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp136);
        if ($tmp137.value) {
        {
            org$pandalanguage$pandac$Type** $tmp139 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type138 = *$tmp139;
            org$pandalanguage$pandac$IRNode** $tmp141 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 24));
            target140 = *$tmp141;
            org$pandalanguage$pandac$MethodRef** $tmp143 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$76_95->$data + 32));
            m142 = *$tmp143;
            $tmp144 = type138;
            $returnValue11 = $tmp144;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
            $tmp4 = 15;
            goto $l2;
            $l145:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp147, 26);
        panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp147);
        if ($tmp148.value) {
        {
            org$pandalanguage$pandac$Type** $tmp150 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type149 = *$tmp150;
            $tmp151 = type149;
            $returnValue11 = $tmp151;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
            $tmp4 = 16;
            goto $l2;
            $l152:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp154, 27);
        panda$core$Bit $tmp155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp154);
        if ($tmp155.value) {
        {
            org$pandalanguage$pandac$Type** $tmp157 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type156 = *$tmp157;
            $tmp158 = type156;
            $returnValue11 = $tmp158;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp158));
            $tmp4 = 17;
            goto $l2;
            $l159:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp161, 28);
        panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp161);
        if ($tmp162.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp164 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 24));
            base163 = *$tmp164;
            org$pandalanguage$pandac$Type* $tmp168 = (($fn167) base163->$class->vtable[2])(base163);
            $tmp166 = $tmp168;
            $tmp165 = $tmp166;
            $returnValue11 = $tmp165;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
            $tmp4 = 18;
            goto $l2;
            $l169:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp171, 30);
        panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp171);
        if ($tmp172.value) {
        {
            org$pandalanguage$pandac$Type** $tmp174 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type173 = *$tmp174;
            $tmp175 = type173;
            $returnValue11 = $tmp175;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
            $tmp4 = 19;
            goto $l2;
            $l176:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp178, 32);
        panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp178);
        if ($tmp179.value) {
        {
            org$pandalanguage$pandac$Type** $tmp181 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type180 = *$tmp181;
            panda$core$Int64* $tmp183 = ((panda$core$Int64*) ((char*) $match$76_95->$data + 24));
            id182 = *$tmp183;
            $tmp184 = type180;
            $returnValue11 = $tmp184;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
            $tmp4 = 20;
            goto $l2;
            $l185:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp187, 33);
        panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp187);
        if ($tmp188.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp190 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 0));
            base189 = *$tmp190;
            org$pandalanguage$pandac$Type* $tmp194 = (($fn193) base189->$class->vtable[2])(base189);
            $tmp192 = $tmp194;
            $tmp191 = $tmp192;
            $returnValue11 = $tmp191;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp191));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
            $tmp4 = 21;
            goto $l2;
            $l195:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp197, 34);
        panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp197);
        if ($tmp198.value) {
        {
            org$pandalanguage$pandac$Type** $tmp200 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type199 = *$tmp200;
            $tmp201 = type199;
            $returnValue11 = $tmp201;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp201));
            $tmp4 = 22;
            goto $l2;
            $l202:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp204, 35);
        panda$core$Bit $tmp205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp204);
        if ($tmp205.value) {
        {
            org$pandalanguage$pandac$Type** $tmp207 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type206 = *$tmp207;
            $tmp208 = type206;
            $returnValue11 = $tmp208;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
            $tmp4 = 23;
            goto $l2;
            $l209:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp211, 36);
        panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp211);
        if ($tmp212.value) {
        {
            org$pandalanguage$pandac$Type* $tmp215 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            $tmp214 = $tmp215;
            $tmp213 = $tmp214;
            $returnValue11 = $tmp213;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp213));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
            $tmp4 = 24;
            goto $l2;
            $l216:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp218, 37);
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp218);
        if ($tmp219.value) {
        {
            org$pandalanguage$pandac$Type** $tmp221 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type220 = *$tmp221;
            $tmp222 = type220;
            $returnValue11 = $tmp222;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp222));
            $tmp4 = 25;
            goto $l2;
            $l223:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp225, 38);
        panda$core$Bit $tmp226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp225);
        if ($tmp226.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp228 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 24));
            ifTrue227 = *$tmp228;
            org$pandalanguage$pandac$IRNode** $tmp230 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 32));
            ifFalse229 = *$tmp230;
            org$pandalanguage$pandac$Type* $tmp233 = (($fn232) ifTrue227->$class->vtable[2])(ifTrue227);
            $tmp231 = $tmp233;
            org$pandalanguage$pandac$Type* $tmp236 = (($fn235) ifFalse229->$class->vtable[2])(ifFalse229);
            $tmp234 = $tmp236;
            panda$core$Bit $tmp237 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp231, $tmp234);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp234));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp231));
            if ($tmp237.value) goto $l238; else goto $l239;
            $l239:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s240, (panda$core$Int64) { 130 });
            abort();
            $l238:;
            org$pandalanguage$pandac$Type* $tmp244 = (($fn243) ifTrue227->$class->vtable[2])(ifTrue227);
            $tmp242 = $tmp244;
            $tmp241 = $tmp242;
            $returnValue11 = $tmp241;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
            $tmp4 = 26;
            goto $l2;
            $l245:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp247, 39);
        panda$core$Bit $tmp248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp247);
        if ($tmp248.value) {
        {
            org$pandalanguage$pandac$Type* $tmp251 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            $tmp250 = $tmp251;
            $tmp249 = $tmp250;
            $returnValue11 = $tmp249;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp249));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp250));
            $tmp4 = 27;
            goto $l2;
            $l252:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp254, 40);
        panda$core$Bit $tmp255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp254);
        if ($tmp255.value) {
        {
            org$pandalanguage$pandac$Type* $tmp258 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp257 = $tmp258;
            $tmp256 = $tmp257;
            $returnValue11 = $tmp256;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
            $tmp4 = 28;
            goto $l2;
            $l259:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp261, 41);
        panda$core$Bit $tmp262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp261);
        if ($tmp262.value) {
        {
            org$pandalanguage$pandac$Type** $tmp264 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type263 = *$tmp264;
            $tmp265 = type263;
            $returnValue11 = $tmp265;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
            $tmp4 = 29;
            goto $l2;
            $l266:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp268, 42);
        panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp268);
        if ($tmp269.value) {
        {
            org$pandalanguage$pandac$Type* $tmp272 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp271 = $tmp272;
            $tmp270 = $tmp271;
            $returnValue11 = $tmp270;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp270));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp271));
            $tmp4 = 30;
            goto $l2;
            $l273:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp275, 43);
        panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp275);
        if ($tmp276.value) {
        {
            org$pandalanguage$pandac$Type** $tmp278 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type277 = *$tmp278;
            $tmp279 = type277;
            $returnValue11 = $tmp279;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
            $tmp4 = 31;
            goto $l2;
            $l280:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp282, 44);
        panda$core$Bit $tmp283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp282);
        if ($tmp283.value) {
        {
            org$pandalanguage$pandac$Type* $tmp286 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp285 = $tmp286;
            $tmp284 = $tmp285;
            $returnValue11 = $tmp284;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp284));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
            $tmp4 = 32;
            goto $l2;
            $l287:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp289, 45);
        panda$core$Bit $tmp290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp289);
        if ($tmp290.value) {
        {
            org$pandalanguage$pandac$Type* $tmp293 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp292 = $tmp293;
            $tmp291 = $tmp292;
            $returnValue11 = $tmp291;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp291));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp292));
            $tmp4 = 33;
            goto $l2;
            $l294:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp296, 47);
        panda$core$Bit $tmp297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp296);
        if ($tmp297.value) {
        {
            org$pandalanguage$pandac$Type** $tmp299 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 24));
            type298 = *$tmp299;
            $tmp300 = type298;
            $returnValue11 = $tmp300;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
            $tmp4 = 34;
            goto $l2;
            $l301:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp303, 48);
        panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp303);
        if ($tmp304.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp306 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$76_95->$data + 16));
            variable305 = *$tmp306;
            $tmp307 = variable305->type;
            $returnValue11 = $tmp307;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp307));
            $tmp4 = 35;
            goto $l2;
            $l308:;
            return $returnValue11;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp310, false);
            if ($tmp310.value) goto $l311; else goto $l312;
            $l312:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s313, (panda$core$Int64) { 151 });
            abort();
            $l311:;
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
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    switch ($tmp4) {
        case 33: goto $l294;
        case 23: goto $l209;
        case 8: goto $l75;
        case 3: goto $l34;
        case 27: goto $l252;
        case 11: goto $l113;
        case 5: goto $l50;
        case 7: goto $l68;
        case 31: goto $l280;
        case 20: goto $l185;
        case 17: goto $l159;
        case 1: goto $l20;
        case 0: goto $l13;
        case 12: goto $l120;
        case 15: goto $l145;
        case 22: goto $l202;
        case 35: goto $l308;
        case 9: goto $l96;
        case 18: goto $l169;
        case 21: goto $l195;
        case 28: goto $l259;
        case 10: goto $l106;
        case 4: goto $l41;
        case 29: goto $l266;
        case 26: goto $l245;
        case 25: goto $l223;
        case 6: goto $l61;
        case 30: goto $l273;
        case 34: goto $l301;
        case 32: goto $l287;
        case 19: goto $l176;
        case 14: goto $l134;
        case 13: goto $l127;
        case 16: goto $l152;
        case -1: goto $l314;
        case 24: goto $l216;
        case 2: goto $l27;
    }
    $l314:;
    abort();
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$156_9318 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp319;
    panda$core$Int64 $tmp320;
    org$pandalanguage$pandac$Position position322;
    org$pandalanguage$pandac$Position $returnValue324;
    panda$core$Int64 $tmp327;
    org$pandalanguage$pandac$Position position329;
    panda$core$Int64 $tmp333;
    org$pandalanguage$pandac$Position position335;
    panda$core$Int64 $tmp339;
    org$pandalanguage$pandac$Position position341;
    panda$core$Int64 $tmp345;
    org$pandalanguage$pandac$Position position347;
    panda$core$Int64 $tmp351;
    org$pandalanguage$pandac$Position position353;
    panda$core$Int64 $tmp357;
    org$pandalanguage$pandac$Position position359;
    panda$core$Int64 $tmp363;
    org$pandalanguage$pandac$Position position365;
    panda$core$Int64 $tmp369;
    org$pandalanguage$pandac$Position position371;
    panda$core$Int64 $tmp375;
    org$pandalanguage$pandac$Position position377;
    panda$core$Int64 $tmp381;
    org$pandalanguage$pandac$Position position383;
    panda$core$Int64 $tmp387;
    org$pandalanguage$pandac$Position position389;
    panda$core$Int64 $tmp393;
    org$pandalanguage$pandac$Position position395;
    panda$core$Int64 $tmp399;
    org$pandalanguage$pandac$IRNode* target401 = NULL;
    panda$core$Int64 $tmp407;
    org$pandalanguage$pandac$Position position409;
    panda$core$Int64 $tmp413;
    org$pandalanguage$pandac$IRNode* m415 = NULL;
    panda$core$Int64 $tmp421;
    org$pandalanguage$pandac$IRNode* expr423 = NULL;
    panda$core$Int64 $tmp429;
    org$pandalanguage$pandac$Position position431;
    panda$core$Int64 $tmp435;
    org$pandalanguage$pandac$Position position437;
    panda$core$Int64 $tmp441;
    org$pandalanguage$pandac$Position position443;
    panda$core$Int64 $tmp447;
    org$pandalanguage$pandac$Position position449;
    panda$core$Int64 $tmp453;
    org$pandalanguage$pandac$Position position455;
    panda$core$Int64 $tmp459;
    org$pandalanguage$pandac$Position position461;
    panda$core$Int64 $tmp465;
    org$pandalanguage$pandac$Position position467;
    panda$core$Int64 $tmp471;
    org$pandalanguage$pandac$Position position473;
    panda$core$Int64 $tmp477;
    org$pandalanguage$pandac$Position position479;
    panda$core$Int64 $tmp483;
    org$pandalanguage$pandac$Position position485;
    panda$core$Int64 $tmp489;
    org$pandalanguage$pandac$Position position491;
    panda$core$Int64 $tmp495;
    org$pandalanguage$pandac$Position position497;
    panda$core$Int64 $tmp501;
    org$pandalanguage$pandac$Position position503;
    panda$core$Int64 $tmp507;
    org$pandalanguage$pandac$Position position509;
    panda$core$Int64 $tmp513;
    org$pandalanguage$pandac$Position position515;
    panda$core$Int64 $tmp519;
    org$pandalanguage$pandac$IRNode* base521 = NULL;
    panda$core$Int64 $tmp527;
    org$pandalanguage$pandac$Position position529;
    panda$core$Int64 $tmp533;
    org$pandalanguage$pandac$Position position535;
    panda$core$Int64 $tmp539;
    org$pandalanguage$pandac$Position position541;
    panda$core$Int64 $tmp545;
    org$pandalanguage$pandac$Position position547;
    panda$core$Int64 $tmp551;
    org$pandalanguage$pandac$Position position553;
    panda$core$Int64 $tmp557;
    org$pandalanguage$pandac$Position position559;
    panda$core$Int64 $tmp563;
    org$pandalanguage$pandac$Position position565;
    panda$core$Int64 $tmp569;
    org$pandalanguage$pandac$Position position571;
    panda$core$Int64 $tmp575;
    org$pandalanguage$pandac$Position position577;
    panda$core$Int64 $tmp581;
    org$pandalanguage$pandac$Position position583;
    panda$core$Int64 $tmp587;
    org$pandalanguage$pandac$Position position589;
    panda$core$Int64 $tmp593;
    org$pandalanguage$pandac$Position position595;
    panda$core$Int64 $tmp599;
    org$pandalanguage$pandac$Position position601;
    panda$core$Int64 $tmp605;
    org$pandalanguage$pandac$Position position607;
    panda$core$Int64 $tmp611;
    org$pandalanguage$pandac$Position position613;
    panda$core$Int64 $tmp617;
    org$pandalanguage$pandac$Position position619;
    panda$core$Int64 $tmp623;
    org$pandalanguage$pandac$Position position625;
    panda$core$Bit $tmp629;
    int $tmp317;
    {
        $tmp319 = self;
        $match$156_9318 = $tmp319;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp319));
        panda$core$Int64$init$builtin_int64(&$tmp320, 0);
        panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp320);
        if ($tmp321.value) {
        {
            org$pandalanguage$pandac$Position* $tmp323 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position322 = *$tmp323;
            $returnValue324 = position322;
            $tmp317 = 0;
            goto $l315;
            $l325:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp327, 1);
        panda$core$Bit $tmp328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp327);
        if ($tmp328.value) {
        {
            org$pandalanguage$pandac$Position* $tmp330 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position329 = *$tmp330;
            $returnValue324 = position329;
            $tmp317 = 1;
            goto $l315;
            $l331:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp333, 2);
        panda$core$Bit $tmp334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp333);
        if ($tmp334.value) {
        {
            org$pandalanguage$pandac$Position* $tmp336 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position335 = *$tmp336;
            $returnValue324 = position335;
            $tmp317 = 2;
            goto $l315;
            $l337:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp339, 3);
        panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp339);
        if ($tmp340.value) {
        {
            org$pandalanguage$pandac$Position* $tmp342 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position341 = *$tmp342;
            $returnValue324 = position341;
            $tmp317 = 3;
            goto $l315;
            $l343:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp345, 4);
        panda$core$Bit $tmp346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp345);
        if ($tmp346.value) {
        {
            org$pandalanguage$pandac$Position* $tmp348 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position347 = *$tmp348;
            $returnValue324 = position347;
            $tmp317 = 4;
            goto $l315;
            $l349:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp351, 6);
        panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp351);
        if ($tmp352.value) {
        {
            org$pandalanguage$pandac$Position* $tmp354 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position353 = *$tmp354;
            $returnValue324 = position353;
            $tmp317 = 5;
            goto $l315;
            $l355:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp357, 7);
        panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp357);
        if ($tmp358.value) {
        {
            org$pandalanguage$pandac$Position* $tmp360 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position359 = *$tmp360;
            $returnValue324 = position359;
            $tmp317 = 6;
            goto $l315;
            $l361:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp363, 8);
        panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp363);
        if ($tmp364.value) {
        {
            org$pandalanguage$pandac$Position* $tmp366 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position365 = *$tmp366;
            $returnValue324 = position365;
            $tmp317 = 7;
            goto $l315;
            $l367:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp369, 9);
        panda$core$Bit $tmp370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp369);
        if ($tmp370.value) {
        {
            org$pandalanguage$pandac$Position* $tmp372 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position371 = *$tmp372;
            $returnValue324 = position371;
            $tmp317 = 8;
            goto $l315;
            $l373:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp375, 10);
        panda$core$Bit $tmp376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp375);
        if ($tmp376.value) {
        {
            org$pandalanguage$pandac$Position* $tmp378 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position377 = *$tmp378;
            $returnValue324 = position377;
            $tmp317 = 9;
            goto $l315;
            $l379:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp381, 11);
        panda$core$Bit $tmp382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp381);
        if ($tmp382.value) {
        {
            org$pandalanguage$pandac$Position* $tmp384 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position383 = *$tmp384;
            $returnValue324 = position383;
            $tmp317 = 10;
            goto $l315;
            $l385:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp387, 12);
        panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp387);
        if ($tmp388.value) {
        {
            org$pandalanguage$pandac$Position* $tmp390 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position389 = *$tmp390;
            $returnValue324 = position389;
            $tmp317 = 11;
            goto $l315;
            $l391:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp393, 13);
        panda$core$Bit $tmp394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp393);
        if ($tmp394.value) {
        {
            org$pandalanguage$pandac$Position* $tmp396 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position395 = *$tmp396;
            $returnValue324 = position395;
            $tmp317 = 12;
            goto $l315;
            $l397:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp399, 14);
        panda$core$Bit $tmp400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp399);
        if ($tmp400.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp402 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9318->$data + 0));
            target401 = *$tmp402;
            org$pandalanguage$pandac$Position $tmp404 = (($fn403) target401->$class->vtable[3])(target401);
            $returnValue324 = $tmp404;
            $tmp317 = 13;
            goto $l315;
            $l405:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp407, 15);
        panda$core$Bit $tmp408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp407);
        if ($tmp408.value) {
        {
            org$pandalanguage$pandac$Position* $tmp410 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position409 = *$tmp410;
            $returnValue324 = position409;
            $tmp317 = 14;
            goto $l315;
            $l411:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp413, 16);
        panda$core$Bit $tmp414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp413);
        if ($tmp414.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp416 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9318->$data + 0));
            m415 = *$tmp416;
            org$pandalanguage$pandac$Position $tmp418 = (($fn417) m415->$class->vtable[3])(m415);
            $returnValue324 = $tmp418;
            $tmp317 = 15;
            goto $l315;
            $l419:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp421, 17);
        panda$core$Bit $tmp422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp421);
        if ($tmp422.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp424 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9318->$data + 0));
            expr423 = *$tmp424;
            org$pandalanguage$pandac$Position $tmp426 = (($fn425) expr423->$class->vtable[3])(expr423);
            $returnValue324 = $tmp426;
            $tmp317 = 16;
            goto $l315;
            $l427:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp429, 18);
        panda$core$Bit $tmp430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp429);
        if ($tmp430.value) {
        {
            org$pandalanguage$pandac$Position* $tmp432 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position431 = *$tmp432;
            $returnValue324 = position431;
            $tmp317 = 17;
            goto $l315;
            $l433:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp435, 19);
        panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp435);
        if ($tmp436.value) {
        {
            org$pandalanguage$pandac$Position* $tmp438 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position437 = *$tmp438;
            $returnValue324 = position437;
            $tmp317 = 18;
            goto $l315;
            $l439:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp441, 20);
        panda$core$Bit $tmp442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp441);
        if ($tmp442.value) {
        {
            org$pandalanguage$pandac$Position* $tmp444 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position443 = *$tmp444;
            $returnValue324 = position443;
            $tmp317 = 19;
            goto $l315;
            $l445:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp447, 21);
        panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp447);
        if ($tmp448.value) {
        {
            org$pandalanguage$pandac$Position* $tmp450 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position449 = *$tmp450;
            $returnValue324 = position449;
            $tmp317 = 20;
            goto $l315;
            $l451:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp453, 22);
        panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp453);
        if ($tmp454.value) {
        {
            org$pandalanguage$pandac$Position* $tmp456 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position455 = *$tmp456;
            $returnValue324 = position455;
            $tmp317 = 21;
            goto $l315;
            $l457:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp459, 23);
        panda$core$Bit $tmp460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp459);
        if ($tmp460.value) {
        {
            org$pandalanguage$pandac$Position* $tmp462 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position461 = *$tmp462;
            $returnValue324 = position461;
            $tmp317 = 22;
            goto $l315;
            $l463:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp465, 24);
        panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp465);
        if ($tmp466.value) {
        {
            org$pandalanguage$pandac$Position* $tmp468 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position467 = *$tmp468;
            $returnValue324 = position467;
            $tmp317 = 23;
            goto $l315;
            $l469:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp471, 25);
        panda$core$Bit $tmp472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp471);
        if ($tmp472.value) {
        {
            org$pandalanguage$pandac$Position* $tmp474 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position473 = *$tmp474;
            $returnValue324 = position473;
            $tmp317 = 24;
            goto $l315;
            $l475:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp477, 26);
        panda$core$Bit $tmp478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp477);
        if ($tmp478.value) {
        {
            org$pandalanguage$pandac$Position* $tmp480 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position479 = *$tmp480;
            $returnValue324 = position479;
            $tmp317 = 25;
            goto $l315;
            $l481:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp483, 27);
        panda$core$Bit $tmp484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp483);
        if ($tmp484.value) {
        {
            org$pandalanguage$pandac$Position* $tmp486 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position485 = *$tmp486;
            $returnValue324 = position485;
            $tmp317 = 26;
            goto $l315;
            $l487:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp489, 28);
        panda$core$Bit $tmp490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp489);
        if ($tmp490.value) {
        {
            org$pandalanguage$pandac$Position* $tmp492 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position491 = *$tmp492;
            $returnValue324 = position491;
            $tmp317 = 27;
            goto $l315;
            $l493:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp495, 29);
        panda$core$Bit $tmp496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp495);
        if ($tmp496.value) {
        {
            org$pandalanguage$pandac$Position* $tmp498 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position497 = *$tmp498;
            $returnValue324 = position497;
            $tmp317 = 28;
            goto $l315;
            $l499:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp501, 30);
        panda$core$Bit $tmp502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp501);
        if ($tmp502.value) {
        {
            org$pandalanguage$pandac$Position* $tmp504 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position503 = *$tmp504;
            $returnValue324 = position503;
            $tmp317 = 29;
            goto $l315;
            $l505:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp507, 31);
        panda$core$Bit $tmp508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp507);
        if ($tmp508.value) {
        {
            org$pandalanguage$pandac$Position* $tmp510 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position509 = *$tmp510;
            $returnValue324 = position509;
            $tmp317 = 30;
            goto $l315;
            $l511:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp513, 32);
        panda$core$Bit $tmp514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp513);
        if ($tmp514.value) {
        {
            org$pandalanguage$pandac$Position* $tmp516 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position515 = *$tmp516;
            $returnValue324 = position515;
            $tmp317 = 31;
            goto $l315;
            $l517:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp519, 33);
        panda$core$Bit $tmp520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp519);
        if ($tmp520.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp522 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9318->$data + 0));
            base521 = *$tmp522;
            org$pandalanguage$pandac$Position $tmp524 = (($fn523) base521->$class->vtable[3])(base521);
            $returnValue324 = $tmp524;
            $tmp317 = 32;
            goto $l315;
            $l525:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp527, 34);
        panda$core$Bit $tmp528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp527);
        if ($tmp528.value) {
        {
            org$pandalanguage$pandac$Position* $tmp530 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position529 = *$tmp530;
            $returnValue324 = position529;
            $tmp317 = 33;
            goto $l315;
            $l531:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp533, 35);
        panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp533);
        if ($tmp534.value) {
        {
            org$pandalanguage$pandac$Position* $tmp536 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position535 = *$tmp536;
            $returnValue324 = position535;
            $tmp317 = 34;
            goto $l315;
            $l537:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp539, 36);
        panda$core$Bit $tmp540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp539);
        if ($tmp540.value) {
        {
            org$pandalanguage$pandac$Position* $tmp542 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position541 = *$tmp542;
            $returnValue324 = position541;
            $tmp317 = 35;
            goto $l315;
            $l543:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp545, 37);
        panda$core$Bit $tmp546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp545);
        if ($tmp546.value) {
        {
            org$pandalanguage$pandac$Position* $tmp548 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position547 = *$tmp548;
            $returnValue324 = position547;
            $tmp317 = 36;
            goto $l315;
            $l549:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp551, 38);
        panda$core$Bit $tmp552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp551);
        if ($tmp552.value) {
        {
            org$pandalanguage$pandac$Position* $tmp554 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position553 = *$tmp554;
            $returnValue324 = position553;
            $tmp317 = 37;
            goto $l315;
            $l555:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp557, 39);
        panda$core$Bit $tmp558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp557);
        if ($tmp558.value) {
        {
            org$pandalanguage$pandac$Position* $tmp560 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position559 = *$tmp560;
            $returnValue324 = position559;
            $tmp317 = 38;
            goto $l315;
            $l561:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp563, 40);
        panda$core$Bit $tmp564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp563);
        if ($tmp564.value) {
        {
            org$pandalanguage$pandac$Position* $tmp566 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position565 = *$tmp566;
            $returnValue324 = position565;
            $tmp317 = 39;
            goto $l315;
            $l567:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp569, 41);
        panda$core$Bit $tmp570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp569);
        if ($tmp570.value) {
        {
            org$pandalanguage$pandac$Position* $tmp572 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position571 = *$tmp572;
            $returnValue324 = position571;
            $tmp317 = 40;
            goto $l315;
            $l573:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp575, 42);
        panda$core$Bit $tmp576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp575);
        if ($tmp576.value) {
        {
            org$pandalanguage$pandac$Position* $tmp578 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position577 = *$tmp578;
            $returnValue324 = position577;
            $tmp317 = 41;
            goto $l315;
            $l579:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp581, 43);
        panda$core$Bit $tmp582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp581);
        if ($tmp582.value) {
        {
            org$pandalanguage$pandac$Position* $tmp584 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position583 = *$tmp584;
            $returnValue324 = position583;
            $tmp317 = 42;
            goto $l315;
            $l585:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp587, 44);
        panda$core$Bit $tmp588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp587);
        if ($tmp588.value) {
        {
            org$pandalanguage$pandac$Position* $tmp590 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position589 = *$tmp590;
            $returnValue324 = position589;
            $tmp317 = 43;
            goto $l315;
            $l591:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp593, 45);
        panda$core$Bit $tmp594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp593);
        if ($tmp594.value) {
        {
            org$pandalanguage$pandac$Position* $tmp596 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position595 = *$tmp596;
            $returnValue324 = position595;
            $tmp317 = 44;
            goto $l315;
            $l597:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp599, 46);
        panda$core$Bit $tmp600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp599);
        if ($tmp600.value) {
        {
            org$pandalanguage$pandac$Position* $tmp602 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position601 = *$tmp602;
            $returnValue324 = position601;
            $tmp317 = 45;
            goto $l315;
            $l603:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp605, 47);
        panda$core$Bit $tmp606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp605);
        if ($tmp606.value) {
        {
            org$pandalanguage$pandac$Position* $tmp608 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position607 = *$tmp608;
            $returnValue324 = position607;
            $tmp317 = 46;
            goto $l315;
            $l609:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp611, 48);
        panda$core$Bit $tmp612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp611);
        if ($tmp612.value) {
        {
            org$pandalanguage$pandac$Position* $tmp614 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position613 = *$tmp614;
            $returnValue324 = position613;
            $tmp317 = 47;
            goto $l315;
            $l615:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp617, 49);
        panda$core$Bit $tmp618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp617);
        if ($tmp618.value) {
        {
            org$pandalanguage$pandac$Position* $tmp620 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position619 = *$tmp620;
            $returnValue324 = position619;
            $tmp317 = 48;
            goto $l315;
            $l621:;
            return $returnValue324;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp623, 50);
        panda$core$Bit $tmp624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9318->$rawValue, $tmp623);
        if ($tmp624.value) {
        {
            org$pandalanguage$pandac$Position* $tmp626 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9318->$data + 0));
            position625 = *$tmp626;
            $returnValue324 = position625;
            $tmp317 = 49;
            goto $l315;
            $l627:;
            return $returnValue324;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp629, false);
            if ($tmp629.value) goto $l630; else goto $l631;
            $l631:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s632, (panda$core$Int64) { 258 });
            abort();
            $l630:;
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
    $tmp317 = -1;
    goto $l315;
    $l315:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
    switch ($tmp317) {
        case 36: goto $l549;
        case 16: goto $l427;
        case 38: goto $l561;
        case 10: goto $l385;
        case 37: goto $l555;
        case 31: goto $l517;
        case 7: goto $l367;
        case 19: goto $l445;
        case 32: goto $l525;
        case 9: goto $l379;
        case 8: goto $l373;
        case 27: goto $l493;
        case 49: goto $l627;
        case 26: goto $l487;
        case 43: goto $l591;
        case 15: goto $l419;
        case 0: goto $l325;
        case 17: goto $l433;
        case 34: goto $l537;
        case 1: goto $l331;
        case 35: goto $l543;
        case 45: goto $l603;
        case 44: goto $l597;
        case 14: goto $l411;
        case 25: goto $l481;
        case 3: goto $l343;
        case 18: goto $l439;
        case 2: goto $l337;
        case 20: goto $l451;
        case 5: goto $l355;
        case 33: goto $l531;
        case -1: goto $l633;
        case 4: goto $l349;
        case 21: goto $l457;
        case 12: goto $l397;
        case 22: goto $l463;
        case 47: goto $l615;
        case 46: goto $l609;
        case 13: goto $l405;
        case 24: goto $l475;
        case 30: goto $l511;
        case 11: goto $l391;
        case 40: goto $l573;
        case 6: goto $l361;
        case 39: goto $l567;
        case 48: goto $l621;
        case 23: goto $l469;
        case 29: goto $l505;
        case 28: goto $l499;
        case 41: goto $l579;
        case 42: goto $l585;
    }
    $l633:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$263_9637 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp638;
    panda$core$Int64 $tmp639;
    org$pandalanguage$pandac$IRNode* test641 = NULL;
    org$pandalanguage$pandac$IRNode* msg643 = NULL;
    panda$core$Bit $returnValue645;
    panda$core$Int64 $tmp655;
    panda$core$Bit $tmp657;
    panda$core$Int64 $tmp660;
    org$pandalanguage$pandac$IRNode* left662 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op664;
    org$pandalanguage$pandac$IRNode* right666 = NULL;
    panda$core$Int64 $tmp681;
    panda$core$Bit $tmp683;
    panda$core$Int64 $tmp686;
    panda$collections$ImmutableArray* statements688 = NULL;
    panda$collections$Iterator* Iter$273$17693 = NULL;
    panda$collections$Iterator* $tmp694;
    panda$collections$Iterator* $tmp695;
    org$pandalanguage$pandac$IRNode* s711 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp712;
    panda$core$Object* $tmp713;
    panda$core$Bit $tmp720;
    panda$core$Bit $tmp727;
    panda$core$Int64 $tmp730;
    panda$core$Bit $tmp732;
    panda$core$Int64 $tmp735;
    org$pandalanguage$pandac$MethodRef* m737 = NULL;
    panda$collections$ImmutableArray* args739 = NULL;
    panda$core$Int64 $tmp741;
    panda$core$Bit $tmp743;
    panda$collections$Iterator* Iter$285$17749 = NULL;
    panda$collections$Iterator* $tmp750;
    panda$collections$Iterator* $tmp751;
    org$pandalanguage$pandac$IRNode* arg767 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp768;
    panda$core$Object* $tmp769;
    panda$core$Bit $tmp776;
    panda$core$Bit $tmp783;
    panda$core$Int64 $tmp786;
    panda$core$Bit $tmp788;
    panda$core$Int64 $tmp791;
    panda$core$Bit $tmp793;
    panda$core$Int64 $tmp796;
    panda$core$Bit $tmp798;
    panda$core$Int64 $tmp801;
    org$pandalanguage$pandac$Type* type803 = NULL;
    org$pandalanguage$pandac$IRNode* call805 = NULL;
    panda$core$Int64 $tmp811;
    panda$core$Bit $tmp813;
    panda$core$Int64 $tmp816;
    panda$core$Bit $tmp818;
    panda$core$Int64 $tmp821;
    org$pandalanguage$pandac$IRNode* target823 = NULL;
    org$pandalanguage$pandac$IRNode* value825 = NULL;
    panda$core$Int64 $tmp834;
    panda$core$String* label836 = NULL;
    panda$collections$ImmutableArray* statements838 = NULL;
    org$pandalanguage$pandac$IRNode* test840 = NULL;
    panda$core$Bit $tmp844;
    panda$collections$Iterator* Iter$309$17850 = NULL;
    panda$collections$Iterator* $tmp851;
    panda$collections$Iterator* $tmp852;
    org$pandalanguage$pandac$IRNode* s868 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp869;
    panda$core$Object* $tmp870;
    panda$core$Bit $tmp877;
    panda$core$Bit $tmp884;
    panda$core$Int64 $tmp887;
    panda$core$Bit $tmp889;
    panda$core$Int64 $tmp892;
    panda$core$Bit $tmp894;
    panda$core$Int64 $tmp897;
    org$pandalanguage$pandac$IRNode* test899 = NULL;
    panda$collections$ImmutableArray* ifTrue901 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse903 = NULL;
    panda$core$Bit $tmp907;
    panda$collections$Iterator* Iter$323$17913 = NULL;
    panda$collections$Iterator* $tmp914;
    panda$collections$Iterator* $tmp915;
    org$pandalanguage$pandac$IRNode* s931 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp932;
    panda$core$Object* $tmp933;
    panda$core$Bit $tmp940;
    panda$core$Int64 $tmp951;
    panda$core$Bit $tmp953;
    panda$core$Int64 $tmp956;
    org$pandalanguage$pandac$IRNode* value958 = NULL;
    panda$core$Int64 $tmp964;
    org$pandalanguage$pandac$IRNode* value966 = NULL;
    panda$core$Int64 $tmp972;
    panda$core$String* label974 = NULL;
    panda$collections$ImmutableArray* statements976 = NULL;
    panda$collections$Iterator* Iter$336$17981 = NULL;
    panda$collections$Iterator* $tmp982;
    panda$collections$Iterator* $tmp983;
    org$pandalanguage$pandac$IRNode* s999 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1000;
    panda$core$Object* $tmp1001;
    panda$core$Bit $tmp1008;
    panda$core$Bit $tmp1015;
    panda$core$Int64 $tmp1018;
    org$pandalanguage$pandac$IRNode* value1020 = NULL;
    panda$collections$ImmutableArray* whens1022 = NULL;
    panda$collections$ImmutableArray* other1024 = NULL;
    panda$core$Bit $tmp1028;
    panda$collections$Iterator* Iter$346$171034 = NULL;
    panda$collections$Iterator* $tmp1035;
    panda$collections$Iterator* $tmp1036;
    org$pandalanguage$pandac$IRNode* w1052 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1053;
    panda$core$Object* $tmp1054;
    panda$core$Bit $tmp1061;
    panda$collections$Iterator* Iter$351$171071 = NULL;
    panda$collections$Iterator* $tmp1072;
    panda$collections$Iterator* $tmp1073;
    org$pandalanguage$pandac$IRNode* s1089 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1090;
    panda$core$Object* $tmp1091;
    panda$core$Bit $tmp1098;
    panda$core$Bit $tmp1105;
    panda$core$Int64 $tmp1108;
    panda$core$Bit $tmp1110;
    panda$core$Int64 $tmp1113;
    panda$core$Bit $tmp1115;
    panda$core$Int64 $tmp1118;
    panda$core$Bit $tmp1120;
    panda$core$Int64 $tmp1123;
    org$pandalanguage$pandac$IRNode* base1125 = NULL;
    panda$core$Int64 $tmp1131;
    org$pandalanguage$pandac$IRNode* list1133 = NULL;
    panda$collections$ImmutableArray* statements1135 = NULL;
    panda$core$Bit $tmp1139;
    panda$collections$Iterator* Iter$370$171145 = NULL;
    panda$collections$Iterator* $tmp1146;
    panda$collections$Iterator* $tmp1147;
    org$pandalanguage$pandac$IRNode* s1163 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1164;
    panda$core$Object* $tmp1165;
    panda$core$Bit $tmp1172;
    panda$core$Bit $tmp1179;
    panda$core$Int64 $tmp1182;
    panda$core$Bit $tmp1184;
    panda$core$Int64 $tmp1187;
    org$pandalanguage$pandac$IRNode* value1189 = NULL;
    panda$core$Int64 $tmp1195;
    panda$core$Bit $tmp1197;
    panda$core$Int64 $tmp1200;
    org$pandalanguage$pandac$IRNode* base1202 = NULL;
    panda$core$Int64 $tmp1208;
    panda$core$Bit $tmp1210;
    panda$core$Int64 $tmp1213;
    panda$core$Bit $tmp1215;
    panda$core$Int64 $tmp1218;
    panda$core$Bit $tmp1220;
    panda$core$Int64 $tmp1223;
    panda$core$Bit $tmp1225;
    panda$core$Int64 $tmp1228;
    org$pandalanguage$pandac$IRNode* test1230 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue1232 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1234 = NULL;
    panda$core$Int64 $tmp1250;
    panda$core$Bit $tmp1252;
    panda$core$Int64 $tmp1255;
    panda$core$Bit $tmp1257;
    panda$core$Int64 $tmp1261;
    panda$core$Bit $tmp1263;
    panda$core$Int64 $tmp1267;
    panda$core$Bit $tmp1269;
    panda$core$Int64 $tmp1273;
    panda$core$Bit $tmp1275;
    panda$core$Int64 $tmp1279;
    panda$core$Bit $tmp1281;
    panda$core$Int64 $tmp1285;
    panda$core$Bit $tmp1287;
    panda$core$Int64 $tmp1291;
    panda$collections$ImmutableArray* decls1293 = NULL;
    panda$collections$Iterator* Iter$409$171298 = NULL;
    panda$collections$Iterator* $tmp1299;
    panda$collections$Iterator* $tmp1300;
    org$pandalanguage$pandac$IRNode* d1316 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1317;
    panda$core$Object* $tmp1318;
    panda$core$Bit $tmp1325;
    panda$core$Bit $tmp1332;
    panda$core$Int64 $tmp1335;
    panda$core$Bit $tmp1337;
    panda$core$Int64 $tmp1340;
    panda$core$Bit $tmp1342;
    panda$core$Int64 $tmp1345;
    panda$collections$ImmutableArray* tests1347 = NULL;
    panda$collections$ImmutableArray* statements1349 = NULL;
    panda$collections$Iterator* Iter$420$171354 = NULL;
    panda$collections$Iterator* $tmp1355;
    panda$collections$Iterator* $tmp1356;
    org$pandalanguage$pandac$IRNode* t1372 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1373;
    panda$core$Object* $tmp1374;
    panda$core$Bit $tmp1381;
    panda$collections$Iterator* Iter$425$171391 = NULL;
    panda$collections$Iterator* $tmp1392;
    panda$collections$Iterator* $tmp1393;
    org$pandalanguage$pandac$IRNode* s1409 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1410;
    panda$core$Object* $tmp1411;
    panda$core$Bit $tmp1418;
    panda$core$Bit $tmp1425;
    panda$core$Int64 $tmp1428;
    org$pandalanguage$pandac$IRNode* test1430 = NULL;
    panda$collections$ImmutableArray* statements1432 = NULL;
    panda$core$Bit $tmp1436;
    panda$collections$Iterator* Iter$435$171442 = NULL;
    panda$collections$Iterator* $tmp1443;
    panda$collections$Iterator* $tmp1444;
    org$pandalanguage$pandac$IRNode* s1460 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1461;
    panda$core$Object* $tmp1462;
    panda$core$Bit $tmp1469;
    panda$core$Bit $tmp1476;
    panda$core$Bit $tmp1479;
    int $tmp636;
    {
        $tmp638 = self;
        $match$263_9637 = $tmp638;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp638));
        panda$core$Int64$init$builtin_int64(&$tmp639, 0);
        panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp639);
        if ($tmp640.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp642 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 16));
            test641 = *$tmp642;
            org$pandalanguage$pandac$IRNode** $tmp644 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 24));
            msg643 = *$tmp644;
            panda$core$Bit $tmp648 = (($fn647) test641->$class->vtable[4])(test641);
            bool $tmp646 = $tmp648.value;
            if ($tmp646) goto $l649;
            panda$core$Bit $tmp651 = (($fn650) msg643->$class->vtable[4])(msg643);
            $tmp646 = $tmp651.value;
            $l649:;
            panda$core$Bit $tmp652 = { $tmp646 };
            $returnValue645 = $tmp652;
            $tmp636 = 0;
            goto $l634;
            $l653:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp655, 1);
        panda$core$Bit $tmp656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp655);
        if ($tmp656.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp657, false);
            $returnValue645 = $tmp657;
            $tmp636 = 1;
            goto $l634;
            $l658:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp660, 2);
        panda$core$Bit $tmp661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp660);
        if ($tmp661.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp663 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 24));
            left662 = *$tmp663;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp665 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$263_9637->$data + 32));
            op664 = *$tmp665;
            org$pandalanguage$pandac$IRNode** $tmp667 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 40));
            right666 = *$tmp667;
            panda$core$Bit $tmp670 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op664);
            bool $tmp669 = $tmp670.value;
            if ($tmp669) goto $l671;
            panda$core$Bit $tmp673 = (($fn672) left662->$class->vtable[4])(left662);
            $tmp669 = $tmp673.value;
            $l671:;
            panda$core$Bit $tmp674 = { $tmp669 };
            bool $tmp668 = $tmp674.value;
            if ($tmp668) goto $l675;
            panda$core$Bit $tmp677 = (($fn676) right666->$class->vtable[4])(right666);
            $tmp668 = $tmp677.value;
            $l675:;
            panda$core$Bit $tmp678 = { $tmp668 };
            $returnValue645 = $tmp678;
            $tmp636 = 2;
            goto $l634;
            $l679:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp681, 3);
        panda$core$Bit $tmp682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp681);
        if ($tmp682.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp683, false);
            $returnValue645 = $tmp683;
            $tmp636 = 3;
            goto $l634;
            $l684:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp686, 4);
        panda$core$Bit $tmp687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp686);
        if ($tmp687.value) {
        {
            panda$collections$ImmutableArray** $tmp689 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9637->$data + 16));
            statements688 = *$tmp689;
            {
                int $tmp692;
                {
                    ITable* $tmp696 = ((panda$collections$Iterable*) statements688)->$class->itable;
                    while ($tmp696->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp696 = $tmp696->next;
                    }
                    $fn698 $tmp697 = $tmp696->methods[0];
                    panda$collections$Iterator* $tmp699 = $tmp697(((panda$collections$Iterable*) statements688));
                    $tmp695 = $tmp699;
                    $tmp694 = $tmp695;
                    Iter$273$17693 = $tmp694;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp694));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp695));
                    $l700:;
                    ITable* $tmp703 = Iter$273$17693->$class->itable;
                    while ($tmp703->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp703 = $tmp703->next;
                    }
                    $fn705 $tmp704 = $tmp703->methods[0];
                    panda$core$Bit $tmp706 = $tmp704(Iter$273$17693);
                    panda$core$Bit $tmp707 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp706);
                    bool $tmp702 = $tmp707.value;
                    if (!$tmp702) goto $l701;
                    {
                        int $tmp710;
                        {
                            ITable* $tmp714 = Iter$273$17693->$class->itable;
                            while ($tmp714->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp714 = $tmp714->next;
                            }
                            $fn716 $tmp715 = $tmp714->methods[1];
                            panda$core$Object* $tmp717 = $tmp715(Iter$273$17693);
                            $tmp713 = $tmp717;
                            $tmp712 = ((org$pandalanguage$pandac$IRNode*) $tmp713);
                            s711 = $tmp712;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp712));
                            panda$core$Panda$unref$panda$core$Object($tmp713);
                            panda$core$Bit $tmp719 = (($fn718) s711->$class->vtable[4])(s711);
                            if ($tmp719.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp720, true);
                                $returnValue645 = $tmp720;
                                $tmp710 = 0;
                                goto $l708;
                                $l721:;
                                $tmp692 = 0;
                                goto $l690;
                                $l722:;
                                $tmp636 = 4;
                                goto $l634;
                                $l723:;
                                return $returnValue645;
                            }
                            }
                        }
                        $tmp710 = -1;
                        goto $l708;
                        $l708:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s711));
                        s711 = NULL;
                        switch ($tmp710) {
                            case 0: goto $l721;
                            case -1: goto $l725;
                        }
                        $l725:;
                    }
                    goto $l700;
                    $l701:;
                }
                $tmp692 = -1;
                goto $l690;
                $l690:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$273$17693));
                Iter$273$17693 = NULL;
                switch ($tmp692) {
                    case 0: goto $l722;
                    case -1: goto $l726;
                }
                $l726:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp727, false);
            $returnValue645 = $tmp727;
            $tmp636 = 5;
            goto $l634;
            $l728:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp730, 6);
        panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp730);
        if ($tmp731.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp732, false);
            $returnValue645 = $tmp732;
            $tmp636 = 6;
            goto $l634;
            $l733:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp735, 7);
        panda$core$Bit $tmp736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp735);
        if ($tmp736.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp738 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$263_9637->$data + 24));
            m737 = *$tmp738;
            panda$collections$ImmutableArray** $tmp740 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9637->$data + 32));
            args739 = *$tmp740;
            panda$core$Int64$init$builtin_int64(&$tmp741, 0);
            panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m737->value->methodKind.$rawValue, $tmp741);
            if ($tmp742.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp743, true);
                $returnValue645 = $tmp743;
                $tmp636 = 7;
                goto $l634;
                $l744:;
                return $returnValue645;
            }
            }
            {
                int $tmp748;
                {
                    ITable* $tmp752 = ((panda$collections$Iterable*) args739)->$class->itable;
                    while ($tmp752->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp752 = $tmp752->next;
                    }
                    $fn754 $tmp753 = $tmp752->methods[0];
                    panda$collections$Iterator* $tmp755 = $tmp753(((panda$collections$Iterable*) args739));
                    $tmp751 = $tmp755;
                    $tmp750 = $tmp751;
                    Iter$285$17749 = $tmp750;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp750));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp751));
                    $l756:;
                    ITable* $tmp759 = Iter$285$17749->$class->itable;
                    while ($tmp759->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp759 = $tmp759->next;
                    }
                    $fn761 $tmp760 = $tmp759->methods[0];
                    panda$core$Bit $tmp762 = $tmp760(Iter$285$17749);
                    panda$core$Bit $tmp763 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp762);
                    bool $tmp758 = $tmp763.value;
                    if (!$tmp758) goto $l757;
                    {
                        int $tmp766;
                        {
                            ITable* $tmp770 = Iter$285$17749->$class->itable;
                            while ($tmp770->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp770 = $tmp770->next;
                            }
                            $fn772 $tmp771 = $tmp770->methods[1];
                            panda$core$Object* $tmp773 = $tmp771(Iter$285$17749);
                            $tmp769 = $tmp773;
                            $tmp768 = ((org$pandalanguage$pandac$IRNode*) $tmp769);
                            arg767 = $tmp768;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp768));
                            panda$core$Panda$unref$panda$core$Object($tmp769);
                            panda$core$Bit $tmp775 = (($fn774) arg767->$class->vtable[4])(arg767);
                            if ($tmp775.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp776, true);
                                $returnValue645 = $tmp776;
                                $tmp766 = 0;
                                goto $l764;
                                $l777:;
                                $tmp748 = 0;
                                goto $l746;
                                $l778:;
                                $tmp636 = 8;
                                goto $l634;
                                $l779:;
                                return $returnValue645;
                            }
                            }
                        }
                        $tmp766 = -1;
                        goto $l764;
                        $l764:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg767));
                        arg767 = NULL;
                        switch ($tmp766) {
                            case -1: goto $l781;
                            case 0: goto $l777;
                        }
                        $l781:;
                    }
                    goto $l756;
                    $l757:;
                }
                $tmp748 = -1;
                goto $l746;
                $l746:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$285$17749));
                Iter$285$17749 = NULL;
                switch ($tmp748) {
                    case -1: goto $l782;
                    case 0: goto $l778;
                }
                $l782:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp783, false);
            $returnValue645 = $tmp783;
            $tmp636 = 9;
            goto $l634;
            $l784:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp786, 8);
        panda$core$Bit $tmp787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp786);
        if ($tmp787.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp788, false);
            $returnValue645 = $tmp788;
            $tmp636 = 10;
            goto $l634;
            $l789:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp791, 9);
        panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp791);
        if ($tmp792.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp793, false);
            $returnValue645 = $tmp793;
            $tmp636 = 11;
            goto $l634;
            $l794:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp796, 10);
        panda$core$Bit $tmp797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp796);
        if ($tmp797.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp798, false);
            $returnValue645 = $tmp798;
            $tmp636 = 12;
            goto $l634;
            $l799:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp801, 11);
        panda$core$Bit $tmp802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp801);
        if ($tmp802.value) {
        {
            org$pandalanguage$pandac$Type** $tmp804 = ((org$pandalanguage$pandac$Type**) ((char*) $match$263_9637->$data + 16));
            type803 = *$tmp804;
            org$pandalanguage$pandac$IRNode** $tmp806 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 24));
            call805 = *$tmp806;
            panda$core$Bit $tmp808 = (($fn807) call805->$class->vtable[4])(call805);
            $returnValue645 = $tmp808;
            $tmp636 = 13;
            goto $l634;
            $l809:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp811, 12);
        panda$core$Bit $tmp812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp811);
        if ($tmp812.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp813, false);
            $returnValue645 = $tmp813;
            $tmp636 = 14;
            goto $l634;
            $l814:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp816, 13);
        panda$core$Bit $tmp817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp816);
        if ($tmp817.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp818, false);
            $returnValue645 = $tmp818;
            $tmp636 = 15;
            goto $l634;
            $l819:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp821, 14);
        panda$core$Bit $tmp822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp821);
        if ($tmp822.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp824 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 0));
            target823 = *$tmp824;
            org$pandalanguage$pandac$IRNode** $tmp826 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 8));
            value825 = *$tmp826;
            bool $tmp827 = ((panda$core$Bit) { value825 != NULL }).value;
            if (!$tmp827) goto $l828;
            panda$core$Bit $tmp830 = (($fn829) value825->$class->vtable[4])(value825);
            $tmp827 = $tmp830.value;
            $l828:;
            panda$core$Bit $tmp831 = { $tmp827 };
            $returnValue645 = $tmp831;
            $tmp636 = 16;
            goto $l634;
            $l832:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp834, 15);
        panda$core$Bit $tmp835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp834);
        if ($tmp835.value) {
        {
            panda$core$String** $tmp837 = ((panda$core$String**) ((char*) $match$263_9637->$data + 16));
            label836 = *$tmp837;
            panda$collections$ImmutableArray** $tmp839 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9637->$data + 24));
            statements838 = *$tmp839;
            org$pandalanguage$pandac$IRNode** $tmp841 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 32));
            test840 = *$tmp841;
            panda$core$Bit $tmp843 = (($fn842) test840->$class->vtable[4])(test840);
            if ($tmp843.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp844, true);
                $returnValue645 = $tmp844;
                $tmp636 = 17;
                goto $l634;
                $l845:;
                return $returnValue645;
            }
            }
            {
                int $tmp849;
                {
                    ITable* $tmp853 = ((panda$collections$Iterable*) statements838)->$class->itable;
                    while ($tmp853->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp853 = $tmp853->next;
                    }
                    $fn855 $tmp854 = $tmp853->methods[0];
                    panda$collections$Iterator* $tmp856 = $tmp854(((panda$collections$Iterable*) statements838));
                    $tmp852 = $tmp856;
                    $tmp851 = $tmp852;
                    Iter$309$17850 = $tmp851;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp851));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp852));
                    $l857:;
                    ITable* $tmp860 = Iter$309$17850->$class->itable;
                    while ($tmp860->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp860 = $tmp860->next;
                    }
                    $fn862 $tmp861 = $tmp860->methods[0];
                    panda$core$Bit $tmp863 = $tmp861(Iter$309$17850);
                    panda$core$Bit $tmp864 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp863);
                    bool $tmp859 = $tmp864.value;
                    if (!$tmp859) goto $l858;
                    {
                        int $tmp867;
                        {
                            ITable* $tmp871 = Iter$309$17850->$class->itable;
                            while ($tmp871->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp871 = $tmp871->next;
                            }
                            $fn873 $tmp872 = $tmp871->methods[1];
                            panda$core$Object* $tmp874 = $tmp872(Iter$309$17850);
                            $tmp870 = $tmp874;
                            $tmp869 = ((org$pandalanguage$pandac$IRNode*) $tmp870);
                            s868 = $tmp869;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp869));
                            panda$core$Panda$unref$panda$core$Object($tmp870);
                            panda$core$Bit $tmp876 = (($fn875) s868->$class->vtable[4])(s868);
                            if ($tmp876.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp877, true);
                                $returnValue645 = $tmp877;
                                $tmp867 = 0;
                                goto $l865;
                                $l878:;
                                $tmp849 = 0;
                                goto $l847;
                                $l879:;
                                $tmp636 = 18;
                                goto $l634;
                                $l880:;
                                return $returnValue645;
                            }
                            }
                        }
                        $tmp867 = -1;
                        goto $l865;
                        $l865:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s868));
                        s868 = NULL;
                        switch ($tmp867) {
                            case -1: goto $l882;
                            case 0: goto $l878;
                        }
                        $l882:;
                    }
                    goto $l857;
                    $l858:;
                }
                $tmp849 = -1;
                goto $l847;
                $l847:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$309$17850));
                Iter$309$17850 = NULL;
                switch ($tmp849) {
                    case 0: goto $l879;
                    case -1: goto $l883;
                }
                $l883:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp884, false);
            $returnValue645 = $tmp884;
            $tmp636 = 19;
            goto $l634;
            $l885:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp887, 17);
        panda$core$Bit $tmp888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp887);
        if ($tmp888.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp889, true);
            $returnValue645 = $tmp889;
            $tmp636 = 20;
            goto $l634;
            $l890:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp892, 18);
        panda$core$Bit $tmp893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp892);
        if ($tmp893.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp894, false);
            $returnValue645 = $tmp894;
            $tmp636 = 21;
            goto $l634;
            $l895:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp897, 19);
        panda$core$Bit $tmp898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp897);
        if ($tmp898.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp900 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 16));
            test899 = *$tmp900;
            panda$collections$ImmutableArray** $tmp902 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9637->$data + 24));
            ifTrue901 = *$tmp902;
            org$pandalanguage$pandac$IRNode** $tmp904 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 32));
            ifFalse903 = *$tmp904;
            panda$core$Bit $tmp906 = (($fn905) test899->$class->vtable[4])(test899);
            if ($tmp906.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp907, true);
                $returnValue645 = $tmp907;
                $tmp636 = 22;
                goto $l634;
                $l908:;
                return $returnValue645;
            }
            }
            {
                int $tmp912;
                {
                    ITable* $tmp916 = ((panda$collections$Iterable*) ifTrue901)->$class->itable;
                    while ($tmp916->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp916 = $tmp916->next;
                    }
                    $fn918 $tmp917 = $tmp916->methods[0];
                    panda$collections$Iterator* $tmp919 = $tmp917(((panda$collections$Iterable*) ifTrue901));
                    $tmp915 = $tmp919;
                    $tmp914 = $tmp915;
                    Iter$323$17913 = $tmp914;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp914));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp915));
                    $l920:;
                    ITable* $tmp923 = Iter$323$17913->$class->itable;
                    while ($tmp923->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp923 = $tmp923->next;
                    }
                    $fn925 $tmp924 = $tmp923->methods[0];
                    panda$core$Bit $tmp926 = $tmp924(Iter$323$17913);
                    panda$core$Bit $tmp927 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp926);
                    bool $tmp922 = $tmp927.value;
                    if (!$tmp922) goto $l921;
                    {
                        int $tmp930;
                        {
                            ITable* $tmp934 = Iter$323$17913->$class->itable;
                            while ($tmp934->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp934 = $tmp934->next;
                            }
                            $fn936 $tmp935 = $tmp934->methods[1];
                            panda$core$Object* $tmp937 = $tmp935(Iter$323$17913);
                            $tmp933 = $tmp937;
                            $tmp932 = ((org$pandalanguage$pandac$IRNode*) $tmp933);
                            s931 = $tmp932;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp932));
                            panda$core$Panda$unref$panda$core$Object($tmp933);
                            panda$core$Bit $tmp939 = (($fn938) s931->$class->vtable[4])(s931);
                            if ($tmp939.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp940, true);
                                $returnValue645 = $tmp940;
                                $tmp930 = 0;
                                goto $l928;
                                $l941:;
                                $tmp912 = 0;
                                goto $l910;
                                $l942:;
                                $tmp636 = 23;
                                goto $l634;
                                $l943:;
                                return $returnValue645;
                            }
                            }
                        }
                        $tmp930 = -1;
                        goto $l928;
                        $l928:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s931));
                        s931 = NULL;
                        switch ($tmp930) {
                            case 0: goto $l941;
                            case -1: goto $l945;
                        }
                        $l945:;
                    }
                    goto $l920;
                    $l921:;
                }
                $tmp912 = -1;
                goto $l910;
                $l910:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$323$17913));
                Iter$323$17913 = NULL;
                switch ($tmp912) {
                    case -1: goto $l946;
                    case 0: goto $l942;
                }
                $l946:;
            }
            panda$core$Bit $tmp948 = (($fn947) ifFalse903->$class->vtable[4])(ifFalse903);
            $returnValue645 = $tmp948;
            $tmp636 = 24;
            goto $l634;
            $l949:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp951, 20);
        panda$core$Bit $tmp952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp951);
        if ($tmp952.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp953, false);
            $returnValue645 = $tmp953;
            $tmp636 = 25;
            goto $l634;
            $l954:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp956, 21);
        panda$core$Bit $tmp957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp956);
        if ($tmp957.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp959 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 16));
            value958 = *$tmp959;
            panda$core$Bit $tmp961 = (($fn960) value958->$class->vtable[4])(value958);
            $returnValue645 = $tmp961;
            $tmp636 = 26;
            goto $l634;
            $l962:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp964, 22);
        panda$core$Bit $tmp965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp964);
        if ($tmp965.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp967 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 16));
            value966 = *$tmp967;
            panda$core$Bit $tmp969 = (($fn968) value966->$class->vtable[4])(value966);
            $returnValue645 = $tmp969;
            $tmp636 = 27;
            goto $l634;
            $l970:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp972, 23);
        panda$core$Bit $tmp973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp972);
        if ($tmp973.value) {
        {
            panda$core$String** $tmp975 = ((panda$core$String**) ((char*) $match$263_9637->$data + 16));
            label974 = *$tmp975;
            panda$collections$ImmutableArray** $tmp977 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9637->$data + 24));
            statements976 = *$tmp977;
            {
                int $tmp980;
                {
                    ITable* $tmp984 = ((panda$collections$Iterable*) statements976)->$class->itable;
                    while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp984 = $tmp984->next;
                    }
                    $fn986 $tmp985 = $tmp984->methods[0];
                    panda$collections$Iterator* $tmp987 = $tmp985(((panda$collections$Iterable*) statements976));
                    $tmp983 = $tmp987;
                    $tmp982 = $tmp983;
                    Iter$336$17981 = $tmp982;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp982));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
                    $l988:;
                    ITable* $tmp991 = Iter$336$17981->$class->itable;
                    while ($tmp991->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp991 = $tmp991->next;
                    }
                    $fn993 $tmp992 = $tmp991->methods[0];
                    panda$core$Bit $tmp994 = $tmp992(Iter$336$17981);
                    panda$core$Bit $tmp995 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp994);
                    bool $tmp990 = $tmp995.value;
                    if (!$tmp990) goto $l989;
                    {
                        int $tmp998;
                        {
                            ITable* $tmp1002 = Iter$336$17981->$class->itable;
                            while ($tmp1002->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1002 = $tmp1002->next;
                            }
                            $fn1004 $tmp1003 = $tmp1002->methods[1];
                            panda$core$Object* $tmp1005 = $tmp1003(Iter$336$17981);
                            $tmp1001 = $tmp1005;
                            $tmp1000 = ((org$pandalanguage$pandac$IRNode*) $tmp1001);
                            s999 = $tmp1000;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1000));
                            panda$core$Panda$unref$panda$core$Object($tmp1001);
                            panda$core$Bit $tmp1007 = (($fn1006) s999->$class->vtable[4])(s999);
                            if ($tmp1007.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1008, true);
                                $returnValue645 = $tmp1008;
                                $tmp998 = 0;
                                goto $l996;
                                $l1009:;
                                $tmp980 = 0;
                                goto $l978;
                                $l1010:;
                                $tmp636 = 28;
                                goto $l634;
                                $l1011:;
                                return $returnValue645;
                            }
                            }
                        }
                        $tmp998 = -1;
                        goto $l996;
                        $l996:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s999));
                        s999 = NULL;
                        switch ($tmp998) {
                            case 0: goto $l1009;
                            case -1: goto $l1013;
                        }
                        $l1013:;
                    }
                    goto $l988;
                    $l989:;
                }
                $tmp980 = -1;
                goto $l978;
                $l978:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$17981));
                Iter$336$17981 = NULL;
                switch ($tmp980) {
                    case -1: goto $l1014;
                    case 0: goto $l1010;
                }
                $l1014:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1015, false);
            $returnValue645 = $tmp1015;
            $tmp636 = 29;
            goto $l634;
            $l1016:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1018, 24);
        panda$core$Bit $tmp1019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1018);
        if ($tmp1019.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1021 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 16));
            value1020 = *$tmp1021;
            panda$collections$ImmutableArray** $tmp1023 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9637->$data + 24));
            whens1022 = *$tmp1023;
            panda$collections$ImmutableArray** $tmp1025 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9637->$data + 32));
            other1024 = *$tmp1025;
            panda$core$Bit $tmp1027 = (($fn1026) value1020->$class->vtable[4])(value1020);
            if ($tmp1027.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1028, true);
                $returnValue645 = $tmp1028;
                $tmp636 = 30;
                goto $l634;
                $l1029:;
                return $returnValue645;
            }
            }
            {
                int $tmp1033;
                {
                    ITable* $tmp1037 = ((panda$collections$Iterable*) whens1022)->$class->itable;
                    while ($tmp1037->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1037 = $tmp1037->next;
                    }
                    $fn1039 $tmp1038 = $tmp1037->methods[0];
                    panda$collections$Iterator* $tmp1040 = $tmp1038(((panda$collections$Iterable*) whens1022));
                    $tmp1036 = $tmp1040;
                    $tmp1035 = $tmp1036;
                    Iter$346$171034 = $tmp1035;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1035));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1036));
                    $l1041:;
                    ITable* $tmp1044 = Iter$346$171034->$class->itable;
                    while ($tmp1044->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1044 = $tmp1044->next;
                    }
                    $fn1046 $tmp1045 = $tmp1044->methods[0];
                    panda$core$Bit $tmp1047 = $tmp1045(Iter$346$171034);
                    panda$core$Bit $tmp1048 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1047);
                    bool $tmp1043 = $tmp1048.value;
                    if (!$tmp1043) goto $l1042;
                    {
                        int $tmp1051;
                        {
                            ITable* $tmp1055 = Iter$346$171034->$class->itable;
                            while ($tmp1055->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1055 = $tmp1055->next;
                            }
                            $fn1057 $tmp1056 = $tmp1055->methods[1];
                            panda$core$Object* $tmp1058 = $tmp1056(Iter$346$171034);
                            $tmp1054 = $tmp1058;
                            $tmp1053 = ((org$pandalanguage$pandac$IRNode*) $tmp1054);
                            w1052 = $tmp1053;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1053));
                            panda$core$Panda$unref$panda$core$Object($tmp1054);
                            panda$core$Bit $tmp1060 = (($fn1059) w1052->$class->vtable[4])(w1052);
                            if ($tmp1060.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1061, true);
                                $returnValue645 = $tmp1061;
                                $tmp1051 = 0;
                                goto $l1049;
                                $l1062:;
                                $tmp1033 = 0;
                                goto $l1031;
                                $l1063:;
                                $tmp636 = 31;
                                goto $l634;
                                $l1064:;
                                return $returnValue645;
                            }
                            }
                        }
                        $tmp1051 = -1;
                        goto $l1049;
                        $l1049:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1052));
                        w1052 = NULL;
                        switch ($tmp1051) {
                            case 0: goto $l1062;
                            case -1: goto $l1066;
                        }
                        $l1066:;
                    }
                    goto $l1041;
                    $l1042:;
                }
                $tmp1033 = -1;
                goto $l1031;
                $l1031:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$346$171034));
                Iter$346$171034 = NULL;
                switch ($tmp1033) {
                    case 0: goto $l1063;
                    case -1: goto $l1067;
                }
                $l1067:;
            }
            {
                int $tmp1070;
                {
                    ITable* $tmp1074 = ((panda$collections$Iterable*) other1024)->$class->itable;
                    while ($tmp1074->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1074 = $tmp1074->next;
                    }
                    $fn1076 $tmp1075 = $tmp1074->methods[0];
                    panda$collections$Iterator* $tmp1077 = $tmp1075(((panda$collections$Iterable*) other1024));
                    $tmp1073 = $tmp1077;
                    $tmp1072 = $tmp1073;
                    Iter$351$171071 = $tmp1072;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1072));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1073));
                    $l1078:;
                    ITable* $tmp1081 = Iter$351$171071->$class->itable;
                    while ($tmp1081->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1081 = $tmp1081->next;
                    }
                    $fn1083 $tmp1082 = $tmp1081->methods[0];
                    panda$core$Bit $tmp1084 = $tmp1082(Iter$351$171071);
                    panda$core$Bit $tmp1085 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1084);
                    bool $tmp1080 = $tmp1085.value;
                    if (!$tmp1080) goto $l1079;
                    {
                        int $tmp1088;
                        {
                            ITable* $tmp1092 = Iter$351$171071->$class->itable;
                            while ($tmp1092->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1092 = $tmp1092->next;
                            }
                            $fn1094 $tmp1093 = $tmp1092->methods[1];
                            panda$core$Object* $tmp1095 = $tmp1093(Iter$351$171071);
                            $tmp1091 = $tmp1095;
                            $tmp1090 = ((org$pandalanguage$pandac$IRNode*) $tmp1091);
                            s1089 = $tmp1090;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1090));
                            panda$core$Panda$unref$panda$core$Object($tmp1091);
                            panda$core$Bit $tmp1097 = (($fn1096) s1089->$class->vtable[4])(s1089);
                            if ($tmp1097.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1098, true);
                                $returnValue645 = $tmp1098;
                                $tmp1088 = 0;
                                goto $l1086;
                                $l1099:;
                                $tmp1070 = 0;
                                goto $l1068;
                                $l1100:;
                                $tmp636 = 32;
                                goto $l634;
                                $l1101:;
                                return $returnValue645;
                            }
                            }
                        }
                        $tmp1088 = -1;
                        goto $l1086;
                        $l1086:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1089));
                        s1089 = NULL;
                        switch ($tmp1088) {
                            case -1: goto $l1103;
                            case 0: goto $l1099;
                        }
                        $l1103:;
                    }
                    goto $l1078;
                    $l1079:;
                }
                $tmp1070 = -1;
                goto $l1068;
                $l1068:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$351$171071));
                Iter$351$171071 = NULL;
                switch ($tmp1070) {
                    case 0: goto $l1100;
                    case -1: goto $l1104;
                }
                $l1104:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1105, false);
            $returnValue645 = $tmp1105;
            $tmp636 = 33;
            goto $l634;
            $l1106:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1108, 25);
        panda$core$Bit $tmp1109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1108);
        if ($tmp1109.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1110, false);
            $returnValue645 = $tmp1110;
            $tmp636 = 34;
            goto $l634;
            $l1111:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1113, 26);
        panda$core$Bit $tmp1114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1113);
        if ($tmp1114.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1115, false);
            $returnValue645 = $tmp1115;
            $tmp636 = 35;
            goto $l634;
            $l1116:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1118, 27);
        panda$core$Bit $tmp1119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1118);
        if ($tmp1119.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1120, false);
            $returnValue645 = $tmp1120;
            $tmp636 = 36;
            goto $l634;
            $l1121:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1123, 28);
        panda$core$Bit $tmp1124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1123);
        if ($tmp1124.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1126 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 24));
            base1125 = *$tmp1126;
            panda$core$Bit $tmp1128 = (($fn1127) base1125->$class->vtable[4])(base1125);
            $returnValue645 = $tmp1128;
            $tmp636 = 37;
            goto $l634;
            $l1129:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1131, 29);
        panda$core$Bit $tmp1132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1131);
        if ($tmp1132.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1134 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 32));
            list1133 = *$tmp1134;
            panda$collections$ImmutableArray** $tmp1136 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9637->$data + 40));
            statements1135 = *$tmp1136;
            panda$core$Bit $tmp1138 = (($fn1137) list1133->$class->vtable[4])(list1133);
            if ($tmp1138.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1139, true);
                $returnValue645 = $tmp1139;
                $tmp636 = 38;
                goto $l634;
                $l1140:;
                return $returnValue645;
            }
            }
            {
                int $tmp1144;
                {
                    ITable* $tmp1148 = ((panda$collections$Iterable*) statements1135)->$class->itable;
                    while ($tmp1148->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1148 = $tmp1148->next;
                    }
                    $fn1150 $tmp1149 = $tmp1148->methods[0];
                    panda$collections$Iterator* $tmp1151 = $tmp1149(((panda$collections$Iterable*) statements1135));
                    $tmp1147 = $tmp1151;
                    $tmp1146 = $tmp1147;
                    Iter$370$171145 = $tmp1146;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1146));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1147));
                    $l1152:;
                    ITable* $tmp1155 = Iter$370$171145->$class->itable;
                    while ($tmp1155->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1155 = $tmp1155->next;
                    }
                    $fn1157 $tmp1156 = $tmp1155->methods[0];
                    panda$core$Bit $tmp1158 = $tmp1156(Iter$370$171145);
                    panda$core$Bit $tmp1159 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1158);
                    bool $tmp1154 = $tmp1159.value;
                    if (!$tmp1154) goto $l1153;
                    {
                        int $tmp1162;
                        {
                            ITable* $tmp1166 = Iter$370$171145->$class->itable;
                            while ($tmp1166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1166 = $tmp1166->next;
                            }
                            $fn1168 $tmp1167 = $tmp1166->methods[1];
                            panda$core$Object* $tmp1169 = $tmp1167(Iter$370$171145);
                            $tmp1165 = $tmp1169;
                            $tmp1164 = ((org$pandalanguage$pandac$IRNode*) $tmp1165);
                            s1163 = $tmp1164;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1164));
                            panda$core$Panda$unref$panda$core$Object($tmp1165);
                            panda$core$Bit $tmp1171 = (($fn1170) s1163->$class->vtable[4])(s1163);
                            if ($tmp1171.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1172, true);
                                $returnValue645 = $tmp1172;
                                $tmp1162 = 0;
                                goto $l1160;
                                $l1173:;
                                $tmp1144 = 0;
                                goto $l1142;
                                $l1174:;
                                $tmp636 = 39;
                                goto $l634;
                                $l1175:;
                                return $returnValue645;
                            }
                            }
                        }
                        $tmp1162 = -1;
                        goto $l1160;
                        $l1160:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1163));
                        s1163 = NULL;
                        switch ($tmp1162) {
                            case 0: goto $l1173;
                            case -1: goto $l1177;
                        }
                        $l1177:;
                    }
                    goto $l1152;
                    $l1153:;
                }
                $tmp1144 = -1;
                goto $l1142;
                $l1142:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$370$171145));
                Iter$370$171145 = NULL;
                switch ($tmp1144) {
                    case -1: goto $l1178;
                    case 0: goto $l1174;
                }
                $l1178:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1179, false);
            $returnValue645 = $tmp1179;
            $tmp636 = 40;
            goto $l634;
            $l1180:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1182, 30);
        panda$core$Bit $tmp1183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1182);
        if ($tmp1183.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1184, false);
            $returnValue645 = $tmp1184;
            $tmp636 = 41;
            goto $l634;
            $l1185:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1187, 31);
        panda$core$Bit $tmp1188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1187);
        if ($tmp1188.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1190 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 16));
            value1189 = *$tmp1190;
            panda$core$Bit $tmp1192 = (($fn1191) value1189->$class->vtable[4])(value1189);
            $returnValue645 = $tmp1192;
            $tmp636 = 42;
            goto $l634;
            $l1193:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1195, 32);
        panda$core$Bit $tmp1196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1195);
        if ($tmp1196.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1197, false);
            $returnValue645 = $tmp1197;
            $tmp636 = 43;
            goto $l634;
            $l1198:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1200, 33);
        panda$core$Bit $tmp1201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1200);
        if ($tmp1201.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1203 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 0));
            base1202 = *$tmp1203;
            panda$core$Bit $tmp1205 = (($fn1204) base1202->$class->vtable[4])(base1202);
            $returnValue645 = $tmp1205;
            $tmp636 = 44;
            goto $l634;
            $l1206:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1208, 34);
        panda$core$Bit $tmp1209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1208);
        if ($tmp1209.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1210, false);
            $returnValue645 = $tmp1210;
            $tmp636 = 45;
            goto $l634;
            $l1211:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1213, 35);
        panda$core$Bit $tmp1214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1213);
        if ($tmp1214.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1215, false);
            $returnValue645 = $tmp1215;
            $tmp636 = 46;
            goto $l634;
            $l1216:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1218, 36);
        panda$core$Bit $tmp1219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1218);
        if ($tmp1219.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1220, false);
            $returnValue645 = $tmp1220;
            $tmp636 = 47;
            goto $l634;
            $l1221:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1223, 37);
        panda$core$Bit $tmp1224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1223);
        if ($tmp1224.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1225, false);
            $returnValue645 = $tmp1225;
            $tmp636 = 48;
            goto $l634;
            $l1226:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1228, 38);
        panda$core$Bit $tmp1229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1228);
        if ($tmp1229.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1231 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 16));
            test1230 = *$tmp1231;
            org$pandalanguage$pandac$IRNode** $tmp1233 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 24));
            ifTrue1232 = *$tmp1233;
            org$pandalanguage$pandac$IRNode** $tmp1235 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 32));
            ifFalse1234 = *$tmp1235;
            panda$core$Bit $tmp1239 = (($fn1238) test1230->$class->vtable[4])(test1230);
            bool $tmp1237 = $tmp1239.value;
            if ($tmp1237) goto $l1240;
            panda$core$Bit $tmp1242 = (($fn1241) ifTrue1232->$class->vtable[4])(ifTrue1232);
            $tmp1237 = $tmp1242.value;
            $l1240:;
            panda$core$Bit $tmp1243 = { $tmp1237 };
            bool $tmp1236 = $tmp1243.value;
            if ($tmp1236) goto $l1244;
            panda$core$Bit $tmp1246 = (($fn1245) ifFalse1234->$class->vtable[4])(ifFalse1234);
            $tmp1236 = $tmp1246.value;
            $l1244:;
            panda$core$Bit $tmp1247 = { $tmp1236 };
            $returnValue645 = $tmp1247;
            $tmp636 = 49;
            goto $l634;
            $l1248:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1250, 39);
        panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1250);
        if ($tmp1251.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1252, false);
            $returnValue645 = $tmp1252;
            $tmp636 = 50;
            goto $l634;
            $l1253:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1255, 40);
        panda$core$Bit $tmp1256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1255);
        if ($tmp1256.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1257, false);
            if ($tmp1257.value) goto $l1258; else goto $l1259;
            $l1259:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1260, (panda$core$Int64) { 397 });
            abort();
            $l1258:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1261, 41);
        panda$core$Bit $tmp1262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1261);
        if ($tmp1262.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1263, false);
            if ($tmp1263.value) goto $l1264; else goto $l1265;
            $l1265:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1266, (panda$core$Int64) { 399 });
            abort();
            $l1264:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1267, 42);
        panda$core$Bit $tmp1268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1267);
        if ($tmp1268.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1269, false);
            if ($tmp1269.value) goto $l1270; else goto $l1271;
            $l1271:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1272, (panda$core$Int64) { 401 });
            abort();
            $l1270:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1273, 43);
        panda$core$Bit $tmp1274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1273);
        if ($tmp1274.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1275, false);
            if ($tmp1275.value) goto $l1276; else goto $l1277;
            $l1277:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1278, (panda$core$Int64) { 403 });
            abort();
            $l1276:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1279, 44);
        panda$core$Bit $tmp1280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1279);
        if ($tmp1280.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1281, false);
            if ($tmp1281.value) goto $l1282; else goto $l1283;
            $l1283:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1284, (panda$core$Int64) { 405 });
            abort();
            $l1282:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1285, 45);
        panda$core$Bit $tmp1286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1285);
        if ($tmp1286.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1287, false);
            if ($tmp1287.value) goto $l1288; else goto $l1289;
            $l1289:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1290, (panda$core$Int64) { 407 });
            abort();
            $l1288:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1291, 46);
        panda$core$Bit $tmp1292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1291);
        if ($tmp1292.value) {
        {
            panda$collections$ImmutableArray** $tmp1294 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9637->$data + 24));
            decls1293 = *$tmp1294;
            {
                int $tmp1297;
                {
                    ITable* $tmp1301 = ((panda$collections$Iterable*) decls1293)->$class->itable;
                    while ($tmp1301->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1301 = $tmp1301->next;
                    }
                    $fn1303 $tmp1302 = $tmp1301->methods[0];
                    panda$collections$Iterator* $tmp1304 = $tmp1302(((panda$collections$Iterable*) decls1293));
                    $tmp1300 = $tmp1304;
                    $tmp1299 = $tmp1300;
                    Iter$409$171298 = $tmp1299;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1299));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
                    $l1305:;
                    ITable* $tmp1308 = Iter$409$171298->$class->itable;
                    while ($tmp1308->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1308 = $tmp1308->next;
                    }
                    $fn1310 $tmp1309 = $tmp1308->methods[0];
                    panda$core$Bit $tmp1311 = $tmp1309(Iter$409$171298);
                    panda$core$Bit $tmp1312 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1311);
                    bool $tmp1307 = $tmp1312.value;
                    if (!$tmp1307) goto $l1306;
                    {
                        int $tmp1315;
                        {
                            ITable* $tmp1319 = Iter$409$171298->$class->itable;
                            while ($tmp1319->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1319 = $tmp1319->next;
                            }
                            $fn1321 $tmp1320 = $tmp1319->methods[1];
                            panda$core$Object* $tmp1322 = $tmp1320(Iter$409$171298);
                            $tmp1318 = $tmp1322;
                            $tmp1317 = ((org$pandalanguage$pandac$IRNode*) $tmp1318);
                            d1316 = $tmp1317;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1317));
                            panda$core$Panda$unref$panda$core$Object($tmp1318);
                            panda$core$Bit $tmp1324 = (($fn1323) d1316->$class->vtable[4])(d1316);
                            if ($tmp1324.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1325, true);
                                $returnValue645 = $tmp1325;
                                $tmp1315 = 0;
                                goto $l1313;
                                $l1326:;
                                $tmp1297 = 0;
                                goto $l1295;
                                $l1327:;
                                $tmp636 = 51;
                                goto $l634;
                                $l1328:;
                                return $returnValue645;
                            }
                            }
                        }
                        $tmp1315 = -1;
                        goto $l1313;
                        $l1313:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1316));
                        d1316 = NULL;
                        switch ($tmp1315) {
                            case -1: goto $l1330;
                            case 0: goto $l1326;
                        }
                        $l1330:;
                    }
                    goto $l1305;
                    $l1306:;
                }
                $tmp1297 = -1;
                goto $l1295;
                $l1295:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$409$171298));
                Iter$409$171298 = NULL;
                switch ($tmp1297) {
                    case -1: goto $l1331;
                    case 0: goto $l1327;
                }
                $l1331:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1332, false);
            $returnValue645 = $tmp1332;
            $tmp636 = 52;
            goto $l634;
            $l1333:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1335, 47);
        panda$core$Bit $tmp1336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1335);
        if ($tmp1336.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1337, false);
            $returnValue645 = $tmp1337;
            $tmp636 = 53;
            goto $l634;
            $l1338:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1340, 48);
        panda$core$Bit $tmp1341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1340);
        if ($tmp1341.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1342, false);
            $returnValue645 = $tmp1342;
            $tmp636 = 54;
            goto $l634;
            $l1343:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1345, 49);
        panda$core$Bit $tmp1346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1345);
        if ($tmp1346.value) {
        {
            panda$collections$ImmutableArray** $tmp1348 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9637->$data + 16));
            tests1347 = *$tmp1348;
            panda$collections$ImmutableArray** $tmp1350 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9637->$data + 24));
            statements1349 = *$tmp1350;
            {
                int $tmp1353;
                {
                    ITable* $tmp1357 = ((panda$collections$Iterable*) tests1347)->$class->itable;
                    while ($tmp1357->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1357 = $tmp1357->next;
                    }
                    $fn1359 $tmp1358 = $tmp1357->methods[0];
                    panda$collections$Iterator* $tmp1360 = $tmp1358(((panda$collections$Iterable*) tests1347));
                    $tmp1356 = $tmp1360;
                    $tmp1355 = $tmp1356;
                    Iter$420$171354 = $tmp1355;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1355));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1356));
                    $l1361:;
                    ITable* $tmp1364 = Iter$420$171354->$class->itable;
                    while ($tmp1364->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1364 = $tmp1364->next;
                    }
                    $fn1366 $tmp1365 = $tmp1364->methods[0];
                    panda$core$Bit $tmp1367 = $tmp1365(Iter$420$171354);
                    panda$core$Bit $tmp1368 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1367);
                    bool $tmp1363 = $tmp1368.value;
                    if (!$tmp1363) goto $l1362;
                    {
                        int $tmp1371;
                        {
                            ITable* $tmp1375 = Iter$420$171354->$class->itable;
                            while ($tmp1375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1375 = $tmp1375->next;
                            }
                            $fn1377 $tmp1376 = $tmp1375->methods[1];
                            panda$core$Object* $tmp1378 = $tmp1376(Iter$420$171354);
                            $tmp1374 = $tmp1378;
                            $tmp1373 = ((org$pandalanguage$pandac$IRNode*) $tmp1374);
                            t1372 = $tmp1373;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1373));
                            panda$core$Panda$unref$panda$core$Object($tmp1374);
                            panda$core$Bit $tmp1380 = (($fn1379) t1372->$class->vtable[4])(t1372);
                            if ($tmp1380.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1381, true);
                                $returnValue645 = $tmp1381;
                                $tmp1371 = 0;
                                goto $l1369;
                                $l1382:;
                                $tmp1353 = 0;
                                goto $l1351;
                                $l1383:;
                                $tmp636 = 55;
                                goto $l634;
                                $l1384:;
                                return $returnValue645;
                            }
                            }
                        }
                        $tmp1371 = -1;
                        goto $l1369;
                        $l1369:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1372));
                        t1372 = NULL;
                        switch ($tmp1371) {
                            case 0: goto $l1382;
                            case -1: goto $l1386;
                        }
                        $l1386:;
                    }
                    goto $l1361;
                    $l1362:;
                }
                $tmp1353 = -1;
                goto $l1351;
                $l1351:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$420$171354));
                Iter$420$171354 = NULL;
                switch ($tmp1353) {
                    case 0: goto $l1383;
                    case -1: goto $l1387;
                }
                $l1387:;
            }
            {
                int $tmp1390;
                {
                    ITable* $tmp1394 = ((panda$collections$Iterable*) statements1349)->$class->itable;
                    while ($tmp1394->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1394 = $tmp1394->next;
                    }
                    $fn1396 $tmp1395 = $tmp1394->methods[0];
                    panda$collections$Iterator* $tmp1397 = $tmp1395(((panda$collections$Iterable*) statements1349));
                    $tmp1393 = $tmp1397;
                    $tmp1392 = $tmp1393;
                    Iter$425$171391 = $tmp1392;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1392));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1393));
                    $l1398:;
                    ITable* $tmp1401 = Iter$425$171391->$class->itable;
                    while ($tmp1401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1401 = $tmp1401->next;
                    }
                    $fn1403 $tmp1402 = $tmp1401->methods[0];
                    panda$core$Bit $tmp1404 = $tmp1402(Iter$425$171391);
                    panda$core$Bit $tmp1405 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1404);
                    bool $tmp1400 = $tmp1405.value;
                    if (!$tmp1400) goto $l1399;
                    {
                        int $tmp1408;
                        {
                            ITable* $tmp1412 = Iter$425$171391->$class->itable;
                            while ($tmp1412->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1412 = $tmp1412->next;
                            }
                            $fn1414 $tmp1413 = $tmp1412->methods[1];
                            panda$core$Object* $tmp1415 = $tmp1413(Iter$425$171391);
                            $tmp1411 = $tmp1415;
                            $tmp1410 = ((org$pandalanguage$pandac$IRNode*) $tmp1411);
                            s1409 = $tmp1410;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1410));
                            panda$core$Panda$unref$panda$core$Object($tmp1411);
                            panda$core$Bit $tmp1417 = (($fn1416) s1409->$class->vtable[4])(s1409);
                            if ($tmp1417.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1418, true);
                                $returnValue645 = $tmp1418;
                                $tmp1408 = 0;
                                goto $l1406;
                                $l1419:;
                                $tmp1390 = 0;
                                goto $l1388;
                                $l1420:;
                                $tmp636 = 56;
                                goto $l634;
                                $l1421:;
                                return $returnValue645;
                            }
                            }
                        }
                        $tmp1408 = -1;
                        goto $l1406;
                        $l1406:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1409));
                        s1409 = NULL;
                        switch ($tmp1408) {
                            case 0: goto $l1419;
                            case -1: goto $l1423;
                        }
                        $l1423:;
                    }
                    goto $l1398;
                    $l1399:;
                }
                $tmp1390 = -1;
                goto $l1388;
                $l1388:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$425$171391));
                Iter$425$171391 = NULL;
                switch ($tmp1390) {
                    case 0: goto $l1420;
                    case -1: goto $l1424;
                }
                $l1424:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1425, false);
            $returnValue645 = $tmp1425;
            $tmp636 = 57;
            goto $l634;
            $l1426:;
            return $returnValue645;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1428, 50);
        panda$core$Bit $tmp1429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9637->$rawValue, $tmp1428);
        if ($tmp1429.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1431 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9637->$data + 24));
            test1430 = *$tmp1431;
            panda$collections$ImmutableArray** $tmp1433 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9637->$data + 32));
            statements1432 = *$tmp1433;
            panda$core$Bit $tmp1435 = (($fn1434) test1430->$class->vtable[4])(test1430);
            if ($tmp1435.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1436, true);
                $returnValue645 = $tmp1436;
                $tmp636 = 58;
                goto $l634;
                $l1437:;
                return $returnValue645;
            }
            }
            {
                int $tmp1441;
                {
                    ITable* $tmp1445 = ((panda$collections$Iterable*) statements1432)->$class->itable;
                    while ($tmp1445->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1445 = $tmp1445->next;
                    }
                    $fn1447 $tmp1446 = $tmp1445->methods[0];
                    panda$collections$Iterator* $tmp1448 = $tmp1446(((panda$collections$Iterable*) statements1432));
                    $tmp1444 = $tmp1448;
                    $tmp1443 = $tmp1444;
                    Iter$435$171442 = $tmp1443;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1443));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1444));
                    $l1449:;
                    ITable* $tmp1452 = Iter$435$171442->$class->itable;
                    while ($tmp1452->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1452 = $tmp1452->next;
                    }
                    $fn1454 $tmp1453 = $tmp1452->methods[0];
                    panda$core$Bit $tmp1455 = $tmp1453(Iter$435$171442);
                    panda$core$Bit $tmp1456 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1455);
                    bool $tmp1451 = $tmp1456.value;
                    if (!$tmp1451) goto $l1450;
                    {
                        int $tmp1459;
                        {
                            ITable* $tmp1463 = Iter$435$171442->$class->itable;
                            while ($tmp1463->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1463 = $tmp1463->next;
                            }
                            $fn1465 $tmp1464 = $tmp1463->methods[1];
                            panda$core$Object* $tmp1466 = $tmp1464(Iter$435$171442);
                            $tmp1462 = $tmp1466;
                            $tmp1461 = ((org$pandalanguage$pandac$IRNode*) $tmp1462);
                            s1460 = $tmp1461;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1461));
                            panda$core$Panda$unref$panda$core$Object($tmp1462);
                            panda$core$Bit $tmp1468 = (($fn1467) s1460->$class->vtable[4])(s1460);
                            if ($tmp1468.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1469, true);
                                $returnValue645 = $tmp1469;
                                $tmp1459 = 0;
                                goto $l1457;
                                $l1470:;
                                $tmp1441 = 0;
                                goto $l1439;
                                $l1471:;
                                $tmp636 = 59;
                                goto $l634;
                                $l1472:;
                                return $returnValue645;
                            }
                            }
                        }
                        $tmp1459 = -1;
                        goto $l1457;
                        $l1457:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1460));
                        s1460 = NULL;
                        switch ($tmp1459) {
                            case 0: goto $l1470;
                            case -1: goto $l1474;
                        }
                        $l1474:;
                    }
                    goto $l1449;
                    $l1450:;
                }
                $tmp1441 = -1;
                goto $l1439;
                $l1439:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$435$171442));
                Iter$435$171442 = NULL;
                switch ($tmp1441) {
                    case -1: goto $l1475;
                    case 0: goto $l1471;
                }
                $l1475:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1476, false);
            $returnValue645 = $tmp1476;
            $tmp636 = 60;
            goto $l634;
            $l1477:;
            return $returnValue645;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1479, false);
            if ($tmp1479.value) goto $l1480; else goto $l1481;
            $l1481:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1482, (panda$core$Int64) { 442 });
            abort();
            $l1480:;
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
    $tmp636 = -1;
    goto $l634;
    $l634:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
    switch ($tmp636) {
        case 1: goto $l658;
        case -1: goto $l1483;
        case 33: goto $l1106;
        case 17: goto $l845;
        case 34: goto $l1111;
        case 18: goto $l880;
        case 31: goto $l1064;
        case 36: goto $l1121;
        case 44: goto $l1206;
        case 14: goto $l814;
        case 59: goto $l1472;
        case 25: goto $l954;
        case 32: goto $l1101;
        case 35: goto $l1116;
        case 24: goto $l949;
        case 60: goto $l1477;
        case 0: goto $l653;
        case 43: goto $l1198;
        case 48: goto $l1226;
        case 26: goto $l962;
        case 40: goto $l1180;
        case 58: goto $l1437;
        case 46: goto $l1216;
        case 57: goto $l1426;
        case 37: goto $l1129;
        case 10: goto $l789;
        case 39: goto $l1175;
        case 56: goto $l1421;
        case 30: goto $l1029;
        case 11: goto $l794;
        case 28: goto $l1011;
        case 54: goto $l1343;
        case 23: goto $l943;
        case 29: goto $l1016;
        case 15: goto $l819;
        case 52: goto $l1333;
        case 53: goto $l1338;
        case 38: goto $l1140;
        case 22: goto $l908;
        case 41: goto $l1185;
        case 12: goto $l799;
        case 21: goto $l895;
        case 13: goto $l809;
        case 8: goto $l779;
        case 42: goto $l1193;
        case 7: goto $l744;
        case 45: goto $l1211;
        case 51: goto $l1328;
        case 16: goto $l832;
        case 9: goto $l784;
        case 55: goto $l1384;
        case 19: goto $l885;
        case 47: goto $l1221;
        case 49: goto $l1248;
        case 3: goto $l684;
        case 5: goto $l728;
        case 20: goto $l890;
        case 6: goto $l733;
        case 50: goto $l1253;
        case 2: goto $l679;
        case 4: goto $l723;
        case 27: goto $l970;
    }
    $l1483:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(panda$collections$ImmutableArray* p_nodes, panda$core$MutableMethod* p_f) {
    panda$collections$Array* newNodes1487 = NULL;
    panda$collections$Array* $tmp1488;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1489;
    panda$core$Int64 $tmp1490;
    panda$core$Bit $tmp1495;
    org$pandalanguage$pandac$IRNode* newNode1512 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1513;
    org$pandalanguage$pandac$IRNode* $tmp1514;
    panda$core$Object* $tmp1515;
    panda$collections$Array* $tmp1518;
    panda$collections$Array* $tmp1519;
    panda$collections$Array* $tmp1520;
    panda$collections$ImmutableArray* $returnValue1529;
    panda$collections$ImmutableArray* $tmp1530;
    panda$collections$ImmutableArray* $tmp1531;
    panda$collections$ImmutableArray* $tmp1535;
    int $tmp1486;
    {
        $tmp1488 = NULL;
        newNodes1487 = $tmp1488;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1488));
        if (((panda$core$Bit) { p_nodes != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1490, 0);
            ITable* $tmp1491 = ((panda$collections$CollectionView*) p_nodes)->$class->itable;
            while ($tmp1491->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1491 = $tmp1491->next;
            }
            $fn1493 $tmp1492 = $tmp1491->methods[0];
            panda$core$Int64 $tmp1494 = $tmp1492(((panda$collections$CollectionView*) p_nodes));
            panda$core$Bit$init$builtin_bit(&$tmp1495, false);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1489, $tmp1490, $tmp1494, $tmp1495);
            int64_t $tmp1497 = $tmp1489.min.value;
            panda$core$Int64 i1496 = { $tmp1497 };
            int64_t $tmp1499 = $tmp1489.max.value;
            bool $tmp1500 = $tmp1489.inclusive.value;
            if ($tmp1500) goto $l1507; else goto $l1508;
            $l1507:;
            if ($tmp1497 <= $tmp1499) goto $l1501; else goto $l1503;
            $l1508:;
            if ($tmp1497 < $tmp1499) goto $l1501; else goto $l1503;
            $l1501:;
            {
                int $tmp1511;
                {
                    panda$core$Object* $tmp1516 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_nodes, i1496);
                    $tmp1515 = $tmp1516;
                    org$pandalanguage$pandac$IRNode* $tmp1517 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(((org$pandalanguage$pandac$IRNode*) $tmp1515), p_f);
                    $tmp1514 = $tmp1517;
                    $tmp1513 = $tmp1514;
                    newNode1512 = $tmp1513;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1513));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1514));
                    panda$core$Panda$unref$panda$core$Object($tmp1515);
                    if (((panda$core$Bit) { newNode1512 != NULL }).value) {
                    {
                        if (((panda$core$Bit) { newNodes1487 == NULL }).value) {
                        {
                            {
                                $tmp1518 = newNodes1487;
                                panda$collections$Array* $tmp1521 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp1521, ((panda$collections$CollectionView*) p_nodes));
                                $tmp1520 = $tmp1521;
                                $tmp1519 = $tmp1520;
                                newNodes1487 = $tmp1519;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1519));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1520));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1518));
                            }
                        }
                        }
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(newNodes1487, i1496, ((panda$core$Object*) newNode1512));
                    }
                    }
                }
                $tmp1511 = -1;
                goto $l1509;
                $l1509:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newNode1512));
                newNode1512 = NULL;
                switch ($tmp1511) {
                    case -1: goto $l1522;
                }
                $l1522:;
            }
            $l1504:;
            int64_t $tmp1524 = $tmp1499 - i1496.value;
            if ($tmp1500) goto $l1525; else goto $l1526;
            $l1525:;
            if ((uint64_t) $tmp1524 >= 1) goto $l1523; else goto $l1503;
            $l1526:;
            if ((uint64_t) $tmp1524 > 1) goto $l1523; else goto $l1503;
            $l1523:;
            i1496.value += 1;
            goto $l1501;
            $l1503:;
        }
        }
        if (((panda$core$Bit) { newNodes1487 != NULL }).value) {
        {
            panda$collections$ImmutableArray* $tmp1532 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(newNodes1487);
            $tmp1531 = $tmp1532;
            $tmp1530 = $tmp1531;
            $returnValue1529 = $tmp1530;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1530));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1531));
            $tmp1486 = 0;
            goto $l1484;
            $l1533:;
            return $returnValue1529;
        }
        }
        $tmp1535 = NULL;
        $returnValue1529 = $tmp1535;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1535));
        $tmp1486 = 1;
        goto $l1484;
        $l1536:;
        return $returnValue1529;
    }
    $l1484:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newNodes1487));
    switch ($tmp1486) {
        case 0: goto $l1533;
        case 1: goto $l1536;
    }
    $l1538:;
    abort();
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* p_node, panda$core$MutableMethod* p_f) {
    org$pandalanguage$pandac$IRNode* $returnValue1539;
    org$pandalanguage$pandac$IRNode* $tmp1540;
    org$pandalanguage$pandac$IRNode* $tmp1542;
    org$pandalanguage$pandac$IRNode* $tmp1543;
    if (((panda$core$Bit) { p_node == NULL }).value) {
    {
        $tmp1540 = NULL;
        $returnValue1539 = $tmp1540;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1540));
        return $returnValue1539;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp1545 = (($fn1544) p_node->$class->vtable[7])(p_node, p_f);
    $tmp1543 = $tmp1545;
    $tmp1542 = $tmp1543;
    $returnValue1539 = $tmp1542;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1542));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1543));
    return $returnValue1539;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$default$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$IRNode* p_defaultValue) {
    org$pandalanguage$pandac$IRNode* $returnValue1547;
    org$pandalanguage$pandac$IRNode* $tmp1548;
    org$pandalanguage$pandac$IRNode* $tmp1550;
    if (((panda$core$Bit) { p_node != NULL }).value) {
    {
        $tmp1548 = p_node;
        $returnValue1547 = $tmp1548;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1548));
        return $returnValue1547;
    }
    }
    $tmp1550 = p_defaultValue;
    $returnValue1547 = $tmp1550;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1550));
    return $returnValue1547;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$IRNode$default$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$collections$ImmutableArray* p_nodes, panda$collections$ImmutableArray* p_defaultValue) {
    panda$collections$ImmutableArray* $returnValue1552;
    panda$collections$ImmutableArray* $tmp1553;
    panda$collections$ImmutableArray* $tmp1555;
    if (((panda$core$Bit) { p_nodes != NULL }).value) {
    {
        $tmp1553 = p_nodes;
        $returnValue1552 = $tmp1553;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1553));
        return $returnValue1552;
    }
    }
    $tmp1555 = p_defaultValue;
    $returnValue1552 = $tmp1555;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1555));
    return $returnValue1552;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$transform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$MutableMethod* p_f) {
    org$pandalanguage$pandac$IRNode* result1560 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1561;
    org$pandalanguage$pandac$IRNode* $tmp1562;
    org$pandalanguage$pandac$IRNode* $returnValue1564;
    org$pandalanguage$pandac$IRNode* $tmp1565;
    org$pandalanguage$pandac$IRNode* $tmp1568;
    int $tmp1559;
    {
        org$pandalanguage$pandac$IRNode* $tmp1563 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(self, p_f);
        $tmp1562 = $tmp1563;
        $tmp1561 = $tmp1562;
        result1560 = $tmp1561;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1561));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1562));
        if (((panda$core$Bit) { result1560 != NULL }).value) {
        {
            $tmp1565 = result1560;
            $returnValue1564 = $tmp1565;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1565));
            $tmp1559 = 0;
            goto $l1557;
            $l1566:;
            return $returnValue1564;
        }
        }
        $tmp1568 = self;
        $returnValue1564 = $tmp1568;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1568));
        $tmp1559 = 1;
        goto $l1557;
        $l1569:;
        return $returnValue1564;
    }
    $l1557:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1560));
    result1560 = NULL;
    switch ($tmp1559) {
        case 1: goto $l1569;
        case 0: goto $l1566;
    }
    $l1571:;
    abort();
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$MutableMethod* p_f) {
    org$pandalanguage$pandac$IRNode* transformed1575 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1576;
    org$pandalanguage$pandac$IRNode* $tmp1577;
    org$pandalanguage$pandac$IRNode* $tmp1578;
    org$pandalanguage$pandac$IRNode* $returnValue1581;
    org$pandalanguage$pandac$IRNode* $tmp1582;
    org$pandalanguage$pandac$IRNode* $match$506_91588 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1589;
    panda$core$Int64 $tmp1613;
    panda$core$Int64 $tmp1616;
    panda$core$Int64 $tmp1620;
    panda$core$Int64 $tmp1624;
    panda$core$Int64 $tmp1628;
    panda$core$Int64 $tmp1632;
    panda$core$Int64 $tmp1636;
    panda$core$Int64 $tmp1640;
    panda$core$Int64 $tmp1644;
    panda$core$Int64 $tmp1648;
    panda$core$Int64 $tmp1652;
    panda$core$Int64 $tmp1656;
    panda$core$Int64 $tmp1660;
    panda$core$Int64 $tmp1664;
    panda$core$Int64 $tmp1668;
    panda$core$Int64 $tmp1672;
    panda$core$Int64 $tmp1676;
    panda$core$Int64 $tmp1680;
    panda$core$Int64 $tmp1684;
    panda$core$Int64 $tmp1688;
    panda$core$Int64 $tmp1692;
    panda$core$Int64 $tmp1696;
    panda$core$Int64 $tmp1700;
    panda$core$Int64 $tmp1704;
    panda$core$Int64 $tmp1707;
    org$pandalanguage$pandac$Position position1709;
    org$pandalanguage$pandac$IRNode* test1711 = NULL;
    org$pandalanguage$pandac$IRNode* message1713 = NULL;
    org$pandalanguage$pandac$IRNode* newTest1718 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1719;
    org$pandalanguage$pandac$IRNode* $tmp1720;
    org$pandalanguage$pandac$IRNode* newMessage1722 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1723;
    org$pandalanguage$pandac$IRNode* $tmp1724;
    org$pandalanguage$pandac$IRNode* $tmp1729;
    org$pandalanguage$pandac$IRNode* $tmp1730;
    panda$core$Int64 $tmp1732;
    org$pandalanguage$pandac$IRNode* $tmp1733;
    org$pandalanguage$pandac$IRNode* $tmp1736;
    panda$core$Int64 $tmp1744;
    org$pandalanguage$pandac$Position position1746;
    org$pandalanguage$pandac$Type* type1748 = NULL;
    org$pandalanguage$pandac$IRNode* left1750 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op1752;
    org$pandalanguage$pandac$IRNode* right1754 = NULL;
    org$pandalanguage$pandac$IRNode* newLeft1759 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1760;
    org$pandalanguage$pandac$IRNode* $tmp1761;
    org$pandalanguage$pandac$IRNode* newRight1763 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1764;
    org$pandalanguage$pandac$IRNode* $tmp1765;
    org$pandalanguage$pandac$IRNode* $tmp1770;
    org$pandalanguage$pandac$IRNode* $tmp1771;
    panda$core$Int64 $tmp1773;
    org$pandalanguage$pandac$IRNode* $tmp1774;
    org$pandalanguage$pandac$IRNode* $tmp1777;
    panda$core$Int64 $tmp1785;
    org$pandalanguage$pandac$Position position1787;
    panda$collections$ImmutableArray* statements1789 = NULL;
    panda$collections$ImmutableArray* newStatements1794 = NULL;
    panda$collections$ImmutableArray* $tmp1795;
    panda$collections$ImmutableArray* $tmp1796;
    org$pandalanguage$pandac$IRNode* $tmp1798;
    org$pandalanguage$pandac$IRNode* $tmp1799;
    panda$core$Int64 $tmp1801;
    panda$core$Int64 $tmp1807;
    org$pandalanguage$pandac$Position position1809;
    panda$collections$ImmutableArray* statements1811 = NULL;
    panda$collections$ImmutableArray* finally1813 = NULL;
    panda$collections$ImmutableArray* newStatements1818 = NULL;
    panda$collections$ImmutableArray* $tmp1819;
    panda$collections$ImmutableArray* $tmp1820;
    panda$collections$ImmutableArray* newFinally1822 = NULL;
    panda$collections$ImmutableArray* $tmp1823;
    panda$collections$ImmutableArray* $tmp1824;
    org$pandalanguage$pandac$IRNode* $tmp1826;
    org$pandalanguage$pandac$IRNode* $tmp1827;
    panda$core$Int64 $tmp1829;
    panda$collections$ImmutableArray* $tmp1830;
    panda$collections$ImmutableArray* $tmp1833;
    panda$core$Int64 $tmp1841;
    org$pandalanguage$pandac$Position position1843;
    org$pandalanguage$pandac$Type* type1845 = NULL;
    org$pandalanguage$pandac$MethodRef* m1847 = NULL;
    panda$collections$ImmutableArray* args1849 = NULL;
    panda$collections$ImmutableArray* newArgs1854 = NULL;
    panda$collections$ImmutableArray* $tmp1855;
    panda$collections$ImmutableArray* $tmp1856;
    org$pandalanguage$pandac$IRNode* $tmp1858;
    org$pandalanguage$pandac$IRNode* $tmp1859;
    panda$core$Int64 $tmp1861;
    panda$collections$ImmutableArray* $tmp1862;
    panda$core$Int64 $tmp1870;
    org$pandalanguage$pandac$Position position1872;
    org$pandalanguage$pandac$IRNode* value1874 = NULL;
    org$pandalanguage$pandac$Type* type1876 = NULL;
    panda$core$Bit explicit1878;
    org$pandalanguage$pandac$IRNode* newValue1883 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1884;
    org$pandalanguage$pandac$IRNode* $tmp1885;
    org$pandalanguage$pandac$IRNode* $tmp1887;
    org$pandalanguage$pandac$IRNode* $tmp1888;
    panda$core$Int64 $tmp1890;
    panda$core$Int64 $tmp1896;
    org$pandalanguage$pandac$Position position1898;
    org$pandalanguage$pandac$IRNode* base1900 = NULL;
    org$pandalanguage$pandac$ChoiceCase* ce1902 = NULL;
    panda$core$Int64 field1904;
    org$pandalanguage$pandac$IRNode* newBase1909 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1910;
    org$pandalanguage$pandac$IRNode* $tmp1911;
    org$pandalanguage$pandac$IRNode* $tmp1913;
    org$pandalanguage$pandac$IRNode* $tmp1914;
    panda$core$Int64 $tmp1916;
    panda$core$Int64 $tmp1922;
    org$pandalanguage$pandac$Position position1924;
    org$pandalanguage$pandac$Type* type1926 = NULL;
    org$pandalanguage$pandac$IRNode* call1928 = NULL;
    org$pandalanguage$pandac$IRNode* newCall1933 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1934;
    org$pandalanguage$pandac$IRNode* $tmp1935;
    org$pandalanguage$pandac$IRNode* $tmp1937;
    org$pandalanguage$pandac$IRNode* $tmp1938;
    panda$core$Int64 $tmp1940;
    panda$core$Int64 $tmp1946;
    org$pandalanguage$pandac$IRNode* target1948 = NULL;
    org$pandalanguage$pandac$IRNode* value1950 = NULL;
    org$pandalanguage$pandac$IRNode* newValue1955 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1956;
    org$pandalanguage$pandac$IRNode* $tmp1957;
    org$pandalanguage$pandac$IRNode* $tmp1959;
    org$pandalanguage$pandac$IRNode* $tmp1960;
    panda$core$Int64 $tmp1962;
    panda$core$Int64 $tmp1968;
    org$pandalanguage$pandac$Position position1970;
    panda$core$String* label1972 = NULL;
    panda$collections$ImmutableArray* statements1974 = NULL;
    org$pandalanguage$pandac$IRNode* test1976 = NULL;
    panda$collections$ImmutableArray* newStatements1981 = NULL;
    panda$collections$ImmutableArray* $tmp1982;
    panda$collections$ImmutableArray* $tmp1983;
    org$pandalanguage$pandac$IRNode* newTest1985 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1986;
    org$pandalanguage$pandac$IRNode* $tmp1987;
    org$pandalanguage$pandac$IRNode* $tmp1992;
    org$pandalanguage$pandac$IRNode* $tmp1993;
    panda$core$Int64 $tmp1995;
    panda$collections$ImmutableArray* $tmp1996;
    org$pandalanguage$pandac$IRNode* $tmp1999;
    panda$core$Int64 $tmp2007;
    org$pandalanguage$pandac$IRNode* m2009 = NULL;
    panda$collections$ImmutableArray* args2011 = NULL;
    org$pandalanguage$pandac$IRNode* newM2016 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2017;
    org$pandalanguage$pandac$IRNode* $tmp2018;
    panda$collections$ImmutableArray* newArgs2020 = NULL;
    panda$collections$ImmutableArray* $tmp2021;
    panda$collections$ImmutableArray* $tmp2022;
    org$pandalanguage$pandac$IRNode* $tmp2027;
    org$pandalanguage$pandac$IRNode* $tmp2028;
    panda$core$Int64 $tmp2030;
    org$pandalanguage$pandac$IRNode* $tmp2031;
    panda$collections$ImmutableArray* $tmp2034;
    panda$core$Int64 $tmp2042;
    org$pandalanguage$pandac$IRNode* expr2044 = NULL;
    org$pandalanguage$pandac$IRNode* statements2046 = NULL;
    org$pandalanguage$pandac$IRNode* newExpr2051 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2052;
    org$pandalanguage$pandac$IRNode* $tmp2053;
    org$pandalanguage$pandac$IRNode* newStatements2055 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2056;
    org$pandalanguage$pandac$IRNode* $tmp2057;
    org$pandalanguage$pandac$IRNode* $tmp2062;
    org$pandalanguage$pandac$IRNode* $tmp2063;
    panda$core$Int64 $tmp2065;
    org$pandalanguage$pandac$IRNode* $tmp2066;
    org$pandalanguage$pandac$IRNode* $tmp2069;
    panda$core$Int64 $tmp2077;
    org$pandalanguage$pandac$Position position2079;
    org$pandalanguage$pandac$Type* type2081 = NULL;
    org$pandalanguage$pandac$IRNode* base2083 = NULL;
    org$pandalanguage$pandac$FieldDecl* field2085 = NULL;
    org$pandalanguage$pandac$IRNode* newBase2090 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2091;
    org$pandalanguage$pandac$IRNode* $tmp2092;
    org$pandalanguage$pandac$IRNode* $tmp2094;
    org$pandalanguage$pandac$IRNode* $tmp2095;
    panda$core$Int64 $tmp2097;
    panda$core$Int64 $tmp2103;
    org$pandalanguage$pandac$Position position2105;
    org$pandalanguage$pandac$IRNode* test2107 = NULL;
    panda$collections$ImmutableArray* ifTrue2109 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2111 = NULL;
    org$pandalanguage$pandac$IRNode* newTest2116 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2117;
    org$pandalanguage$pandac$IRNode* $tmp2118;
    panda$collections$ImmutableArray* newIfTrue2120 = NULL;
    panda$collections$ImmutableArray* $tmp2121;
    panda$collections$ImmutableArray* $tmp2122;
    org$pandalanguage$pandac$IRNode* newIfFalse2124 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2125;
    org$pandalanguage$pandac$IRNode* $tmp2126;
    org$pandalanguage$pandac$IRNode* $tmp2134;
    org$pandalanguage$pandac$IRNode* $tmp2135;
    panda$core$Int64 $tmp2137;
    org$pandalanguage$pandac$IRNode* $tmp2138;
    panda$collections$ImmutableArray* $tmp2141;
    org$pandalanguage$pandac$IRNode* $tmp2144;
    panda$core$Int64 $tmp2152;
    org$pandalanguage$pandac$Position position2154;
    org$pandalanguage$pandac$IRNode* value2156 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2161 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2162;
    org$pandalanguage$pandac$IRNode* $tmp2163;
    org$pandalanguage$pandac$IRNode* $tmp2165;
    org$pandalanguage$pandac$IRNode* $tmp2166;
    panda$core$Int64 $tmp2168;
    panda$core$Int64 $tmp2174;
    org$pandalanguage$pandac$Position position2176;
    org$pandalanguage$pandac$IRNode* value2178 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2183 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2184;
    org$pandalanguage$pandac$IRNode* $tmp2185;
    org$pandalanguage$pandac$IRNode* $tmp2187;
    org$pandalanguage$pandac$IRNode* $tmp2188;
    panda$core$Int64 $tmp2190;
    panda$core$Int64 $tmp2196;
    org$pandalanguage$pandac$Position position2198;
    panda$core$String* label2200 = NULL;
    panda$collections$ImmutableArray* statements2202 = NULL;
    panda$collections$ImmutableArray* newStatements2207 = NULL;
    panda$collections$ImmutableArray* $tmp2208;
    panda$collections$ImmutableArray* $tmp2209;
    org$pandalanguage$pandac$IRNode* $tmp2211;
    org$pandalanguage$pandac$IRNode* $tmp2212;
    panda$core$Int64 $tmp2214;
    panda$core$Int64 $tmp2220;
    org$pandalanguage$pandac$Position position2222;
    org$pandalanguage$pandac$IRNode* value2224 = NULL;
    panda$collections$ImmutableArray* whens2226 = NULL;
    panda$collections$ImmutableArray* other2228 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2233 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2234;
    org$pandalanguage$pandac$IRNode* $tmp2235;
    panda$collections$ImmutableArray* newWhens2237 = NULL;
    panda$collections$ImmutableArray* $tmp2238;
    panda$collections$ImmutableArray* $tmp2239;
    panda$collections$ImmutableArray* newOther2241 = NULL;
    panda$collections$ImmutableArray* $tmp2242;
    panda$collections$ImmutableArray* $tmp2243;
    org$pandalanguage$pandac$IRNode* $tmp2251;
    org$pandalanguage$pandac$IRNode* $tmp2252;
    panda$core$Int64 $tmp2254;
    org$pandalanguage$pandac$IRNode* $tmp2255;
    panda$collections$ImmutableArray* $tmp2258;
    panda$collections$ImmutableArray* $tmp2261;
    panda$core$Int64 $tmp2269;
    org$pandalanguage$pandac$Position position2271;
    org$pandalanguage$pandac$Type* type2273 = NULL;
    org$pandalanguage$pandac$IRNode* target2275 = NULL;
    org$pandalanguage$pandac$MethodRef* m2277 = NULL;
    org$pandalanguage$pandac$IRNode* newTarget2282 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2283;
    org$pandalanguage$pandac$IRNode* $tmp2284;
    org$pandalanguage$pandac$IRNode* $tmp2286;
    org$pandalanguage$pandac$IRNode* $tmp2287;
    panda$core$Int64 $tmp2289;
    panda$core$Int64 $tmp2295;
    org$pandalanguage$pandac$Position position2297;
    org$pandalanguage$pandac$parser$Token$Kind op2299;
    org$pandalanguage$pandac$IRNode* base2301 = NULL;
    org$pandalanguage$pandac$IRNode* newBase2306 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2307;
    org$pandalanguage$pandac$IRNode* $tmp2308;
    org$pandalanguage$pandac$IRNode* $tmp2310;
    org$pandalanguage$pandac$IRNode* $tmp2311;
    panda$core$Int64 $tmp2313;
    panda$core$Int64 $tmp2319;
    org$pandalanguage$pandac$Position position2321;
    panda$core$String* label2323 = NULL;
    org$pandalanguage$pandac$IRNode* target2325 = NULL;
    org$pandalanguage$pandac$IRNode* list2327 = NULL;
    panda$collections$ImmutableArray* statements2329 = NULL;
    org$pandalanguage$pandac$IRNode* newList2334 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2335;
    org$pandalanguage$pandac$IRNode* $tmp2336;
    panda$collections$ImmutableArray* newStatements2338 = NULL;
    panda$collections$ImmutableArray* $tmp2339;
    panda$collections$ImmutableArray* $tmp2340;
    org$pandalanguage$pandac$IRNode* $tmp2345;
    org$pandalanguage$pandac$IRNode* $tmp2346;
    panda$core$Int64 $tmp2348;
    org$pandalanguage$pandac$IRNode* $tmp2349;
    panda$collections$ImmutableArray* $tmp2352;
    panda$core$Int64 $tmp2360;
    org$pandalanguage$pandac$Position position2362;
    org$pandalanguage$pandac$IRNode* value2364 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2369 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2370;
    org$pandalanguage$pandac$IRNode* $tmp2371;
    org$pandalanguage$pandac$IRNode* $tmp2373;
    org$pandalanguage$pandac$IRNode* $tmp2374;
    panda$core$Int64 $tmp2376;
    panda$core$Int64 $tmp2382;
    org$pandalanguage$pandac$IRNode* base2384 = NULL;
    panda$core$Int64 id2386;
    org$pandalanguage$pandac$IRNode* newBase2391 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2392;
    org$pandalanguage$pandac$IRNode* $tmp2393;
    org$pandalanguage$pandac$IRNode* $tmp2395;
    org$pandalanguage$pandac$IRNode* $tmp2396;
    panda$core$Int64 $tmp2398;
    panda$core$Int64 $tmp2404;
    org$pandalanguage$pandac$Position position2406;
    org$pandalanguage$pandac$IRNode* test2408 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2410 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2412 = NULL;
    org$pandalanguage$pandac$IRNode* newTest2417 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2418;
    org$pandalanguage$pandac$IRNode* $tmp2419;
    org$pandalanguage$pandac$IRNode* newIfTrue2421 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2422;
    org$pandalanguage$pandac$IRNode* $tmp2423;
    org$pandalanguage$pandac$IRNode* newIfFalse2425 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2426;
    org$pandalanguage$pandac$IRNode* $tmp2427;
    org$pandalanguage$pandac$IRNode* $tmp2435;
    org$pandalanguage$pandac$IRNode* $tmp2436;
    panda$core$Int64 $tmp2438;
    org$pandalanguage$pandac$IRNode* $tmp2439;
    org$pandalanguage$pandac$IRNode* $tmp2442;
    org$pandalanguage$pandac$IRNode* $tmp2445;
    panda$core$Int64 $tmp2453;
    org$pandalanguage$pandac$Position position2455;
    org$pandalanguage$pandac$Variable$Kind kind2457;
    panda$collections$ImmutableArray* decls2459 = NULL;
    panda$collections$ImmutableArray* newDecls2464 = NULL;
    panda$collections$ImmutableArray* $tmp2465;
    panda$collections$ImmutableArray* $tmp2466;
    org$pandalanguage$pandac$IRNode* $tmp2468;
    org$pandalanguage$pandac$IRNode* $tmp2469;
    panda$core$Int64 $tmp2471;
    panda$core$Int64 $tmp2477;
    org$pandalanguage$pandac$Position position2479;
    panda$collections$ImmutableArray* tests2481 = NULL;
    panda$collections$ImmutableArray* statements2483 = NULL;
    panda$collections$ImmutableArray* newTests2488 = NULL;
    panda$collections$ImmutableArray* $tmp2489;
    panda$collections$ImmutableArray* $tmp2490;
    panda$collections$ImmutableArray* newStatements2492 = NULL;
    panda$collections$ImmutableArray* $tmp2493;
    panda$collections$ImmutableArray* $tmp2494;
    org$pandalanguage$pandac$IRNode* $tmp2499;
    org$pandalanguage$pandac$IRNode* $tmp2500;
    panda$core$Int64 $tmp2502;
    panda$collections$ImmutableArray* $tmp2503;
    panda$collections$ImmutableArray* $tmp2506;
    panda$core$Int64 $tmp2514;
    org$pandalanguage$pandac$Position position2516;
    panda$core$String* label2518 = NULL;
    org$pandalanguage$pandac$IRNode* test2520 = NULL;
    panda$collections$ImmutableArray* statements2522 = NULL;
    org$pandalanguage$pandac$IRNode* newTest2527 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2528;
    org$pandalanguage$pandac$IRNode* $tmp2529;
    panda$collections$ImmutableArray* newStatements2531 = NULL;
    panda$collections$ImmutableArray* $tmp2532;
    panda$collections$ImmutableArray* $tmp2533;
    org$pandalanguage$pandac$IRNode* $tmp2538;
    org$pandalanguage$pandac$IRNode* $tmp2539;
    panda$core$Int64 $tmp2541;
    org$pandalanguage$pandac$IRNode* $tmp2542;
    panda$collections$ImmutableArray* $tmp2545;
    panda$core$Bit $tmp2553;
    org$pandalanguage$pandac$IRNode* $tmp2558;
    int $tmp1574;
    {
        if (p_f->target) {
            $tmp1578 = (($fn1579) p_f->pointer)(p_f->target, self);
        } else {
            $tmp1578 = (($fn1580) p_f->pointer)(self);
        }
        $tmp1577 = $tmp1578;
        $tmp1576 = $tmp1577;
        transformed1575 = $tmp1576;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1576));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1577));
        if (((panda$core$Bit) { transformed1575 != NULL }).value) {
        {
            $tmp1582 = transformed1575;
            $returnValue1581 = $tmp1582;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1582));
            $tmp1574 = 0;
            goto $l1572;
            $l1583:;
            return $returnValue1581;
        }
        }
        int $tmp1587;
        {
            $tmp1589 = self;
            $match$506_91588 = $tmp1589;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1589));
            panda$core$Int64$init$builtin_int64(&$tmp1613, 1);
            panda$core$Bit $tmp1614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1613);
            bool $tmp1612 = $tmp1614.value;
            if ($tmp1612) goto $l1615;
            panda$core$Int64$init$builtin_int64(&$tmp1616, 3);
            panda$core$Bit $tmp1617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1616);
            $tmp1612 = $tmp1617.value;
            $l1615:;
            panda$core$Bit $tmp1618 = { $tmp1612 };
            bool $tmp1611 = $tmp1618.value;
            if ($tmp1611) goto $l1619;
            panda$core$Int64$init$builtin_int64(&$tmp1620, 6);
            panda$core$Bit $tmp1621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1620);
            $tmp1611 = $tmp1621.value;
            $l1619:;
            panda$core$Bit $tmp1622 = { $tmp1611 };
            bool $tmp1610 = $tmp1622.value;
            if ($tmp1610) goto $l1623;
            panda$core$Int64$init$builtin_int64(&$tmp1624, 9);
            panda$core$Bit $tmp1625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1624);
            $tmp1610 = $tmp1625.value;
            $l1623:;
            panda$core$Bit $tmp1626 = { $tmp1610 };
            bool $tmp1609 = $tmp1626.value;
            if ($tmp1609) goto $l1627;
            panda$core$Int64$init$builtin_int64(&$tmp1628, 12);
            panda$core$Bit $tmp1629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1628);
            $tmp1609 = $tmp1629.value;
            $l1627:;
            panda$core$Bit $tmp1630 = { $tmp1609 };
            bool $tmp1608 = $tmp1630.value;
            if ($tmp1608) goto $l1631;
            panda$core$Int64$init$builtin_int64(&$tmp1632, 13);
            panda$core$Bit $tmp1633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1632);
            $tmp1608 = $tmp1633.value;
            $l1631:;
            panda$core$Bit $tmp1634 = { $tmp1608 };
            bool $tmp1607 = $tmp1634.value;
            if ($tmp1607) goto $l1635;
            panda$core$Int64$init$builtin_int64(&$tmp1636, 20);
            panda$core$Bit $tmp1637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1636);
            $tmp1607 = $tmp1637.value;
            $l1635:;
            panda$core$Bit $tmp1638 = { $tmp1607 };
            bool $tmp1606 = $tmp1638.value;
            if ($tmp1606) goto $l1639;
            panda$core$Int64$init$builtin_int64(&$tmp1640, 26);
            panda$core$Bit $tmp1641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1640);
            $tmp1606 = $tmp1641.value;
            $l1639:;
            panda$core$Bit $tmp1642 = { $tmp1606 };
            bool $tmp1605 = $tmp1642.value;
            if ($tmp1605) goto $l1643;
            panda$core$Int64$init$builtin_int64(&$tmp1644, 27);
            panda$core$Bit $tmp1645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1644);
            $tmp1605 = $tmp1645.value;
            $l1643:;
            panda$core$Bit $tmp1646 = { $tmp1605 };
            bool $tmp1604 = $tmp1646.value;
            if ($tmp1604) goto $l1647;
            panda$core$Int64$init$builtin_int64(&$tmp1648, 30);
            panda$core$Bit $tmp1649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1648);
            $tmp1604 = $tmp1649.value;
            $l1647:;
            panda$core$Bit $tmp1650 = { $tmp1604 };
            bool $tmp1603 = $tmp1650.value;
            if ($tmp1603) goto $l1651;
            panda$core$Int64$init$builtin_int64(&$tmp1652, 34);
            panda$core$Bit $tmp1653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1652);
            $tmp1603 = $tmp1653.value;
            $l1651:;
            panda$core$Bit $tmp1654 = { $tmp1603 };
            bool $tmp1602 = $tmp1654.value;
            if ($tmp1602) goto $l1655;
            panda$core$Int64$init$builtin_int64(&$tmp1656, 35);
            panda$core$Bit $tmp1657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1656);
            $tmp1602 = $tmp1657.value;
            $l1655:;
            panda$core$Bit $tmp1658 = { $tmp1602 };
            bool $tmp1601 = $tmp1658.value;
            if ($tmp1601) goto $l1659;
            panda$core$Int64$init$builtin_int64(&$tmp1660, 36);
            panda$core$Bit $tmp1661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1660);
            $tmp1601 = $tmp1661.value;
            $l1659:;
            panda$core$Bit $tmp1662 = { $tmp1601 };
            bool $tmp1600 = $tmp1662.value;
            if ($tmp1600) goto $l1663;
            panda$core$Int64$init$builtin_int64(&$tmp1664, 37);
            panda$core$Bit $tmp1665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1664);
            $tmp1600 = $tmp1665.value;
            $l1663:;
            panda$core$Bit $tmp1666 = { $tmp1600 };
            bool $tmp1599 = $tmp1666.value;
            if ($tmp1599) goto $l1667;
            panda$core$Int64$init$builtin_int64(&$tmp1668, 32);
            panda$core$Bit $tmp1669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1668);
            $tmp1599 = $tmp1669.value;
            $l1667:;
            panda$core$Bit $tmp1670 = { $tmp1599 };
            bool $tmp1598 = $tmp1670.value;
            if ($tmp1598) goto $l1671;
            panda$core$Int64$init$builtin_int64(&$tmp1672, 39);
            panda$core$Bit $tmp1673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1672);
            $tmp1598 = $tmp1673.value;
            $l1671:;
            panda$core$Bit $tmp1674 = { $tmp1598 };
            bool $tmp1597 = $tmp1674.value;
            if ($tmp1597) goto $l1675;
            panda$core$Int64$init$builtin_int64(&$tmp1676, 40);
            panda$core$Bit $tmp1677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1676);
            $tmp1597 = $tmp1677.value;
            $l1675:;
            panda$core$Bit $tmp1678 = { $tmp1597 };
            bool $tmp1596 = $tmp1678.value;
            if ($tmp1596) goto $l1679;
            panda$core$Int64$init$builtin_int64(&$tmp1680, 44);
            panda$core$Bit $tmp1681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1680);
            $tmp1596 = $tmp1681.value;
            $l1679:;
            panda$core$Bit $tmp1682 = { $tmp1596 };
            bool $tmp1595 = $tmp1682.value;
            if ($tmp1595) goto $l1683;
            panda$core$Int64$init$builtin_int64(&$tmp1684, 41);
            panda$core$Bit $tmp1685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1684);
            $tmp1595 = $tmp1685.value;
            $l1683:;
            panda$core$Bit $tmp1686 = { $tmp1595 };
            bool $tmp1594 = $tmp1686.value;
            if ($tmp1594) goto $l1687;
            panda$core$Int64$init$builtin_int64(&$tmp1688, 42);
            panda$core$Bit $tmp1689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1688);
            $tmp1594 = $tmp1689.value;
            $l1687:;
            panda$core$Bit $tmp1690 = { $tmp1594 };
            bool $tmp1593 = $tmp1690.value;
            if ($tmp1593) goto $l1691;
            panda$core$Int64$init$builtin_int64(&$tmp1692, 43);
            panda$core$Bit $tmp1693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1692);
            $tmp1593 = $tmp1693.value;
            $l1691:;
            panda$core$Bit $tmp1694 = { $tmp1593 };
            bool $tmp1592 = $tmp1694.value;
            if ($tmp1592) goto $l1695;
            panda$core$Int64$init$builtin_int64(&$tmp1696, 45);
            panda$core$Bit $tmp1697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1696);
            $tmp1592 = $tmp1697.value;
            $l1695:;
            panda$core$Bit $tmp1698 = { $tmp1592 };
            bool $tmp1591 = $tmp1698.value;
            if ($tmp1591) goto $l1699;
            panda$core$Int64$init$builtin_int64(&$tmp1700, 47);
            panda$core$Bit $tmp1701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1700);
            $tmp1591 = $tmp1701.value;
            $l1699:;
            panda$core$Bit $tmp1702 = { $tmp1591 };
            bool $tmp1590 = $tmp1702.value;
            if ($tmp1590) goto $l1703;
            panda$core$Int64$init$builtin_int64(&$tmp1704, 48);
            panda$core$Bit $tmp1705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1704);
            $tmp1590 = $tmp1705.value;
            $l1703:;
            panda$core$Bit $tmp1706 = { $tmp1590 };
            if ($tmp1706.value) {
            {
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1707, 0);
            panda$core$Bit $tmp1708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1707);
            if ($tmp1708.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1710 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position1709 = *$tmp1710;
                org$pandalanguage$pandac$IRNode** $tmp1712 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 16));
                test1711 = *$tmp1712;
                org$pandalanguage$pandac$IRNode** $tmp1714 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 24));
                message1713 = *$tmp1714;
                int $tmp1717;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1721 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test1711, p_f);
                    $tmp1720 = $tmp1721;
                    $tmp1719 = $tmp1720;
                    newTest1718 = $tmp1719;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1719));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1720));
                    org$pandalanguage$pandac$IRNode* $tmp1725 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(message1713, p_f);
                    $tmp1724 = $tmp1725;
                    $tmp1723 = $tmp1724;
                    newMessage1722 = $tmp1723;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1723));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1724));
                    bool $tmp1726 = ((panda$core$Bit) { newTest1718 != NULL }).value;
                    if ($tmp1726) goto $l1727;
                    $tmp1726 = ((panda$core$Bit) { newMessage1722 != NULL }).value;
                    $l1727:;
                    panda$core$Bit $tmp1728 = { $tmp1726 };
                    if ($tmp1728.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1731 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1732, 0);
                        org$pandalanguage$pandac$IRNode* $tmp1735 = (($fn1734) self->$class->vtable[5])(self, newTest1718, test1711);
                        $tmp1733 = $tmp1735;
                        org$pandalanguage$pandac$IRNode* $tmp1738 = (($fn1737) self->$class->vtable[5])(self, newMessage1722, message1713);
                        $tmp1736 = $tmp1738;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp1731, $tmp1732, position1709, $tmp1733, $tmp1736);
                        $tmp1730 = $tmp1731;
                        $tmp1729 = $tmp1730;
                        $returnValue1581 = $tmp1729;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1729));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1730));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1736));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1733));
                        $tmp1717 = 0;
                        goto $l1715;
                        $l1739:;
                        $tmp1587 = 0;
                        goto $l1585;
                        $l1740:;
                        $tmp1574 = 1;
                        goto $l1572;
                        $l1741:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp1717 = -1;
                goto $l1715;
                $l1715:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newMessage1722));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest1718));
                newTest1718 = NULL;
                newMessage1722 = NULL;
                switch ($tmp1717) {
                    case -1: goto $l1743;
                    case 0: goto $l1739;
                }
                $l1743:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1744, 2);
            panda$core$Bit $tmp1745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1744);
            if ($tmp1745.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1747 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position1746 = *$tmp1747;
                org$pandalanguage$pandac$Type** $tmp1749 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91588->$data + 16));
                type1748 = *$tmp1749;
                org$pandalanguage$pandac$IRNode** $tmp1751 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 24));
                left1750 = *$tmp1751;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1753 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$506_91588->$data + 32));
                op1752 = *$tmp1753;
                org$pandalanguage$pandac$IRNode** $tmp1755 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 40));
                right1754 = *$tmp1755;
                int $tmp1758;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1762 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(left1750, p_f);
                    $tmp1761 = $tmp1762;
                    $tmp1760 = $tmp1761;
                    newLeft1759 = $tmp1760;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1760));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1761));
                    org$pandalanguage$pandac$IRNode* $tmp1766 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(right1754, p_f);
                    $tmp1765 = $tmp1766;
                    $tmp1764 = $tmp1765;
                    newRight1763 = $tmp1764;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1764));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1765));
                    bool $tmp1767 = ((panda$core$Bit) { newLeft1759 != NULL }).value;
                    if ($tmp1767) goto $l1768;
                    $tmp1767 = ((panda$core$Bit) { newRight1763 != NULL }).value;
                    $l1768:;
                    panda$core$Bit $tmp1769 = { $tmp1767 };
                    if ($tmp1769.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1772 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1773, 2);
                        org$pandalanguage$pandac$IRNode* $tmp1776 = (($fn1775) self->$class->vtable[5])(self, newLeft1759, left1750);
                        $tmp1774 = $tmp1776;
                        org$pandalanguage$pandac$IRNode* $tmp1779 = (($fn1778) self->$class->vtable[5])(self, newRight1763, right1754);
                        $tmp1777 = $tmp1779;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp1772, $tmp1773, position1746, type1748, $tmp1774, op1752, $tmp1777);
                        $tmp1771 = $tmp1772;
                        $tmp1770 = $tmp1771;
                        $returnValue1581 = $tmp1770;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1770));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1771));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1777));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1774));
                        $tmp1758 = 0;
                        goto $l1756;
                        $l1780:;
                        $tmp1587 = 1;
                        goto $l1585;
                        $l1781:;
                        $tmp1574 = 2;
                        goto $l1572;
                        $l1782:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp1758 = -1;
                goto $l1756;
                $l1756:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newRight1763));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newLeft1759));
                newLeft1759 = NULL;
                newRight1763 = NULL;
                switch ($tmp1758) {
                    case -1: goto $l1784;
                    case 0: goto $l1780;
                }
                $l1784:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1785, 4);
            panda$core$Bit $tmp1786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1785);
            if ($tmp1786.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1788 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position1787 = *$tmp1788;
                panda$collections$ImmutableArray** $tmp1790 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91588->$data + 16));
                statements1789 = *$tmp1790;
                int $tmp1793;
                {
                    panda$collections$ImmutableArray* $tmp1797 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements1789, p_f);
                    $tmp1796 = $tmp1797;
                    $tmp1795 = $tmp1796;
                    newStatements1794 = $tmp1795;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1795));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1796));
                    if (((panda$core$Bit) { newStatements1794 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1800 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1801, 4);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp1800, $tmp1801, position1787, newStatements1794);
                        $tmp1799 = $tmp1800;
                        $tmp1798 = $tmp1799;
                        $returnValue1581 = $tmp1798;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1798));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1799));
                        $tmp1793 = 0;
                        goto $l1791;
                        $l1802:;
                        $tmp1587 = 2;
                        goto $l1585;
                        $l1803:;
                        $tmp1574 = 3;
                        goto $l1572;
                        $l1804:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp1793 = -1;
                goto $l1791;
                $l1791:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements1794));
                newStatements1794 = NULL;
                switch ($tmp1793) {
                    case -1: goto $l1806;
                    case 0: goto $l1802;
                }
                $l1806:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1807, 5);
            panda$core$Bit $tmp1808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1807);
            if ($tmp1808.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1810 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position1809 = *$tmp1810;
                panda$collections$ImmutableArray** $tmp1812 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91588->$data + 16));
                statements1811 = *$tmp1812;
                panda$collections$ImmutableArray** $tmp1814 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91588->$data + 24));
                finally1813 = *$tmp1814;
                int $tmp1817;
                {
                    panda$collections$ImmutableArray* $tmp1821 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements1811, p_f);
                    $tmp1820 = $tmp1821;
                    $tmp1819 = $tmp1820;
                    newStatements1818 = $tmp1819;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1819));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1820));
                    panda$collections$ImmutableArray* $tmp1825 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(finally1813, p_f);
                    $tmp1824 = $tmp1825;
                    $tmp1823 = $tmp1824;
                    newFinally1822 = $tmp1823;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1823));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1824));
                    if (((panda$core$Bit) { newStatements1818 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1828 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1829, 5);
                        panda$collections$ImmutableArray* $tmp1832 = (($fn1831) self->$class->vtable[6])(self, newStatements1818, statements1811);
                        $tmp1830 = $tmp1832;
                        panda$collections$ImmutableArray* $tmp1835 = (($fn1834) self->$class->vtable[6])(self, newFinally1822, finally1813);
                        $tmp1833 = $tmp1835;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp1828, $tmp1829, position1809, $tmp1830, $tmp1833);
                        $tmp1827 = $tmp1828;
                        $tmp1826 = $tmp1827;
                        $returnValue1581 = $tmp1826;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1826));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1827));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1833));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1830));
                        $tmp1817 = 0;
                        goto $l1815;
                        $l1836:;
                        $tmp1587 = 3;
                        goto $l1585;
                        $l1837:;
                        $tmp1574 = 4;
                        goto $l1572;
                        $l1838:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp1817 = -1;
                goto $l1815;
                $l1815:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newFinally1822));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements1818));
                newStatements1818 = NULL;
                newFinally1822 = NULL;
                switch ($tmp1817) {
                    case 0: goto $l1836;
                    case -1: goto $l1840;
                }
                $l1840:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1841, 7);
            panda$core$Bit $tmp1842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1841);
            if ($tmp1842.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1844 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position1843 = *$tmp1844;
                org$pandalanguage$pandac$Type** $tmp1846 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91588->$data + 16));
                type1845 = *$tmp1846;
                org$pandalanguage$pandac$MethodRef** $tmp1848 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$506_91588->$data + 24));
                m1847 = *$tmp1848;
                panda$collections$ImmutableArray** $tmp1850 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91588->$data + 32));
                args1849 = *$tmp1850;
                int $tmp1853;
                {
                    panda$collections$ImmutableArray* $tmp1857 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(args1849, p_f);
                    $tmp1856 = $tmp1857;
                    $tmp1855 = $tmp1856;
                    newArgs1854 = $tmp1855;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1855));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1856));
                    if (((panda$core$Bit) { newArgs1854 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1860 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1861, 7);
                        panda$collections$ImmutableArray* $tmp1864 = (($fn1863) self->$class->vtable[6])(self, newArgs1854, args1849);
                        $tmp1862 = $tmp1864;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp1860, $tmp1861, position1843, type1845, m1847, $tmp1862);
                        $tmp1859 = $tmp1860;
                        $tmp1858 = $tmp1859;
                        $returnValue1581 = $tmp1858;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1858));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1859));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1862));
                        $tmp1853 = 0;
                        goto $l1851;
                        $l1865:;
                        $tmp1587 = 4;
                        goto $l1585;
                        $l1866:;
                        $tmp1574 = 5;
                        goto $l1572;
                        $l1867:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp1853 = -1;
                goto $l1851;
                $l1851:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newArgs1854));
                newArgs1854 = NULL;
                switch ($tmp1853) {
                    case 0: goto $l1865;
                    case -1: goto $l1869;
                }
                $l1869:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1870, 8);
            panda$core$Bit $tmp1871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1870);
            if ($tmp1871.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1873 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position1872 = *$tmp1873;
                org$pandalanguage$pandac$IRNode** $tmp1875 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 16));
                value1874 = *$tmp1875;
                org$pandalanguage$pandac$Type** $tmp1877 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91588->$data + 24));
                type1876 = *$tmp1877;
                panda$core$Bit* $tmp1879 = ((panda$core$Bit*) ((char*) $match$506_91588->$data + 32));
                explicit1878 = *$tmp1879;
                int $tmp1882;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1886 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value1874, p_f);
                    $tmp1885 = $tmp1886;
                    $tmp1884 = $tmp1885;
                    newValue1883 = $tmp1884;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1884));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1885));
                    if (((panda$core$Bit) { newValue1883 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1889 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1890, 8);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1889, $tmp1890, position1872, newValue1883, type1876, explicit1878);
                        $tmp1888 = $tmp1889;
                        $tmp1887 = $tmp1888;
                        $returnValue1581 = $tmp1887;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1887));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1888));
                        $tmp1882 = 0;
                        goto $l1880;
                        $l1891:;
                        $tmp1587 = 5;
                        goto $l1585;
                        $l1892:;
                        $tmp1574 = 6;
                        goto $l1572;
                        $l1893:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp1882 = -1;
                goto $l1880;
                $l1880:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue1883));
                newValue1883 = NULL;
                switch ($tmp1882) {
                    case -1: goto $l1895;
                    case 0: goto $l1891;
                }
                $l1895:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1896, 10);
            panda$core$Bit $tmp1897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1896);
            if ($tmp1897.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1899 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position1898 = *$tmp1899;
                org$pandalanguage$pandac$IRNode** $tmp1901 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 16));
                base1900 = *$tmp1901;
                org$pandalanguage$pandac$ChoiceCase** $tmp1903 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$506_91588->$data + 24));
                ce1902 = *$tmp1903;
                panda$core$Int64* $tmp1905 = ((panda$core$Int64*) ((char*) $match$506_91588->$data + 32));
                field1904 = *$tmp1905;
                int $tmp1908;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1912 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base1900, p_f);
                    $tmp1911 = $tmp1912;
                    $tmp1910 = $tmp1911;
                    newBase1909 = $tmp1910;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1910));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1911));
                    if (((panda$core$Bit) { newBase1909 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1915 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1916, 10);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64($tmp1915, $tmp1916, position1898, newBase1909, ce1902, field1904);
                        $tmp1914 = $tmp1915;
                        $tmp1913 = $tmp1914;
                        $returnValue1581 = $tmp1913;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1913));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1914));
                        $tmp1908 = 0;
                        goto $l1906;
                        $l1917:;
                        $tmp1587 = 6;
                        goto $l1585;
                        $l1918:;
                        $tmp1574 = 7;
                        goto $l1572;
                        $l1919:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp1908 = -1;
                goto $l1906;
                $l1906:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase1909));
                newBase1909 = NULL;
                switch ($tmp1908) {
                    case -1: goto $l1921;
                    case 0: goto $l1917;
                }
                $l1921:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1922, 11);
            panda$core$Bit $tmp1923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1922);
            if ($tmp1923.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1925 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position1924 = *$tmp1925;
                org$pandalanguage$pandac$Type** $tmp1927 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91588->$data + 16));
                type1926 = *$tmp1927;
                org$pandalanguage$pandac$IRNode** $tmp1929 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 24));
                call1928 = *$tmp1929;
                int $tmp1932;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1936 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(call1928, p_f);
                    $tmp1935 = $tmp1936;
                    $tmp1934 = $tmp1935;
                    newCall1933 = $tmp1934;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1934));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1935));
                    if (((panda$core$Bit) { newCall1933 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1939 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1940, 11);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode($tmp1939, $tmp1940, position1924, type1926, newCall1933);
                        $tmp1938 = $tmp1939;
                        $tmp1937 = $tmp1938;
                        $returnValue1581 = $tmp1937;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1937));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1938));
                        $tmp1932 = 0;
                        goto $l1930;
                        $l1941:;
                        $tmp1587 = 7;
                        goto $l1585;
                        $l1942:;
                        $tmp1574 = 8;
                        goto $l1572;
                        $l1943:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp1932 = -1;
                goto $l1930;
                $l1930:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newCall1933));
                newCall1933 = NULL;
                switch ($tmp1932) {
                    case 0: goto $l1941;
                    case -1: goto $l1945;
                }
                $l1945:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1946, 14);
            panda$core$Bit $tmp1947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1946);
            if ($tmp1947.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp1949 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 0));
                target1948 = *$tmp1949;
                org$pandalanguage$pandac$IRNode** $tmp1951 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 8));
                value1950 = *$tmp1951;
                int $tmp1954;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1958 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value1950, p_f);
                    $tmp1957 = $tmp1958;
                    $tmp1956 = $tmp1957;
                    newValue1955 = $tmp1956;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1956));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1957));
                    if (((panda$core$Bit) { newValue1955 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1961 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1962, 14);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp1961, $tmp1962, target1948, newValue1955);
                        $tmp1960 = $tmp1961;
                        $tmp1959 = $tmp1960;
                        $returnValue1581 = $tmp1959;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1959));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1960));
                        $tmp1954 = 0;
                        goto $l1952;
                        $l1963:;
                        $tmp1587 = 8;
                        goto $l1585;
                        $l1964:;
                        $tmp1574 = 9;
                        goto $l1572;
                        $l1965:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp1954 = -1;
                goto $l1952;
                $l1952:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue1955));
                newValue1955 = NULL;
                switch ($tmp1954) {
                    case -1: goto $l1967;
                    case 0: goto $l1963;
                }
                $l1967:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1968, 15);
            panda$core$Bit $tmp1969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp1968);
            if ($tmp1969.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1971 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position1970 = *$tmp1971;
                panda$core$String** $tmp1973 = ((panda$core$String**) ((char*) $match$506_91588->$data + 16));
                label1972 = *$tmp1973;
                panda$collections$ImmutableArray** $tmp1975 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91588->$data + 24));
                statements1974 = *$tmp1975;
                org$pandalanguage$pandac$IRNode** $tmp1977 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 32));
                test1976 = *$tmp1977;
                int $tmp1980;
                {
                    panda$collections$ImmutableArray* $tmp1984 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements1974, p_f);
                    $tmp1983 = $tmp1984;
                    $tmp1982 = $tmp1983;
                    newStatements1981 = $tmp1982;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1982));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1983));
                    org$pandalanguage$pandac$IRNode* $tmp1988 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test1976, p_f);
                    $tmp1987 = $tmp1988;
                    $tmp1986 = $tmp1987;
                    newTest1985 = $tmp1986;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1986));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1987));
                    bool $tmp1989 = ((panda$core$Bit) { newStatements1981 != NULL }).value;
                    if ($tmp1989) goto $l1990;
                    $tmp1989 = ((panda$core$Bit) { newTest1985 != NULL }).value;
                    $l1990:;
                    panda$core$Bit $tmp1991 = { $tmp1989 };
                    if ($tmp1991.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1994 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1995, 15);
                        panda$collections$ImmutableArray* $tmp1998 = (($fn1997) self->$class->vtable[6])(self, newStatements1981, statements1974);
                        $tmp1996 = $tmp1998;
                        org$pandalanguage$pandac$IRNode* $tmp2001 = (($fn2000) self->$class->vtable[5])(self, newTest1985, test1976);
                        $tmp1999 = $tmp2001;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode($tmp1994, $tmp1995, position1970, label1972, $tmp1996, $tmp1999);
                        $tmp1993 = $tmp1994;
                        $tmp1992 = $tmp1993;
                        $returnValue1581 = $tmp1992;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1992));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1993));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1999));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1996));
                        $tmp1980 = 0;
                        goto $l1978;
                        $l2002:;
                        $tmp1587 = 9;
                        goto $l1585;
                        $l2003:;
                        $tmp1574 = 10;
                        goto $l1572;
                        $l2004:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp1980 = -1;
                goto $l1978;
                $l1978:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest1985));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements1981));
                newStatements1981 = NULL;
                newTest1985 = NULL;
                switch ($tmp1980) {
                    case 0: goto $l2002;
                    case -1: goto $l2006;
                }
                $l2006:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2007, 16);
            panda$core$Bit $tmp2008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2007);
            if ($tmp2008.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2010 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 0));
                m2009 = *$tmp2010;
                panda$collections$ImmutableArray** $tmp2012 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91588->$data + 8));
                args2011 = *$tmp2012;
                int $tmp2015;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2019 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(m2009, p_f);
                    $tmp2018 = $tmp2019;
                    $tmp2017 = $tmp2018;
                    newM2016 = $tmp2017;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2017));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2018));
                    panda$collections$ImmutableArray* $tmp2023 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(args2011, p_f);
                    $tmp2022 = $tmp2023;
                    $tmp2021 = $tmp2022;
                    newArgs2020 = $tmp2021;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2021));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2022));
                    bool $tmp2024 = ((panda$core$Bit) { newM2016 != NULL }).value;
                    if ($tmp2024) goto $l2025;
                    $tmp2024 = ((panda$core$Bit) { newArgs2020 != NULL }).value;
                    $l2025:;
                    panda$core$Bit $tmp2026 = { $tmp2024 };
                    if ($tmp2026.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2029 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2030, 16);
                        org$pandalanguage$pandac$IRNode* $tmp2033 = (($fn2032) self->$class->vtable[5])(self, newM2016, m2009);
                        $tmp2031 = $tmp2033;
                        panda$collections$ImmutableArray* $tmp2036 = (($fn2035) self->$class->vtable[6])(self, newArgs2020, args2011);
                        $tmp2034 = $tmp2036;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2029, $tmp2030, $tmp2031, $tmp2034);
                        $tmp2028 = $tmp2029;
                        $tmp2027 = $tmp2028;
                        $returnValue1581 = $tmp2027;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2027));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2028));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2034));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2031));
                        $tmp2015 = 0;
                        goto $l2013;
                        $l2037:;
                        $tmp1587 = 10;
                        goto $l1585;
                        $l2038:;
                        $tmp1574 = 11;
                        goto $l1572;
                        $l2039:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2015 = -1;
                goto $l2013;
                $l2013:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newArgs2020));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newM2016));
                newM2016 = NULL;
                newArgs2020 = NULL;
                switch ($tmp2015) {
                    case -1: goto $l2041;
                    case 0: goto $l2037;
                }
                $l2041:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2042, 17);
            panda$core$Bit $tmp2043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2042);
            if ($tmp2043.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2045 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 0));
                expr2044 = *$tmp2045;
                org$pandalanguage$pandac$IRNode** $tmp2047 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 8));
                statements2046 = *$tmp2047;
                int $tmp2050;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2054 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(expr2044, p_f);
                    $tmp2053 = $tmp2054;
                    $tmp2052 = $tmp2053;
                    newExpr2051 = $tmp2052;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2052));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2053));
                    org$pandalanguage$pandac$IRNode* $tmp2058 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(statements2046, p_f);
                    $tmp2057 = $tmp2058;
                    $tmp2056 = $tmp2057;
                    newStatements2055 = $tmp2056;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2056));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2057));
                    bool $tmp2059 = ((panda$core$Bit) { newExpr2051 != NULL }).value;
                    if ($tmp2059) goto $l2060;
                    $tmp2059 = ((panda$core$Bit) { newStatements2055 != NULL }).value;
                    $l2060:;
                    panda$core$Bit $tmp2061 = { $tmp2059 };
                    if ($tmp2061.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2064 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2065, 17);
                        org$pandalanguage$pandac$IRNode* $tmp2068 = (($fn2067) self->$class->vtable[5])(self, newExpr2051, expr2044);
                        $tmp2066 = $tmp2068;
                        org$pandalanguage$pandac$IRNode* $tmp2071 = (($fn2070) self->$class->vtable[5])(self, newStatements2055, statements2046);
                        $tmp2069 = $tmp2071;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode($tmp2064, $tmp2065, $tmp2066, $tmp2069);
                        $tmp2063 = $tmp2064;
                        $tmp2062 = $tmp2063;
                        $returnValue1581 = $tmp2062;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2062));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2063));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2069));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2066));
                        $tmp2050 = 0;
                        goto $l2048;
                        $l2072:;
                        $tmp1587 = 11;
                        goto $l1585;
                        $l2073:;
                        $tmp1574 = 12;
                        goto $l1572;
                        $l2074:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2050 = -1;
                goto $l2048;
                $l2048:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2055));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newExpr2051));
                newExpr2051 = NULL;
                newStatements2055 = NULL;
                switch ($tmp2050) {
                    case 0: goto $l2072;
                    case -1: goto $l2076;
                }
                $l2076:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2077, 18);
            panda$core$Bit $tmp2078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2077);
            if ($tmp2078.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2080 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position2079 = *$tmp2080;
                org$pandalanguage$pandac$Type** $tmp2082 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91588->$data + 16));
                type2081 = *$tmp2082;
                org$pandalanguage$pandac$IRNode** $tmp2084 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 24));
                base2083 = *$tmp2084;
                org$pandalanguage$pandac$FieldDecl** $tmp2086 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$506_91588->$data + 32));
                field2085 = *$tmp2086;
                int $tmp2089;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2093 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base2083, p_f);
                    $tmp2092 = $tmp2093;
                    $tmp2091 = $tmp2092;
                    newBase2090 = $tmp2091;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2091));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2092));
                    if (((panda$core$Bit) { newBase2090 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2096 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2097, 18);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$FieldDecl($tmp2096, $tmp2097, position2079, type2081, newBase2090, field2085);
                        $tmp2095 = $tmp2096;
                        $tmp2094 = $tmp2095;
                        $returnValue1581 = $tmp2094;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2094));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2095));
                        $tmp2089 = 0;
                        goto $l2087;
                        $l2098:;
                        $tmp1587 = 12;
                        goto $l1585;
                        $l2099:;
                        $tmp1574 = 13;
                        goto $l1572;
                        $l2100:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2089 = -1;
                goto $l2087;
                $l2087:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase2090));
                newBase2090 = NULL;
                switch ($tmp2089) {
                    case -1: goto $l2102;
                    case 0: goto $l2098;
                }
                $l2102:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2103, 19);
            panda$core$Bit $tmp2104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2103);
            if ($tmp2104.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2106 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position2105 = *$tmp2106;
                org$pandalanguage$pandac$IRNode** $tmp2108 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 16));
                test2107 = *$tmp2108;
                panda$collections$ImmutableArray** $tmp2110 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91588->$data + 24));
                ifTrue2109 = *$tmp2110;
                org$pandalanguage$pandac$IRNode** $tmp2112 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 32));
                ifFalse2111 = *$tmp2112;
                int $tmp2115;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2119 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test2107, p_f);
                    $tmp2118 = $tmp2119;
                    $tmp2117 = $tmp2118;
                    newTest2116 = $tmp2117;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2117));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2118));
                    panda$collections$ImmutableArray* $tmp2123 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(ifTrue2109, p_f);
                    $tmp2122 = $tmp2123;
                    $tmp2121 = $tmp2122;
                    newIfTrue2120 = $tmp2121;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2121));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2122));
                    org$pandalanguage$pandac$IRNode* $tmp2127 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(ifFalse2111, p_f);
                    $tmp2126 = $tmp2127;
                    $tmp2125 = $tmp2126;
                    newIfFalse2124 = $tmp2125;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2125));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2126));
                    bool $tmp2129 = ((panda$core$Bit) { newTest2116 != NULL }).value;
                    if ($tmp2129) goto $l2130;
                    $tmp2129 = ((panda$core$Bit) { newIfTrue2120 != NULL }).value;
                    $l2130:;
                    panda$core$Bit $tmp2131 = { $tmp2129 };
                    bool $tmp2128 = $tmp2131.value;
                    if ($tmp2128) goto $l2132;
                    $tmp2128 = ((panda$core$Bit) { newIfFalse2124 != NULL }).value;
                    $l2132:;
                    panda$core$Bit $tmp2133 = { $tmp2128 };
                    if ($tmp2133.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2136 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2137, 19);
                        org$pandalanguage$pandac$IRNode* $tmp2140 = (($fn2139) self->$class->vtable[5])(self, newTest2116, test2107);
                        $tmp2138 = $tmp2140;
                        panda$collections$ImmutableArray* $tmp2143 = (($fn2142) self->$class->vtable[6])(self, newIfTrue2120, ifTrue2109);
                        $tmp2141 = $tmp2143;
                        org$pandalanguage$pandac$IRNode* $tmp2146 = (($fn2145) self->$class->vtable[5])(self, newIfFalse2124, ifFalse2111);
                        $tmp2144 = $tmp2146;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q($tmp2136, $tmp2137, position2105, $tmp2138, $tmp2141, $tmp2144);
                        $tmp2135 = $tmp2136;
                        $tmp2134 = $tmp2135;
                        $returnValue1581 = $tmp2134;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2134));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2135));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2144));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2141));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2138));
                        $tmp2115 = 0;
                        goto $l2113;
                        $l2147:;
                        $tmp1587 = 13;
                        goto $l1585;
                        $l2148:;
                        $tmp1574 = 14;
                        goto $l1572;
                        $l2149:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2115 = -1;
                goto $l2113;
                $l2113:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfFalse2124));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfTrue2120));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest2116));
                newTest2116 = NULL;
                newIfTrue2120 = NULL;
                newIfFalse2124 = NULL;
                switch ($tmp2115) {
                    case -1: goto $l2151;
                    case 0: goto $l2147;
                }
                $l2151:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2152, 21);
            panda$core$Bit $tmp2153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2152);
            if ($tmp2153.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2155 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position2154 = *$tmp2155;
                org$pandalanguage$pandac$IRNode** $tmp2157 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 16));
                value2156 = *$tmp2157;
                int $tmp2160;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2164 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2156, p_f);
                    $tmp2163 = $tmp2164;
                    $tmp2162 = $tmp2163;
                    newValue2161 = $tmp2162;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2162));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2163));
                    if (((panda$core$Bit) { newValue2161 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2167 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2168, 21);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode($tmp2167, $tmp2168, position2154, newValue2161);
                        $tmp2166 = $tmp2167;
                        $tmp2165 = $tmp2166;
                        $returnValue1581 = $tmp2165;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2165));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2166));
                        $tmp2160 = 0;
                        goto $l2158;
                        $l2169:;
                        $tmp1587 = 14;
                        goto $l1585;
                        $l2170:;
                        $tmp1574 = 15;
                        goto $l1572;
                        $l2171:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2160 = -1;
                goto $l2158;
                $l2158:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2161));
                newValue2161 = NULL;
                switch ($tmp2160) {
                    case -1: goto $l2173;
                    case 0: goto $l2169;
                }
                $l2173:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2174, 22);
            panda$core$Bit $tmp2175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2174);
            if ($tmp2175.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2177 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position2176 = *$tmp2177;
                org$pandalanguage$pandac$IRNode** $tmp2179 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 16));
                value2178 = *$tmp2179;
                int $tmp2182;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2186 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2178, p_f);
                    $tmp2185 = $tmp2186;
                    $tmp2184 = $tmp2185;
                    newValue2183 = $tmp2184;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2184));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2185));
                    if (((panda$core$Bit) { newValue2183 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2189 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2190, 22);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode($tmp2189, $tmp2190, position2176, newValue2183);
                        $tmp2188 = $tmp2189;
                        $tmp2187 = $tmp2188;
                        $returnValue1581 = $tmp2187;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2187));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2188));
                        $tmp2182 = 0;
                        goto $l2180;
                        $l2191:;
                        $tmp1587 = 15;
                        goto $l1585;
                        $l2192:;
                        $tmp1574 = 16;
                        goto $l1572;
                        $l2193:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2182 = -1;
                goto $l2180;
                $l2180:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2183));
                newValue2183 = NULL;
                switch ($tmp2182) {
                    case -1: goto $l2195;
                    case 0: goto $l2191;
                }
                $l2195:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2196, 23);
            panda$core$Bit $tmp2197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2196);
            if ($tmp2197.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2199 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position2198 = *$tmp2199;
                panda$core$String** $tmp2201 = ((panda$core$String**) ((char*) $match$506_91588->$data + 16));
                label2200 = *$tmp2201;
                panda$collections$ImmutableArray** $tmp2203 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91588->$data + 24));
                statements2202 = *$tmp2203;
                int $tmp2206;
                {
                    panda$collections$ImmutableArray* $tmp2210 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2202, p_f);
                    $tmp2209 = $tmp2210;
                    $tmp2208 = $tmp2209;
                    newStatements2207 = $tmp2208;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2208));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2209));
                    if (((panda$core$Bit) { newStatements2207 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2213 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2214, 23);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2213, $tmp2214, position2198, label2200, newStatements2207);
                        $tmp2212 = $tmp2213;
                        $tmp2211 = $tmp2212;
                        $returnValue1581 = $tmp2211;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2211));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2212));
                        $tmp2206 = 0;
                        goto $l2204;
                        $l2215:;
                        $tmp1587 = 16;
                        goto $l1585;
                        $l2216:;
                        $tmp1574 = 17;
                        goto $l1572;
                        $l2217:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2206 = -1;
                goto $l2204;
                $l2204:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2207));
                newStatements2207 = NULL;
                switch ($tmp2206) {
                    case -1: goto $l2219;
                    case 0: goto $l2215;
                }
                $l2219:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2220, 24);
            panda$core$Bit $tmp2221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2220);
            if ($tmp2221.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2223 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position2222 = *$tmp2223;
                org$pandalanguage$pandac$IRNode** $tmp2225 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 16));
                value2224 = *$tmp2225;
                panda$collections$ImmutableArray** $tmp2227 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91588->$data + 24));
                whens2226 = *$tmp2227;
                panda$collections$ImmutableArray** $tmp2229 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91588->$data + 32));
                other2228 = *$tmp2229;
                int $tmp2232;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2236 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2224, p_f);
                    $tmp2235 = $tmp2236;
                    $tmp2234 = $tmp2235;
                    newValue2233 = $tmp2234;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2234));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2235));
                    panda$collections$ImmutableArray* $tmp2240 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(whens2226, p_f);
                    $tmp2239 = $tmp2240;
                    $tmp2238 = $tmp2239;
                    newWhens2237 = $tmp2238;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2238));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2239));
                    panda$collections$ImmutableArray* $tmp2244 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(other2228, p_f);
                    $tmp2243 = $tmp2244;
                    $tmp2242 = $tmp2243;
                    newOther2241 = $tmp2242;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2242));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2243));
                    bool $tmp2246 = ((panda$core$Bit) { newValue2233 != NULL }).value;
                    if ($tmp2246) goto $l2247;
                    $tmp2246 = ((panda$core$Bit) { newWhens2237 != NULL }).value;
                    $l2247:;
                    panda$core$Bit $tmp2248 = { $tmp2246 };
                    bool $tmp2245 = $tmp2248.value;
                    if ($tmp2245) goto $l2249;
                    $tmp2245 = ((panda$core$Bit) { newOther2241 != NULL }).value;
                    $l2249:;
                    panda$core$Bit $tmp2250 = { $tmp2245 };
                    if ($tmp2250.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2253 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2254, 24);
                        org$pandalanguage$pandac$IRNode* $tmp2257 = (($fn2256) self->$class->vtable[5])(self, newValue2233, value2224);
                        $tmp2255 = $tmp2257;
                        panda$collections$ImmutableArray* $tmp2260 = (($fn2259) self->$class->vtable[6])(self, newWhens2237, whens2226);
                        $tmp2258 = $tmp2260;
                        panda$collections$ImmutableArray* $tmp2263 = (($fn2262) self->$class->vtable[6])(self, newOther2241, other2228);
                        $tmp2261 = $tmp2263;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2253, $tmp2254, position2222, $tmp2255, $tmp2258, $tmp2261);
                        $tmp2252 = $tmp2253;
                        $tmp2251 = $tmp2252;
                        $returnValue1581 = $tmp2251;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2251));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2252));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2261));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2258));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2255));
                        $tmp2232 = 0;
                        goto $l2230;
                        $l2264:;
                        $tmp1587 = 17;
                        goto $l1585;
                        $l2265:;
                        $tmp1574 = 18;
                        goto $l1572;
                        $l2266:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2232 = -1;
                goto $l2230;
                $l2230:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newOther2241));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newWhens2237));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2233));
                newValue2233 = NULL;
                newWhens2237 = NULL;
                newOther2241 = NULL;
                switch ($tmp2232) {
                    case -1: goto $l2268;
                    case 0: goto $l2264;
                }
                $l2268:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2269, 25);
            panda$core$Bit $tmp2270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2269);
            if ($tmp2270.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2272 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position2271 = *$tmp2272;
                org$pandalanguage$pandac$Type** $tmp2274 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91588->$data + 16));
                type2273 = *$tmp2274;
                org$pandalanguage$pandac$IRNode** $tmp2276 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 24));
                target2275 = *$tmp2276;
                org$pandalanguage$pandac$MethodRef** $tmp2278 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$506_91588->$data + 32));
                m2277 = *$tmp2278;
                int $tmp2281;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2285 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(target2275, p_f);
                    $tmp2284 = $tmp2285;
                    $tmp2283 = $tmp2284;
                    newTarget2282 = $tmp2283;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2283));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2284));
                    if (((panda$core$Bit) { newTarget2282 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2288 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2289, 25);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef($tmp2288, $tmp2289, position2271, type2273, newTarget2282, m2277);
                        $tmp2287 = $tmp2288;
                        $tmp2286 = $tmp2287;
                        $returnValue1581 = $tmp2286;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2286));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2287));
                        $tmp2281 = 0;
                        goto $l2279;
                        $l2290:;
                        $tmp1587 = 18;
                        goto $l1585;
                        $l2291:;
                        $tmp1574 = 19;
                        goto $l1572;
                        $l2292:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2281 = -1;
                goto $l2279;
                $l2279:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTarget2282));
                newTarget2282 = NULL;
                switch ($tmp2281) {
                    case 0: goto $l2290;
                    case -1: goto $l2294;
                }
                $l2294:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2295, 28);
            panda$core$Bit $tmp2296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2295);
            if ($tmp2296.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2298 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position2297 = *$tmp2298;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2300 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$506_91588->$data + 16));
                op2299 = *$tmp2300;
                org$pandalanguage$pandac$IRNode** $tmp2302 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 24));
                base2301 = *$tmp2302;
                int $tmp2305;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2309 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base2301, p_f);
                    $tmp2308 = $tmp2309;
                    $tmp2307 = $tmp2308;
                    newBase2306 = $tmp2307;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2307));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2308));
                    if (((panda$core$Bit) { newBase2306 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2312 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2313, 28);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp2312, $tmp2313, position2297, op2299, newBase2306);
                        $tmp2311 = $tmp2312;
                        $tmp2310 = $tmp2311;
                        $returnValue1581 = $tmp2310;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2310));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2311));
                        $tmp2305 = 0;
                        goto $l2303;
                        $l2314:;
                        $tmp1587 = 19;
                        goto $l1585;
                        $l2315:;
                        $tmp1574 = 20;
                        goto $l1572;
                        $l2316:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2305 = -1;
                goto $l2303;
                $l2303:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase2306));
                newBase2306 = NULL;
                switch ($tmp2305) {
                    case -1: goto $l2318;
                    case 0: goto $l2314;
                }
                $l2318:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2319, 29);
            panda$core$Bit $tmp2320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2319);
            if ($tmp2320.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2322 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position2321 = *$tmp2322;
                panda$core$String** $tmp2324 = ((panda$core$String**) ((char*) $match$506_91588->$data + 16));
                label2323 = *$tmp2324;
                org$pandalanguage$pandac$IRNode** $tmp2326 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 24));
                target2325 = *$tmp2326;
                org$pandalanguage$pandac$IRNode** $tmp2328 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 32));
                list2327 = *$tmp2328;
                panda$collections$ImmutableArray** $tmp2330 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91588->$data + 40));
                statements2329 = *$tmp2330;
                int $tmp2333;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2337 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(list2327, p_f);
                    $tmp2336 = $tmp2337;
                    $tmp2335 = $tmp2336;
                    newList2334 = $tmp2335;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2335));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2336));
                    panda$collections$ImmutableArray* $tmp2341 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2329, p_f);
                    $tmp2340 = $tmp2341;
                    $tmp2339 = $tmp2340;
                    newStatements2338 = $tmp2339;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2339));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2340));
                    bool $tmp2342 = ((panda$core$Bit) { newList2334 != NULL }).value;
                    if ($tmp2342) goto $l2343;
                    $tmp2342 = ((panda$core$Bit) { newStatements2338 != NULL }).value;
                    $l2343:;
                    panda$core$Bit $tmp2344 = { $tmp2342 };
                    if ($tmp2344.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2347 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2348, 29);
                        org$pandalanguage$pandac$IRNode* $tmp2351 = (($fn2350) self->$class->vtable[5])(self, newList2334, list2327);
                        $tmp2349 = $tmp2351;
                        panda$collections$ImmutableArray* $tmp2354 = (($fn2353) self->$class->vtable[6])(self, newStatements2338, statements2329);
                        $tmp2352 = $tmp2354;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2347, $tmp2348, position2321, label2323, target2325, $tmp2349, $tmp2352);
                        $tmp2346 = $tmp2347;
                        $tmp2345 = $tmp2346;
                        $returnValue1581 = $tmp2345;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2345));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2346));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2352));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2349));
                        $tmp2333 = 0;
                        goto $l2331;
                        $l2355:;
                        $tmp1587 = 20;
                        goto $l1585;
                        $l2356:;
                        $tmp1574 = 21;
                        goto $l1572;
                        $l2357:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2333 = -1;
                goto $l2331;
                $l2331:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2338));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newList2334));
                newList2334 = NULL;
                newStatements2338 = NULL;
                switch ($tmp2333) {
                    case 0: goto $l2355;
                    case -1: goto $l2359;
                }
                $l2359:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2360, 31);
            panda$core$Bit $tmp2361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2360);
            if ($tmp2361.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2363 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position2362 = *$tmp2363;
                org$pandalanguage$pandac$IRNode** $tmp2365 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 16));
                value2364 = *$tmp2365;
                int $tmp2368;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2372 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2364, p_f);
                    $tmp2371 = $tmp2372;
                    $tmp2370 = $tmp2371;
                    newValue2369 = $tmp2370;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2370));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2371));
                    if (((panda$core$Bit) { newValue2369 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2375 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2376, 31);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q($tmp2375, $tmp2376, position2362, newValue2369);
                        $tmp2374 = $tmp2375;
                        $tmp2373 = $tmp2374;
                        $returnValue1581 = $tmp2373;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2373));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2374));
                        $tmp2368 = 0;
                        goto $l2366;
                        $l2377:;
                        $tmp1587 = 21;
                        goto $l1585;
                        $l2378:;
                        $tmp1574 = 22;
                        goto $l1572;
                        $l2379:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2368 = -1;
                goto $l2366;
                $l2366:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2369));
                newValue2369 = NULL;
                switch ($tmp2368) {
                    case 0: goto $l2377;
                    case -1: goto $l2381;
                }
                $l2381:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2382, 33);
            panda$core$Bit $tmp2383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2382);
            if ($tmp2383.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2385 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 0));
                base2384 = *$tmp2385;
                panda$core$Int64* $tmp2387 = ((panda$core$Int64*) ((char*) $match$506_91588->$data + 8));
                id2386 = *$tmp2387;
                int $tmp2390;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2394 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base2384, p_f);
                    $tmp2393 = $tmp2394;
                    $tmp2392 = $tmp2393;
                    newBase2391 = $tmp2392;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2392));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2393));
                    if (((panda$core$Bit) { newBase2391 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2397 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2398, 33);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64($tmp2397, $tmp2398, newBase2391, id2386);
                        $tmp2396 = $tmp2397;
                        $tmp2395 = $tmp2396;
                        $returnValue1581 = $tmp2395;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2395));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2396));
                        $tmp2390 = 0;
                        goto $l2388;
                        $l2399:;
                        $tmp1587 = 22;
                        goto $l1585;
                        $l2400:;
                        $tmp1574 = 23;
                        goto $l1572;
                        $l2401:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2390 = -1;
                goto $l2388;
                $l2388:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase2391));
                newBase2391 = NULL;
                switch ($tmp2390) {
                    case -1: goto $l2403;
                    case 0: goto $l2399;
                }
                $l2403:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2404, 38);
            panda$core$Bit $tmp2405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2404);
            if ($tmp2405.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2407 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position2406 = *$tmp2407;
                org$pandalanguage$pandac$IRNode** $tmp2409 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 16));
                test2408 = *$tmp2409;
                org$pandalanguage$pandac$IRNode** $tmp2411 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 24));
                ifTrue2410 = *$tmp2411;
                org$pandalanguage$pandac$IRNode** $tmp2413 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 32));
                ifFalse2412 = *$tmp2413;
                int $tmp2416;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2420 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test2408, p_f);
                    $tmp2419 = $tmp2420;
                    $tmp2418 = $tmp2419;
                    newTest2417 = $tmp2418;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2418));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2419));
                    org$pandalanguage$pandac$IRNode* $tmp2424 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(ifTrue2410, p_f);
                    $tmp2423 = $tmp2424;
                    $tmp2422 = $tmp2423;
                    newIfTrue2421 = $tmp2422;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2422));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2423));
                    org$pandalanguage$pandac$IRNode* $tmp2428 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(ifFalse2412, p_f);
                    $tmp2427 = $tmp2428;
                    $tmp2426 = $tmp2427;
                    newIfFalse2425 = $tmp2426;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2426));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2427));
                    bool $tmp2430 = ((panda$core$Bit) { newTest2417 != NULL }).value;
                    if ($tmp2430) goto $l2431;
                    $tmp2430 = ((panda$core$Bit) { newIfTrue2421 != NULL }).value;
                    $l2431:;
                    panda$core$Bit $tmp2432 = { $tmp2430 };
                    bool $tmp2429 = $tmp2432.value;
                    if ($tmp2429) goto $l2433;
                    $tmp2429 = ((panda$core$Bit) { newIfFalse2425 != NULL }).value;
                    $l2433:;
                    panda$core$Bit $tmp2434 = { $tmp2429 };
                    if ($tmp2434.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2437 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2438, 38);
                        org$pandalanguage$pandac$IRNode* $tmp2441 = (($fn2440) self->$class->vtable[5])(self, newTest2417, test2408);
                        $tmp2439 = $tmp2441;
                        org$pandalanguage$pandac$IRNode* $tmp2444 = (($fn2443) self->$class->vtable[5])(self, newIfTrue2421, ifTrue2410);
                        $tmp2442 = $tmp2444;
                        org$pandalanguage$pandac$IRNode* $tmp2447 = (($fn2446) self->$class->vtable[5])(self, newIfFalse2425, ifFalse2412);
                        $tmp2445 = $tmp2447;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode($tmp2437, $tmp2438, position2406, $tmp2439, $tmp2442, $tmp2445);
                        $tmp2436 = $tmp2437;
                        $tmp2435 = $tmp2436;
                        $returnValue1581 = $tmp2435;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2435));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2436));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2445));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2442));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2439));
                        $tmp2416 = 0;
                        goto $l2414;
                        $l2448:;
                        $tmp1587 = 23;
                        goto $l1585;
                        $l2449:;
                        $tmp1574 = 24;
                        goto $l1572;
                        $l2450:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2416 = -1;
                goto $l2414;
                $l2414:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfFalse2425));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfTrue2421));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest2417));
                newTest2417 = NULL;
                newIfTrue2421 = NULL;
                newIfFalse2425 = NULL;
                switch ($tmp2416) {
                    case 0: goto $l2448;
                    case -1: goto $l2452;
                }
                $l2452:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2453, 46);
            panda$core$Bit $tmp2454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2453);
            if ($tmp2454.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2456 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position2455 = *$tmp2456;
                org$pandalanguage$pandac$Variable$Kind* $tmp2458 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$506_91588->$data + 16));
                kind2457 = *$tmp2458;
                panda$collections$ImmutableArray** $tmp2460 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91588->$data + 24));
                decls2459 = *$tmp2460;
                int $tmp2463;
                {
                    panda$collections$ImmutableArray* $tmp2467 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(decls2459, p_f);
                    $tmp2466 = $tmp2467;
                    $tmp2465 = $tmp2466;
                    newDecls2464 = $tmp2465;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2465));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2466));
                    if (((panda$core$Bit) { newDecls2464 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2470 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2471, 46);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2470, $tmp2471, position2455, kind2457, newDecls2464);
                        $tmp2469 = $tmp2470;
                        $tmp2468 = $tmp2469;
                        $returnValue1581 = $tmp2468;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2468));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2469));
                        $tmp2463 = 0;
                        goto $l2461;
                        $l2472:;
                        $tmp1587 = 24;
                        goto $l1585;
                        $l2473:;
                        $tmp1574 = 25;
                        goto $l1572;
                        $l2474:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2463 = -1;
                goto $l2461;
                $l2461:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newDecls2464));
                newDecls2464 = NULL;
                switch ($tmp2463) {
                    case 0: goto $l2472;
                    case -1: goto $l2476;
                }
                $l2476:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2477, 49);
            panda$core$Bit $tmp2478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2477);
            if ($tmp2478.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2480 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position2479 = *$tmp2480;
                panda$collections$ImmutableArray** $tmp2482 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91588->$data + 16));
                tests2481 = *$tmp2482;
                panda$collections$ImmutableArray** $tmp2484 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91588->$data + 24));
                statements2483 = *$tmp2484;
                int $tmp2487;
                {
                    panda$collections$ImmutableArray* $tmp2491 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(tests2481, p_f);
                    $tmp2490 = $tmp2491;
                    $tmp2489 = $tmp2490;
                    newTests2488 = $tmp2489;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2489));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2490));
                    panda$collections$ImmutableArray* $tmp2495 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2483, p_f);
                    $tmp2494 = $tmp2495;
                    $tmp2493 = $tmp2494;
                    newStatements2492 = $tmp2493;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2493));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2494));
                    bool $tmp2496 = ((panda$core$Bit) { newTests2488 != NULL }).value;
                    if ($tmp2496) goto $l2497;
                    $tmp2496 = ((panda$core$Bit) { newStatements2492 != NULL }).value;
                    $l2497:;
                    panda$core$Bit $tmp2498 = { $tmp2496 };
                    if ($tmp2498.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2501 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2502, 49);
                        panda$collections$ImmutableArray* $tmp2505 = (($fn2504) self->$class->vtable[6])(self, newTests2488, tests2481);
                        $tmp2503 = $tmp2505;
                        panda$collections$ImmutableArray* $tmp2508 = (($fn2507) self->$class->vtable[6])(self, newStatements2492, statements2483);
                        $tmp2506 = $tmp2508;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2501, $tmp2502, position2479, $tmp2503, $tmp2506);
                        $tmp2500 = $tmp2501;
                        $tmp2499 = $tmp2500;
                        $returnValue1581 = $tmp2499;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2499));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2500));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2506));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2503));
                        $tmp2487 = 0;
                        goto $l2485;
                        $l2509:;
                        $tmp1587 = 25;
                        goto $l1585;
                        $l2510:;
                        $tmp1574 = 26;
                        goto $l1572;
                        $l2511:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2487 = -1;
                goto $l2485;
                $l2485:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2492));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTests2488));
                newTests2488 = NULL;
                newStatements2492 = NULL;
                switch ($tmp2487) {
                    case 0: goto $l2509;
                    case -1: goto $l2513;
                }
                $l2513:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2514, 50);
            panda$core$Bit $tmp2515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91588->$rawValue, $tmp2514);
            if ($tmp2515.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2517 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91588->$data + 0));
                position2516 = *$tmp2517;
                panda$core$String** $tmp2519 = ((panda$core$String**) ((char*) $match$506_91588->$data + 16));
                label2518 = *$tmp2519;
                org$pandalanguage$pandac$IRNode** $tmp2521 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91588->$data + 24));
                test2520 = *$tmp2521;
                panda$collections$ImmutableArray** $tmp2523 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91588->$data + 32));
                statements2522 = *$tmp2523;
                int $tmp2526;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2530 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test2520, p_f);
                    $tmp2529 = $tmp2530;
                    $tmp2528 = $tmp2529;
                    newTest2527 = $tmp2528;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2528));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2529));
                    panda$collections$ImmutableArray* $tmp2534 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2522, p_f);
                    $tmp2533 = $tmp2534;
                    $tmp2532 = $tmp2533;
                    newStatements2531 = $tmp2532;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2532));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2533));
                    bool $tmp2535 = ((panda$core$Bit) { newTest2527 != NULL }).value;
                    if ($tmp2535) goto $l2536;
                    $tmp2535 = ((panda$core$Bit) { newStatements2531 != NULL }).value;
                    $l2536:;
                    panda$core$Bit $tmp2537 = { $tmp2535 };
                    if ($tmp2537.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2540 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2541, 50);
                        org$pandalanguage$pandac$IRNode* $tmp2544 = (($fn2543) self->$class->vtable[5])(self, newTest2527, test2520);
                        $tmp2542 = $tmp2544;
                        panda$collections$ImmutableArray* $tmp2547 = (($fn2546) self->$class->vtable[6])(self, newStatements2531, statements2522);
                        $tmp2545 = $tmp2547;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2540, $tmp2541, position2516, label2518, $tmp2542, $tmp2545);
                        $tmp2539 = $tmp2540;
                        $tmp2538 = $tmp2539;
                        $returnValue1581 = $tmp2538;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2538));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2539));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2545));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2542));
                        $tmp2526 = 0;
                        goto $l2524;
                        $l2548:;
                        $tmp1587 = 26;
                        goto $l1585;
                        $l2549:;
                        $tmp1574 = 27;
                        goto $l1572;
                        $l2550:;
                        return $returnValue1581;
                    }
                    }
                }
                $tmp2526 = -1;
                goto $l2524;
                $l2524:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2531));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest2527));
                newTest2527 = NULL;
                newStatements2531 = NULL;
                switch ($tmp2526) {
                    case 0: goto $l2548;
                    case -1: goto $l2552;
                }
                $l2552:;
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp2553, false);
                if ($tmp2553.value) goto $l2554; else goto $l2555;
                $l2555:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2556, (panda$core$Int64) { 675 });
                abort();
                $l2554:;
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
        $tmp1587 = -1;
        goto $l1585;
        $l1585:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1589));
        switch ($tmp1587) {
            case 8: goto $l1964;
            case 22: goto $l2400;
            case 1: goto $l1781;
            case 17: goto $l2265;
            case 20: goto $l2356;
            case 3: goto $l1837;
            case 13: goto $l2148;
            case 21: goto $l2378;
            case 11: goto $l2073;
            case 24: goto $l2473;
            case 25: goto $l2510;
            case 12: goto $l2099;
            case 16: goto $l2216;
            case 10: goto $l2038;
            case 19: goto $l2315;
            case -1: goto $l2557;
            case 7: goto $l1942;
            case 18: goto $l2291;
            case 2: goto $l1803;
            case 4: goto $l1866;
            case 0: goto $l1740;
            case 14: goto $l2170;
            case 9: goto $l2003;
            case 26: goto $l2549;
            case 15: goto $l2192;
            case 5: goto $l1892;
            case 6: goto $l1918;
            case 23: goto $l2449;
        }
        $l2557:;
        $tmp2558 = NULL;
        $returnValue1581 = $tmp2558;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2558));
        $tmp1574 = 28;
        goto $l1572;
        $l2559:;
        return $returnValue1581;
    }
    $l1572:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) transformed1575));
    transformed1575 = NULL;
    switch ($tmp1574) {
        case 9: goto $l1965;
        case 14: goto $l2149;
        case 2: goto $l1782;
        case 18: goto $l2266;
        case 21: goto $l2357;
        case 22: goto $l2379;
        case 12: goto $l2074;
        case 25: goto $l2474;
        case 4: goto $l1838;
        case 23: goto $l2401;
        case 11: goto $l2039;
        case 13: goto $l2100;
        case 1: goto $l1741;
        case 20: goto $l2316;
        case 0: goto $l1583;
        case 17: goto $l2217;
        case 28: goto $l2559;
        case 26: goto $l2511;
        case 8: goto $l1943;
        case 3: goto $l1804;
        case 5: goto $l1867;
        case 19: goto $l2292;
        case 10: goto $l2004;
        case 27: goto $l2550;
        case 16: goto $l2193;
        case 15: goto $l2171;
        case 6: goto $l1893;
        case 24: goto $l2450;
        case 7: goto $l1919;
    }
    $l2561:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$682_92565 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2566;
    panda$core$Int64 $tmp2567;
    org$pandalanguage$pandac$IRNode* test2569 = NULL;
    org$pandalanguage$pandac$IRNode* msg2571 = NULL;
    panda$core$String* $returnValue2573;
    panda$core$String* $tmp2574;
    panda$core$String* $tmp2575;
    panda$core$String* $tmp2576;
    panda$core$String* $tmp2577;
    panda$core$String* $tmp2578;
    panda$core$String* $tmp2588;
    panda$core$String* $tmp2589;
    panda$core$String* $tmp2590;
    panda$core$Int64 $tmp2597;
    panda$core$String* $tmp2599;
    panda$core$Int64 $tmp2603;
    org$pandalanguage$pandac$IRNode* left2605 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op2607;
    org$pandalanguage$pandac$IRNode* right2609 = NULL;
    panda$core$String* $tmp2611;
    panda$core$String* $tmp2612;
    panda$core$String* $tmp2613;
    panda$core$String* $tmp2614;
    panda$core$String* $tmp2615;
    panda$core$String* $tmp2616;
    panda$core$String* $tmp2617;
    panda$core$Object* $tmp2622;
    panda$core$Int64 $tmp2632;
    panda$core$Bit bit2634;
    panda$core$String* $tmp2636;
    panda$core$String* $tmp2637;
    panda$core$Int64 $tmp2641;
    panda$collections$ImmutableArray* statements2643 = NULL;
    panda$core$MutableString* result2648 = NULL;
    panda$core$MutableString* $tmp2649;
    panda$core$MutableString* $tmp2650;
    panda$collections$Iterator* Iter$696$172656 = NULL;
    panda$collections$Iterator* $tmp2657;
    panda$collections$Iterator* $tmp2658;
    org$pandalanguage$pandac$IRNode* s2674 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2675;
    panda$core$Object* $tmp2676;
    panda$core$String* $tmp2681;
    panda$core$Char8 $tmp2686;
    panda$core$UInt8 $tmp2687;
    panda$core$String* $tmp2688;
    panda$core$String* $tmp2689;
    panda$core$Int64 $tmp2695;
    panda$collections$ImmutableArray* statements2697 = NULL;
    panda$collections$ImmutableArray* finally2699 = NULL;
    panda$core$MutableString* result2704 = NULL;
    panda$core$MutableString* $tmp2705;
    panda$core$MutableString* $tmp2706;
    panda$collections$Iterator* Iter$703$172712 = NULL;
    panda$collections$Iterator* $tmp2713;
    panda$collections$Iterator* $tmp2714;
    org$pandalanguage$pandac$IRNode* s2730 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2731;
    panda$core$Object* $tmp2732;
    panda$core$String* $tmp2737;
    panda$collections$Iterator* Iter$707$172746 = NULL;
    panda$collections$Iterator* $tmp2747;
    panda$collections$Iterator* $tmp2748;
    org$pandalanguage$pandac$IRNode* s2764 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2765;
    panda$core$Object* $tmp2766;
    panda$core$String* $tmp2771;
    panda$core$Char8 $tmp2776;
    panda$core$UInt8 $tmp2777;
    panda$core$String* $tmp2778;
    panda$core$String* $tmp2779;
    panda$core$Int64 $tmp2785;
    panda$core$String* label2787 = NULL;
    panda$core$String* $tmp2789;
    panda$core$String* $tmp2790;
    panda$core$String* $tmp2791;
    panda$core$String* $tmp2798;
    panda$core$Int64 $tmp2802;
    org$pandalanguage$pandac$MethodRef* m2804 = NULL;
    panda$collections$ImmutableArray* args2806 = NULL;
    panda$core$String* $tmp2808;
    panda$core$String* $tmp2809;
    panda$core$String* $tmp2810;
    panda$core$String* $tmp2811;
    panda$core$String* $tmp2812;
    panda$core$String* $tmp2816;
    panda$core$Int64 $tmp2826;
    org$pandalanguage$pandac$IRNode* value2828 = NULL;
    org$pandalanguage$pandac$Type* type2830 = NULL;
    panda$core$String* $tmp2832;
    panda$core$String* $tmp2833;
    panda$core$String* $tmp2834;
    panda$core$String* $tmp2835;
    panda$core$String* $tmp2836;
    panda$core$Int64 $tmp2846;
    org$pandalanguage$pandac$ChoiceCase* ce2848 = NULL;
    panda$core$String* $tmp2850;
    panda$core$String* $tmp2851;
    panda$core$Int64 $tmp2855;
    org$pandalanguage$pandac$IRNode* base2857 = NULL;
    org$pandalanguage$pandac$ChoiceCase* ce2859 = NULL;
    panda$core$Int64 field2861;
    panda$core$String* $tmp2863;
    panda$core$String* $tmp2864;
    panda$core$String* $tmp2865;
    panda$core$String* $tmp2866;
    panda$core$String* $tmp2867;
    panda$core$String* $tmp2868;
    panda$core$String* $tmp2869;
    panda$core$Object* $tmp2877;
    panda$core$Int64 $tmp2884;
    org$pandalanguage$pandac$Type* type2886 = NULL;
    org$pandalanguage$pandac$IRNode* call2888 = NULL;
    org$pandalanguage$pandac$IRNode* $match$726_172893 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2894;
    panda$core$Int64 $tmp2895;
    panda$collections$ImmutableArray* args2897 = NULL;
    panda$core$String* $tmp2899;
    panda$core$String* $tmp2900;
    panda$core$String* $tmp2901;
    panda$core$String* $tmp2902;
    panda$core$String* $tmp2903;
    panda$core$String* $tmp2907;
    panda$core$Bit $tmp2918;
    panda$core$Int64 $tmp2923;
    org$pandalanguage$pandac$Type* Type2925 = NULL;
    panda$core$String* $tmp2927;
    panda$core$Int64 $tmp2931;
    panda$core$String* label2933 = NULL;
    panda$core$String* $tmp2935;
    panda$core$String* $tmp2936;
    panda$core$String* $tmp2937;
    panda$core$String* $tmp2944;
    panda$core$Int64 $tmp2948;
    org$pandalanguage$pandac$IRNode* target2950 = NULL;
    org$pandalanguage$pandac$IRNode* value2952 = NULL;
    panda$core$String* $tmp2954;
    panda$core$String* $tmp2955;
    panda$core$String* $tmp2956;
    panda$core$String* $tmp2957;
    panda$core$String* $tmp2958;
    panda$core$String* $tmp2959;
    panda$core$String* $tmp2960;
    org$pandalanguage$pandac$Type* $tmp2965;
    panda$core$String* $tmp2976;
    panda$core$String* $tmp2977;
    panda$core$String* $tmp2978;
    panda$core$String* $tmp2979;
    panda$core$String* $tmp2980;
    org$pandalanguage$pandac$Type* $tmp2985;
    panda$core$Int64 $tmp2993;
    panda$core$String* label2995 = NULL;
    panda$collections$ImmutableArray* statements2997 = NULL;
    org$pandalanguage$pandac$IRNode* test2999 = NULL;
    panda$core$MutableString* result3004 = NULL;
    panda$core$MutableString* $tmp3005;
    panda$core$MutableString* $tmp3006;
    panda$core$String* $tmp3008;
    panda$core$String* $tmp3009;
    panda$collections$Iterator* Iter$750$173017 = NULL;
    panda$collections$Iterator* $tmp3018;
    panda$collections$Iterator* $tmp3019;
    org$pandalanguage$pandac$IRNode* s3035 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3036;
    panda$core$Object* $tmp3037;
    panda$core$String* $tmp3042;
    panda$core$String* $tmp3047;
    panda$core$String* $tmp3048;
    panda$core$String* $tmp3053;
    panda$core$String* $tmp3054;
    panda$core$Int64 $tmp3060;
    org$pandalanguage$pandac$IRNode* m3062 = NULL;
    panda$collections$ImmutableArray* args3064 = NULL;
    panda$core$String* $tmp3066;
    panda$core$String* $tmp3067;
    panda$core$String* $tmp3068;
    panda$core$String* $tmp3069;
    panda$core$String* $tmp3070;
    panda$core$String* $tmp3075;
    panda$core$Int64 $tmp3086;
    org$pandalanguage$pandac$IRNode* expr3088 = NULL;
    org$pandalanguage$pandac$IRNode* stmt3090 = NULL;
    panda$core$String* $tmp3092;
    panda$core$String* $tmp3093;
    panda$core$String* $tmp3094;
    panda$core$String* $tmp3095;
    panda$core$String* $tmp3096;
    panda$core$Int64 $tmp3106;
    org$pandalanguage$pandac$IRNode* base3108 = NULL;
    org$pandalanguage$pandac$FieldDecl* field3110 = NULL;
    panda$core$String* $tmp3112;
    panda$core$String* $tmp3113;
    panda$core$String* $tmp3114;
    panda$core$String* $tmp3115;
    panda$core$String* $tmp3116;
    panda$core$String* $tmp3126;
    panda$core$Int64 $tmp3129;
    org$pandalanguage$pandac$IRNode* test3131 = NULL;
    panda$collections$ImmutableArray* ifTrue3133 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse3135 = NULL;
    panda$core$MutableString* result3140 = NULL;
    panda$core$MutableString* $tmp3141;
    panda$core$MutableString* $tmp3142;
    panda$core$String* $tmp3144;
    panda$core$String* $tmp3145;
    panda$collections$Iterator* Iter$766$173153 = NULL;
    panda$collections$Iterator* $tmp3154;
    panda$collections$Iterator* $tmp3155;
    org$pandalanguage$pandac$IRNode* s3171 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3172;
    panda$core$Object* $tmp3173;
    panda$core$String* $tmp3178;
    panda$core$Char8 $tmp3183;
    panda$core$UInt8 $tmp3184;
    panda$core$String* $tmp3185;
    panda$core$String* $tmp3186;
    panda$core$String* $tmp3191;
    panda$core$String* $tmp3192;
    panda$core$Int64 $tmp3198;
    panda$core$UInt64 value3200;
    panda$core$String* $tmp3202;
    panda$core$String* $tmp3203;
    panda$core$Int64 $tmp3207;
    org$pandalanguage$pandac$IRNode* value3209 = NULL;
    panda$core$String* $tmp3211;
    panda$core$String* $tmp3212;
    panda$core$String* $tmp3213;
    panda$core$Int64 $tmp3220;
    org$pandalanguage$pandac$IRNode* value3222 = NULL;
    panda$core$String* $tmp3224;
    panda$core$String* $tmp3225;
    panda$core$String* $tmp3226;
    panda$core$Int64 $tmp3233;
    panda$core$String* label3235 = NULL;
    panda$collections$ImmutableArray* statements3237 = NULL;
    panda$core$MutableString* result3242 = NULL;
    panda$core$MutableString* $tmp3243;
    panda$core$MutableString* $tmp3244;
    panda$core$String* $tmp3246;
    panda$core$String* $tmp3247;
    panda$collections$Iterator* Iter$786$173255 = NULL;
    panda$collections$Iterator* $tmp3256;
    panda$collections$Iterator* $tmp3257;
    org$pandalanguage$pandac$IRNode* s3273 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3274;
    panda$core$Object* $tmp3275;
    panda$core$String* $tmp3280;
    panda$core$Char8 $tmp3285;
    panda$core$UInt8 $tmp3286;
    panda$core$String* $tmp3287;
    panda$core$String* $tmp3288;
    panda$core$Int64 $tmp3294;
    org$pandalanguage$pandac$IRNode* value3296 = NULL;
    panda$collections$ImmutableArray* whens3298 = NULL;
    panda$collections$ImmutableArray* other3300 = NULL;
    panda$core$MutableString* result3305 = NULL;
    panda$core$MutableString* $tmp3306;
    panda$core$MutableString* $tmp3307;
    panda$core$String* $tmp3309;
    panda$core$String* $tmp3310;
    panda$collections$Iterator* Iter$793$173318 = NULL;
    panda$collections$Iterator* $tmp3319;
    panda$collections$Iterator* $tmp3320;
    org$pandalanguage$pandac$IRNode* w3336 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3337;
    panda$core$Object* $tmp3338;
    panda$core$String* $tmp3343;
    panda$collections$Iterator* Iter$798$213352 = NULL;
    panda$collections$Iterator* $tmp3353;
    panda$collections$Iterator* $tmp3354;
    org$pandalanguage$pandac$IRNode* s3370 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3371;
    panda$core$Object* $tmp3372;
    panda$core$String* $tmp3377;
    panda$core$Char8 $tmp3382;
    panda$core$UInt8 $tmp3383;
    panda$core$String* $tmp3384;
    panda$core$String* $tmp3385;
    panda$core$Int64 $tmp3391;
    org$pandalanguage$pandac$IRNode* target3393 = NULL;
    org$pandalanguage$pandac$MethodRef* m3395 = NULL;
    panda$core$String* $tmp3397;
    panda$core$String* $tmp3398;
    panda$core$String* $tmp3399;
    panda$core$String* $tmp3400;
    panda$core$String* $tmp3401;
    panda$core$String* $tmp3411;
    panda$core$Int64 $tmp3414;
    panda$core$UInt64 value3416;
    panda$core$String* $tmp3418;
    panda$core$String* $tmp3419;
    panda$core$Object* $tmp3421;
    panda$core$Int64 $tmp3426;
    panda$core$String* $tmp3428;
    panda$core$Int64 $tmp3432;
    org$pandalanguage$pandac$parser$Token$Kind op3434;
    org$pandalanguage$pandac$IRNode* base3436 = NULL;
    panda$core$String* $tmp3438;
    panda$core$String* $tmp3439;
    panda$core$String* $tmp3440;
    panda$core$String* $tmp3441;
    panda$core$String* $tmp3442;
    panda$core$Int64 $tmp3451;
    panda$core$String* label3453 = NULL;
    org$pandalanguage$pandac$IRNode* target3455 = NULL;
    org$pandalanguage$pandac$IRNode* list3457 = NULL;
    panda$collections$ImmutableArray* statements3459 = NULL;
    panda$core$MutableString* result3464 = NULL;
    panda$core$MutableString* $tmp3465;
    panda$core$MutableString* $tmp3466;
    panda$core$String* $tmp3468;
    panda$core$String* $tmp3469;
    panda$core$String* $tmp3473;
    panda$core$String* $tmp3474;
    panda$core$String* $tmp3475;
    panda$core$String* $tmp3476;
    panda$collections$Iterator* Iter$821$173487 = NULL;
    panda$collections$Iterator* $tmp3488;
    panda$collections$Iterator* $tmp3489;
    org$pandalanguage$pandac$IRNode* s3505 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3506;
    panda$core$Object* $tmp3507;
    panda$core$String* $tmp3512;
    panda$core$Char8 $tmp3517;
    panda$core$UInt8 $tmp3518;
    panda$core$String* $tmp3519;
    panda$core$String* $tmp3520;
    panda$core$Int64 $tmp3526;
    panda$core$Real64 value3528;
    panda$core$String* $tmp3530;
    panda$core$String* $tmp3531;
    panda$core$Int64 $tmp3535;
    org$pandalanguage$pandac$IRNode* value3537 = NULL;
    panda$core$String* $tmp3539;
    panda$core$String* $tmp3540;
    panda$core$String* $tmp3541;
    panda$core$String* $tmp3548;
    panda$core$Int64 $tmp3552;
    org$pandalanguage$pandac$Type* type3554 = NULL;
    panda$core$Int64 id3556;
    panda$core$String* $tmp3558;
    panda$core$String* $tmp3559;
    panda$core$String* $tmp3560;
    panda$core$Object* $tmp3562;
    panda$core$Int64 $tmp3569;
    org$pandalanguage$pandac$IRNode* base3571 = NULL;
    panda$core$Int64 id3573;
    panda$core$String* $tmp3575;
    panda$core$String* $tmp3576;
    panda$core$String* $tmp3577;
    panda$core$String* $tmp3578;
    panda$core$String* $tmp3579;
    panda$core$Object* $tmp3581;
    panda$core$Int64 $tmp3591;
    panda$core$String* $tmp3593;
    panda$core$Int64 $tmp3597;
    panda$core$String* $tmp3599;
    panda$core$Int64 $tmp3603;
    panda$core$String* str3605 = NULL;
    panda$core$String* $tmp3607;
    panda$core$String* $tmp3608;
    panda$core$Int64 $tmp3613;
    panda$core$String* $tmp3615;
    panda$core$Int64 $tmp3619;
    org$pandalanguage$pandac$IRNode* test3621 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue3623 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse3625 = NULL;
    panda$core$String* $tmp3627;
    panda$core$String* $tmp3628;
    panda$core$String* $tmp3629;
    panda$core$String* $tmp3630;
    panda$core$String* $tmp3631;
    panda$core$String* $tmp3632;
    panda$core$String* $tmp3633;
    panda$core$Int64 $tmp3646;
    org$pandalanguage$pandac$Type* type3648 = NULL;
    panda$core$String* $tmp3650;
    panda$core$String* $tmp3651;
    panda$core$Int64 $tmp3655;
    panda$core$String* name3657 = NULL;
    panda$core$String* $tmp3659;
    panda$core$Int64 $tmp3662;
    org$pandalanguage$pandac$IRNode* base3664 = NULL;
    panda$collections$ImmutableArray* args3666 = NULL;
    panda$core$String* $tmp3668;
    panda$core$String* $tmp3669;
    panda$core$String* $tmp3670;
    panda$core$String* $tmp3671;
    panda$core$String* $tmp3672;
    panda$core$String* $tmp3677;
    panda$core$Int64 $tmp3687;
    panda$collections$ImmutableArray* params3689 = NULL;
    org$pandalanguage$pandac$ASTNode* body3691 = NULL;
    panda$core$String* $tmp3693;
    panda$core$String* $tmp3694;
    panda$core$String* $tmp3695;
    panda$core$String* $tmp3696;
    panda$core$String* $tmp3697;
    panda$core$String* $tmp3699;
    panda$core$Int64 $tmp3712;
    org$pandalanguage$pandac$IRNode* target3714 = NULL;
    panda$collections$ImmutableArray* methods3716 = NULL;
    panda$collections$ImmutableArray* args3718 = NULL;
    panda$core$String* $tmp3720;
    panda$core$String* $tmp3721;
    panda$core$String* $tmp3722;
    panda$core$String* $tmp3723;
    panda$core$String* $tmp3724;
    panda$core$String* $tmp3725;
    panda$core$String* $tmp3726;
    panda$core$Object* $tmp3731;
    panda$core$Int64 $tmp3732;
    panda$core$String* $tmp3737;
    panda$core$String* $tmp3747;
    panda$core$String* $tmp3748;
    panda$core$String* $tmp3749;
    panda$core$String* $tmp3750;
    panda$core$String* $tmp3751;
    panda$core$Object* $tmp3753;
    panda$core$Int64 $tmp3754;
    panda$core$String* $tmp3759;
    panda$core$Int64 $tmp3769;
    org$pandalanguage$pandac$IRNode* target3771 = NULL;
    panda$collections$ImmutableArray* methods3773 = NULL;
    panda$core$String* $tmp3775;
    panda$core$String* $tmp3776;
    panda$core$String* $tmp3777;
    panda$core$String* $tmp3778;
    panda$core$String* $tmp3779;
    panda$core$Object* $tmp3784;
    panda$core$Int64 $tmp3785;
    panda$core$String* $tmp3792;
    panda$core$String* $tmp3793;
    panda$core$String* $tmp3794;
    panda$core$Object* $tmp3795;
    panda$core$Int64 $tmp3796;
    panda$core$Int64 $tmp3803;
    org$pandalanguage$pandac$IRNode* start3805 = NULL;
    org$pandalanguage$pandac$IRNode* end3807 = NULL;
    panda$core$Bit inclusive3809;
    org$pandalanguage$pandac$IRNode* step3811 = NULL;
    panda$core$MutableString* result3816 = NULL;
    panda$core$MutableString* $tmp3817;
    panda$core$MutableString* $tmp3818;
    panda$core$String* $tmp3822;
    panda$core$String* $tmp3823;
    panda$core$String* $tmp3828;
    panda$core$String* $tmp3829;
    panda$core$Int64 $tmp3835;
    org$pandalanguage$pandac$Variable$Kind kind3837;
    panda$collections$ImmutableArray* decls3839 = NULL;
    panda$core$MutableString* result3844 = NULL;
    panda$core$MutableString* $tmp3845;
    panda$core$MutableString* $tmp3846;
    org$pandalanguage$pandac$Variable$Kind $match$889_173848;
    panda$core$Int64 $tmp3849;
    panda$core$Int64 $tmp3852;
    panda$core$Int64 $tmp3855;
    panda$core$Int64 $tmp3858;
    panda$core$String* $tmp3861;
    panda$core$String* $tmp3866;
    panda$core$String* $tmp3867;
    panda$core$Int64 $tmp3873;
    panda$core$String* name3875 = NULL;
    panda$core$String* $tmp3877;
    panda$core$Int64 $tmp3880;
    org$pandalanguage$pandac$Variable* variable3882 = NULL;
    panda$core$String* $tmp3884;
    panda$core$String* $tmp3885;
    panda$core$Int64 $tmp3890;
    panda$collections$ImmutableArray* tests3892 = NULL;
    panda$collections$ImmutableArray* statements3894 = NULL;
    panda$core$String* $tmp3896;
    panda$core$String* $tmp3897;
    panda$core$String* $tmp3898;
    panda$core$String* $tmp3899;
    panda$core$String* $tmp3900;
    panda$core$String* $tmp3902;
    panda$core$String* $tmp3910;
    panda$core$Int64 $tmp3921;
    panda$core$String* label3923 = NULL;
    org$pandalanguage$pandac$IRNode* test3925 = NULL;
    panda$collections$ImmutableArray* statements3927 = NULL;
    panda$core$MutableString* result3932 = NULL;
    panda$core$MutableString* $tmp3933;
    panda$core$MutableString* $tmp3934;
    panda$core$String* $tmp3936;
    panda$core$String* $tmp3937;
    panda$core$String* $tmp3941;
    panda$core$String* $tmp3942;
    panda$collections$Iterator* Iter$909$173950 = NULL;
    panda$collections$Iterator* $tmp3951;
    panda$collections$Iterator* $tmp3952;
    org$pandalanguage$pandac$IRNode* s3968 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3969;
    panda$core$Object* $tmp3970;
    panda$core$String* $tmp3975;
    panda$core$Char8 $tmp3980;
    panda$core$UInt8 $tmp3981;
    panda$core$String* $tmp3982;
    panda$core$String* $tmp3983;
    panda$core$Bit $tmp3989;
    int $tmp2564;
    {
        $tmp2566 = self;
        $match$682_92565 = $tmp2566;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2566));
        panda$core$Int64$init$builtin_int64(&$tmp2567, 0);
        panda$core$Bit $tmp2568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2567);
        if ($tmp2568.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2570 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 16));
            test2569 = *$tmp2570;
            org$pandalanguage$pandac$IRNode** $tmp2572 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 24));
            msg2571 = *$tmp2572;
            if (((panda$core$Bit) { msg2571 != NULL }).value) {
            {
                panda$core$String* $tmp2580 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2579, ((panda$core$Object*) test2569));
                $tmp2578 = $tmp2580;
                panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2578, &$s2581);
                $tmp2577 = $tmp2582;
                panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2577, ((panda$core$Object*) msg2571));
                $tmp2576 = $tmp2583;
                panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2576, &$s2584);
                $tmp2575 = $tmp2585;
                $tmp2574 = $tmp2575;
                $returnValue2573 = $tmp2574;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2574));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2575));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2576));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2577));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2578));
                $tmp2564 = 0;
                goto $l2562;
                $l2586:;
                return $returnValue2573;
            }
            }
            panda$core$String* $tmp2592 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2591, ((panda$core$Object*) test2569));
            $tmp2590 = $tmp2592;
            panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2590, &$s2593);
            $tmp2589 = $tmp2594;
            $tmp2588 = $tmp2589;
            $returnValue2573 = $tmp2588;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2588));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2589));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2590));
            $tmp2564 = 1;
            goto $l2562;
            $l2595:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2597, 1);
        panda$core$Bit $tmp2598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2597);
        if ($tmp2598.value) {
        {
            $tmp2599 = &$s2600;
            $returnValue2573 = $tmp2599;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2599));
            $tmp2564 = 2;
            goto $l2562;
            $l2601:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2603, 2);
        panda$core$Bit $tmp2604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2603);
        if ($tmp2604.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2606 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 24));
            left2605 = *$tmp2606;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2608 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$682_92565->$data + 32));
            op2607 = *$tmp2608;
            org$pandalanguage$pandac$IRNode** $tmp2610 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 40));
            right2609 = *$tmp2610;
            panda$core$String* $tmp2619 = (($fn2618) left2605->$class->vtable[0])(left2605);
            $tmp2617 = $tmp2619;
            panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2617, &$s2620);
            $tmp2616 = $tmp2621;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2623;
            $tmp2623 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2623->value = op2607;
            $tmp2622 = ((panda$core$Object*) $tmp2623);
            panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2616, $tmp2622);
            $tmp2615 = $tmp2624;
            panda$core$String* $tmp2626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2615, &$s2625);
            $tmp2614 = $tmp2626;
            panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2614, ((panda$core$Object*) right2609));
            $tmp2613 = $tmp2627;
            panda$core$String* $tmp2629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, &$s2628);
            $tmp2612 = $tmp2629;
            $tmp2611 = $tmp2612;
            $returnValue2573 = $tmp2611;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2611));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2612));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2613));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2614));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2615));
            panda$core$Panda$unref$panda$core$Object($tmp2622);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2616));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2617));
            $tmp2564 = 3;
            goto $l2562;
            $l2630:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2632, 3);
        panda$core$Bit $tmp2633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2632);
        if ($tmp2633.value) {
        {
            panda$core$Bit* $tmp2635 = ((panda$core$Bit*) ((char*) $match$682_92565->$data + 24));
            bit2634 = *$tmp2635;
            panda$core$String* $tmp2638 = panda$core$Bit$convert$R$panda$core$String(bit2634);
            $tmp2637 = $tmp2638;
            $tmp2636 = $tmp2637;
            $returnValue2573 = $tmp2636;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2636));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2637));
            $tmp2564 = 4;
            goto $l2562;
            $l2639:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2641, 4);
        panda$core$Bit $tmp2642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2641);
        if ($tmp2642.value) {
        {
            panda$collections$ImmutableArray** $tmp2644 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 16));
            statements2643 = *$tmp2644;
            int $tmp2647;
            {
                panda$core$MutableString* $tmp2651 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp2651, &$s2652);
                $tmp2650 = $tmp2651;
                $tmp2649 = $tmp2650;
                result2648 = $tmp2649;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2649));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2650));
                {
                    int $tmp2655;
                    {
                        ITable* $tmp2659 = ((panda$collections$Iterable*) statements2643)->$class->itable;
                        while ($tmp2659->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2659 = $tmp2659->next;
                        }
                        $fn2661 $tmp2660 = $tmp2659->methods[0];
                        panda$collections$Iterator* $tmp2662 = $tmp2660(((panda$collections$Iterable*) statements2643));
                        $tmp2658 = $tmp2662;
                        $tmp2657 = $tmp2658;
                        Iter$696$172656 = $tmp2657;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2657));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2658));
                        $l2663:;
                        ITable* $tmp2666 = Iter$696$172656->$class->itable;
                        while ($tmp2666->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2666 = $tmp2666->next;
                        }
                        $fn2668 $tmp2667 = $tmp2666->methods[0];
                        panda$core$Bit $tmp2669 = $tmp2667(Iter$696$172656);
                        panda$core$Bit $tmp2670 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2669);
                        bool $tmp2665 = $tmp2670.value;
                        if (!$tmp2665) goto $l2664;
                        {
                            int $tmp2673;
                            {
                                ITable* $tmp2677 = Iter$696$172656->$class->itable;
                                while ($tmp2677->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2677 = $tmp2677->next;
                                }
                                $fn2679 $tmp2678 = $tmp2677->methods[1];
                                panda$core$Object* $tmp2680 = $tmp2678(Iter$696$172656);
                                $tmp2676 = $tmp2680;
                                $tmp2675 = ((org$pandalanguage$pandac$IRNode*) $tmp2676);
                                s2674 = $tmp2675;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2675));
                                panda$core$Panda$unref$panda$core$Object($tmp2676);
                                panda$core$String* $tmp2683 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2674), &$s2682);
                                $tmp2681 = $tmp2683;
                                panda$core$MutableString$append$panda$core$String(result2648, $tmp2681);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2681));
                            }
                            $tmp2673 = -1;
                            goto $l2671;
                            $l2671:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2674));
                            s2674 = NULL;
                            switch ($tmp2673) {
                                case -1: goto $l2684;
                            }
                            $l2684:;
                        }
                        goto $l2663;
                        $l2664:;
                    }
                    $tmp2655 = -1;
                    goto $l2653;
                    $l2653:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$696$172656));
                    Iter$696$172656 = NULL;
                    switch ($tmp2655) {
                        case -1: goto $l2685;
                    }
                    $l2685:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2687, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2686, $tmp2687);
                panda$core$MutableString$append$panda$core$Char8(result2648, $tmp2686);
                panda$core$String* $tmp2690 = panda$core$MutableString$finish$R$panda$core$String(result2648);
                $tmp2689 = $tmp2690;
                $tmp2688 = $tmp2689;
                $returnValue2573 = $tmp2688;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2688));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2689));
                $tmp2647 = 0;
                goto $l2645;
                $l2691:;
                $tmp2564 = 5;
                goto $l2562;
                $l2692:;
                return $returnValue2573;
            }
            $l2645:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2648));
            result2648 = NULL;
            switch ($tmp2647) {
                case 0: goto $l2691;
            }
            $l2694:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2695, 5);
        panda$core$Bit $tmp2696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2695);
        if ($tmp2696.value) {
        {
            panda$collections$ImmutableArray** $tmp2698 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 16));
            statements2697 = *$tmp2698;
            panda$collections$ImmutableArray** $tmp2700 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 24));
            finally2699 = *$tmp2700;
            int $tmp2703;
            {
                panda$core$MutableString* $tmp2707 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp2707, &$s2708);
                $tmp2706 = $tmp2707;
                $tmp2705 = $tmp2706;
                result2704 = $tmp2705;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2705));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2706));
                {
                    int $tmp2711;
                    {
                        ITable* $tmp2715 = ((panda$collections$Iterable*) statements2697)->$class->itable;
                        while ($tmp2715->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2715 = $tmp2715->next;
                        }
                        $fn2717 $tmp2716 = $tmp2715->methods[0];
                        panda$collections$Iterator* $tmp2718 = $tmp2716(((panda$collections$Iterable*) statements2697));
                        $tmp2714 = $tmp2718;
                        $tmp2713 = $tmp2714;
                        Iter$703$172712 = $tmp2713;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2713));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2714));
                        $l2719:;
                        ITable* $tmp2722 = Iter$703$172712->$class->itable;
                        while ($tmp2722->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2722 = $tmp2722->next;
                        }
                        $fn2724 $tmp2723 = $tmp2722->methods[0];
                        panda$core$Bit $tmp2725 = $tmp2723(Iter$703$172712);
                        panda$core$Bit $tmp2726 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2725);
                        bool $tmp2721 = $tmp2726.value;
                        if (!$tmp2721) goto $l2720;
                        {
                            int $tmp2729;
                            {
                                ITable* $tmp2733 = Iter$703$172712->$class->itable;
                                while ($tmp2733->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2733 = $tmp2733->next;
                                }
                                $fn2735 $tmp2734 = $tmp2733->methods[1];
                                panda$core$Object* $tmp2736 = $tmp2734(Iter$703$172712);
                                $tmp2732 = $tmp2736;
                                $tmp2731 = ((org$pandalanguage$pandac$IRNode*) $tmp2732);
                                s2730 = $tmp2731;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2731));
                                panda$core$Panda$unref$panda$core$Object($tmp2732);
                                panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2730), &$s2738);
                                $tmp2737 = $tmp2739;
                                panda$core$MutableString$append$panda$core$String(result2704, $tmp2737);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2737));
                            }
                            $tmp2729 = -1;
                            goto $l2727;
                            $l2727:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2730));
                            s2730 = NULL;
                            switch ($tmp2729) {
                                case -1: goto $l2740;
                            }
                            $l2740:;
                        }
                        goto $l2719;
                        $l2720:;
                    }
                    $tmp2711 = -1;
                    goto $l2709;
                    $l2709:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$703$172712));
                    Iter$703$172712 = NULL;
                    switch ($tmp2711) {
                        case -1: goto $l2741;
                    }
                    $l2741:;
                }
                panda$core$MutableString$append$panda$core$String(result2704, &$s2742);
                {
                    int $tmp2745;
                    {
                        ITable* $tmp2749 = ((panda$collections$Iterable*) finally2699)->$class->itable;
                        while ($tmp2749->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2749 = $tmp2749->next;
                        }
                        $fn2751 $tmp2750 = $tmp2749->methods[0];
                        panda$collections$Iterator* $tmp2752 = $tmp2750(((panda$collections$Iterable*) finally2699));
                        $tmp2748 = $tmp2752;
                        $tmp2747 = $tmp2748;
                        Iter$707$172746 = $tmp2747;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2747));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2748));
                        $l2753:;
                        ITable* $tmp2756 = Iter$707$172746->$class->itable;
                        while ($tmp2756->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2756 = $tmp2756->next;
                        }
                        $fn2758 $tmp2757 = $tmp2756->methods[0];
                        panda$core$Bit $tmp2759 = $tmp2757(Iter$707$172746);
                        panda$core$Bit $tmp2760 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2759);
                        bool $tmp2755 = $tmp2760.value;
                        if (!$tmp2755) goto $l2754;
                        {
                            int $tmp2763;
                            {
                                ITable* $tmp2767 = Iter$707$172746->$class->itable;
                                while ($tmp2767->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2767 = $tmp2767->next;
                                }
                                $fn2769 $tmp2768 = $tmp2767->methods[1];
                                panda$core$Object* $tmp2770 = $tmp2768(Iter$707$172746);
                                $tmp2766 = $tmp2770;
                                $tmp2765 = ((org$pandalanguage$pandac$IRNode*) $tmp2766);
                                s2764 = $tmp2765;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2765));
                                panda$core$Panda$unref$panda$core$Object($tmp2766);
                                panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2764), &$s2772);
                                $tmp2771 = $tmp2773;
                                panda$core$MutableString$append$panda$core$String(result2704, $tmp2771);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2771));
                            }
                            $tmp2763 = -1;
                            goto $l2761;
                            $l2761:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2764));
                            s2764 = NULL;
                            switch ($tmp2763) {
                                case -1: goto $l2774;
                            }
                            $l2774:;
                        }
                        goto $l2753;
                        $l2754:;
                    }
                    $tmp2745 = -1;
                    goto $l2743;
                    $l2743:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$707$172746));
                    Iter$707$172746 = NULL;
                    switch ($tmp2745) {
                        case -1: goto $l2775;
                    }
                    $l2775:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2777, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2776, $tmp2777);
                panda$core$MutableString$append$panda$core$Char8(result2704, $tmp2776);
                panda$core$String* $tmp2780 = panda$core$MutableString$finish$R$panda$core$String(result2704);
                $tmp2779 = $tmp2780;
                $tmp2778 = $tmp2779;
                $returnValue2573 = $tmp2778;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2778));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2779));
                $tmp2703 = 0;
                goto $l2701;
                $l2781:;
                $tmp2564 = 6;
                goto $l2562;
                $l2782:;
                return $returnValue2573;
            }
            $l2701:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2704));
            result2704 = NULL;
            switch ($tmp2703) {
                case 0: goto $l2781;
            }
            $l2784:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2785, 6);
        panda$core$Bit $tmp2786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2785);
        if ($tmp2786.value) {
        {
            panda$core$String** $tmp2788 = ((panda$core$String**) ((char*) $match$682_92565->$data + 16));
            label2787 = *$tmp2788;
            if (((panda$core$Bit) { label2787 != NULL }).value) {
            {
                panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2792, label2787);
                $tmp2791 = $tmp2793;
                panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, &$s2794);
                $tmp2790 = $tmp2795;
                $tmp2789 = $tmp2790;
                $returnValue2573 = $tmp2789;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2789));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2790));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2791));
                $tmp2564 = 7;
                goto $l2562;
                $l2796:;
                return $returnValue2573;
            }
            }
            $tmp2798 = &$s2799;
            $returnValue2573 = $tmp2798;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2798));
            $tmp2564 = 8;
            goto $l2562;
            $l2800:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2802, 7);
        panda$core$Bit $tmp2803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2802);
        if ($tmp2803.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp2805 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$682_92565->$data + 24));
            m2804 = *$tmp2805;
            panda$collections$ImmutableArray** $tmp2807 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 32));
            args2806 = *$tmp2807;
            panda$core$String* $tmp2813 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m2804->value)->name);
            $tmp2812 = $tmp2813;
            panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2812, &$s2814);
            $tmp2811 = $tmp2815;
            ITable* $tmp2817 = ((panda$collections$CollectionView*) args2806)->$class->itable;
            while ($tmp2817->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2817 = $tmp2817->next;
            }
            $fn2819 $tmp2818 = $tmp2817->methods[1];
            panda$core$String* $tmp2820 = $tmp2818(((panda$collections$CollectionView*) args2806));
            $tmp2816 = $tmp2820;
            panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2811, $tmp2816);
            $tmp2810 = $tmp2821;
            panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2810, &$s2822);
            $tmp2809 = $tmp2823;
            $tmp2808 = $tmp2809;
            $returnValue2573 = $tmp2808;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2808));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2809));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2810));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2816));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2811));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2812));
            $tmp2564 = 9;
            goto $l2562;
            $l2824:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2826, 8);
        panda$core$Bit $tmp2827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2826);
        if ($tmp2827.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2829 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 16));
            value2828 = *$tmp2829;
            org$pandalanguage$pandac$Type** $tmp2831 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92565->$data + 24));
            type2830 = *$tmp2831;
            panda$core$String* $tmp2838 = (($fn2837) value2828->$class->vtable[0])(value2828);
            $tmp2836 = $tmp2838;
            panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, &$s2839);
            $tmp2835 = $tmp2840;
            panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2835, ((panda$core$Object*) type2830));
            $tmp2834 = $tmp2841;
            panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, &$s2842);
            $tmp2833 = $tmp2843;
            $tmp2832 = $tmp2833;
            $returnValue2573 = $tmp2832;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2832));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2833));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2834));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2835));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2836));
            $tmp2564 = 10;
            goto $l2562;
            $l2844:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2846, 9);
        panda$core$Bit $tmp2847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2846);
        if ($tmp2847.value) {
        {
            org$pandalanguage$pandac$ChoiceCase** $tmp2849 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$682_92565->$data + 16));
            ce2848 = *$tmp2849;
            panda$core$String* $tmp2852 = org$pandalanguage$pandac$ChoiceCase$convert$R$panda$core$String(ce2848);
            $tmp2851 = $tmp2852;
            $tmp2850 = $tmp2851;
            $returnValue2573 = $tmp2850;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2850));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2851));
            $tmp2564 = 11;
            goto $l2562;
            $l2853:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2855, 10);
        panda$core$Bit $tmp2856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2855);
        if ($tmp2856.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2858 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 16));
            base2857 = *$tmp2858;
            org$pandalanguage$pandac$ChoiceCase** $tmp2860 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$682_92565->$data + 24));
            ce2859 = *$tmp2860;
            panda$core$Int64* $tmp2862 = ((panda$core$Int64*) ((char*) $match$682_92565->$data + 32));
            field2861 = *$tmp2862;
            panda$core$String* $tmp2871 = (($fn2870) base2857->$class->vtable[0])(base2857);
            $tmp2869 = $tmp2871;
            panda$core$String* $tmp2873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2869, &$s2872);
            $tmp2868 = $tmp2873;
            panda$core$String* $tmp2874 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2868, ((panda$core$Object*) ce2859));
            $tmp2867 = $tmp2874;
            panda$core$String* $tmp2876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, &$s2875);
            $tmp2866 = $tmp2876;
            panda$core$Int64$wrapper* $tmp2878;
            $tmp2878 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2878->value = field2861;
            $tmp2877 = ((panda$core$Object*) $tmp2878);
            panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2866, $tmp2877);
            $tmp2865 = $tmp2879;
            panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2865, &$s2880);
            $tmp2864 = $tmp2881;
            $tmp2863 = $tmp2864;
            $returnValue2573 = $tmp2863;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2863));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2864));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2865));
            panda$core$Panda$unref$panda$core$Object($tmp2877);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2866));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2867));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2868));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2869));
            $tmp2564 = 12;
            goto $l2562;
            $l2882:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2884, 11);
        panda$core$Bit $tmp2885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2884);
        if ($tmp2885.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2887 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92565->$data + 16));
            type2886 = *$tmp2887;
            org$pandalanguage$pandac$IRNode** $tmp2889 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 24));
            call2888 = *$tmp2889;
            int $tmp2892;
            {
                $tmp2894 = call2888;
                $match$726_172893 = $tmp2894;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2894));
                panda$core$Int64$init$builtin_int64(&$tmp2895, 7);
                panda$core$Bit $tmp2896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$726_172893->$rawValue, $tmp2895);
                if ($tmp2896.value) {
                {
                    panda$collections$ImmutableArray** $tmp2898 = ((panda$collections$ImmutableArray**) ((char*) $match$726_172893->$data + 32));
                    args2897 = *$tmp2898;
                    panda$core$String* $tmp2904 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2886);
                    $tmp2903 = $tmp2904;
                    panda$core$String* $tmp2906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2903, &$s2905);
                    $tmp2902 = $tmp2906;
                    ITable* $tmp2908 = ((panda$collections$CollectionView*) args2897)->$class->itable;
                    while ($tmp2908->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp2908 = $tmp2908->next;
                    }
                    $fn2910 $tmp2909 = $tmp2908->methods[1];
                    panda$core$String* $tmp2911 = $tmp2909(((panda$collections$CollectionView*) args2897));
                    $tmp2907 = $tmp2911;
                    panda$core$String* $tmp2912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2902, $tmp2907);
                    $tmp2901 = $tmp2912;
                    panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2901, &$s2913);
                    $tmp2900 = $tmp2914;
                    $tmp2899 = $tmp2900;
                    $returnValue2573 = $tmp2899;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2899));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2900));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2901));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2907));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2902));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2903));
                    $tmp2892 = 0;
                    goto $l2890;
                    $l2915:;
                    $tmp2564 = 13;
                    goto $l2562;
                    $l2916:;
                    return $returnValue2573;
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp2918, false);
                    if ($tmp2918.value) goto $l2919; else goto $l2920;
                    $l2920:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2921, (panda$core$Int64) { 730 });
                    abort();
                    $l2919:;
                }
                }
            }
            $tmp2892 = -1;
            goto $l2890;
            $l2890:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2894));
            switch ($tmp2892) {
                case 0: goto $l2915;
                case -1: goto $l2922;
            }
            $l2922:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2923, 12);
        panda$core$Bit $tmp2924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2923);
        if ($tmp2924.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2926 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92565->$data + 16));
            Type2925 = *$tmp2926;
            $tmp2927 = &$s2928;
            $returnValue2573 = $tmp2927;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2927));
            $tmp2564 = 14;
            goto $l2562;
            $l2929:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2931, 13);
        panda$core$Bit $tmp2932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2931);
        if ($tmp2932.value) {
        {
            panda$core$String** $tmp2934 = ((panda$core$String**) ((char*) $match$682_92565->$data + 16));
            label2933 = *$tmp2934;
            if (((panda$core$Bit) { label2933 != NULL }).value) {
            {
                panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2938, label2933);
                $tmp2937 = $tmp2939;
                panda$core$String* $tmp2941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2937, &$s2940);
                $tmp2936 = $tmp2941;
                $tmp2935 = $tmp2936;
                $returnValue2573 = $tmp2935;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2935));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2936));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2937));
                $tmp2564 = 15;
                goto $l2562;
                $l2942:;
                return $returnValue2573;
            }
            }
            $tmp2944 = &$s2945;
            $returnValue2573 = $tmp2944;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2944));
            $tmp2564 = 16;
            goto $l2562;
            $l2946:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2948, 14);
        panda$core$Bit $tmp2949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2948);
        if ($tmp2949.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2951 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 0));
            target2950 = *$tmp2951;
            org$pandalanguage$pandac$IRNode** $tmp2953 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 8));
            value2952 = *$tmp2953;
            if (((panda$core$Bit) { value2952 != NULL }).value) {
            {
                panda$core$String* $tmp2962 = (($fn2961) target2950->$class->vtable[0])(target2950);
                $tmp2960 = $tmp2962;
                panda$core$String* $tmp2964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, &$s2963);
                $tmp2959 = $tmp2964;
                org$pandalanguage$pandac$Type* $tmp2967 = (($fn2966) target2950->$class->vtable[2])(target2950);
                $tmp2965 = $tmp2967;
                panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2959, ((panda$core$Object*) $tmp2965));
                $tmp2958 = $tmp2968;
                panda$core$String* $tmp2970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2958, &$s2969);
                $tmp2957 = $tmp2970;
                panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2957, ((panda$core$Object*) value2952));
                $tmp2956 = $tmp2971;
                panda$core$String* $tmp2973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2956, &$s2972);
                $tmp2955 = $tmp2973;
                $tmp2954 = $tmp2955;
                $returnValue2573 = $tmp2954;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2954));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2955));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2956));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2957));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2958));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2965));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2959));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2960));
                $tmp2564 = 17;
                goto $l2562;
                $l2974:;
                return $returnValue2573;
            }
            }
            panda$core$String* $tmp2982 = (($fn2981) target2950->$class->vtable[0])(target2950);
            $tmp2980 = $tmp2982;
            panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, &$s2983);
            $tmp2979 = $tmp2984;
            org$pandalanguage$pandac$Type* $tmp2987 = (($fn2986) target2950->$class->vtable[2])(target2950);
            $tmp2985 = $tmp2987;
            panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2979, ((panda$core$Object*) $tmp2985));
            $tmp2978 = $tmp2988;
            panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2978, &$s2989);
            $tmp2977 = $tmp2990;
            $tmp2976 = $tmp2977;
            $returnValue2573 = $tmp2976;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2976));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2977));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2978));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2985));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2979));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2980));
            $tmp2564 = 18;
            goto $l2562;
            $l2991:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2993, 15);
        panda$core$Bit $tmp2994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp2993);
        if ($tmp2994.value) {
        {
            panda$core$String** $tmp2996 = ((panda$core$String**) ((char*) $match$682_92565->$data + 16));
            label2995 = *$tmp2996;
            panda$collections$ImmutableArray** $tmp2998 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 24));
            statements2997 = *$tmp2998;
            org$pandalanguage$pandac$IRNode** $tmp3000 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 32));
            test2999 = *$tmp3000;
            int $tmp3003;
            {
                panda$core$MutableString* $tmp3007 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3007);
                $tmp3006 = $tmp3007;
                $tmp3005 = $tmp3006;
                result3004 = $tmp3005;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3005));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3006));
                if (((panda$core$Bit) { label2995 != NULL }).value) {
                {
                    panda$core$String* $tmp3010 = panda$core$String$convert$R$panda$core$String(label2995);
                    $tmp3009 = $tmp3010;
                    panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3009, &$s3011);
                    $tmp3008 = $tmp3012;
                    panda$core$MutableString$append$panda$core$String(result3004, $tmp3008);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3008));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3009));
                }
                }
                panda$core$MutableString$append$panda$core$String(result3004, &$s3013);
                {
                    int $tmp3016;
                    {
                        ITable* $tmp3020 = ((panda$collections$Iterable*) statements2997)->$class->itable;
                        while ($tmp3020->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3020 = $tmp3020->next;
                        }
                        $fn3022 $tmp3021 = $tmp3020->methods[0];
                        panda$collections$Iterator* $tmp3023 = $tmp3021(((panda$collections$Iterable*) statements2997));
                        $tmp3019 = $tmp3023;
                        $tmp3018 = $tmp3019;
                        Iter$750$173017 = $tmp3018;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3018));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3019));
                        $l3024:;
                        ITable* $tmp3027 = Iter$750$173017->$class->itable;
                        while ($tmp3027->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3027 = $tmp3027->next;
                        }
                        $fn3029 $tmp3028 = $tmp3027->methods[0];
                        panda$core$Bit $tmp3030 = $tmp3028(Iter$750$173017);
                        panda$core$Bit $tmp3031 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3030);
                        bool $tmp3026 = $tmp3031.value;
                        if (!$tmp3026) goto $l3025;
                        {
                            int $tmp3034;
                            {
                                ITable* $tmp3038 = Iter$750$173017->$class->itable;
                                while ($tmp3038->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3038 = $tmp3038->next;
                                }
                                $fn3040 $tmp3039 = $tmp3038->methods[1];
                                panda$core$Object* $tmp3041 = $tmp3039(Iter$750$173017);
                                $tmp3037 = $tmp3041;
                                $tmp3036 = ((org$pandalanguage$pandac$IRNode*) $tmp3037);
                                s3035 = $tmp3036;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3036));
                                panda$core$Panda$unref$panda$core$Object($tmp3037);
                                panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3035), &$s3043);
                                $tmp3042 = $tmp3044;
                                panda$core$MutableString$append$panda$core$String(result3004, $tmp3042);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3042));
                            }
                            $tmp3034 = -1;
                            goto $l3032;
                            $l3032:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3035));
                            s3035 = NULL;
                            switch ($tmp3034) {
                                case -1: goto $l3045;
                            }
                            $l3045:;
                        }
                        goto $l3024;
                        $l3025:;
                    }
                    $tmp3016 = -1;
                    goto $l3014;
                    $l3014:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$750$173017));
                    Iter$750$173017 = NULL;
                    switch ($tmp3016) {
                        case -1: goto $l3046;
                    }
                    $l3046:;
                }
                panda$core$String* $tmp3050 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3049, ((panda$core$Object*) test2999));
                $tmp3048 = $tmp3050;
                panda$core$String* $tmp3052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3048, &$s3051);
                $tmp3047 = $tmp3052;
                panda$core$MutableString$append$panda$core$String(result3004, $tmp3047);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3047));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3048));
                panda$core$String* $tmp3055 = panda$core$MutableString$finish$R$panda$core$String(result3004);
                $tmp3054 = $tmp3055;
                $tmp3053 = $tmp3054;
                $returnValue2573 = $tmp3053;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3053));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3054));
                $tmp3003 = 0;
                goto $l3001;
                $l3056:;
                $tmp2564 = 19;
                goto $l2562;
                $l3057:;
                return $returnValue2573;
            }
            $l3001:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3004));
            result3004 = NULL;
            switch ($tmp3003) {
                case 0: goto $l3056;
            }
            $l3059:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3060, 16);
        panda$core$Bit $tmp3061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3060);
        if ($tmp3061.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3063 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 0));
            m3062 = *$tmp3063;
            panda$collections$ImmutableArray** $tmp3065 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 8));
            args3064 = *$tmp3065;
            panda$core$String* $tmp3072 = (($fn3071) m3062->$class->vtable[0])(m3062);
            $tmp3070 = $tmp3072;
            panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3070, &$s3073);
            $tmp3069 = $tmp3074;
            ITable* $tmp3077 = ((panda$collections$CollectionView*) args3064)->$class->itable;
            while ($tmp3077->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3077 = $tmp3077->next;
            }
            $fn3079 $tmp3078 = $tmp3077->methods[2];
            panda$core$String* $tmp3080 = $tmp3078(((panda$collections$CollectionView*) args3064), &$s3076);
            $tmp3075 = $tmp3080;
            panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3069, $tmp3075);
            $tmp3068 = $tmp3081;
            panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3068, &$s3082);
            $tmp3067 = $tmp3083;
            $tmp3066 = $tmp3067;
            $returnValue2573 = $tmp3066;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3066));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3067));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3068));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3075));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3069));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3070));
            $tmp2564 = 20;
            goto $l2562;
            $l3084:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3086, 17);
        panda$core$Bit $tmp3087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3086);
        if ($tmp3087.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3089 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 0));
            expr3088 = *$tmp3089;
            org$pandalanguage$pandac$IRNode** $tmp3091 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 8));
            stmt3090 = *$tmp3091;
            panda$core$String* $tmp3098 = (($fn3097) expr3088->$class->vtable[0])(expr3088);
            $tmp3096 = $tmp3098;
            panda$core$String* $tmp3100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3099);
            $tmp3095 = $tmp3100;
            panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3095, ((panda$core$Object*) stmt3090));
            $tmp3094 = $tmp3101;
            panda$core$String* $tmp3103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, &$s3102);
            $tmp3093 = $tmp3103;
            $tmp3092 = $tmp3093;
            $returnValue2573 = $tmp3092;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3092));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3093));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3094));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3095));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3096));
            $tmp2564 = 21;
            goto $l2562;
            $l3104:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3106, 18);
        panda$core$Bit $tmp3107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3106);
        if ($tmp3107.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3109 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 24));
            base3108 = *$tmp3109;
            org$pandalanguage$pandac$FieldDecl** $tmp3111 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$682_92565->$data + 32));
            field3110 = *$tmp3111;
            if (((panda$core$Bit) { base3108 != NULL }).value) {
            {
                panda$core$String* $tmp3118 = (($fn3117) base3108->$class->vtable[0])(base3108);
                $tmp3116 = $tmp3118;
                panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3116, &$s3119);
                $tmp3115 = $tmp3120;
                panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3115, ((org$pandalanguage$pandac$Symbol*) field3110)->name);
                $tmp3114 = $tmp3121;
                panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3114, &$s3122);
                $tmp3113 = $tmp3123;
                $tmp3112 = $tmp3113;
                $returnValue2573 = $tmp3112;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3112));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3115));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3116));
                $tmp2564 = 22;
                goto $l2562;
                $l3124:;
                return $returnValue2573;
            }
            }
            $tmp3126 = ((org$pandalanguage$pandac$Symbol*) field3110)->name;
            $returnValue2573 = $tmp3126;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3126));
            $tmp2564 = 23;
            goto $l2562;
            $l3127:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3129, 19);
        panda$core$Bit $tmp3130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3129);
        if ($tmp3130.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3132 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 16));
            test3131 = *$tmp3132;
            panda$collections$ImmutableArray** $tmp3134 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 24));
            ifTrue3133 = *$tmp3134;
            org$pandalanguage$pandac$IRNode** $tmp3136 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 32));
            ifFalse3135 = *$tmp3136;
            int $tmp3139;
            {
                panda$core$MutableString* $tmp3143 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3146, ((panda$core$Object*) test3131));
                $tmp3145 = $tmp3147;
                panda$core$String* $tmp3149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3145, &$s3148);
                $tmp3144 = $tmp3149;
                panda$core$MutableString$init$panda$core$String($tmp3143, $tmp3144);
                $tmp3142 = $tmp3143;
                $tmp3141 = $tmp3142;
                result3140 = $tmp3141;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3141));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3142));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3144));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3145));
                {
                    int $tmp3152;
                    {
                        ITable* $tmp3156 = ((panda$collections$Iterable*) ifTrue3133)->$class->itable;
                        while ($tmp3156->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3156 = $tmp3156->next;
                        }
                        $fn3158 $tmp3157 = $tmp3156->methods[0];
                        panda$collections$Iterator* $tmp3159 = $tmp3157(((panda$collections$Iterable*) ifTrue3133));
                        $tmp3155 = $tmp3159;
                        $tmp3154 = $tmp3155;
                        Iter$766$173153 = $tmp3154;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3154));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3155));
                        $l3160:;
                        ITable* $tmp3163 = Iter$766$173153->$class->itable;
                        while ($tmp3163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3163 = $tmp3163->next;
                        }
                        $fn3165 $tmp3164 = $tmp3163->methods[0];
                        panda$core$Bit $tmp3166 = $tmp3164(Iter$766$173153);
                        panda$core$Bit $tmp3167 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3166);
                        bool $tmp3162 = $tmp3167.value;
                        if (!$tmp3162) goto $l3161;
                        {
                            int $tmp3170;
                            {
                                ITable* $tmp3174 = Iter$766$173153->$class->itable;
                                while ($tmp3174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3174 = $tmp3174->next;
                                }
                                $fn3176 $tmp3175 = $tmp3174->methods[1];
                                panda$core$Object* $tmp3177 = $tmp3175(Iter$766$173153);
                                $tmp3173 = $tmp3177;
                                $tmp3172 = ((org$pandalanguage$pandac$IRNode*) $tmp3173);
                                s3171 = $tmp3172;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3172));
                                panda$core$Panda$unref$panda$core$Object($tmp3173);
                                panda$core$String* $tmp3180 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3171), &$s3179);
                                $tmp3178 = $tmp3180;
                                panda$core$MutableString$append$panda$core$String(result3140, $tmp3178);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3178));
                            }
                            $tmp3170 = -1;
                            goto $l3168;
                            $l3168:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3171));
                            s3171 = NULL;
                            switch ($tmp3170) {
                                case -1: goto $l3181;
                            }
                            $l3181:;
                        }
                        goto $l3160;
                        $l3161:;
                    }
                    $tmp3152 = -1;
                    goto $l3150;
                    $l3150:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$766$173153));
                    Iter$766$173153 = NULL;
                    switch ($tmp3152) {
                        case -1: goto $l3182;
                    }
                    $l3182:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3184, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3183, $tmp3184);
                panda$core$MutableString$append$panda$core$Char8(result3140, $tmp3183);
                if (((panda$core$Bit) { ifFalse3135 != NULL }).value) {
                {
                    panda$core$String* $tmp3188 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3187, ((panda$core$Object*) ifFalse3135));
                    $tmp3186 = $tmp3188;
                    panda$core$String* $tmp3190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3186, &$s3189);
                    $tmp3185 = $tmp3190;
                    panda$core$MutableString$append$panda$core$String(result3140, $tmp3185);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3185));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3186));
                }
                }
                panda$core$String* $tmp3193 = panda$core$MutableString$finish$R$panda$core$String(result3140);
                $tmp3192 = $tmp3193;
                $tmp3191 = $tmp3192;
                $returnValue2573 = $tmp3191;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3191));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3192));
                $tmp3139 = 0;
                goto $l3137;
                $l3194:;
                $tmp2564 = 24;
                goto $l2562;
                $l3195:;
                return $returnValue2573;
            }
            $l3137:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3140));
            result3140 = NULL;
            switch ($tmp3139) {
                case 0: goto $l3194;
            }
            $l3197:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3198, 20);
        panda$core$Bit $tmp3199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3198);
        if ($tmp3199.value) {
        {
            panda$core$UInt64* $tmp3201 = ((panda$core$UInt64*) ((char*) $match$682_92565->$data + 24));
            value3200 = *$tmp3201;
            panda$core$String* $tmp3204 = panda$core$UInt64$convert$R$panda$core$String(value3200);
            $tmp3203 = $tmp3204;
            $tmp3202 = $tmp3203;
            $returnValue2573 = $tmp3202;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3202));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3203));
            $tmp2564 = 25;
            goto $l2562;
            $l3205:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3207, 21);
        panda$core$Bit $tmp3208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3207);
        if ($tmp3208.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3210 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 16));
            value3209 = *$tmp3210;
            panda$core$String* $tmp3215 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3214, ((panda$core$Object*) value3209));
            $tmp3213 = $tmp3215;
            panda$core$String* $tmp3217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3213, &$s3216);
            $tmp3212 = $tmp3217;
            $tmp3211 = $tmp3212;
            $returnValue2573 = $tmp3211;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3211));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3212));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3213));
            $tmp2564 = 26;
            goto $l2562;
            $l3218:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3220, 22);
        panda$core$Bit $tmp3221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3220);
        if ($tmp3221.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3223 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 16));
            value3222 = *$tmp3223;
            panda$core$String* $tmp3228 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3227, ((panda$core$Object*) value3222));
            $tmp3226 = $tmp3228;
            panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3226, &$s3229);
            $tmp3225 = $tmp3230;
            $tmp3224 = $tmp3225;
            $returnValue2573 = $tmp3224;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3224));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3225));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3226));
            $tmp2564 = 27;
            goto $l2562;
            $l3231:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3233, 23);
        panda$core$Bit $tmp3234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3233);
        if ($tmp3234.value) {
        {
            panda$core$String** $tmp3236 = ((panda$core$String**) ((char*) $match$682_92565->$data + 16));
            label3235 = *$tmp3236;
            panda$collections$ImmutableArray** $tmp3238 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 24));
            statements3237 = *$tmp3238;
            int $tmp3241;
            {
                panda$core$MutableString* $tmp3245 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3245);
                $tmp3244 = $tmp3245;
                $tmp3243 = $tmp3244;
                result3242 = $tmp3243;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3243));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3244));
                if (((panda$core$Bit) { label3235 != NULL }).value) {
                {
                    panda$core$String* $tmp3248 = panda$core$String$convert$R$panda$core$String(label3235);
                    $tmp3247 = $tmp3248;
                    panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3247, &$s3249);
                    $tmp3246 = $tmp3250;
                    panda$core$MutableString$append$panda$core$String(result3242, $tmp3246);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3246));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3247));
                }
                }
                panda$core$MutableString$append$panda$core$String(result3242, &$s3251);
                {
                    int $tmp3254;
                    {
                        ITable* $tmp3258 = ((panda$collections$Iterable*) statements3237)->$class->itable;
                        while ($tmp3258->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3258 = $tmp3258->next;
                        }
                        $fn3260 $tmp3259 = $tmp3258->methods[0];
                        panda$collections$Iterator* $tmp3261 = $tmp3259(((panda$collections$Iterable*) statements3237));
                        $tmp3257 = $tmp3261;
                        $tmp3256 = $tmp3257;
                        Iter$786$173255 = $tmp3256;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3256));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3257));
                        $l3262:;
                        ITable* $tmp3265 = Iter$786$173255->$class->itable;
                        while ($tmp3265->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3265 = $tmp3265->next;
                        }
                        $fn3267 $tmp3266 = $tmp3265->methods[0];
                        panda$core$Bit $tmp3268 = $tmp3266(Iter$786$173255);
                        panda$core$Bit $tmp3269 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3268);
                        bool $tmp3264 = $tmp3269.value;
                        if (!$tmp3264) goto $l3263;
                        {
                            int $tmp3272;
                            {
                                ITable* $tmp3276 = Iter$786$173255->$class->itable;
                                while ($tmp3276->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3276 = $tmp3276->next;
                                }
                                $fn3278 $tmp3277 = $tmp3276->methods[1];
                                panda$core$Object* $tmp3279 = $tmp3277(Iter$786$173255);
                                $tmp3275 = $tmp3279;
                                $tmp3274 = ((org$pandalanguage$pandac$IRNode*) $tmp3275);
                                s3273 = $tmp3274;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3274));
                                panda$core$Panda$unref$panda$core$Object($tmp3275);
                                panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3273), &$s3281);
                                $tmp3280 = $tmp3282;
                                panda$core$MutableString$append$panda$core$String(result3242, $tmp3280);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3280));
                            }
                            $tmp3272 = -1;
                            goto $l3270;
                            $l3270:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3273));
                            s3273 = NULL;
                            switch ($tmp3272) {
                                case -1: goto $l3283;
                            }
                            $l3283:;
                        }
                        goto $l3262;
                        $l3263:;
                    }
                    $tmp3254 = -1;
                    goto $l3252;
                    $l3252:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$786$173255));
                    Iter$786$173255 = NULL;
                    switch ($tmp3254) {
                        case -1: goto $l3284;
                    }
                    $l3284:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3286, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3285, $tmp3286);
                panda$core$MutableString$append$panda$core$Char8(result3242, $tmp3285);
                panda$core$String* $tmp3289 = panda$core$MutableString$finish$R$panda$core$String(result3242);
                $tmp3288 = $tmp3289;
                $tmp3287 = $tmp3288;
                $returnValue2573 = $tmp3287;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3287));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3288));
                $tmp3241 = 0;
                goto $l3239;
                $l3290:;
                $tmp2564 = 28;
                goto $l2562;
                $l3291:;
                return $returnValue2573;
            }
            $l3239:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3242));
            result3242 = NULL;
            switch ($tmp3241) {
                case 0: goto $l3290;
            }
            $l3293:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3294, 24);
        panda$core$Bit $tmp3295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3294);
        if ($tmp3295.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3297 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 16));
            value3296 = *$tmp3297;
            panda$collections$ImmutableArray** $tmp3299 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 24));
            whens3298 = *$tmp3299;
            panda$collections$ImmutableArray** $tmp3301 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 32));
            other3300 = *$tmp3301;
            int $tmp3304;
            {
                panda$core$MutableString* $tmp3308 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp3312 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3311, ((panda$core$Object*) value3296));
                $tmp3310 = $tmp3312;
                panda$core$String* $tmp3314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3310, &$s3313);
                $tmp3309 = $tmp3314;
                panda$core$MutableString$init$panda$core$String($tmp3308, $tmp3309);
                $tmp3307 = $tmp3308;
                $tmp3306 = $tmp3307;
                result3305 = $tmp3306;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3306));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3307));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3309));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3310));
                {
                    int $tmp3317;
                    {
                        ITable* $tmp3321 = ((panda$collections$Iterable*) whens3298)->$class->itable;
                        while ($tmp3321->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3321 = $tmp3321->next;
                        }
                        $fn3323 $tmp3322 = $tmp3321->methods[0];
                        panda$collections$Iterator* $tmp3324 = $tmp3322(((panda$collections$Iterable*) whens3298));
                        $tmp3320 = $tmp3324;
                        $tmp3319 = $tmp3320;
                        Iter$793$173318 = $tmp3319;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3319));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3320));
                        $l3325:;
                        ITable* $tmp3328 = Iter$793$173318->$class->itable;
                        while ($tmp3328->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3328 = $tmp3328->next;
                        }
                        $fn3330 $tmp3329 = $tmp3328->methods[0];
                        panda$core$Bit $tmp3331 = $tmp3329(Iter$793$173318);
                        panda$core$Bit $tmp3332 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3331);
                        bool $tmp3327 = $tmp3332.value;
                        if (!$tmp3327) goto $l3326;
                        {
                            int $tmp3335;
                            {
                                ITable* $tmp3339 = Iter$793$173318->$class->itable;
                                while ($tmp3339->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3339 = $tmp3339->next;
                                }
                                $fn3341 $tmp3340 = $tmp3339->methods[1];
                                panda$core$Object* $tmp3342 = $tmp3340(Iter$793$173318);
                                $tmp3338 = $tmp3342;
                                $tmp3337 = ((org$pandalanguage$pandac$IRNode*) $tmp3338);
                                w3336 = $tmp3337;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3337));
                                panda$core$Panda$unref$panda$core$Object($tmp3338);
                                panda$core$String* $tmp3345 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w3336), &$s3344);
                                $tmp3343 = $tmp3345;
                                panda$core$MutableString$append$panda$core$String(result3305, $tmp3343);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3343));
                            }
                            $tmp3335 = -1;
                            goto $l3333;
                            $l3333:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w3336));
                            w3336 = NULL;
                            switch ($tmp3335) {
                                case -1: goto $l3346;
                            }
                            $l3346:;
                        }
                        goto $l3325;
                        $l3326:;
                    }
                    $tmp3317 = -1;
                    goto $l3315;
                    $l3315:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$793$173318));
                    Iter$793$173318 = NULL;
                    switch ($tmp3317) {
                        case -1: goto $l3347;
                    }
                    $l3347:;
                }
                if (((panda$core$Bit) { other3300 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result3305, &$s3348);
                    {
                        int $tmp3351;
                        {
                            ITable* $tmp3355 = ((panda$collections$Iterable*) other3300)->$class->itable;
                            while ($tmp3355->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp3355 = $tmp3355->next;
                            }
                            $fn3357 $tmp3356 = $tmp3355->methods[0];
                            panda$collections$Iterator* $tmp3358 = $tmp3356(((panda$collections$Iterable*) other3300));
                            $tmp3354 = $tmp3358;
                            $tmp3353 = $tmp3354;
                            Iter$798$213352 = $tmp3353;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3353));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3354));
                            $l3359:;
                            ITable* $tmp3362 = Iter$798$213352->$class->itable;
                            while ($tmp3362->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3362 = $tmp3362->next;
                            }
                            $fn3364 $tmp3363 = $tmp3362->methods[0];
                            panda$core$Bit $tmp3365 = $tmp3363(Iter$798$213352);
                            panda$core$Bit $tmp3366 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3365);
                            bool $tmp3361 = $tmp3366.value;
                            if (!$tmp3361) goto $l3360;
                            {
                                int $tmp3369;
                                {
                                    ITable* $tmp3373 = Iter$798$213352->$class->itable;
                                    while ($tmp3373->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp3373 = $tmp3373->next;
                                    }
                                    $fn3375 $tmp3374 = $tmp3373->methods[1];
                                    panda$core$Object* $tmp3376 = $tmp3374(Iter$798$213352);
                                    $tmp3372 = $tmp3376;
                                    $tmp3371 = ((org$pandalanguage$pandac$IRNode*) $tmp3372);
                                    s3370 = $tmp3371;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3371));
                                    panda$core$Panda$unref$panda$core$Object($tmp3372);
                                    panda$core$String* $tmp3379 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3370), &$s3378);
                                    $tmp3377 = $tmp3379;
                                    panda$core$MutableString$append$panda$core$String(result3305, $tmp3377);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3377));
                                }
                                $tmp3369 = -1;
                                goto $l3367;
                                $l3367:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3370));
                                s3370 = NULL;
                                switch ($tmp3369) {
                                    case -1: goto $l3380;
                                }
                                $l3380:;
                            }
                            goto $l3359;
                            $l3360:;
                        }
                        $tmp3351 = -1;
                        goto $l3349;
                        $l3349:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$798$213352));
                        Iter$798$213352 = NULL;
                        switch ($tmp3351) {
                            case -1: goto $l3381;
                        }
                        $l3381:;
                    }
                }
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3383, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3382, $tmp3383);
                panda$core$MutableString$append$panda$core$Char8(result3305, $tmp3382);
                panda$core$String* $tmp3386 = panda$core$MutableString$finish$R$panda$core$String(result3305);
                $tmp3385 = $tmp3386;
                $tmp3384 = $tmp3385;
                $returnValue2573 = $tmp3384;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3384));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3385));
                $tmp3304 = 0;
                goto $l3302;
                $l3387:;
                $tmp2564 = 29;
                goto $l2562;
                $l3388:;
                return $returnValue2573;
            }
            $l3302:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3305));
            result3305 = NULL;
            switch ($tmp3304) {
                case 0: goto $l3387;
            }
            $l3390:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3391, 25);
        panda$core$Bit $tmp3392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3391);
        if ($tmp3392.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3394 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 24));
            target3393 = *$tmp3394;
            org$pandalanguage$pandac$MethodRef** $tmp3396 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$682_92565->$data + 32));
            m3395 = *$tmp3396;
            if (((panda$core$Bit) { target3393 != NULL }).value) {
            {
                panda$core$String* $tmp3403 = (($fn3402) target3393->$class->vtable[0])(target3393);
                $tmp3401 = $tmp3403;
                panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3401, &$s3404);
                $tmp3400 = $tmp3405;
                panda$core$String* $tmp3406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3400, ((org$pandalanguage$pandac$Symbol*) m3395->value)->name);
                $tmp3399 = $tmp3406;
                panda$core$String* $tmp3408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3399, &$s3407);
                $tmp3398 = $tmp3408;
                $tmp3397 = $tmp3398;
                $returnValue2573 = $tmp3397;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3397));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3398));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3399));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3400));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3401));
                $tmp2564 = 30;
                goto $l2562;
                $l3409:;
                return $returnValue2573;
            }
            }
            $tmp3411 = ((org$pandalanguage$pandac$Symbol*) m3395->value)->name;
            $returnValue2573 = $tmp3411;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3411));
            $tmp2564 = 31;
            goto $l2562;
            $l3412:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3414, 26);
        panda$core$Bit $tmp3415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3414);
        if ($tmp3415.value) {
        {
            panda$core$UInt64* $tmp3417 = ((panda$core$UInt64*) ((char*) $match$682_92565->$data + 24));
            value3416 = *$tmp3417;
            panda$core$UInt64$wrapper* $tmp3422;
            $tmp3422 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp3422->value = value3416;
            $tmp3421 = ((panda$core$Object*) $tmp3422);
            panda$core$String* $tmp3423 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3420, $tmp3421);
            $tmp3419 = $tmp3423;
            $tmp3418 = $tmp3419;
            $returnValue2573 = $tmp3418;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3418));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3419));
            panda$core$Panda$unref$panda$core$Object($tmp3421);
            $tmp2564 = 32;
            goto $l2562;
            $l3424:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3426, 27);
        panda$core$Bit $tmp3427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3426);
        if ($tmp3427.value) {
        {
            $tmp3428 = &$s3429;
            $returnValue2573 = $tmp3428;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3428));
            $tmp2564 = 33;
            goto $l2562;
            $l3430:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3432, 28);
        panda$core$Bit $tmp3433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3432);
        if ($tmp3433.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3435 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$682_92565->$data + 16));
            op3434 = *$tmp3435;
            org$pandalanguage$pandac$IRNode** $tmp3437 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 24));
            base3436 = *$tmp3437;
            panda$core$String* $tmp3443 = org$pandalanguage$pandac$parser$Token$Kind$convert$R$panda$core$String(op3434);
            $tmp3442 = $tmp3443;
            panda$core$String* $tmp3445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3442, &$s3444);
            $tmp3441 = $tmp3445;
            panda$core$String* $tmp3446 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3441, ((panda$core$Object*) base3436));
            $tmp3440 = $tmp3446;
            panda$core$String* $tmp3448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3440, &$s3447);
            $tmp3439 = $tmp3448;
            $tmp3438 = $tmp3439;
            $returnValue2573 = $tmp3438;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3438));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3440));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3441));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3442));
            $tmp2564 = 34;
            goto $l2562;
            $l3449:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3451, 29);
        panda$core$Bit $tmp3452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3451);
        if ($tmp3452.value) {
        {
            panda$core$String** $tmp3454 = ((panda$core$String**) ((char*) $match$682_92565->$data + 16));
            label3453 = *$tmp3454;
            org$pandalanguage$pandac$IRNode** $tmp3456 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 24));
            target3455 = *$tmp3456;
            org$pandalanguage$pandac$IRNode** $tmp3458 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 32));
            list3457 = *$tmp3458;
            panda$collections$ImmutableArray** $tmp3460 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 40));
            statements3459 = *$tmp3460;
            int $tmp3463;
            {
                panda$core$MutableString* $tmp3467 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3467);
                $tmp3466 = $tmp3467;
                $tmp3465 = $tmp3466;
                result3464 = $tmp3465;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3465));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3466));
                if (((panda$core$Bit) { label3453 != NULL }).value) {
                {
                    panda$core$String* $tmp3470 = panda$core$String$convert$R$panda$core$String(label3453);
                    $tmp3469 = $tmp3470;
                    panda$core$String* $tmp3472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3469, &$s3471);
                    $tmp3468 = $tmp3472;
                    panda$core$MutableString$append$panda$core$String(result3464, $tmp3468);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3468));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3469));
                }
                }
                panda$core$String* $tmp3478 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3477, ((panda$core$Object*) target3455));
                $tmp3476 = $tmp3478;
                panda$core$String* $tmp3480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3476, &$s3479);
                $tmp3475 = $tmp3480;
                panda$core$String* $tmp3481 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3475, ((panda$core$Object*) list3457));
                $tmp3474 = $tmp3481;
                panda$core$String* $tmp3483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3474, &$s3482);
                $tmp3473 = $tmp3483;
                panda$core$MutableString$append$panda$core$String(result3464, $tmp3473);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3473));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3474));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3475));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3476));
                {
                    int $tmp3486;
                    {
                        ITable* $tmp3490 = ((panda$collections$Iterable*) statements3459)->$class->itable;
                        while ($tmp3490->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3490 = $tmp3490->next;
                        }
                        $fn3492 $tmp3491 = $tmp3490->methods[0];
                        panda$collections$Iterator* $tmp3493 = $tmp3491(((panda$collections$Iterable*) statements3459));
                        $tmp3489 = $tmp3493;
                        $tmp3488 = $tmp3489;
                        Iter$821$173487 = $tmp3488;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3488));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3489));
                        $l3494:;
                        ITable* $tmp3497 = Iter$821$173487->$class->itable;
                        while ($tmp3497->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3497 = $tmp3497->next;
                        }
                        $fn3499 $tmp3498 = $tmp3497->methods[0];
                        panda$core$Bit $tmp3500 = $tmp3498(Iter$821$173487);
                        panda$core$Bit $tmp3501 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3500);
                        bool $tmp3496 = $tmp3501.value;
                        if (!$tmp3496) goto $l3495;
                        {
                            int $tmp3504;
                            {
                                ITable* $tmp3508 = Iter$821$173487->$class->itable;
                                while ($tmp3508->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3508 = $tmp3508->next;
                                }
                                $fn3510 $tmp3509 = $tmp3508->methods[1];
                                panda$core$Object* $tmp3511 = $tmp3509(Iter$821$173487);
                                $tmp3507 = $tmp3511;
                                $tmp3506 = ((org$pandalanguage$pandac$IRNode*) $tmp3507);
                                s3505 = $tmp3506;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3506));
                                panda$core$Panda$unref$panda$core$Object($tmp3507);
                                panda$core$String* $tmp3514 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3505), &$s3513);
                                $tmp3512 = $tmp3514;
                                panda$core$MutableString$append$panda$core$String(result3464, $tmp3512);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3512));
                            }
                            $tmp3504 = -1;
                            goto $l3502;
                            $l3502:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3505));
                            s3505 = NULL;
                            switch ($tmp3504) {
                                case -1: goto $l3515;
                            }
                            $l3515:;
                        }
                        goto $l3494;
                        $l3495:;
                    }
                    $tmp3486 = -1;
                    goto $l3484;
                    $l3484:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$821$173487));
                    Iter$821$173487 = NULL;
                    switch ($tmp3486) {
                        case -1: goto $l3516;
                    }
                    $l3516:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3518, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3517, $tmp3518);
                panda$core$MutableString$append$panda$core$Char8(result3464, $tmp3517);
                panda$core$String* $tmp3521 = panda$core$MutableString$finish$R$panda$core$String(result3464);
                $tmp3520 = $tmp3521;
                $tmp3519 = $tmp3520;
                $returnValue2573 = $tmp3519;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3519));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3520));
                $tmp3463 = 0;
                goto $l3461;
                $l3522:;
                $tmp2564 = 35;
                goto $l2562;
                $l3523:;
                return $returnValue2573;
            }
            $l3461:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3464));
            result3464 = NULL;
            switch ($tmp3463) {
                case 0: goto $l3522;
            }
            $l3525:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3526, 30);
        panda$core$Bit $tmp3527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3526);
        if ($tmp3527.value) {
        {
            panda$core$Real64* $tmp3529 = ((panda$core$Real64*) ((char*) $match$682_92565->$data + 24));
            value3528 = *$tmp3529;
            panda$core$String* $tmp3532 = panda$core$Real64$convert$R$panda$core$String(value3528);
            $tmp3531 = $tmp3532;
            $tmp3530 = $tmp3531;
            $returnValue2573 = $tmp3530;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3530));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3531));
            $tmp2564 = 36;
            goto $l2562;
            $l3533:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3535, 31);
        panda$core$Bit $tmp3536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3535);
        if ($tmp3536.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3538 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 16));
            value3537 = *$tmp3538;
            if (((panda$core$Bit) { value3537 != NULL }).value) {
            {
                panda$core$String* $tmp3543 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3542, ((panda$core$Object*) value3537));
                $tmp3541 = $tmp3543;
                panda$core$String* $tmp3545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3541, &$s3544);
                $tmp3540 = $tmp3545;
                $tmp3539 = $tmp3540;
                $returnValue2573 = $tmp3539;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3539));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3540));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3541));
                $tmp2564 = 37;
                goto $l2562;
                $l3546:;
                return $returnValue2573;
            }
            }
            $tmp3548 = &$s3549;
            $returnValue2573 = $tmp3548;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3548));
            $tmp2564 = 38;
            goto $l2562;
            $l3550:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3552, 32);
        panda$core$Bit $tmp3553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3552);
        if ($tmp3553.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3555 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92565->$data + 16));
            type3554 = *$tmp3555;
            panda$core$Int64* $tmp3557 = ((panda$core$Int64*) ((char*) $match$682_92565->$data + 24));
            id3556 = *$tmp3557;
            panda$core$Int64$wrapper* $tmp3563;
            $tmp3563 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3563->value = id3556;
            $tmp3562 = ((panda$core$Object*) $tmp3563);
            panda$core$String* $tmp3564 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3561, $tmp3562);
            $tmp3560 = $tmp3564;
            panda$core$String* $tmp3566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3560, &$s3565);
            $tmp3559 = $tmp3566;
            $tmp3558 = $tmp3559;
            $returnValue2573 = $tmp3558;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3558));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3559));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3560));
            panda$core$Panda$unref$panda$core$Object($tmp3562);
            $tmp2564 = 39;
            goto $l2562;
            $l3567:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3569, 33);
        panda$core$Bit $tmp3570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3569);
        if ($tmp3570.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3572 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 0));
            base3571 = *$tmp3572;
            panda$core$Int64* $tmp3574 = ((panda$core$Int64*) ((char*) $match$682_92565->$data + 8));
            id3573 = *$tmp3574;
            panda$core$Int64$wrapper* $tmp3582;
            $tmp3582 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3582->value = id3573;
            $tmp3581 = ((panda$core$Object*) $tmp3582);
            panda$core$String* $tmp3583 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3580, $tmp3581);
            $tmp3579 = $tmp3583;
            panda$core$String* $tmp3585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3579, &$s3584);
            $tmp3578 = $tmp3585;
            panda$core$String* $tmp3586 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3578, ((panda$core$Object*) base3571));
            $tmp3577 = $tmp3586;
            panda$core$String* $tmp3588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3577, &$s3587);
            $tmp3576 = $tmp3588;
            $tmp3575 = $tmp3576;
            $returnValue2573 = $tmp3575;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3575));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3576));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3577));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3578));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3579));
            panda$core$Panda$unref$panda$core$Object($tmp3581);
            $tmp2564 = 40;
            goto $l2562;
            $l3589:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3591, 34);
        panda$core$Bit $tmp3592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3591);
        if ($tmp3592.value) {
        {
            $tmp3593 = &$s3594;
            $returnValue2573 = $tmp3593;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3593));
            $tmp2564 = 41;
            goto $l2562;
            $l3595:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3597, 35);
        panda$core$Bit $tmp3598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3597);
        if ($tmp3598.value) {
        {
            $tmp3599 = &$s3600;
            $returnValue2573 = $tmp3599;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3599));
            $tmp2564 = 42;
            goto $l2562;
            $l3601:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3603, 36);
        panda$core$Bit $tmp3604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3603);
        if ($tmp3604.value) {
        {
            panda$core$String** $tmp3606 = ((panda$core$String**) ((char*) $match$682_92565->$data + 16));
            str3605 = *$tmp3606;
            panda$core$String* $tmp3610 = panda$core$String$format$panda$core$String$R$panda$core$String(str3605, &$s3609);
            $tmp3608 = $tmp3610;
            $tmp3607 = $tmp3608;
            $returnValue2573 = $tmp3607;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3607));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3608));
            $tmp2564 = 43;
            goto $l2562;
            $l3611:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3613, 37);
        panda$core$Bit $tmp3614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3613);
        if ($tmp3614.value) {
        {
            $tmp3615 = &$s3616;
            $returnValue2573 = $tmp3615;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3615));
            $tmp2564 = 44;
            goto $l2562;
            $l3617:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3619, 38);
        panda$core$Bit $tmp3620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3619);
        if ($tmp3620.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3622 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 16));
            test3621 = *$tmp3622;
            org$pandalanguage$pandac$IRNode** $tmp3624 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 24));
            ifTrue3623 = *$tmp3624;
            org$pandalanguage$pandac$IRNode** $tmp3626 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 32));
            ifFalse3625 = *$tmp3626;
            panda$core$String* $tmp3635 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3634, ((panda$core$Object*) test3621));
            $tmp3633 = $tmp3635;
            panda$core$String* $tmp3637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3633, &$s3636);
            $tmp3632 = $tmp3637;
            panda$core$String* $tmp3638 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3632, ((panda$core$Object*) ifTrue3623));
            $tmp3631 = $tmp3638;
            panda$core$String* $tmp3640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3631, &$s3639);
            $tmp3630 = $tmp3640;
            panda$core$String* $tmp3641 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3630, ((panda$core$Object*) ifFalse3625));
            $tmp3629 = $tmp3641;
            panda$core$String* $tmp3643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3629, &$s3642);
            $tmp3628 = $tmp3643;
            $tmp3627 = $tmp3628;
            $returnValue2573 = $tmp3627;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3627));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3628));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3629));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3630));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3631));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3632));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3633));
            $tmp2564 = 45;
            goto $l2562;
            $l3644:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3646, 39);
        panda$core$Bit $tmp3647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3646);
        if ($tmp3647.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3649 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92565->$data + 16));
            type3648 = *$tmp3649;
            panda$core$String* $tmp3652 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type3648);
            $tmp3651 = $tmp3652;
            $tmp3650 = $tmp3651;
            $returnValue2573 = $tmp3650;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3650));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3651));
            $tmp2564 = 46;
            goto $l2562;
            $l3653:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3655, 40);
        panda$core$Bit $tmp3656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3655);
        if ($tmp3656.value) {
        {
            panda$core$String** $tmp3658 = ((panda$core$String**) ((char*) $match$682_92565->$data + 16));
            name3657 = *$tmp3658;
            $tmp3659 = name3657;
            $returnValue2573 = $tmp3659;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3659));
            $tmp2564 = 47;
            goto $l2562;
            $l3660:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3662, 41);
        panda$core$Bit $tmp3663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3662);
        if ($tmp3663.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3665 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 24));
            base3664 = *$tmp3665;
            panda$collections$ImmutableArray** $tmp3667 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 32));
            args3666 = *$tmp3667;
            panda$core$String* $tmp3674 = (($fn3673) base3664->$class->vtable[0])(base3664);
            $tmp3672 = $tmp3674;
            panda$core$String* $tmp3676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3672, &$s3675);
            $tmp3671 = $tmp3676;
            ITable* $tmp3678 = ((panda$collections$CollectionView*) args3666)->$class->itable;
            while ($tmp3678->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3678 = $tmp3678->next;
            }
            $fn3680 $tmp3679 = $tmp3678->methods[1];
            panda$core$String* $tmp3681 = $tmp3679(((panda$collections$CollectionView*) args3666));
            $tmp3677 = $tmp3681;
            panda$core$String* $tmp3682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3671, $tmp3677);
            $tmp3670 = $tmp3682;
            panda$core$String* $tmp3684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3670, &$s3683);
            $tmp3669 = $tmp3684;
            $tmp3668 = $tmp3669;
            $returnValue2573 = $tmp3668;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3668));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3669));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3670));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3677));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3671));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3672));
            $tmp2564 = 48;
            goto $l2562;
            $l3685:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3687, 42);
        panda$core$Bit $tmp3688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3687);
        if ($tmp3688.value) {
        {
            panda$collections$ImmutableArray** $tmp3690 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 16));
            params3689 = *$tmp3690;
            org$pandalanguage$pandac$ASTNode** $tmp3692 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$682_92565->$data + 24));
            body3691 = *$tmp3692;
            ITable* $tmp3700 = ((panda$collections$CollectionView*) params3689)->$class->itable;
            while ($tmp3700->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3700 = $tmp3700->next;
            }
            $fn3702 $tmp3701 = $tmp3700->methods[1];
            panda$core$String* $tmp3703 = $tmp3701(((panda$collections$CollectionView*) params3689));
            $tmp3699 = $tmp3703;
            panda$core$String* $tmp3704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3698, $tmp3699);
            $tmp3697 = $tmp3704;
            panda$core$String* $tmp3706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3697, &$s3705);
            $tmp3696 = $tmp3706;
            panda$core$String* $tmp3707 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3696, ((panda$core$Object*) body3691));
            $tmp3695 = $tmp3707;
            panda$core$String* $tmp3709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3695, &$s3708);
            $tmp3694 = $tmp3709;
            $tmp3693 = $tmp3694;
            $returnValue2573 = $tmp3693;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3693));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3694));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3695));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3696));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3697));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3699));
            $tmp2564 = 49;
            goto $l2562;
            $l3710:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3712, 43);
        panda$core$Bit $tmp3713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3712);
        if ($tmp3713.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3715 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 24));
            target3714 = *$tmp3715;
            panda$collections$ImmutableArray** $tmp3717 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 32));
            methods3716 = *$tmp3717;
            panda$collections$ImmutableArray** $tmp3719 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 40));
            args3718 = *$tmp3719;
            if (((panda$core$Bit) { target3714 != NULL }).value) {
            {
                panda$core$String* $tmp3728 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3727, ((panda$core$Object*) target3714));
                $tmp3726 = $tmp3728;
                panda$core$String* $tmp3730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3726, &$s3729);
                $tmp3725 = $tmp3730;
                panda$core$Int64$init$builtin_int64(&$tmp3732, 0);
                panda$core$Object* $tmp3733 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3716, $tmp3732);
                $tmp3731 = $tmp3733;
                panda$core$String* $tmp3734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3725, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3731)->value)->name);
                $tmp3724 = $tmp3734;
                panda$core$String* $tmp3736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3724, &$s3735);
                $tmp3723 = $tmp3736;
                ITable* $tmp3738 = ((panda$collections$CollectionView*) args3718)->$class->itable;
                while ($tmp3738->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp3738 = $tmp3738->next;
                }
                $fn3740 $tmp3739 = $tmp3738->methods[1];
                panda$core$String* $tmp3741 = $tmp3739(((panda$collections$CollectionView*) args3718));
                $tmp3737 = $tmp3741;
                panda$core$String* $tmp3742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3723, $tmp3737);
                $tmp3722 = $tmp3742;
                panda$core$String* $tmp3744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3722, &$s3743);
                $tmp3721 = $tmp3744;
                $tmp3720 = $tmp3721;
                $returnValue2573 = $tmp3720;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3720));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3721));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3722));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3737));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3723));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3724));
                panda$core$Panda$unref$panda$core$Object($tmp3731);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3725));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3726));
                $tmp2564 = 50;
                goto $l2562;
                $l3745:;
                return $returnValue2573;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3754, 0);
                panda$core$Object* $tmp3755 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3716, $tmp3754);
                $tmp3753 = $tmp3755;
                panda$core$String* $tmp3756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3752, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3753)->value)->name);
                $tmp3751 = $tmp3756;
                panda$core$String* $tmp3758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3751, &$s3757);
                $tmp3750 = $tmp3758;
                ITable* $tmp3760 = ((panda$collections$CollectionView*) args3718)->$class->itable;
                while ($tmp3760->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp3760 = $tmp3760->next;
                }
                $fn3762 $tmp3761 = $tmp3760->methods[1];
                panda$core$String* $tmp3763 = $tmp3761(((panda$collections$CollectionView*) args3718));
                $tmp3759 = $tmp3763;
                panda$core$String* $tmp3764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3750, $tmp3759);
                $tmp3749 = $tmp3764;
                panda$core$String* $tmp3766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3749, &$s3765);
                $tmp3748 = $tmp3766;
                $tmp3747 = $tmp3748;
                $returnValue2573 = $tmp3747;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3747));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3748));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3749));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3759));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3750));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3751));
                panda$core$Panda$unref$panda$core$Object($tmp3753);
                $tmp2564 = 51;
                goto $l2562;
                $l3767:;
                return $returnValue2573;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3769, 44);
        panda$core$Bit $tmp3770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3769);
        if ($tmp3770.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3772 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 16));
            target3771 = *$tmp3772;
            panda$collections$ImmutableArray** $tmp3774 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 24));
            methods3773 = *$tmp3774;
            if (((panda$core$Bit) { target3771 != NULL }).value) {
            {
                panda$core$String* $tmp3781 = (($fn3780) target3771->$class->vtable[0])(target3771);
                $tmp3779 = $tmp3781;
                panda$core$String* $tmp3783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3779, &$s3782);
                $tmp3778 = $tmp3783;
                panda$core$Int64$init$builtin_int64(&$tmp3785, 0);
                panda$core$Object* $tmp3786 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3773, $tmp3785);
                $tmp3784 = $tmp3786;
                panda$core$String* $tmp3787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3778, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3784)->value)->name);
                $tmp3777 = $tmp3787;
                panda$core$String* $tmp3789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3777, &$s3788);
                $tmp3776 = $tmp3789;
                $tmp3775 = $tmp3776;
                $returnValue2573 = $tmp3775;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3775));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3776));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3777));
                panda$core$Panda$unref$panda$core$Object($tmp3784);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3778));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3779));
                $tmp2564 = 52;
                goto $l2562;
                $l3790:;
                return $returnValue2573;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3796, 0);
                panda$core$Object* $tmp3797 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3773, $tmp3796);
                $tmp3795 = $tmp3797;
                panda$core$String* $tmp3798 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3795)->value)->name);
                $tmp3794 = $tmp3798;
                panda$core$String* $tmp3800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3794, &$s3799);
                $tmp3793 = $tmp3800;
                $tmp3792 = $tmp3793;
                $returnValue2573 = $tmp3792;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3792));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3793));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3794));
                panda$core$Panda$unref$panda$core$Object($tmp3795);
                $tmp2564 = 53;
                goto $l2562;
                $l3801:;
                return $returnValue2573;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3803, 45);
        panda$core$Bit $tmp3804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3803);
        if ($tmp3804.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3806 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 16));
            start3805 = *$tmp3806;
            org$pandalanguage$pandac$IRNode** $tmp3808 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 24));
            end3807 = *$tmp3808;
            panda$core$Bit* $tmp3810 = ((panda$core$Bit*) ((char*) $match$682_92565->$data + 32));
            inclusive3809 = *$tmp3810;
            org$pandalanguage$pandac$IRNode** $tmp3812 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 33));
            step3811 = *$tmp3812;
            int $tmp3815;
            {
                panda$core$MutableString* $tmp3819 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3819);
                $tmp3818 = $tmp3819;
                $tmp3817 = $tmp3818;
                result3816 = $tmp3817;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3817));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3818));
                if (((panda$core$Bit) { start3805 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result3816, ((panda$core$Object*) start3805));
                }
                }
                if (inclusive3809.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result3816, &$s3820);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result3816, &$s3821);
                }
                }
                if (((panda$core$Bit) { end3807 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result3816, ((panda$core$Object*) end3807));
                }
                }
                if (((panda$core$Bit) { step3811 != NULL }).value) {
                {
                    panda$core$String* $tmp3825 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3824, ((panda$core$Object*) step3811));
                    $tmp3823 = $tmp3825;
                    panda$core$String* $tmp3827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3823, &$s3826);
                    $tmp3822 = $tmp3827;
                    panda$core$MutableString$append$panda$core$String(result3816, $tmp3822);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3822));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3823));
                }
                }
                panda$core$String* $tmp3830 = panda$core$MutableString$finish$R$panda$core$String(result3816);
                $tmp3829 = $tmp3830;
                $tmp3828 = $tmp3829;
                $returnValue2573 = $tmp3828;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3828));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3829));
                $tmp3815 = 0;
                goto $l3813;
                $l3831:;
                $tmp2564 = 54;
                goto $l2562;
                $l3832:;
                return $returnValue2573;
            }
            $l3813:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3816));
            result3816 = NULL;
            switch ($tmp3815) {
                case 0: goto $l3831;
            }
            $l3834:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3835, 46);
        panda$core$Bit $tmp3836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3835);
        if ($tmp3836.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp3838 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$682_92565->$data + 16));
            kind3837 = *$tmp3838;
            panda$collections$ImmutableArray** $tmp3840 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 24));
            decls3839 = *$tmp3840;
            int $tmp3843;
            {
                panda$core$MutableString* $tmp3847 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3847);
                $tmp3846 = $tmp3847;
                $tmp3845 = $tmp3846;
                result3844 = $tmp3845;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3845));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3846));
                {
                    $match$889_173848 = kind3837;
                    panda$core$Int64$init$builtin_int64(&$tmp3849, 0);
                    panda$core$Bit $tmp3850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173848.$rawValue, $tmp3849);
                    if ($tmp3850.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3844, &$s3851);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3852, 1);
                    panda$core$Bit $tmp3853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173848.$rawValue, $tmp3852);
                    if ($tmp3853.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3844, &$s3854);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3855, 2);
                    panda$core$Bit $tmp3856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173848.$rawValue, $tmp3855);
                    if ($tmp3856.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3844, &$s3857);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3858, 3);
                    panda$core$Bit $tmp3859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173848.$rawValue, $tmp3858);
                    if ($tmp3859.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3844, &$s3860);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp3862 = ((panda$collections$CollectionView*) decls3839)->$class->itable;
                while ($tmp3862->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp3862 = $tmp3862->next;
                }
                $fn3864 $tmp3863 = $tmp3862->methods[1];
                panda$core$String* $tmp3865 = $tmp3863(((panda$collections$CollectionView*) decls3839));
                $tmp3861 = $tmp3865;
                panda$core$MutableString$append$panda$core$String(result3844, $tmp3861);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3861));
                panda$core$String* $tmp3868 = panda$core$MutableString$finish$R$panda$core$String(result3844);
                $tmp3867 = $tmp3868;
                $tmp3866 = $tmp3867;
                $returnValue2573 = $tmp3866;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3866));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3867));
                $tmp3843 = 0;
                goto $l3841;
                $l3869:;
                $tmp2564 = 55;
                goto $l2562;
                $l3870:;
                return $returnValue2573;
            }
            $l3841:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3844));
            result3844 = NULL;
            switch ($tmp3843) {
                case 0: goto $l3869;
            }
            $l3872:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3873, 47);
        panda$core$Bit $tmp3874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3873);
        if ($tmp3874.value) {
        {
            panda$core$String** $tmp3876 = ((panda$core$String**) ((char*) $match$682_92565->$data + 16));
            name3875 = *$tmp3876;
            $tmp3877 = name3875;
            $returnValue2573 = $tmp3877;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3877));
            $tmp2564 = 56;
            goto $l2562;
            $l3878:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3880, 48);
        panda$core$Bit $tmp3881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3880);
        if ($tmp3881.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3883 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$682_92565->$data + 16));
            variable3882 = *$tmp3883;
            panda$core$String* $tmp3887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) variable3882)->name, &$s3886);
            $tmp3885 = $tmp3887;
            $tmp3884 = $tmp3885;
            $returnValue2573 = $tmp3884;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3884));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3885));
            $tmp2564 = 57;
            goto $l2562;
            $l3888:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3890, 49);
        panda$core$Bit $tmp3891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3890);
        if ($tmp3891.value) {
        {
            panda$collections$ImmutableArray** $tmp3893 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 16));
            tests3892 = *$tmp3893;
            panda$collections$ImmutableArray** $tmp3895 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 24));
            statements3894 = *$tmp3895;
            ITable* $tmp3903 = ((panda$collections$CollectionView*) tests3892)->$class->itable;
            while ($tmp3903->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3903 = $tmp3903->next;
            }
            $fn3905 $tmp3904 = $tmp3903->methods[1];
            panda$core$String* $tmp3906 = $tmp3904(((panda$collections$CollectionView*) tests3892));
            $tmp3902 = $tmp3906;
            panda$core$String* $tmp3907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3901, $tmp3902);
            $tmp3900 = $tmp3907;
            panda$core$String* $tmp3909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3900, &$s3908);
            $tmp3899 = $tmp3909;
            ITable* $tmp3912 = ((panda$collections$CollectionView*) statements3894)->$class->itable;
            while ($tmp3912->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3912 = $tmp3912->next;
            }
            $fn3914 $tmp3913 = $tmp3912->methods[2];
            panda$core$String* $tmp3915 = $tmp3913(((panda$collections$CollectionView*) statements3894), &$s3911);
            $tmp3910 = $tmp3915;
            panda$core$String* $tmp3916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3899, $tmp3910);
            $tmp3898 = $tmp3916;
            panda$core$String* $tmp3918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3898, &$s3917);
            $tmp3897 = $tmp3918;
            $tmp3896 = $tmp3897;
            $returnValue2573 = $tmp3896;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3896));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3897));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3898));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3910));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3899));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3900));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3902));
            $tmp2564 = 58;
            goto $l2562;
            $l3919:;
            return $returnValue2573;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3921, 50);
        panda$core$Bit $tmp3922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92565->$rawValue, $tmp3921);
        if ($tmp3922.value) {
        {
            panda$core$String** $tmp3924 = ((panda$core$String**) ((char*) $match$682_92565->$data + 16));
            label3923 = *$tmp3924;
            org$pandalanguage$pandac$IRNode** $tmp3926 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92565->$data + 24));
            test3925 = *$tmp3926;
            panda$collections$ImmutableArray** $tmp3928 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92565->$data + 32));
            statements3927 = *$tmp3928;
            int $tmp3931;
            {
                panda$core$MutableString* $tmp3935 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3935);
                $tmp3934 = $tmp3935;
                $tmp3933 = $tmp3934;
                result3932 = $tmp3933;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3933));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3934));
                if (((panda$core$Bit) { label3923 != NULL }).value) {
                {
                    panda$core$String* $tmp3938 = panda$core$String$convert$R$panda$core$String(label3923);
                    $tmp3937 = $tmp3938;
                    panda$core$String* $tmp3940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3937, &$s3939);
                    $tmp3936 = $tmp3940;
                    panda$core$MutableString$append$panda$core$String(result3932, $tmp3936);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3936));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3937));
                }
                }
                panda$core$String* $tmp3944 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3943, ((panda$core$Object*) test3925));
                $tmp3942 = $tmp3944;
                panda$core$String* $tmp3946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3942, &$s3945);
                $tmp3941 = $tmp3946;
                panda$core$MutableString$append$panda$core$String(result3932, $tmp3941);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3941));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3942));
                {
                    int $tmp3949;
                    {
                        ITable* $tmp3953 = ((panda$collections$Iterable*) statements3927)->$class->itable;
                        while ($tmp3953->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3953 = $tmp3953->next;
                        }
                        $fn3955 $tmp3954 = $tmp3953->methods[0];
                        panda$collections$Iterator* $tmp3956 = $tmp3954(((panda$collections$Iterable*) statements3927));
                        $tmp3952 = $tmp3956;
                        $tmp3951 = $tmp3952;
                        Iter$909$173950 = $tmp3951;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3951));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3952));
                        $l3957:;
                        ITable* $tmp3960 = Iter$909$173950->$class->itable;
                        while ($tmp3960->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3960 = $tmp3960->next;
                        }
                        $fn3962 $tmp3961 = $tmp3960->methods[0];
                        panda$core$Bit $tmp3963 = $tmp3961(Iter$909$173950);
                        panda$core$Bit $tmp3964 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3963);
                        bool $tmp3959 = $tmp3964.value;
                        if (!$tmp3959) goto $l3958;
                        {
                            int $tmp3967;
                            {
                                ITable* $tmp3971 = Iter$909$173950->$class->itable;
                                while ($tmp3971->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3971 = $tmp3971->next;
                                }
                                $fn3973 $tmp3972 = $tmp3971->methods[1];
                                panda$core$Object* $tmp3974 = $tmp3972(Iter$909$173950);
                                $tmp3970 = $tmp3974;
                                $tmp3969 = ((org$pandalanguage$pandac$IRNode*) $tmp3970);
                                s3968 = $tmp3969;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3969));
                                panda$core$Panda$unref$panda$core$Object($tmp3970);
                                panda$core$String* $tmp3977 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3968), &$s3976);
                                $tmp3975 = $tmp3977;
                                panda$core$MutableString$append$panda$core$String(result3932, $tmp3975);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3975));
                            }
                            $tmp3967 = -1;
                            goto $l3965;
                            $l3965:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3968));
                            s3968 = NULL;
                            switch ($tmp3967) {
                                case -1: goto $l3978;
                            }
                            $l3978:;
                        }
                        goto $l3957;
                        $l3958:;
                    }
                    $tmp3949 = -1;
                    goto $l3947;
                    $l3947:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$909$173950));
                    Iter$909$173950 = NULL;
                    switch ($tmp3949) {
                        case -1: goto $l3979;
                    }
                    $l3979:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3981, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3980, $tmp3981);
                panda$core$MutableString$append$panda$core$Char8(result3932, $tmp3980);
                panda$core$String* $tmp3984 = panda$core$MutableString$finish$R$panda$core$String(result3932);
                $tmp3983 = $tmp3984;
                $tmp3982 = $tmp3983;
                $returnValue2573 = $tmp3982;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3982));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3983));
                $tmp3931 = 0;
                goto $l3929;
                $l3985:;
                $tmp2564 = 59;
                goto $l2562;
                $l3986:;
                return $returnValue2573;
            }
            $l3929:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3932));
            result3932 = NULL;
            switch ($tmp3931) {
                case 0: goto $l3985;
            }
            $l3988:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp3989, false);
            if ($tmp3989.value) goto $l3990; else goto $l3991;
            $l3991:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3992, (panda$core$Int64) { 915 });
            abort();
            $l3990:;
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
    $tmp2564 = -1;
    goto $l2562;
    $l2562:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2566));
    switch ($tmp2564) {
        case 18: goto $l2991;
        case 59: goto $l3986;
        case 7: goto $l2796;
        case 27: goto $l3231;
        case 6: goto $l2782;
        case 30: goto $l3409;
        case 5: goto $l2692;
        case 4: goto $l2639;
        case 24: goto $l3195;
        case 36: goto $l3533;
        case 35: goto $l3523;
        case 25: goto $l3205;
        case 11: goto $l2853;
        case 8: goto $l2800;
        case 55: goto $l3870;
        case 2: goto $l2601;
        case 0: goto $l2586;
        case 20: goto $l3084;
        case 28: goto $l3291;
        case 21: goto $l3104;
        case 53: goto $l3801;
        case 50: goto $l3745;
        case 40: goto $l3589;
        case 45: goto $l3644;
        case 49: goto $l3710;
        case 57: goto $l3888;
        case 48: goto $l3685;
        case 56: goto $l3878;
        case 12: goto $l2882;
        case 29: goto $l3388;
        case 43: goto $l3611;
        case 16: goto $l2946;
        case 52: goto $l3790;
        case 39: goto $l3567;
        case 54: goto $l3832;
        case 17: goto $l2974;
        case 10: goto $l2844;
        case 58: goto $l3919;
        case 33: goto $l3430;
        case 26: goto $l3218;
        case 38: goto $l3550;
        case 47: goto $l3660;
        case 13: goto $l2916;
        case 41: goto $l3595;
        case 22: goto $l3124;
        case 32: goto $l3424;
        case 44: goto $l3617;
        case 19: goto $l3057;
        case 3: goto $l2630;
        case -1: goto $l3993;
        case 1: goto $l2595;
        case 9: goto $l2824;
        case 15: goto $l2942;
        case 14: goto $l2929;
        case 23: goto $l3127;
        case 34: goto $l3449;
        case 46: goto $l3653;
        case 37: goto $l3546;
        case 31: goto $l3412;
        case 51: goto $l3767;
        case 42: goto $l3601;
    }
    $l3993:;
    abort();
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_14000 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp4001;
    panda$core$Int64 $tmp4002;
    org$pandalanguage$pandac$Position _f04004;
    org$pandalanguage$pandac$IRNode* _f14006 = NULL;
    org$pandalanguage$pandac$IRNode* _f24008 = NULL;
    panda$core$Int64 $tmp4010;
    org$pandalanguage$pandac$Position _f04012;
    org$pandalanguage$pandac$Type* _f14014 = NULL;
    panda$core$Int64 $tmp4016;
    org$pandalanguage$pandac$Position _f04018;
    org$pandalanguage$pandac$Type* _f14020 = NULL;
    org$pandalanguage$pandac$IRNode* _f24022 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f34024;
    org$pandalanguage$pandac$IRNode* _f44026 = NULL;
    panda$core$Int64 $tmp4028;
    org$pandalanguage$pandac$Position _f04030;
    org$pandalanguage$pandac$Type* _f14032 = NULL;
    panda$core$Bit _f24034;
    panda$core$Int64 $tmp4036;
    org$pandalanguage$pandac$Position _f04038;
    panda$collections$ImmutableArray* _f14040 = NULL;
    panda$core$Int64 $tmp4042;
    org$pandalanguage$pandac$Position _f04044;
    panda$collections$ImmutableArray* _f14046 = NULL;
    panda$collections$ImmutableArray* _f24048 = NULL;
    panda$core$Int64 $tmp4050;
    org$pandalanguage$pandac$Position _f04052;
    panda$core$String* _f14054 = NULL;
    panda$core$Int64 $tmp4056;
    org$pandalanguage$pandac$Position _f04058;
    org$pandalanguage$pandac$Type* _f14060 = NULL;
    org$pandalanguage$pandac$MethodRef* _f24062 = NULL;
    panda$collections$ImmutableArray* _f34064 = NULL;
    panda$core$Int64 $tmp4066;
    org$pandalanguage$pandac$Position _f04068;
    org$pandalanguage$pandac$IRNode* _f14070 = NULL;
    org$pandalanguage$pandac$Type* _f24072 = NULL;
    panda$core$Bit _f34074;
    panda$core$Int64 $tmp4076;
    org$pandalanguage$pandac$Position _f04078;
    org$pandalanguage$pandac$ChoiceCase* _f14080 = NULL;
    panda$core$Int64 $tmp4082;
    org$pandalanguage$pandac$Position _f04084;
    org$pandalanguage$pandac$IRNode* _f14086 = NULL;
    org$pandalanguage$pandac$ChoiceCase* _f24088 = NULL;
    panda$core$Int64 _f34090;
    panda$core$Int64 $tmp4092;
    org$pandalanguage$pandac$Position _f04094;
    org$pandalanguage$pandac$Type* _f14096 = NULL;
    org$pandalanguage$pandac$IRNode* _f24098 = NULL;
    panda$core$Int64 $tmp4100;
    org$pandalanguage$pandac$Position _f04102;
    org$pandalanguage$pandac$Type* _f14104 = NULL;
    panda$core$Int64 $tmp4106;
    org$pandalanguage$pandac$Position _f04108;
    panda$core$String* _f14110 = NULL;
    panda$core$Int64 $tmp4112;
    org$pandalanguage$pandac$IRNode* _f04114 = NULL;
    org$pandalanguage$pandac$IRNode* _f14116 = NULL;
    panda$core$Int64 $tmp4118;
    org$pandalanguage$pandac$Position _f04120;
    panda$core$String* _f14122 = NULL;
    panda$collections$ImmutableArray* _f24124 = NULL;
    org$pandalanguage$pandac$IRNode* _f34126 = NULL;
    panda$core$Int64 $tmp4128;
    org$pandalanguage$pandac$IRNode* _f04130 = NULL;
    panda$collections$ImmutableArray* _f14132 = NULL;
    panda$core$Int64 $tmp4134;
    org$pandalanguage$pandac$IRNode* _f04136 = NULL;
    org$pandalanguage$pandac$IRNode* _f14138 = NULL;
    panda$core$Int64 $tmp4140;
    org$pandalanguage$pandac$Position _f04142;
    org$pandalanguage$pandac$Type* _f14144 = NULL;
    org$pandalanguage$pandac$IRNode* _f24146 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f34148 = NULL;
    panda$core$Int64 $tmp4150;
    org$pandalanguage$pandac$Position _f04152;
    org$pandalanguage$pandac$IRNode* _f14154 = NULL;
    panda$collections$ImmutableArray* _f24156 = NULL;
    org$pandalanguage$pandac$IRNode* _f34158 = NULL;
    panda$core$Int64 $tmp4160;
    org$pandalanguage$pandac$Position _f04162;
    org$pandalanguage$pandac$Type* _f14164 = NULL;
    panda$core$UInt64 _f24166;
    panda$core$Int64 $tmp4168;
    org$pandalanguage$pandac$Position _f04170;
    org$pandalanguage$pandac$IRNode* _f14172 = NULL;
    panda$core$Int64 $tmp4174;
    org$pandalanguage$pandac$Position _f04176;
    org$pandalanguage$pandac$IRNode* _f14178 = NULL;
    panda$core$Int64 $tmp4180;
    org$pandalanguage$pandac$Position _f04182;
    panda$core$String* _f14184 = NULL;
    panda$collections$ImmutableArray* _f24186 = NULL;
    panda$core$Int64 $tmp4188;
    org$pandalanguage$pandac$Position _f04190;
    org$pandalanguage$pandac$IRNode* _f14192 = NULL;
    panda$collections$ImmutableArray* _f24194 = NULL;
    panda$collections$ImmutableArray* _f34196 = NULL;
    panda$core$Int64 $tmp4198;
    org$pandalanguage$pandac$Position _f04200;
    org$pandalanguage$pandac$Type* _f14202 = NULL;
    org$pandalanguage$pandac$IRNode* _f24204 = NULL;
    org$pandalanguage$pandac$MethodRef* _f34206 = NULL;
    panda$core$Int64 $tmp4208;
    org$pandalanguage$pandac$Position _f04210;
    org$pandalanguage$pandac$Type* _f14212 = NULL;
    panda$core$UInt64 _f24214;
    panda$core$Int64 $tmp4216;
    org$pandalanguage$pandac$Position _f04218;
    org$pandalanguage$pandac$Type* _f14220 = NULL;
    panda$core$Int64 $tmp4222;
    org$pandalanguage$pandac$Position _f04224;
    org$pandalanguage$pandac$parser$Token$Kind _f14226;
    org$pandalanguage$pandac$IRNode* _f24228 = NULL;
    panda$core$Int64 $tmp4230;
    org$pandalanguage$pandac$Position _f04232;
    panda$core$String* _f14234 = NULL;
    org$pandalanguage$pandac$IRNode* _f24236 = NULL;
    org$pandalanguage$pandac$IRNode* _f34238 = NULL;
    panda$collections$ImmutableArray* _f44240 = NULL;
    panda$core$Int64 $tmp4242;
    org$pandalanguage$pandac$Position _f04244;
    org$pandalanguage$pandac$Type* _f14246 = NULL;
    panda$core$Real64 _f24248;
    panda$core$Int64 $tmp4250;
    org$pandalanguage$pandac$Position _f04252;
    org$pandalanguage$pandac$IRNode* _f14254 = NULL;
    panda$core$Int64 $tmp4256;
    org$pandalanguage$pandac$Position _f04258;
    org$pandalanguage$pandac$Type* _f14260 = NULL;
    panda$core$Int64 _f24262;
    panda$core$Int64 $tmp4264;
    org$pandalanguage$pandac$IRNode* _f04266 = NULL;
    panda$core$Int64 _f14268;
    panda$core$Int64 $tmp4270;
    org$pandalanguage$pandac$Position _f04272;
    org$pandalanguage$pandac$Type* _f14274 = NULL;
    panda$core$Int64 $tmp4276;
    org$pandalanguage$pandac$Position _f04278;
    org$pandalanguage$pandac$Type* _f14280 = NULL;
    panda$core$Int64 $tmp4282;
    org$pandalanguage$pandac$Position _f04284;
    panda$core$String* _f14286 = NULL;
    panda$core$Int64 $tmp4288;
    org$pandalanguage$pandac$Position _f04290;
    org$pandalanguage$pandac$Type* _f14292 = NULL;
    panda$core$Int64 $tmp4294;
    org$pandalanguage$pandac$Position _f04296;
    org$pandalanguage$pandac$IRNode* _f14298 = NULL;
    org$pandalanguage$pandac$IRNode* _f24300 = NULL;
    org$pandalanguage$pandac$IRNode* _f34302 = NULL;
    panda$core$Int64 $tmp4304;
    org$pandalanguage$pandac$Position _f04306;
    org$pandalanguage$pandac$Type* _f14308 = NULL;
    panda$core$Int64 $tmp4310;
    org$pandalanguage$pandac$Position _f04312;
    panda$core$String* _f14314 = NULL;
    panda$core$Int64 $tmp4316;
    org$pandalanguage$pandac$Position _f04318;
    org$pandalanguage$pandac$Type* _f14320 = NULL;
    org$pandalanguage$pandac$IRNode* _f24322 = NULL;
    panda$collections$ImmutableArray* _f34324 = NULL;
    panda$core$Int64 $tmp4326;
    org$pandalanguage$pandac$Position _f04328;
    panda$collections$ImmutableArray* _f14330 = NULL;
    org$pandalanguage$pandac$ASTNode* _f24332 = NULL;
    panda$core$Int64 $tmp4334;
    org$pandalanguage$pandac$Position _f04336;
    org$pandalanguage$pandac$Type* _f14338 = NULL;
    org$pandalanguage$pandac$IRNode* _f24340 = NULL;
    panda$collections$ImmutableArray* _f34342 = NULL;
    panda$collections$ImmutableArray* _f44344 = NULL;
    panda$core$Int64 $tmp4346;
    org$pandalanguage$pandac$Position _f04348;
    org$pandalanguage$pandac$IRNode* _f14350 = NULL;
    panda$collections$ImmutableArray* _f24352 = NULL;
    panda$core$Int64 $tmp4354;
    org$pandalanguage$pandac$Position _f04356;
    org$pandalanguage$pandac$IRNode* _f14358 = NULL;
    org$pandalanguage$pandac$IRNode* _f24360 = NULL;
    panda$core$Bit _f34362;
    org$pandalanguage$pandac$IRNode* _f44364 = NULL;
    panda$core$Int64 $tmp4366;
    org$pandalanguage$pandac$Position _f04368;
    org$pandalanguage$pandac$Variable$Kind _f14370;
    panda$collections$ImmutableArray* _f24372 = NULL;
    panda$core$Int64 $tmp4374;
    org$pandalanguage$pandac$Position _f04376;
    panda$core$String* _f14378 = NULL;
    org$pandalanguage$pandac$Type* _f24380 = NULL;
    panda$core$Int64 $tmp4382;
    org$pandalanguage$pandac$Position _f04384;
    org$pandalanguage$pandac$Variable* _f14386 = NULL;
    panda$core$Int64 $tmp4388;
    org$pandalanguage$pandac$Position _f04390;
    panda$collections$ImmutableArray* _f14392 = NULL;
    panda$collections$ImmutableArray* _f24394 = NULL;
    panda$core$Int64 $tmp4396;
    org$pandalanguage$pandac$Position _f04398;
    panda$core$String* _f14400 = NULL;
    org$pandalanguage$pandac$IRNode* _f24402 = NULL;
    panda$collections$ImmutableArray* _f34404 = NULL;
    int $tmp3996;
    {
        int $tmp3999;
        {
            $tmp4001 = self;
            $match$5_14000 = $tmp4001;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4001));
            panda$core$Int64$init$builtin_int64(&$tmp4002, 0);
            panda$core$Bit $tmp4003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4002);
            if ($tmp4003.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4005 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04004 = *$tmp4005;
                org$pandalanguage$pandac$IRNode** $tmp4007 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 16));
                _f14006 = *$tmp4007;
                org$pandalanguage$pandac$IRNode** $tmp4009 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 24));
                _f24008 = *$tmp4009;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14006));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24008));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4010, 1);
            panda$core$Bit $tmp4011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4010);
            if ($tmp4011.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4013 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04012 = *$tmp4013;
                org$pandalanguage$pandac$Type** $tmp4015 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14014 = *$tmp4015;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14014));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4016, 2);
            panda$core$Bit $tmp4017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4016);
            if ($tmp4017.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4019 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04018 = *$tmp4019;
                org$pandalanguage$pandac$Type** $tmp4021 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14020 = *$tmp4021;
                org$pandalanguage$pandac$IRNode** $tmp4023 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 24));
                _f24022 = *$tmp4023;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp4025 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_14000->$data + 32));
                _f34024 = *$tmp4025;
                org$pandalanguage$pandac$IRNode** $tmp4027 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 40));
                _f44026 = *$tmp4027;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14020));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24022));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44026));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4028, 3);
            panda$core$Bit $tmp4029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4028);
            if ($tmp4029.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4031 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04030 = *$tmp4031;
                org$pandalanguage$pandac$Type** $tmp4033 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14032 = *$tmp4033;
                panda$core$Bit* $tmp4035 = ((panda$core$Bit*) ((char*) $match$5_14000->$data + 24));
                _f24034 = *$tmp4035;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14032));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4036, 4);
            panda$core$Bit $tmp4037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4036);
            if ($tmp4037.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4039 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04038 = *$tmp4039;
                panda$collections$ImmutableArray** $tmp4041 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 16));
                _f14040 = *$tmp4041;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14040));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4042, 5);
            panda$core$Bit $tmp4043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4042);
            if ($tmp4043.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4045 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04044 = *$tmp4045;
                panda$collections$ImmutableArray** $tmp4047 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 16));
                _f14046 = *$tmp4047;
                panda$collections$ImmutableArray** $tmp4049 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 24));
                _f24048 = *$tmp4049;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14046));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24048));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4050, 6);
            panda$core$Bit $tmp4051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4050);
            if ($tmp4051.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4053 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04052 = *$tmp4053;
                panda$core$String** $tmp4055 = ((panda$core$String**) ((char*) $match$5_14000->$data + 16));
                _f14054 = *$tmp4055;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14054));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4056, 7);
            panda$core$Bit $tmp4057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4056);
            if ($tmp4057.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4059 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04058 = *$tmp4059;
                org$pandalanguage$pandac$Type** $tmp4061 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14060 = *$tmp4061;
                org$pandalanguage$pandac$MethodRef** $tmp4063 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_14000->$data + 24));
                _f24062 = *$tmp4063;
                panda$collections$ImmutableArray** $tmp4065 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 32));
                _f34064 = *$tmp4065;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14060));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24062));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34064));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4066, 8);
            panda$core$Bit $tmp4067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4066);
            if ($tmp4067.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4069 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04068 = *$tmp4069;
                org$pandalanguage$pandac$IRNode** $tmp4071 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 16));
                _f14070 = *$tmp4071;
                org$pandalanguage$pandac$Type** $tmp4073 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 24));
                _f24072 = *$tmp4073;
                panda$core$Bit* $tmp4075 = ((panda$core$Bit*) ((char*) $match$5_14000->$data + 32));
                _f34074 = *$tmp4075;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14070));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24072));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4076, 9);
            panda$core$Bit $tmp4077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4076);
            if ($tmp4077.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4079 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04078 = *$tmp4079;
                org$pandalanguage$pandac$ChoiceCase** $tmp4081 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$5_14000->$data + 16));
                _f14080 = *$tmp4081;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14080));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4082, 10);
            panda$core$Bit $tmp4083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4082);
            if ($tmp4083.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4085 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04084 = *$tmp4085;
                org$pandalanguage$pandac$IRNode** $tmp4087 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 16));
                _f14086 = *$tmp4087;
                org$pandalanguage$pandac$ChoiceCase** $tmp4089 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$5_14000->$data + 24));
                _f24088 = *$tmp4089;
                panda$core$Int64* $tmp4091 = ((panda$core$Int64*) ((char*) $match$5_14000->$data + 32));
                _f34090 = *$tmp4091;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14086));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24088));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4092, 11);
            panda$core$Bit $tmp4093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4092);
            if ($tmp4093.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4095 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04094 = *$tmp4095;
                org$pandalanguage$pandac$Type** $tmp4097 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14096 = *$tmp4097;
                org$pandalanguage$pandac$IRNode** $tmp4099 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 24));
                _f24098 = *$tmp4099;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14096));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24098));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4100, 12);
            panda$core$Bit $tmp4101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4100);
            if ($tmp4101.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4103 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04102 = *$tmp4103;
                org$pandalanguage$pandac$Type** $tmp4105 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14104 = *$tmp4105;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14104));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4106, 13);
            panda$core$Bit $tmp4107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4106);
            if ($tmp4107.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4109 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04108 = *$tmp4109;
                panda$core$String** $tmp4111 = ((panda$core$String**) ((char*) $match$5_14000->$data + 16));
                _f14110 = *$tmp4111;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14110));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4112, 14);
            panda$core$Bit $tmp4113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4112);
            if ($tmp4113.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4115 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 0));
                _f04114 = *$tmp4115;
                org$pandalanguage$pandac$IRNode** $tmp4117 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 8));
                _f14116 = *$tmp4117;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14116));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4118, 15);
            panda$core$Bit $tmp4119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4118);
            if ($tmp4119.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4121 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04120 = *$tmp4121;
                panda$core$String** $tmp4123 = ((panda$core$String**) ((char*) $match$5_14000->$data + 16));
                _f14122 = *$tmp4123;
                panda$collections$ImmutableArray** $tmp4125 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 24));
                _f24124 = *$tmp4125;
                org$pandalanguage$pandac$IRNode** $tmp4127 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 32));
                _f34126 = *$tmp4127;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14122));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24124));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34126));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4128, 16);
            panda$core$Bit $tmp4129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4128);
            if ($tmp4129.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4131 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 0));
                _f04130 = *$tmp4131;
                panda$collections$ImmutableArray** $tmp4133 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 8));
                _f14132 = *$tmp4133;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04130));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14132));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4134, 17);
            panda$core$Bit $tmp4135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4134);
            if ($tmp4135.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4137 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 0));
                _f04136 = *$tmp4137;
                org$pandalanguage$pandac$IRNode** $tmp4139 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 8));
                _f14138 = *$tmp4139;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04136));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14138));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4140, 18);
            panda$core$Bit $tmp4141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4140);
            if ($tmp4141.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4143 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04142 = *$tmp4143;
                org$pandalanguage$pandac$Type** $tmp4145 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14144 = *$tmp4145;
                org$pandalanguage$pandac$IRNode** $tmp4147 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 24));
                _f24146 = *$tmp4147;
                org$pandalanguage$pandac$FieldDecl** $tmp4149 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_14000->$data + 32));
                _f34148 = *$tmp4149;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14144));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24146));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34148));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4150, 19);
            panda$core$Bit $tmp4151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4150);
            if ($tmp4151.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4153 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04152 = *$tmp4153;
                org$pandalanguage$pandac$IRNode** $tmp4155 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 16));
                _f14154 = *$tmp4155;
                panda$collections$ImmutableArray** $tmp4157 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 24));
                _f24156 = *$tmp4157;
                org$pandalanguage$pandac$IRNode** $tmp4159 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 32));
                _f34158 = *$tmp4159;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24156));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34158));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4160, 20);
            panda$core$Bit $tmp4161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4160);
            if ($tmp4161.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4163 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04162 = *$tmp4163;
                org$pandalanguage$pandac$Type** $tmp4165 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14164 = *$tmp4165;
                panda$core$UInt64* $tmp4167 = ((panda$core$UInt64*) ((char*) $match$5_14000->$data + 24));
                _f24166 = *$tmp4167;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14164));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4168, 21);
            panda$core$Bit $tmp4169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4168);
            if ($tmp4169.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04170 = *$tmp4171;
                org$pandalanguage$pandac$IRNode** $tmp4173 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 16));
                _f14172 = *$tmp4173;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14172));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4174, 22);
            panda$core$Bit $tmp4175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4174);
            if ($tmp4175.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4177 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04176 = *$tmp4177;
                org$pandalanguage$pandac$IRNode** $tmp4179 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 16));
                _f14178 = *$tmp4179;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14178));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4180, 23);
            panda$core$Bit $tmp4181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4180);
            if ($tmp4181.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4183 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04182 = *$tmp4183;
                panda$core$String** $tmp4185 = ((panda$core$String**) ((char*) $match$5_14000->$data + 16));
                _f14184 = *$tmp4185;
                panda$collections$ImmutableArray** $tmp4187 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 24));
                _f24186 = *$tmp4187;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14184));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24186));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4188, 24);
            panda$core$Bit $tmp4189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4188);
            if ($tmp4189.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4191 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04190 = *$tmp4191;
                org$pandalanguage$pandac$IRNode** $tmp4193 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 16));
                _f14192 = *$tmp4193;
                panda$collections$ImmutableArray** $tmp4195 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 24));
                _f24194 = *$tmp4195;
                panda$collections$ImmutableArray** $tmp4197 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 32));
                _f34196 = *$tmp4197;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14192));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24194));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34196));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4198, 25);
            panda$core$Bit $tmp4199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4198);
            if ($tmp4199.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4201 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04200 = *$tmp4201;
                org$pandalanguage$pandac$Type** $tmp4203 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14202 = *$tmp4203;
                org$pandalanguage$pandac$IRNode** $tmp4205 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 24));
                _f24204 = *$tmp4205;
                org$pandalanguage$pandac$MethodRef** $tmp4207 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_14000->$data + 32));
                _f34206 = *$tmp4207;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14202));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24204));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34206));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4208, 26);
            panda$core$Bit $tmp4209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4208);
            if ($tmp4209.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4211 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04210 = *$tmp4211;
                org$pandalanguage$pandac$Type** $tmp4213 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14212 = *$tmp4213;
                panda$core$UInt64* $tmp4215 = ((panda$core$UInt64*) ((char*) $match$5_14000->$data + 24));
                _f24214 = *$tmp4215;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14212));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4216, 27);
            panda$core$Bit $tmp4217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4216);
            if ($tmp4217.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4219 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04218 = *$tmp4219;
                org$pandalanguage$pandac$Type** $tmp4221 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14220 = *$tmp4221;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14220));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4222, 28);
            panda$core$Bit $tmp4223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4222);
            if ($tmp4223.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4225 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04224 = *$tmp4225;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp4227 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_14000->$data + 16));
                _f14226 = *$tmp4227;
                org$pandalanguage$pandac$IRNode** $tmp4229 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 24));
                _f24228 = *$tmp4229;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24228));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4230, 29);
            panda$core$Bit $tmp4231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4230);
            if ($tmp4231.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4233 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04232 = *$tmp4233;
                panda$core$String** $tmp4235 = ((panda$core$String**) ((char*) $match$5_14000->$data + 16));
                _f14234 = *$tmp4235;
                org$pandalanguage$pandac$IRNode** $tmp4237 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 24));
                _f24236 = *$tmp4237;
                org$pandalanguage$pandac$IRNode** $tmp4239 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 32));
                _f34238 = *$tmp4239;
                panda$collections$ImmutableArray** $tmp4241 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 40));
                _f44240 = *$tmp4241;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14234));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24236));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34238));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44240));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4242, 30);
            panda$core$Bit $tmp4243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4242);
            if ($tmp4243.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4245 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04244 = *$tmp4245;
                org$pandalanguage$pandac$Type** $tmp4247 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14246 = *$tmp4247;
                panda$core$Real64* $tmp4249 = ((panda$core$Real64*) ((char*) $match$5_14000->$data + 24));
                _f24248 = *$tmp4249;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14246));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4250, 31);
            panda$core$Bit $tmp4251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4250);
            if ($tmp4251.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4253 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04252 = *$tmp4253;
                org$pandalanguage$pandac$IRNode** $tmp4255 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 16));
                _f14254 = *$tmp4255;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14254));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4256, 32);
            panda$core$Bit $tmp4257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4256);
            if ($tmp4257.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4259 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04258 = *$tmp4259;
                org$pandalanguage$pandac$Type** $tmp4261 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14260 = *$tmp4261;
                panda$core$Int64* $tmp4263 = ((panda$core$Int64*) ((char*) $match$5_14000->$data + 24));
                _f24262 = *$tmp4263;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14260));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4264, 33);
            panda$core$Bit $tmp4265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4264);
            if ($tmp4265.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4267 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 0));
                _f04266 = *$tmp4267;
                panda$core$Int64* $tmp4269 = ((panda$core$Int64*) ((char*) $match$5_14000->$data + 8));
                _f14268 = *$tmp4269;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04266));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4270, 34);
            panda$core$Bit $tmp4271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4270);
            if ($tmp4271.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4273 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04272 = *$tmp4273;
                org$pandalanguage$pandac$Type** $tmp4275 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14274 = *$tmp4275;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14274));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4276, 35);
            panda$core$Bit $tmp4277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4276);
            if ($tmp4277.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4279 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04278 = *$tmp4279;
                org$pandalanguage$pandac$Type** $tmp4281 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14280 = *$tmp4281;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14280));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4282, 36);
            panda$core$Bit $tmp4283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4282);
            if ($tmp4283.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4285 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04284 = *$tmp4285;
                panda$core$String** $tmp4287 = ((panda$core$String**) ((char*) $match$5_14000->$data + 16));
                _f14286 = *$tmp4287;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14286));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4288, 37);
            panda$core$Bit $tmp4289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4288);
            if ($tmp4289.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4291 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04290 = *$tmp4291;
                org$pandalanguage$pandac$Type** $tmp4293 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14292 = *$tmp4293;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14292));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4294, 38);
            panda$core$Bit $tmp4295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4294);
            if ($tmp4295.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4297 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04296 = *$tmp4297;
                org$pandalanguage$pandac$IRNode** $tmp4299 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 16));
                _f14298 = *$tmp4299;
                org$pandalanguage$pandac$IRNode** $tmp4301 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 24));
                _f24300 = *$tmp4301;
                org$pandalanguage$pandac$IRNode** $tmp4303 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 32));
                _f34302 = *$tmp4303;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14298));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24300));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34302));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4304, 39);
            panda$core$Bit $tmp4305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4304);
            if ($tmp4305.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4307 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04306 = *$tmp4307;
                org$pandalanguage$pandac$Type** $tmp4309 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14308 = *$tmp4309;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14308));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4310, 40);
            panda$core$Bit $tmp4311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4310);
            if ($tmp4311.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4313 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04312 = *$tmp4313;
                panda$core$String** $tmp4315 = ((panda$core$String**) ((char*) $match$5_14000->$data + 16));
                _f14314 = *$tmp4315;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14314));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4316, 41);
            panda$core$Bit $tmp4317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4316);
            if ($tmp4317.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4319 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04318 = *$tmp4319;
                org$pandalanguage$pandac$Type** $tmp4321 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14320 = *$tmp4321;
                org$pandalanguage$pandac$IRNode** $tmp4323 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 24));
                _f24322 = *$tmp4323;
                panda$collections$ImmutableArray** $tmp4325 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 32));
                _f34324 = *$tmp4325;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14320));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24322));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34324));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4326, 42);
            panda$core$Bit $tmp4327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4326);
            if ($tmp4327.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4329 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04328 = *$tmp4329;
                panda$collections$ImmutableArray** $tmp4331 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 16));
                _f14330 = *$tmp4331;
                org$pandalanguage$pandac$ASTNode** $tmp4333 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_14000->$data + 24));
                _f24332 = *$tmp4333;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14330));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24332));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4334, 43);
            panda$core$Bit $tmp4335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4334);
            if ($tmp4335.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4337 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04336 = *$tmp4337;
                org$pandalanguage$pandac$Type** $tmp4339 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 16));
                _f14338 = *$tmp4339;
                org$pandalanguage$pandac$IRNode** $tmp4341 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 24));
                _f24340 = *$tmp4341;
                panda$collections$ImmutableArray** $tmp4343 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 32));
                _f34342 = *$tmp4343;
                panda$collections$ImmutableArray** $tmp4345 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 40));
                _f44344 = *$tmp4345;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14338));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24340));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34342));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44344));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4346, 44);
            panda$core$Bit $tmp4347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4346);
            if ($tmp4347.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4349 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04348 = *$tmp4349;
                org$pandalanguage$pandac$IRNode** $tmp4351 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 16));
                _f14350 = *$tmp4351;
                panda$collections$ImmutableArray** $tmp4353 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 24));
                _f24352 = *$tmp4353;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14350));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24352));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4354, 45);
            panda$core$Bit $tmp4355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4354);
            if ($tmp4355.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4357 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04356 = *$tmp4357;
                org$pandalanguage$pandac$IRNode** $tmp4359 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 16));
                _f14358 = *$tmp4359;
                org$pandalanguage$pandac$IRNode** $tmp4361 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 24));
                _f24360 = *$tmp4361;
                panda$core$Bit* $tmp4363 = ((panda$core$Bit*) ((char*) $match$5_14000->$data + 32));
                _f34362 = *$tmp4363;
                org$pandalanguage$pandac$IRNode** $tmp4365 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 33));
                _f44364 = *$tmp4365;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14358));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24360));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44364));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4366, 46);
            panda$core$Bit $tmp4367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4366);
            if ($tmp4367.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4369 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04368 = *$tmp4369;
                org$pandalanguage$pandac$Variable$Kind* $tmp4371 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_14000->$data + 16));
                _f14370 = *$tmp4371;
                panda$collections$ImmutableArray** $tmp4373 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 24));
                _f24372 = *$tmp4373;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24372));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4374, 47);
            panda$core$Bit $tmp4375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4374);
            if ($tmp4375.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4377 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04376 = *$tmp4377;
                panda$core$String** $tmp4379 = ((panda$core$String**) ((char*) $match$5_14000->$data + 16));
                _f14378 = *$tmp4379;
                org$pandalanguage$pandac$Type** $tmp4381 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14000->$data + 24));
                _f24380 = *$tmp4381;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24380));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4382, 48);
            panda$core$Bit $tmp4383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4382);
            if ($tmp4383.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4385 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04384 = *$tmp4385;
                org$pandalanguage$pandac$Variable** $tmp4387 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_14000->$data + 16));
                _f14386 = *$tmp4387;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14386));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4388, 49);
            panda$core$Bit $tmp4389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4388);
            if ($tmp4389.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4391 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04390 = *$tmp4391;
                panda$collections$ImmutableArray** $tmp4393 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 16));
                _f14392 = *$tmp4393;
                panda$collections$ImmutableArray** $tmp4395 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 24));
                _f24394 = *$tmp4395;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14392));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24394));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4396, 50);
            panda$core$Bit $tmp4397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14000->$rawValue, $tmp4396);
            if ($tmp4397.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4399 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14000->$data + 0));
                _f04398 = *$tmp4399;
                panda$core$String** $tmp4401 = ((panda$core$String**) ((char*) $match$5_14000->$data + 16));
                _f14400 = *$tmp4401;
                org$pandalanguage$pandac$IRNode** $tmp4403 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14000->$data + 24));
                _f24402 = *$tmp4403;
                panda$collections$ImmutableArray** $tmp4405 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14000->$data + 32));
                _f34404 = *$tmp4405;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14400));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24402));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34404));
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
        $tmp3999 = -1;
        goto $l3997;
        $l3997:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4001));
        switch ($tmp3999) {
            case -1: goto $l4406;
        }
        $l4406:;
    }
    $tmp3996 = -1;
    goto $l3994;
    $l3994:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp3996) {
        case -1: goto $l4407;
    }
    $l4407:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp4409;
    org$pandalanguage$pandac$IRNode* $tmp4412;
    org$pandalanguage$pandac$IRNode* $tmp4413;
    org$pandalanguage$pandac$IRNode* $tmp4416;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4408 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4408 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4410 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4409 = *$tmp4410;
        org$pandalanguage$pandac$IRNode** $tmp4411 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4412 = p_f1;
        *$tmp4411 = $tmp4412;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4412));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4409));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4414 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4413 = *$tmp4414;
        org$pandalanguage$pandac$IRNode** $tmp4415 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4416 = p_f2;
        *$tmp4415 = $tmp4416;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4416));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4413));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp4418;
    org$pandalanguage$pandac$Type* $tmp4421;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4417 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4417 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4419 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4418 = *$tmp4419;
        org$pandalanguage$pandac$Type** $tmp4420 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4421 = p_f1;
        *$tmp4420 = $tmp4421;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4418));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp4423;
    org$pandalanguage$pandac$Type* $tmp4426;
    org$pandalanguage$pandac$IRNode* $tmp4427;
    org$pandalanguage$pandac$IRNode* $tmp4430;
    org$pandalanguage$pandac$IRNode* $tmp4432;
    org$pandalanguage$pandac$IRNode* $tmp4435;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4422 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4422 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4424 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4423 = *$tmp4424;
        org$pandalanguage$pandac$Type** $tmp4425 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4426 = p_f1;
        *$tmp4425 = $tmp4426;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4426));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4423));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4428 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4427 = *$tmp4428;
        org$pandalanguage$pandac$IRNode** $tmp4429 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4430 = p_f2;
        *$tmp4429 = $tmp4430;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4430));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4427));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp4431 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp4431 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp4433 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp4432 = *$tmp4433;
        org$pandalanguage$pandac$IRNode** $tmp4434 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp4435 = p_f4;
        *$tmp4434 = $tmp4435;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4435));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4432));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp4437;
    org$pandalanguage$pandac$Type* $tmp4440;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4436 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4436 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4438 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4437 = *$tmp4438;
        org$pandalanguage$pandac$Type** $tmp4439 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4440 = p_f1;
        *$tmp4439 = $tmp4440;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4440));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4437));
    }
    panda$core$Bit* $tmp4441 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp4441 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp4443;
    panda$collections$ImmutableArray* $tmp4446;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4442 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4442 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp4444 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4443 = *$tmp4444;
        panda$collections$ImmutableArray** $tmp4445 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4446 = p_f1;
        *$tmp4445 = $tmp4446;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4446));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4443));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp4448;
    panda$collections$ImmutableArray* $tmp4451;
    panda$collections$ImmutableArray* $tmp4452;
    panda$collections$ImmutableArray* $tmp4455;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4447 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4447 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp4449 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4448 = *$tmp4449;
        panda$collections$ImmutableArray** $tmp4450 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4451 = p_f1;
        *$tmp4450 = $tmp4451;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4451));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4448));
    }
    {
        panda$collections$ImmutableArray** $tmp4453 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4452 = *$tmp4453;
        panda$collections$ImmutableArray** $tmp4454 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4455 = p_f2;
        *$tmp4454 = $tmp4455;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4455));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4452));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp4457;
    panda$core$String* $tmp4460;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4456 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4456 = p_f0;
    {
        panda$core$String** $tmp4458 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4457 = *$tmp4458;
        panda$core$String** $tmp4459 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4460 = p_f1;
        *$tmp4459 = $tmp4460;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4460));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4457));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp4462;
    org$pandalanguage$pandac$Type* $tmp4465;
    org$pandalanguage$pandac$MethodRef* $tmp4466;
    org$pandalanguage$pandac$MethodRef* $tmp4469;
    panda$collections$ImmutableArray* $tmp4470;
    panda$collections$ImmutableArray* $tmp4473;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4461 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4461 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4463 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4462 = *$tmp4463;
        org$pandalanguage$pandac$Type** $tmp4464 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4465 = p_f1;
        *$tmp4464 = $tmp4465;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4465));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4462));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp4467 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp4466 = *$tmp4467;
        org$pandalanguage$pandac$MethodRef** $tmp4468 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp4469 = p_f2;
        *$tmp4468 = $tmp4469;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4469));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4466));
    }
    {
        panda$collections$ImmutableArray** $tmp4471 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4470 = *$tmp4471;
        panda$collections$ImmutableArray** $tmp4472 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4473 = p_f3;
        *$tmp4472 = $tmp4473;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4473));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4470));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4475;
    org$pandalanguage$pandac$IRNode* $tmp4478;
    org$pandalanguage$pandac$Type* $tmp4479;
    org$pandalanguage$pandac$Type* $tmp4482;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4474 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4474 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4476 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4475 = *$tmp4476;
        org$pandalanguage$pandac$IRNode** $tmp4477 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4478 = p_f1;
        *$tmp4477 = $tmp4478;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4478));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4475));
    }
    {
        org$pandalanguage$pandac$Type** $tmp4480 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp4479 = *$tmp4480;
        org$pandalanguage$pandac$Type** $tmp4481 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp4482 = p_f2;
        *$tmp4481 = $tmp4482;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4482));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4479));
    }
    panda$core$Bit* $tmp4483 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp4483 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceCase(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceCase* p_f1) {
    org$pandalanguage$pandac$ChoiceCase* $tmp4485;
    org$pandalanguage$pandac$ChoiceCase* $tmp4488;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4484 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4484 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceCase** $tmp4486 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 16));
        $tmp4485 = *$tmp4486;
        org$pandalanguage$pandac$ChoiceCase** $tmp4487 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 16));
        $tmp4488 = p_f1;
        *$tmp4487 = $tmp4488;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4488));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4485));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceCase* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4490;
    org$pandalanguage$pandac$IRNode* $tmp4493;
    org$pandalanguage$pandac$ChoiceCase* $tmp4494;
    org$pandalanguage$pandac$ChoiceCase* $tmp4497;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4489 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4489 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4491 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4490 = *$tmp4491;
        org$pandalanguage$pandac$IRNode** $tmp4492 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4493 = p_f1;
        *$tmp4492 = $tmp4493;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4493));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4490));
    }
    {
        org$pandalanguage$pandac$ChoiceCase** $tmp4495 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 24));
        $tmp4494 = *$tmp4495;
        org$pandalanguage$pandac$ChoiceCase** $tmp4496 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 24));
        $tmp4497 = p_f2;
        *$tmp4496 = $tmp4497;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4494));
    }
    panda$core$Int64* $tmp4498 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp4498 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp4500;
    org$pandalanguage$pandac$Type* $tmp4503;
    org$pandalanguage$pandac$IRNode* $tmp4504;
    org$pandalanguage$pandac$IRNode* $tmp4507;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4499 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4499 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4501 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4500 = *$tmp4501;
        org$pandalanguage$pandac$Type** $tmp4502 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4503 = p_f1;
        *$tmp4502 = $tmp4503;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4503));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4500));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4505 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4504 = *$tmp4505;
        org$pandalanguage$pandac$IRNode** $tmp4506 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4507 = p_f2;
        *$tmp4506 = $tmp4507;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4507));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4504));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4508;
    org$pandalanguage$pandac$IRNode* $tmp4511;
    org$pandalanguage$pandac$IRNode* $tmp4512;
    org$pandalanguage$pandac$IRNode* $tmp4515;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4509 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4508 = *$tmp4509;
        org$pandalanguage$pandac$IRNode** $tmp4510 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4511 = p_f0;
        *$tmp4510 = $tmp4511;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4508));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4513 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4512 = *$tmp4513;
        org$pandalanguage$pandac$IRNode** $tmp4514 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4515 = p_f1;
        *$tmp4514 = $tmp4515;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4515));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4512));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp4517;
    panda$core$String* $tmp4520;
    panda$collections$ImmutableArray* $tmp4521;
    panda$collections$ImmutableArray* $tmp4524;
    org$pandalanguage$pandac$IRNode* $tmp4525;
    org$pandalanguage$pandac$IRNode* $tmp4528;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4516 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4516 = p_f0;
    {
        panda$core$String** $tmp4518 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4517 = *$tmp4518;
        panda$core$String** $tmp4519 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4520 = p_f1;
        *$tmp4519 = $tmp4520;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4520));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4517));
    }
    {
        panda$collections$ImmutableArray** $tmp4522 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4521 = *$tmp4522;
        panda$collections$ImmutableArray** $tmp4523 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4524 = p_f2;
        *$tmp4523 = $tmp4524;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4524));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4521));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4526 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4525 = *$tmp4526;
        org$pandalanguage$pandac$IRNode** $tmp4527 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4528 = p_f3;
        *$tmp4527 = $tmp4528;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4528));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4525));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$collections$ImmutableArray* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4529;
    org$pandalanguage$pandac$IRNode* $tmp4532;
    panda$collections$ImmutableArray* $tmp4533;
    panda$collections$ImmutableArray* $tmp4536;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4530 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4529 = *$tmp4530;
        org$pandalanguage$pandac$IRNode** $tmp4531 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4532 = p_f0;
        *$tmp4531 = $tmp4532;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4532));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4529));
    }
    {
        panda$collections$ImmutableArray** $tmp4534 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp4533 = *$tmp4534;
        panda$collections$ImmutableArray** $tmp4535 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp4536 = p_f1;
        *$tmp4535 = $tmp4536;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4536));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4533));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4537;
    org$pandalanguage$pandac$IRNode* $tmp4540;
    org$pandalanguage$pandac$IRNode* $tmp4541;
    org$pandalanguage$pandac$IRNode* $tmp4544;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4538 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4537 = *$tmp4538;
        org$pandalanguage$pandac$IRNode** $tmp4539 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4540 = p_f0;
        *$tmp4539 = $tmp4540;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4540));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4537));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4542 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4541 = *$tmp4542;
        org$pandalanguage$pandac$IRNode** $tmp4543 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4544 = p_f1;
        *$tmp4543 = $tmp4544;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4544));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4541));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp4546;
    org$pandalanguage$pandac$Type* $tmp4549;
    org$pandalanguage$pandac$IRNode* $tmp4550;
    org$pandalanguage$pandac$IRNode* $tmp4553;
    org$pandalanguage$pandac$FieldDecl* $tmp4554;
    org$pandalanguage$pandac$FieldDecl* $tmp4557;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4545 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4545 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4547 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4546 = *$tmp4547;
        org$pandalanguage$pandac$Type** $tmp4548 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4549 = p_f1;
        *$tmp4548 = $tmp4549;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4549));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4546));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4551 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4550 = *$tmp4551;
        org$pandalanguage$pandac$IRNode** $tmp4552 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4553 = p_f2;
        *$tmp4552 = $tmp4553;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4553));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4550));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp4555 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp4554 = *$tmp4555;
        org$pandalanguage$pandac$FieldDecl** $tmp4556 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp4557 = p_f3;
        *$tmp4556 = $tmp4557;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4557));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4554));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4559;
    org$pandalanguage$pandac$IRNode* $tmp4562;
    panda$collections$ImmutableArray* $tmp4563;
    panda$collections$ImmutableArray* $tmp4566;
    org$pandalanguage$pandac$IRNode* $tmp4567;
    org$pandalanguage$pandac$IRNode* $tmp4570;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4558 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4558 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4560 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4559 = *$tmp4560;
        org$pandalanguage$pandac$IRNode** $tmp4561 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4562 = p_f1;
        *$tmp4561 = $tmp4562;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4562));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4559));
    }
    {
        panda$collections$ImmutableArray** $tmp4564 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4563 = *$tmp4564;
        panda$collections$ImmutableArray** $tmp4565 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4566 = p_f2;
        *$tmp4565 = $tmp4566;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4566));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4563));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4568 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4567 = *$tmp4568;
        org$pandalanguage$pandac$IRNode** $tmp4569 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4570 = p_f3;
        *$tmp4569 = $tmp4570;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4570));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4567));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp4572;
    org$pandalanguage$pandac$Type* $tmp4575;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4571 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4571 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4573 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4572 = *$tmp4573;
        org$pandalanguage$pandac$Type** $tmp4574 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4575 = p_f1;
        *$tmp4574 = $tmp4575;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4575));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4572));
    }
    panda$core$UInt64* $tmp4576 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp4576 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4578;
    org$pandalanguage$pandac$IRNode* $tmp4581;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4577 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4577 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4579 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4578 = *$tmp4579;
        org$pandalanguage$pandac$IRNode** $tmp4580 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4581 = p_f1;
        *$tmp4580 = $tmp4581;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4581));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4578));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp4583;
    panda$core$String* $tmp4586;
    panda$collections$ImmutableArray* $tmp4587;
    panda$collections$ImmutableArray* $tmp4590;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4582 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4582 = p_f0;
    {
        panda$core$String** $tmp4584 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4583 = *$tmp4584;
        panda$core$String** $tmp4585 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4586 = p_f1;
        *$tmp4585 = $tmp4586;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4586));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4583));
    }
    {
        panda$collections$ImmutableArray** $tmp4588 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4587 = *$tmp4588;
        panda$collections$ImmutableArray** $tmp4589 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4590 = p_f2;
        *$tmp4589 = $tmp4590;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4590));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4587));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4592;
    org$pandalanguage$pandac$IRNode* $tmp4595;
    panda$collections$ImmutableArray* $tmp4596;
    panda$collections$ImmutableArray* $tmp4599;
    panda$collections$ImmutableArray* $tmp4600;
    panda$collections$ImmutableArray* $tmp4603;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4591 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4591 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4593 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4592 = *$tmp4593;
        org$pandalanguage$pandac$IRNode** $tmp4594 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4595 = p_f1;
        *$tmp4594 = $tmp4595;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4595));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4592));
    }
    {
        panda$collections$ImmutableArray** $tmp4597 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4596 = *$tmp4597;
        panda$collections$ImmutableArray** $tmp4598 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4599 = p_f2;
        *$tmp4598 = $tmp4599;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4599));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4596));
    }
    {
        panda$collections$ImmutableArray** $tmp4601 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4600 = *$tmp4601;
        panda$collections$ImmutableArray** $tmp4602 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4603 = p_f3;
        *$tmp4602 = $tmp4603;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4603));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4600));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$MethodRef* p_f3) {
    org$pandalanguage$pandac$Type* $tmp4605;
    org$pandalanguage$pandac$Type* $tmp4608;
    org$pandalanguage$pandac$IRNode* $tmp4609;
    org$pandalanguage$pandac$IRNode* $tmp4612;
    org$pandalanguage$pandac$MethodRef* $tmp4613;
    org$pandalanguage$pandac$MethodRef* $tmp4616;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4604 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4604 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4606 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4605 = *$tmp4606;
        org$pandalanguage$pandac$Type** $tmp4607 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4608 = p_f1;
        *$tmp4607 = $tmp4608;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4608));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4605));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4610 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4609 = *$tmp4610;
        org$pandalanguage$pandac$IRNode** $tmp4611 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4612 = p_f2;
        *$tmp4611 = $tmp4612;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4612));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4609));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp4614 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp4613 = *$tmp4614;
        org$pandalanguage$pandac$MethodRef** $tmp4615 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp4616 = p_f3;
        *$tmp4615 = $tmp4616;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4616));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4613));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp4619;
    org$pandalanguage$pandac$IRNode* $tmp4622;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4617 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4617 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp4618 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp4618 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp4620 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4619 = *$tmp4620;
        org$pandalanguage$pandac$IRNode** $tmp4621 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4622 = p_f2;
        *$tmp4621 = $tmp4622;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4622));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4619));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp4624;
    panda$core$String* $tmp4627;
    org$pandalanguage$pandac$IRNode* $tmp4628;
    org$pandalanguage$pandac$IRNode* $tmp4631;
    org$pandalanguage$pandac$IRNode* $tmp4632;
    org$pandalanguage$pandac$IRNode* $tmp4635;
    panda$collections$ImmutableArray* $tmp4636;
    panda$collections$ImmutableArray* $tmp4639;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4623 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4623 = p_f0;
    {
        panda$core$String** $tmp4625 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4624 = *$tmp4625;
        panda$core$String** $tmp4626 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4627 = p_f1;
        *$tmp4626 = $tmp4627;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4627));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4624));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4629 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4628 = *$tmp4629;
        org$pandalanguage$pandac$IRNode** $tmp4630 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4631 = p_f2;
        *$tmp4630 = $tmp4631;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4631));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4628));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4633 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4632 = *$tmp4633;
        org$pandalanguage$pandac$IRNode** $tmp4634 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4635 = p_f3;
        *$tmp4634 = $tmp4635;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4635));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4632));
    }
    {
        panda$collections$ImmutableArray** $tmp4637 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4636 = *$tmp4637;
        panda$collections$ImmutableArray** $tmp4638 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4639 = p_f4;
        *$tmp4638 = $tmp4639;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4639));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4636));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp4641;
    org$pandalanguage$pandac$Type* $tmp4644;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4640 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4640 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4642 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4641 = *$tmp4642;
        org$pandalanguage$pandac$Type** $tmp4643 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4644 = p_f1;
        *$tmp4643 = $tmp4644;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4644));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4641));
    }
    panda$core$Real64* $tmp4645 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp4645 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4647;
    org$pandalanguage$pandac$IRNode* $tmp4650;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4646 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4646 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4648 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4647 = *$tmp4648;
        org$pandalanguage$pandac$IRNode** $tmp4649 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4650 = p_f1;
        *$tmp4649 = $tmp4650;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4650));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4647));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp4652;
    org$pandalanguage$pandac$Type* $tmp4655;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4651 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4651 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4653 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4652 = *$tmp4653;
        org$pandalanguage$pandac$Type** $tmp4654 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4655 = p_f1;
        *$tmp4654 = $tmp4655;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4655));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4652));
    }
    panda$core$Int64* $tmp4656 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp4656 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4657;
    org$pandalanguage$pandac$IRNode* $tmp4660;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4658 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4657 = *$tmp4658;
        org$pandalanguage$pandac$IRNode** $tmp4659 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4660 = p_f0;
        *$tmp4659 = $tmp4660;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4660));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4657));
    }
    panda$core$Int64* $tmp4661 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp4661 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp4663;
    panda$core$String* $tmp4666;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4662 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4662 = p_f0;
    {
        panda$core$String** $tmp4664 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4663 = *$tmp4664;
        panda$core$String** $tmp4665 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4666 = p_f1;
        *$tmp4665 = $tmp4666;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4666));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4663));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4668;
    org$pandalanguage$pandac$IRNode* $tmp4671;
    org$pandalanguage$pandac$IRNode* $tmp4672;
    org$pandalanguage$pandac$IRNode* $tmp4675;
    org$pandalanguage$pandac$IRNode* $tmp4676;
    org$pandalanguage$pandac$IRNode* $tmp4679;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4667 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4667 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4669 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4668 = *$tmp4669;
        org$pandalanguage$pandac$IRNode** $tmp4670 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4671 = p_f1;
        *$tmp4670 = $tmp4671;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4671));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4668));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4673 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4672 = *$tmp4673;
        org$pandalanguage$pandac$IRNode** $tmp4674 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4675 = p_f2;
        *$tmp4674 = $tmp4675;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4675));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4672));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4677 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4676 = *$tmp4677;
        org$pandalanguage$pandac$IRNode** $tmp4678 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4679 = p_f3;
        *$tmp4678 = $tmp4679;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4679));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4676));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp4681;
    org$pandalanguage$pandac$Type* $tmp4684;
    org$pandalanguage$pandac$IRNode* $tmp4685;
    org$pandalanguage$pandac$IRNode* $tmp4688;
    panda$collections$ImmutableArray* $tmp4689;
    panda$collections$ImmutableArray* $tmp4692;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4680 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4680 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4682 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4681 = *$tmp4682;
        org$pandalanguage$pandac$Type** $tmp4683 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4684 = p_f1;
        *$tmp4683 = $tmp4684;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4684));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4681));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4686 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4685 = *$tmp4686;
        org$pandalanguage$pandac$IRNode** $tmp4687 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4688 = p_f2;
        *$tmp4687 = $tmp4688;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4688));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4685));
    }
    {
        panda$collections$ImmutableArray** $tmp4690 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4689 = *$tmp4690;
        panda$collections$ImmutableArray** $tmp4691 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4692 = p_f3;
        *$tmp4691 = $tmp4692;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4692));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4689));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTpanda$core$String$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp4694;
    panda$collections$ImmutableArray* $tmp4697;
    org$pandalanguage$pandac$ASTNode* $tmp4698;
    org$pandalanguage$pandac$ASTNode* $tmp4701;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4693 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4693 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp4695 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4694 = *$tmp4695;
        panda$collections$ImmutableArray** $tmp4696 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4697 = p_f1;
        *$tmp4696 = $tmp4697;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4697));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4694));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp4699 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp4698 = *$tmp4699;
        org$pandalanguage$pandac$ASTNode** $tmp4700 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp4701 = p_f2;
        *$tmp4700 = $tmp4701;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4701));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4698));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp4703;
    org$pandalanguage$pandac$Type* $tmp4706;
    org$pandalanguage$pandac$IRNode* $tmp4707;
    org$pandalanguage$pandac$IRNode* $tmp4710;
    panda$collections$ImmutableArray* $tmp4711;
    panda$collections$ImmutableArray* $tmp4714;
    panda$collections$ImmutableArray* $tmp4715;
    panda$collections$ImmutableArray* $tmp4718;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4702 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4702 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4704 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4703 = *$tmp4704;
        org$pandalanguage$pandac$Type** $tmp4705 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4706 = p_f1;
        *$tmp4705 = $tmp4706;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4706));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4703));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4708 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4707 = *$tmp4708;
        org$pandalanguage$pandac$IRNode** $tmp4709 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4710 = p_f2;
        *$tmp4709 = $tmp4710;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4710));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4707));
    }
    {
        panda$collections$ImmutableArray** $tmp4712 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4711 = *$tmp4712;
        panda$collections$ImmutableArray** $tmp4713 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4714 = p_f3;
        *$tmp4713 = $tmp4714;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4714));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4711));
    }
    {
        panda$collections$ImmutableArray** $tmp4716 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4715 = *$tmp4716;
        panda$collections$ImmutableArray** $tmp4717 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4718 = p_f4;
        *$tmp4717 = $tmp4718;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4718));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4715));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp4720;
    org$pandalanguage$pandac$IRNode* $tmp4723;
    panda$collections$ImmutableArray* $tmp4724;
    panda$collections$ImmutableArray* $tmp4727;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4719 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4719 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4721 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4720 = *$tmp4721;
        org$pandalanguage$pandac$IRNode** $tmp4722 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4723 = p_f1;
        *$tmp4722 = $tmp4723;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4723));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4720));
    }
    {
        panda$collections$ImmutableArray** $tmp4725 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4724 = *$tmp4725;
        panda$collections$ImmutableArray** $tmp4726 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4727 = p_f2;
        *$tmp4726 = $tmp4727;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4727));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4724));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp4729;
    org$pandalanguage$pandac$IRNode* $tmp4732;
    org$pandalanguage$pandac$IRNode* $tmp4733;
    org$pandalanguage$pandac$IRNode* $tmp4736;
    org$pandalanguage$pandac$IRNode* $tmp4738;
    org$pandalanguage$pandac$IRNode* $tmp4741;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4728 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4728 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4730 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4729 = *$tmp4730;
        org$pandalanguage$pandac$IRNode** $tmp4731 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4732 = p_f1;
        *$tmp4731 = $tmp4732;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4732));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4729));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4734 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4733 = *$tmp4734;
        org$pandalanguage$pandac$IRNode** $tmp4735 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4736 = p_f2;
        *$tmp4735 = $tmp4736;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4736));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4733));
    }
    panda$core$Bit* $tmp4737 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp4737 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp4739 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp4738 = *$tmp4739;
        org$pandalanguage$pandac$IRNode** $tmp4740 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp4741 = p_f4;
        *$tmp4740 = $tmp4741;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4741));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4738));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp4744;
    panda$collections$ImmutableArray* $tmp4747;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4742 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4742 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp4743 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp4743 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp4745 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4744 = *$tmp4745;
        panda$collections$ImmutableArray** $tmp4746 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4747 = p_f2;
        *$tmp4746 = $tmp4747;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4747));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4744));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$Type* p_f2) {
    panda$core$String* $tmp4749;
    panda$core$String* $tmp4752;
    org$pandalanguage$pandac$Type* $tmp4753;
    org$pandalanguage$pandac$Type* $tmp4756;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4748 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4748 = p_f0;
    {
        panda$core$String** $tmp4750 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4749 = *$tmp4750;
        panda$core$String** $tmp4751 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4752 = p_f1;
        *$tmp4751 = $tmp4752;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4752));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4749));
    }
    {
        org$pandalanguage$pandac$Type** $tmp4754 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp4753 = *$tmp4754;
        org$pandalanguage$pandac$Type** $tmp4755 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp4756 = p_f2;
        *$tmp4755 = $tmp4756;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4756));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4753));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp4758;
    org$pandalanguage$pandac$Variable* $tmp4761;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4757 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4757 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp4759 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp4758 = *$tmp4759;
        org$pandalanguage$pandac$Variable** $tmp4760 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp4761 = p_f1;
        *$tmp4760 = $tmp4761;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4761));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4758));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp4763;
    panda$core$String* $tmp4766;
    org$pandalanguage$pandac$IRNode* $tmp4767;
    org$pandalanguage$pandac$IRNode* $tmp4770;
    panda$collections$ImmutableArray* $tmp4771;
    panda$collections$ImmutableArray* $tmp4774;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4762 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4762 = p_f0;
    {
        panda$core$String** $tmp4764 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4763 = *$tmp4764;
        panda$core$String** $tmp4765 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4766 = p_f1;
        *$tmp4765 = $tmp4766;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4766));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4763));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4768 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4767 = *$tmp4768;
        org$pandalanguage$pandac$IRNode** $tmp4769 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4770 = p_f2;
        *$tmp4769 = $tmp4770;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4770));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4767));
    }
    {
        panda$collections$ImmutableArray** $tmp4772 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4771 = *$tmp4772;
        panda$collections$ImmutableArray** $tmp4773 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4774 = p_f3;
        *$tmp4773 = $tmp4774;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4774));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4771));
    }
}

