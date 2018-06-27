#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "panda/collections/Array.h"
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
#include "panda/collections/CollectionView.h"
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
typedef org$pandalanguage$pandac$Type* (*$fn101)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn164)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn190)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn229)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn232)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn240)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn400)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn414)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn422)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn520)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn644)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn647)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn669)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn673)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn695)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn702)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn713)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn715)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn751)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn758)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn769)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn771)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn804)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn826)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn839)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn852)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn859)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn870)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn872)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn902)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn915)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn922)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn933)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn935)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn944)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn957)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn965)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn983)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn990)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1001)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1003)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1023)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1036)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1043)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1054)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1056)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1073)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1080)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1091)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1093)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1124)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1134)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1147)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1154)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1165)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1167)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1188)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1201)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1235)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1238)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1242)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1300)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1307)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1318)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1320)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1356)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1363)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1374)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1376)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1393)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1400)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1411)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1413)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1431)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1444)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1451)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1462)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1464)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1538)(org$pandalanguage$pandac$IRNode*, panda$core$MutableMethod*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1573)(panda$core$Object*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1574)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1728)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1731)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1769)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1772)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn1825)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn1828)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn1857)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn1991)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1994)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2026)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2029)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2061)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2064)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2133)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2136)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2139)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2250)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2253)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn2256)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2344)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2347)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2434)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2437)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2440)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2498)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn2501)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2537)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2540)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$core$String* (*$fn2612)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2655)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2662)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2673)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2711)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2718)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2729)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2745)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2752)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2763)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2813)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2831)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2864)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2904)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2955)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2960)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2975)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2980)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn3016)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3023)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3034)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3065)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3073)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn3091)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3111)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn3152)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3159)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3170)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3254)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3261)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3272)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3317)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3324)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3335)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3351)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3358)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3369)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3396)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn3486)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3493)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3504)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3667)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3674)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3696)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3734)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3756)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3774)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3858)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3899)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3908)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3949)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3956)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3967)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s2573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static panda$core$String $s2732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x66\x69\x6e\x61\x6c\x6c\x79\x20\x7b\x0a", 12, -1355183944487068280, NULL };
static panda$core$String $s2766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s2922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s2932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s2934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s2957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s3037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s3221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s3243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s3275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s3423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s3438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s3473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s3476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s3507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s3555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s3559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s3578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s3581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s3594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66\x2d\x2a\x63\x61\x70\x74\x75\x72\x65\x2a\x2d", 15, 7664694969176949793, NULL };
static panda$core$String $s3603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s3610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s3628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s3633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s3636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s3677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s3692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s3702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s3723 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s3751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s3815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s3818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s3820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s3848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s3851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s3854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s3880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x63\x61\x70\x74\x75\x72\x65\x2a\x2d", 11, -3294192213738444701, NULL };
static panda$core$String $s3895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s3902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s3905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s3939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s3970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };

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
    org$pandalanguage$pandac$ChoiceEntry* ce45 = NULL;
    org$pandalanguage$pandac$Type* $tmp47;
    org$pandalanguage$pandac$Type* $tmp48;
    panda$core$Int64 $tmp52;
    org$pandalanguage$pandac$ChoiceEntry* ce54 = NULL;
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
    panda$core$Int64 $tmp90;
    panda$core$Int64 $tmp95;
    org$pandalanguage$pandac$IRNode* expr97 = NULL;
    org$pandalanguage$pandac$Type* $tmp99;
    org$pandalanguage$pandac$Type* $tmp100;
    panda$core$Int64 $tmp105;
    org$pandalanguage$pandac$Type* type107 = NULL;
    org$pandalanguage$pandac$Type* $tmp109;
    panda$core$Int64 $tmp112;
    org$pandalanguage$pandac$Type* type114 = NULL;
    org$pandalanguage$pandac$Type* $tmp116;
    panda$core$Int64 $tmp119;
    org$pandalanguage$pandac$Type* $tmp121;
    org$pandalanguage$pandac$Type* $tmp122;
    panda$core$Int64 $tmp126;
    org$pandalanguage$pandac$Type* $tmp128;
    org$pandalanguage$pandac$Type* $tmp129;
    panda$core$Int64 $tmp133;
    org$pandalanguage$pandac$Type* type135 = NULL;
    org$pandalanguage$pandac$IRNode* target137 = NULL;
    org$pandalanguage$pandac$MethodRef* m139 = NULL;
    org$pandalanguage$pandac$Type* $tmp141;
    panda$core$Int64 $tmp144;
    org$pandalanguage$pandac$Type* type146 = NULL;
    org$pandalanguage$pandac$Type* $tmp148;
    panda$core$Int64 $tmp151;
    org$pandalanguage$pandac$Type* type153 = NULL;
    org$pandalanguage$pandac$Type* $tmp155;
    panda$core$Int64 $tmp158;
    org$pandalanguage$pandac$IRNode* base160 = NULL;
    org$pandalanguage$pandac$Type* $tmp162;
    org$pandalanguage$pandac$Type* $tmp163;
    panda$core$Int64 $tmp168;
    org$pandalanguage$pandac$Type* type170 = NULL;
    org$pandalanguage$pandac$Type* $tmp172;
    panda$core$Int64 $tmp175;
    org$pandalanguage$pandac$Type* type177 = NULL;
    panda$core$Int64 id179;
    org$pandalanguage$pandac$Type* $tmp181;
    panda$core$Int64 $tmp184;
    org$pandalanguage$pandac$IRNode* base186 = NULL;
    org$pandalanguage$pandac$Type* $tmp188;
    org$pandalanguage$pandac$Type* $tmp189;
    panda$core$Int64 $tmp194;
    org$pandalanguage$pandac$Type* type196 = NULL;
    org$pandalanguage$pandac$Type* $tmp198;
    panda$core$Int64 $tmp201;
    org$pandalanguage$pandac$Type* type203 = NULL;
    org$pandalanguage$pandac$Type* $tmp205;
    panda$core$Int64 $tmp208;
    org$pandalanguage$pandac$Type* $tmp210;
    org$pandalanguage$pandac$Type* $tmp211;
    panda$core$Int64 $tmp215;
    org$pandalanguage$pandac$Type* type217 = NULL;
    org$pandalanguage$pandac$Type* $tmp219;
    panda$core$Int64 $tmp222;
    org$pandalanguage$pandac$IRNode* ifTrue224 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse226 = NULL;
    org$pandalanguage$pandac$Type* $tmp228;
    org$pandalanguage$pandac$Type* $tmp231;
    org$pandalanguage$pandac$Type* $tmp238;
    org$pandalanguage$pandac$Type* $tmp239;
    panda$core$Int64 $tmp244;
    org$pandalanguage$pandac$Type* $tmp246;
    org$pandalanguage$pandac$Type* $tmp247;
    panda$core$Int64 $tmp251;
    org$pandalanguage$pandac$Type* $tmp253;
    org$pandalanguage$pandac$Type* $tmp254;
    panda$core$Int64 $tmp258;
    org$pandalanguage$pandac$Type* type260 = NULL;
    org$pandalanguage$pandac$Type* $tmp262;
    panda$core$Int64 $tmp265;
    org$pandalanguage$pandac$Type* $tmp267;
    org$pandalanguage$pandac$Type* $tmp268;
    panda$core$Int64 $tmp272;
    org$pandalanguage$pandac$Type* type274 = NULL;
    org$pandalanguage$pandac$Type* $tmp276;
    panda$core$Int64 $tmp279;
    org$pandalanguage$pandac$Type* $tmp281;
    org$pandalanguage$pandac$Type* $tmp282;
    panda$core$Int64 $tmp286;
    org$pandalanguage$pandac$Type* $tmp288;
    org$pandalanguage$pandac$Type* $tmp289;
    panda$core$Int64 $tmp293;
    org$pandalanguage$pandac$Type* type295 = NULL;
    org$pandalanguage$pandac$Type* $tmp297;
    panda$core$Int64 $tmp300;
    org$pandalanguage$pandac$Variable* variable302 = NULL;
    org$pandalanguage$pandac$Type* $tmp304;
    panda$core$Bit $tmp307;
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
            org$pandalanguage$pandac$ChoiceEntry** $tmp46 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$76_95->$data + 16));
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
            org$pandalanguage$pandac$ChoiceEntry** $tmp55 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$76_95->$data + 24));
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
            panda$core$Int64 $tmp89 = panda$collections$Array$get_count$R$panda$core$Int64($tmp86->subtypes);
            panda$core$Int64$init$builtin_int64(&$tmp90, 1);
            panda$core$Int64 $tmp91 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp89, $tmp90);
            panda$core$Object* $tmp92 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp83->subtypes, $tmp91);
            $tmp82 = $tmp92;
            $tmp81 = ((org$pandalanguage$pandac$Type*) $tmp82);
            $returnValue11 = $tmp81;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp81));
            panda$core$Panda$unref$panda$core$Object($tmp82);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
            $tmp4 = 9;
            goto $l2;
            $l93:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp95, 17);
        panda$core$Bit $tmp96 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp95);
        if ($tmp96.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp98 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 0));
            expr97 = *$tmp98;
            org$pandalanguage$pandac$Type* $tmp102 = (($fn101) expr97->$class->vtable[2])(expr97);
            $tmp100 = $tmp102;
            $tmp99 = $tmp100;
            $returnValue11 = $tmp99;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
            $tmp4 = 10;
            goto $l2;
            $l103:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp105, 18);
        panda$core$Bit $tmp106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp105);
        if ($tmp106.value) {
        {
            org$pandalanguage$pandac$Type** $tmp108 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type107 = *$tmp108;
            $tmp109 = type107;
            $returnValue11 = $tmp109;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
            $tmp4 = 11;
            goto $l2;
            $l110:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp112, 20);
        panda$core$Bit $tmp113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp112);
        if ($tmp113.value) {
        {
            org$pandalanguage$pandac$Type** $tmp115 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type114 = *$tmp115;
            $tmp116 = type114;
            $returnValue11 = $tmp116;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
            $tmp4 = 12;
            goto $l2;
            $l117:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp119, 21);
        panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp119);
        if ($tmp120.value) {
        {
            org$pandalanguage$pandac$Type* $tmp123 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp122 = $tmp123;
            $tmp121 = $tmp122;
            $returnValue11 = $tmp121;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
            $tmp4 = 13;
            goto $l2;
            $l124:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp126, 22);
        panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp126);
        if ($tmp127.value) {
        {
            org$pandalanguage$pandac$Type* $tmp130 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp129 = $tmp130;
            $tmp128 = $tmp129;
            $returnValue11 = $tmp128;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
            $tmp4 = 14;
            goto $l2;
            $l131:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp133, 25);
        panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp133);
        if ($tmp134.value) {
        {
            org$pandalanguage$pandac$Type** $tmp136 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type135 = *$tmp136;
            org$pandalanguage$pandac$IRNode** $tmp138 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 24));
            target137 = *$tmp138;
            org$pandalanguage$pandac$MethodRef** $tmp140 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$76_95->$data + 32));
            m139 = *$tmp140;
            $tmp141 = type135;
            $returnValue11 = $tmp141;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp141));
            $tmp4 = 15;
            goto $l2;
            $l142:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp144, 26);
        panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp144);
        if ($tmp145.value) {
        {
            org$pandalanguage$pandac$Type** $tmp147 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type146 = *$tmp147;
            $tmp148 = type146;
            $returnValue11 = $tmp148;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
            $tmp4 = 16;
            goto $l2;
            $l149:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp151, 27);
        panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp151);
        if ($tmp152.value) {
        {
            org$pandalanguage$pandac$Type** $tmp154 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type153 = *$tmp154;
            $tmp155 = type153;
            $returnValue11 = $tmp155;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
            $tmp4 = 17;
            goto $l2;
            $l156:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp158, 28);
        panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp158);
        if ($tmp159.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp161 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 24));
            base160 = *$tmp161;
            org$pandalanguage$pandac$Type* $tmp165 = (($fn164) base160->$class->vtable[2])(base160);
            $tmp163 = $tmp165;
            $tmp162 = $tmp163;
            $returnValue11 = $tmp162;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp162));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp163));
            $tmp4 = 18;
            goto $l2;
            $l166:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp168, 30);
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp168);
        if ($tmp169.value) {
        {
            org$pandalanguage$pandac$Type** $tmp171 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type170 = *$tmp171;
            $tmp172 = type170;
            $returnValue11 = $tmp172;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
            $tmp4 = 19;
            goto $l2;
            $l173:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp175, 32);
        panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp175);
        if ($tmp176.value) {
        {
            org$pandalanguage$pandac$Type** $tmp178 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type177 = *$tmp178;
            panda$core$Int64* $tmp180 = ((panda$core$Int64*) ((char*) $match$76_95->$data + 24));
            id179 = *$tmp180;
            $tmp181 = type177;
            $returnValue11 = $tmp181;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
            $tmp4 = 20;
            goto $l2;
            $l182:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp184, 33);
        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp184);
        if ($tmp185.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp187 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 0));
            base186 = *$tmp187;
            org$pandalanguage$pandac$Type* $tmp191 = (($fn190) base186->$class->vtable[2])(base186);
            $tmp189 = $tmp191;
            $tmp188 = $tmp189;
            $returnValue11 = $tmp188;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp188));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
            $tmp4 = 21;
            goto $l2;
            $l192:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp194, 34);
        panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp194);
        if ($tmp195.value) {
        {
            org$pandalanguage$pandac$Type** $tmp197 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type196 = *$tmp197;
            $tmp198 = type196;
            $returnValue11 = $tmp198;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
            $tmp4 = 22;
            goto $l2;
            $l199:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp201, 35);
        panda$core$Bit $tmp202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp201);
        if ($tmp202.value) {
        {
            org$pandalanguage$pandac$Type** $tmp204 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type203 = *$tmp204;
            $tmp205 = type203;
            $returnValue11 = $tmp205;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
            $tmp4 = 23;
            goto $l2;
            $l206:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp208, 36);
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp208);
        if ($tmp209.value) {
        {
            org$pandalanguage$pandac$Type* $tmp212 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            $tmp211 = $tmp212;
            $tmp210 = $tmp211;
            $returnValue11 = $tmp210;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
            $tmp4 = 24;
            goto $l2;
            $l213:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp215, 37);
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp215);
        if ($tmp216.value) {
        {
            org$pandalanguage$pandac$Type** $tmp218 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type217 = *$tmp218;
            $tmp219 = type217;
            $returnValue11 = $tmp219;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp219));
            $tmp4 = 25;
            goto $l2;
            $l220:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp222, 38);
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp222);
        if ($tmp223.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp225 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 24));
            ifTrue224 = *$tmp225;
            org$pandalanguage$pandac$IRNode** $tmp227 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 32));
            ifFalse226 = *$tmp227;
            org$pandalanguage$pandac$Type* $tmp230 = (($fn229) ifTrue224->$class->vtable[2])(ifTrue224);
            $tmp228 = $tmp230;
            org$pandalanguage$pandac$Type* $tmp233 = (($fn232) ifFalse226->$class->vtable[2])(ifFalse226);
            $tmp231 = $tmp233;
            panda$core$Bit $tmp234 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp228, $tmp231);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp231));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
            if ($tmp234.value) goto $l235; else goto $l236;
            $l236:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s237, (panda$core$Int64) { 130 });
            abort();
            $l235:;
            org$pandalanguage$pandac$Type* $tmp241 = (($fn240) ifTrue224->$class->vtable[2])(ifTrue224);
            $tmp239 = $tmp241;
            $tmp238 = $tmp239;
            $returnValue11 = $tmp238;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
            $tmp4 = 26;
            goto $l2;
            $l242:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp244, 39);
        panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp244);
        if ($tmp245.value) {
        {
            org$pandalanguage$pandac$Type* $tmp248 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            $tmp247 = $tmp248;
            $tmp246 = $tmp247;
            $returnValue11 = $tmp246;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
            $tmp4 = 27;
            goto $l2;
            $l249:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp251, 40);
        panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp251);
        if ($tmp252.value) {
        {
            org$pandalanguage$pandac$Type* $tmp255 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp254 = $tmp255;
            $tmp253 = $tmp254;
            $returnValue11 = $tmp253;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
            $tmp4 = 28;
            goto $l2;
            $l256:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp258, 41);
        panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp258);
        if ($tmp259.value) {
        {
            org$pandalanguage$pandac$Type** $tmp261 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type260 = *$tmp261;
            $tmp262 = type260;
            $returnValue11 = $tmp262;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
            $tmp4 = 29;
            goto $l2;
            $l263:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp265, 42);
        panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp265);
        if ($tmp266.value) {
        {
            org$pandalanguage$pandac$Type* $tmp269 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp268 = $tmp269;
            $tmp267 = $tmp268;
            $returnValue11 = $tmp267;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp267));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268));
            $tmp4 = 30;
            goto $l2;
            $l270:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp272, 43);
        panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp272);
        if ($tmp273.value) {
        {
            org$pandalanguage$pandac$Type** $tmp275 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type274 = *$tmp275;
            $tmp276 = type274;
            $returnValue11 = $tmp276;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
            $tmp4 = 31;
            goto $l2;
            $l277:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp279, 44);
        panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp279);
        if ($tmp280.value) {
        {
            org$pandalanguage$pandac$Type* $tmp283 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp282 = $tmp283;
            $tmp281 = $tmp282;
            $returnValue11 = $tmp281;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp281));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
            $tmp4 = 32;
            goto $l2;
            $l284:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp286, 45);
        panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp286);
        if ($tmp287.value) {
        {
            org$pandalanguage$pandac$Type* $tmp290 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp289 = $tmp290;
            $tmp288 = $tmp289;
            $returnValue11 = $tmp288;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp288));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
            $tmp4 = 33;
            goto $l2;
            $l291:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp293, 47);
        panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp293);
        if ($tmp294.value) {
        {
            org$pandalanguage$pandac$Type** $tmp296 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 24));
            type295 = *$tmp296;
            $tmp297 = type295;
            $returnValue11 = $tmp297;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
            $tmp4 = 34;
            goto $l2;
            $l298:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp300, 48);
        panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp300);
        if ($tmp301.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp303 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$76_95->$data + 16));
            variable302 = *$tmp303;
            $tmp304 = variable302->type;
            $returnValue11 = $tmp304;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp304));
            $tmp4 = 35;
            goto $l2;
            $l305:;
            return $returnValue11;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp307, false);
            if ($tmp307.value) goto $l308; else goto $l309;
            $l309:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s310, (panda$core$Int64) { 151 });
            abort();
            $l308:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        case 22: goto $l199;
        case 15: goto $l142;
        case 24: goto $l213;
        case 33: goto $l291;
        case 8: goto $l75;
        case 3: goto $l34;
        case 28: goto $l256;
        case 5: goto $l50;
        case 11: goto $l110;
        case 7: goto $l68;
        case 13: goto $l124;
        case 25: goto $l220;
        case 31: goto $l277;
        case 20: goto $l182;
        case -1: goto $l311;
        case 27: goto $l249;
        case 12: goto $l117;
        case 23: goto $l206;
        case 1: goto $l20;
        case 18: goto $l166;
        case 0: goto $l13;
        case 9: goto $l93;
        case 32: goto $l284;
        case 21: goto $l192;
        case 29: goto $l263;
        case 4: goto $l41;
        case 26: goto $l242;
        case 10: goto $l103;
        case 6: goto $l61;
        case 30: goto $l270;
        case 17: goto $l156;
        case 35: goto $l305;
        case 14: goto $l131;
        case 34: goto $l298;
        case 19: goto $l173;
        case 16: goto $l149;
        case 2: goto $l27;
    }
    $l311:;
    abort();
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$156_9315 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp316;
    panda$core$Int64 $tmp317;
    org$pandalanguage$pandac$Position position319;
    org$pandalanguage$pandac$Position $returnValue321;
    panda$core$Int64 $tmp324;
    org$pandalanguage$pandac$Position position326;
    panda$core$Int64 $tmp330;
    org$pandalanguage$pandac$Position position332;
    panda$core$Int64 $tmp336;
    org$pandalanguage$pandac$Position position338;
    panda$core$Int64 $tmp342;
    org$pandalanguage$pandac$Position position344;
    panda$core$Int64 $tmp348;
    org$pandalanguage$pandac$Position position350;
    panda$core$Int64 $tmp354;
    org$pandalanguage$pandac$Position position356;
    panda$core$Int64 $tmp360;
    org$pandalanguage$pandac$Position position362;
    panda$core$Int64 $tmp366;
    org$pandalanguage$pandac$Position position368;
    panda$core$Int64 $tmp372;
    org$pandalanguage$pandac$Position position374;
    panda$core$Int64 $tmp378;
    org$pandalanguage$pandac$Position position380;
    panda$core$Int64 $tmp384;
    org$pandalanguage$pandac$Position position386;
    panda$core$Int64 $tmp390;
    org$pandalanguage$pandac$Position position392;
    panda$core$Int64 $tmp396;
    org$pandalanguage$pandac$IRNode* target398 = NULL;
    panda$core$Int64 $tmp404;
    org$pandalanguage$pandac$Position position406;
    panda$core$Int64 $tmp410;
    org$pandalanguage$pandac$IRNode* m412 = NULL;
    panda$core$Int64 $tmp418;
    org$pandalanguage$pandac$IRNode* expr420 = NULL;
    panda$core$Int64 $tmp426;
    org$pandalanguage$pandac$Position position428;
    panda$core$Int64 $tmp432;
    org$pandalanguage$pandac$Position position434;
    panda$core$Int64 $tmp438;
    org$pandalanguage$pandac$Position position440;
    panda$core$Int64 $tmp444;
    org$pandalanguage$pandac$Position position446;
    panda$core$Int64 $tmp450;
    org$pandalanguage$pandac$Position position452;
    panda$core$Int64 $tmp456;
    org$pandalanguage$pandac$Position position458;
    panda$core$Int64 $tmp462;
    org$pandalanguage$pandac$Position position464;
    panda$core$Int64 $tmp468;
    org$pandalanguage$pandac$Position position470;
    panda$core$Int64 $tmp474;
    org$pandalanguage$pandac$Position position476;
    panda$core$Int64 $tmp480;
    org$pandalanguage$pandac$Position position482;
    panda$core$Int64 $tmp486;
    org$pandalanguage$pandac$Position position488;
    panda$core$Int64 $tmp492;
    org$pandalanguage$pandac$Position position494;
    panda$core$Int64 $tmp498;
    org$pandalanguage$pandac$Position position500;
    panda$core$Int64 $tmp504;
    org$pandalanguage$pandac$Position position506;
    panda$core$Int64 $tmp510;
    org$pandalanguage$pandac$Position position512;
    panda$core$Int64 $tmp516;
    org$pandalanguage$pandac$IRNode* base518 = NULL;
    panda$core$Int64 $tmp524;
    org$pandalanguage$pandac$Position position526;
    panda$core$Int64 $tmp530;
    org$pandalanguage$pandac$Position position532;
    panda$core$Int64 $tmp536;
    org$pandalanguage$pandac$Position position538;
    panda$core$Int64 $tmp542;
    org$pandalanguage$pandac$Position position544;
    panda$core$Int64 $tmp548;
    org$pandalanguage$pandac$Position position550;
    panda$core$Int64 $tmp554;
    org$pandalanguage$pandac$Position position556;
    panda$core$Int64 $tmp560;
    org$pandalanguage$pandac$Position position562;
    panda$core$Int64 $tmp566;
    org$pandalanguage$pandac$Position position568;
    panda$core$Int64 $tmp572;
    org$pandalanguage$pandac$Position position574;
    panda$core$Int64 $tmp578;
    org$pandalanguage$pandac$Position position580;
    panda$core$Int64 $tmp584;
    org$pandalanguage$pandac$Position position586;
    panda$core$Int64 $tmp590;
    org$pandalanguage$pandac$Position position592;
    panda$core$Int64 $tmp596;
    org$pandalanguage$pandac$Position position598;
    panda$core$Int64 $tmp602;
    org$pandalanguage$pandac$Position position604;
    panda$core$Int64 $tmp608;
    org$pandalanguage$pandac$Position position610;
    panda$core$Int64 $tmp614;
    org$pandalanguage$pandac$Position position616;
    panda$core$Int64 $tmp620;
    org$pandalanguage$pandac$Position position622;
    panda$core$Bit $tmp626;
    int $tmp314;
    {
        $tmp316 = self;
        $match$156_9315 = $tmp316;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp316));
        panda$core$Int64$init$builtin_int64(&$tmp317, 0);
        panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp317);
        if ($tmp318.value) {
        {
            org$pandalanguage$pandac$Position* $tmp320 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position319 = *$tmp320;
            $returnValue321 = position319;
            $tmp314 = 0;
            goto $l312;
            $l322:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp324, 1);
        panda$core$Bit $tmp325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp324);
        if ($tmp325.value) {
        {
            org$pandalanguage$pandac$Position* $tmp327 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position326 = *$tmp327;
            $returnValue321 = position326;
            $tmp314 = 1;
            goto $l312;
            $l328:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp330, 2);
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp330);
        if ($tmp331.value) {
        {
            org$pandalanguage$pandac$Position* $tmp333 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position332 = *$tmp333;
            $returnValue321 = position332;
            $tmp314 = 2;
            goto $l312;
            $l334:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp336, 3);
        panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp336);
        if ($tmp337.value) {
        {
            org$pandalanguage$pandac$Position* $tmp339 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position338 = *$tmp339;
            $returnValue321 = position338;
            $tmp314 = 3;
            goto $l312;
            $l340:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp342, 4);
        panda$core$Bit $tmp343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp342);
        if ($tmp343.value) {
        {
            org$pandalanguage$pandac$Position* $tmp345 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position344 = *$tmp345;
            $returnValue321 = position344;
            $tmp314 = 4;
            goto $l312;
            $l346:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp348, 6);
        panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp348);
        if ($tmp349.value) {
        {
            org$pandalanguage$pandac$Position* $tmp351 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position350 = *$tmp351;
            $returnValue321 = position350;
            $tmp314 = 5;
            goto $l312;
            $l352:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp354, 7);
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp354);
        if ($tmp355.value) {
        {
            org$pandalanguage$pandac$Position* $tmp357 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position356 = *$tmp357;
            $returnValue321 = position356;
            $tmp314 = 6;
            goto $l312;
            $l358:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp360, 8);
        panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp360);
        if ($tmp361.value) {
        {
            org$pandalanguage$pandac$Position* $tmp363 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position362 = *$tmp363;
            $returnValue321 = position362;
            $tmp314 = 7;
            goto $l312;
            $l364:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp366, 9);
        panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp366);
        if ($tmp367.value) {
        {
            org$pandalanguage$pandac$Position* $tmp369 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position368 = *$tmp369;
            $returnValue321 = position368;
            $tmp314 = 8;
            goto $l312;
            $l370:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp372, 10);
        panda$core$Bit $tmp373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp372);
        if ($tmp373.value) {
        {
            org$pandalanguage$pandac$Position* $tmp375 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position374 = *$tmp375;
            $returnValue321 = position374;
            $tmp314 = 9;
            goto $l312;
            $l376:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp378, 11);
        panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp378);
        if ($tmp379.value) {
        {
            org$pandalanguage$pandac$Position* $tmp381 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position380 = *$tmp381;
            $returnValue321 = position380;
            $tmp314 = 10;
            goto $l312;
            $l382:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp384, 12);
        panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp384);
        if ($tmp385.value) {
        {
            org$pandalanguage$pandac$Position* $tmp387 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position386 = *$tmp387;
            $returnValue321 = position386;
            $tmp314 = 11;
            goto $l312;
            $l388:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp390, 13);
        panda$core$Bit $tmp391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp390);
        if ($tmp391.value) {
        {
            org$pandalanguage$pandac$Position* $tmp393 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position392 = *$tmp393;
            $returnValue321 = position392;
            $tmp314 = 12;
            goto $l312;
            $l394:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp396, 14);
        panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp396);
        if ($tmp397.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp399 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9315->$data + 0));
            target398 = *$tmp399;
            org$pandalanguage$pandac$Position $tmp401 = (($fn400) target398->$class->vtable[3])(target398);
            $returnValue321 = $tmp401;
            $tmp314 = 13;
            goto $l312;
            $l402:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp404, 15);
        panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp404);
        if ($tmp405.value) {
        {
            org$pandalanguage$pandac$Position* $tmp407 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position406 = *$tmp407;
            $returnValue321 = position406;
            $tmp314 = 14;
            goto $l312;
            $l408:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp410, 16);
        panda$core$Bit $tmp411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp410);
        if ($tmp411.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp413 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9315->$data + 0));
            m412 = *$tmp413;
            org$pandalanguage$pandac$Position $tmp415 = (($fn414) m412->$class->vtable[3])(m412);
            $returnValue321 = $tmp415;
            $tmp314 = 15;
            goto $l312;
            $l416:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp418, 17);
        panda$core$Bit $tmp419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp418);
        if ($tmp419.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp421 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9315->$data + 0));
            expr420 = *$tmp421;
            org$pandalanguage$pandac$Position $tmp423 = (($fn422) expr420->$class->vtable[3])(expr420);
            $returnValue321 = $tmp423;
            $tmp314 = 16;
            goto $l312;
            $l424:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp426, 18);
        panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp426);
        if ($tmp427.value) {
        {
            org$pandalanguage$pandac$Position* $tmp429 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position428 = *$tmp429;
            $returnValue321 = position428;
            $tmp314 = 17;
            goto $l312;
            $l430:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp432, 19);
        panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp432);
        if ($tmp433.value) {
        {
            org$pandalanguage$pandac$Position* $tmp435 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position434 = *$tmp435;
            $returnValue321 = position434;
            $tmp314 = 18;
            goto $l312;
            $l436:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp438, 20);
        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp438);
        if ($tmp439.value) {
        {
            org$pandalanguage$pandac$Position* $tmp441 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position440 = *$tmp441;
            $returnValue321 = position440;
            $tmp314 = 19;
            goto $l312;
            $l442:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp444, 21);
        panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp444);
        if ($tmp445.value) {
        {
            org$pandalanguage$pandac$Position* $tmp447 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position446 = *$tmp447;
            $returnValue321 = position446;
            $tmp314 = 20;
            goto $l312;
            $l448:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp450, 22);
        panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp450);
        if ($tmp451.value) {
        {
            org$pandalanguage$pandac$Position* $tmp453 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position452 = *$tmp453;
            $returnValue321 = position452;
            $tmp314 = 21;
            goto $l312;
            $l454:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp456, 23);
        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp456);
        if ($tmp457.value) {
        {
            org$pandalanguage$pandac$Position* $tmp459 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position458 = *$tmp459;
            $returnValue321 = position458;
            $tmp314 = 22;
            goto $l312;
            $l460:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp462, 24);
        panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp462);
        if ($tmp463.value) {
        {
            org$pandalanguage$pandac$Position* $tmp465 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position464 = *$tmp465;
            $returnValue321 = position464;
            $tmp314 = 23;
            goto $l312;
            $l466:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp468, 25);
        panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp468);
        if ($tmp469.value) {
        {
            org$pandalanguage$pandac$Position* $tmp471 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position470 = *$tmp471;
            $returnValue321 = position470;
            $tmp314 = 24;
            goto $l312;
            $l472:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp474, 26);
        panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp474);
        if ($tmp475.value) {
        {
            org$pandalanguage$pandac$Position* $tmp477 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position476 = *$tmp477;
            $returnValue321 = position476;
            $tmp314 = 25;
            goto $l312;
            $l478:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp480, 27);
        panda$core$Bit $tmp481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp480);
        if ($tmp481.value) {
        {
            org$pandalanguage$pandac$Position* $tmp483 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position482 = *$tmp483;
            $returnValue321 = position482;
            $tmp314 = 26;
            goto $l312;
            $l484:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp486, 28);
        panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp486);
        if ($tmp487.value) {
        {
            org$pandalanguage$pandac$Position* $tmp489 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position488 = *$tmp489;
            $returnValue321 = position488;
            $tmp314 = 27;
            goto $l312;
            $l490:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp492, 29);
        panda$core$Bit $tmp493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp492);
        if ($tmp493.value) {
        {
            org$pandalanguage$pandac$Position* $tmp495 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position494 = *$tmp495;
            $returnValue321 = position494;
            $tmp314 = 28;
            goto $l312;
            $l496:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp498, 30);
        panda$core$Bit $tmp499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp498);
        if ($tmp499.value) {
        {
            org$pandalanguage$pandac$Position* $tmp501 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position500 = *$tmp501;
            $returnValue321 = position500;
            $tmp314 = 29;
            goto $l312;
            $l502:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp504, 31);
        panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp504);
        if ($tmp505.value) {
        {
            org$pandalanguage$pandac$Position* $tmp507 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position506 = *$tmp507;
            $returnValue321 = position506;
            $tmp314 = 30;
            goto $l312;
            $l508:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp510, 32);
        panda$core$Bit $tmp511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp510);
        if ($tmp511.value) {
        {
            org$pandalanguage$pandac$Position* $tmp513 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position512 = *$tmp513;
            $returnValue321 = position512;
            $tmp314 = 31;
            goto $l312;
            $l514:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp516, 33);
        panda$core$Bit $tmp517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp516);
        if ($tmp517.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp519 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9315->$data + 0));
            base518 = *$tmp519;
            org$pandalanguage$pandac$Position $tmp521 = (($fn520) base518->$class->vtable[3])(base518);
            $returnValue321 = $tmp521;
            $tmp314 = 32;
            goto $l312;
            $l522:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp524, 34);
        panda$core$Bit $tmp525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp524);
        if ($tmp525.value) {
        {
            org$pandalanguage$pandac$Position* $tmp527 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position526 = *$tmp527;
            $returnValue321 = position526;
            $tmp314 = 33;
            goto $l312;
            $l528:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp530, 35);
        panda$core$Bit $tmp531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp530);
        if ($tmp531.value) {
        {
            org$pandalanguage$pandac$Position* $tmp533 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position532 = *$tmp533;
            $returnValue321 = position532;
            $tmp314 = 34;
            goto $l312;
            $l534:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp536, 36);
        panda$core$Bit $tmp537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp536);
        if ($tmp537.value) {
        {
            org$pandalanguage$pandac$Position* $tmp539 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position538 = *$tmp539;
            $returnValue321 = position538;
            $tmp314 = 35;
            goto $l312;
            $l540:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp542, 37);
        panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp542);
        if ($tmp543.value) {
        {
            org$pandalanguage$pandac$Position* $tmp545 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position544 = *$tmp545;
            $returnValue321 = position544;
            $tmp314 = 36;
            goto $l312;
            $l546:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp548, 38);
        panda$core$Bit $tmp549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp548);
        if ($tmp549.value) {
        {
            org$pandalanguage$pandac$Position* $tmp551 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position550 = *$tmp551;
            $returnValue321 = position550;
            $tmp314 = 37;
            goto $l312;
            $l552:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp554, 39);
        panda$core$Bit $tmp555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp554);
        if ($tmp555.value) {
        {
            org$pandalanguage$pandac$Position* $tmp557 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position556 = *$tmp557;
            $returnValue321 = position556;
            $tmp314 = 38;
            goto $l312;
            $l558:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp560, 40);
        panda$core$Bit $tmp561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp560);
        if ($tmp561.value) {
        {
            org$pandalanguage$pandac$Position* $tmp563 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position562 = *$tmp563;
            $returnValue321 = position562;
            $tmp314 = 39;
            goto $l312;
            $l564:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp566, 41);
        panda$core$Bit $tmp567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp566);
        if ($tmp567.value) {
        {
            org$pandalanguage$pandac$Position* $tmp569 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position568 = *$tmp569;
            $returnValue321 = position568;
            $tmp314 = 40;
            goto $l312;
            $l570:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp572, 42);
        panda$core$Bit $tmp573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp572);
        if ($tmp573.value) {
        {
            org$pandalanguage$pandac$Position* $tmp575 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position574 = *$tmp575;
            $returnValue321 = position574;
            $tmp314 = 41;
            goto $l312;
            $l576:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp578, 43);
        panda$core$Bit $tmp579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp578);
        if ($tmp579.value) {
        {
            org$pandalanguage$pandac$Position* $tmp581 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position580 = *$tmp581;
            $returnValue321 = position580;
            $tmp314 = 42;
            goto $l312;
            $l582:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp584, 44);
        panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp584);
        if ($tmp585.value) {
        {
            org$pandalanguage$pandac$Position* $tmp587 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position586 = *$tmp587;
            $returnValue321 = position586;
            $tmp314 = 43;
            goto $l312;
            $l588:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp590, 45);
        panda$core$Bit $tmp591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp590);
        if ($tmp591.value) {
        {
            org$pandalanguage$pandac$Position* $tmp593 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position592 = *$tmp593;
            $returnValue321 = position592;
            $tmp314 = 44;
            goto $l312;
            $l594:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp596, 46);
        panda$core$Bit $tmp597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp596);
        if ($tmp597.value) {
        {
            org$pandalanguage$pandac$Position* $tmp599 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position598 = *$tmp599;
            $returnValue321 = position598;
            $tmp314 = 45;
            goto $l312;
            $l600:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp602, 47);
        panda$core$Bit $tmp603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp602);
        if ($tmp603.value) {
        {
            org$pandalanguage$pandac$Position* $tmp605 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position604 = *$tmp605;
            $returnValue321 = position604;
            $tmp314 = 46;
            goto $l312;
            $l606:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp608, 48);
        panda$core$Bit $tmp609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp608);
        if ($tmp609.value) {
        {
            org$pandalanguage$pandac$Position* $tmp611 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position610 = *$tmp611;
            $returnValue321 = position610;
            $tmp314 = 47;
            goto $l312;
            $l612:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp614, 49);
        panda$core$Bit $tmp615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp614);
        if ($tmp615.value) {
        {
            org$pandalanguage$pandac$Position* $tmp617 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position616 = *$tmp617;
            $returnValue321 = position616;
            $tmp314 = 48;
            goto $l312;
            $l618:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp620, 50);
        panda$core$Bit $tmp621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp620);
        if ($tmp621.value) {
        {
            org$pandalanguage$pandac$Position* $tmp623 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position622 = *$tmp623;
            $returnValue321 = position622;
            $tmp314 = 49;
            goto $l312;
            $l624:;
            return $returnValue321;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp626, false);
            if ($tmp626.value) goto $l627; else goto $l628;
            $l628:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s629, (panda$core$Int64) { 258 });
            abort();
            $l627:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp314 = -1;
    goto $l312;
    $l312:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
    switch ($tmp314) {
        case 16: goto $l424;
        case 10: goto $l382;
        case 39: goto $l564;
        case 44: goto $l594;
        case 37: goto $l552;
        case 9: goto $l376;
        case 32: goto $l522;
        case 36: goto $l546;
        case 12: goto $l394;
        case 17: goto $l430;
        case 8: goto $l370;
        case 43: goto $l588;
        case 2: goto $l334;
        case 0: goto $l322;
        case -1: goto $l630;
        case 27: goto $l490;
        case 1: goto $l328;
        case 35: goto $l540;
        case 15: goto $l416;
        case 25: goto $l478;
        case 45: goto $l600;
        case 19: goto $l442;
        case 21: goto $l454;
        case 14: goto $l408;
        case 26: goto $l484;
        case 18: goto $l436;
        case 3: goto $l340;
        case 34: goto $l534;
        case 5: goto $l352;
        case 4: goto $l346;
        case 22: goto $l460;
        case 20: goto $l448;
        case 33: goto $l528;
        case 47: goto $l612;
        case 31: goto $l514;
        case 46: goto $l606;
        case 6: goto $l358;
        case 40: goto $l570;
        case 30: goto $l508;
        case 11: goto $l388;
        case 13: goto $l402;
        case 29: goto $l502;
        case 7: goto $l364;
        case 24: goto $l472;
        case 41: goto $l576;
        case 48: goto $l618;
        case 38: goto $l558;
        case 28: goto $l496;
        case 42: goto $l582;
        case 49: goto $l624;
        case 23: goto $l466;
    }
    $l630:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$263_9634 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp635;
    panda$core$Int64 $tmp636;
    org$pandalanguage$pandac$IRNode* test638 = NULL;
    org$pandalanguage$pandac$IRNode* msg640 = NULL;
    panda$core$Bit $returnValue642;
    panda$core$Int64 $tmp652;
    panda$core$Bit $tmp654;
    panda$core$Int64 $tmp657;
    org$pandalanguage$pandac$IRNode* left659 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op661;
    org$pandalanguage$pandac$IRNode* right663 = NULL;
    panda$core$Int64 $tmp678;
    panda$core$Bit $tmp680;
    panda$core$Int64 $tmp683;
    panda$collections$ImmutableArray* statements685 = NULL;
    panda$collections$Iterator* Iter$273$17690 = NULL;
    panda$collections$Iterator* $tmp691;
    panda$collections$Iterator* $tmp692;
    org$pandalanguage$pandac$IRNode* s708 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp709;
    panda$core$Object* $tmp710;
    panda$core$Bit $tmp717;
    panda$core$Bit $tmp724;
    panda$core$Int64 $tmp727;
    panda$core$Bit $tmp729;
    panda$core$Int64 $tmp732;
    org$pandalanguage$pandac$MethodRef* m734 = NULL;
    panda$collections$ImmutableArray* args736 = NULL;
    panda$core$Int64 $tmp738;
    panda$core$Bit $tmp740;
    panda$collections$Iterator* Iter$285$17746 = NULL;
    panda$collections$Iterator* $tmp747;
    panda$collections$Iterator* $tmp748;
    org$pandalanguage$pandac$IRNode* arg764 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp765;
    panda$core$Object* $tmp766;
    panda$core$Bit $tmp773;
    panda$core$Bit $tmp780;
    panda$core$Int64 $tmp783;
    panda$core$Bit $tmp785;
    panda$core$Int64 $tmp788;
    panda$core$Bit $tmp790;
    panda$core$Int64 $tmp793;
    panda$core$Bit $tmp795;
    panda$core$Int64 $tmp798;
    org$pandalanguage$pandac$Type* type800 = NULL;
    org$pandalanguage$pandac$IRNode* call802 = NULL;
    panda$core$Int64 $tmp808;
    panda$core$Bit $tmp810;
    panda$core$Int64 $tmp813;
    panda$core$Bit $tmp815;
    panda$core$Int64 $tmp818;
    org$pandalanguage$pandac$IRNode* target820 = NULL;
    org$pandalanguage$pandac$IRNode* value822 = NULL;
    panda$core$Int64 $tmp831;
    panda$core$String* label833 = NULL;
    panda$collections$ImmutableArray* statements835 = NULL;
    org$pandalanguage$pandac$IRNode* test837 = NULL;
    panda$core$Bit $tmp841;
    panda$collections$Iterator* Iter$309$17847 = NULL;
    panda$collections$Iterator* $tmp848;
    panda$collections$Iterator* $tmp849;
    org$pandalanguage$pandac$IRNode* s865 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp866;
    panda$core$Object* $tmp867;
    panda$core$Bit $tmp874;
    panda$core$Bit $tmp881;
    panda$core$Int64 $tmp884;
    panda$core$Bit $tmp886;
    panda$core$Int64 $tmp889;
    panda$core$Bit $tmp891;
    panda$core$Int64 $tmp894;
    org$pandalanguage$pandac$IRNode* test896 = NULL;
    panda$collections$ImmutableArray* ifTrue898 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse900 = NULL;
    panda$core$Bit $tmp904;
    panda$collections$Iterator* Iter$323$17910 = NULL;
    panda$collections$Iterator* $tmp911;
    panda$collections$Iterator* $tmp912;
    org$pandalanguage$pandac$IRNode* s928 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp929;
    panda$core$Object* $tmp930;
    panda$core$Bit $tmp937;
    panda$core$Int64 $tmp948;
    panda$core$Bit $tmp950;
    panda$core$Int64 $tmp953;
    org$pandalanguage$pandac$IRNode* value955 = NULL;
    panda$core$Int64 $tmp961;
    org$pandalanguage$pandac$IRNode* value963 = NULL;
    panda$core$Int64 $tmp969;
    panda$core$String* label971 = NULL;
    panda$collections$ImmutableArray* statements973 = NULL;
    panda$collections$Iterator* Iter$336$17978 = NULL;
    panda$collections$Iterator* $tmp979;
    panda$collections$Iterator* $tmp980;
    org$pandalanguage$pandac$IRNode* s996 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp997;
    panda$core$Object* $tmp998;
    panda$core$Bit $tmp1005;
    panda$core$Bit $tmp1012;
    panda$core$Int64 $tmp1015;
    org$pandalanguage$pandac$IRNode* value1017 = NULL;
    panda$collections$ImmutableArray* whens1019 = NULL;
    panda$collections$ImmutableArray* other1021 = NULL;
    panda$core$Bit $tmp1025;
    panda$collections$Iterator* Iter$346$171031 = NULL;
    panda$collections$Iterator* $tmp1032;
    panda$collections$Iterator* $tmp1033;
    org$pandalanguage$pandac$IRNode* w1049 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1050;
    panda$core$Object* $tmp1051;
    panda$core$Bit $tmp1058;
    panda$collections$Iterator* Iter$351$171068 = NULL;
    panda$collections$Iterator* $tmp1069;
    panda$collections$Iterator* $tmp1070;
    org$pandalanguage$pandac$IRNode* s1086 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1087;
    panda$core$Object* $tmp1088;
    panda$core$Bit $tmp1095;
    panda$core$Bit $tmp1102;
    panda$core$Int64 $tmp1105;
    panda$core$Bit $tmp1107;
    panda$core$Int64 $tmp1110;
    panda$core$Bit $tmp1112;
    panda$core$Int64 $tmp1115;
    panda$core$Bit $tmp1117;
    panda$core$Int64 $tmp1120;
    org$pandalanguage$pandac$IRNode* base1122 = NULL;
    panda$core$Int64 $tmp1128;
    org$pandalanguage$pandac$IRNode* list1130 = NULL;
    panda$collections$ImmutableArray* statements1132 = NULL;
    panda$core$Bit $tmp1136;
    panda$collections$Iterator* Iter$370$171142 = NULL;
    panda$collections$Iterator* $tmp1143;
    panda$collections$Iterator* $tmp1144;
    org$pandalanguage$pandac$IRNode* s1160 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1161;
    panda$core$Object* $tmp1162;
    panda$core$Bit $tmp1169;
    panda$core$Bit $tmp1176;
    panda$core$Int64 $tmp1179;
    panda$core$Bit $tmp1181;
    panda$core$Int64 $tmp1184;
    org$pandalanguage$pandac$IRNode* value1186 = NULL;
    panda$core$Int64 $tmp1192;
    panda$core$Bit $tmp1194;
    panda$core$Int64 $tmp1197;
    org$pandalanguage$pandac$IRNode* base1199 = NULL;
    panda$core$Int64 $tmp1205;
    panda$core$Bit $tmp1207;
    panda$core$Int64 $tmp1210;
    panda$core$Bit $tmp1212;
    panda$core$Int64 $tmp1215;
    panda$core$Bit $tmp1217;
    panda$core$Int64 $tmp1220;
    panda$core$Bit $tmp1222;
    panda$core$Int64 $tmp1225;
    org$pandalanguage$pandac$IRNode* test1227 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue1229 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1231 = NULL;
    panda$core$Int64 $tmp1247;
    panda$core$Bit $tmp1249;
    panda$core$Int64 $tmp1252;
    panda$core$Bit $tmp1254;
    panda$core$Int64 $tmp1258;
    panda$core$Bit $tmp1260;
    panda$core$Int64 $tmp1264;
    panda$core$Bit $tmp1266;
    panda$core$Int64 $tmp1270;
    panda$core$Bit $tmp1272;
    panda$core$Int64 $tmp1276;
    panda$core$Bit $tmp1278;
    panda$core$Int64 $tmp1282;
    panda$core$Bit $tmp1284;
    panda$core$Int64 $tmp1288;
    panda$collections$ImmutableArray* decls1290 = NULL;
    panda$collections$Iterator* Iter$409$171295 = NULL;
    panda$collections$Iterator* $tmp1296;
    panda$collections$Iterator* $tmp1297;
    org$pandalanguage$pandac$IRNode* d1313 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1314;
    panda$core$Object* $tmp1315;
    panda$core$Bit $tmp1322;
    panda$core$Bit $tmp1329;
    panda$core$Int64 $tmp1332;
    panda$core$Bit $tmp1334;
    panda$core$Int64 $tmp1337;
    panda$core$Bit $tmp1339;
    panda$core$Int64 $tmp1342;
    panda$collections$ImmutableArray* tests1344 = NULL;
    panda$collections$ImmutableArray* statements1346 = NULL;
    panda$collections$Iterator* Iter$420$171351 = NULL;
    panda$collections$Iterator* $tmp1352;
    panda$collections$Iterator* $tmp1353;
    org$pandalanguage$pandac$IRNode* t1369 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1370;
    panda$core$Object* $tmp1371;
    panda$core$Bit $tmp1378;
    panda$collections$Iterator* Iter$425$171388 = NULL;
    panda$collections$Iterator* $tmp1389;
    panda$collections$Iterator* $tmp1390;
    org$pandalanguage$pandac$IRNode* s1406 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1407;
    panda$core$Object* $tmp1408;
    panda$core$Bit $tmp1415;
    panda$core$Bit $tmp1422;
    panda$core$Int64 $tmp1425;
    org$pandalanguage$pandac$IRNode* test1427 = NULL;
    panda$collections$ImmutableArray* statements1429 = NULL;
    panda$core$Bit $tmp1433;
    panda$collections$Iterator* Iter$435$171439 = NULL;
    panda$collections$Iterator* $tmp1440;
    panda$collections$Iterator* $tmp1441;
    org$pandalanguage$pandac$IRNode* s1457 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1458;
    panda$core$Object* $tmp1459;
    panda$core$Bit $tmp1466;
    panda$core$Bit $tmp1473;
    panda$core$Bit $tmp1476;
    int $tmp633;
    {
        $tmp635 = self;
        $match$263_9634 = $tmp635;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp635));
        panda$core$Int64$init$builtin_int64(&$tmp636, 0);
        panda$core$Bit $tmp637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp636);
        if ($tmp637.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp639 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 16));
            test638 = *$tmp639;
            org$pandalanguage$pandac$IRNode** $tmp641 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 24));
            msg640 = *$tmp641;
            panda$core$Bit $tmp645 = (($fn644) test638->$class->vtable[4])(test638);
            bool $tmp643 = $tmp645.value;
            if ($tmp643) goto $l646;
            panda$core$Bit $tmp648 = (($fn647) msg640->$class->vtable[4])(msg640);
            $tmp643 = $tmp648.value;
            $l646:;
            panda$core$Bit $tmp649 = { $tmp643 };
            $returnValue642 = $tmp649;
            $tmp633 = 0;
            goto $l631;
            $l650:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp652, 1);
        panda$core$Bit $tmp653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp652);
        if ($tmp653.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp654, false);
            $returnValue642 = $tmp654;
            $tmp633 = 1;
            goto $l631;
            $l655:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp657, 2);
        panda$core$Bit $tmp658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp657);
        if ($tmp658.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp660 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 24));
            left659 = *$tmp660;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp662 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$263_9634->$data + 32));
            op661 = *$tmp662;
            org$pandalanguage$pandac$IRNode** $tmp664 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 40));
            right663 = *$tmp664;
            panda$core$Bit $tmp667 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op661);
            bool $tmp666 = $tmp667.value;
            if ($tmp666) goto $l668;
            panda$core$Bit $tmp670 = (($fn669) left659->$class->vtable[4])(left659);
            $tmp666 = $tmp670.value;
            $l668:;
            panda$core$Bit $tmp671 = { $tmp666 };
            bool $tmp665 = $tmp671.value;
            if ($tmp665) goto $l672;
            panda$core$Bit $tmp674 = (($fn673) right663->$class->vtable[4])(right663);
            $tmp665 = $tmp674.value;
            $l672:;
            panda$core$Bit $tmp675 = { $tmp665 };
            $returnValue642 = $tmp675;
            $tmp633 = 2;
            goto $l631;
            $l676:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp678, 3);
        panda$core$Bit $tmp679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp678);
        if ($tmp679.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp680, false);
            $returnValue642 = $tmp680;
            $tmp633 = 3;
            goto $l631;
            $l681:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp683, 4);
        panda$core$Bit $tmp684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp683);
        if ($tmp684.value) {
        {
            panda$collections$ImmutableArray** $tmp686 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 16));
            statements685 = *$tmp686;
            {
                int $tmp689;
                {
                    ITable* $tmp693 = ((panda$collections$Iterable*) statements685)->$class->itable;
                    while ($tmp693->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp693 = $tmp693->next;
                    }
                    $fn695 $tmp694 = $tmp693->methods[0];
                    panda$collections$Iterator* $tmp696 = $tmp694(((panda$collections$Iterable*) statements685));
                    $tmp692 = $tmp696;
                    $tmp691 = $tmp692;
                    Iter$273$17690 = $tmp691;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp691));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp692));
                    $l697:;
                    ITable* $tmp700 = Iter$273$17690->$class->itable;
                    while ($tmp700->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp700 = $tmp700->next;
                    }
                    $fn702 $tmp701 = $tmp700->methods[0];
                    panda$core$Bit $tmp703 = $tmp701(Iter$273$17690);
                    panda$core$Bit $tmp704 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp703);
                    bool $tmp699 = $tmp704.value;
                    if (!$tmp699) goto $l698;
                    {
                        int $tmp707;
                        {
                            ITable* $tmp711 = Iter$273$17690->$class->itable;
                            while ($tmp711->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp711 = $tmp711->next;
                            }
                            $fn713 $tmp712 = $tmp711->methods[1];
                            panda$core$Object* $tmp714 = $tmp712(Iter$273$17690);
                            $tmp710 = $tmp714;
                            $tmp709 = ((org$pandalanguage$pandac$IRNode*) $tmp710);
                            s708 = $tmp709;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp709));
                            panda$core$Panda$unref$panda$core$Object($tmp710);
                            panda$core$Bit $tmp716 = (($fn715) s708->$class->vtable[4])(s708);
                            if ($tmp716.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp717, true);
                                $returnValue642 = $tmp717;
                                $tmp707 = 0;
                                goto $l705;
                                $l718:;
                                $tmp689 = 0;
                                goto $l687;
                                $l719:;
                                $tmp633 = 4;
                                goto $l631;
                                $l720:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp707 = -1;
                        goto $l705;
                        $l705:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s708));
                        s708 = NULL;
                        switch ($tmp707) {
                            case 0: goto $l718;
                            case -1: goto $l722;
                        }
                        $l722:;
                    }
                    goto $l697;
                    $l698:;
                }
                $tmp689 = -1;
                goto $l687;
                $l687:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$273$17690));
                Iter$273$17690 = NULL;
                switch ($tmp689) {
                    case 0: goto $l719;
                    case -1: goto $l723;
                }
                $l723:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp724, false);
            $returnValue642 = $tmp724;
            $tmp633 = 5;
            goto $l631;
            $l725:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp727, 6);
        panda$core$Bit $tmp728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp727);
        if ($tmp728.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp729, false);
            $returnValue642 = $tmp729;
            $tmp633 = 6;
            goto $l631;
            $l730:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp732, 7);
        panda$core$Bit $tmp733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp732);
        if ($tmp733.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp735 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$263_9634->$data + 24));
            m734 = *$tmp735;
            panda$collections$ImmutableArray** $tmp737 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 32));
            args736 = *$tmp737;
            panda$core$Int64$init$builtin_int64(&$tmp738, 0);
            panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m734->value->methodKind.$rawValue, $tmp738);
            if ($tmp739.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp740, true);
                $returnValue642 = $tmp740;
                $tmp633 = 7;
                goto $l631;
                $l741:;
                return $returnValue642;
            }
            }
            {
                int $tmp745;
                {
                    ITable* $tmp749 = ((panda$collections$Iterable*) args736)->$class->itable;
                    while ($tmp749->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp749 = $tmp749->next;
                    }
                    $fn751 $tmp750 = $tmp749->methods[0];
                    panda$collections$Iterator* $tmp752 = $tmp750(((panda$collections$Iterable*) args736));
                    $tmp748 = $tmp752;
                    $tmp747 = $tmp748;
                    Iter$285$17746 = $tmp747;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp747));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp748));
                    $l753:;
                    ITable* $tmp756 = Iter$285$17746->$class->itable;
                    while ($tmp756->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp756 = $tmp756->next;
                    }
                    $fn758 $tmp757 = $tmp756->methods[0];
                    panda$core$Bit $tmp759 = $tmp757(Iter$285$17746);
                    panda$core$Bit $tmp760 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp759);
                    bool $tmp755 = $tmp760.value;
                    if (!$tmp755) goto $l754;
                    {
                        int $tmp763;
                        {
                            ITable* $tmp767 = Iter$285$17746->$class->itable;
                            while ($tmp767->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp767 = $tmp767->next;
                            }
                            $fn769 $tmp768 = $tmp767->methods[1];
                            panda$core$Object* $tmp770 = $tmp768(Iter$285$17746);
                            $tmp766 = $tmp770;
                            $tmp765 = ((org$pandalanguage$pandac$IRNode*) $tmp766);
                            arg764 = $tmp765;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp765));
                            panda$core$Panda$unref$panda$core$Object($tmp766);
                            panda$core$Bit $tmp772 = (($fn771) arg764->$class->vtable[4])(arg764);
                            if ($tmp772.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp773, true);
                                $returnValue642 = $tmp773;
                                $tmp763 = 0;
                                goto $l761;
                                $l774:;
                                $tmp745 = 0;
                                goto $l743;
                                $l775:;
                                $tmp633 = 8;
                                goto $l631;
                                $l776:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp763 = -1;
                        goto $l761;
                        $l761:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg764));
                        arg764 = NULL;
                        switch ($tmp763) {
                            case 0: goto $l774;
                            case -1: goto $l778;
                        }
                        $l778:;
                    }
                    goto $l753;
                    $l754:;
                }
                $tmp745 = -1;
                goto $l743;
                $l743:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$285$17746));
                Iter$285$17746 = NULL;
                switch ($tmp745) {
                    case -1: goto $l779;
                    case 0: goto $l775;
                }
                $l779:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp780, false);
            $returnValue642 = $tmp780;
            $tmp633 = 9;
            goto $l631;
            $l781:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp783, 8);
        panda$core$Bit $tmp784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp783);
        if ($tmp784.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp785, false);
            $returnValue642 = $tmp785;
            $tmp633 = 10;
            goto $l631;
            $l786:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp788, 9);
        panda$core$Bit $tmp789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp788);
        if ($tmp789.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp790, false);
            $returnValue642 = $tmp790;
            $tmp633 = 11;
            goto $l631;
            $l791:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp793, 10);
        panda$core$Bit $tmp794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp793);
        if ($tmp794.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp795, false);
            $returnValue642 = $tmp795;
            $tmp633 = 12;
            goto $l631;
            $l796:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp798, 11);
        panda$core$Bit $tmp799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp798);
        if ($tmp799.value) {
        {
            org$pandalanguage$pandac$Type** $tmp801 = ((org$pandalanguage$pandac$Type**) ((char*) $match$263_9634->$data + 16));
            type800 = *$tmp801;
            org$pandalanguage$pandac$IRNode** $tmp803 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 24));
            call802 = *$tmp803;
            panda$core$Bit $tmp805 = (($fn804) call802->$class->vtable[4])(call802);
            $returnValue642 = $tmp805;
            $tmp633 = 13;
            goto $l631;
            $l806:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp808, 12);
        panda$core$Bit $tmp809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp808);
        if ($tmp809.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp810, false);
            $returnValue642 = $tmp810;
            $tmp633 = 14;
            goto $l631;
            $l811:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp813, 13);
        panda$core$Bit $tmp814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp813);
        if ($tmp814.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp815, false);
            $returnValue642 = $tmp815;
            $tmp633 = 15;
            goto $l631;
            $l816:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp818, 14);
        panda$core$Bit $tmp819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp818);
        if ($tmp819.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp821 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 0));
            target820 = *$tmp821;
            org$pandalanguage$pandac$IRNode** $tmp823 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 8));
            value822 = *$tmp823;
            bool $tmp824 = ((panda$core$Bit) { value822 != NULL }).value;
            if (!$tmp824) goto $l825;
            panda$core$Bit $tmp827 = (($fn826) value822->$class->vtable[4])(value822);
            $tmp824 = $tmp827.value;
            $l825:;
            panda$core$Bit $tmp828 = { $tmp824 };
            $returnValue642 = $tmp828;
            $tmp633 = 16;
            goto $l631;
            $l829:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp831, 15);
        panda$core$Bit $tmp832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp831);
        if ($tmp832.value) {
        {
            panda$core$String** $tmp834 = ((panda$core$String**) ((char*) $match$263_9634->$data + 16));
            label833 = *$tmp834;
            panda$collections$ImmutableArray** $tmp836 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 24));
            statements835 = *$tmp836;
            org$pandalanguage$pandac$IRNode** $tmp838 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 32));
            test837 = *$tmp838;
            panda$core$Bit $tmp840 = (($fn839) test837->$class->vtable[4])(test837);
            if ($tmp840.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp841, true);
                $returnValue642 = $tmp841;
                $tmp633 = 17;
                goto $l631;
                $l842:;
                return $returnValue642;
            }
            }
            {
                int $tmp846;
                {
                    ITable* $tmp850 = ((panda$collections$Iterable*) statements835)->$class->itable;
                    while ($tmp850->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp850 = $tmp850->next;
                    }
                    $fn852 $tmp851 = $tmp850->methods[0];
                    panda$collections$Iterator* $tmp853 = $tmp851(((panda$collections$Iterable*) statements835));
                    $tmp849 = $tmp853;
                    $tmp848 = $tmp849;
                    Iter$309$17847 = $tmp848;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp848));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp849));
                    $l854:;
                    ITable* $tmp857 = Iter$309$17847->$class->itable;
                    while ($tmp857->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp857 = $tmp857->next;
                    }
                    $fn859 $tmp858 = $tmp857->methods[0];
                    panda$core$Bit $tmp860 = $tmp858(Iter$309$17847);
                    panda$core$Bit $tmp861 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp860);
                    bool $tmp856 = $tmp861.value;
                    if (!$tmp856) goto $l855;
                    {
                        int $tmp864;
                        {
                            ITable* $tmp868 = Iter$309$17847->$class->itable;
                            while ($tmp868->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp868 = $tmp868->next;
                            }
                            $fn870 $tmp869 = $tmp868->methods[1];
                            panda$core$Object* $tmp871 = $tmp869(Iter$309$17847);
                            $tmp867 = $tmp871;
                            $tmp866 = ((org$pandalanguage$pandac$IRNode*) $tmp867);
                            s865 = $tmp866;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp866));
                            panda$core$Panda$unref$panda$core$Object($tmp867);
                            panda$core$Bit $tmp873 = (($fn872) s865->$class->vtable[4])(s865);
                            if ($tmp873.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp874, true);
                                $returnValue642 = $tmp874;
                                $tmp864 = 0;
                                goto $l862;
                                $l875:;
                                $tmp846 = 0;
                                goto $l844;
                                $l876:;
                                $tmp633 = 18;
                                goto $l631;
                                $l877:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp864 = -1;
                        goto $l862;
                        $l862:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s865));
                        s865 = NULL;
                        switch ($tmp864) {
                            case -1: goto $l879;
                            case 0: goto $l875;
                        }
                        $l879:;
                    }
                    goto $l854;
                    $l855:;
                }
                $tmp846 = -1;
                goto $l844;
                $l844:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$309$17847));
                Iter$309$17847 = NULL;
                switch ($tmp846) {
                    case 0: goto $l876;
                    case -1: goto $l880;
                }
                $l880:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp881, false);
            $returnValue642 = $tmp881;
            $tmp633 = 19;
            goto $l631;
            $l882:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp884, 17);
        panda$core$Bit $tmp885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp884);
        if ($tmp885.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp886, true);
            $returnValue642 = $tmp886;
            $tmp633 = 20;
            goto $l631;
            $l887:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp889, 18);
        panda$core$Bit $tmp890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp889);
        if ($tmp890.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp891, false);
            $returnValue642 = $tmp891;
            $tmp633 = 21;
            goto $l631;
            $l892:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp894, 19);
        panda$core$Bit $tmp895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp894);
        if ($tmp895.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp897 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 16));
            test896 = *$tmp897;
            panda$collections$ImmutableArray** $tmp899 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 24));
            ifTrue898 = *$tmp899;
            org$pandalanguage$pandac$IRNode** $tmp901 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 32));
            ifFalse900 = *$tmp901;
            panda$core$Bit $tmp903 = (($fn902) test896->$class->vtable[4])(test896);
            if ($tmp903.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp904, true);
                $returnValue642 = $tmp904;
                $tmp633 = 22;
                goto $l631;
                $l905:;
                return $returnValue642;
            }
            }
            {
                int $tmp909;
                {
                    ITable* $tmp913 = ((panda$collections$Iterable*) ifTrue898)->$class->itable;
                    while ($tmp913->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp913 = $tmp913->next;
                    }
                    $fn915 $tmp914 = $tmp913->methods[0];
                    panda$collections$Iterator* $tmp916 = $tmp914(((panda$collections$Iterable*) ifTrue898));
                    $tmp912 = $tmp916;
                    $tmp911 = $tmp912;
                    Iter$323$17910 = $tmp911;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp911));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
                    $l917:;
                    ITable* $tmp920 = Iter$323$17910->$class->itable;
                    while ($tmp920->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp920 = $tmp920->next;
                    }
                    $fn922 $tmp921 = $tmp920->methods[0];
                    panda$core$Bit $tmp923 = $tmp921(Iter$323$17910);
                    panda$core$Bit $tmp924 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp923);
                    bool $tmp919 = $tmp924.value;
                    if (!$tmp919) goto $l918;
                    {
                        int $tmp927;
                        {
                            ITable* $tmp931 = Iter$323$17910->$class->itable;
                            while ($tmp931->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp931 = $tmp931->next;
                            }
                            $fn933 $tmp932 = $tmp931->methods[1];
                            panda$core$Object* $tmp934 = $tmp932(Iter$323$17910);
                            $tmp930 = $tmp934;
                            $tmp929 = ((org$pandalanguage$pandac$IRNode*) $tmp930);
                            s928 = $tmp929;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp929));
                            panda$core$Panda$unref$panda$core$Object($tmp930);
                            panda$core$Bit $tmp936 = (($fn935) s928->$class->vtable[4])(s928);
                            if ($tmp936.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp937, true);
                                $returnValue642 = $tmp937;
                                $tmp927 = 0;
                                goto $l925;
                                $l938:;
                                $tmp909 = 0;
                                goto $l907;
                                $l939:;
                                $tmp633 = 23;
                                goto $l631;
                                $l940:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp927 = -1;
                        goto $l925;
                        $l925:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s928));
                        s928 = NULL;
                        switch ($tmp927) {
                            case -1: goto $l942;
                            case 0: goto $l938;
                        }
                        $l942:;
                    }
                    goto $l917;
                    $l918:;
                }
                $tmp909 = -1;
                goto $l907;
                $l907:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$323$17910));
                Iter$323$17910 = NULL;
                switch ($tmp909) {
                    case 0: goto $l939;
                    case -1: goto $l943;
                }
                $l943:;
            }
            panda$core$Bit $tmp945 = (($fn944) ifFalse900->$class->vtable[4])(ifFalse900);
            $returnValue642 = $tmp945;
            $tmp633 = 24;
            goto $l631;
            $l946:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp948, 20);
        panda$core$Bit $tmp949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp948);
        if ($tmp949.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp950, false);
            $returnValue642 = $tmp950;
            $tmp633 = 25;
            goto $l631;
            $l951:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp953, 21);
        panda$core$Bit $tmp954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp953);
        if ($tmp954.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp956 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 16));
            value955 = *$tmp956;
            panda$core$Bit $tmp958 = (($fn957) value955->$class->vtable[4])(value955);
            $returnValue642 = $tmp958;
            $tmp633 = 26;
            goto $l631;
            $l959:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp961, 22);
        panda$core$Bit $tmp962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp961);
        if ($tmp962.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp964 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 16));
            value963 = *$tmp964;
            panda$core$Bit $tmp966 = (($fn965) value963->$class->vtable[4])(value963);
            $returnValue642 = $tmp966;
            $tmp633 = 27;
            goto $l631;
            $l967:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp969, 23);
        panda$core$Bit $tmp970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp969);
        if ($tmp970.value) {
        {
            panda$core$String** $tmp972 = ((panda$core$String**) ((char*) $match$263_9634->$data + 16));
            label971 = *$tmp972;
            panda$collections$ImmutableArray** $tmp974 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 24));
            statements973 = *$tmp974;
            {
                int $tmp977;
                {
                    ITable* $tmp981 = ((panda$collections$Iterable*) statements973)->$class->itable;
                    while ($tmp981->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp981 = $tmp981->next;
                    }
                    $fn983 $tmp982 = $tmp981->methods[0];
                    panda$collections$Iterator* $tmp984 = $tmp982(((panda$collections$Iterable*) statements973));
                    $tmp980 = $tmp984;
                    $tmp979 = $tmp980;
                    Iter$336$17978 = $tmp979;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp979));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp980));
                    $l985:;
                    ITable* $tmp988 = Iter$336$17978->$class->itable;
                    while ($tmp988->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp988 = $tmp988->next;
                    }
                    $fn990 $tmp989 = $tmp988->methods[0];
                    panda$core$Bit $tmp991 = $tmp989(Iter$336$17978);
                    panda$core$Bit $tmp992 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp991);
                    bool $tmp987 = $tmp992.value;
                    if (!$tmp987) goto $l986;
                    {
                        int $tmp995;
                        {
                            ITable* $tmp999 = Iter$336$17978->$class->itable;
                            while ($tmp999->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp999 = $tmp999->next;
                            }
                            $fn1001 $tmp1000 = $tmp999->methods[1];
                            panda$core$Object* $tmp1002 = $tmp1000(Iter$336$17978);
                            $tmp998 = $tmp1002;
                            $tmp997 = ((org$pandalanguage$pandac$IRNode*) $tmp998);
                            s996 = $tmp997;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp997));
                            panda$core$Panda$unref$panda$core$Object($tmp998);
                            panda$core$Bit $tmp1004 = (($fn1003) s996->$class->vtable[4])(s996);
                            if ($tmp1004.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1005, true);
                                $returnValue642 = $tmp1005;
                                $tmp995 = 0;
                                goto $l993;
                                $l1006:;
                                $tmp977 = 0;
                                goto $l975;
                                $l1007:;
                                $tmp633 = 28;
                                goto $l631;
                                $l1008:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp995 = -1;
                        goto $l993;
                        $l993:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s996));
                        s996 = NULL;
                        switch ($tmp995) {
                            case 0: goto $l1006;
                            case -1: goto $l1010;
                        }
                        $l1010:;
                    }
                    goto $l985;
                    $l986:;
                }
                $tmp977 = -1;
                goto $l975;
                $l975:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$17978));
                Iter$336$17978 = NULL;
                switch ($tmp977) {
                    case -1: goto $l1011;
                    case 0: goto $l1007;
                }
                $l1011:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1012, false);
            $returnValue642 = $tmp1012;
            $tmp633 = 29;
            goto $l631;
            $l1013:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1015, 24);
        panda$core$Bit $tmp1016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1015);
        if ($tmp1016.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1018 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 16));
            value1017 = *$tmp1018;
            panda$collections$ImmutableArray** $tmp1020 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 24));
            whens1019 = *$tmp1020;
            panda$collections$ImmutableArray** $tmp1022 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 32));
            other1021 = *$tmp1022;
            panda$core$Bit $tmp1024 = (($fn1023) value1017->$class->vtable[4])(value1017);
            if ($tmp1024.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1025, true);
                $returnValue642 = $tmp1025;
                $tmp633 = 30;
                goto $l631;
                $l1026:;
                return $returnValue642;
            }
            }
            {
                int $tmp1030;
                {
                    ITable* $tmp1034 = ((panda$collections$Iterable*) whens1019)->$class->itable;
                    while ($tmp1034->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1034 = $tmp1034->next;
                    }
                    $fn1036 $tmp1035 = $tmp1034->methods[0];
                    panda$collections$Iterator* $tmp1037 = $tmp1035(((panda$collections$Iterable*) whens1019));
                    $tmp1033 = $tmp1037;
                    $tmp1032 = $tmp1033;
                    Iter$346$171031 = $tmp1032;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1032));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1033));
                    $l1038:;
                    ITable* $tmp1041 = Iter$346$171031->$class->itable;
                    while ($tmp1041->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1041 = $tmp1041->next;
                    }
                    $fn1043 $tmp1042 = $tmp1041->methods[0];
                    panda$core$Bit $tmp1044 = $tmp1042(Iter$346$171031);
                    panda$core$Bit $tmp1045 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1044);
                    bool $tmp1040 = $tmp1045.value;
                    if (!$tmp1040) goto $l1039;
                    {
                        int $tmp1048;
                        {
                            ITable* $tmp1052 = Iter$346$171031->$class->itable;
                            while ($tmp1052->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1052 = $tmp1052->next;
                            }
                            $fn1054 $tmp1053 = $tmp1052->methods[1];
                            panda$core$Object* $tmp1055 = $tmp1053(Iter$346$171031);
                            $tmp1051 = $tmp1055;
                            $tmp1050 = ((org$pandalanguage$pandac$IRNode*) $tmp1051);
                            w1049 = $tmp1050;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1050));
                            panda$core$Panda$unref$panda$core$Object($tmp1051);
                            panda$core$Bit $tmp1057 = (($fn1056) w1049->$class->vtable[4])(w1049);
                            if ($tmp1057.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1058, true);
                                $returnValue642 = $tmp1058;
                                $tmp1048 = 0;
                                goto $l1046;
                                $l1059:;
                                $tmp1030 = 0;
                                goto $l1028;
                                $l1060:;
                                $tmp633 = 31;
                                goto $l631;
                                $l1061:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp1048 = -1;
                        goto $l1046;
                        $l1046:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1049));
                        w1049 = NULL;
                        switch ($tmp1048) {
                            case -1: goto $l1063;
                            case 0: goto $l1059;
                        }
                        $l1063:;
                    }
                    goto $l1038;
                    $l1039:;
                }
                $tmp1030 = -1;
                goto $l1028;
                $l1028:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$346$171031));
                Iter$346$171031 = NULL;
                switch ($tmp1030) {
                    case 0: goto $l1060;
                    case -1: goto $l1064;
                }
                $l1064:;
            }
            {
                int $tmp1067;
                {
                    ITable* $tmp1071 = ((panda$collections$Iterable*) other1021)->$class->itable;
                    while ($tmp1071->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1071 = $tmp1071->next;
                    }
                    $fn1073 $tmp1072 = $tmp1071->methods[0];
                    panda$collections$Iterator* $tmp1074 = $tmp1072(((panda$collections$Iterable*) other1021));
                    $tmp1070 = $tmp1074;
                    $tmp1069 = $tmp1070;
                    Iter$351$171068 = $tmp1069;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1069));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1070));
                    $l1075:;
                    ITable* $tmp1078 = Iter$351$171068->$class->itable;
                    while ($tmp1078->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1078 = $tmp1078->next;
                    }
                    $fn1080 $tmp1079 = $tmp1078->methods[0];
                    panda$core$Bit $tmp1081 = $tmp1079(Iter$351$171068);
                    panda$core$Bit $tmp1082 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1081);
                    bool $tmp1077 = $tmp1082.value;
                    if (!$tmp1077) goto $l1076;
                    {
                        int $tmp1085;
                        {
                            ITable* $tmp1089 = Iter$351$171068->$class->itable;
                            while ($tmp1089->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1089 = $tmp1089->next;
                            }
                            $fn1091 $tmp1090 = $tmp1089->methods[1];
                            panda$core$Object* $tmp1092 = $tmp1090(Iter$351$171068);
                            $tmp1088 = $tmp1092;
                            $tmp1087 = ((org$pandalanguage$pandac$IRNode*) $tmp1088);
                            s1086 = $tmp1087;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1087));
                            panda$core$Panda$unref$panda$core$Object($tmp1088);
                            panda$core$Bit $tmp1094 = (($fn1093) s1086->$class->vtable[4])(s1086);
                            if ($tmp1094.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1095, true);
                                $returnValue642 = $tmp1095;
                                $tmp1085 = 0;
                                goto $l1083;
                                $l1096:;
                                $tmp1067 = 0;
                                goto $l1065;
                                $l1097:;
                                $tmp633 = 32;
                                goto $l631;
                                $l1098:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp1085 = -1;
                        goto $l1083;
                        $l1083:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1086));
                        s1086 = NULL;
                        switch ($tmp1085) {
                            case 0: goto $l1096;
                            case -1: goto $l1100;
                        }
                        $l1100:;
                    }
                    goto $l1075;
                    $l1076:;
                }
                $tmp1067 = -1;
                goto $l1065;
                $l1065:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$351$171068));
                Iter$351$171068 = NULL;
                switch ($tmp1067) {
                    case -1: goto $l1101;
                    case 0: goto $l1097;
                }
                $l1101:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1102, false);
            $returnValue642 = $tmp1102;
            $tmp633 = 33;
            goto $l631;
            $l1103:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1105, 25);
        panda$core$Bit $tmp1106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1105);
        if ($tmp1106.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1107, false);
            $returnValue642 = $tmp1107;
            $tmp633 = 34;
            goto $l631;
            $l1108:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1110, 26);
        panda$core$Bit $tmp1111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1110);
        if ($tmp1111.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1112, false);
            $returnValue642 = $tmp1112;
            $tmp633 = 35;
            goto $l631;
            $l1113:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1115, 27);
        panda$core$Bit $tmp1116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1115);
        if ($tmp1116.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1117, false);
            $returnValue642 = $tmp1117;
            $tmp633 = 36;
            goto $l631;
            $l1118:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1120, 28);
        panda$core$Bit $tmp1121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1120);
        if ($tmp1121.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1123 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 24));
            base1122 = *$tmp1123;
            panda$core$Bit $tmp1125 = (($fn1124) base1122->$class->vtable[4])(base1122);
            $returnValue642 = $tmp1125;
            $tmp633 = 37;
            goto $l631;
            $l1126:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1128, 29);
        panda$core$Bit $tmp1129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1128);
        if ($tmp1129.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1131 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 32));
            list1130 = *$tmp1131;
            panda$collections$ImmutableArray** $tmp1133 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 40));
            statements1132 = *$tmp1133;
            panda$core$Bit $tmp1135 = (($fn1134) list1130->$class->vtable[4])(list1130);
            if ($tmp1135.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1136, true);
                $returnValue642 = $tmp1136;
                $tmp633 = 38;
                goto $l631;
                $l1137:;
                return $returnValue642;
            }
            }
            {
                int $tmp1141;
                {
                    ITable* $tmp1145 = ((panda$collections$Iterable*) statements1132)->$class->itable;
                    while ($tmp1145->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1145 = $tmp1145->next;
                    }
                    $fn1147 $tmp1146 = $tmp1145->methods[0];
                    panda$collections$Iterator* $tmp1148 = $tmp1146(((panda$collections$Iterable*) statements1132));
                    $tmp1144 = $tmp1148;
                    $tmp1143 = $tmp1144;
                    Iter$370$171142 = $tmp1143;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1143));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1144));
                    $l1149:;
                    ITable* $tmp1152 = Iter$370$171142->$class->itable;
                    while ($tmp1152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1152 = $tmp1152->next;
                    }
                    $fn1154 $tmp1153 = $tmp1152->methods[0];
                    panda$core$Bit $tmp1155 = $tmp1153(Iter$370$171142);
                    panda$core$Bit $tmp1156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1155);
                    bool $tmp1151 = $tmp1156.value;
                    if (!$tmp1151) goto $l1150;
                    {
                        int $tmp1159;
                        {
                            ITable* $tmp1163 = Iter$370$171142->$class->itable;
                            while ($tmp1163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1163 = $tmp1163->next;
                            }
                            $fn1165 $tmp1164 = $tmp1163->methods[1];
                            panda$core$Object* $tmp1166 = $tmp1164(Iter$370$171142);
                            $tmp1162 = $tmp1166;
                            $tmp1161 = ((org$pandalanguage$pandac$IRNode*) $tmp1162);
                            s1160 = $tmp1161;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1161));
                            panda$core$Panda$unref$panda$core$Object($tmp1162);
                            panda$core$Bit $tmp1168 = (($fn1167) s1160->$class->vtable[4])(s1160);
                            if ($tmp1168.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1169, true);
                                $returnValue642 = $tmp1169;
                                $tmp1159 = 0;
                                goto $l1157;
                                $l1170:;
                                $tmp1141 = 0;
                                goto $l1139;
                                $l1171:;
                                $tmp633 = 39;
                                goto $l631;
                                $l1172:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp1159 = -1;
                        goto $l1157;
                        $l1157:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1160));
                        s1160 = NULL;
                        switch ($tmp1159) {
                            case 0: goto $l1170;
                            case -1: goto $l1174;
                        }
                        $l1174:;
                    }
                    goto $l1149;
                    $l1150:;
                }
                $tmp1141 = -1;
                goto $l1139;
                $l1139:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$370$171142));
                Iter$370$171142 = NULL;
                switch ($tmp1141) {
                    case -1: goto $l1175;
                    case 0: goto $l1171;
                }
                $l1175:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1176, false);
            $returnValue642 = $tmp1176;
            $tmp633 = 40;
            goto $l631;
            $l1177:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1179, 30);
        panda$core$Bit $tmp1180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1179);
        if ($tmp1180.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1181, false);
            $returnValue642 = $tmp1181;
            $tmp633 = 41;
            goto $l631;
            $l1182:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1184, 31);
        panda$core$Bit $tmp1185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1184);
        if ($tmp1185.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1187 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 16));
            value1186 = *$tmp1187;
            panda$core$Bit $tmp1189 = (($fn1188) value1186->$class->vtable[4])(value1186);
            $returnValue642 = $tmp1189;
            $tmp633 = 42;
            goto $l631;
            $l1190:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1192, 32);
        panda$core$Bit $tmp1193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1192);
        if ($tmp1193.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1194, false);
            $returnValue642 = $tmp1194;
            $tmp633 = 43;
            goto $l631;
            $l1195:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1197, 33);
        panda$core$Bit $tmp1198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1197);
        if ($tmp1198.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1200 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 0));
            base1199 = *$tmp1200;
            panda$core$Bit $tmp1202 = (($fn1201) base1199->$class->vtable[4])(base1199);
            $returnValue642 = $tmp1202;
            $tmp633 = 44;
            goto $l631;
            $l1203:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1205, 34);
        panda$core$Bit $tmp1206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1205);
        if ($tmp1206.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1207, false);
            $returnValue642 = $tmp1207;
            $tmp633 = 45;
            goto $l631;
            $l1208:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1210, 35);
        panda$core$Bit $tmp1211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1210);
        if ($tmp1211.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1212, false);
            $returnValue642 = $tmp1212;
            $tmp633 = 46;
            goto $l631;
            $l1213:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1215, 36);
        panda$core$Bit $tmp1216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1215);
        if ($tmp1216.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1217, false);
            $returnValue642 = $tmp1217;
            $tmp633 = 47;
            goto $l631;
            $l1218:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1220, 37);
        panda$core$Bit $tmp1221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1220);
        if ($tmp1221.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1222, false);
            $returnValue642 = $tmp1222;
            $tmp633 = 48;
            goto $l631;
            $l1223:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1225, 38);
        panda$core$Bit $tmp1226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1225);
        if ($tmp1226.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1228 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 16));
            test1227 = *$tmp1228;
            org$pandalanguage$pandac$IRNode** $tmp1230 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 24));
            ifTrue1229 = *$tmp1230;
            org$pandalanguage$pandac$IRNode** $tmp1232 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 32));
            ifFalse1231 = *$tmp1232;
            panda$core$Bit $tmp1236 = (($fn1235) test1227->$class->vtable[4])(test1227);
            bool $tmp1234 = $tmp1236.value;
            if ($tmp1234) goto $l1237;
            panda$core$Bit $tmp1239 = (($fn1238) ifTrue1229->$class->vtable[4])(ifTrue1229);
            $tmp1234 = $tmp1239.value;
            $l1237:;
            panda$core$Bit $tmp1240 = { $tmp1234 };
            bool $tmp1233 = $tmp1240.value;
            if ($tmp1233) goto $l1241;
            panda$core$Bit $tmp1243 = (($fn1242) ifFalse1231->$class->vtable[4])(ifFalse1231);
            $tmp1233 = $tmp1243.value;
            $l1241:;
            panda$core$Bit $tmp1244 = { $tmp1233 };
            $returnValue642 = $tmp1244;
            $tmp633 = 49;
            goto $l631;
            $l1245:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1247, 39);
        panda$core$Bit $tmp1248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1247);
        if ($tmp1248.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1249, false);
            $returnValue642 = $tmp1249;
            $tmp633 = 50;
            goto $l631;
            $l1250:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1252, 40);
        panda$core$Bit $tmp1253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1252);
        if ($tmp1253.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1254, false);
            if ($tmp1254.value) goto $l1255; else goto $l1256;
            $l1256:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1257, (panda$core$Int64) { 397 });
            abort();
            $l1255:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1258, 41);
        panda$core$Bit $tmp1259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1258);
        if ($tmp1259.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1260, false);
            if ($tmp1260.value) goto $l1261; else goto $l1262;
            $l1262:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1263, (panda$core$Int64) { 399 });
            abort();
            $l1261:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1264, 42);
        panda$core$Bit $tmp1265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1264);
        if ($tmp1265.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1266, false);
            if ($tmp1266.value) goto $l1267; else goto $l1268;
            $l1268:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1269, (panda$core$Int64) { 401 });
            abort();
            $l1267:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1270, 43);
        panda$core$Bit $tmp1271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1270);
        if ($tmp1271.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1272, false);
            if ($tmp1272.value) goto $l1273; else goto $l1274;
            $l1274:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1275, (panda$core$Int64) { 403 });
            abort();
            $l1273:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1276, 44);
        panda$core$Bit $tmp1277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1276);
        if ($tmp1277.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1278, false);
            if ($tmp1278.value) goto $l1279; else goto $l1280;
            $l1280:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1281, (panda$core$Int64) { 405 });
            abort();
            $l1279:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1282, 45);
        panda$core$Bit $tmp1283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1282);
        if ($tmp1283.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1284, false);
            if ($tmp1284.value) goto $l1285; else goto $l1286;
            $l1286:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1287, (panda$core$Int64) { 407 });
            abort();
            $l1285:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1288, 46);
        panda$core$Bit $tmp1289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1288);
        if ($tmp1289.value) {
        {
            panda$collections$ImmutableArray** $tmp1291 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 24));
            decls1290 = *$tmp1291;
            {
                int $tmp1294;
                {
                    ITable* $tmp1298 = ((panda$collections$Iterable*) decls1290)->$class->itable;
                    while ($tmp1298->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1298 = $tmp1298->next;
                    }
                    $fn1300 $tmp1299 = $tmp1298->methods[0];
                    panda$collections$Iterator* $tmp1301 = $tmp1299(((panda$collections$Iterable*) decls1290));
                    $tmp1297 = $tmp1301;
                    $tmp1296 = $tmp1297;
                    Iter$409$171295 = $tmp1296;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1296));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1297));
                    $l1302:;
                    ITable* $tmp1305 = Iter$409$171295->$class->itable;
                    while ($tmp1305->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1305 = $tmp1305->next;
                    }
                    $fn1307 $tmp1306 = $tmp1305->methods[0];
                    panda$core$Bit $tmp1308 = $tmp1306(Iter$409$171295);
                    panda$core$Bit $tmp1309 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1308);
                    bool $tmp1304 = $tmp1309.value;
                    if (!$tmp1304) goto $l1303;
                    {
                        int $tmp1312;
                        {
                            ITable* $tmp1316 = Iter$409$171295->$class->itable;
                            while ($tmp1316->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1316 = $tmp1316->next;
                            }
                            $fn1318 $tmp1317 = $tmp1316->methods[1];
                            panda$core$Object* $tmp1319 = $tmp1317(Iter$409$171295);
                            $tmp1315 = $tmp1319;
                            $tmp1314 = ((org$pandalanguage$pandac$IRNode*) $tmp1315);
                            d1313 = $tmp1314;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1314));
                            panda$core$Panda$unref$panda$core$Object($tmp1315);
                            panda$core$Bit $tmp1321 = (($fn1320) d1313->$class->vtable[4])(d1313);
                            if ($tmp1321.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1322, true);
                                $returnValue642 = $tmp1322;
                                $tmp1312 = 0;
                                goto $l1310;
                                $l1323:;
                                $tmp1294 = 0;
                                goto $l1292;
                                $l1324:;
                                $tmp633 = 51;
                                goto $l631;
                                $l1325:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp1312 = -1;
                        goto $l1310;
                        $l1310:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1313));
                        d1313 = NULL;
                        switch ($tmp1312) {
                            case -1: goto $l1327;
                            case 0: goto $l1323;
                        }
                        $l1327:;
                    }
                    goto $l1302;
                    $l1303:;
                }
                $tmp1294 = -1;
                goto $l1292;
                $l1292:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$409$171295));
                Iter$409$171295 = NULL;
                switch ($tmp1294) {
                    case -1: goto $l1328;
                    case 0: goto $l1324;
                }
                $l1328:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1329, false);
            $returnValue642 = $tmp1329;
            $tmp633 = 52;
            goto $l631;
            $l1330:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1332, 47);
        panda$core$Bit $tmp1333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1332);
        if ($tmp1333.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1334, false);
            $returnValue642 = $tmp1334;
            $tmp633 = 53;
            goto $l631;
            $l1335:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1337, 48);
        panda$core$Bit $tmp1338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1337);
        if ($tmp1338.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1339, false);
            $returnValue642 = $tmp1339;
            $tmp633 = 54;
            goto $l631;
            $l1340:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1342, 49);
        panda$core$Bit $tmp1343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1342);
        if ($tmp1343.value) {
        {
            panda$collections$ImmutableArray** $tmp1345 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 16));
            tests1344 = *$tmp1345;
            panda$collections$ImmutableArray** $tmp1347 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 24));
            statements1346 = *$tmp1347;
            {
                int $tmp1350;
                {
                    ITable* $tmp1354 = ((panda$collections$Iterable*) tests1344)->$class->itable;
                    while ($tmp1354->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1354 = $tmp1354->next;
                    }
                    $fn1356 $tmp1355 = $tmp1354->methods[0];
                    panda$collections$Iterator* $tmp1357 = $tmp1355(((panda$collections$Iterable*) tests1344));
                    $tmp1353 = $tmp1357;
                    $tmp1352 = $tmp1353;
                    Iter$420$171351 = $tmp1352;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1352));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
                    $l1358:;
                    ITable* $tmp1361 = Iter$420$171351->$class->itable;
                    while ($tmp1361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1361 = $tmp1361->next;
                    }
                    $fn1363 $tmp1362 = $tmp1361->methods[0];
                    panda$core$Bit $tmp1364 = $tmp1362(Iter$420$171351);
                    panda$core$Bit $tmp1365 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1364);
                    bool $tmp1360 = $tmp1365.value;
                    if (!$tmp1360) goto $l1359;
                    {
                        int $tmp1368;
                        {
                            ITable* $tmp1372 = Iter$420$171351->$class->itable;
                            while ($tmp1372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1372 = $tmp1372->next;
                            }
                            $fn1374 $tmp1373 = $tmp1372->methods[1];
                            panda$core$Object* $tmp1375 = $tmp1373(Iter$420$171351);
                            $tmp1371 = $tmp1375;
                            $tmp1370 = ((org$pandalanguage$pandac$IRNode*) $tmp1371);
                            t1369 = $tmp1370;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1370));
                            panda$core$Panda$unref$panda$core$Object($tmp1371);
                            panda$core$Bit $tmp1377 = (($fn1376) t1369->$class->vtable[4])(t1369);
                            if ($tmp1377.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1378, true);
                                $returnValue642 = $tmp1378;
                                $tmp1368 = 0;
                                goto $l1366;
                                $l1379:;
                                $tmp1350 = 0;
                                goto $l1348;
                                $l1380:;
                                $tmp633 = 55;
                                goto $l631;
                                $l1381:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp1368 = -1;
                        goto $l1366;
                        $l1366:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1369));
                        t1369 = NULL;
                        switch ($tmp1368) {
                            case -1: goto $l1383;
                            case 0: goto $l1379;
                        }
                        $l1383:;
                    }
                    goto $l1358;
                    $l1359:;
                }
                $tmp1350 = -1;
                goto $l1348;
                $l1348:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$420$171351));
                Iter$420$171351 = NULL;
                switch ($tmp1350) {
                    case 0: goto $l1380;
                    case -1: goto $l1384;
                }
                $l1384:;
            }
            {
                int $tmp1387;
                {
                    ITable* $tmp1391 = ((panda$collections$Iterable*) statements1346)->$class->itable;
                    while ($tmp1391->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1391 = $tmp1391->next;
                    }
                    $fn1393 $tmp1392 = $tmp1391->methods[0];
                    panda$collections$Iterator* $tmp1394 = $tmp1392(((panda$collections$Iterable*) statements1346));
                    $tmp1390 = $tmp1394;
                    $tmp1389 = $tmp1390;
                    Iter$425$171388 = $tmp1389;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1389));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1390));
                    $l1395:;
                    ITable* $tmp1398 = Iter$425$171388->$class->itable;
                    while ($tmp1398->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1398 = $tmp1398->next;
                    }
                    $fn1400 $tmp1399 = $tmp1398->methods[0];
                    panda$core$Bit $tmp1401 = $tmp1399(Iter$425$171388);
                    panda$core$Bit $tmp1402 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1401);
                    bool $tmp1397 = $tmp1402.value;
                    if (!$tmp1397) goto $l1396;
                    {
                        int $tmp1405;
                        {
                            ITable* $tmp1409 = Iter$425$171388->$class->itable;
                            while ($tmp1409->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1409 = $tmp1409->next;
                            }
                            $fn1411 $tmp1410 = $tmp1409->methods[1];
                            panda$core$Object* $tmp1412 = $tmp1410(Iter$425$171388);
                            $tmp1408 = $tmp1412;
                            $tmp1407 = ((org$pandalanguage$pandac$IRNode*) $tmp1408);
                            s1406 = $tmp1407;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1407));
                            panda$core$Panda$unref$panda$core$Object($tmp1408);
                            panda$core$Bit $tmp1414 = (($fn1413) s1406->$class->vtable[4])(s1406);
                            if ($tmp1414.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1415, true);
                                $returnValue642 = $tmp1415;
                                $tmp1405 = 0;
                                goto $l1403;
                                $l1416:;
                                $tmp1387 = 0;
                                goto $l1385;
                                $l1417:;
                                $tmp633 = 56;
                                goto $l631;
                                $l1418:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp1405 = -1;
                        goto $l1403;
                        $l1403:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1406));
                        s1406 = NULL;
                        switch ($tmp1405) {
                            case 0: goto $l1416;
                            case -1: goto $l1420;
                        }
                        $l1420:;
                    }
                    goto $l1395;
                    $l1396:;
                }
                $tmp1387 = -1;
                goto $l1385;
                $l1385:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$425$171388));
                Iter$425$171388 = NULL;
                switch ($tmp1387) {
                    case -1: goto $l1421;
                    case 0: goto $l1417;
                }
                $l1421:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1422, false);
            $returnValue642 = $tmp1422;
            $tmp633 = 57;
            goto $l631;
            $l1423:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1425, 50);
        panda$core$Bit $tmp1426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1425);
        if ($tmp1426.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1428 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 24));
            test1427 = *$tmp1428;
            panda$collections$ImmutableArray** $tmp1430 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 32));
            statements1429 = *$tmp1430;
            panda$core$Bit $tmp1432 = (($fn1431) test1427->$class->vtable[4])(test1427);
            if ($tmp1432.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1433, true);
                $returnValue642 = $tmp1433;
                $tmp633 = 58;
                goto $l631;
                $l1434:;
                return $returnValue642;
            }
            }
            {
                int $tmp1438;
                {
                    ITable* $tmp1442 = ((panda$collections$Iterable*) statements1429)->$class->itable;
                    while ($tmp1442->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1442 = $tmp1442->next;
                    }
                    $fn1444 $tmp1443 = $tmp1442->methods[0];
                    panda$collections$Iterator* $tmp1445 = $tmp1443(((panda$collections$Iterable*) statements1429));
                    $tmp1441 = $tmp1445;
                    $tmp1440 = $tmp1441;
                    Iter$435$171439 = $tmp1440;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1440));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1441));
                    $l1446:;
                    ITable* $tmp1449 = Iter$435$171439->$class->itable;
                    while ($tmp1449->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1449 = $tmp1449->next;
                    }
                    $fn1451 $tmp1450 = $tmp1449->methods[0];
                    panda$core$Bit $tmp1452 = $tmp1450(Iter$435$171439);
                    panda$core$Bit $tmp1453 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1452);
                    bool $tmp1448 = $tmp1453.value;
                    if (!$tmp1448) goto $l1447;
                    {
                        int $tmp1456;
                        {
                            ITable* $tmp1460 = Iter$435$171439->$class->itable;
                            while ($tmp1460->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1460 = $tmp1460->next;
                            }
                            $fn1462 $tmp1461 = $tmp1460->methods[1];
                            panda$core$Object* $tmp1463 = $tmp1461(Iter$435$171439);
                            $tmp1459 = $tmp1463;
                            $tmp1458 = ((org$pandalanguage$pandac$IRNode*) $tmp1459);
                            s1457 = $tmp1458;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1458));
                            panda$core$Panda$unref$panda$core$Object($tmp1459);
                            panda$core$Bit $tmp1465 = (($fn1464) s1457->$class->vtable[4])(s1457);
                            if ($tmp1465.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1466, true);
                                $returnValue642 = $tmp1466;
                                $tmp1456 = 0;
                                goto $l1454;
                                $l1467:;
                                $tmp1438 = 0;
                                goto $l1436;
                                $l1468:;
                                $tmp633 = 59;
                                goto $l631;
                                $l1469:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp1456 = -1;
                        goto $l1454;
                        $l1454:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1457));
                        s1457 = NULL;
                        switch ($tmp1456) {
                            case -1: goto $l1471;
                            case 0: goto $l1467;
                        }
                        $l1471:;
                    }
                    goto $l1446;
                    $l1447:;
                }
                $tmp1438 = -1;
                goto $l1436;
                $l1436:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$435$171439));
                Iter$435$171439 = NULL;
                switch ($tmp1438) {
                    case -1: goto $l1472;
                    case 0: goto $l1468;
                }
                $l1472:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1473, false);
            $returnValue642 = $tmp1473;
            $tmp633 = 60;
            goto $l631;
            $l1474:;
            return $returnValue642;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1476, false);
            if ($tmp1476.value) goto $l1477; else goto $l1478;
            $l1478:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1479, (panda$core$Int64) { 442 });
            abort();
            $l1477:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp633 = -1;
    goto $l631;
    $l631:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
    switch ($tmp633) {
        case 1: goto $l655;
        case 18: goto $l877;
        case 34: goto $l1108;
        case 9: goto $l781;
        case 33: goto $l1103;
        case 35: goto $l1113;
        case 46: goto $l1213;
        case 31: goto $l1061;
        case 37: goto $l1126;
        case 28: goto $l1008;
        case 36: goto $l1118;
        case 44: goto $l1203;
        case 60: goto $l1474;
        case 56: goto $l1418;
        case 14: goto $l811;
        case 25: goto $l951;
        case 43: goto $l1195;
        case -1: goto $l1480;
        case 0: goto $l650;
        case 26: goto $l959;
        case 38: goto $l1137;
        case 23: goto $l940;
        case 41: goto $l1182;
        case 58: goto $l1434;
        case 27: goto $l967;
        case 17: goto $l842;
        case 40: goto $l1177;
        case 57: goto $l1423;
        case 11: goto $l791;
        case 39: goto $l1172;
        case 51: goto $l1325;
        case 15: goto $l816;
        case 4: goto $l720;
        case 59: goto $l1469;
        case 24: goto $l946;
        case 30: goto $l1026;
        case 29: goto $l1013;
        case 53: goto $l1335;
        case 54: goto $l1340;
        case 22: goto $l905;
        case 12: goto $l796;
        case 13: goto $l806;
        case 49: goto $l1245;
        case 45: goto $l1208;
        case 8: goto $l776;
        case 32: goto $l1098;
        case 42: goto $l1190;
        case 7: goto $l741;
        case 52: goto $l1330;
        case 55: goto $l1381;
        case 19: goto $l882;
        case 16: goto $l829;
        case 10: goto $l786;
        case 20: goto $l887;
        case 50: goto $l1250;
        case 3: goto $l681;
        case 47: goto $l1218;
        case 21: goto $l892;
        case 5: goto $l725;
        case 48: goto $l1223;
        case 2: goto $l676;
        case 6: goto $l730;
    }
    $l1480:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(panda$collections$ImmutableArray* p_nodes, panda$core$MutableMethod* p_f) {
    panda$collections$Array* newNodes1484 = NULL;
    panda$collections$Array* $tmp1485;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1486;
    panda$core$Int64 $tmp1487;
    panda$core$Bit $tmp1489;
    org$pandalanguage$pandac$IRNode* newNode1506 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1507;
    org$pandalanguage$pandac$IRNode* $tmp1508;
    panda$core$Object* $tmp1509;
    panda$collections$Array* $tmp1512;
    panda$collections$Array* $tmp1513;
    panda$collections$Array* $tmp1514;
    panda$collections$ImmutableArray* $returnValue1523;
    panda$collections$ImmutableArray* $tmp1524;
    panda$collections$ImmutableArray* $tmp1525;
    panda$collections$ImmutableArray* $tmp1529;
    int $tmp1483;
    {
        $tmp1485 = NULL;
        newNodes1484 = $tmp1485;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1485));
        if (((panda$core$Bit) { p_nodes != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1487, 0);
            panda$core$Int64 $tmp1488 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_nodes);
            panda$core$Bit$init$builtin_bit(&$tmp1489, false);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1486, $tmp1487, $tmp1488, $tmp1489);
            int64_t $tmp1491 = $tmp1486.min.value;
            panda$core$Int64 i1490 = { $tmp1491 };
            int64_t $tmp1493 = $tmp1486.max.value;
            bool $tmp1494 = $tmp1486.inclusive.value;
            if ($tmp1494) goto $l1501; else goto $l1502;
            $l1501:;
            if ($tmp1491 <= $tmp1493) goto $l1495; else goto $l1497;
            $l1502:;
            if ($tmp1491 < $tmp1493) goto $l1495; else goto $l1497;
            $l1495:;
            {
                int $tmp1505;
                {
                    panda$core$Object* $tmp1510 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_nodes, i1490);
                    $tmp1509 = $tmp1510;
                    org$pandalanguage$pandac$IRNode* $tmp1511 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(((org$pandalanguage$pandac$IRNode*) $tmp1509), p_f);
                    $tmp1508 = $tmp1511;
                    $tmp1507 = $tmp1508;
                    newNode1506 = $tmp1507;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1507));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1508));
                    panda$core$Panda$unref$panda$core$Object($tmp1509);
                    if (((panda$core$Bit) { newNode1506 != NULL }).value) {
                    {
                        if (((panda$core$Bit) { newNodes1484 == NULL }).value) {
                        {
                            {
                                $tmp1512 = newNodes1484;
                                panda$collections$Array* $tmp1515 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp1515, ((panda$collections$CollectionView*) p_nodes));
                                $tmp1514 = $tmp1515;
                                $tmp1513 = $tmp1514;
                                newNodes1484 = $tmp1513;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1513));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1514));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1512));
                            }
                        }
                        }
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(newNodes1484, i1490, ((panda$core$Object*) newNode1506));
                    }
                    }
                }
                $tmp1505 = -1;
                goto $l1503;
                $l1503:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newNode1506));
                newNode1506 = NULL;
                switch ($tmp1505) {
                    case -1: goto $l1516;
                }
                $l1516:;
            }
            $l1498:;
            int64_t $tmp1518 = $tmp1493 - i1490.value;
            if ($tmp1494) goto $l1519; else goto $l1520;
            $l1519:;
            if ((uint64_t) $tmp1518 >= 1) goto $l1517; else goto $l1497;
            $l1520:;
            if ((uint64_t) $tmp1518 > 1) goto $l1517; else goto $l1497;
            $l1517:;
            i1490.value += 1;
            goto $l1495;
            $l1497:;
        }
        }
        if (((panda$core$Bit) { newNodes1484 != NULL }).value) {
        {
            panda$collections$ImmutableArray* $tmp1526 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(newNodes1484);
            $tmp1525 = $tmp1526;
            $tmp1524 = $tmp1525;
            $returnValue1523 = $tmp1524;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1524));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1525));
            $tmp1483 = 0;
            goto $l1481;
            $l1527:;
            return $returnValue1523;
        }
        }
        $tmp1529 = NULL;
        $returnValue1523 = $tmp1529;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1529));
        $tmp1483 = 1;
        goto $l1481;
        $l1530:;
        return $returnValue1523;
    }
    $l1481:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newNodes1484));
    switch ($tmp1483) {
        case 1: goto $l1530;
        case 0: goto $l1527;
    }
    $l1532:;
    abort();
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* p_node, panda$core$MutableMethod* p_f) {
    org$pandalanguage$pandac$IRNode* $returnValue1533;
    org$pandalanguage$pandac$IRNode* $tmp1534;
    org$pandalanguage$pandac$IRNode* $tmp1536;
    org$pandalanguage$pandac$IRNode* $tmp1537;
    if (((panda$core$Bit) { p_node == NULL }).value) {
    {
        $tmp1534 = NULL;
        $returnValue1533 = $tmp1534;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1534));
        return $returnValue1533;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp1539 = (($fn1538) p_node->$class->vtable[7])(p_node, p_f);
    $tmp1537 = $tmp1539;
    $tmp1536 = $tmp1537;
    $returnValue1533 = $tmp1536;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1536));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1537));
    return $returnValue1533;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$default$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$IRNode* p_defaultValue) {
    org$pandalanguage$pandac$IRNode* $returnValue1541;
    org$pandalanguage$pandac$IRNode* $tmp1542;
    org$pandalanguage$pandac$IRNode* $tmp1544;
    if (((panda$core$Bit) { p_node != NULL }).value) {
    {
        $tmp1542 = p_node;
        $returnValue1541 = $tmp1542;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1542));
        return $returnValue1541;
    }
    }
    $tmp1544 = p_defaultValue;
    $returnValue1541 = $tmp1544;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1544));
    return $returnValue1541;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$IRNode$default$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$collections$ImmutableArray* p_nodes, panda$collections$ImmutableArray* p_defaultValue) {
    panda$collections$ImmutableArray* $returnValue1546;
    panda$collections$ImmutableArray* $tmp1547;
    panda$collections$ImmutableArray* $tmp1549;
    if (((panda$core$Bit) { p_nodes != NULL }).value) {
    {
        $tmp1547 = p_nodes;
        $returnValue1546 = $tmp1547;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1547));
        return $returnValue1546;
    }
    }
    $tmp1549 = p_defaultValue;
    $returnValue1546 = $tmp1549;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1549));
    return $returnValue1546;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$transform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$MutableMethod* p_f) {
    org$pandalanguage$pandac$IRNode* result1554 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1555;
    org$pandalanguage$pandac$IRNode* $tmp1556;
    org$pandalanguage$pandac$IRNode* $returnValue1558;
    org$pandalanguage$pandac$IRNode* $tmp1559;
    org$pandalanguage$pandac$IRNode* $tmp1562;
    int $tmp1553;
    {
        org$pandalanguage$pandac$IRNode* $tmp1557 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(self, p_f);
        $tmp1556 = $tmp1557;
        $tmp1555 = $tmp1556;
        result1554 = $tmp1555;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1555));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1556));
        if (((panda$core$Bit) { result1554 != NULL }).value) {
        {
            $tmp1559 = result1554;
            $returnValue1558 = $tmp1559;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1559));
            $tmp1553 = 0;
            goto $l1551;
            $l1560:;
            return $returnValue1558;
        }
        }
        $tmp1562 = self;
        $returnValue1558 = $tmp1562;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1562));
        $tmp1553 = 1;
        goto $l1551;
        $l1563:;
        return $returnValue1558;
    }
    $l1551:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1554));
    result1554 = NULL;
    switch ($tmp1553) {
        case 1: goto $l1563;
        case 0: goto $l1560;
    }
    $l1565:;
    abort();
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$MutableMethod* p_f) {
    org$pandalanguage$pandac$IRNode* transformed1569 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1570;
    org$pandalanguage$pandac$IRNode* $tmp1571;
    org$pandalanguage$pandac$IRNode* $tmp1572;
    org$pandalanguage$pandac$IRNode* $returnValue1575;
    org$pandalanguage$pandac$IRNode* $tmp1576;
    org$pandalanguage$pandac$IRNode* $match$506_91582 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1583;
    panda$core$Int64 $tmp1607;
    panda$core$Int64 $tmp1610;
    panda$core$Int64 $tmp1614;
    panda$core$Int64 $tmp1618;
    panda$core$Int64 $tmp1622;
    panda$core$Int64 $tmp1626;
    panda$core$Int64 $tmp1630;
    panda$core$Int64 $tmp1634;
    panda$core$Int64 $tmp1638;
    panda$core$Int64 $tmp1642;
    panda$core$Int64 $tmp1646;
    panda$core$Int64 $tmp1650;
    panda$core$Int64 $tmp1654;
    panda$core$Int64 $tmp1658;
    panda$core$Int64 $tmp1662;
    panda$core$Int64 $tmp1666;
    panda$core$Int64 $tmp1670;
    panda$core$Int64 $tmp1674;
    panda$core$Int64 $tmp1678;
    panda$core$Int64 $tmp1682;
    panda$core$Int64 $tmp1686;
    panda$core$Int64 $tmp1690;
    panda$core$Int64 $tmp1694;
    panda$core$Int64 $tmp1698;
    panda$core$Int64 $tmp1701;
    org$pandalanguage$pandac$Position position1703;
    org$pandalanguage$pandac$IRNode* test1705 = NULL;
    org$pandalanguage$pandac$IRNode* message1707 = NULL;
    org$pandalanguage$pandac$IRNode* newTest1712 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1713;
    org$pandalanguage$pandac$IRNode* $tmp1714;
    org$pandalanguage$pandac$IRNode* newMessage1716 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1717;
    org$pandalanguage$pandac$IRNode* $tmp1718;
    org$pandalanguage$pandac$IRNode* $tmp1723;
    org$pandalanguage$pandac$IRNode* $tmp1724;
    panda$core$Int64 $tmp1726;
    org$pandalanguage$pandac$IRNode* $tmp1727;
    org$pandalanguage$pandac$IRNode* $tmp1730;
    panda$core$Int64 $tmp1738;
    org$pandalanguage$pandac$Position position1740;
    org$pandalanguage$pandac$Type* type1742 = NULL;
    org$pandalanguage$pandac$IRNode* left1744 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op1746;
    org$pandalanguage$pandac$IRNode* right1748 = NULL;
    org$pandalanguage$pandac$IRNode* newLeft1753 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1754;
    org$pandalanguage$pandac$IRNode* $tmp1755;
    org$pandalanguage$pandac$IRNode* newRight1757 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1758;
    org$pandalanguage$pandac$IRNode* $tmp1759;
    org$pandalanguage$pandac$IRNode* $tmp1764;
    org$pandalanguage$pandac$IRNode* $tmp1765;
    panda$core$Int64 $tmp1767;
    org$pandalanguage$pandac$IRNode* $tmp1768;
    org$pandalanguage$pandac$IRNode* $tmp1771;
    panda$core$Int64 $tmp1779;
    org$pandalanguage$pandac$Position position1781;
    panda$collections$ImmutableArray* statements1783 = NULL;
    panda$collections$ImmutableArray* newStatements1788 = NULL;
    panda$collections$ImmutableArray* $tmp1789;
    panda$collections$ImmutableArray* $tmp1790;
    org$pandalanguage$pandac$IRNode* $tmp1792;
    org$pandalanguage$pandac$IRNode* $tmp1793;
    panda$core$Int64 $tmp1795;
    panda$core$Int64 $tmp1801;
    org$pandalanguage$pandac$Position position1803;
    panda$collections$ImmutableArray* statements1805 = NULL;
    panda$collections$ImmutableArray* finally1807 = NULL;
    panda$collections$ImmutableArray* newStatements1812 = NULL;
    panda$collections$ImmutableArray* $tmp1813;
    panda$collections$ImmutableArray* $tmp1814;
    panda$collections$ImmutableArray* newFinally1816 = NULL;
    panda$collections$ImmutableArray* $tmp1817;
    panda$collections$ImmutableArray* $tmp1818;
    org$pandalanguage$pandac$IRNode* $tmp1820;
    org$pandalanguage$pandac$IRNode* $tmp1821;
    panda$core$Int64 $tmp1823;
    panda$collections$ImmutableArray* $tmp1824;
    panda$collections$ImmutableArray* $tmp1827;
    panda$core$Int64 $tmp1835;
    org$pandalanguage$pandac$Position position1837;
    org$pandalanguage$pandac$Type* type1839 = NULL;
    org$pandalanguage$pandac$MethodRef* m1841 = NULL;
    panda$collections$ImmutableArray* args1843 = NULL;
    panda$collections$ImmutableArray* newArgs1848 = NULL;
    panda$collections$ImmutableArray* $tmp1849;
    panda$collections$ImmutableArray* $tmp1850;
    org$pandalanguage$pandac$IRNode* $tmp1852;
    org$pandalanguage$pandac$IRNode* $tmp1853;
    panda$core$Int64 $tmp1855;
    panda$collections$ImmutableArray* $tmp1856;
    panda$core$Int64 $tmp1864;
    org$pandalanguage$pandac$Position position1866;
    org$pandalanguage$pandac$IRNode* value1868 = NULL;
    org$pandalanguage$pandac$Type* type1870 = NULL;
    panda$core$Bit explicit1872;
    org$pandalanguage$pandac$IRNode* newValue1877 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1878;
    org$pandalanguage$pandac$IRNode* $tmp1879;
    org$pandalanguage$pandac$IRNode* $tmp1881;
    org$pandalanguage$pandac$IRNode* $tmp1882;
    panda$core$Int64 $tmp1884;
    panda$core$Int64 $tmp1890;
    org$pandalanguage$pandac$Position position1892;
    org$pandalanguage$pandac$IRNode* base1894 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce1896 = NULL;
    panda$core$Int64 field1898;
    org$pandalanguage$pandac$IRNode* newBase1903 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1904;
    org$pandalanguage$pandac$IRNode* $tmp1905;
    org$pandalanguage$pandac$IRNode* $tmp1907;
    org$pandalanguage$pandac$IRNode* $tmp1908;
    panda$core$Int64 $tmp1910;
    panda$core$Int64 $tmp1916;
    org$pandalanguage$pandac$Position position1918;
    org$pandalanguage$pandac$Type* type1920 = NULL;
    org$pandalanguage$pandac$IRNode* call1922 = NULL;
    org$pandalanguage$pandac$IRNode* newCall1927 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1928;
    org$pandalanguage$pandac$IRNode* $tmp1929;
    org$pandalanguage$pandac$IRNode* $tmp1931;
    org$pandalanguage$pandac$IRNode* $tmp1932;
    panda$core$Int64 $tmp1934;
    panda$core$Int64 $tmp1940;
    org$pandalanguage$pandac$IRNode* target1942 = NULL;
    org$pandalanguage$pandac$IRNode* value1944 = NULL;
    org$pandalanguage$pandac$IRNode* newValue1949 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1950;
    org$pandalanguage$pandac$IRNode* $tmp1951;
    org$pandalanguage$pandac$IRNode* $tmp1953;
    org$pandalanguage$pandac$IRNode* $tmp1954;
    panda$core$Int64 $tmp1956;
    panda$core$Int64 $tmp1962;
    org$pandalanguage$pandac$Position position1964;
    panda$core$String* label1966 = NULL;
    panda$collections$ImmutableArray* statements1968 = NULL;
    org$pandalanguage$pandac$IRNode* test1970 = NULL;
    panda$collections$ImmutableArray* newStatements1975 = NULL;
    panda$collections$ImmutableArray* $tmp1976;
    panda$collections$ImmutableArray* $tmp1977;
    org$pandalanguage$pandac$IRNode* newTest1979 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1980;
    org$pandalanguage$pandac$IRNode* $tmp1981;
    org$pandalanguage$pandac$IRNode* $tmp1986;
    org$pandalanguage$pandac$IRNode* $tmp1987;
    panda$core$Int64 $tmp1989;
    panda$collections$ImmutableArray* $tmp1990;
    org$pandalanguage$pandac$IRNode* $tmp1993;
    panda$core$Int64 $tmp2001;
    org$pandalanguage$pandac$IRNode* m2003 = NULL;
    panda$collections$ImmutableArray* args2005 = NULL;
    org$pandalanguage$pandac$IRNode* newM2010 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2011;
    org$pandalanguage$pandac$IRNode* $tmp2012;
    panda$collections$ImmutableArray* newArgs2014 = NULL;
    panda$collections$ImmutableArray* $tmp2015;
    panda$collections$ImmutableArray* $tmp2016;
    org$pandalanguage$pandac$IRNode* $tmp2021;
    org$pandalanguage$pandac$IRNode* $tmp2022;
    panda$core$Int64 $tmp2024;
    org$pandalanguage$pandac$IRNode* $tmp2025;
    panda$collections$ImmutableArray* $tmp2028;
    panda$core$Int64 $tmp2036;
    org$pandalanguage$pandac$IRNode* expr2038 = NULL;
    org$pandalanguage$pandac$IRNode* statements2040 = NULL;
    org$pandalanguage$pandac$IRNode* newExpr2045 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2046;
    org$pandalanguage$pandac$IRNode* $tmp2047;
    org$pandalanguage$pandac$IRNode* newStatements2049 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2050;
    org$pandalanguage$pandac$IRNode* $tmp2051;
    org$pandalanguage$pandac$IRNode* $tmp2056;
    org$pandalanguage$pandac$IRNode* $tmp2057;
    panda$core$Int64 $tmp2059;
    org$pandalanguage$pandac$IRNode* $tmp2060;
    org$pandalanguage$pandac$IRNode* $tmp2063;
    panda$core$Int64 $tmp2071;
    org$pandalanguage$pandac$Position position2073;
    org$pandalanguage$pandac$Type* type2075 = NULL;
    org$pandalanguage$pandac$IRNode* base2077 = NULL;
    org$pandalanguage$pandac$FieldDecl* field2079 = NULL;
    org$pandalanguage$pandac$IRNode* newBase2084 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2085;
    org$pandalanguage$pandac$IRNode* $tmp2086;
    org$pandalanguage$pandac$IRNode* $tmp2088;
    org$pandalanguage$pandac$IRNode* $tmp2089;
    panda$core$Int64 $tmp2091;
    panda$core$Int64 $tmp2097;
    org$pandalanguage$pandac$Position position2099;
    org$pandalanguage$pandac$IRNode* test2101 = NULL;
    panda$collections$ImmutableArray* ifTrue2103 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2105 = NULL;
    org$pandalanguage$pandac$IRNode* newTest2110 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2111;
    org$pandalanguage$pandac$IRNode* $tmp2112;
    panda$collections$ImmutableArray* newIfTrue2114 = NULL;
    panda$collections$ImmutableArray* $tmp2115;
    panda$collections$ImmutableArray* $tmp2116;
    org$pandalanguage$pandac$IRNode* newIfFalse2118 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2119;
    org$pandalanguage$pandac$IRNode* $tmp2120;
    org$pandalanguage$pandac$IRNode* $tmp2128;
    org$pandalanguage$pandac$IRNode* $tmp2129;
    panda$core$Int64 $tmp2131;
    org$pandalanguage$pandac$IRNode* $tmp2132;
    panda$collections$ImmutableArray* $tmp2135;
    org$pandalanguage$pandac$IRNode* $tmp2138;
    panda$core$Int64 $tmp2146;
    org$pandalanguage$pandac$Position position2148;
    org$pandalanguage$pandac$IRNode* value2150 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2155 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2156;
    org$pandalanguage$pandac$IRNode* $tmp2157;
    org$pandalanguage$pandac$IRNode* $tmp2159;
    org$pandalanguage$pandac$IRNode* $tmp2160;
    panda$core$Int64 $tmp2162;
    panda$core$Int64 $tmp2168;
    org$pandalanguage$pandac$Position position2170;
    org$pandalanguage$pandac$IRNode* value2172 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2177 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2178;
    org$pandalanguage$pandac$IRNode* $tmp2179;
    org$pandalanguage$pandac$IRNode* $tmp2181;
    org$pandalanguage$pandac$IRNode* $tmp2182;
    panda$core$Int64 $tmp2184;
    panda$core$Int64 $tmp2190;
    org$pandalanguage$pandac$Position position2192;
    panda$core$String* label2194 = NULL;
    panda$collections$ImmutableArray* statements2196 = NULL;
    panda$collections$ImmutableArray* newStatements2201 = NULL;
    panda$collections$ImmutableArray* $tmp2202;
    panda$collections$ImmutableArray* $tmp2203;
    org$pandalanguage$pandac$IRNode* $tmp2205;
    org$pandalanguage$pandac$IRNode* $tmp2206;
    panda$core$Int64 $tmp2208;
    panda$core$Int64 $tmp2214;
    org$pandalanguage$pandac$Position position2216;
    org$pandalanguage$pandac$IRNode* value2218 = NULL;
    panda$collections$ImmutableArray* whens2220 = NULL;
    panda$collections$ImmutableArray* other2222 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2227 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2228;
    org$pandalanguage$pandac$IRNode* $tmp2229;
    panda$collections$ImmutableArray* newWhens2231 = NULL;
    panda$collections$ImmutableArray* $tmp2232;
    panda$collections$ImmutableArray* $tmp2233;
    panda$collections$ImmutableArray* newOther2235 = NULL;
    panda$collections$ImmutableArray* $tmp2236;
    panda$collections$ImmutableArray* $tmp2237;
    org$pandalanguage$pandac$IRNode* $tmp2245;
    org$pandalanguage$pandac$IRNode* $tmp2246;
    panda$core$Int64 $tmp2248;
    org$pandalanguage$pandac$IRNode* $tmp2249;
    panda$collections$ImmutableArray* $tmp2252;
    panda$collections$ImmutableArray* $tmp2255;
    panda$core$Int64 $tmp2263;
    org$pandalanguage$pandac$Position position2265;
    org$pandalanguage$pandac$Type* type2267 = NULL;
    org$pandalanguage$pandac$IRNode* target2269 = NULL;
    org$pandalanguage$pandac$MethodRef* m2271 = NULL;
    org$pandalanguage$pandac$IRNode* newTarget2276 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2277;
    org$pandalanguage$pandac$IRNode* $tmp2278;
    org$pandalanguage$pandac$IRNode* $tmp2280;
    org$pandalanguage$pandac$IRNode* $tmp2281;
    panda$core$Int64 $tmp2283;
    panda$core$Int64 $tmp2289;
    org$pandalanguage$pandac$Position position2291;
    org$pandalanguage$pandac$parser$Token$Kind op2293;
    org$pandalanguage$pandac$IRNode* base2295 = NULL;
    org$pandalanguage$pandac$IRNode* newBase2300 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2301;
    org$pandalanguage$pandac$IRNode* $tmp2302;
    org$pandalanguage$pandac$IRNode* $tmp2304;
    org$pandalanguage$pandac$IRNode* $tmp2305;
    panda$core$Int64 $tmp2307;
    panda$core$Int64 $tmp2313;
    org$pandalanguage$pandac$Position position2315;
    panda$core$String* label2317 = NULL;
    org$pandalanguage$pandac$IRNode* target2319 = NULL;
    org$pandalanguage$pandac$IRNode* list2321 = NULL;
    panda$collections$ImmutableArray* statements2323 = NULL;
    org$pandalanguage$pandac$IRNode* newList2328 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2329;
    org$pandalanguage$pandac$IRNode* $tmp2330;
    panda$collections$ImmutableArray* newStatements2332 = NULL;
    panda$collections$ImmutableArray* $tmp2333;
    panda$collections$ImmutableArray* $tmp2334;
    org$pandalanguage$pandac$IRNode* $tmp2339;
    org$pandalanguage$pandac$IRNode* $tmp2340;
    panda$core$Int64 $tmp2342;
    org$pandalanguage$pandac$IRNode* $tmp2343;
    panda$collections$ImmutableArray* $tmp2346;
    panda$core$Int64 $tmp2354;
    org$pandalanguage$pandac$Position position2356;
    org$pandalanguage$pandac$IRNode* value2358 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2363 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2364;
    org$pandalanguage$pandac$IRNode* $tmp2365;
    org$pandalanguage$pandac$IRNode* $tmp2367;
    org$pandalanguage$pandac$IRNode* $tmp2368;
    panda$core$Int64 $tmp2370;
    panda$core$Int64 $tmp2376;
    org$pandalanguage$pandac$IRNode* base2378 = NULL;
    panda$core$Int64 id2380;
    org$pandalanguage$pandac$IRNode* newBase2385 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2386;
    org$pandalanguage$pandac$IRNode* $tmp2387;
    org$pandalanguage$pandac$IRNode* $tmp2389;
    org$pandalanguage$pandac$IRNode* $tmp2390;
    panda$core$Int64 $tmp2392;
    panda$core$Int64 $tmp2398;
    org$pandalanguage$pandac$Position position2400;
    org$pandalanguage$pandac$IRNode* test2402 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2404 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2406 = NULL;
    org$pandalanguage$pandac$IRNode* newTest2411 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2412;
    org$pandalanguage$pandac$IRNode* $tmp2413;
    org$pandalanguage$pandac$IRNode* newIfTrue2415 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2416;
    org$pandalanguage$pandac$IRNode* $tmp2417;
    org$pandalanguage$pandac$IRNode* newIfFalse2419 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2420;
    org$pandalanguage$pandac$IRNode* $tmp2421;
    org$pandalanguage$pandac$IRNode* $tmp2429;
    org$pandalanguage$pandac$IRNode* $tmp2430;
    panda$core$Int64 $tmp2432;
    org$pandalanguage$pandac$IRNode* $tmp2433;
    org$pandalanguage$pandac$IRNode* $tmp2436;
    org$pandalanguage$pandac$IRNode* $tmp2439;
    panda$core$Int64 $tmp2447;
    org$pandalanguage$pandac$Position position2449;
    org$pandalanguage$pandac$Variable$Kind kind2451;
    panda$collections$ImmutableArray* decls2453 = NULL;
    panda$collections$ImmutableArray* newDecls2458 = NULL;
    panda$collections$ImmutableArray* $tmp2459;
    panda$collections$ImmutableArray* $tmp2460;
    org$pandalanguage$pandac$IRNode* $tmp2462;
    org$pandalanguage$pandac$IRNode* $tmp2463;
    panda$core$Int64 $tmp2465;
    panda$core$Int64 $tmp2471;
    org$pandalanguage$pandac$Position position2473;
    panda$collections$ImmutableArray* tests2475 = NULL;
    panda$collections$ImmutableArray* statements2477 = NULL;
    panda$collections$ImmutableArray* newTests2482 = NULL;
    panda$collections$ImmutableArray* $tmp2483;
    panda$collections$ImmutableArray* $tmp2484;
    panda$collections$ImmutableArray* newStatements2486 = NULL;
    panda$collections$ImmutableArray* $tmp2487;
    panda$collections$ImmutableArray* $tmp2488;
    org$pandalanguage$pandac$IRNode* $tmp2493;
    org$pandalanguage$pandac$IRNode* $tmp2494;
    panda$core$Int64 $tmp2496;
    panda$collections$ImmutableArray* $tmp2497;
    panda$collections$ImmutableArray* $tmp2500;
    panda$core$Int64 $tmp2508;
    org$pandalanguage$pandac$Position position2510;
    panda$core$String* label2512 = NULL;
    org$pandalanguage$pandac$IRNode* test2514 = NULL;
    panda$collections$ImmutableArray* statements2516 = NULL;
    org$pandalanguage$pandac$IRNode* newTest2521 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2522;
    org$pandalanguage$pandac$IRNode* $tmp2523;
    panda$collections$ImmutableArray* newStatements2525 = NULL;
    panda$collections$ImmutableArray* $tmp2526;
    panda$collections$ImmutableArray* $tmp2527;
    org$pandalanguage$pandac$IRNode* $tmp2532;
    org$pandalanguage$pandac$IRNode* $tmp2533;
    panda$core$Int64 $tmp2535;
    org$pandalanguage$pandac$IRNode* $tmp2536;
    panda$collections$ImmutableArray* $tmp2539;
    panda$core$Bit $tmp2547;
    org$pandalanguage$pandac$IRNode* $tmp2552;
    int $tmp1568;
    {
        if (p_f->target) {
            $tmp1572 = (($fn1573) p_f->pointer)(p_f->target, self);
        } else {
            $tmp1572 = (($fn1574) p_f->pointer)(self);
        }
        $tmp1571 = $tmp1572;
        $tmp1570 = $tmp1571;
        transformed1569 = $tmp1570;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1570));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
        if (((panda$core$Bit) { transformed1569 != NULL }).value) {
        {
            $tmp1576 = transformed1569;
            $returnValue1575 = $tmp1576;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1576));
            $tmp1568 = 0;
            goto $l1566;
            $l1577:;
            return $returnValue1575;
        }
        }
        int $tmp1581;
        {
            $tmp1583 = self;
            $match$506_91582 = $tmp1583;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1583));
            panda$core$Int64$init$builtin_int64(&$tmp1607, 1);
            panda$core$Bit $tmp1608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1607);
            bool $tmp1606 = $tmp1608.value;
            if ($tmp1606) goto $l1609;
            panda$core$Int64$init$builtin_int64(&$tmp1610, 3);
            panda$core$Bit $tmp1611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1610);
            $tmp1606 = $tmp1611.value;
            $l1609:;
            panda$core$Bit $tmp1612 = { $tmp1606 };
            bool $tmp1605 = $tmp1612.value;
            if ($tmp1605) goto $l1613;
            panda$core$Int64$init$builtin_int64(&$tmp1614, 6);
            panda$core$Bit $tmp1615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1614);
            $tmp1605 = $tmp1615.value;
            $l1613:;
            panda$core$Bit $tmp1616 = { $tmp1605 };
            bool $tmp1604 = $tmp1616.value;
            if ($tmp1604) goto $l1617;
            panda$core$Int64$init$builtin_int64(&$tmp1618, 9);
            panda$core$Bit $tmp1619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1618);
            $tmp1604 = $tmp1619.value;
            $l1617:;
            panda$core$Bit $tmp1620 = { $tmp1604 };
            bool $tmp1603 = $tmp1620.value;
            if ($tmp1603) goto $l1621;
            panda$core$Int64$init$builtin_int64(&$tmp1622, 12);
            panda$core$Bit $tmp1623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1622);
            $tmp1603 = $tmp1623.value;
            $l1621:;
            panda$core$Bit $tmp1624 = { $tmp1603 };
            bool $tmp1602 = $tmp1624.value;
            if ($tmp1602) goto $l1625;
            panda$core$Int64$init$builtin_int64(&$tmp1626, 13);
            panda$core$Bit $tmp1627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1626);
            $tmp1602 = $tmp1627.value;
            $l1625:;
            panda$core$Bit $tmp1628 = { $tmp1602 };
            bool $tmp1601 = $tmp1628.value;
            if ($tmp1601) goto $l1629;
            panda$core$Int64$init$builtin_int64(&$tmp1630, 20);
            panda$core$Bit $tmp1631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1630);
            $tmp1601 = $tmp1631.value;
            $l1629:;
            panda$core$Bit $tmp1632 = { $tmp1601 };
            bool $tmp1600 = $tmp1632.value;
            if ($tmp1600) goto $l1633;
            panda$core$Int64$init$builtin_int64(&$tmp1634, 26);
            panda$core$Bit $tmp1635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1634);
            $tmp1600 = $tmp1635.value;
            $l1633:;
            panda$core$Bit $tmp1636 = { $tmp1600 };
            bool $tmp1599 = $tmp1636.value;
            if ($tmp1599) goto $l1637;
            panda$core$Int64$init$builtin_int64(&$tmp1638, 27);
            panda$core$Bit $tmp1639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1638);
            $tmp1599 = $tmp1639.value;
            $l1637:;
            panda$core$Bit $tmp1640 = { $tmp1599 };
            bool $tmp1598 = $tmp1640.value;
            if ($tmp1598) goto $l1641;
            panda$core$Int64$init$builtin_int64(&$tmp1642, 30);
            panda$core$Bit $tmp1643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1642);
            $tmp1598 = $tmp1643.value;
            $l1641:;
            panda$core$Bit $tmp1644 = { $tmp1598 };
            bool $tmp1597 = $tmp1644.value;
            if ($tmp1597) goto $l1645;
            panda$core$Int64$init$builtin_int64(&$tmp1646, 34);
            panda$core$Bit $tmp1647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1646);
            $tmp1597 = $tmp1647.value;
            $l1645:;
            panda$core$Bit $tmp1648 = { $tmp1597 };
            bool $tmp1596 = $tmp1648.value;
            if ($tmp1596) goto $l1649;
            panda$core$Int64$init$builtin_int64(&$tmp1650, 35);
            panda$core$Bit $tmp1651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1650);
            $tmp1596 = $tmp1651.value;
            $l1649:;
            panda$core$Bit $tmp1652 = { $tmp1596 };
            bool $tmp1595 = $tmp1652.value;
            if ($tmp1595) goto $l1653;
            panda$core$Int64$init$builtin_int64(&$tmp1654, 36);
            panda$core$Bit $tmp1655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1654);
            $tmp1595 = $tmp1655.value;
            $l1653:;
            panda$core$Bit $tmp1656 = { $tmp1595 };
            bool $tmp1594 = $tmp1656.value;
            if ($tmp1594) goto $l1657;
            panda$core$Int64$init$builtin_int64(&$tmp1658, 37);
            panda$core$Bit $tmp1659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1658);
            $tmp1594 = $tmp1659.value;
            $l1657:;
            panda$core$Bit $tmp1660 = { $tmp1594 };
            bool $tmp1593 = $tmp1660.value;
            if ($tmp1593) goto $l1661;
            panda$core$Int64$init$builtin_int64(&$tmp1662, 32);
            panda$core$Bit $tmp1663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1662);
            $tmp1593 = $tmp1663.value;
            $l1661:;
            panda$core$Bit $tmp1664 = { $tmp1593 };
            bool $tmp1592 = $tmp1664.value;
            if ($tmp1592) goto $l1665;
            panda$core$Int64$init$builtin_int64(&$tmp1666, 39);
            panda$core$Bit $tmp1667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1666);
            $tmp1592 = $tmp1667.value;
            $l1665:;
            panda$core$Bit $tmp1668 = { $tmp1592 };
            bool $tmp1591 = $tmp1668.value;
            if ($tmp1591) goto $l1669;
            panda$core$Int64$init$builtin_int64(&$tmp1670, 40);
            panda$core$Bit $tmp1671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1670);
            $tmp1591 = $tmp1671.value;
            $l1669:;
            panda$core$Bit $tmp1672 = { $tmp1591 };
            bool $tmp1590 = $tmp1672.value;
            if ($tmp1590) goto $l1673;
            panda$core$Int64$init$builtin_int64(&$tmp1674, 44);
            panda$core$Bit $tmp1675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1674);
            $tmp1590 = $tmp1675.value;
            $l1673:;
            panda$core$Bit $tmp1676 = { $tmp1590 };
            bool $tmp1589 = $tmp1676.value;
            if ($tmp1589) goto $l1677;
            panda$core$Int64$init$builtin_int64(&$tmp1678, 41);
            panda$core$Bit $tmp1679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1678);
            $tmp1589 = $tmp1679.value;
            $l1677:;
            panda$core$Bit $tmp1680 = { $tmp1589 };
            bool $tmp1588 = $tmp1680.value;
            if ($tmp1588) goto $l1681;
            panda$core$Int64$init$builtin_int64(&$tmp1682, 42);
            panda$core$Bit $tmp1683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1682);
            $tmp1588 = $tmp1683.value;
            $l1681:;
            panda$core$Bit $tmp1684 = { $tmp1588 };
            bool $tmp1587 = $tmp1684.value;
            if ($tmp1587) goto $l1685;
            panda$core$Int64$init$builtin_int64(&$tmp1686, 43);
            panda$core$Bit $tmp1687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1686);
            $tmp1587 = $tmp1687.value;
            $l1685:;
            panda$core$Bit $tmp1688 = { $tmp1587 };
            bool $tmp1586 = $tmp1688.value;
            if ($tmp1586) goto $l1689;
            panda$core$Int64$init$builtin_int64(&$tmp1690, 45);
            panda$core$Bit $tmp1691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1690);
            $tmp1586 = $tmp1691.value;
            $l1689:;
            panda$core$Bit $tmp1692 = { $tmp1586 };
            bool $tmp1585 = $tmp1692.value;
            if ($tmp1585) goto $l1693;
            panda$core$Int64$init$builtin_int64(&$tmp1694, 47);
            panda$core$Bit $tmp1695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1694);
            $tmp1585 = $tmp1695.value;
            $l1693:;
            panda$core$Bit $tmp1696 = { $tmp1585 };
            bool $tmp1584 = $tmp1696.value;
            if ($tmp1584) goto $l1697;
            panda$core$Int64$init$builtin_int64(&$tmp1698, 48);
            panda$core$Bit $tmp1699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1698);
            $tmp1584 = $tmp1699.value;
            $l1697:;
            panda$core$Bit $tmp1700 = { $tmp1584 };
            if ($tmp1700.value) {
            {
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1701, 0);
            panda$core$Bit $tmp1702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1701);
            if ($tmp1702.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1704 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position1703 = *$tmp1704;
                org$pandalanguage$pandac$IRNode** $tmp1706 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 16));
                test1705 = *$tmp1706;
                org$pandalanguage$pandac$IRNode** $tmp1708 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 24));
                message1707 = *$tmp1708;
                int $tmp1711;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1715 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test1705, p_f);
                    $tmp1714 = $tmp1715;
                    $tmp1713 = $tmp1714;
                    newTest1712 = $tmp1713;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1713));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1714));
                    org$pandalanguage$pandac$IRNode* $tmp1719 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(message1707, p_f);
                    $tmp1718 = $tmp1719;
                    $tmp1717 = $tmp1718;
                    newMessage1716 = $tmp1717;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1717));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1718));
                    bool $tmp1720 = ((panda$core$Bit) { newTest1712 != NULL }).value;
                    if ($tmp1720) goto $l1721;
                    $tmp1720 = ((panda$core$Bit) { newMessage1716 != NULL }).value;
                    $l1721:;
                    panda$core$Bit $tmp1722 = { $tmp1720 };
                    if ($tmp1722.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1725 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1726, 0);
                        org$pandalanguage$pandac$IRNode* $tmp1729 = (($fn1728) self->$class->vtable[5])(self, newTest1712, test1705);
                        $tmp1727 = $tmp1729;
                        org$pandalanguage$pandac$IRNode* $tmp1732 = (($fn1731) self->$class->vtable[5])(self, newMessage1716, message1707);
                        $tmp1730 = $tmp1732;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp1725, $tmp1726, position1703, $tmp1727, $tmp1730);
                        $tmp1724 = $tmp1725;
                        $tmp1723 = $tmp1724;
                        $returnValue1575 = $tmp1723;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1723));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1724));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1730));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1727));
                        $tmp1711 = 0;
                        goto $l1709;
                        $l1733:;
                        $tmp1581 = 0;
                        goto $l1579;
                        $l1734:;
                        $tmp1568 = 1;
                        goto $l1566;
                        $l1735:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp1711 = -1;
                goto $l1709;
                $l1709:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newMessage1716));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest1712));
                newTest1712 = NULL;
                newMessage1716 = NULL;
                switch ($tmp1711) {
                    case 0: goto $l1733;
                    case -1: goto $l1737;
                }
                $l1737:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1738, 2);
            panda$core$Bit $tmp1739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1738);
            if ($tmp1739.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1741 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position1740 = *$tmp1741;
                org$pandalanguage$pandac$Type** $tmp1743 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91582->$data + 16));
                type1742 = *$tmp1743;
                org$pandalanguage$pandac$IRNode** $tmp1745 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 24));
                left1744 = *$tmp1745;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1747 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$506_91582->$data + 32));
                op1746 = *$tmp1747;
                org$pandalanguage$pandac$IRNode** $tmp1749 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 40));
                right1748 = *$tmp1749;
                int $tmp1752;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1756 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(left1744, p_f);
                    $tmp1755 = $tmp1756;
                    $tmp1754 = $tmp1755;
                    newLeft1753 = $tmp1754;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1754));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1755));
                    org$pandalanguage$pandac$IRNode* $tmp1760 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(right1748, p_f);
                    $tmp1759 = $tmp1760;
                    $tmp1758 = $tmp1759;
                    newRight1757 = $tmp1758;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1758));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1759));
                    bool $tmp1761 = ((panda$core$Bit) { newLeft1753 != NULL }).value;
                    if ($tmp1761) goto $l1762;
                    $tmp1761 = ((panda$core$Bit) { newRight1757 != NULL }).value;
                    $l1762:;
                    panda$core$Bit $tmp1763 = { $tmp1761 };
                    if ($tmp1763.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1766 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1767, 2);
                        org$pandalanguage$pandac$IRNode* $tmp1770 = (($fn1769) self->$class->vtable[5])(self, newLeft1753, left1744);
                        $tmp1768 = $tmp1770;
                        org$pandalanguage$pandac$IRNode* $tmp1773 = (($fn1772) self->$class->vtable[5])(self, newRight1757, right1748);
                        $tmp1771 = $tmp1773;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp1766, $tmp1767, position1740, type1742, $tmp1768, op1746, $tmp1771);
                        $tmp1765 = $tmp1766;
                        $tmp1764 = $tmp1765;
                        $returnValue1575 = $tmp1764;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1764));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1765));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1771));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1768));
                        $tmp1752 = 0;
                        goto $l1750;
                        $l1774:;
                        $tmp1581 = 1;
                        goto $l1579;
                        $l1775:;
                        $tmp1568 = 2;
                        goto $l1566;
                        $l1776:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp1752 = -1;
                goto $l1750;
                $l1750:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newRight1757));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newLeft1753));
                newLeft1753 = NULL;
                newRight1757 = NULL;
                switch ($tmp1752) {
                    case 0: goto $l1774;
                    case -1: goto $l1778;
                }
                $l1778:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1779, 4);
            panda$core$Bit $tmp1780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1779);
            if ($tmp1780.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1782 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position1781 = *$tmp1782;
                panda$collections$ImmutableArray** $tmp1784 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91582->$data + 16));
                statements1783 = *$tmp1784;
                int $tmp1787;
                {
                    panda$collections$ImmutableArray* $tmp1791 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements1783, p_f);
                    $tmp1790 = $tmp1791;
                    $tmp1789 = $tmp1790;
                    newStatements1788 = $tmp1789;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1789));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1790));
                    if (((panda$core$Bit) { newStatements1788 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1794 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1795, 4);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp1794, $tmp1795, position1781, newStatements1788);
                        $tmp1793 = $tmp1794;
                        $tmp1792 = $tmp1793;
                        $returnValue1575 = $tmp1792;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1792));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1793));
                        $tmp1787 = 0;
                        goto $l1785;
                        $l1796:;
                        $tmp1581 = 2;
                        goto $l1579;
                        $l1797:;
                        $tmp1568 = 3;
                        goto $l1566;
                        $l1798:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp1787 = -1;
                goto $l1785;
                $l1785:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements1788));
                newStatements1788 = NULL;
                switch ($tmp1787) {
                    case -1: goto $l1800;
                    case 0: goto $l1796;
                }
                $l1800:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1801, 5);
            panda$core$Bit $tmp1802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1801);
            if ($tmp1802.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1804 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position1803 = *$tmp1804;
                panda$collections$ImmutableArray** $tmp1806 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91582->$data + 16));
                statements1805 = *$tmp1806;
                panda$collections$ImmutableArray** $tmp1808 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91582->$data + 24));
                finally1807 = *$tmp1808;
                int $tmp1811;
                {
                    panda$collections$ImmutableArray* $tmp1815 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements1805, p_f);
                    $tmp1814 = $tmp1815;
                    $tmp1813 = $tmp1814;
                    newStatements1812 = $tmp1813;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1813));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1814));
                    panda$collections$ImmutableArray* $tmp1819 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(finally1807, p_f);
                    $tmp1818 = $tmp1819;
                    $tmp1817 = $tmp1818;
                    newFinally1816 = $tmp1817;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1817));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1818));
                    if (((panda$core$Bit) { newStatements1812 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1822 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1823, 5);
                        panda$collections$ImmutableArray* $tmp1826 = (($fn1825) self->$class->vtable[6])(self, newStatements1812, statements1805);
                        $tmp1824 = $tmp1826;
                        panda$collections$ImmutableArray* $tmp1829 = (($fn1828) self->$class->vtable[6])(self, newFinally1816, finally1807);
                        $tmp1827 = $tmp1829;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp1822, $tmp1823, position1803, $tmp1824, $tmp1827);
                        $tmp1821 = $tmp1822;
                        $tmp1820 = $tmp1821;
                        $returnValue1575 = $tmp1820;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1820));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1821));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1827));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1824));
                        $tmp1811 = 0;
                        goto $l1809;
                        $l1830:;
                        $tmp1581 = 3;
                        goto $l1579;
                        $l1831:;
                        $tmp1568 = 4;
                        goto $l1566;
                        $l1832:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp1811 = -1;
                goto $l1809;
                $l1809:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newFinally1816));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements1812));
                newStatements1812 = NULL;
                newFinally1816 = NULL;
                switch ($tmp1811) {
                    case -1: goto $l1834;
                    case 0: goto $l1830;
                }
                $l1834:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1835, 7);
            panda$core$Bit $tmp1836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1835);
            if ($tmp1836.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1838 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position1837 = *$tmp1838;
                org$pandalanguage$pandac$Type** $tmp1840 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91582->$data + 16));
                type1839 = *$tmp1840;
                org$pandalanguage$pandac$MethodRef** $tmp1842 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$506_91582->$data + 24));
                m1841 = *$tmp1842;
                panda$collections$ImmutableArray** $tmp1844 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91582->$data + 32));
                args1843 = *$tmp1844;
                int $tmp1847;
                {
                    panda$collections$ImmutableArray* $tmp1851 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(args1843, p_f);
                    $tmp1850 = $tmp1851;
                    $tmp1849 = $tmp1850;
                    newArgs1848 = $tmp1849;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1849));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1850));
                    if (((panda$core$Bit) { newArgs1848 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1854 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1855, 7);
                        panda$collections$ImmutableArray* $tmp1858 = (($fn1857) self->$class->vtable[6])(self, newArgs1848, args1843);
                        $tmp1856 = $tmp1858;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp1854, $tmp1855, position1837, type1839, m1841, $tmp1856);
                        $tmp1853 = $tmp1854;
                        $tmp1852 = $tmp1853;
                        $returnValue1575 = $tmp1852;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1852));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1853));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1856));
                        $tmp1847 = 0;
                        goto $l1845;
                        $l1859:;
                        $tmp1581 = 4;
                        goto $l1579;
                        $l1860:;
                        $tmp1568 = 5;
                        goto $l1566;
                        $l1861:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp1847 = -1;
                goto $l1845;
                $l1845:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newArgs1848));
                newArgs1848 = NULL;
                switch ($tmp1847) {
                    case -1: goto $l1863;
                    case 0: goto $l1859;
                }
                $l1863:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1864, 8);
            panda$core$Bit $tmp1865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1864);
            if ($tmp1865.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1867 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position1866 = *$tmp1867;
                org$pandalanguage$pandac$IRNode** $tmp1869 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 16));
                value1868 = *$tmp1869;
                org$pandalanguage$pandac$Type** $tmp1871 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91582->$data + 24));
                type1870 = *$tmp1871;
                panda$core$Bit* $tmp1873 = ((panda$core$Bit*) ((char*) $match$506_91582->$data + 32));
                explicit1872 = *$tmp1873;
                int $tmp1876;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1880 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value1868, p_f);
                    $tmp1879 = $tmp1880;
                    $tmp1878 = $tmp1879;
                    newValue1877 = $tmp1878;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1878));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1879));
                    if (((panda$core$Bit) { newValue1877 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1883 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1884, 8);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1883, $tmp1884, position1866, newValue1877, type1870, explicit1872);
                        $tmp1882 = $tmp1883;
                        $tmp1881 = $tmp1882;
                        $returnValue1575 = $tmp1881;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1881));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1882));
                        $tmp1876 = 0;
                        goto $l1874;
                        $l1885:;
                        $tmp1581 = 5;
                        goto $l1579;
                        $l1886:;
                        $tmp1568 = 6;
                        goto $l1566;
                        $l1887:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp1876 = -1;
                goto $l1874;
                $l1874:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue1877));
                newValue1877 = NULL;
                switch ($tmp1876) {
                    case 0: goto $l1885;
                    case -1: goto $l1889;
                }
                $l1889:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1890, 10);
            panda$core$Bit $tmp1891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1890);
            if ($tmp1891.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1893 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position1892 = *$tmp1893;
                org$pandalanguage$pandac$IRNode** $tmp1895 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 16));
                base1894 = *$tmp1895;
                org$pandalanguage$pandac$ChoiceEntry** $tmp1897 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$506_91582->$data + 24));
                ce1896 = *$tmp1897;
                panda$core$Int64* $tmp1899 = ((panda$core$Int64*) ((char*) $match$506_91582->$data + 32));
                field1898 = *$tmp1899;
                int $tmp1902;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1906 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base1894, p_f);
                    $tmp1905 = $tmp1906;
                    $tmp1904 = $tmp1905;
                    newBase1903 = $tmp1904;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1904));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1905));
                    if (((panda$core$Bit) { newBase1903 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1909 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1910, 10);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp1909, $tmp1910, position1892, newBase1903, ce1896, field1898);
                        $tmp1908 = $tmp1909;
                        $tmp1907 = $tmp1908;
                        $returnValue1575 = $tmp1907;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1907));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1908));
                        $tmp1902 = 0;
                        goto $l1900;
                        $l1911:;
                        $tmp1581 = 6;
                        goto $l1579;
                        $l1912:;
                        $tmp1568 = 7;
                        goto $l1566;
                        $l1913:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp1902 = -1;
                goto $l1900;
                $l1900:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase1903));
                newBase1903 = NULL;
                switch ($tmp1902) {
                    case -1: goto $l1915;
                    case 0: goto $l1911;
                }
                $l1915:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1916, 11);
            panda$core$Bit $tmp1917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1916);
            if ($tmp1917.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1919 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position1918 = *$tmp1919;
                org$pandalanguage$pandac$Type** $tmp1921 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91582->$data + 16));
                type1920 = *$tmp1921;
                org$pandalanguage$pandac$IRNode** $tmp1923 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 24));
                call1922 = *$tmp1923;
                int $tmp1926;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1930 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(call1922, p_f);
                    $tmp1929 = $tmp1930;
                    $tmp1928 = $tmp1929;
                    newCall1927 = $tmp1928;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1928));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1929));
                    if (((panda$core$Bit) { newCall1927 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1933 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1934, 11);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode($tmp1933, $tmp1934, position1918, type1920, newCall1927);
                        $tmp1932 = $tmp1933;
                        $tmp1931 = $tmp1932;
                        $returnValue1575 = $tmp1931;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1931));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1932));
                        $tmp1926 = 0;
                        goto $l1924;
                        $l1935:;
                        $tmp1581 = 7;
                        goto $l1579;
                        $l1936:;
                        $tmp1568 = 8;
                        goto $l1566;
                        $l1937:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp1926 = -1;
                goto $l1924;
                $l1924:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newCall1927));
                newCall1927 = NULL;
                switch ($tmp1926) {
                    case -1: goto $l1939;
                    case 0: goto $l1935;
                }
                $l1939:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1940, 14);
            panda$core$Bit $tmp1941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1940);
            if ($tmp1941.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp1943 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 0));
                target1942 = *$tmp1943;
                org$pandalanguage$pandac$IRNode** $tmp1945 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 8));
                value1944 = *$tmp1945;
                int $tmp1948;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1952 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value1944, p_f);
                    $tmp1951 = $tmp1952;
                    $tmp1950 = $tmp1951;
                    newValue1949 = $tmp1950;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1950));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1951));
                    if (((panda$core$Bit) { newValue1949 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1955 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1956, 14);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp1955, $tmp1956, target1942, newValue1949);
                        $tmp1954 = $tmp1955;
                        $tmp1953 = $tmp1954;
                        $returnValue1575 = $tmp1953;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1953));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1954));
                        $tmp1948 = 0;
                        goto $l1946;
                        $l1957:;
                        $tmp1581 = 8;
                        goto $l1579;
                        $l1958:;
                        $tmp1568 = 9;
                        goto $l1566;
                        $l1959:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp1948 = -1;
                goto $l1946;
                $l1946:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue1949));
                newValue1949 = NULL;
                switch ($tmp1948) {
                    case 0: goto $l1957;
                    case -1: goto $l1961;
                }
                $l1961:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1962, 15);
            panda$core$Bit $tmp1963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp1962);
            if ($tmp1963.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1965 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position1964 = *$tmp1965;
                panda$core$String** $tmp1967 = ((panda$core$String**) ((char*) $match$506_91582->$data + 16));
                label1966 = *$tmp1967;
                panda$collections$ImmutableArray** $tmp1969 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91582->$data + 24));
                statements1968 = *$tmp1969;
                org$pandalanguage$pandac$IRNode** $tmp1971 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 32));
                test1970 = *$tmp1971;
                int $tmp1974;
                {
                    panda$collections$ImmutableArray* $tmp1978 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements1968, p_f);
                    $tmp1977 = $tmp1978;
                    $tmp1976 = $tmp1977;
                    newStatements1975 = $tmp1976;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1976));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1977));
                    org$pandalanguage$pandac$IRNode* $tmp1982 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test1970, p_f);
                    $tmp1981 = $tmp1982;
                    $tmp1980 = $tmp1981;
                    newTest1979 = $tmp1980;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1980));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1981));
                    bool $tmp1983 = ((panda$core$Bit) { newStatements1975 != NULL }).value;
                    if ($tmp1983) goto $l1984;
                    $tmp1983 = ((panda$core$Bit) { newTest1979 != NULL }).value;
                    $l1984:;
                    panda$core$Bit $tmp1985 = { $tmp1983 };
                    if ($tmp1985.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1988 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1989, 15);
                        panda$collections$ImmutableArray* $tmp1992 = (($fn1991) self->$class->vtable[6])(self, newStatements1975, statements1968);
                        $tmp1990 = $tmp1992;
                        org$pandalanguage$pandac$IRNode* $tmp1995 = (($fn1994) self->$class->vtable[5])(self, newTest1979, test1970);
                        $tmp1993 = $tmp1995;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode($tmp1988, $tmp1989, position1964, label1966, $tmp1990, $tmp1993);
                        $tmp1987 = $tmp1988;
                        $tmp1986 = $tmp1987;
                        $returnValue1575 = $tmp1986;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1986));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1987));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1993));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1990));
                        $tmp1974 = 0;
                        goto $l1972;
                        $l1996:;
                        $tmp1581 = 9;
                        goto $l1579;
                        $l1997:;
                        $tmp1568 = 10;
                        goto $l1566;
                        $l1998:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp1974 = -1;
                goto $l1972;
                $l1972:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest1979));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements1975));
                newStatements1975 = NULL;
                newTest1979 = NULL;
                switch ($tmp1974) {
                    case 0: goto $l1996;
                    case -1: goto $l2000;
                }
                $l2000:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2001, 16);
            panda$core$Bit $tmp2002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2001);
            if ($tmp2002.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2004 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 0));
                m2003 = *$tmp2004;
                panda$collections$ImmutableArray** $tmp2006 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91582->$data + 8));
                args2005 = *$tmp2006;
                int $tmp2009;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2013 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(m2003, p_f);
                    $tmp2012 = $tmp2013;
                    $tmp2011 = $tmp2012;
                    newM2010 = $tmp2011;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2011));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2012));
                    panda$collections$ImmutableArray* $tmp2017 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(args2005, p_f);
                    $tmp2016 = $tmp2017;
                    $tmp2015 = $tmp2016;
                    newArgs2014 = $tmp2015;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2015));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2016));
                    bool $tmp2018 = ((panda$core$Bit) { newM2010 != NULL }).value;
                    if ($tmp2018) goto $l2019;
                    $tmp2018 = ((panda$core$Bit) { newArgs2014 != NULL }).value;
                    $l2019:;
                    panda$core$Bit $tmp2020 = { $tmp2018 };
                    if ($tmp2020.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2023 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2024, 16);
                        org$pandalanguage$pandac$IRNode* $tmp2027 = (($fn2026) self->$class->vtable[5])(self, newM2010, m2003);
                        $tmp2025 = $tmp2027;
                        panda$collections$ImmutableArray* $tmp2030 = (($fn2029) self->$class->vtable[6])(self, newArgs2014, args2005);
                        $tmp2028 = $tmp2030;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2023, $tmp2024, $tmp2025, $tmp2028);
                        $tmp2022 = $tmp2023;
                        $tmp2021 = $tmp2022;
                        $returnValue1575 = $tmp2021;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2021));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2022));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2028));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2025));
                        $tmp2009 = 0;
                        goto $l2007;
                        $l2031:;
                        $tmp1581 = 10;
                        goto $l1579;
                        $l2032:;
                        $tmp1568 = 11;
                        goto $l1566;
                        $l2033:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2009 = -1;
                goto $l2007;
                $l2007:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newArgs2014));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newM2010));
                newM2010 = NULL;
                newArgs2014 = NULL;
                switch ($tmp2009) {
                    case 0: goto $l2031;
                    case -1: goto $l2035;
                }
                $l2035:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2036, 17);
            panda$core$Bit $tmp2037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2036);
            if ($tmp2037.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2039 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 0));
                expr2038 = *$tmp2039;
                org$pandalanguage$pandac$IRNode** $tmp2041 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 8));
                statements2040 = *$tmp2041;
                int $tmp2044;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2048 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(expr2038, p_f);
                    $tmp2047 = $tmp2048;
                    $tmp2046 = $tmp2047;
                    newExpr2045 = $tmp2046;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2046));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2047));
                    org$pandalanguage$pandac$IRNode* $tmp2052 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(statements2040, p_f);
                    $tmp2051 = $tmp2052;
                    $tmp2050 = $tmp2051;
                    newStatements2049 = $tmp2050;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2050));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2051));
                    bool $tmp2053 = ((panda$core$Bit) { newExpr2045 != NULL }).value;
                    if ($tmp2053) goto $l2054;
                    $tmp2053 = ((panda$core$Bit) { newStatements2049 != NULL }).value;
                    $l2054:;
                    panda$core$Bit $tmp2055 = { $tmp2053 };
                    if ($tmp2055.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2058 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2059, 17);
                        org$pandalanguage$pandac$IRNode* $tmp2062 = (($fn2061) self->$class->vtable[5])(self, newExpr2045, expr2038);
                        $tmp2060 = $tmp2062;
                        org$pandalanguage$pandac$IRNode* $tmp2065 = (($fn2064) self->$class->vtable[5])(self, newStatements2049, statements2040);
                        $tmp2063 = $tmp2065;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode($tmp2058, $tmp2059, $tmp2060, $tmp2063);
                        $tmp2057 = $tmp2058;
                        $tmp2056 = $tmp2057;
                        $returnValue1575 = $tmp2056;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2056));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2057));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2063));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2060));
                        $tmp2044 = 0;
                        goto $l2042;
                        $l2066:;
                        $tmp1581 = 11;
                        goto $l1579;
                        $l2067:;
                        $tmp1568 = 12;
                        goto $l1566;
                        $l2068:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2044 = -1;
                goto $l2042;
                $l2042:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2049));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newExpr2045));
                newExpr2045 = NULL;
                newStatements2049 = NULL;
                switch ($tmp2044) {
                    case -1: goto $l2070;
                    case 0: goto $l2066;
                }
                $l2070:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2071, 18);
            panda$core$Bit $tmp2072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2071);
            if ($tmp2072.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2074 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position2073 = *$tmp2074;
                org$pandalanguage$pandac$Type** $tmp2076 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91582->$data + 16));
                type2075 = *$tmp2076;
                org$pandalanguage$pandac$IRNode** $tmp2078 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 24));
                base2077 = *$tmp2078;
                org$pandalanguage$pandac$FieldDecl** $tmp2080 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$506_91582->$data + 32));
                field2079 = *$tmp2080;
                int $tmp2083;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2087 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base2077, p_f);
                    $tmp2086 = $tmp2087;
                    $tmp2085 = $tmp2086;
                    newBase2084 = $tmp2085;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2085));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2086));
                    if (((panda$core$Bit) { newBase2084 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2090 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2091, 18);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$FieldDecl($tmp2090, $tmp2091, position2073, type2075, newBase2084, field2079);
                        $tmp2089 = $tmp2090;
                        $tmp2088 = $tmp2089;
                        $returnValue1575 = $tmp2088;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2088));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2089));
                        $tmp2083 = 0;
                        goto $l2081;
                        $l2092:;
                        $tmp1581 = 12;
                        goto $l1579;
                        $l2093:;
                        $tmp1568 = 13;
                        goto $l1566;
                        $l2094:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2083 = -1;
                goto $l2081;
                $l2081:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase2084));
                newBase2084 = NULL;
                switch ($tmp2083) {
                    case 0: goto $l2092;
                    case -1: goto $l2096;
                }
                $l2096:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2097, 19);
            panda$core$Bit $tmp2098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2097);
            if ($tmp2098.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2100 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position2099 = *$tmp2100;
                org$pandalanguage$pandac$IRNode** $tmp2102 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 16));
                test2101 = *$tmp2102;
                panda$collections$ImmutableArray** $tmp2104 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91582->$data + 24));
                ifTrue2103 = *$tmp2104;
                org$pandalanguage$pandac$IRNode** $tmp2106 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 32));
                ifFalse2105 = *$tmp2106;
                int $tmp2109;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2113 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test2101, p_f);
                    $tmp2112 = $tmp2113;
                    $tmp2111 = $tmp2112;
                    newTest2110 = $tmp2111;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2111));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2112));
                    panda$collections$ImmutableArray* $tmp2117 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(ifTrue2103, p_f);
                    $tmp2116 = $tmp2117;
                    $tmp2115 = $tmp2116;
                    newIfTrue2114 = $tmp2115;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2115));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2116));
                    org$pandalanguage$pandac$IRNode* $tmp2121 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(ifFalse2105, p_f);
                    $tmp2120 = $tmp2121;
                    $tmp2119 = $tmp2120;
                    newIfFalse2118 = $tmp2119;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2119));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2120));
                    bool $tmp2123 = ((panda$core$Bit) { newTest2110 != NULL }).value;
                    if ($tmp2123) goto $l2124;
                    $tmp2123 = ((panda$core$Bit) { newIfTrue2114 != NULL }).value;
                    $l2124:;
                    panda$core$Bit $tmp2125 = { $tmp2123 };
                    bool $tmp2122 = $tmp2125.value;
                    if ($tmp2122) goto $l2126;
                    $tmp2122 = ((panda$core$Bit) { newIfFalse2118 != NULL }).value;
                    $l2126:;
                    panda$core$Bit $tmp2127 = { $tmp2122 };
                    if ($tmp2127.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2130 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2131, 19);
                        org$pandalanguage$pandac$IRNode* $tmp2134 = (($fn2133) self->$class->vtable[5])(self, newTest2110, test2101);
                        $tmp2132 = $tmp2134;
                        panda$collections$ImmutableArray* $tmp2137 = (($fn2136) self->$class->vtable[6])(self, newIfTrue2114, ifTrue2103);
                        $tmp2135 = $tmp2137;
                        org$pandalanguage$pandac$IRNode* $tmp2140 = (($fn2139) self->$class->vtable[5])(self, newIfFalse2118, ifFalse2105);
                        $tmp2138 = $tmp2140;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q($tmp2130, $tmp2131, position2099, $tmp2132, $tmp2135, $tmp2138);
                        $tmp2129 = $tmp2130;
                        $tmp2128 = $tmp2129;
                        $returnValue1575 = $tmp2128;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2128));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2129));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2138));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2135));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2132));
                        $tmp2109 = 0;
                        goto $l2107;
                        $l2141:;
                        $tmp1581 = 13;
                        goto $l1579;
                        $l2142:;
                        $tmp1568 = 14;
                        goto $l1566;
                        $l2143:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2109 = -1;
                goto $l2107;
                $l2107:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfFalse2118));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfTrue2114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest2110));
                newTest2110 = NULL;
                newIfTrue2114 = NULL;
                newIfFalse2118 = NULL;
                switch ($tmp2109) {
                    case 0: goto $l2141;
                    case -1: goto $l2145;
                }
                $l2145:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2146, 21);
            panda$core$Bit $tmp2147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2146);
            if ($tmp2147.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2149 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position2148 = *$tmp2149;
                org$pandalanguage$pandac$IRNode** $tmp2151 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 16));
                value2150 = *$tmp2151;
                int $tmp2154;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2158 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2150, p_f);
                    $tmp2157 = $tmp2158;
                    $tmp2156 = $tmp2157;
                    newValue2155 = $tmp2156;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2156));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2157));
                    if (((panda$core$Bit) { newValue2155 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2161 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2162, 21);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode($tmp2161, $tmp2162, position2148, newValue2155);
                        $tmp2160 = $tmp2161;
                        $tmp2159 = $tmp2160;
                        $returnValue1575 = $tmp2159;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2159));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2160));
                        $tmp2154 = 0;
                        goto $l2152;
                        $l2163:;
                        $tmp1581 = 14;
                        goto $l1579;
                        $l2164:;
                        $tmp1568 = 15;
                        goto $l1566;
                        $l2165:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2154 = -1;
                goto $l2152;
                $l2152:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2155));
                newValue2155 = NULL;
                switch ($tmp2154) {
                    case -1: goto $l2167;
                    case 0: goto $l2163;
                }
                $l2167:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2168, 22);
            panda$core$Bit $tmp2169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2168);
            if ($tmp2169.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position2170 = *$tmp2171;
                org$pandalanguage$pandac$IRNode** $tmp2173 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 16));
                value2172 = *$tmp2173;
                int $tmp2176;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2180 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2172, p_f);
                    $tmp2179 = $tmp2180;
                    $tmp2178 = $tmp2179;
                    newValue2177 = $tmp2178;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2178));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2179));
                    if (((panda$core$Bit) { newValue2177 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2183 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2184, 22);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode($tmp2183, $tmp2184, position2170, newValue2177);
                        $tmp2182 = $tmp2183;
                        $tmp2181 = $tmp2182;
                        $returnValue1575 = $tmp2181;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2181));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2182));
                        $tmp2176 = 0;
                        goto $l2174;
                        $l2185:;
                        $tmp1581 = 15;
                        goto $l1579;
                        $l2186:;
                        $tmp1568 = 16;
                        goto $l1566;
                        $l2187:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2176 = -1;
                goto $l2174;
                $l2174:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2177));
                newValue2177 = NULL;
                switch ($tmp2176) {
                    case 0: goto $l2185;
                    case -1: goto $l2189;
                }
                $l2189:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2190, 23);
            panda$core$Bit $tmp2191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2190);
            if ($tmp2191.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2193 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position2192 = *$tmp2193;
                panda$core$String** $tmp2195 = ((panda$core$String**) ((char*) $match$506_91582->$data + 16));
                label2194 = *$tmp2195;
                panda$collections$ImmutableArray** $tmp2197 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91582->$data + 24));
                statements2196 = *$tmp2197;
                int $tmp2200;
                {
                    panda$collections$ImmutableArray* $tmp2204 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2196, p_f);
                    $tmp2203 = $tmp2204;
                    $tmp2202 = $tmp2203;
                    newStatements2201 = $tmp2202;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2202));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2203));
                    if (((panda$core$Bit) { newStatements2201 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2207 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2208, 23);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2207, $tmp2208, position2192, label2194, newStatements2201);
                        $tmp2206 = $tmp2207;
                        $tmp2205 = $tmp2206;
                        $returnValue1575 = $tmp2205;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2205));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2206));
                        $tmp2200 = 0;
                        goto $l2198;
                        $l2209:;
                        $tmp1581 = 16;
                        goto $l1579;
                        $l2210:;
                        $tmp1568 = 17;
                        goto $l1566;
                        $l2211:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2200 = -1;
                goto $l2198;
                $l2198:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2201));
                newStatements2201 = NULL;
                switch ($tmp2200) {
                    case -1: goto $l2213;
                    case 0: goto $l2209;
                }
                $l2213:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2214, 24);
            panda$core$Bit $tmp2215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2214);
            if ($tmp2215.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2217 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position2216 = *$tmp2217;
                org$pandalanguage$pandac$IRNode** $tmp2219 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 16));
                value2218 = *$tmp2219;
                panda$collections$ImmutableArray** $tmp2221 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91582->$data + 24));
                whens2220 = *$tmp2221;
                panda$collections$ImmutableArray** $tmp2223 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91582->$data + 32));
                other2222 = *$tmp2223;
                int $tmp2226;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2230 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2218, p_f);
                    $tmp2229 = $tmp2230;
                    $tmp2228 = $tmp2229;
                    newValue2227 = $tmp2228;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2228));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2229));
                    panda$collections$ImmutableArray* $tmp2234 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(whens2220, p_f);
                    $tmp2233 = $tmp2234;
                    $tmp2232 = $tmp2233;
                    newWhens2231 = $tmp2232;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2232));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2233));
                    panda$collections$ImmutableArray* $tmp2238 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(other2222, p_f);
                    $tmp2237 = $tmp2238;
                    $tmp2236 = $tmp2237;
                    newOther2235 = $tmp2236;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2236));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2237));
                    bool $tmp2240 = ((panda$core$Bit) { newValue2227 != NULL }).value;
                    if ($tmp2240) goto $l2241;
                    $tmp2240 = ((panda$core$Bit) { newWhens2231 != NULL }).value;
                    $l2241:;
                    panda$core$Bit $tmp2242 = { $tmp2240 };
                    bool $tmp2239 = $tmp2242.value;
                    if ($tmp2239) goto $l2243;
                    $tmp2239 = ((panda$core$Bit) { newOther2235 != NULL }).value;
                    $l2243:;
                    panda$core$Bit $tmp2244 = { $tmp2239 };
                    if ($tmp2244.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2247 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2248, 24);
                        org$pandalanguage$pandac$IRNode* $tmp2251 = (($fn2250) self->$class->vtable[5])(self, newValue2227, value2218);
                        $tmp2249 = $tmp2251;
                        panda$collections$ImmutableArray* $tmp2254 = (($fn2253) self->$class->vtable[6])(self, newWhens2231, whens2220);
                        $tmp2252 = $tmp2254;
                        panda$collections$ImmutableArray* $tmp2257 = (($fn2256) self->$class->vtable[6])(self, newOther2235, other2222);
                        $tmp2255 = $tmp2257;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2247, $tmp2248, position2216, $tmp2249, $tmp2252, $tmp2255);
                        $tmp2246 = $tmp2247;
                        $tmp2245 = $tmp2246;
                        $returnValue1575 = $tmp2245;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2245));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2246));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2255));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2252));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2249));
                        $tmp2226 = 0;
                        goto $l2224;
                        $l2258:;
                        $tmp1581 = 17;
                        goto $l1579;
                        $l2259:;
                        $tmp1568 = 18;
                        goto $l1566;
                        $l2260:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2226 = -1;
                goto $l2224;
                $l2224:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newOther2235));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newWhens2231));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2227));
                newValue2227 = NULL;
                newWhens2231 = NULL;
                newOther2235 = NULL;
                switch ($tmp2226) {
                    case 0: goto $l2258;
                    case -1: goto $l2262;
                }
                $l2262:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2263, 25);
            panda$core$Bit $tmp2264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2263);
            if ($tmp2264.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2266 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position2265 = *$tmp2266;
                org$pandalanguage$pandac$Type** $tmp2268 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91582->$data + 16));
                type2267 = *$tmp2268;
                org$pandalanguage$pandac$IRNode** $tmp2270 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 24));
                target2269 = *$tmp2270;
                org$pandalanguage$pandac$MethodRef** $tmp2272 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$506_91582->$data + 32));
                m2271 = *$tmp2272;
                int $tmp2275;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2279 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(target2269, p_f);
                    $tmp2278 = $tmp2279;
                    $tmp2277 = $tmp2278;
                    newTarget2276 = $tmp2277;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2277));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2278));
                    if (((panda$core$Bit) { newTarget2276 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2282 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2283, 25);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef($tmp2282, $tmp2283, position2265, type2267, newTarget2276, m2271);
                        $tmp2281 = $tmp2282;
                        $tmp2280 = $tmp2281;
                        $returnValue1575 = $tmp2280;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2280));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2281));
                        $tmp2275 = 0;
                        goto $l2273;
                        $l2284:;
                        $tmp1581 = 18;
                        goto $l1579;
                        $l2285:;
                        $tmp1568 = 19;
                        goto $l1566;
                        $l2286:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2275 = -1;
                goto $l2273;
                $l2273:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTarget2276));
                newTarget2276 = NULL;
                switch ($tmp2275) {
                    case 0: goto $l2284;
                    case -1: goto $l2288;
                }
                $l2288:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2289, 28);
            panda$core$Bit $tmp2290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2289);
            if ($tmp2290.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2292 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position2291 = *$tmp2292;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2294 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$506_91582->$data + 16));
                op2293 = *$tmp2294;
                org$pandalanguage$pandac$IRNode** $tmp2296 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 24));
                base2295 = *$tmp2296;
                int $tmp2299;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2303 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base2295, p_f);
                    $tmp2302 = $tmp2303;
                    $tmp2301 = $tmp2302;
                    newBase2300 = $tmp2301;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2301));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2302));
                    if (((panda$core$Bit) { newBase2300 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2306 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2307, 28);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp2306, $tmp2307, position2291, op2293, newBase2300);
                        $tmp2305 = $tmp2306;
                        $tmp2304 = $tmp2305;
                        $returnValue1575 = $tmp2304;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2304));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2305));
                        $tmp2299 = 0;
                        goto $l2297;
                        $l2308:;
                        $tmp1581 = 19;
                        goto $l1579;
                        $l2309:;
                        $tmp1568 = 20;
                        goto $l1566;
                        $l2310:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2299 = -1;
                goto $l2297;
                $l2297:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase2300));
                newBase2300 = NULL;
                switch ($tmp2299) {
                    case 0: goto $l2308;
                    case -1: goto $l2312;
                }
                $l2312:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2313, 29);
            panda$core$Bit $tmp2314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2313);
            if ($tmp2314.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2316 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position2315 = *$tmp2316;
                panda$core$String** $tmp2318 = ((panda$core$String**) ((char*) $match$506_91582->$data + 16));
                label2317 = *$tmp2318;
                org$pandalanguage$pandac$IRNode** $tmp2320 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 24));
                target2319 = *$tmp2320;
                org$pandalanguage$pandac$IRNode** $tmp2322 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 32));
                list2321 = *$tmp2322;
                panda$collections$ImmutableArray** $tmp2324 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91582->$data + 40));
                statements2323 = *$tmp2324;
                int $tmp2327;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2331 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(list2321, p_f);
                    $tmp2330 = $tmp2331;
                    $tmp2329 = $tmp2330;
                    newList2328 = $tmp2329;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2329));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2330));
                    panda$collections$ImmutableArray* $tmp2335 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2323, p_f);
                    $tmp2334 = $tmp2335;
                    $tmp2333 = $tmp2334;
                    newStatements2332 = $tmp2333;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2333));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2334));
                    bool $tmp2336 = ((panda$core$Bit) { newList2328 != NULL }).value;
                    if ($tmp2336) goto $l2337;
                    $tmp2336 = ((panda$core$Bit) { newStatements2332 != NULL }).value;
                    $l2337:;
                    panda$core$Bit $tmp2338 = { $tmp2336 };
                    if ($tmp2338.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2341 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2342, 29);
                        org$pandalanguage$pandac$IRNode* $tmp2345 = (($fn2344) self->$class->vtable[5])(self, newList2328, list2321);
                        $tmp2343 = $tmp2345;
                        panda$collections$ImmutableArray* $tmp2348 = (($fn2347) self->$class->vtable[6])(self, newStatements2332, statements2323);
                        $tmp2346 = $tmp2348;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2341, $tmp2342, position2315, label2317, target2319, $tmp2343, $tmp2346);
                        $tmp2340 = $tmp2341;
                        $tmp2339 = $tmp2340;
                        $returnValue1575 = $tmp2339;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2339));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2340));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2346));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2343));
                        $tmp2327 = 0;
                        goto $l2325;
                        $l2349:;
                        $tmp1581 = 20;
                        goto $l1579;
                        $l2350:;
                        $tmp1568 = 21;
                        goto $l1566;
                        $l2351:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2327 = -1;
                goto $l2325;
                $l2325:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2332));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newList2328));
                newList2328 = NULL;
                newStatements2332 = NULL;
                switch ($tmp2327) {
                    case -1: goto $l2353;
                    case 0: goto $l2349;
                }
                $l2353:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2354, 31);
            panda$core$Bit $tmp2355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2354);
            if ($tmp2355.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2357 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position2356 = *$tmp2357;
                org$pandalanguage$pandac$IRNode** $tmp2359 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 16));
                value2358 = *$tmp2359;
                int $tmp2362;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2366 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2358, p_f);
                    $tmp2365 = $tmp2366;
                    $tmp2364 = $tmp2365;
                    newValue2363 = $tmp2364;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2364));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2365));
                    if (((panda$core$Bit) { newValue2363 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2369 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2370, 31);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q($tmp2369, $tmp2370, position2356, newValue2363);
                        $tmp2368 = $tmp2369;
                        $tmp2367 = $tmp2368;
                        $returnValue1575 = $tmp2367;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2367));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2368));
                        $tmp2362 = 0;
                        goto $l2360;
                        $l2371:;
                        $tmp1581 = 21;
                        goto $l1579;
                        $l2372:;
                        $tmp1568 = 22;
                        goto $l1566;
                        $l2373:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2362 = -1;
                goto $l2360;
                $l2360:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2363));
                newValue2363 = NULL;
                switch ($tmp2362) {
                    case -1: goto $l2375;
                    case 0: goto $l2371;
                }
                $l2375:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2376, 33);
            panda$core$Bit $tmp2377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2376);
            if ($tmp2377.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2379 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 0));
                base2378 = *$tmp2379;
                panda$core$Int64* $tmp2381 = ((panda$core$Int64*) ((char*) $match$506_91582->$data + 8));
                id2380 = *$tmp2381;
                int $tmp2384;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2388 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base2378, p_f);
                    $tmp2387 = $tmp2388;
                    $tmp2386 = $tmp2387;
                    newBase2385 = $tmp2386;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2386));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2387));
                    if (((panda$core$Bit) { newBase2385 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2391 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2392, 33);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64($tmp2391, $tmp2392, newBase2385, id2380);
                        $tmp2390 = $tmp2391;
                        $tmp2389 = $tmp2390;
                        $returnValue1575 = $tmp2389;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2389));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2390));
                        $tmp2384 = 0;
                        goto $l2382;
                        $l2393:;
                        $tmp1581 = 22;
                        goto $l1579;
                        $l2394:;
                        $tmp1568 = 23;
                        goto $l1566;
                        $l2395:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2384 = -1;
                goto $l2382;
                $l2382:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase2385));
                newBase2385 = NULL;
                switch ($tmp2384) {
                    case 0: goto $l2393;
                    case -1: goto $l2397;
                }
                $l2397:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2398, 38);
            panda$core$Bit $tmp2399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2398);
            if ($tmp2399.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2401 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position2400 = *$tmp2401;
                org$pandalanguage$pandac$IRNode** $tmp2403 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 16));
                test2402 = *$tmp2403;
                org$pandalanguage$pandac$IRNode** $tmp2405 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 24));
                ifTrue2404 = *$tmp2405;
                org$pandalanguage$pandac$IRNode** $tmp2407 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 32));
                ifFalse2406 = *$tmp2407;
                int $tmp2410;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2414 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test2402, p_f);
                    $tmp2413 = $tmp2414;
                    $tmp2412 = $tmp2413;
                    newTest2411 = $tmp2412;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2412));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2413));
                    org$pandalanguage$pandac$IRNode* $tmp2418 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(ifTrue2404, p_f);
                    $tmp2417 = $tmp2418;
                    $tmp2416 = $tmp2417;
                    newIfTrue2415 = $tmp2416;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2416));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2417));
                    org$pandalanguage$pandac$IRNode* $tmp2422 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(ifFalse2406, p_f);
                    $tmp2421 = $tmp2422;
                    $tmp2420 = $tmp2421;
                    newIfFalse2419 = $tmp2420;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2420));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2421));
                    bool $tmp2424 = ((panda$core$Bit) { newTest2411 != NULL }).value;
                    if ($tmp2424) goto $l2425;
                    $tmp2424 = ((panda$core$Bit) { newIfTrue2415 != NULL }).value;
                    $l2425:;
                    panda$core$Bit $tmp2426 = { $tmp2424 };
                    bool $tmp2423 = $tmp2426.value;
                    if ($tmp2423) goto $l2427;
                    $tmp2423 = ((panda$core$Bit) { newIfFalse2419 != NULL }).value;
                    $l2427:;
                    panda$core$Bit $tmp2428 = { $tmp2423 };
                    if ($tmp2428.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2431 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2432, 38);
                        org$pandalanguage$pandac$IRNode* $tmp2435 = (($fn2434) self->$class->vtable[5])(self, newTest2411, test2402);
                        $tmp2433 = $tmp2435;
                        org$pandalanguage$pandac$IRNode* $tmp2438 = (($fn2437) self->$class->vtable[5])(self, newIfTrue2415, ifTrue2404);
                        $tmp2436 = $tmp2438;
                        org$pandalanguage$pandac$IRNode* $tmp2441 = (($fn2440) self->$class->vtable[5])(self, newIfFalse2419, ifFalse2406);
                        $tmp2439 = $tmp2441;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode($tmp2431, $tmp2432, position2400, $tmp2433, $tmp2436, $tmp2439);
                        $tmp2430 = $tmp2431;
                        $tmp2429 = $tmp2430;
                        $returnValue1575 = $tmp2429;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2429));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2430));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2439));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2436));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2433));
                        $tmp2410 = 0;
                        goto $l2408;
                        $l2442:;
                        $tmp1581 = 23;
                        goto $l1579;
                        $l2443:;
                        $tmp1568 = 24;
                        goto $l1566;
                        $l2444:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2410 = -1;
                goto $l2408;
                $l2408:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfFalse2419));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfTrue2415));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest2411));
                newTest2411 = NULL;
                newIfTrue2415 = NULL;
                newIfFalse2419 = NULL;
                switch ($tmp2410) {
                    case -1: goto $l2446;
                    case 0: goto $l2442;
                }
                $l2446:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2447, 46);
            panda$core$Bit $tmp2448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2447);
            if ($tmp2448.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2450 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position2449 = *$tmp2450;
                org$pandalanguage$pandac$Variable$Kind* $tmp2452 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$506_91582->$data + 16));
                kind2451 = *$tmp2452;
                panda$collections$ImmutableArray** $tmp2454 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91582->$data + 24));
                decls2453 = *$tmp2454;
                int $tmp2457;
                {
                    panda$collections$ImmutableArray* $tmp2461 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(decls2453, p_f);
                    $tmp2460 = $tmp2461;
                    $tmp2459 = $tmp2460;
                    newDecls2458 = $tmp2459;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2459));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2460));
                    if (((panda$core$Bit) { newDecls2458 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2464 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2465, 46);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2464, $tmp2465, position2449, kind2451, newDecls2458);
                        $tmp2463 = $tmp2464;
                        $tmp2462 = $tmp2463;
                        $returnValue1575 = $tmp2462;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2462));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2463));
                        $tmp2457 = 0;
                        goto $l2455;
                        $l2466:;
                        $tmp1581 = 24;
                        goto $l1579;
                        $l2467:;
                        $tmp1568 = 25;
                        goto $l1566;
                        $l2468:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2457 = -1;
                goto $l2455;
                $l2455:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newDecls2458));
                newDecls2458 = NULL;
                switch ($tmp2457) {
                    case -1: goto $l2470;
                    case 0: goto $l2466;
                }
                $l2470:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2471, 49);
            panda$core$Bit $tmp2472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2471);
            if ($tmp2472.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2474 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position2473 = *$tmp2474;
                panda$collections$ImmutableArray** $tmp2476 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91582->$data + 16));
                tests2475 = *$tmp2476;
                panda$collections$ImmutableArray** $tmp2478 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91582->$data + 24));
                statements2477 = *$tmp2478;
                int $tmp2481;
                {
                    panda$collections$ImmutableArray* $tmp2485 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(tests2475, p_f);
                    $tmp2484 = $tmp2485;
                    $tmp2483 = $tmp2484;
                    newTests2482 = $tmp2483;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2483));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2484));
                    panda$collections$ImmutableArray* $tmp2489 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2477, p_f);
                    $tmp2488 = $tmp2489;
                    $tmp2487 = $tmp2488;
                    newStatements2486 = $tmp2487;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2487));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2488));
                    bool $tmp2490 = ((panda$core$Bit) { newTests2482 != NULL }).value;
                    if ($tmp2490) goto $l2491;
                    $tmp2490 = ((panda$core$Bit) { newStatements2486 != NULL }).value;
                    $l2491:;
                    panda$core$Bit $tmp2492 = { $tmp2490 };
                    if ($tmp2492.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2495 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2496, 49);
                        panda$collections$ImmutableArray* $tmp2499 = (($fn2498) self->$class->vtable[6])(self, newTests2482, tests2475);
                        $tmp2497 = $tmp2499;
                        panda$collections$ImmutableArray* $tmp2502 = (($fn2501) self->$class->vtable[6])(self, newStatements2486, statements2477);
                        $tmp2500 = $tmp2502;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2495, $tmp2496, position2473, $tmp2497, $tmp2500);
                        $tmp2494 = $tmp2495;
                        $tmp2493 = $tmp2494;
                        $returnValue1575 = $tmp2493;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2493));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2494));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2500));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
                        $tmp2481 = 0;
                        goto $l2479;
                        $l2503:;
                        $tmp1581 = 25;
                        goto $l1579;
                        $l2504:;
                        $tmp1568 = 26;
                        goto $l1566;
                        $l2505:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2481 = -1;
                goto $l2479;
                $l2479:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2486));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTests2482));
                newTests2482 = NULL;
                newStatements2486 = NULL;
                switch ($tmp2481) {
                    case -1: goto $l2507;
                    case 0: goto $l2503;
                }
                $l2507:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2508, 50);
            panda$core$Bit $tmp2509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91582->$rawValue, $tmp2508);
            if ($tmp2509.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2511 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91582->$data + 0));
                position2510 = *$tmp2511;
                panda$core$String** $tmp2513 = ((panda$core$String**) ((char*) $match$506_91582->$data + 16));
                label2512 = *$tmp2513;
                org$pandalanguage$pandac$IRNode** $tmp2515 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91582->$data + 24));
                test2514 = *$tmp2515;
                panda$collections$ImmutableArray** $tmp2517 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91582->$data + 32));
                statements2516 = *$tmp2517;
                int $tmp2520;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2524 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test2514, p_f);
                    $tmp2523 = $tmp2524;
                    $tmp2522 = $tmp2523;
                    newTest2521 = $tmp2522;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2522));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2523));
                    panda$collections$ImmutableArray* $tmp2528 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2516, p_f);
                    $tmp2527 = $tmp2528;
                    $tmp2526 = $tmp2527;
                    newStatements2525 = $tmp2526;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2526));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2527));
                    bool $tmp2529 = ((panda$core$Bit) { newTest2521 != NULL }).value;
                    if ($tmp2529) goto $l2530;
                    $tmp2529 = ((panda$core$Bit) { newStatements2525 != NULL }).value;
                    $l2530:;
                    panda$core$Bit $tmp2531 = { $tmp2529 };
                    if ($tmp2531.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2534 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2535, 50);
                        org$pandalanguage$pandac$IRNode* $tmp2538 = (($fn2537) self->$class->vtable[5])(self, newTest2521, test2514);
                        $tmp2536 = $tmp2538;
                        panda$collections$ImmutableArray* $tmp2541 = (($fn2540) self->$class->vtable[6])(self, newStatements2525, statements2516);
                        $tmp2539 = $tmp2541;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2534, $tmp2535, position2510, label2512, $tmp2536, $tmp2539);
                        $tmp2533 = $tmp2534;
                        $tmp2532 = $tmp2533;
                        $returnValue1575 = $tmp2532;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2532));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2533));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2539));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2536));
                        $tmp2520 = 0;
                        goto $l2518;
                        $l2542:;
                        $tmp1581 = 26;
                        goto $l1579;
                        $l2543:;
                        $tmp1568 = 27;
                        goto $l1566;
                        $l2544:;
                        return $returnValue1575;
                    }
                    }
                }
                $tmp2520 = -1;
                goto $l2518;
                $l2518:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2525));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest2521));
                newTest2521 = NULL;
                newStatements2525 = NULL;
                switch ($tmp2520) {
                    case 0: goto $l2542;
                    case -1: goto $l2546;
                }
                $l2546:;
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp2547, false);
                if ($tmp2547.value) goto $l2548; else goto $l2549;
                $l2549:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2550, (panda$core$Int64) { 675 });
                abort();
                $l2548:;
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp1581 = -1;
        goto $l1579;
        $l1579:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1583));
        switch ($tmp1581) {
            case 23: goto $l2443;
            case 21: goto $l2372;
            case 18: goto $l2285;
            case 7: goto $l1936;
            case 5: goto $l1886;
            case 2: goto $l1797;
            case 4: goto $l1860;
            case 13: goto $l2142;
            case 14: goto $l2164;
            case 10: goto $l2032;
            case 25: goto $l2504;
            case 11: goto $l2067;
            case 12: goto $l2093;
            case 15: goto $l2186;
            case 0: goto $l1734;
            case 17: goto $l2259;
            case 24: goto $l2467;
            case 6: goto $l1912;
            case 8: goto $l1958;
            case 20: goto $l2350;
            case 1: goto $l1775;
            case 19: goto $l2309;
            case 3: goto $l1831;
            case -1: goto $l2551;
            case 22: goto $l2394;
            case 16: goto $l2210;
            case 9: goto $l1997;
            case 26: goto $l2543;
        }
        $l2551:;
        $tmp2552 = NULL;
        $returnValue1575 = $tmp2552;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2552));
        $tmp1568 = 28;
        goto $l1566;
        $l2553:;
        return $returnValue1575;
    }
    $l1566:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) transformed1569));
    transformed1569 = NULL;
    switch ($tmp1568) {
        case 22: goto $l2373;
        case 8: goto $l1937;
        case 24: goto $l2444;
        case 21: goto $l2351;
        case 19: goto $l2286;
        case 3: goto $l1798;
        case 6: goto $l1887;
        case 14: goto $l2143;
        case 15: goto $l2165;
        case 12: goto $l2068;
        case 17: goto $l2211;
        case 16: goto $l2187;
        case 13: goto $l2094;
        case 28: goto $l2553;
        case 26: goto $l2505;
        case 0: goto $l1577;
        case 11: goto $l2033;
        case 7: goto $l1913;
        case 18: goto $l2260;
        case 25: goto $l2468;
        case 9: goto $l1959;
        case 20: goto $l2310;
        case 2: goto $l1776;
        case 1: goto $l1735;
        case 4: goto $l1832;
        case 5: goto $l1861;
        case 23: goto $l2395;
        case 27: goto $l2544;
        case 10: goto $l1998;
    }
    $l2555:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$682_92559 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2560;
    panda$core$Int64 $tmp2561;
    org$pandalanguage$pandac$IRNode* test2563 = NULL;
    org$pandalanguage$pandac$IRNode* msg2565 = NULL;
    panda$core$String* $returnValue2567;
    panda$core$String* $tmp2568;
    panda$core$String* $tmp2569;
    panda$core$String* $tmp2570;
    panda$core$String* $tmp2571;
    panda$core$String* $tmp2572;
    panda$core$String* $tmp2582;
    panda$core$String* $tmp2583;
    panda$core$String* $tmp2584;
    panda$core$Int64 $tmp2591;
    panda$core$String* $tmp2593;
    panda$core$Int64 $tmp2597;
    org$pandalanguage$pandac$IRNode* left2599 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op2601;
    org$pandalanguage$pandac$IRNode* right2603 = NULL;
    panda$core$String* $tmp2605;
    panda$core$String* $tmp2606;
    panda$core$String* $tmp2607;
    panda$core$String* $tmp2608;
    panda$core$String* $tmp2609;
    panda$core$String* $tmp2610;
    panda$core$String* $tmp2611;
    panda$core$Object* $tmp2616;
    panda$core$Int64 $tmp2626;
    panda$core$Bit bit2628;
    panda$core$String* $tmp2630;
    panda$core$String* $tmp2631;
    panda$core$Int64 $tmp2635;
    panda$collections$ImmutableArray* statements2637 = NULL;
    panda$core$MutableString* result2642 = NULL;
    panda$core$MutableString* $tmp2643;
    panda$core$MutableString* $tmp2644;
    panda$collections$Iterator* Iter$696$172650 = NULL;
    panda$collections$Iterator* $tmp2651;
    panda$collections$Iterator* $tmp2652;
    org$pandalanguage$pandac$IRNode* s2668 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2669;
    panda$core$Object* $tmp2670;
    panda$core$String* $tmp2675;
    panda$core$Char8 $tmp2680;
    panda$core$UInt8 $tmp2681;
    panda$core$String* $tmp2682;
    panda$core$String* $tmp2683;
    panda$core$Int64 $tmp2689;
    panda$collections$ImmutableArray* statements2691 = NULL;
    panda$collections$ImmutableArray* finally2693 = NULL;
    panda$core$MutableString* result2698 = NULL;
    panda$core$MutableString* $tmp2699;
    panda$core$MutableString* $tmp2700;
    panda$collections$Iterator* Iter$703$172706 = NULL;
    panda$collections$Iterator* $tmp2707;
    panda$collections$Iterator* $tmp2708;
    org$pandalanguage$pandac$IRNode* s2724 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2725;
    panda$core$Object* $tmp2726;
    panda$core$String* $tmp2731;
    panda$collections$Iterator* Iter$707$172740 = NULL;
    panda$collections$Iterator* $tmp2741;
    panda$collections$Iterator* $tmp2742;
    org$pandalanguage$pandac$IRNode* s2758 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2759;
    panda$core$Object* $tmp2760;
    panda$core$String* $tmp2765;
    panda$core$Char8 $tmp2770;
    panda$core$UInt8 $tmp2771;
    panda$core$String* $tmp2772;
    panda$core$String* $tmp2773;
    panda$core$Int64 $tmp2779;
    panda$core$String* label2781 = NULL;
    panda$core$String* $tmp2783;
    panda$core$String* $tmp2784;
    panda$core$String* $tmp2785;
    panda$core$String* $tmp2792;
    panda$core$Int64 $tmp2796;
    org$pandalanguage$pandac$MethodRef* m2798 = NULL;
    panda$collections$ImmutableArray* args2800 = NULL;
    panda$core$String* $tmp2802;
    panda$core$String* $tmp2803;
    panda$core$String* $tmp2804;
    panda$core$String* $tmp2805;
    panda$core$String* $tmp2806;
    panda$core$String* $tmp2810;
    panda$core$Int64 $tmp2820;
    org$pandalanguage$pandac$IRNode* value2822 = NULL;
    org$pandalanguage$pandac$Type* type2824 = NULL;
    panda$core$String* $tmp2826;
    panda$core$String* $tmp2827;
    panda$core$String* $tmp2828;
    panda$core$String* $tmp2829;
    panda$core$String* $tmp2830;
    panda$core$Int64 $tmp2840;
    org$pandalanguage$pandac$ChoiceEntry* ce2842 = NULL;
    panda$core$String* $tmp2844;
    panda$core$String* $tmp2845;
    panda$core$Int64 $tmp2849;
    org$pandalanguage$pandac$IRNode* base2851 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce2853 = NULL;
    panda$core$Int64 field2855;
    panda$core$String* $tmp2857;
    panda$core$String* $tmp2858;
    panda$core$String* $tmp2859;
    panda$core$String* $tmp2860;
    panda$core$String* $tmp2861;
    panda$core$String* $tmp2862;
    panda$core$String* $tmp2863;
    panda$core$Object* $tmp2871;
    panda$core$Int64 $tmp2878;
    org$pandalanguage$pandac$Type* type2880 = NULL;
    org$pandalanguage$pandac$IRNode* call2882 = NULL;
    org$pandalanguage$pandac$IRNode* $match$726_172887 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2888;
    panda$core$Int64 $tmp2889;
    panda$collections$ImmutableArray* args2891 = NULL;
    panda$core$String* $tmp2893;
    panda$core$String* $tmp2894;
    panda$core$String* $tmp2895;
    panda$core$String* $tmp2896;
    panda$core$String* $tmp2897;
    panda$core$String* $tmp2901;
    panda$core$Bit $tmp2912;
    panda$core$Int64 $tmp2917;
    org$pandalanguage$pandac$Type* Type2919 = NULL;
    panda$core$String* $tmp2921;
    panda$core$Int64 $tmp2925;
    panda$core$String* label2927 = NULL;
    panda$core$String* $tmp2929;
    panda$core$String* $tmp2930;
    panda$core$String* $tmp2931;
    panda$core$String* $tmp2938;
    panda$core$Int64 $tmp2942;
    org$pandalanguage$pandac$IRNode* target2944 = NULL;
    org$pandalanguage$pandac$IRNode* value2946 = NULL;
    panda$core$String* $tmp2948;
    panda$core$String* $tmp2949;
    panda$core$String* $tmp2950;
    panda$core$String* $tmp2951;
    panda$core$String* $tmp2952;
    panda$core$String* $tmp2953;
    panda$core$String* $tmp2954;
    org$pandalanguage$pandac$Type* $tmp2959;
    panda$core$String* $tmp2970;
    panda$core$String* $tmp2971;
    panda$core$String* $tmp2972;
    panda$core$String* $tmp2973;
    panda$core$String* $tmp2974;
    org$pandalanguage$pandac$Type* $tmp2979;
    panda$core$Int64 $tmp2987;
    panda$core$String* label2989 = NULL;
    panda$collections$ImmutableArray* statements2991 = NULL;
    org$pandalanguage$pandac$IRNode* test2993 = NULL;
    panda$core$MutableString* result2998 = NULL;
    panda$core$MutableString* $tmp2999;
    panda$core$MutableString* $tmp3000;
    panda$core$String* $tmp3002;
    panda$core$String* $tmp3003;
    panda$collections$Iterator* Iter$750$173011 = NULL;
    panda$collections$Iterator* $tmp3012;
    panda$collections$Iterator* $tmp3013;
    org$pandalanguage$pandac$IRNode* s3029 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3030;
    panda$core$Object* $tmp3031;
    panda$core$String* $tmp3036;
    panda$core$String* $tmp3041;
    panda$core$String* $tmp3042;
    panda$core$String* $tmp3047;
    panda$core$String* $tmp3048;
    panda$core$Int64 $tmp3054;
    org$pandalanguage$pandac$IRNode* m3056 = NULL;
    panda$collections$ImmutableArray* args3058 = NULL;
    panda$core$String* $tmp3060;
    panda$core$String* $tmp3061;
    panda$core$String* $tmp3062;
    panda$core$String* $tmp3063;
    panda$core$String* $tmp3064;
    panda$core$String* $tmp3069;
    panda$core$Int64 $tmp3080;
    org$pandalanguage$pandac$IRNode* expr3082 = NULL;
    org$pandalanguage$pandac$IRNode* stmt3084 = NULL;
    panda$core$String* $tmp3086;
    panda$core$String* $tmp3087;
    panda$core$String* $tmp3088;
    panda$core$String* $tmp3089;
    panda$core$String* $tmp3090;
    panda$core$Int64 $tmp3100;
    org$pandalanguage$pandac$IRNode* base3102 = NULL;
    org$pandalanguage$pandac$FieldDecl* field3104 = NULL;
    panda$core$String* $tmp3106;
    panda$core$String* $tmp3107;
    panda$core$String* $tmp3108;
    panda$core$String* $tmp3109;
    panda$core$String* $tmp3110;
    panda$core$String* $tmp3120;
    panda$core$Int64 $tmp3123;
    org$pandalanguage$pandac$IRNode* test3125 = NULL;
    panda$collections$ImmutableArray* ifTrue3127 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse3129 = NULL;
    panda$core$MutableString* result3134 = NULL;
    panda$core$MutableString* $tmp3135;
    panda$core$MutableString* $tmp3136;
    panda$core$String* $tmp3138;
    panda$core$String* $tmp3139;
    panda$collections$Iterator* Iter$766$173147 = NULL;
    panda$collections$Iterator* $tmp3148;
    panda$collections$Iterator* $tmp3149;
    org$pandalanguage$pandac$IRNode* s3165 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3166;
    panda$core$Object* $tmp3167;
    panda$core$String* $tmp3172;
    panda$core$Char8 $tmp3177;
    panda$core$UInt8 $tmp3178;
    panda$core$String* $tmp3179;
    panda$core$String* $tmp3180;
    panda$core$String* $tmp3185;
    panda$core$String* $tmp3186;
    panda$core$Int64 $tmp3192;
    panda$core$UInt64 value3194;
    panda$core$String* $tmp3196;
    panda$core$String* $tmp3197;
    panda$core$Int64 $tmp3201;
    org$pandalanguage$pandac$IRNode* value3203 = NULL;
    panda$core$String* $tmp3205;
    panda$core$String* $tmp3206;
    panda$core$String* $tmp3207;
    panda$core$Int64 $tmp3214;
    org$pandalanguage$pandac$IRNode* value3216 = NULL;
    panda$core$String* $tmp3218;
    panda$core$String* $tmp3219;
    panda$core$String* $tmp3220;
    panda$core$Int64 $tmp3227;
    panda$core$String* label3229 = NULL;
    panda$collections$ImmutableArray* statements3231 = NULL;
    panda$core$MutableString* result3236 = NULL;
    panda$core$MutableString* $tmp3237;
    panda$core$MutableString* $tmp3238;
    panda$core$String* $tmp3240;
    panda$core$String* $tmp3241;
    panda$collections$Iterator* Iter$786$173249 = NULL;
    panda$collections$Iterator* $tmp3250;
    panda$collections$Iterator* $tmp3251;
    org$pandalanguage$pandac$IRNode* s3267 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3268;
    panda$core$Object* $tmp3269;
    panda$core$String* $tmp3274;
    panda$core$Char8 $tmp3279;
    panda$core$UInt8 $tmp3280;
    panda$core$String* $tmp3281;
    panda$core$String* $tmp3282;
    panda$core$Int64 $tmp3288;
    org$pandalanguage$pandac$IRNode* value3290 = NULL;
    panda$collections$ImmutableArray* whens3292 = NULL;
    panda$collections$ImmutableArray* other3294 = NULL;
    panda$core$MutableString* result3299 = NULL;
    panda$core$MutableString* $tmp3300;
    panda$core$MutableString* $tmp3301;
    panda$core$String* $tmp3303;
    panda$core$String* $tmp3304;
    panda$collections$Iterator* Iter$793$173312 = NULL;
    panda$collections$Iterator* $tmp3313;
    panda$collections$Iterator* $tmp3314;
    org$pandalanguage$pandac$IRNode* w3330 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3331;
    panda$core$Object* $tmp3332;
    panda$core$String* $tmp3337;
    panda$collections$Iterator* Iter$798$213346 = NULL;
    panda$collections$Iterator* $tmp3347;
    panda$collections$Iterator* $tmp3348;
    org$pandalanguage$pandac$IRNode* s3364 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3365;
    panda$core$Object* $tmp3366;
    panda$core$String* $tmp3371;
    panda$core$Char8 $tmp3376;
    panda$core$UInt8 $tmp3377;
    panda$core$String* $tmp3378;
    panda$core$String* $tmp3379;
    panda$core$Int64 $tmp3385;
    org$pandalanguage$pandac$IRNode* target3387 = NULL;
    org$pandalanguage$pandac$MethodRef* m3389 = NULL;
    panda$core$String* $tmp3391;
    panda$core$String* $tmp3392;
    panda$core$String* $tmp3393;
    panda$core$String* $tmp3394;
    panda$core$String* $tmp3395;
    panda$core$String* $tmp3405;
    panda$core$Int64 $tmp3408;
    panda$core$UInt64 value3410;
    panda$core$String* $tmp3412;
    panda$core$String* $tmp3413;
    panda$core$Object* $tmp3415;
    panda$core$Int64 $tmp3420;
    panda$core$String* $tmp3422;
    panda$core$Int64 $tmp3426;
    org$pandalanguage$pandac$parser$Token$Kind op3428;
    org$pandalanguage$pandac$IRNode* base3430 = NULL;
    panda$core$String* $tmp3432;
    panda$core$String* $tmp3433;
    panda$core$String* $tmp3434;
    panda$core$String* $tmp3435;
    panda$core$String* $tmp3436;
    panda$core$Int64 $tmp3445;
    panda$core$String* label3447 = NULL;
    org$pandalanguage$pandac$IRNode* target3449 = NULL;
    org$pandalanguage$pandac$IRNode* list3451 = NULL;
    panda$collections$ImmutableArray* statements3453 = NULL;
    panda$core$MutableString* result3458 = NULL;
    panda$core$MutableString* $tmp3459;
    panda$core$MutableString* $tmp3460;
    panda$core$String* $tmp3462;
    panda$core$String* $tmp3463;
    panda$core$String* $tmp3467;
    panda$core$String* $tmp3468;
    panda$core$String* $tmp3469;
    panda$core$String* $tmp3470;
    panda$collections$Iterator* Iter$821$173481 = NULL;
    panda$collections$Iterator* $tmp3482;
    panda$collections$Iterator* $tmp3483;
    org$pandalanguage$pandac$IRNode* s3499 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3500;
    panda$core$Object* $tmp3501;
    panda$core$String* $tmp3506;
    panda$core$Char8 $tmp3511;
    panda$core$UInt8 $tmp3512;
    panda$core$String* $tmp3513;
    panda$core$String* $tmp3514;
    panda$core$Int64 $tmp3520;
    panda$core$Real64 value3522;
    panda$core$String* $tmp3524;
    panda$core$String* $tmp3525;
    panda$core$Int64 $tmp3529;
    org$pandalanguage$pandac$IRNode* value3531 = NULL;
    panda$core$String* $tmp3533;
    panda$core$String* $tmp3534;
    panda$core$String* $tmp3535;
    panda$core$String* $tmp3542;
    panda$core$Int64 $tmp3546;
    org$pandalanguage$pandac$Type* type3548 = NULL;
    panda$core$Int64 id3550;
    panda$core$String* $tmp3552;
    panda$core$String* $tmp3553;
    panda$core$String* $tmp3554;
    panda$core$Object* $tmp3556;
    panda$core$Int64 $tmp3563;
    org$pandalanguage$pandac$IRNode* base3565 = NULL;
    panda$core$Int64 id3567;
    panda$core$String* $tmp3569;
    panda$core$String* $tmp3570;
    panda$core$String* $tmp3571;
    panda$core$String* $tmp3572;
    panda$core$String* $tmp3573;
    panda$core$Object* $tmp3575;
    panda$core$Int64 $tmp3585;
    panda$core$String* $tmp3587;
    panda$core$Int64 $tmp3591;
    panda$core$String* $tmp3593;
    panda$core$Int64 $tmp3597;
    panda$core$String* str3599 = NULL;
    panda$core$String* $tmp3601;
    panda$core$String* $tmp3602;
    panda$core$Int64 $tmp3607;
    panda$core$String* $tmp3609;
    panda$core$Int64 $tmp3613;
    org$pandalanguage$pandac$IRNode* test3615 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue3617 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse3619 = NULL;
    panda$core$String* $tmp3621;
    panda$core$String* $tmp3622;
    panda$core$String* $tmp3623;
    panda$core$String* $tmp3624;
    panda$core$String* $tmp3625;
    panda$core$String* $tmp3626;
    panda$core$String* $tmp3627;
    panda$core$Int64 $tmp3640;
    org$pandalanguage$pandac$Type* type3642 = NULL;
    panda$core$String* $tmp3644;
    panda$core$String* $tmp3645;
    panda$core$Int64 $tmp3649;
    panda$core$String* name3651 = NULL;
    panda$core$String* $tmp3653;
    panda$core$Int64 $tmp3656;
    org$pandalanguage$pandac$IRNode* base3658 = NULL;
    panda$collections$ImmutableArray* args3660 = NULL;
    panda$core$String* $tmp3662;
    panda$core$String* $tmp3663;
    panda$core$String* $tmp3664;
    panda$core$String* $tmp3665;
    panda$core$String* $tmp3666;
    panda$core$String* $tmp3671;
    panda$core$Int64 $tmp3681;
    panda$collections$ImmutableArray* params3683 = NULL;
    org$pandalanguage$pandac$ASTNode* body3685 = NULL;
    panda$core$String* $tmp3687;
    panda$core$String* $tmp3688;
    panda$core$String* $tmp3689;
    panda$core$String* $tmp3690;
    panda$core$String* $tmp3691;
    panda$core$String* $tmp3693;
    panda$core$Int64 $tmp3706;
    org$pandalanguage$pandac$IRNode* target3708 = NULL;
    panda$collections$ImmutableArray* methods3710 = NULL;
    panda$collections$ImmutableArray* args3712 = NULL;
    panda$core$String* $tmp3714;
    panda$core$String* $tmp3715;
    panda$core$String* $tmp3716;
    panda$core$String* $tmp3717;
    panda$core$String* $tmp3718;
    panda$core$String* $tmp3719;
    panda$core$String* $tmp3720;
    panda$core$Object* $tmp3725;
    panda$core$Int64 $tmp3726;
    panda$core$String* $tmp3731;
    panda$core$String* $tmp3741;
    panda$core$String* $tmp3742;
    panda$core$String* $tmp3743;
    panda$core$String* $tmp3744;
    panda$core$String* $tmp3745;
    panda$core$Object* $tmp3747;
    panda$core$Int64 $tmp3748;
    panda$core$String* $tmp3753;
    panda$core$Int64 $tmp3763;
    org$pandalanguage$pandac$IRNode* target3765 = NULL;
    panda$collections$ImmutableArray* methods3767 = NULL;
    panda$core$String* $tmp3769;
    panda$core$String* $tmp3770;
    panda$core$String* $tmp3771;
    panda$core$String* $tmp3772;
    panda$core$String* $tmp3773;
    panda$core$Object* $tmp3778;
    panda$core$Int64 $tmp3779;
    panda$core$String* $tmp3786;
    panda$core$String* $tmp3787;
    panda$core$String* $tmp3788;
    panda$core$Object* $tmp3789;
    panda$core$Int64 $tmp3790;
    panda$core$Int64 $tmp3797;
    org$pandalanguage$pandac$IRNode* start3799 = NULL;
    org$pandalanguage$pandac$IRNode* end3801 = NULL;
    panda$core$Bit inclusive3803;
    org$pandalanguage$pandac$IRNode* step3805 = NULL;
    panda$core$MutableString* result3810 = NULL;
    panda$core$MutableString* $tmp3811;
    panda$core$MutableString* $tmp3812;
    panda$core$String* $tmp3816;
    panda$core$String* $tmp3817;
    panda$core$String* $tmp3822;
    panda$core$String* $tmp3823;
    panda$core$Int64 $tmp3829;
    org$pandalanguage$pandac$Variable$Kind kind3831;
    panda$collections$ImmutableArray* decls3833 = NULL;
    panda$core$MutableString* result3838 = NULL;
    panda$core$MutableString* $tmp3839;
    panda$core$MutableString* $tmp3840;
    org$pandalanguage$pandac$Variable$Kind $match$889_173842;
    panda$core$Int64 $tmp3843;
    panda$core$Int64 $tmp3846;
    panda$core$Int64 $tmp3849;
    panda$core$Int64 $tmp3852;
    panda$core$String* $tmp3855;
    panda$core$String* $tmp3860;
    panda$core$String* $tmp3861;
    panda$core$Int64 $tmp3867;
    panda$core$String* name3869 = NULL;
    panda$core$String* $tmp3871;
    panda$core$Int64 $tmp3874;
    org$pandalanguage$pandac$Variable* variable3876 = NULL;
    panda$core$String* $tmp3878;
    panda$core$String* $tmp3879;
    panda$core$Int64 $tmp3884;
    panda$collections$ImmutableArray* tests3886 = NULL;
    panda$collections$ImmutableArray* statements3888 = NULL;
    panda$core$String* $tmp3890;
    panda$core$String* $tmp3891;
    panda$core$String* $tmp3892;
    panda$core$String* $tmp3893;
    panda$core$String* $tmp3894;
    panda$core$String* $tmp3896;
    panda$core$String* $tmp3904;
    panda$core$Int64 $tmp3915;
    panda$core$String* label3917 = NULL;
    org$pandalanguage$pandac$IRNode* test3919 = NULL;
    panda$collections$ImmutableArray* statements3921 = NULL;
    panda$core$MutableString* result3926 = NULL;
    panda$core$MutableString* $tmp3927;
    panda$core$MutableString* $tmp3928;
    panda$core$String* $tmp3930;
    panda$core$String* $tmp3931;
    panda$core$String* $tmp3935;
    panda$core$String* $tmp3936;
    panda$collections$Iterator* Iter$909$173944 = NULL;
    panda$collections$Iterator* $tmp3945;
    panda$collections$Iterator* $tmp3946;
    org$pandalanguage$pandac$IRNode* s3962 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3963;
    panda$core$Object* $tmp3964;
    panda$core$String* $tmp3969;
    panda$core$Char8 $tmp3974;
    panda$core$UInt8 $tmp3975;
    panda$core$String* $tmp3976;
    panda$core$String* $tmp3977;
    panda$core$Bit $tmp3983;
    int $tmp2558;
    {
        $tmp2560 = self;
        $match$682_92559 = $tmp2560;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2560));
        panda$core$Int64$init$builtin_int64(&$tmp2561, 0);
        panda$core$Bit $tmp2562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2561);
        if ($tmp2562.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2564 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 16));
            test2563 = *$tmp2564;
            org$pandalanguage$pandac$IRNode** $tmp2566 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 24));
            msg2565 = *$tmp2566;
            if (((panda$core$Bit) { msg2565 != NULL }).value) {
            {
                panda$core$String* $tmp2574 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2573, ((panda$core$Object*) test2563));
                $tmp2572 = $tmp2574;
                panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2572, &$s2575);
                $tmp2571 = $tmp2576;
                panda$core$String* $tmp2577 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2571, ((panda$core$Object*) msg2565));
                $tmp2570 = $tmp2577;
                panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2570, &$s2578);
                $tmp2569 = $tmp2579;
                $tmp2568 = $tmp2569;
                $returnValue2567 = $tmp2568;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2568));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2569));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2570));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2571));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2572));
                $tmp2558 = 0;
                goto $l2556;
                $l2580:;
                return $returnValue2567;
            }
            }
            panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2585, ((panda$core$Object*) test2563));
            $tmp2584 = $tmp2586;
            panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, &$s2587);
            $tmp2583 = $tmp2588;
            $tmp2582 = $tmp2583;
            $returnValue2567 = $tmp2582;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2582));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2583));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2584));
            $tmp2558 = 1;
            goto $l2556;
            $l2589:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2591, 1);
        panda$core$Bit $tmp2592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2591);
        if ($tmp2592.value) {
        {
            $tmp2593 = &$s2594;
            $returnValue2567 = $tmp2593;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2593));
            $tmp2558 = 2;
            goto $l2556;
            $l2595:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2597, 2);
        panda$core$Bit $tmp2598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2597);
        if ($tmp2598.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2600 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 24));
            left2599 = *$tmp2600;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2602 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$682_92559->$data + 32));
            op2601 = *$tmp2602;
            org$pandalanguage$pandac$IRNode** $tmp2604 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 40));
            right2603 = *$tmp2604;
            panda$core$String* $tmp2613 = (($fn2612) left2599->$class->vtable[0])(left2599);
            $tmp2611 = $tmp2613;
            panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, &$s2614);
            $tmp2610 = $tmp2615;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2617;
            $tmp2617 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2617->value = op2601;
            $tmp2616 = ((panda$core$Object*) $tmp2617);
            panda$core$String* $tmp2618 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2610, $tmp2616);
            $tmp2609 = $tmp2618;
            panda$core$String* $tmp2620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, &$s2619);
            $tmp2608 = $tmp2620;
            panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2608, ((panda$core$Object*) right2603));
            $tmp2607 = $tmp2621;
            panda$core$String* $tmp2623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2607, &$s2622);
            $tmp2606 = $tmp2623;
            $tmp2605 = $tmp2606;
            $returnValue2567 = $tmp2605;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2605));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2606));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2607));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2608));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2609));
            panda$core$Panda$unref$panda$core$Object($tmp2616);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2610));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2611));
            $tmp2558 = 3;
            goto $l2556;
            $l2624:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2626, 3);
        panda$core$Bit $tmp2627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2626);
        if ($tmp2627.value) {
        {
            panda$core$Bit* $tmp2629 = ((panda$core$Bit*) ((char*) $match$682_92559->$data + 24));
            bit2628 = *$tmp2629;
            panda$core$String* $tmp2632 = panda$core$Bit$convert$R$panda$core$String(bit2628);
            $tmp2631 = $tmp2632;
            $tmp2630 = $tmp2631;
            $returnValue2567 = $tmp2630;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2630));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2631));
            $tmp2558 = 4;
            goto $l2556;
            $l2633:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2635, 4);
        panda$core$Bit $tmp2636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2635);
        if ($tmp2636.value) {
        {
            panda$collections$ImmutableArray** $tmp2638 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 16));
            statements2637 = *$tmp2638;
            int $tmp2641;
            {
                panda$core$MutableString* $tmp2645 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp2645, &$s2646);
                $tmp2644 = $tmp2645;
                $tmp2643 = $tmp2644;
                result2642 = $tmp2643;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2643));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2644));
                {
                    int $tmp2649;
                    {
                        ITable* $tmp2653 = ((panda$collections$Iterable*) statements2637)->$class->itable;
                        while ($tmp2653->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2653 = $tmp2653->next;
                        }
                        $fn2655 $tmp2654 = $tmp2653->methods[0];
                        panda$collections$Iterator* $tmp2656 = $tmp2654(((panda$collections$Iterable*) statements2637));
                        $tmp2652 = $tmp2656;
                        $tmp2651 = $tmp2652;
                        Iter$696$172650 = $tmp2651;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2651));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2652));
                        $l2657:;
                        ITable* $tmp2660 = Iter$696$172650->$class->itable;
                        while ($tmp2660->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2660 = $tmp2660->next;
                        }
                        $fn2662 $tmp2661 = $tmp2660->methods[0];
                        panda$core$Bit $tmp2663 = $tmp2661(Iter$696$172650);
                        panda$core$Bit $tmp2664 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2663);
                        bool $tmp2659 = $tmp2664.value;
                        if (!$tmp2659) goto $l2658;
                        {
                            int $tmp2667;
                            {
                                ITable* $tmp2671 = Iter$696$172650->$class->itable;
                                while ($tmp2671->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2671 = $tmp2671->next;
                                }
                                $fn2673 $tmp2672 = $tmp2671->methods[1];
                                panda$core$Object* $tmp2674 = $tmp2672(Iter$696$172650);
                                $tmp2670 = $tmp2674;
                                $tmp2669 = ((org$pandalanguage$pandac$IRNode*) $tmp2670);
                                s2668 = $tmp2669;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2669));
                                panda$core$Panda$unref$panda$core$Object($tmp2670);
                                panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2668), &$s2676);
                                $tmp2675 = $tmp2677;
                                panda$core$MutableString$append$panda$core$String(result2642, $tmp2675);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2675));
                            }
                            $tmp2667 = -1;
                            goto $l2665;
                            $l2665:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2668));
                            s2668 = NULL;
                            switch ($tmp2667) {
                                case -1: goto $l2678;
                            }
                            $l2678:;
                        }
                        goto $l2657;
                        $l2658:;
                    }
                    $tmp2649 = -1;
                    goto $l2647;
                    $l2647:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$696$172650));
                    Iter$696$172650 = NULL;
                    switch ($tmp2649) {
                        case -1: goto $l2679;
                    }
                    $l2679:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2681, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2680, $tmp2681);
                panda$core$MutableString$append$panda$core$Char8(result2642, $tmp2680);
                panda$core$String* $tmp2684 = panda$core$MutableString$finish$R$panda$core$String(result2642);
                $tmp2683 = $tmp2684;
                $tmp2682 = $tmp2683;
                $returnValue2567 = $tmp2682;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2682));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2683));
                $tmp2641 = 0;
                goto $l2639;
                $l2685:;
                $tmp2558 = 5;
                goto $l2556;
                $l2686:;
                return $returnValue2567;
            }
            $l2639:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2642));
            result2642 = NULL;
            switch ($tmp2641) {
                case 0: goto $l2685;
            }
            $l2688:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2689, 5);
        panda$core$Bit $tmp2690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2689);
        if ($tmp2690.value) {
        {
            panda$collections$ImmutableArray** $tmp2692 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 16));
            statements2691 = *$tmp2692;
            panda$collections$ImmutableArray** $tmp2694 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 24));
            finally2693 = *$tmp2694;
            int $tmp2697;
            {
                panda$core$MutableString* $tmp2701 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp2701, &$s2702);
                $tmp2700 = $tmp2701;
                $tmp2699 = $tmp2700;
                result2698 = $tmp2699;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2699));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2700));
                {
                    int $tmp2705;
                    {
                        ITable* $tmp2709 = ((panda$collections$Iterable*) statements2691)->$class->itable;
                        while ($tmp2709->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2709 = $tmp2709->next;
                        }
                        $fn2711 $tmp2710 = $tmp2709->methods[0];
                        panda$collections$Iterator* $tmp2712 = $tmp2710(((panda$collections$Iterable*) statements2691));
                        $tmp2708 = $tmp2712;
                        $tmp2707 = $tmp2708;
                        Iter$703$172706 = $tmp2707;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2707));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2708));
                        $l2713:;
                        ITable* $tmp2716 = Iter$703$172706->$class->itable;
                        while ($tmp2716->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2716 = $tmp2716->next;
                        }
                        $fn2718 $tmp2717 = $tmp2716->methods[0];
                        panda$core$Bit $tmp2719 = $tmp2717(Iter$703$172706);
                        panda$core$Bit $tmp2720 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2719);
                        bool $tmp2715 = $tmp2720.value;
                        if (!$tmp2715) goto $l2714;
                        {
                            int $tmp2723;
                            {
                                ITable* $tmp2727 = Iter$703$172706->$class->itable;
                                while ($tmp2727->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2727 = $tmp2727->next;
                                }
                                $fn2729 $tmp2728 = $tmp2727->methods[1];
                                panda$core$Object* $tmp2730 = $tmp2728(Iter$703$172706);
                                $tmp2726 = $tmp2730;
                                $tmp2725 = ((org$pandalanguage$pandac$IRNode*) $tmp2726);
                                s2724 = $tmp2725;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2725));
                                panda$core$Panda$unref$panda$core$Object($tmp2726);
                                panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2724), &$s2732);
                                $tmp2731 = $tmp2733;
                                panda$core$MutableString$append$panda$core$String(result2698, $tmp2731);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2731));
                            }
                            $tmp2723 = -1;
                            goto $l2721;
                            $l2721:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2724));
                            s2724 = NULL;
                            switch ($tmp2723) {
                                case -1: goto $l2734;
                            }
                            $l2734:;
                        }
                        goto $l2713;
                        $l2714:;
                    }
                    $tmp2705 = -1;
                    goto $l2703;
                    $l2703:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$703$172706));
                    Iter$703$172706 = NULL;
                    switch ($tmp2705) {
                        case -1: goto $l2735;
                    }
                    $l2735:;
                }
                panda$core$MutableString$append$panda$core$String(result2698, &$s2736);
                {
                    int $tmp2739;
                    {
                        ITable* $tmp2743 = ((panda$collections$Iterable*) finally2693)->$class->itable;
                        while ($tmp2743->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2743 = $tmp2743->next;
                        }
                        $fn2745 $tmp2744 = $tmp2743->methods[0];
                        panda$collections$Iterator* $tmp2746 = $tmp2744(((panda$collections$Iterable*) finally2693));
                        $tmp2742 = $tmp2746;
                        $tmp2741 = $tmp2742;
                        Iter$707$172740 = $tmp2741;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2741));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2742));
                        $l2747:;
                        ITable* $tmp2750 = Iter$707$172740->$class->itable;
                        while ($tmp2750->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2750 = $tmp2750->next;
                        }
                        $fn2752 $tmp2751 = $tmp2750->methods[0];
                        panda$core$Bit $tmp2753 = $tmp2751(Iter$707$172740);
                        panda$core$Bit $tmp2754 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2753);
                        bool $tmp2749 = $tmp2754.value;
                        if (!$tmp2749) goto $l2748;
                        {
                            int $tmp2757;
                            {
                                ITable* $tmp2761 = Iter$707$172740->$class->itable;
                                while ($tmp2761->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2761 = $tmp2761->next;
                                }
                                $fn2763 $tmp2762 = $tmp2761->methods[1];
                                panda$core$Object* $tmp2764 = $tmp2762(Iter$707$172740);
                                $tmp2760 = $tmp2764;
                                $tmp2759 = ((org$pandalanguage$pandac$IRNode*) $tmp2760);
                                s2758 = $tmp2759;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2759));
                                panda$core$Panda$unref$panda$core$Object($tmp2760);
                                panda$core$String* $tmp2767 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2758), &$s2766);
                                $tmp2765 = $tmp2767;
                                panda$core$MutableString$append$panda$core$String(result2698, $tmp2765);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2765));
                            }
                            $tmp2757 = -1;
                            goto $l2755;
                            $l2755:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2758));
                            s2758 = NULL;
                            switch ($tmp2757) {
                                case -1: goto $l2768;
                            }
                            $l2768:;
                        }
                        goto $l2747;
                        $l2748:;
                    }
                    $tmp2739 = -1;
                    goto $l2737;
                    $l2737:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$707$172740));
                    Iter$707$172740 = NULL;
                    switch ($tmp2739) {
                        case -1: goto $l2769;
                    }
                    $l2769:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2771, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2770, $tmp2771);
                panda$core$MutableString$append$panda$core$Char8(result2698, $tmp2770);
                panda$core$String* $tmp2774 = panda$core$MutableString$finish$R$panda$core$String(result2698);
                $tmp2773 = $tmp2774;
                $tmp2772 = $tmp2773;
                $returnValue2567 = $tmp2772;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2772));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2773));
                $tmp2697 = 0;
                goto $l2695;
                $l2775:;
                $tmp2558 = 6;
                goto $l2556;
                $l2776:;
                return $returnValue2567;
            }
            $l2695:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2698));
            result2698 = NULL;
            switch ($tmp2697) {
                case 0: goto $l2775;
            }
            $l2778:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2779, 6);
        panda$core$Bit $tmp2780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2779);
        if ($tmp2780.value) {
        {
            panda$core$String** $tmp2782 = ((panda$core$String**) ((char*) $match$682_92559->$data + 16));
            label2781 = *$tmp2782;
            if (((panda$core$Bit) { label2781 != NULL }).value) {
            {
                panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2786, label2781);
                $tmp2785 = $tmp2787;
                panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2785, &$s2788);
                $tmp2784 = $tmp2789;
                $tmp2783 = $tmp2784;
                $returnValue2567 = $tmp2783;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2783));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2784));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2785));
                $tmp2558 = 7;
                goto $l2556;
                $l2790:;
                return $returnValue2567;
            }
            }
            $tmp2792 = &$s2793;
            $returnValue2567 = $tmp2792;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2792));
            $tmp2558 = 8;
            goto $l2556;
            $l2794:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2796, 7);
        panda$core$Bit $tmp2797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2796);
        if ($tmp2797.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp2799 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$682_92559->$data + 24));
            m2798 = *$tmp2799;
            panda$collections$ImmutableArray** $tmp2801 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 32));
            args2800 = *$tmp2801;
            panda$core$String* $tmp2807 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m2798->value)->name);
            $tmp2806 = $tmp2807;
            panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2806, &$s2808);
            $tmp2805 = $tmp2809;
            ITable* $tmp2811 = ((panda$collections$CollectionView*) args2800)->$class->itable;
            while ($tmp2811->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2811 = $tmp2811->next;
            }
            $fn2813 $tmp2812 = $tmp2811->methods[1];
            panda$core$String* $tmp2814 = $tmp2812(((panda$collections$CollectionView*) args2800));
            $tmp2810 = $tmp2814;
            panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, $tmp2810);
            $tmp2804 = $tmp2815;
            panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, &$s2816);
            $tmp2803 = $tmp2817;
            $tmp2802 = $tmp2803;
            $returnValue2567 = $tmp2802;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2802));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2803));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2804));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2810));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2805));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2806));
            $tmp2558 = 9;
            goto $l2556;
            $l2818:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2820, 8);
        panda$core$Bit $tmp2821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2820);
        if ($tmp2821.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2823 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 16));
            value2822 = *$tmp2823;
            org$pandalanguage$pandac$Type** $tmp2825 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92559->$data + 24));
            type2824 = *$tmp2825;
            panda$core$String* $tmp2832 = (($fn2831) value2822->$class->vtable[0])(value2822);
            $tmp2830 = $tmp2832;
            panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2830, &$s2833);
            $tmp2829 = $tmp2834;
            panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2829, ((panda$core$Object*) type2824));
            $tmp2828 = $tmp2835;
            panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2828, &$s2836);
            $tmp2827 = $tmp2837;
            $tmp2826 = $tmp2827;
            $returnValue2567 = $tmp2826;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2826));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2827));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2828));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2829));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2830));
            $tmp2558 = 10;
            goto $l2556;
            $l2838:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2840, 9);
        panda$core$Bit $tmp2841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2840);
        if ($tmp2841.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp2843 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$682_92559->$data + 16));
            ce2842 = *$tmp2843;
            panda$core$String* $tmp2846 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce2842);
            $tmp2845 = $tmp2846;
            $tmp2844 = $tmp2845;
            $returnValue2567 = $tmp2844;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2844));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2845));
            $tmp2558 = 11;
            goto $l2556;
            $l2847:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2849, 10);
        panda$core$Bit $tmp2850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2849);
        if ($tmp2850.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2852 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 16));
            base2851 = *$tmp2852;
            org$pandalanguage$pandac$ChoiceEntry** $tmp2854 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$682_92559->$data + 24));
            ce2853 = *$tmp2854;
            panda$core$Int64* $tmp2856 = ((panda$core$Int64*) ((char*) $match$682_92559->$data + 32));
            field2855 = *$tmp2856;
            panda$core$String* $tmp2865 = (($fn2864) base2851->$class->vtable[0])(base2851);
            $tmp2863 = $tmp2865;
            panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2863, &$s2866);
            $tmp2862 = $tmp2867;
            panda$core$String* $tmp2868 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2862, ((panda$core$Object*) ce2853));
            $tmp2861 = $tmp2868;
            panda$core$String* $tmp2870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2861, &$s2869);
            $tmp2860 = $tmp2870;
            panda$core$Int64$wrapper* $tmp2872;
            $tmp2872 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2872->value = field2855;
            $tmp2871 = ((panda$core$Object*) $tmp2872);
            panda$core$String* $tmp2873 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2860, $tmp2871);
            $tmp2859 = $tmp2873;
            panda$core$String* $tmp2875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2859, &$s2874);
            $tmp2858 = $tmp2875;
            $tmp2857 = $tmp2858;
            $returnValue2567 = $tmp2857;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2857));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2858));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2859));
            panda$core$Panda$unref$panda$core$Object($tmp2871);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2860));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2861));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2862));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2863));
            $tmp2558 = 12;
            goto $l2556;
            $l2876:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2878, 11);
        panda$core$Bit $tmp2879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2878);
        if ($tmp2879.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2881 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92559->$data + 16));
            type2880 = *$tmp2881;
            org$pandalanguage$pandac$IRNode** $tmp2883 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 24));
            call2882 = *$tmp2883;
            int $tmp2886;
            {
                $tmp2888 = call2882;
                $match$726_172887 = $tmp2888;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2888));
                panda$core$Int64$init$builtin_int64(&$tmp2889, 7);
                panda$core$Bit $tmp2890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$726_172887->$rawValue, $tmp2889);
                if ($tmp2890.value) {
                {
                    panda$collections$ImmutableArray** $tmp2892 = ((panda$collections$ImmutableArray**) ((char*) $match$726_172887->$data + 32));
                    args2891 = *$tmp2892;
                    panda$core$String* $tmp2898 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2880);
                    $tmp2897 = $tmp2898;
                    panda$core$String* $tmp2900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2897, &$s2899);
                    $tmp2896 = $tmp2900;
                    ITable* $tmp2902 = ((panda$collections$CollectionView*) args2891)->$class->itable;
                    while ($tmp2902->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp2902 = $tmp2902->next;
                    }
                    $fn2904 $tmp2903 = $tmp2902->methods[1];
                    panda$core$String* $tmp2905 = $tmp2903(((panda$collections$CollectionView*) args2891));
                    $tmp2901 = $tmp2905;
                    panda$core$String* $tmp2906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, $tmp2901);
                    $tmp2895 = $tmp2906;
                    panda$core$String* $tmp2908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2895, &$s2907);
                    $tmp2894 = $tmp2908;
                    $tmp2893 = $tmp2894;
                    $returnValue2567 = $tmp2893;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2893));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2894));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2895));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2901));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2896));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2897));
                    $tmp2886 = 0;
                    goto $l2884;
                    $l2909:;
                    $tmp2558 = 13;
                    goto $l2556;
                    $l2910:;
                    return $returnValue2567;
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp2912, false);
                    if ($tmp2912.value) goto $l2913; else goto $l2914;
                    $l2914:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2915, (panda$core$Int64) { 730 });
                    abort();
                    $l2913:;
                }
                }
            }
            $tmp2886 = -1;
            goto $l2884;
            $l2884:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2888));
            switch ($tmp2886) {
                case -1: goto $l2916;
                case 0: goto $l2909;
            }
            $l2916:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2917, 12);
        panda$core$Bit $tmp2918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2917);
        if ($tmp2918.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2920 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92559->$data + 16));
            Type2919 = *$tmp2920;
            $tmp2921 = &$s2922;
            $returnValue2567 = $tmp2921;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2921));
            $tmp2558 = 14;
            goto $l2556;
            $l2923:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2925, 13);
        panda$core$Bit $tmp2926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2925);
        if ($tmp2926.value) {
        {
            panda$core$String** $tmp2928 = ((panda$core$String**) ((char*) $match$682_92559->$data + 16));
            label2927 = *$tmp2928;
            if (((panda$core$Bit) { label2927 != NULL }).value) {
            {
                panda$core$String* $tmp2933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2932, label2927);
                $tmp2931 = $tmp2933;
                panda$core$String* $tmp2935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2931, &$s2934);
                $tmp2930 = $tmp2935;
                $tmp2929 = $tmp2930;
                $returnValue2567 = $tmp2929;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2929));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2930));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2931));
                $tmp2558 = 15;
                goto $l2556;
                $l2936:;
                return $returnValue2567;
            }
            }
            $tmp2938 = &$s2939;
            $returnValue2567 = $tmp2938;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2938));
            $tmp2558 = 16;
            goto $l2556;
            $l2940:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2942, 14);
        panda$core$Bit $tmp2943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2942);
        if ($tmp2943.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2945 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 0));
            target2944 = *$tmp2945;
            org$pandalanguage$pandac$IRNode** $tmp2947 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 8));
            value2946 = *$tmp2947;
            if (((panda$core$Bit) { value2946 != NULL }).value) {
            {
                panda$core$String* $tmp2956 = (($fn2955) target2944->$class->vtable[0])(target2944);
                $tmp2954 = $tmp2956;
                panda$core$String* $tmp2958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2954, &$s2957);
                $tmp2953 = $tmp2958;
                org$pandalanguage$pandac$Type* $tmp2961 = (($fn2960) target2944->$class->vtable[2])(target2944);
                $tmp2959 = $tmp2961;
                panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2953, ((panda$core$Object*) $tmp2959));
                $tmp2952 = $tmp2962;
                panda$core$String* $tmp2964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2952, &$s2963);
                $tmp2951 = $tmp2964;
                panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2951, ((panda$core$Object*) value2946));
                $tmp2950 = $tmp2965;
                panda$core$String* $tmp2967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, &$s2966);
                $tmp2949 = $tmp2967;
                $tmp2948 = $tmp2949;
                $returnValue2567 = $tmp2948;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2948));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2949));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2950));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2951));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2952));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2959));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2953));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2954));
                $tmp2558 = 17;
                goto $l2556;
                $l2968:;
                return $returnValue2567;
            }
            }
            panda$core$String* $tmp2976 = (($fn2975) target2944->$class->vtable[0])(target2944);
            $tmp2974 = $tmp2976;
            panda$core$String* $tmp2978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2974, &$s2977);
            $tmp2973 = $tmp2978;
            org$pandalanguage$pandac$Type* $tmp2981 = (($fn2980) target2944->$class->vtable[2])(target2944);
            $tmp2979 = $tmp2981;
            panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2973, ((panda$core$Object*) $tmp2979));
            $tmp2972 = $tmp2982;
            panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2972, &$s2983);
            $tmp2971 = $tmp2984;
            $tmp2970 = $tmp2971;
            $returnValue2567 = $tmp2970;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2970));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2971));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2972));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2979));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2973));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2974));
            $tmp2558 = 18;
            goto $l2556;
            $l2985:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2987, 15);
        panda$core$Bit $tmp2988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp2987);
        if ($tmp2988.value) {
        {
            panda$core$String** $tmp2990 = ((panda$core$String**) ((char*) $match$682_92559->$data + 16));
            label2989 = *$tmp2990;
            panda$collections$ImmutableArray** $tmp2992 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 24));
            statements2991 = *$tmp2992;
            org$pandalanguage$pandac$IRNode** $tmp2994 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 32));
            test2993 = *$tmp2994;
            int $tmp2997;
            {
                panda$core$MutableString* $tmp3001 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3001);
                $tmp3000 = $tmp3001;
                $tmp2999 = $tmp3000;
                result2998 = $tmp2999;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2999));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3000));
                if (((panda$core$Bit) { label2989 != NULL }).value) {
                {
                    panda$core$String* $tmp3004 = panda$core$String$convert$R$panda$core$String(label2989);
                    $tmp3003 = $tmp3004;
                    panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3003, &$s3005);
                    $tmp3002 = $tmp3006;
                    panda$core$MutableString$append$panda$core$String(result2998, $tmp3002);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3002));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3003));
                }
                }
                panda$core$MutableString$append$panda$core$String(result2998, &$s3007);
                {
                    int $tmp3010;
                    {
                        ITable* $tmp3014 = ((panda$collections$Iterable*) statements2991)->$class->itable;
                        while ($tmp3014->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3014 = $tmp3014->next;
                        }
                        $fn3016 $tmp3015 = $tmp3014->methods[0];
                        panda$collections$Iterator* $tmp3017 = $tmp3015(((panda$collections$Iterable*) statements2991));
                        $tmp3013 = $tmp3017;
                        $tmp3012 = $tmp3013;
                        Iter$750$173011 = $tmp3012;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3012));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3013));
                        $l3018:;
                        ITable* $tmp3021 = Iter$750$173011->$class->itable;
                        while ($tmp3021->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3021 = $tmp3021->next;
                        }
                        $fn3023 $tmp3022 = $tmp3021->methods[0];
                        panda$core$Bit $tmp3024 = $tmp3022(Iter$750$173011);
                        panda$core$Bit $tmp3025 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3024);
                        bool $tmp3020 = $tmp3025.value;
                        if (!$tmp3020) goto $l3019;
                        {
                            int $tmp3028;
                            {
                                ITable* $tmp3032 = Iter$750$173011->$class->itable;
                                while ($tmp3032->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3032 = $tmp3032->next;
                                }
                                $fn3034 $tmp3033 = $tmp3032->methods[1];
                                panda$core$Object* $tmp3035 = $tmp3033(Iter$750$173011);
                                $tmp3031 = $tmp3035;
                                $tmp3030 = ((org$pandalanguage$pandac$IRNode*) $tmp3031);
                                s3029 = $tmp3030;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3030));
                                panda$core$Panda$unref$panda$core$Object($tmp3031);
                                panda$core$String* $tmp3038 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3029), &$s3037);
                                $tmp3036 = $tmp3038;
                                panda$core$MutableString$append$panda$core$String(result2998, $tmp3036);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3036));
                            }
                            $tmp3028 = -1;
                            goto $l3026;
                            $l3026:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3029));
                            s3029 = NULL;
                            switch ($tmp3028) {
                                case -1: goto $l3039;
                            }
                            $l3039:;
                        }
                        goto $l3018;
                        $l3019:;
                    }
                    $tmp3010 = -1;
                    goto $l3008;
                    $l3008:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$750$173011));
                    Iter$750$173011 = NULL;
                    switch ($tmp3010) {
                        case -1: goto $l3040;
                    }
                    $l3040:;
                }
                panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3043, ((panda$core$Object*) test2993));
                $tmp3042 = $tmp3044;
                panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3042, &$s3045);
                $tmp3041 = $tmp3046;
                panda$core$MutableString$append$panda$core$String(result2998, $tmp3041);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3041));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3042));
                panda$core$String* $tmp3049 = panda$core$MutableString$finish$R$panda$core$String(result2998);
                $tmp3048 = $tmp3049;
                $tmp3047 = $tmp3048;
                $returnValue2567 = $tmp3047;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3047));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3048));
                $tmp2997 = 0;
                goto $l2995;
                $l3050:;
                $tmp2558 = 19;
                goto $l2556;
                $l3051:;
                return $returnValue2567;
            }
            $l2995:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2998));
            result2998 = NULL;
            switch ($tmp2997) {
                case 0: goto $l3050;
            }
            $l3053:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3054, 16);
        panda$core$Bit $tmp3055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3054);
        if ($tmp3055.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3057 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 0));
            m3056 = *$tmp3057;
            panda$collections$ImmutableArray** $tmp3059 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 8));
            args3058 = *$tmp3059;
            panda$core$String* $tmp3066 = (($fn3065) m3056->$class->vtable[0])(m3056);
            $tmp3064 = $tmp3066;
            panda$core$String* $tmp3068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3064, &$s3067);
            $tmp3063 = $tmp3068;
            ITable* $tmp3071 = ((panda$collections$CollectionView*) args3058)->$class->itable;
            while ($tmp3071->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3071 = $tmp3071->next;
            }
            $fn3073 $tmp3072 = $tmp3071->methods[2];
            panda$core$String* $tmp3074 = $tmp3072(((panda$collections$CollectionView*) args3058), &$s3070);
            $tmp3069 = $tmp3074;
            panda$core$String* $tmp3075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3063, $tmp3069);
            $tmp3062 = $tmp3075;
            panda$core$String* $tmp3077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3062, &$s3076);
            $tmp3061 = $tmp3077;
            $tmp3060 = $tmp3061;
            $returnValue2567 = $tmp3060;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3060));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3061));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3062));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3069));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3063));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3064));
            $tmp2558 = 20;
            goto $l2556;
            $l3078:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3080, 17);
        panda$core$Bit $tmp3081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3080);
        if ($tmp3081.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3083 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 0));
            expr3082 = *$tmp3083;
            org$pandalanguage$pandac$IRNode** $tmp3085 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 8));
            stmt3084 = *$tmp3085;
            panda$core$String* $tmp3092 = (($fn3091) expr3082->$class->vtable[0])(expr3082);
            $tmp3090 = $tmp3092;
            panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3090, &$s3093);
            $tmp3089 = $tmp3094;
            panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3089, ((panda$core$Object*) stmt3084));
            $tmp3088 = $tmp3095;
            panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3088, &$s3096);
            $tmp3087 = $tmp3097;
            $tmp3086 = $tmp3087;
            $returnValue2567 = $tmp3086;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3086));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3087));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3088));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3089));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3090));
            $tmp2558 = 21;
            goto $l2556;
            $l3098:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3100, 18);
        panda$core$Bit $tmp3101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3100);
        if ($tmp3101.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3103 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 24));
            base3102 = *$tmp3103;
            org$pandalanguage$pandac$FieldDecl** $tmp3105 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$682_92559->$data + 32));
            field3104 = *$tmp3105;
            if (((panda$core$Bit) { base3102 != NULL }).value) {
            {
                panda$core$String* $tmp3112 = (($fn3111) base3102->$class->vtable[0])(base3102);
                $tmp3110 = $tmp3112;
                panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3110, &$s3113);
                $tmp3109 = $tmp3114;
                panda$core$String* $tmp3115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, ((org$pandalanguage$pandac$Symbol*) field3104)->name);
                $tmp3108 = $tmp3115;
                panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3108, &$s3116);
                $tmp3107 = $tmp3117;
                $tmp3106 = $tmp3107;
                $returnValue2567 = $tmp3106;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3106));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3107));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3108));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3109));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3110));
                $tmp2558 = 22;
                goto $l2556;
                $l3118:;
                return $returnValue2567;
            }
            }
            $tmp3120 = ((org$pandalanguage$pandac$Symbol*) field3104)->name;
            $returnValue2567 = $tmp3120;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3120));
            $tmp2558 = 23;
            goto $l2556;
            $l3121:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3123, 19);
        panda$core$Bit $tmp3124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3123);
        if ($tmp3124.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3126 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 16));
            test3125 = *$tmp3126;
            panda$collections$ImmutableArray** $tmp3128 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 24));
            ifTrue3127 = *$tmp3128;
            org$pandalanguage$pandac$IRNode** $tmp3130 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 32));
            ifFalse3129 = *$tmp3130;
            int $tmp3133;
            {
                panda$core$MutableString* $tmp3137 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3140, ((panda$core$Object*) test3125));
                $tmp3139 = $tmp3141;
                panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3139, &$s3142);
                $tmp3138 = $tmp3143;
                panda$core$MutableString$init$panda$core$String($tmp3137, $tmp3138);
                $tmp3136 = $tmp3137;
                $tmp3135 = $tmp3136;
                result3134 = $tmp3135;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3135));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3136));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3138));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3139));
                {
                    int $tmp3146;
                    {
                        ITable* $tmp3150 = ((panda$collections$Iterable*) ifTrue3127)->$class->itable;
                        while ($tmp3150->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3150 = $tmp3150->next;
                        }
                        $fn3152 $tmp3151 = $tmp3150->methods[0];
                        panda$collections$Iterator* $tmp3153 = $tmp3151(((panda$collections$Iterable*) ifTrue3127));
                        $tmp3149 = $tmp3153;
                        $tmp3148 = $tmp3149;
                        Iter$766$173147 = $tmp3148;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3148));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3149));
                        $l3154:;
                        ITable* $tmp3157 = Iter$766$173147->$class->itable;
                        while ($tmp3157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3157 = $tmp3157->next;
                        }
                        $fn3159 $tmp3158 = $tmp3157->methods[0];
                        panda$core$Bit $tmp3160 = $tmp3158(Iter$766$173147);
                        panda$core$Bit $tmp3161 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3160);
                        bool $tmp3156 = $tmp3161.value;
                        if (!$tmp3156) goto $l3155;
                        {
                            int $tmp3164;
                            {
                                ITable* $tmp3168 = Iter$766$173147->$class->itable;
                                while ($tmp3168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3168 = $tmp3168->next;
                                }
                                $fn3170 $tmp3169 = $tmp3168->methods[1];
                                panda$core$Object* $tmp3171 = $tmp3169(Iter$766$173147);
                                $tmp3167 = $tmp3171;
                                $tmp3166 = ((org$pandalanguage$pandac$IRNode*) $tmp3167);
                                s3165 = $tmp3166;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3166));
                                panda$core$Panda$unref$panda$core$Object($tmp3167);
                                panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3165), &$s3173);
                                $tmp3172 = $tmp3174;
                                panda$core$MutableString$append$panda$core$String(result3134, $tmp3172);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3172));
                            }
                            $tmp3164 = -1;
                            goto $l3162;
                            $l3162:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3165));
                            s3165 = NULL;
                            switch ($tmp3164) {
                                case -1: goto $l3175;
                            }
                            $l3175:;
                        }
                        goto $l3154;
                        $l3155:;
                    }
                    $tmp3146 = -1;
                    goto $l3144;
                    $l3144:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$766$173147));
                    Iter$766$173147 = NULL;
                    switch ($tmp3146) {
                        case -1: goto $l3176;
                    }
                    $l3176:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3178, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3177, $tmp3178);
                panda$core$MutableString$append$panda$core$Char8(result3134, $tmp3177);
                if (((panda$core$Bit) { ifFalse3129 != NULL }).value) {
                {
                    panda$core$String* $tmp3182 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3181, ((panda$core$Object*) ifFalse3129));
                    $tmp3180 = $tmp3182;
                    panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3180, &$s3183);
                    $tmp3179 = $tmp3184;
                    panda$core$MutableString$append$panda$core$String(result3134, $tmp3179);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3179));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3180));
                }
                }
                panda$core$String* $tmp3187 = panda$core$MutableString$finish$R$panda$core$String(result3134);
                $tmp3186 = $tmp3187;
                $tmp3185 = $tmp3186;
                $returnValue2567 = $tmp3185;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3185));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3186));
                $tmp3133 = 0;
                goto $l3131;
                $l3188:;
                $tmp2558 = 24;
                goto $l2556;
                $l3189:;
                return $returnValue2567;
            }
            $l3131:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3134));
            result3134 = NULL;
            switch ($tmp3133) {
                case 0: goto $l3188;
            }
            $l3191:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3192, 20);
        panda$core$Bit $tmp3193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3192);
        if ($tmp3193.value) {
        {
            panda$core$UInt64* $tmp3195 = ((panda$core$UInt64*) ((char*) $match$682_92559->$data + 24));
            value3194 = *$tmp3195;
            panda$core$String* $tmp3198 = panda$core$UInt64$convert$R$panda$core$String(value3194);
            $tmp3197 = $tmp3198;
            $tmp3196 = $tmp3197;
            $returnValue2567 = $tmp3196;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3196));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3197));
            $tmp2558 = 25;
            goto $l2556;
            $l3199:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3201, 21);
        panda$core$Bit $tmp3202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3201);
        if ($tmp3202.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3204 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 16));
            value3203 = *$tmp3204;
            panda$core$String* $tmp3209 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3208, ((panda$core$Object*) value3203));
            $tmp3207 = $tmp3209;
            panda$core$String* $tmp3211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3207, &$s3210);
            $tmp3206 = $tmp3211;
            $tmp3205 = $tmp3206;
            $returnValue2567 = $tmp3205;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3205));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3206));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3207));
            $tmp2558 = 26;
            goto $l2556;
            $l3212:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3214, 22);
        panda$core$Bit $tmp3215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3214);
        if ($tmp3215.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3217 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 16));
            value3216 = *$tmp3217;
            panda$core$String* $tmp3222 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3221, ((panda$core$Object*) value3216));
            $tmp3220 = $tmp3222;
            panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3220, &$s3223);
            $tmp3219 = $tmp3224;
            $tmp3218 = $tmp3219;
            $returnValue2567 = $tmp3218;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3218));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3219));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3220));
            $tmp2558 = 27;
            goto $l2556;
            $l3225:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3227, 23);
        panda$core$Bit $tmp3228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3227);
        if ($tmp3228.value) {
        {
            panda$core$String** $tmp3230 = ((panda$core$String**) ((char*) $match$682_92559->$data + 16));
            label3229 = *$tmp3230;
            panda$collections$ImmutableArray** $tmp3232 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 24));
            statements3231 = *$tmp3232;
            int $tmp3235;
            {
                panda$core$MutableString* $tmp3239 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3239);
                $tmp3238 = $tmp3239;
                $tmp3237 = $tmp3238;
                result3236 = $tmp3237;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3237));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3238));
                if (((panda$core$Bit) { label3229 != NULL }).value) {
                {
                    panda$core$String* $tmp3242 = panda$core$String$convert$R$panda$core$String(label3229);
                    $tmp3241 = $tmp3242;
                    panda$core$String* $tmp3244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, &$s3243);
                    $tmp3240 = $tmp3244;
                    panda$core$MutableString$append$panda$core$String(result3236, $tmp3240);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3240));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3241));
                }
                }
                panda$core$MutableString$append$panda$core$String(result3236, &$s3245);
                {
                    int $tmp3248;
                    {
                        ITable* $tmp3252 = ((panda$collections$Iterable*) statements3231)->$class->itable;
                        while ($tmp3252->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3252 = $tmp3252->next;
                        }
                        $fn3254 $tmp3253 = $tmp3252->methods[0];
                        panda$collections$Iterator* $tmp3255 = $tmp3253(((panda$collections$Iterable*) statements3231));
                        $tmp3251 = $tmp3255;
                        $tmp3250 = $tmp3251;
                        Iter$786$173249 = $tmp3250;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3250));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3251));
                        $l3256:;
                        ITable* $tmp3259 = Iter$786$173249->$class->itable;
                        while ($tmp3259->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3259 = $tmp3259->next;
                        }
                        $fn3261 $tmp3260 = $tmp3259->methods[0];
                        panda$core$Bit $tmp3262 = $tmp3260(Iter$786$173249);
                        panda$core$Bit $tmp3263 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3262);
                        bool $tmp3258 = $tmp3263.value;
                        if (!$tmp3258) goto $l3257;
                        {
                            int $tmp3266;
                            {
                                ITable* $tmp3270 = Iter$786$173249->$class->itable;
                                while ($tmp3270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3270 = $tmp3270->next;
                                }
                                $fn3272 $tmp3271 = $tmp3270->methods[1];
                                panda$core$Object* $tmp3273 = $tmp3271(Iter$786$173249);
                                $tmp3269 = $tmp3273;
                                $tmp3268 = ((org$pandalanguage$pandac$IRNode*) $tmp3269);
                                s3267 = $tmp3268;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3268));
                                panda$core$Panda$unref$panda$core$Object($tmp3269);
                                panda$core$String* $tmp3276 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3267), &$s3275);
                                $tmp3274 = $tmp3276;
                                panda$core$MutableString$append$panda$core$String(result3236, $tmp3274);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3274));
                            }
                            $tmp3266 = -1;
                            goto $l3264;
                            $l3264:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3267));
                            s3267 = NULL;
                            switch ($tmp3266) {
                                case -1: goto $l3277;
                            }
                            $l3277:;
                        }
                        goto $l3256;
                        $l3257:;
                    }
                    $tmp3248 = -1;
                    goto $l3246;
                    $l3246:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$786$173249));
                    Iter$786$173249 = NULL;
                    switch ($tmp3248) {
                        case -1: goto $l3278;
                    }
                    $l3278:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3280, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3279, $tmp3280);
                panda$core$MutableString$append$panda$core$Char8(result3236, $tmp3279);
                panda$core$String* $tmp3283 = panda$core$MutableString$finish$R$panda$core$String(result3236);
                $tmp3282 = $tmp3283;
                $tmp3281 = $tmp3282;
                $returnValue2567 = $tmp3281;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3281));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3282));
                $tmp3235 = 0;
                goto $l3233;
                $l3284:;
                $tmp2558 = 28;
                goto $l2556;
                $l3285:;
                return $returnValue2567;
            }
            $l3233:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3236));
            result3236 = NULL;
            switch ($tmp3235) {
                case 0: goto $l3284;
            }
            $l3287:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3288, 24);
        panda$core$Bit $tmp3289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3288);
        if ($tmp3289.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3291 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 16));
            value3290 = *$tmp3291;
            panda$collections$ImmutableArray** $tmp3293 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 24));
            whens3292 = *$tmp3293;
            panda$collections$ImmutableArray** $tmp3295 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 32));
            other3294 = *$tmp3295;
            int $tmp3298;
            {
                panda$core$MutableString* $tmp3302 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp3306 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3305, ((panda$core$Object*) value3290));
                $tmp3304 = $tmp3306;
                panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3304, &$s3307);
                $tmp3303 = $tmp3308;
                panda$core$MutableString$init$panda$core$String($tmp3302, $tmp3303);
                $tmp3301 = $tmp3302;
                $tmp3300 = $tmp3301;
                result3299 = $tmp3300;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3300));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3301));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3303));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3304));
                {
                    int $tmp3311;
                    {
                        ITable* $tmp3315 = ((panda$collections$Iterable*) whens3292)->$class->itable;
                        while ($tmp3315->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3315 = $tmp3315->next;
                        }
                        $fn3317 $tmp3316 = $tmp3315->methods[0];
                        panda$collections$Iterator* $tmp3318 = $tmp3316(((panda$collections$Iterable*) whens3292));
                        $tmp3314 = $tmp3318;
                        $tmp3313 = $tmp3314;
                        Iter$793$173312 = $tmp3313;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3313));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3314));
                        $l3319:;
                        ITable* $tmp3322 = Iter$793$173312->$class->itable;
                        while ($tmp3322->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3322 = $tmp3322->next;
                        }
                        $fn3324 $tmp3323 = $tmp3322->methods[0];
                        panda$core$Bit $tmp3325 = $tmp3323(Iter$793$173312);
                        panda$core$Bit $tmp3326 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3325);
                        bool $tmp3321 = $tmp3326.value;
                        if (!$tmp3321) goto $l3320;
                        {
                            int $tmp3329;
                            {
                                ITable* $tmp3333 = Iter$793$173312->$class->itable;
                                while ($tmp3333->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3333 = $tmp3333->next;
                                }
                                $fn3335 $tmp3334 = $tmp3333->methods[1];
                                panda$core$Object* $tmp3336 = $tmp3334(Iter$793$173312);
                                $tmp3332 = $tmp3336;
                                $tmp3331 = ((org$pandalanguage$pandac$IRNode*) $tmp3332);
                                w3330 = $tmp3331;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3331));
                                panda$core$Panda$unref$panda$core$Object($tmp3332);
                                panda$core$String* $tmp3339 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w3330), &$s3338);
                                $tmp3337 = $tmp3339;
                                panda$core$MutableString$append$panda$core$String(result3299, $tmp3337);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3337));
                            }
                            $tmp3329 = -1;
                            goto $l3327;
                            $l3327:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w3330));
                            w3330 = NULL;
                            switch ($tmp3329) {
                                case -1: goto $l3340;
                            }
                            $l3340:;
                        }
                        goto $l3319;
                        $l3320:;
                    }
                    $tmp3311 = -1;
                    goto $l3309;
                    $l3309:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$793$173312));
                    Iter$793$173312 = NULL;
                    switch ($tmp3311) {
                        case -1: goto $l3341;
                    }
                    $l3341:;
                }
                if (((panda$core$Bit) { other3294 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result3299, &$s3342);
                    {
                        int $tmp3345;
                        {
                            ITable* $tmp3349 = ((panda$collections$Iterable*) other3294)->$class->itable;
                            while ($tmp3349->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp3349 = $tmp3349->next;
                            }
                            $fn3351 $tmp3350 = $tmp3349->methods[0];
                            panda$collections$Iterator* $tmp3352 = $tmp3350(((panda$collections$Iterable*) other3294));
                            $tmp3348 = $tmp3352;
                            $tmp3347 = $tmp3348;
                            Iter$798$213346 = $tmp3347;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3347));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3348));
                            $l3353:;
                            ITable* $tmp3356 = Iter$798$213346->$class->itable;
                            while ($tmp3356->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3356 = $tmp3356->next;
                            }
                            $fn3358 $tmp3357 = $tmp3356->methods[0];
                            panda$core$Bit $tmp3359 = $tmp3357(Iter$798$213346);
                            panda$core$Bit $tmp3360 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3359);
                            bool $tmp3355 = $tmp3360.value;
                            if (!$tmp3355) goto $l3354;
                            {
                                int $tmp3363;
                                {
                                    ITable* $tmp3367 = Iter$798$213346->$class->itable;
                                    while ($tmp3367->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp3367 = $tmp3367->next;
                                    }
                                    $fn3369 $tmp3368 = $tmp3367->methods[1];
                                    panda$core$Object* $tmp3370 = $tmp3368(Iter$798$213346);
                                    $tmp3366 = $tmp3370;
                                    $tmp3365 = ((org$pandalanguage$pandac$IRNode*) $tmp3366);
                                    s3364 = $tmp3365;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3365));
                                    panda$core$Panda$unref$panda$core$Object($tmp3366);
                                    panda$core$String* $tmp3373 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3364), &$s3372);
                                    $tmp3371 = $tmp3373;
                                    panda$core$MutableString$append$panda$core$String(result3299, $tmp3371);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3371));
                                }
                                $tmp3363 = -1;
                                goto $l3361;
                                $l3361:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3364));
                                s3364 = NULL;
                                switch ($tmp3363) {
                                    case -1: goto $l3374;
                                }
                                $l3374:;
                            }
                            goto $l3353;
                            $l3354:;
                        }
                        $tmp3345 = -1;
                        goto $l3343;
                        $l3343:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$798$213346));
                        Iter$798$213346 = NULL;
                        switch ($tmp3345) {
                            case -1: goto $l3375;
                        }
                        $l3375:;
                    }
                }
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3377, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3376, $tmp3377);
                panda$core$MutableString$append$panda$core$Char8(result3299, $tmp3376);
                panda$core$String* $tmp3380 = panda$core$MutableString$finish$R$panda$core$String(result3299);
                $tmp3379 = $tmp3380;
                $tmp3378 = $tmp3379;
                $returnValue2567 = $tmp3378;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3379));
                $tmp3298 = 0;
                goto $l3296;
                $l3381:;
                $tmp2558 = 29;
                goto $l2556;
                $l3382:;
                return $returnValue2567;
            }
            $l3296:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3299));
            result3299 = NULL;
            switch ($tmp3298) {
                case 0: goto $l3381;
            }
            $l3384:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3385, 25);
        panda$core$Bit $tmp3386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3385);
        if ($tmp3386.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3388 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 24));
            target3387 = *$tmp3388;
            org$pandalanguage$pandac$MethodRef** $tmp3390 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$682_92559->$data + 32));
            m3389 = *$tmp3390;
            if (((panda$core$Bit) { target3387 != NULL }).value) {
            {
                panda$core$String* $tmp3397 = (($fn3396) target3387->$class->vtable[0])(target3387);
                $tmp3395 = $tmp3397;
                panda$core$String* $tmp3399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3395, &$s3398);
                $tmp3394 = $tmp3399;
                panda$core$String* $tmp3400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3394, ((org$pandalanguage$pandac$Symbol*) m3389->value)->name);
                $tmp3393 = $tmp3400;
                panda$core$String* $tmp3402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3393, &$s3401);
                $tmp3392 = $tmp3402;
                $tmp3391 = $tmp3392;
                $returnValue2567 = $tmp3391;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3391));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3392));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3393));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3394));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3395));
                $tmp2558 = 30;
                goto $l2556;
                $l3403:;
                return $returnValue2567;
            }
            }
            $tmp3405 = ((org$pandalanguage$pandac$Symbol*) m3389->value)->name;
            $returnValue2567 = $tmp3405;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3405));
            $tmp2558 = 31;
            goto $l2556;
            $l3406:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3408, 26);
        panda$core$Bit $tmp3409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3408);
        if ($tmp3409.value) {
        {
            panda$core$UInt64* $tmp3411 = ((panda$core$UInt64*) ((char*) $match$682_92559->$data + 24));
            value3410 = *$tmp3411;
            panda$core$UInt64$wrapper* $tmp3416;
            $tmp3416 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp3416->value = value3410;
            $tmp3415 = ((panda$core$Object*) $tmp3416);
            panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3414, $tmp3415);
            $tmp3413 = $tmp3417;
            $tmp3412 = $tmp3413;
            $returnValue2567 = $tmp3412;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3412));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3413));
            panda$core$Panda$unref$panda$core$Object($tmp3415);
            $tmp2558 = 32;
            goto $l2556;
            $l3418:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3420, 27);
        panda$core$Bit $tmp3421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3420);
        if ($tmp3421.value) {
        {
            $tmp3422 = &$s3423;
            $returnValue2567 = $tmp3422;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3422));
            $tmp2558 = 33;
            goto $l2556;
            $l3424:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3426, 28);
        panda$core$Bit $tmp3427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3426);
        if ($tmp3427.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3429 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$682_92559->$data + 16));
            op3428 = *$tmp3429;
            org$pandalanguage$pandac$IRNode** $tmp3431 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 24));
            base3430 = *$tmp3431;
            panda$core$String* $tmp3437 = org$pandalanguage$pandac$parser$Token$Kind$convert$R$panda$core$String(op3428);
            $tmp3436 = $tmp3437;
            panda$core$String* $tmp3439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3436, &$s3438);
            $tmp3435 = $tmp3439;
            panda$core$String* $tmp3440 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3435, ((panda$core$Object*) base3430));
            $tmp3434 = $tmp3440;
            panda$core$String* $tmp3442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3434, &$s3441);
            $tmp3433 = $tmp3442;
            $tmp3432 = $tmp3433;
            $returnValue2567 = $tmp3432;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3432));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3433));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3434));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3435));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3436));
            $tmp2558 = 34;
            goto $l2556;
            $l3443:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3445, 29);
        panda$core$Bit $tmp3446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3445);
        if ($tmp3446.value) {
        {
            panda$core$String** $tmp3448 = ((panda$core$String**) ((char*) $match$682_92559->$data + 16));
            label3447 = *$tmp3448;
            org$pandalanguage$pandac$IRNode** $tmp3450 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 24));
            target3449 = *$tmp3450;
            org$pandalanguage$pandac$IRNode** $tmp3452 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 32));
            list3451 = *$tmp3452;
            panda$collections$ImmutableArray** $tmp3454 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 40));
            statements3453 = *$tmp3454;
            int $tmp3457;
            {
                panda$core$MutableString* $tmp3461 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3461);
                $tmp3460 = $tmp3461;
                $tmp3459 = $tmp3460;
                result3458 = $tmp3459;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3459));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3460));
                if (((panda$core$Bit) { label3447 != NULL }).value) {
                {
                    panda$core$String* $tmp3464 = panda$core$String$convert$R$panda$core$String(label3447);
                    $tmp3463 = $tmp3464;
                    panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3463, &$s3465);
                    $tmp3462 = $tmp3466;
                    panda$core$MutableString$append$panda$core$String(result3458, $tmp3462);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3462));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3463));
                }
                }
                panda$core$String* $tmp3472 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3471, ((panda$core$Object*) target3449));
                $tmp3470 = $tmp3472;
                panda$core$String* $tmp3474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3470, &$s3473);
                $tmp3469 = $tmp3474;
                panda$core$String* $tmp3475 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3469, ((panda$core$Object*) list3451));
                $tmp3468 = $tmp3475;
                panda$core$String* $tmp3477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3468, &$s3476);
                $tmp3467 = $tmp3477;
                panda$core$MutableString$append$panda$core$String(result3458, $tmp3467);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3467));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3468));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3469));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3470));
                {
                    int $tmp3480;
                    {
                        ITable* $tmp3484 = ((panda$collections$Iterable*) statements3453)->$class->itable;
                        while ($tmp3484->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3484 = $tmp3484->next;
                        }
                        $fn3486 $tmp3485 = $tmp3484->methods[0];
                        panda$collections$Iterator* $tmp3487 = $tmp3485(((panda$collections$Iterable*) statements3453));
                        $tmp3483 = $tmp3487;
                        $tmp3482 = $tmp3483;
                        Iter$821$173481 = $tmp3482;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3482));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3483));
                        $l3488:;
                        ITable* $tmp3491 = Iter$821$173481->$class->itable;
                        while ($tmp3491->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3491 = $tmp3491->next;
                        }
                        $fn3493 $tmp3492 = $tmp3491->methods[0];
                        panda$core$Bit $tmp3494 = $tmp3492(Iter$821$173481);
                        panda$core$Bit $tmp3495 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3494);
                        bool $tmp3490 = $tmp3495.value;
                        if (!$tmp3490) goto $l3489;
                        {
                            int $tmp3498;
                            {
                                ITable* $tmp3502 = Iter$821$173481->$class->itable;
                                while ($tmp3502->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3502 = $tmp3502->next;
                                }
                                $fn3504 $tmp3503 = $tmp3502->methods[1];
                                panda$core$Object* $tmp3505 = $tmp3503(Iter$821$173481);
                                $tmp3501 = $tmp3505;
                                $tmp3500 = ((org$pandalanguage$pandac$IRNode*) $tmp3501);
                                s3499 = $tmp3500;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3500));
                                panda$core$Panda$unref$panda$core$Object($tmp3501);
                                panda$core$String* $tmp3508 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3499), &$s3507);
                                $tmp3506 = $tmp3508;
                                panda$core$MutableString$append$panda$core$String(result3458, $tmp3506);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3506));
                            }
                            $tmp3498 = -1;
                            goto $l3496;
                            $l3496:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3499));
                            s3499 = NULL;
                            switch ($tmp3498) {
                                case -1: goto $l3509;
                            }
                            $l3509:;
                        }
                        goto $l3488;
                        $l3489:;
                    }
                    $tmp3480 = -1;
                    goto $l3478;
                    $l3478:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$821$173481));
                    Iter$821$173481 = NULL;
                    switch ($tmp3480) {
                        case -1: goto $l3510;
                    }
                    $l3510:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3512, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3511, $tmp3512);
                panda$core$MutableString$append$panda$core$Char8(result3458, $tmp3511);
                panda$core$String* $tmp3515 = panda$core$MutableString$finish$R$panda$core$String(result3458);
                $tmp3514 = $tmp3515;
                $tmp3513 = $tmp3514;
                $returnValue2567 = $tmp3513;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3513));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3514));
                $tmp3457 = 0;
                goto $l3455;
                $l3516:;
                $tmp2558 = 35;
                goto $l2556;
                $l3517:;
                return $returnValue2567;
            }
            $l3455:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3458));
            result3458 = NULL;
            switch ($tmp3457) {
                case 0: goto $l3516;
            }
            $l3519:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3520, 30);
        panda$core$Bit $tmp3521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3520);
        if ($tmp3521.value) {
        {
            panda$core$Real64* $tmp3523 = ((panda$core$Real64*) ((char*) $match$682_92559->$data + 24));
            value3522 = *$tmp3523;
            panda$core$String* $tmp3526 = panda$core$Real64$convert$R$panda$core$String(value3522);
            $tmp3525 = $tmp3526;
            $tmp3524 = $tmp3525;
            $returnValue2567 = $tmp3524;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3524));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3525));
            $tmp2558 = 36;
            goto $l2556;
            $l3527:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3529, 31);
        panda$core$Bit $tmp3530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3529);
        if ($tmp3530.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3532 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 16));
            value3531 = *$tmp3532;
            if (((panda$core$Bit) { value3531 != NULL }).value) {
            {
                panda$core$String* $tmp3537 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3536, ((panda$core$Object*) value3531));
                $tmp3535 = $tmp3537;
                panda$core$String* $tmp3539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3535, &$s3538);
                $tmp3534 = $tmp3539;
                $tmp3533 = $tmp3534;
                $returnValue2567 = $tmp3533;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3533));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3534));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3535));
                $tmp2558 = 37;
                goto $l2556;
                $l3540:;
                return $returnValue2567;
            }
            }
            $tmp3542 = &$s3543;
            $returnValue2567 = $tmp3542;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3542));
            $tmp2558 = 38;
            goto $l2556;
            $l3544:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3546, 32);
        panda$core$Bit $tmp3547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3546);
        if ($tmp3547.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3549 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92559->$data + 16));
            type3548 = *$tmp3549;
            panda$core$Int64* $tmp3551 = ((panda$core$Int64*) ((char*) $match$682_92559->$data + 24));
            id3550 = *$tmp3551;
            panda$core$Int64$wrapper* $tmp3557;
            $tmp3557 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3557->value = id3550;
            $tmp3556 = ((panda$core$Object*) $tmp3557);
            panda$core$String* $tmp3558 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3555, $tmp3556);
            $tmp3554 = $tmp3558;
            panda$core$String* $tmp3560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3554, &$s3559);
            $tmp3553 = $tmp3560;
            $tmp3552 = $tmp3553;
            $returnValue2567 = $tmp3552;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3552));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3553));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3554));
            panda$core$Panda$unref$panda$core$Object($tmp3556);
            $tmp2558 = 39;
            goto $l2556;
            $l3561:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3563, 33);
        panda$core$Bit $tmp3564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3563);
        if ($tmp3564.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3566 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 0));
            base3565 = *$tmp3566;
            panda$core$Int64* $tmp3568 = ((panda$core$Int64*) ((char*) $match$682_92559->$data + 8));
            id3567 = *$tmp3568;
            panda$core$Int64$wrapper* $tmp3576;
            $tmp3576 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3576->value = id3567;
            $tmp3575 = ((panda$core$Object*) $tmp3576);
            panda$core$String* $tmp3577 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3574, $tmp3575);
            $tmp3573 = $tmp3577;
            panda$core$String* $tmp3579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3573, &$s3578);
            $tmp3572 = $tmp3579;
            panda$core$String* $tmp3580 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3572, ((panda$core$Object*) base3565));
            $tmp3571 = $tmp3580;
            panda$core$String* $tmp3582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3571, &$s3581);
            $tmp3570 = $tmp3582;
            $tmp3569 = $tmp3570;
            $returnValue2567 = $tmp3569;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3569));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3570));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3571));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3572));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3573));
            panda$core$Panda$unref$panda$core$Object($tmp3575);
            $tmp2558 = 40;
            goto $l2556;
            $l3583:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3585, 34);
        panda$core$Bit $tmp3586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3585);
        if ($tmp3586.value) {
        {
            $tmp3587 = &$s3588;
            $returnValue2567 = $tmp3587;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3587));
            $tmp2558 = 41;
            goto $l2556;
            $l3589:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3591, 35);
        panda$core$Bit $tmp3592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3591);
        if ($tmp3592.value) {
        {
            $tmp3593 = &$s3594;
            $returnValue2567 = $tmp3593;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3593));
            $tmp2558 = 42;
            goto $l2556;
            $l3595:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3597, 36);
        panda$core$Bit $tmp3598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3597);
        if ($tmp3598.value) {
        {
            panda$core$String** $tmp3600 = ((panda$core$String**) ((char*) $match$682_92559->$data + 16));
            str3599 = *$tmp3600;
            panda$core$String* $tmp3604 = panda$core$String$format$panda$core$String$R$panda$core$String(str3599, &$s3603);
            $tmp3602 = $tmp3604;
            $tmp3601 = $tmp3602;
            $returnValue2567 = $tmp3601;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3601));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3602));
            $tmp2558 = 43;
            goto $l2556;
            $l3605:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3607, 37);
        panda$core$Bit $tmp3608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3607);
        if ($tmp3608.value) {
        {
            $tmp3609 = &$s3610;
            $returnValue2567 = $tmp3609;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3609));
            $tmp2558 = 44;
            goto $l2556;
            $l3611:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3613, 38);
        panda$core$Bit $tmp3614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3613);
        if ($tmp3614.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3616 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 16));
            test3615 = *$tmp3616;
            org$pandalanguage$pandac$IRNode** $tmp3618 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 24));
            ifTrue3617 = *$tmp3618;
            org$pandalanguage$pandac$IRNode** $tmp3620 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 32));
            ifFalse3619 = *$tmp3620;
            panda$core$String* $tmp3629 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3628, ((panda$core$Object*) test3615));
            $tmp3627 = $tmp3629;
            panda$core$String* $tmp3631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3627, &$s3630);
            $tmp3626 = $tmp3631;
            panda$core$String* $tmp3632 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3626, ((panda$core$Object*) ifTrue3617));
            $tmp3625 = $tmp3632;
            panda$core$String* $tmp3634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3625, &$s3633);
            $tmp3624 = $tmp3634;
            panda$core$String* $tmp3635 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3624, ((panda$core$Object*) ifFalse3619));
            $tmp3623 = $tmp3635;
            panda$core$String* $tmp3637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3623, &$s3636);
            $tmp3622 = $tmp3637;
            $tmp3621 = $tmp3622;
            $returnValue2567 = $tmp3621;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3621));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3622));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3623));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3624));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3625));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3626));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3627));
            $tmp2558 = 45;
            goto $l2556;
            $l3638:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3640, 39);
        panda$core$Bit $tmp3641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3640);
        if ($tmp3641.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3643 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92559->$data + 16));
            type3642 = *$tmp3643;
            panda$core$String* $tmp3646 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type3642);
            $tmp3645 = $tmp3646;
            $tmp3644 = $tmp3645;
            $returnValue2567 = $tmp3644;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3644));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3645));
            $tmp2558 = 46;
            goto $l2556;
            $l3647:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3649, 40);
        panda$core$Bit $tmp3650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3649);
        if ($tmp3650.value) {
        {
            panda$core$String** $tmp3652 = ((panda$core$String**) ((char*) $match$682_92559->$data + 16));
            name3651 = *$tmp3652;
            $tmp3653 = name3651;
            $returnValue2567 = $tmp3653;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3653));
            $tmp2558 = 47;
            goto $l2556;
            $l3654:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3656, 41);
        panda$core$Bit $tmp3657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3656);
        if ($tmp3657.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3659 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 24));
            base3658 = *$tmp3659;
            panda$collections$ImmutableArray** $tmp3661 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 32));
            args3660 = *$tmp3661;
            panda$core$String* $tmp3668 = (($fn3667) base3658->$class->vtable[0])(base3658);
            $tmp3666 = $tmp3668;
            panda$core$String* $tmp3670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3666, &$s3669);
            $tmp3665 = $tmp3670;
            ITable* $tmp3672 = ((panda$collections$CollectionView*) args3660)->$class->itable;
            while ($tmp3672->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3672 = $tmp3672->next;
            }
            $fn3674 $tmp3673 = $tmp3672->methods[1];
            panda$core$String* $tmp3675 = $tmp3673(((panda$collections$CollectionView*) args3660));
            $tmp3671 = $tmp3675;
            panda$core$String* $tmp3676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3665, $tmp3671);
            $tmp3664 = $tmp3676;
            panda$core$String* $tmp3678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3664, &$s3677);
            $tmp3663 = $tmp3678;
            $tmp3662 = $tmp3663;
            $returnValue2567 = $tmp3662;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3662));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3663));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3664));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3671));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3665));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3666));
            $tmp2558 = 48;
            goto $l2556;
            $l3679:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3681, 42);
        panda$core$Bit $tmp3682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3681);
        if ($tmp3682.value) {
        {
            panda$collections$ImmutableArray** $tmp3684 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 16));
            params3683 = *$tmp3684;
            org$pandalanguage$pandac$ASTNode** $tmp3686 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$682_92559->$data + 24));
            body3685 = *$tmp3686;
            ITable* $tmp3694 = ((panda$collections$CollectionView*) params3683)->$class->itable;
            while ($tmp3694->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3694 = $tmp3694->next;
            }
            $fn3696 $tmp3695 = $tmp3694->methods[1];
            panda$core$String* $tmp3697 = $tmp3695(((panda$collections$CollectionView*) params3683));
            $tmp3693 = $tmp3697;
            panda$core$String* $tmp3698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3692, $tmp3693);
            $tmp3691 = $tmp3698;
            panda$core$String* $tmp3700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3691, &$s3699);
            $tmp3690 = $tmp3700;
            panda$core$String* $tmp3701 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3690, ((panda$core$Object*) body3685));
            $tmp3689 = $tmp3701;
            panda$core$String* $tmp3703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3689, &$s3702);
            $tmp3688 = $tmp3703;
            $tmp3687 = $tmp3688;
            $returnValue2567 = $tmp3687;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3687));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3688));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3689));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3690));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3691));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3693));
            $tmp2558 = 49;
            goto $l2556;
            $l3704:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3706, 43);
        panda$core$Bit $tmp3707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3706);
        if ($tmp3707.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3709 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 24));
            target3708 = *$tmp3709;
            panda$collections$ImmutableArray** $tmp3711 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 32));
            methods3710 = *$tmp3711;
            panda$collections$ImmutableArray** $tmp3713 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 40));
            args3712 = *$tmp3713;
            if (((panda$core$Bit) { target3708 != NULL }).value) {
            {
                panda$core$String* $tmp3722 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3721, ((panda$core$Object*) target3708));
                $tmp3720 = $tmp3722;
                panda$core$String* $tmp3724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3720, &$s3723);
                $tmp3719 = $tmp3724;
                panda$core$Int64$init$builtin_int64(&$tmp3726, 0);
                panda$core$Object* $tmp3727 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3710, $tmp3726);
                $tmp3725 = $tmp3727;
                panda$core$String* $tmp3728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3719, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3725)->value)->name);
                $tmp3718 = $tmp3728;
                panda$core$String* $tmp3730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3718, &$s3729);
                $tmp3717 = $tmp3730;
                ITable* $tmp3732 = ((panda$collections$CollectionView*) args3712)->$class->itable;
                while ($tmp3732->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp3732 = $tmp3732->next;
                }
                $fn3734 $tmp3733 = $tmp3732->methods[1];
                panda$core$String* $tmp3735 = $tmp3733(((panda$collections$CollectionView*) args3712));
                $tmp3731 = $tmp3735;
                panda$core$String* $tmp3736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3717, $tmp3731);
                $tmp3716 = $tmp3736;
                panda$core$String* $tmp3738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3716, &$s3737);
                $tmp3715 = $tmp3738;
                $tmp3714 = $tmp3715;
                $returnValue2567 = $tmp3714;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3714));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3715));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3716));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3731));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3717));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3718));
                panda$core$Panda$unref$panda$core$Object($tmp3725);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3719));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3720));
                $tmp2558 = 50;
                goto $l2556;
                $l3739:;
                return $returnValue2567;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3748, 0);
                panda$core$Object* $tmp3749 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3710, $tmp3748);
                $tmp3747 = $tmp3749;
                panda$core$String* $tmp3750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3746, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3747)->value)->name);
                $tmp3745 = $tmp3750;
                panda$core$String* $tmp3752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3745, &$s3751);
                $tmp3744 = $tmp3752;
                ITable* $tmp3754 = ((panda$collections$CollectionView*) args3712)->$class->itable;
                while ($tmp3754->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp3754 = $tmp3754->next;
                }
                $fn3756 $tmp3755 = $tmp3754->methods[1];
                panda$core$String* $tmp3757 = $tmp3755(((panda$collections$CollectionView*) args3712));
                $tmp3753 = $tmp3757;
                panda$core$String* $tmp3758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3744, $tmp3753);
                $tmp3743 = $tmp3758;
                panda$core$String* $tmp3760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3743, &$s3759);
                $tmp3742 = $tmp3760;
                $tmp3741 = $tmp3742;
                $returnValue2567 = $tmp3741;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3741));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3742));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3743));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3753));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3744));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3745));
                panda$core$Panda$unref$panda$core$Object($tmp3747);
                $tmp2558 = 51;
                goto $l2556;
                $l3761:;
                return $returnValue2567;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3763, 44);
        panda$core$Bit $tmp3764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3763);
        if ($tmp3764.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3766 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 16));
            target3765 = *$tmp3766;
            panda$collections$ImmutableArray** $tmp3768 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 24));
            methods3767 = *$tmp3768;
            if (((panda$core$Bit) { target3765 != NULL }).value) {
            {
                panda$core$String* $tmp3775 = (($fn3774) target3765->$class->vtable[0])(target3765);
                $tmp3773 = $tmp3775;
                panda$core$String* $tmp3777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3773, &$s3776);
                $tmp3772 = $tmp3777;
                panda$core$Int64$init$builtin_int64(&$tmp3779, 0);
                panda$core$Object* $tmp3780 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3767, $tmp3779);
                $tmp3778 = $tmp3780;
                panda$core$String* $tmp3781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3772, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3778)->value)->name);
                $tmp3771 = $tmp3781;
                panda$core$String* $tmp3783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3771, &$s3782);
                $tmp3770 = $tmp3783;
                $tmp3769 = $tmp3770;
                $returnValue2567 = $tmp3769;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3769));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3770));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3771));
                panda$core$Panda$unref$panda$core$Object($tmp3778);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3772));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3773));
                $tmp2558 = 52;
                goto $l2556;
                $l3784:;
                return $returnValue2567;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3790, 0);
                panda$core$Object* $tmp3791 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3767, $tmp3790);
                $tmp3789 = $tmp3791;
                panda$core$String* $tmp3792 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3789)->value)->name);
                $tmp3788 = $tmp3792;
                panda$core$String* $tmp3794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3788, &$s3793);
                $tmp3787 = $tmp3794;
                $tmp3786 = $tmp3787;
                $returnValue2567 = $tmp3786;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3786));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3787));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3788));
                panda$core$Panda$unref$panda$core$Object($tmp3789);
                $tmp2558 = 53;
                goto $l2556;
                $l3795:;
                return $returnValue2567;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3797, 45);
        panda$core$Bit $tmp3798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3797);
        if ($tmp3798.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3800 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 16));
            start3799 = *$tmp3800;
            org$pandalanguage$pandac$IRNode** $tmp3802 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 24));
            end3801 = *$tmp3802;
            panda$core$Bit* $tmp3804 = ((panda$core$Bit*) ((char*) $match$682_92559->$data + 32));
            inclusive3803 = *$tmp3804;
            org$pandalanguage$pandac$IRNode** $tmp3806 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 33));
            step3805 = *$tmp3806;
            int $tmp3809;
            {
                panda$core$MutableString* $tmp3813 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3813);
                $tmp3812 = $tmp3813;
                $tmp3811 = $tmp3812;
                result3810 = $tmp3811;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3811));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3812));
                if (((panda$core$Bit) { start3799 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result3810, ((panda$core$Object*) start3799));
                }
                }
                if (inclusive3803.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result3810, &$s3814);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result3810, &$s3815);
                }
                }
                if (((panda$core$Bit) { end3801 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result3810, ((panda$core$Object*) end3801));
                }
                }
                if (((panda$core$Bit) { step3805 != NULL }).value) {
                {
                    panda$core$String* $tmp3819 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3818, ((panda$core$Object*) step3805));
                    $tmp3817 = $tmp3819;
                    panda$core$String* $tmp3821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3817, &$s3820);
                    $tmp3816 = $tmp3821;
                    panda$core$MutableString$append$panda$core$String(result3810, $tmp3816);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3816));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3817));
                }
                }
                panda$core$String* $tmp3824 = panda$core$MutableString$finish$R$panda$core$String(result3810);
                $tmp3823 = $tmp3824;
                $tmp3822 = $tmp3823;
                $returnValue2567 = $tmp3822;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3822));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3823));
                $tmp3809 = 0;
                goto $l3807;
                $l3825:;
                $tmp2558 = 54;
                goto $l2556;
                $l3826:;
                return $returnValue2567;
            }
            $l3807:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3810));
            result3810 = NULL;
            switch ($tmp3809) {
                case 0: goto $l3825;
            }
            $l3828:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3829, 46);
        panda$core$Bit $tmp3830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3829);
        if ($tmp3830.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp3832 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$682_92559->$data + 16));
            kind3831 = *$tmp3832;
            panda$collections$ImmutableArray** $tmp3834 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 24));
            decls3833 = *$tmp3834;
            int $tmp3837;
            {
                panda$core$MutableString* $tmp3841 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3841);
                $tmp3840 = $tmp3841;
                $tmp3839 = $tmp3840;
                result3838 = $tmp3839;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3839));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3840));
                {
                    $match$889_173842 = kind3831;
                    panda$core$Int64$init$builtin_int64(&$tmp3843, 0);
                    panda$core$Bit $tmp3844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173842.$rawValue, $tmp3843);
                    if ($tmp3844.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3838, &$s3845);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3846, 1);
                    panda$core$Bit $tmp3847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173842.$rawValue, $tmp3846);
                    if ($tmp3847.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3838, &$s3848);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3849, 2);
                    panda$core$Bit $tmp3850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173842.$rawValue, $tmp3849);
                    if ($tmp3850.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3838, &$s3851);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3852, 3);
                    panda$core$Bit $tmp3853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173842.$rawValue, $tmp3852);
                    if ($tmp3853.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3838, &$s3854);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp3856 = ((panda$collections$CollectionView*) decls3833)->$class->itable;
                while ($tmp3856->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp3856 = $tmp3856->next;
                }
                $fn3858 $tmp3857 = $tmp3856->methods[1];
                panda$core$String* $tmp3859 = $tmp3857(((panda$collections$CollectionView*) decls3833));
                $tmp3855 = $tmp3859;
                panda$core$MutableString$append$panda$core$String(result3838, $tmp3855);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3855));
                panda$core$String* $tmp3862 = panda$core$MutableString$finish$R$panda$core$String(result3838);
                $tmp3861 = $tmp3862;
                $tmp3860 = $tmp3861;
                $returnValue2567 = $tmp3860;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3860));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3861));
                $tmp3837 = 0;
                goto $l3835;
                $l3863:;
                $tmp2558 = 55;
                goto $l2556;
                $l3864:;
                return $returnValue2567;
            }
            $l3835:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3838));
            result3838 = NULL;
            switch ($tmp3837) {
                case 0: goto $l3863;
            }
            $l3866:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3867, 47);
        panda$core$Bit $tmp3868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3867);
        if ($tmp3868.value) {
        {
            panda$core$String** $tmp3870 = ((panda$core$String**) ((char*) $match$682_92559->$data + 16));
            name3869 = *$tmp3870;
            $tmp3871 = name3869;
            $returnValue2567 = $tmp3871;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3871));
            $tmp2558 = 56;
            goto $l2556;
            $l3872:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3874, 48);
        panda$core$Bit $tmp3875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3874);
        if ($tmp3875.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3877 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$682_92559->$data + 16));
            variable3876 = *$tmp3877;
            panda$core$String* $tmp3881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) variable3876)->name, &$s3880);
            $tmp3879 = $tmp3881;
            $tmp3878 = $tmp3879;
            $returnValue2567 = $tmp3878;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3878));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3879));
            $tmp2558 = 57;
            goto $l2556;
            $l3882:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3884, 49);
        panda$core$Bit $tmp3885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3884);
        if ($tmp3885.value) {
        {
            panda$collections$ImmutableArray** $tmp3887 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 16));
            tests3886 = *$tmp3887;
            panda$collections$ImmutableArray** $tmp3889 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 24));
            statements3888 = *$tmp3889;
            ITable* $tmp3897 = ((panda$collections$CollectionView*) tests3886)->$class->itable;
            while ($tmp3897->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3897 = $tmp3897->next;
            }
            $fn3899 $tmp3898 = $tmp3897->methods[1];
            panda$core$String* $tmp3900 = $tmp3898(((panda$collections$CollectionView*) tests3886));
            $tmp3896 = $tmp3900;
            panda$core$String* $tmp3901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3895, $tmp3896);
            $tmp3894 = $tmp3901;
            panda$core$String* $tmp3903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3894, &$s3902);
            $tmp3893 = $tmp3903;
            ITable* $tmp3906 = ((panda$collections$CollectionView*) statements3888)->$class->itable;
            while ($tmp3906->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3906 = $tmp3906->next;
            }
            $fn3908 $tmp3907 = $tmp3906->methods[2];
            panda$core$String* $tmp3909 = $tmp3907(((panda$collections$CollectionView*) statements3888), &$s3905);
            $tmp3904 = $tmp3909;
            panda$core$String* $tmp3910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3893, $tmp3904);
            $tmp3892 = $tmp3910;
            panda$core$String* $tmp3912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3892, &$s3911);
            $tmp3891 = $tmp3912;
            $tmp3890 = $tmp3891;
            $returnValue2567 = $tmp3890;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3890));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3891));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3892));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3904));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3893));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3894));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3896));
            $tmp2558 = 58;
            goto $l2556;
            $l3913:;
            return $returnValue2567;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3915, 50);
        panda$core$Bit $tmp3916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92559->$rawValue, $tmp3915);
        if ($tmp3916.value) {
        {
            panda$core$String** $tmp3918 = ((panda$core$String**) ((char*) $match$682_92559->$data + 16));
            label3917 = *$tmp3918;
            org$pandalanguage$pandac$IRNode** $tmp3920 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92559->$data + 24));
            test3919 = *$tmp3920;
            panda$collections$ImmutableArray** $tmp3922 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92559->$data + 32));
            statements3921 = *$tmp3922;
            int $tmp3925;
            {
                panda$core$MutableString* $tmp3929 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3929);
                $tmp3928 = $tmp3929;
                $tmp3927 = $tmp3928;
                result3926 = $tmp3927;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3927));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3928));
                if (((panda$core$Bit) { label3917 != NULL }).value) {
                {
                    panda$core$String* $tmp3932 = panda$core$String$convert$R$panda$core$String(label3917);
                    $tmp3931 = $tmp3932;
                    panda$core$String* $tmp3934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3931, &$s3933);
                    $tmp3930 = $tmp3934;
                    panda$core$MutableString$append$panda$core$String(result3926, $tmp3930);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3930));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3931));
                }
                }
                panda$core$String* $tmp3938 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3937, ((panda$core$Object*) test3919));
                $tmp3936 = $tmp3938;
                panda$core$String* $tmp3940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3936, &$s3939);
                $tmp3935 = $tmp3940;
                panda$core$MutableString$append$panda$core$String(result3926, $tmp3935);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3935));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3936));
                {
                    int $tmp3943;
                    {
                        ITable* $tmp3947 = ((panda$collections$Iterable*) statements3921)->$class->itable;
                        while ($tmp3947->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3947 = $tmp3947->next;
                        }
                        $fn3949 $tmp3948 = $tmp3947->methods[0];
                        panda$collections$Iterator* $tmp3950 = $tmp3948(((panda$collections$Iterable*) statements3921));
                        $tmp3946 = $tmp3950;
                        $tmp3945 = $tmp3946;
                        Iter$909$173944 = $tmp3945;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3945));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3946));
                        $l3951:;
                        ITable* $tmp3954 = Iter$909$173944->$class->itable;
                        while ($tmp3954->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3954 = $tmp3954->next;
                        }
                        $fn3956 $tmp3955 = $tmp3954->methods[0];
                        panda$core$Bit $tmp3957 = $tmp3955(Iter$909$173944);
                        panda$core$Bit $tmp3958 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3957);
                        bool $tmp3953 = $tmp3958.value;
                        if (!$tmp3953) goto $l3952;
                        {
                            int $tmp3961;
                            {
                                ITable* $tmp3965 = Iter$909$173944->$class->itable;
                                while ($tmp3965->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3965 = $tmp3965->next;
                                }
                                $fn3967 $tmp3966 = $tmp3965->methods[1];
                                panda$core$Object* $tmp3968 = $tmp3966(Iter$909$173944);
                                $tmp3964 = $tmp3968;
                                $tmp3963 = ((org$pandalanguage$pandac$IRNode*) $tmp3964);
                                s3962 = $tmp3963;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3963));
                                panda$core$Panda$unref$panda$core$Object($tmp3964);
                                panda$core$String* $tmp3971 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3962), &$s3970);
                                $tmp3969 = $tmp3971;
                                panda$core$MutableString$append$panda$core$String(result3926, $tmp3969);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3969));
                            }
                            $tmp3961 = -1;
                            goto $l3959;
                            $l3959:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3962));
                            s3962 = NULL;
                            switch ($tmp3961) {
                                case -1: goto $l3972;
                            }
                            $l3972:;
                        }
                        goto $l3951;
                        $l3952:;
                    }
                    $tmp3943 = -1;
                    goto $l3941;
                    $l3941:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$909$173944));
                    Iter$909$173944 = NULL;
                    switch ($tmp3943) {
                        case -1: goto $l3973;
                    }
                    $l3973:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3975, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3974, $tmp3975);
                panda$core$MutableString$append$panda$core$Char8(result3926, $tmp3974);
                panda$core$String* $tmp3978 = panda$core$MutableString$finish$R$panda$core$String(result3926);
                $tmp3977 = $tmp3978;
                $tmp3976 = $tmp3977;
                $returnValue2567 = $tmp3976;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3976));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3977));
                $tmp3925 = 0;
                goto $l3923;
                $l3979:;
                $tmp2558 = 59;
                goto $l2556;
                $l3980:;
                return $returnValue2567;
            }
            $l3923:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3926));
            result3926 = NULL;
            switch ($tmp3925) {
                case 0: goto $l3979;
            }
            $l3982:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp3983, false);
            if ($tmp3983.value) goto $l3984; else goto $l3985;
            $l3985:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3986, (panda$core$Int64) { 915 });
            abort();
            $l3984:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp2558 = -1;
    goto $l2556;
    $l2556:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2560));
    switch ($tmp2558) {
        case -1: goto $l3987;
        case 46: goto $l3647;
        case 23: goto $l3121;
        case 5: goto $l2686;
        case 27: goto $l3225;
        case 16: goto $l2940;
        case 12: goto $l2876;
        case 22: goto $l3118;
        case 37: goto $l3540;
        case 26: goto $l3212;
        case 56: goto $l3872;
        case 50: goto $l3739;
        case 3: goto $l2624;
        case 40: goto $l3583;
        case 25: goto $l3199;
        case 55: goto $l3864;
        case 0: goto $l2580;
        case 9: goto $l2818;
        case 8: goto $l2794;
        case 52: goto $l3784;
        case 18: goto $l2985;
        case 59: goto $l3980;
        case 49: goto $l3704;
        case 57: goto $l3882;
        case 13: goto $l2910;
        case 30: goto $l3403;
        case 17: goto $l2968;
        case 29: goto $l3382;
        case 44: goto $l3611;
        case 11: goto $l2847;
        case 38: goto $l3544;
        case 2: goto $l2595;
        case 33: goto $l3424;
        case 34: goto $l3443;
        case 53: goto $l3795;
        case 39: goto $l3561;
        case 58: goto $l3913;
        case 48: goto $l3679;
        case 14: goto $l2923;
        case 42: goto $l3595;
        case 54: goto $l3826;
        case 41: goto $l3589;
        case 20: goto $l3078;
        case 1: goto $l2589;
        case 21: goto $l3098;
        case 45: goto $l3638;
        case 10: goto $l2838;
        case 19: goto $l3051;
        case 51: goto $l3761;
        case 28: goto $l3285;
        case 15: goto $l2936;
        case 6: goto $l2776;
        case 7: goto $l2790;
        case 32: goto $l3418;
        case 4: goto $l2633;
        case 35: goto $l3517;
        case 36: goto $l3527;
        case 24: goto $l3189;
        case 47: goto $l3654;
        case 43: goto $l3605;
        case 31: goto $l3406;
    }
    $l3987:;
    abort();
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_13994 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3995;
    panda$core$Int64 $tmp3996;
    org$pandalanguage$pandac$Position _f03998;
    org$pandalanguage$pandac$IRNode* _f14000 = NULL;
    org$pandalanguage$pandac$IRNode* _f24002 = NULL;
    panda$core$Int64 $tmp4004;
    org$pandalanguage$pandac$Position _f04006;
    org$pandalanguage$pandac$Type* _f14008 = NULL;
    panda$core$Int64 $tmp4010;
    org$pandalanguage$pandac$Position _f04012;
    org$pandalanguage$pandac$Type* _f14014 = NULL;
    org$pandalanguage$pandac$IRNode* _f24016 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f34018;
    org$pandalanguage$pandac$IRNode* _f44020 = NULL;
    panda$core$Int64 $tmp4022;
    org$pandalanguage$pandac$Position _f04024;
    org$pandalanguage$pandac$Type* _f14026 = NULL;
    panda$core$Bit _f24028;
    panda$core$Int64 $tmp4030;
    org$pandalanguage$pandac$Position _f04032;
    panda$collections$ImmutableArray* _f14034 = NULL;
    panda$core$Int64 $tmp4036;
    org$pandalanguage$pandac$Position _f04038;
    panda$collections$ImmutableArray* _f14040 = NULL;
    panda$collections$ImmutableArray* _f24042 = NULL;
    panda$core$Int64 $tmp4044;
    org$pandalanguage$pandac$Position _f04046;
    panda$core$String* _f14048 = NULL;
    panda$core$Int64 $tmp4050;
    org$pandalanguage$pandac$Position _f04052;
    org$pandalanguage$pandac$Type* _f14054 = NULL;
    org$pandalanguage$pandac$MethodRef* _f24056 = NULL;
    panda$collections$ImmutableArray* _f34058 = NULL;
    panda$core$Int64 $tmp4060;
    org$pandalanguage$pandac$Position _f04062;
    org$pandalanguage$pandac$IRNode* _f14064 = NULL;
    org$pandalanguage$pandac$Type* _f24066 = NULL;
    panda$core$Bit _f34068;
    panda$core$Int64 $tmp4070;
    org$pandalanguage$pandac$Position _f04072;
    org$pandalanguage$pandac$ChoiceEntry* _f14074 = NULL;
    panda$core$Int64 $tmp4076;
    org$pandalanguage$pandac$Position _f04078;
    org$pandalanguage$pandac$IRNode* _f14080 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f24082 = NULL;
    panda$core$Int64 _f34084;
    panda$core$Int64 $tmp4086;
    org$pandalanguage$pandac$Position _f04088;
    org$pandalanguage$pandac$Type* _f14090 = NULL;
    org$pandalanguage$pandac$IRNode* _f24092 = NULL;
    panda$core$Int64 $tmp4094;
    org$pandalanguage$pandac$Position _f04096;
    org$pandalanguage$pandac$Type* _f14098 = NULL;
    panda$core$Int64 $tmp4100;
    org$pandalanguage$pandac$Position _f04102;
    panda$core$String* _f14104 = NULL;
    panda$core$Int64 $tmp4106;
    org$pandalanguage$pandac$IRNode* _f04108 = NULL;
    org$pandalanguage$pandac$IRNode* _f14110 = NULL;
    panda$core$Int64 $tmp4112;
    org$pandalanguage$pandac$Position _f04114;
    panda$core$String* _f14116 = NULL;
    panda$collections$ImmutableArray* _f24118 = NULL;
    org$pandalanguage$pandac$IRNode* _f34120 = NULL;
    panda$core$Int64 $tmp4122;
    org$pandalanguage$pandac$IRNode* _f04124 = NULL;
    panda$collections$ImmutableArray* _f14126 = NULL;
    panda$core$Int64 $tmp4128;
    org$pandalanguage$pandac$IRNode* _f04130 = NULL;
    org$pandalanguage$pandac$IRNode* _f14132 = NULL;
    panda$core$Int64 $tmp4134;
    org$pandalanguage$pandac$Position _f04136;
    org$pandalanguage$pandac$Type* _f14138 = NULL;
    org$pandalanguage$pandac$IRNode* _f24140 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f34142 = NULL;
    panda$core$Int64 $tmp4144;
    org$pandalanguage$pandac$Position _f04146;
    org$pandalanguage$pandac$IRNode* _f14148 = NULL;
    panda$collections$ImmutableArray* _f24150 = NULL;
    org$pandalanguage$pandac$IRNode* _f34152 = NULL;
    panda$core$Int64 $tmp4154;
    org$pandalanguage$pandac$Position _f04156;
    org$pandalanguage$pandac$Type* _f14158 = NULL;
    panda$core$UInt64 _f24160;
    panda$core$Int64 $tmp4162;
    org$pandalanguage$pandac$Position _f04164;
    org$pandalanguage$pandac$IRNode* _f14166 = NULL;
    panda$core$Int64 $tmp4168;
    org$pandalanguage$pandac$Position _f04170;
    org$pandalanguage$pandac$IRNode* _f14172 = NULL;
    panda$core$Int64 $tmp4174;
    org$pandalanguage$pandac$Position _f04176;
    panda$core$String* _f14178 = NULL;
    panda$collections$ImmutableArray* _f24180 = NULL;
    panda$core$Int64 $tmp4182;
    org$pandalanguage$pandac$Position _f04184;
    org$pandalanguage$pandac$IRNode* _f14186 = NULL;
    panda$collections$ImmutableArray* _f24188 = NULL;
    panda$collections$ImmutableArray* _f34190 = NULL;
    panda$core$Int64 $tmp4192;
    org$pandalanguage$pandac$Position _f04194;
    org$pandalanguage$pandac$Type* _f14196 = NULL;
    org$pandalanguage$pandac$IRNode* _f24198 = NULL;
    org$pandalanguage$pandac$MethodRef* _f34200 = NULL;
    panda$core$Int64 $tmp4202;
    org$pandalanguage$pandac$Position _f04204;
    org$pandalanguage$pandac$Type* _f14206 = NULL;
    panda$core$UInt64 _f24208;
    panda$core$Int64 $tmp4210;
    org$pandalanguage$pandac$Position _f04212;
    org$pandalanguage$pandac$Type* _f14214 = NULL;
    panda$core$Int64 $tmp4216;
    org$pandalanguage$pandac$Position _f04218;
    org$pandalanguage$pandac$parser$Token$Kind _f14220;
    org$pandalanguage$pandac$IRNode* _f24222 = NULL;
    panda$core$Int64 $tmp4224;
    org$pandalanguage$pandac$Position _f04226;
    panda$core$String* _f14228 = NULL;
    org$pandalanguage$pandac$IRNode* _f24230 = NULL;
    org$pandalanguage$pandac$IRNode* _f34232 = NULL;
    panda$collections$ImmutableArray* _f44234 = NULL;
    panda$core$Int64 $tmp4236;
    org$pandalanguage$pandac$Position _f04238;
    org$pandalanguage$pandac$Type* _f14240 = NULL;
    panda$core$Real64 _f24242;
    panda$core$Int64 $tmp4244;
    org$pandalanguage$pandac$Position _f04246;
    org$pandalanguage$pandac$IRNode* _f14248 = NULL;
    panda$core$Int64 $tmp4250;
    org$pandalanguage$pandac$Position _f04252;
    org$pandalanguage$pandac$Type* _f14254 = NULL;
    panda$core$Int64 _f24256;
    panda$core$Int64 $tmp4258;
    org$pandalanguage$pandac$IRNode* _f04260 = NULL;
    panda$core$Int64 _f14262;
    panda$core$Int64 $tmp4264;
    org$pandalanguage$pandac$Position _f04266;
    org$pandalanguage$pandac$Type* _f14268 = NULL;
    panda$core$Int64 $tmp4270;
    org$pandalanguage$pandac$Position _f04272;
    org$pandalanguage$pandac$Type* _f14274 = NULL;
    panda$core$Int64 $tmp4276;
    org$pandalanguage$pandac$Position _f04278;
    panda$core$String* _f14280 = NULL;
    panda$core$Int64 $tmp4282;
    org$pandalanguage$pandac$Position _f04284;
    org$pandalanguage$pandac$Type* _f14286 = NULL;
    panda$core$Int64 $tmp4288;
    org$pandalanguage$pandac$Position _f04290;
    org$pandalanguage$pandac$IRNode* _f14292 = NULL;
    org$pandalanguage$pandac$IRNode* _f24294 = NULL;
    org$pandalanguage$pandac$IRNode* _f34296 = NULL;
    panda$core$Int64 $tmp4298;
    org$pandalanguage$pandac$Position _f04300;
    org$pandalanguage$pandac$Type* _f14302 = NULL;
    panda$core$Int64 $tmp4304;
    org$pandalanguage$pandac$Position _f04306;
    panda$core$String* _f14308 = NULL;
    panda$core$Int64 $tmp4310;
    org$pandalanguage$pandac$Position _f04312;
    org$pandalanguage$pandac$Type* _f14314 = NULL;
    org$pandalanguage$pandac$IRNode* _f24316 = NULL;
    panda$collections$ImmutableArray* _f34318 = NULL;
    panda$core$Int64 $tmp4320;
    org$pandalanguage$pandac$Position _f04322;
    panda$collections$ImmutableArray* _f14324 = NULL;
    org$pandalanguage$pandac$ASTNode* _f24326 = NULL;
    panda$core$Int64 $tmp4328;
    org$pandalanguage$pandac$Position _f04330;
    org$pandalanguage$pandac$Type* _f14332 = NULL;
    org$pandalanguage$pandac$IRNode* _f24334 = NULL;
    panda$collections$ImmutableArray* _f34336 = NULL;
    panda$collections$ImmutableArray* _f44338 = NULL;
    panda$core$Int64 $tmp4340;
    org$pandalanguage$pandac$Position _f04342;
    org$pandalanguage$pandac$IRNode* _f14344 = NULL;
    panda$collections$ImmutableArray* _f24346 = NULL;
    panda$core$Int64 $tmp4348;
    org$pandalanguage$pandac$Position _f04350;
    org$pandalanguage$pandac$IRNode* _f14352 = NULL;
    org$pandalanguage$pandac$IRNode* _f24354 = NULL;
    panda$core$Bit _f34356;
    org$pandalanguage$pandac$IRNode* _f44358 = NULL;
    panda$core$Int64 $tmp4360;
    org$pandalanguage$pandac$Position _f04362;
    org$pandalanguage$pandac$Variable$Kind _f14364;
    panda$collections$ImmutableArray* _f24366 = NULL;
    panda$core$Int64 $tmp4368;
    org$pandalanguage$pandac$Position _f04370;
    panda$core$String* _f14372 = NULL;
    org$pandalanguage$pandac$Type* _f24374 = NULL;
    panda$core$Int64 $tmp4376;
    org$pandalanguage$pandac$Position _f04378;
    org$pandalanguage$pandac$Variable* _f14380 = NULL;
    panda$core$Int64 $tmp4382;
    org$pandalanguage$pandac$Position _f04384;
    panda$collections$ImmutableArray* _f14386 = NULL;
    panda$collections$ImmutableArray* _f24388 = NULL;
    panda$core$Int64 $tmp4390;
    org$pandalanguage$pandac$Position _f04392;
    panda$core$String* _f14394 = NULL;
    org$pandalanguage$pandac$IRNode* _f24396 = NULL;
    panda$collections$ImmutableArray* _f34398 = NULL;
    int $tmp3990;
    {
        int $tmp3993;
        {
            $tmp3995 = self;
            $match$5_13994 = $tmp3995;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3995));
            panda$core$Int64$init$builtin_int64(&$tmp3996, 0);
            panda$core$Bit $tmp3997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp3996);
            if ($tmp3997.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3999 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f03998 = *$tmp3999;
                org$pandalanguage$pandac$IRNode** $tmp4001 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 16));
                _f14000 = *$tmp4001;
                org$pandalanguage$pandac$IRNode** $tmp4003 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 24));
                _f24002 = *$tmp4003;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14000));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24002));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4004, 1);
            panda$core$Bit $tmp4005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4004);
            if ($tmp4005.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4007 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04006 = *$tmp4007;
                org$pandalanguage$pandac$Type** $tmp4009 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14008 = *$tmp4009;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14008));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4010, 2);
            panda$core$Bit $tmp4011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4010);
            if ($tmp4011.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4013 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04012 = *$tmp4013;
                org$pandalanguage$pandac$Type** $tmp4015 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14014 = *$tmp4015;
                org$pandalanguage$pandac$IRNode** $tmp4017 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 24));
                _f24016 = *$tmp4017;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp4019 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_13994->$data + 32));
                _f34018 = *$tmp4019;
                org$pandalanguage$pandac$IRNode** $tmp4021 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 40));
                _f44020 = *$tmp4021;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14014));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24016));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44020));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4022, 3);
            panda$core$Bit $tmp4023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4022);
            if ($tmp4023.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4025 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04024 = *$tmp4025;
                org$pandalanguage$pandac$Type** $tmp4027 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14026 = *$tmp4027;
                panda$core$Bit* $tmp4029 = ((panda$core$Bit*) ((char*) $match$5_13994->$data + 24));
                _f24028 = *$tmp4029;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14026));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4030, 4);
            panda$core$Bit $tmp4031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4030);
            if ($tmp4031.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4033 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04032 = *$tmp4033;
                panda$collections$ImmutableArray** $tmp4035 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 16));
                _f14034 = *$tmp4035;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14034));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4036, 5);
            panda$core$Bit $tmp4037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4036);
            if ($tmp4037.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4039 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04038 = *$tmp4039;
                panda$collections$ImmutableArray** $tmp4041 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 16));
                _f14040 = *$tmp4041;
                panda$collections$ImmutableArray** $tmp4043 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 24));
                _f24042 = *$tmp4043;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14040));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24042));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4044, 6);
            panda$core$Bit $tmp4045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4044);
            if ($tmp4045.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4047 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04046 = *$tmp4047;
                panda$core$String** $tmp4049 = ((panda$core$String**) ((char*) $match$5_13994->$data + 16));
                _f14048 = *$tmp4049;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14048));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4050, 7);
            panda$core$Bit $tmp4051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4050);
            if ($tmp4051.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4053 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04052 = *$tmp4053;
                org$pandalanguage$pandac$Type** $tmp4055 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14054 = *$tmp4055;
                org$pandalanguage$pandac$MethodRef** $tmp4057 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_13994->$data + 24));
                _f24056 = *$tmp4057;
                panda$collections$ImmutableArray** $tmp4059 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 32));
                _f34058 = *$tmp4059;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14054));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24056));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34058));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4060, 8);
            panda$core$Bit $tmp4061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4060);
            if ($tmp4061.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4063 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04062 = *$tmp4063;
                org$pandalanguage$pandac$IRNode** $tmp4065 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 16));
                _f14064 = *$tmp4065;
                org$pandalanguage$pandac$Type** $tmp4067 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 24));
                _f24066 = *$tmp4067;
                panda$core$Bit* $tmp4069 = ((panda$core$Bit*) ((char*) $match$5_13994->$data + 32));
                _f34068 = *$tmp4069;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14064));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24066));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4070, 9);
            panda$core$Bit $tmp4071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4070);
            if ($tmp4071.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4073 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04072 = *$tmp4073;
                org$pandalanguage$pandac$ChoiceEntry** $tmp4075 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_13994->$data + 16));
                _f14074 = *$tmp4075;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14074));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4076, 10);
            panda$core$Bit $tmp4077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4076);
            if ($tmp4077.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4079 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04078 = *$tmp4079;
                org$pandalanguage$pandac$IRNode** $tmp4081 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 16));
                _f14080 = *$tmp4081;
                org$pandalanguage$pandac$ChoiceEntry** $tmp4083 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_13994->$data + 24));
                _f24082 = *$tmp4083;
                panda$core$Int64* $tmp4085 = ((panda$core$Int64*) ((char*) $match$5_13994->$data + 32));
                _f34084 = *$tmp4085;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14080));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24082));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4086, 11);
            panda$core$Bit $tmp4087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4086);
            if ($tmp4087.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4089 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04088 = *$tmp4089;
                org$pandalanguage$pandac$Type** $tmp4091 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14090 = *$tmp4091;
                org$pandalanguage$pandac$IRNode** $tmp4093 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 24));
                _f24092 = *$tmp4093;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14090));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24092));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4094, 12);
            panda$core$Bit $tmp4095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4094);
            if ($tmp4095.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4097 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04096 = *$tmp4097;
                org$pandalanguage$pandac$Type** $tmp4099 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14098 = *$tmp4099;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14098));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4100, 13);
            panda$core$Bit $tmp4101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4100);
            if ($tmp4101.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4103 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04102 = *$tmp4103;
                panda$core$String** $tmp4105 = ((panda$core$String**) ((char*) $match$5_13994->$data + 16));
                _f14104 = *$tmp4105;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14104));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4106, 14);
            panda$core$Bit $tmp4107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4106);
            if ($tmp4107.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4109 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 0));
                _f04108 = *$tmp4109;
                org$pandalanguage$pandac$IRNode** $tmp4111 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 8));
                _f14110 = *$tmp4111;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04108));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14110));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4112, 15);
            panda$core$Bit $tmp4113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4112);
            if ($tmp4113.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4115 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04114 = *$tmp4115;
                panda$core$String** $tmp4117 = ((panda$core$String**) ((char*) $match$5_13994->$data + 16));
                _f14116 = *$tmp4117;
                panda$collections$ImmutableArray** $tmp4119 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 24));
                _f24118 = *$tmp4119;
                org$pandalanguage$pandac$IRNode** $tmp4121 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 32));
                _f34120 = *$tmp4121;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14116));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24118));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34120));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4122, 16);
            panda$core$Bit $tmp4123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4122);
            if ($tmp4123.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4125 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 0));
                _f04124 = *$tmp4125;
                panda$collections$ImmutableArray** $tmp4127 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 8));
                _f14126 = *$tmp4127;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04124));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14126));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4128, 17);
            panda$core$Bit $tmp4129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4128);
            if ($tmp4129.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4131 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 0));
                _f04130 = *$tmp4131;
                org$pandalanguage$pandac$IRNode** $tmp4133 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 8));
                _f14132 = *$tmp4133;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04130));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14132));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4134, 18);
            panda$core$Bit $tmp4135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4134);
            if ($tmp4135.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4137 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04136 = *$tmp4137;
                org$pandalanguage$pandac$Type** $tmp4139 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14138 = *$tmp4139;
                org$pandalanguage$pandac$IRNode** $tmp4141 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 24));
                _f24140 = *$tmp4141;
                org$pandalanguage$pandac$FieldDecl** $tmp4143 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_13994->$data + 32));
                _f34142 = *$tmp4143;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14138));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24140));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34142));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4144, 19);
            panda$core$Bit $tmp4145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4144);
            if ($tmp4145.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4147 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04146 = *$tmp4147;
                org$pandalanguage$pandac$IRNode** $tmp4149 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 16));
                _f14148 = *$tmp4149;
                panda$collections$ImmutableArray** $tmp4151 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 24));
                _f24150 = *$tmp4151;
                org$pandalanguage$pandac$IRNode** $tmp4153 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 32));
                _f34152 = *$tmp4153;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14148));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24150));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34152));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4154, 20);
            panda$core$Bit $tmp4155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4154);
            if ($tmp4155.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4157 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04156 = *$tmp4157;
                org$pandalanguage$pandac$Type** $tmp4159 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14158 = *$tmp4159;
                panda$core$UInt64* $tmp4161 = ((panda$core$UInt64*) ((char*) $match$5_13994->$data + 24));
                _f24160 = *$tmp4161;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14158));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4162, 21);
            panda$core$Bit $tmp4163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4162);
            if ($tmp4163.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4165 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04164 = *$tmp4165;
                org$pandalanguage$pandac$IRNode** $tmp4167 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 16));
                _f14166 = *$tmp4167;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14166));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4168, 22);
            panda$core$Bit $tmp4169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4168);
            if ($tmp4169.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04170 = *$tmp4171;
                org$pandalanguage$pandac$IRNode** $tmp4173 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 16));
                _f14172 = *$tmp4173;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14172));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4174, 23);
            panda$core$Bit $tmp4175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4174);
            if ($tmp4175.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4177 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04176 = *$tmp4177;
                panda$core$String** $tmp4179 = ((panda$core$String**) ((char*) $match$5_13994->$data + 16));
                _f14178 = *$tmp4179;
                panda$collections$ImmutableArray** $tmp4181 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 24));
                _f24180 = *$tmp4181;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24180));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4182, 24);
            panda$core$Bit $tmp4183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4182);
            if ($tmp4183.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4185 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04184 = *$tmp4185;
                org$pandalanguage$pandac$IRNode** $tmp4187 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 16));
                _f14186 = *$tmp4187;
                panda$collections$ImmutableArray** $tmp4189 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 24));
                _f24188 = *$tmp4189;
                panda$collections$ImmutableArray** $tmp4191 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 32));
                _f34190 = *$tmp4191;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14186));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24188));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34190));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4192, 25);
            panda$core$Bit $tmp4193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4192);
            if ($tmp4193.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4195 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04194 = *$tmp4195;
                org$pandalanguage$pandac$Type** $tmp4197 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14196 = *$tmp4197;
                org$pandalanguage$pandac$IRNode** $tmp4199 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 24));
                _f24198 = *$tmp4199;
                org$pandalanguage$pandac$MethodRef** $tmp4201 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_13994->$data + 32));
                _f34200 = *$tmp4201;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14196));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24198));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34200));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4202, 26);
            panda$core$Bit $tmp4203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4202);
            if ($tmp4203.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4205 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04204 = *$tmp4205;
                org$pandalanguage$pandac$Type** $tmp4207 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14206 = *$tmp4207;
                panda$core$UInt64* $tmp4209 = ((panda$core$UInt64*) ((char*) $match$5_13994->$data + 24));
                _f24208 = *$tmp4209;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14206));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4210, 27);
            panda$core$Bit $tmp4211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4210);
            if ($tmp4211.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4213 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04212 = *$tmp4213;
                org$pandalanguage$pandac$Type** $tmp4215 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14214 = *$tmp4215;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14214));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4216, 28);
            panda$core$Bit $tmp4217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4216);
            if ($tmp4217.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4219 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04218 = *$tmp4219;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp4221 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_13994->$data + 16));
                _f14220 = *$tmp4221;
                org$pandalanguage$pandac$IRNode** $tmp4223 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 24));
                _f24222 = *$tmp4223;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24222));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4224, 29);
            panda$core$Bit $tmp4225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4224);
            if ($tmp4225.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4227 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04226 = *$tmp4227;
                panda$core$String** $tmp4229 = ((panda$core$String**) ((char*) $match$5_13994->$data + 16));
                _f14228 = *$tmp4229;
                org$pandalanguage$pandac$IRNode** $tmp4231 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 24));
                _f24230 = *$tmp4231;
                org$pandalanguage$pandac$IRNode** $tmp4233 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 32));
                _f34232 = *$tmp4233;
                panda$collections$ImmutableArray** $tmp4235 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 40));
                _f44234 = *$tmp4235;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14228));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24230));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34232));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44234));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4236, 30);
            panda$core$Bit $tmp4237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4236);
            if ($tmp4237.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4239 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04238 = *$tmp4239;
                org$pandalanguage$pandac$Type** $tmp4241 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14240 = *$tmp4241;
                panda$core$Real64* $tmp4243 = ((panda$core$Real64*) ((char*) $match$5_13994->$data + 24));
                _f24242 = *$tmp4243;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14240));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4244, 31);
            panda$core$Bit $tmp4245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4244);
            if ($tmp4245.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4247 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04246 = *$tmp4247;
                org$pandalanguage$pandac$IRNode** $tmp4249 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 16));
                _f14248 = *$tmp4249;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14248));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4250, 32);
            panda$core$Bit $tmp4251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4250);
            if ($tmp4251.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4253 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04252 = *$tmp4253;
                org$pandalanguage$pandac$Type** $tmp4255 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14254 = *$tmp4255;
                panda$core$Int64* $tmp4257 = ((panda$core$Int64*) ((char*) $match$5_13994->$data + 24));
                _f24256 = *$tmp4257;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14254));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4258, 33);
            panda$core$Bit $tmp4259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4258);
            if ($tmp4259.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4261 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 0));
                _f04260 = *$tmp4261;
                panda$core$Int64* $tmp4263 = ((panda$core$Int64*) ((char*) $match$5_13994->$data + 8));
                _f14262 = *$tmp4263;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04260));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4264, 34);
            panda$core$Bit $tmp4265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4264);
            if ($tmp4265.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4267 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04266 = *$tmp4267;
                org$pandalanguage$pandac$Type** $tmp4269 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14268 = *$tmp4269;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14268));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4270, 35);
            panda$core$Bit $tmp4271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4270);
            if ($tmp4271.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4273 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04272 = *$tmp4273;
                org$pandalanguage$pandac$Type** $tmp4275 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14274 = *$tmp4275;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14274));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4276, 36);
            panda$core$Bit $tmp4277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4276);
            if ($tmp4277.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4279 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04278 = *$tmp4279;
                panda$core$String** $tmp4281 = ((panda$core$String**) ((char*) $match$5_13994->$data + 16));
                _f14280 = *$tmp4281;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14280));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4282, 37);
            panda$core$Bit $tmp4283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4282);
            if ($tmp4283.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4285 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04284 = *$tmp4285;
                org$pandalanguage$pandac$Type** $tmp4287 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14286 = *$tmp4287;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14286));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4288, 38);
            panda$core$Bit $tmp4289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4288);
            if ($tmp4289.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4291 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04290 = *$tmp4291;
                org$pandalanguage$pandac$IRNode** $tmp4293 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 16));
                _f14292 = *$tmp4293;
                org$pandalanguage$pandac$IRNode** $tmp4295 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 24));
                _f24294 = *$tmp4295;
                org$pandalanguage$pandac$IRNode** $tmp4297 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 32));
                _f34296 = *$tmp4297;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14292));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24294));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34296));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4298, 39);
            panda$core$Bit $tmp4299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4298);
            if ($tmp4299.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4301 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04300 = *$tmp4301;
                org$pandalanguage$pandac$Type** $tmp4303 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14302 = *$tmp4303;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14302));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4304, 40);
            panda$core$Bit $tmp4305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4304);
            if ($tmp4305.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4307 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04306 = *$tmp4307;
                panda$core$String** $tmp4309 = ((panda$core$String**) ((char*) $match$5_13994->$data + 16));
                _f14308 = *$tmp4309;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14308));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4310, 41);
            panda$core$Bit $tmp4311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4310);
            if ($tmp4311.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4313 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04312 = *$tmp4313;
                org$pandalanguage$pandac$Type** $tmp4315 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14314 = *$tmp4315;
                org$pandalanguage$pandac$IRNode** $tmp4317 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 24));
                _f24316 = *$tmp4317;
                panda$collections$ImmutableArray** $tmp4319 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 32));
                _f34318 = *$tmp4319;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14314));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24316));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34318));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4320, 42);
            panda$core$Bit $tmp4321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4320);
            if ($tmp4321.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4323 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04322 = *$tmp4323;
                panda$collections$ImmutableArray** $tmp4325 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 16));
                _f14324 = *$tmp4325;
                org$pandalanguage$pandac$ASTNode** $tmp4327 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_13994->$data + 24));
                _f24326 = *$tmp4327;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14324));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24326));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4328, 43);
            panda$core$Bit $tmp4329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4328);
            if ($tmp4329.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4331 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04330 = *$tmp4331;
                org$pandalanguage$pandac$Type** $tmp4333 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 16));
                _f14332 = *$tmp4333;
                org$pandalanguage$pandac$IRNode** $tmp4335 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 24));
                _f24334 = *$tmp4335;
                panda$collections$ImmutableArray** $tmp4337 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 32));
                _f34336 = *$tmp4337;
                panda$collections$ImmutableArray** $tmp4339 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 40));
                _f44338 = *$tmp4339;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14332));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24334));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34336));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44338));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4340, 44);
            panda$core$Bit $tmp4341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4340);
            if ($tmp4341.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4343 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04342 = *$tmp4343;
                org$pandalanguage$pandac$IRNode** $tmp4345 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 16));
                _f14344 = *$tmp4345;
                panda$collections$ImmutableArray** $tmp4347 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 24));
                _f24346 = *$tmp4347;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14344));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24346));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4348, 45);
            panda$core$Bit $tmp4349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4348);
            if ($tmp4349.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4351 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04350 = *$tmp4351;
                org$pandalanguage$pandac$IRNode** $tmp4353 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 16));
                _f14352 = *$tmp4353;
                org$pandalanguage$pandac$IRNode** $tmp4355 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 24));
                _f24354 = *$tmp4355;
                panda$core$Bit* $tmp4357 = ((panda$core$Bit*) ((char*) $match$5_13994->$data + 32));
                _f34356 = *$tmp4357;
                org$pandalanguage$pandac$IRNode** $tmp4359 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 33));
                _f44358 = *$tmp4359;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14352));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24354));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44358));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4360, 46);
            panda$core$Bit $tmp4361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4360);
            if ($tmp4361.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4363 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04362 = *$tmp4363;
                org$pandalanguage$pandac$Variable$Kind* $tmp4365 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_13994->$data + 16));
                _f14364 = *$tmp4365;
                panda$collections$ImmutableArray** $tmp4367 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 24));
                _f24366 = *$tmp4367;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24366));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4368, 47);
            panda$core$Bit $tmp4369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4368);
            if ($tmp4369.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4371 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04370 = *$tmp4371;
                panda$core$String** $tmp4373 = ((panda$core$String**) ((char*) $match$5_13994->$data + 16));
                _f14372 = *$tmp4373;
                org$pandalanguage$pandac$Type** $tmp4375 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13994->$data + 24));
                _f24374 = *$tmp4375;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14372));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24374));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4376, 48);
            panda$core$Bit $tmp4377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4376);
            if ($tmp4377.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4379 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04378 = *$tmp4379;
                org$pandalanguage$pandac$Variable** $tmp4381 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_13994->$data + 16));
                _f14380 = *$tmp4381;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14380));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4382, 49);
            panda$core$Bit $tmp4383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4382);
            if ($tmp4383.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4385 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04384 = *$tmp4385;
                panda$collections$ImmutableArray** $tmp4387 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 16));
                _f14386 = *$tmp4387;
                panda$collections$ImmutableArray** $tmp4389 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 24));
                _f24388 = *$tmp4389;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14386));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24388));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4390, 50);
            panda$core$Bit $tmp4391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13994->$rawValue, $tmp4390);
            if ($tmp4391.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4393 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13994->$data + 0));
                _f04392 = *$tmp4393;
                panda$core$String** $tmp4395 = ((panda$core$String**) ((char*) $match$5_13994->$data + 16));
                _f14394 = *$tmp4395;
                org$pandalanguage$pandac$IRNode** $tmp4397 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13994->$data + 24));
                _f24396 = *$tmp4397;
                panda$collections$ImmutableArray** $tmp4399 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13994->$data + 32));
                _f34398 = *$tmp4399;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14394));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24396));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34398));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp3993 = -1;
        goto $l3991;
        $l3991:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3995));
        switch ($tmp3993) {
            case -1: goto $l4400;
        }
        $l4400:;
    }
    $tmp3990 = -1;
    goto $l3988;
    $l3988:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp3990) {
        case -1: goto $l4401;
    }
    $l4401:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp4403;
    org$pandalanguage$pandac$IRNode* $tmp4406;
    org$pandalanguage$pandac$IRNode* $tmp4407;
    org$pandalanguage$pandac$IRNode* $tmp4410;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4402 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4402 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4404 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4403 = *$tmp4404;
        org$pandalanguage$pandac$IRNode** $tmp4405 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4406 = p_f1;
        *$tmp4405 = $tmp4406;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4406));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4403));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4408 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4407 = *$tmp4408;
        org$pandalanguage$pandac$IRNode** $tmp4409 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4410 = p_f2;
        *$tmp4409 = $tmp4410;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4410));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4407));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp4412;
    org$pandalanguage$pandac$Type* $tmp4415;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4411 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4411 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4413 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4412 = *$tmp4413;
        org$pandalanguage$pandac$Type** $tmp4414 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4415 = p_f1;
        *$tmp4414 = $tmp4415;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4415));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4412));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp4417;
    org$pandalanguage$pandac$Type* $tmp4420;
    org$pandalanguage$pandac$IRNode* $tmp4421;
    org$pandalanguage$pandac$IRNode* $tmp4424;
    org$pandalanguage$pandac$IRNode* $tmp4426;
    org$pandalanguage$pandac$IRNode* $tmp4429;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4416 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4416 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4418 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4417 = *$tmp4418;
        org$pandalanguage$pandac$Type** $tmp4419 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4420 = p_f1;
        *$tmp4419 = $tmp4420;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4420));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4417));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4422 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4421 = *$tmp4422;
        org$pandalanguage$pandac$IRNode** $tmp4423 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4424 = p_f2;
        *$tmp4423 = $tmp4424;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4424));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4421));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp4425 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp4425 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp4427 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp4426 = *$tmp4427;
        org$pandalanguage$pandac$IRNode** $tmp4428 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp4429 = p_f4;
        *$tmp4428 = $tmp4429;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4429));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4426));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp4431;
    org$pandalanguage$pandac$Type* $tmp4434;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4430 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4430 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4432 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4431 = *$tmp4432;
        org$pandalanguage$pandac$Type** $tmp4433 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4434 = p_f1;
        *$tmp4433 = $tmp4434;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4434));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4431));
    }
    panda$core$Bit* $tmp4435 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp4435 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp4437;
    panda$collections$ImmutableArray* $tmp4440;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4436 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4436 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp4438 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4437 = *$tmp4438;
        panda$collections$ImmutableArray** $tmp4439 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4440 = p_f1;
        *$tmp4439 = $tmp4440;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4440));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4437));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp4442;
    panda$collections$ImmutableArray* $tmp4445;
    panda$collections$ImmutableArray* $tmp4446;
    panda$collections$ImmutableArray* $tmp4449;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4441 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4441 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp4443 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4442 = *$tmp4443;
        panda$collections$ImmutableArray** $tmp4444 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4445 = p_f1;
        *$tmp4444 = $tmp4445;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4445));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4442));
    }
    {
        panda$collections$ImmutableArray** $tmp4447 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4446 = *$tmp4447;
        panda$collections$ImmutableArray** $tmp4448 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4449 = p_f2;
        *$tmp4448 = $tmp4449;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4449));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4446));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp4451;
    panda$core$String* $tmp4454;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4450 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4450 = p_f0;
    {
        panda$core$String** $tmp4452 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4451 = *$tmp4452;
        panda$core$String** $tmp4453 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4454 = p_f1;
        *$tmp4453 = $tmp4454;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4454));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4451));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp4456;
    org$pandalanguage$pandac$Type* $tmp4459;
    org$pandalanguage$pandac$MethodRef* $tmp4460;
    org$pandalanguage$pandac$MethodRef* $tmp4463;
    panda$collections$ImmutableArray* $tmp4464;
    panda$collections$ImmutableArray* $tmp4467;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4455 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4455 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4457 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4456 = *$tmp4457;
        org$pandalanguage$pandac$Type** $tmp4458 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4459 = p_f1;
        *$tmp4458 = $tmp4459;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4459));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4456));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp4461 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp4460 = *$tmp4461;
        org$pandalanguage$pandac$MethodRef** $tmp4462 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp4463 = p_f2;
        *$tmp4462 = $tmp4463;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4463));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4460));
    }
    {
        panda$collections$ImmutableArray** $tmp4465 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4464 = *$tmp4465;
        panda$collections$ImmutableArray** $tmp4466 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4467 = p_f3;
        *$tmp4466 = $tmp4467;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4467));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4464));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4469;
    org$pandalanguage$pandac$IRNode* $tmp4472;
    org$pandalanguage$pandac$Type* $tmp4473;
    org$pandalanguage$pandac$Type* $tmp4476;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4468 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4468 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4470 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4469 = *$tmp4470;
        org$pandalanguage$pandac$IRNode** $tmp4471 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4472 = p_f1;
        *$tmp4471 = $tmp4472;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4472));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4469));
    }
    {
        org$pandalanguage$pandac$Type** $tmp4474 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp4473 = *$tmp4474;
        org$pandalanguage$pandac$Type** $tmp4475 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp4476 = p_f2;
        *$tmp4475 = $tmp4476;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4476));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4473));
    }
    panda$core$Bit* $tmp4477 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp4477 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    org$pandalanguage$pandac$ChoiceEntry* $tmp4479;
    org$pandalanguage$pandac$ChoiceEntry* $tmp4482;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4478 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4478 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp4480 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp4479 = *$tmp4480;
        org$pandalanguage$pandac$ChoiceEntry** $tmp4481 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp4482 = p_f1;
        *$tmp4481 = $tmp4482;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4482));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4479));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4484;
    org$pandalanguage$pandac$IRNode* $tmp4487;
    org$pandalanguage$pandac$ChoiceEntry* $tmp4488;
    org$pandalanguage$pandac$ChoiceEntry* $tmp4491;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4483 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4483 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4485 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4484 = *$tmp4485;
        org$pandalanguage$pandac$IRNode** $tmp4486 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4487 = p_f1;
        *$tmp4486 = $tmp4487;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4487));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4484));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp4489 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp4488 = *$tmp4489;
        org$pandalanguage$pandac$ChoiceEntry** $tmp4490 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp4491 = p_f2;
        *$tmp4490 = $tmp4491;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4491));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4488));
    }
    panda$core$Int64* $tmp4492 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp4492 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp4494;
    org$pandalanguage$pandac$Type* $tmp4497;
    org$pandalanguage$pandac$IRNode* $tmp4498;
    org$pandalanguage$pandac$IRNode* $tmp4501;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4493 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4493 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4495 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4494 = *$tmp4495;
        org$pandalanguage$pandac$Type** $tmp4496 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4497 = p_f1;
        *$tmp4496 = $tmp4497;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4494));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4499 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4498 = *$tmp4499;
        org$pandalanguage$pandac$IRNode** $tmp4500 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4501 = p_f2;
        *$tmp4500 = $tmp4501;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4501));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4498));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4502;
    org$pandalanguage$pandac$IRNode* $tmp4505;
    org$pandalanguage$pandac$IRNode* $tmp4506;
    org$pandalanguage$pandac$IRNode* $tmp4509;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4503 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4502 = *$tmp4503;
        org$pandalanguage$pandac$IRNode** $tmp4504 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4505 = p_f0;
        *$tmp4504 = $tmp4505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4502));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4507 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4506 = *$tmp4507;
        org$pandalanguage$pandac$IRNode** $tmp4508 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4509 = p_f1;
        *$tmp4508 = $tmp4509;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4509));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4506));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp4511;
    panda$core$String* $tmp4514;
    panda$collections$ImmutableArray* $tmp4515;
    panda$collections$ImmutableArray* $tmp4518;
    org$pandalanguage$pandac$IRNode* $tmp4519;
    org$pandalanguage$pandac$IRNode* $tmp4522;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4510 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4510 = p_f0;
    {
        panda$core$String** $tmp4512 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4511 = *$tmp4512;
        panda$core$String** $tmp4513 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4514 = p_f1;
        *$tmp4513 = $tmp4514;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4514));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4511));
    }
    {
        panda$collections$ImmutableArray** $tmp4516 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4515 = *$tmp4516;
        panda$collections$ImmutableArray** $tmp4517 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4518 = p_f2;
        *$tmp4517 = $tmp4518;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4518));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4515));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4520 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4519 = *$tmp4520;
        org$pandalanguage$pandac$IRNode** $tmp4521 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4522 = p_f3;
        *$tmp4521 = $tmp4522;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4522));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4519));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$collections$ImmutableArray* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4523;
    org$pandalanguage$pandac$IRNode* $tmp4526;
    panda$collections$ImmutableArray* $tmp4527;
    panda$collections$ImmutableArray* $tmp4530;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4524 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4523 = *$tmp4524;
        org$pandalanguage$pandac$IRNode** $tmp4525 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4526 = p_f0;
        *$tmp4525 = $tmp4526;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4526));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4523));
    }
    {
        panda$collections$ImmutableArray** $tmp4528 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp4527 = *$tmp4528;
        panda$collections$ImmutableArray** $tmp4529 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp4530 = p_f1;
        *$tmp4529 = $tmp4530;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4530));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4527));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4531;
    org$pandalanguage$pandac$IRNode* $tmp4534;
    org$pandalanguage$pandac$IRNode* $tmp4535;
    org$pandalanguage$pandac$IRNode* $tmp4538;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4532 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4531 = *$tmp4532;
        org$pandalanguage$pandac$IRNode** $tmp4533 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4534 = p_f0;
        *$tmp4533 = $tmp4534;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4534));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4531));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4536 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4535 = *$tmp4536;
        org$pandalanguage$pandac$IRNode** $tmp4537 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4538 = p_f1;
        *$tmp4537 = $tmp4538;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4538));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4535));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp4540;
    org$pandalanguage$pandac$Type* $tmp4543;
    org$pandalanguage$pandac$IRNode* $tmp4544;
    org$pandalanguage$pandac$IRNode* $tmp4547;
    org$pandalanguage$pandac$FieldDecl* $tmp4548;
    org$pandalanguage$pandac$FieldDecl* $tmp4551;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4539 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4539 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4541 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4540 = *$tmp4541;
        org$pandalanguage$pandac$Type** $tmp4542 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4543 = p_f1;
        *$tmp4542 = $tmp4543;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4540));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4545 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4544 = *$tmp4545;
        org$pandalanguage$pandac$IRNode** $tmp4546 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4547 = p_f2;
        *$tmp4546 = $tmp4547;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4544));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp4549 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp4548 = *$tmp4549;
        org$pandalanguage$pandac$FieldDecl** $tmp4550 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp4551 = p_f3;
        *$tmp4550 = $tmp4551;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4551));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4548));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4553;
    org$pandalanguage$pandac$IRNode* $tmp4556;
    panda$collections$ImmutableArray* $tmp4557;
    panda$collections$ImmutableArray* $tmp4560;
    org$pandalanguage$pandac$IRNode* $tmp4561;
    org$pandalanguage$pandac$IRNode* $tmp4564;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4552 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4552 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4554 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4553 = *$tmp4554;
        org$pandalanguage$pandac$IRNode** $tmp4555 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4556 = p_f1;
        *$tmp4555 = $tmp4556;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4556));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4553));
    }
    {
        panda$collections$ImmutableArray** $tmp4558 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4557 = *$tmp4558;
        panda$collections$ImmutableArray** $tmp4559 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4560 = p_f2;
        *$tmp4559 = $tmp4560;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4560));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4557));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4562 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4561 = *$tmp4562;
        org$pandalanguage$pandac$IRNode** $tmp4563 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4564 = p_f3;
        *$tmp4563 = $tmp4564;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4564));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4561));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp4566;
    org$pandalanguage$pandac$Type* $tmp4569;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4565 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4565 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4567 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4566 = *$tmp4567;
        org$pandalanguage$pandac$Type** $tmp4568 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4569 = p_f1;
        *$tmp4568 = $tmp4569;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4569));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4566));
    }
    panda$core$UInt64* $tmp4570 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp4570 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4572;
    org$pandalanguage$pandac$IRNode* $tmp4575;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4571 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4571 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4573 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4572 = *$tmp4573;
        org$pandalanguage$pandac$IRNode** $tmp4574 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4575 = p_f1;
        *$tmp4574 = $tmp4575;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4575));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4572));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp4577;
    panda$core$String* $tmp4580;
    panda$collections$ImmutableArray* $tmp4581;
    panda$collections$ImmutableArray* $tmp4584;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4576 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4576 = p_f0;
    {
        panda$core$String** $tmp4578 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4577 = *$tmp4578;
        panda$core$String** $tmp4579 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4580 = p_f1;
        *$tmp4579 = $tmp4580;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4580));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4577));
    }
    {
        panda$collections$ImmutableArray** $tmp4582 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4581 = *$tmp4582;
        panda$collections$ImmutableArray** $tmp4583 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4584 = p_f2;
        *$tmp4583 = $tmp4584;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4584));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4581));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4586;
    org$pandalanguage$pandac$IRNode* $tmp4589;
    panda$collections$ImmutableArray* $tmp4590;
    panda$collections$ImmutableArray* $tmp4593;
    panda$collections$ImmutableArray* $tmp4594;
    panda$collections$ImmutableArray* $tmp4597;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4585 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4585 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4587 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4586 = *$tmp4587;
        org$pandalanguage$pandac$IRNode** $tmp4588 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4589 = p_f1;
        *$tmp4588 = $tmp4589;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4589));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4586));
    }
    {
        panda$collections$ImmutableArray** $tmp4591 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4590 = *$tmp4591;
        panda$collections$ImmutableArray** $tmp4592 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4593 = p_f2;
        *$tmp4592 = $tmp4593;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4593));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4590));
    }
    {
        panda$collections$ImmutableArray** $tmp4595 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4594 = *$tmp4595;
        panda$collections$ImmutableArray** $tmp4596 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4597 = p_f3;
        *$tmp4596 = $tmp4597;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4597));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4594));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$MethodRef* p_f3) {
    org$pandalanguage$pandac$Type* $tmp4599;
    org$pandalanguage$pandac$Type* $tmp4602;
    org$pandalanguage$pandac$IRNode* $tmp4603;
    org$pandalanguage$pandac$IRNode* $tmp4606;
    org$pandalanguage$pandac$MethodRef* $tmp4607;
    org$pandalanguage$pandac$MethodRef* $tmp4610;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4598 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4598 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4600 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4599 = *$tmp4600;
        org$pandalanguage$pandac$Type** $tmp4601 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4602 = p_f1;
        *$tmp4601 = $tmp4602;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4602));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4599));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4604 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4603 = *$tmp4604;
        org$pandalanguage$pandac$IRNode** $tmp4605 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4606 = p_f2;
        *$tmp4605 = $tmp4606;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4606));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4603));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp4608 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp4607 = *$tmp4608;
        org$pandalanguage$pandac$MethodRef** $tmp4609 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp4610 = p_f3;
        *$tmp4609 = $tmp4610;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4610));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4607));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp4613;
    org$pandalanguage$pandac$IRNode* $tmp4616;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4611 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4611 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp4612 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp4612 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp4614 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4613 = *$tmp4614;
        org$pandalanguage$pandac$IRNode** $tmp4615 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4616 = p_f2;
        *$tmp4615 = $tmp4616;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4616));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4613));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp4618;
    panda$core$String* $tmp4621;
    org$pandalanguage$pandac$IRNode* $tmp4622;
    org$pandalanguage$pandac$IRNode* $tmp4625;
    org$pandalanguage$pandac$IRNode* $tmp4626;
    org$pandalanguage$pandac$IRNode* $tmp4629;
    panda$collections$ImmutableArray* $tmp4630;
    panda$collections$ImmutableArray* $tmp4633;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4617 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4617 = p_f0;
    {
        panda$core$String** $tmp4619 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4618 = *$tmp4619;
        panda$core$String** $tmp4620 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4621 = p_f1;
        *$tmp4620 = $tmp4621;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4621));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4618));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4623 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4622 = *$tmp4623;
        org$pandalanguage$pandac$IRNode** $tmp4624 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4625 = p_f2;
        *$tmp4624 = $tmp4625;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4625));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4622));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4627 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4626 = *$tmp4627;
        org$pandalanguage$pandac$IRNode** $tmp4628 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4629 = p_f3;
        *$tmp4628 = $tmp4629;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4629));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4626));
    }
    {
        panda$collections$ImmutableArray** $tmp4631 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4630 = *$tmp4631;
        panda$collections$ImmutableArray** $tmp4632 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4633 = p_f4;
        *$tmp4632 = $tmp4633;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4633));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4630));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp4635;
    org$pandalanguage$pandac$Type* $tmp4638;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4634 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4634 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4636 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4635 = *$tmp4636;
        org$pandalanguage$pandac$Type** $tmp4637 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4638 = p_f1;
        *$tmp4637 = $tmp4638;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4638));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4635));
    }
    panda$core$Real64* $tmp4639 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp4639 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4641;
    org$pandalanguage$pandac$IRNode* $tmp4644;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4640 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4640 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4642 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4641 = *$tmp4642;
        org$pandalanguage$pandac$IRNode** $tmp4643 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4644 = p_f1;
        *$tmp4643 = $tmp4644;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4644));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4641));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp4646;
    org$pandalanguage$pandac$Type* $tmp4649;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4645 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4645 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4647 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4646 = *$tmp4647;
        org$pandalanguage$pandac$Type** $tmp4648 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4649 = p_f1;
        *$tmp4648 = $tmp4649;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4649));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4646));
    }
    panda$core$Int64* $tmp4650 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp4650 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4651;
    org$pandalanguage$pandac$IRNode* $tmp4654;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4652 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4651 = *$tmp4652;
        org$pandalanguage$pandac$IRNode** $tmp4653 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4654 = p_f0;
        *$tmp4653 = $tmp4654;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4654));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4651));
    }
    panda$core$Int64* $tmp4655 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp4655 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp4657;
    panda$core$String* $tmp4660;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4656 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4656 = p_f0;
    {
        panda$core$String** $tmp4658 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4657 = *$tmp4658;
        panda$core$String** $tmp4659 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4660 = p_f1;
        *$tmp4659 = $tmp4660;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4660));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4657));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4662;
    org$pandalanguage$pandac$IRNode* $tmp4665;
    org$pandalanguage$pandac$IRNode* $tmp4666;
    org$pandalanguage$pandac$IRNode* $tmp4669;
    org$pandalanguage$pandac$IRNode* $tmp4670;
    org$pandalanguage$pandac$IRNode* $tmp4673;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4661 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4661 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4663 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4662 = *$tmp4663;
        org$pandalanguage$pandac$IRNode** $tmp4664 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4665 = p_f1;
        *$tmp4664 = $tmp4665;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4665));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4662));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4667 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4666 = *$tmp4667;
        org$pandalanguage$pandac$IRNode** $tmp4668 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4669 = p_f2;
        *$tmp4668 = $tmp4669;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4669));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4666));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4671 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4670 = *$tmp4671;
        org$pandalanguage$pandac$IRNode** $tmp4672 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4673 = p_f3;
        *$tmp4672 = $tmp4673;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4673));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4670));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp4675;
    org$pandalanguage$pandac$Type* $tmp4678;
    org$pandalanguage$pandac$IRNode* $tmp4679;
    org$pandalanguage$pandac$IRNode* $tmp4682;
    panda$collections$ImmutableArray* $tmp4683;
    panda$collections$ImmutableArray* $tmp4686;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4674 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4674 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4676 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4675 = *$tmp4676;
        org$pandalanguage$pandac$Type** $tmp4677 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4678 = p_f1;
        *$tmp4677 = $tmp4678;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4678));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4675));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4680 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4679 = *$tmp4680;
        org$pandalanguage$pandac$IRNode** $tmp4681 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4682 = p_f2;
        *$tmp4681 = $tmp4682;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4682));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4679));
    }
    {
        panda$collections$ImmutableArray** $tmp4684 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4683 = *$tmp4684;
        panda$collections$ImmutableArray** $tmp4685 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4686 = p_f3;
        *$tmp4685 = $tmp4686;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4686));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4683));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTpanda$core$String$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp4688;
    panda$collections$ImmutableArray* $tmp4691;
    org$pandalanguage$pandac$ASTNode* $tmp4692;
    org$pandalanguage$pandac$ASTNode* $tmp4695;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4687 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4687 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp4689 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4688 = *$tmp4689;
        panda$collections$ImmutableArray** $tmp4690 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4691 = p_f1;
        *$tmp4690 = $tmp4691;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4691));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4688));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp4693 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp4692 = *$tmp4693;
        org$pandalanguage$pandac$ASTNode** $tmp4694 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp4695 = p_f2;
        *$tmp4694 = $tmp4695;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4695));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4692));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp4697;
    org$pandalanguage$pandac$Type* $tmp4700;
    org$pandalanguage$pandac$IRNode* $tmp4701;
    org$pandalanguage$pandac$IRNode* $tmp4704;
    panda$collections$ImmutableArray* $tmp4705;
    panda$collections$ImmutableArray* $tmp4708;
    panda$collections$ImmutableArray* $tmp4709;
    panda$collections$ImmutableArray* $tmp4712;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4696 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4696 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4698 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4697 = *$tmp4698;
        org$pandalanguage$pandac$Type** $tmp4699 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4700 = p_f1;
        *$tmp4699 = $tmp4700;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4700));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4697));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4702 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4701 = *$tmp4702;
        org$pandalanguage$pandac$IRNode** $tmp4703 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4704 = p_f2;
        *$tmp4703 = $tmp4704;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4704));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4701));
    }
    {
        panda$collections$ImmutableArray** $tmp4706 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4705 = *$tmp4706;
        panda$collections$ImmutableArray** $tmp4707 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4708 = p_f3;
        *$tmp4707 = $tmp4708;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4708));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4705));
    }
    {
        panda$collections$ImmutableArray** $tmp4710 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4709 = *$tmp4710;
        panda$collections$ImmutableArray** $tmp4711 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4712 = p_f4;
        *$tmp4711 = $tmp4712;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4712));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4709));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp4714;
    org$pandalanguage$pandac$IRNode* $tmp4717;
    panda$collections$ImmutableArray* $tmp4718;
    panda$collections$ImmutableArray* $tmp4721;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4713 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4713 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4715 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4714 = *$tmp4715;
        org$pandalanguage$pandac$IRNode** $tmp4716 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4717 = p_f1;
        *$tmp4716 = $tmp4717;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4717));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4714));
    }
    {
        panda$collections$ImmutableArray** $tmp4719 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4718 = *$tmp4719;
        panda$collections$ImmutableArray** $tmp4720 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4721 = p_f2;
        *$tmp4720 = $tmp4721;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4721));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4718));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp4723;
    org$pandalanguage$pandac$IRNode* $tmp4726;
    org$pandalanguage$pandac$IRNode* $tmp4727;
    org$pandalanguage$pandac$IRNode* $tmp4730;
    org$pandalanguage$pandac$IRNode* $tmp4732;
    org$pandalanguage$pandac$IRNode* $tmp4735;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4722 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4722 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4724 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4723 = *$tmp4724;
        org$pandalanguage$pandac$IRNode** $tmp4725 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4726 = p_f1;
        *$tmp4725 = $tmp4726;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4726));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4723));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4728 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4727 = *$tmp4728;
        org$pandalanguage$pandac$IRNode** $tmp4729 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4730 = p_f2;
        *$tmp4729 = $tmp4730;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4730));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4727));
    }
    panda$core$Bit* $tmp4731 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp4731 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp4733 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp4732 = *$tmp4733;
        org$pandalanguage$pandac$IRNode** $tmp4734 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp4735 = p_f4;
        *$tmp4734 = $tmp4735;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4735));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4732));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp4738;
    panda$collections$ImmutableArray* $tmp4741;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4736 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4736 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp4737 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp4737 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp4739 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4738 = *$tmp4739;
        panda$collections$ImmutableArray** $tmp4740 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4741 = p_f2;
        *$tmp4740 = $tmp4741;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4741));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4738));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$Type* p_f2) {
    panda$core$String* $tmp4743;
    panda$core$String* $tmp4746;
    org$pandalanguage$pandac$Type* $tmp4747;
    org$pandalanguage$pandac$Type* $tmp4750;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4742 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4742 = p_f0;
    {
        panda$core$String** $tmp4744 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4743 = *$tmp4744;
        panda$core$String** $tmp4745 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4746 = p_f1;
        *$tmp4745 = $tmp4746;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4746));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4743));
    }
    {
        org$pandalanguage$pandac$Type** $tmp4748 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp4747 = *$tmp4748;
        org$pandalanguage$pandac$Type** $tmp4749 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp4750 = p_f2;
        *$tmp4749 = $tmp4750;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4750));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4747));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp4752;
    org$pandalanguage$pandac$Variable* $tmp4755;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4751 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4751 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp4753 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp4752 = *$tmp4753;
        org$pandalanguage$pandac$Variable** $tmp4754 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp4755 = p_f1;
        *$tmp4754 = $tmp4755;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4755));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4752));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp4757;
    panda$core$String* $tmp4760;
    org$pandalanguage$pandac$IRNode* $tmp4761;
    org$pandalanguage$pandac$IRNode* $tmp4764;
    panda$collections$ImmutableArray* $tmp4765;
    panda$collections$ImmutableArray* $tmp4768;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4756 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4756 = p_f0;
    {
        panda$core$String** $tmp4758 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4757 = *$tmp4758;
        panda$core$String** $tmp4759 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4760 = p_f1;
        *$tmp4759 = $tmp4760;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4760));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4757));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4762 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4761 = *$tmp4762;
        org$pandalanguage$pandac$IRNode** $tmp4763 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4764 = p_f2;
        *$tmp4763 = $tmp4764;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4764));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4761));
    }
    {
        panda$collections$ImmutableArray** $tmp4766 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4765 = *$tmp4766;
        panda$collections$ImmutableArray** $tmp4767 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4768 = p_f3;
        *$tmp4767 = $tmp4768;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4768));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4765));
    }
}

